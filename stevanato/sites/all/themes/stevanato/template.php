<?php

/**
 * Implements template_preprocess_node.
 */
function stevanato_preprocess_page(&$vars) {
  $vars['show_title'] = TRUE;

  if (!empty(arg(0)) && empty(arg(1))) {
    if (in_array(arg(0), array('events', 'news'))) {
      $long = 'bean_' . arg(0) . '-block-banner';
      $short = arg(0) . '-block-banner';

      if (!empty($vars['page']['help'][$long]['bean'][$short]['field_exclude_title_from_display']['#items'][0]['value']) 
        && $vars['page']['help'][$long]['bean'][$short]['field_exclude_title_from_display']['#items'][0]['value']) {
        $vars['show_title'] = FALSE;
      }
    }
  }

  if (!empty($vars['node']) && $vars['node']->type != 'event') {
    $vars['show_title'] = FALSE;
  }

  // Show/hide quote button.
  if (!empty($vars['node']) 
      && (empty($vars['node']->field_display_quote_button[LANGUAGE_NONE][0]['value'])
      || (!empty($vars['node']->field_display_quote_button[LANGUAGE_NONE][0]['value']) && !$vars['node']->field_display_quote_button[LANGUAGE_NONE][0]['value']))) {
    unset($vars['page']['content']['bean_quote-button']['bean']);
  }
  else if (!empty(arg(0)) && empty(arg(1))) {
    $long = 'bean_' . arg(0) . '-block-banner';
    $short = arg(0) . '-block-banner';

    if (empty($vars['page']['help'][$long]['bean'][$short]['field_display_quote_button']['#items'][0]['value'])
      || (!empty($vars['page']['help'][$long]['bean'][$short]['field_display_quote_button']['#items'][0]['value']) && !$vars['page']['help'][$long]['bean'][$short]['field_display_quote_button']['#items'][0]['value'])) {
      unset($vars['page']['content']['bean_quote-button']['bean']);
    }
  }
}

/**
 * Implements template_preprocess_node.
 */
function stevanato_preprocess_node(&$vars) {
  // Page title.

  $title = '<div class="node-info">';
  $title .= '<h1>' . $vars['title'] . '</h1>';
  $title .= '</div>';

  if (!empty($vars['content']['field_banner_section'][0])) {
    $pid = $vars['content']['field_banner_section']['#items'][0]['value'];
    $vars['content']['field_banner_section'][0]['entity']['paragraphs_item'][$pid]['#suffix'] = $title;
  }

  if (!empty($vars['content']['field_sections'][0]) && empty($vars['content']['field_banner_section'][0])) {
    $pid = $vars['content']['field_sections']['#items'][0]['value'];

    if ($vars['content']['field_sections'][0]['entity']['paragraphs_item'][$pid]['#bundle'] == 'banner_section') {
      $vars['content']['field_sections'][0]['entity']['paragraphs_item'][$pid]['#suffix'] = $title;
    }
    else {
      $vars['content']['field_sections'][0]['entity']['paragraphs_item'][$pid]['#prefix'] = $title;
    }
  }

  // Tabs for multitabs content type.
  if (in_array($vars['node']->type, array('multitabs', 'popup')) ) {
    $section_tabs = ($vars['node']->type == 'multitabs') ? 'field_sections' : 'field_tabs';

    if (!empty($vars['content'][$section_tabs])) {
      $tab_titles = array();
      foreach ($vars['content'][$section_tabs]['#items'] as $key => $value) {
        $pid = $value['value'];
        $tab_titles[] = empty($vars['content'][$section_tabs][$key]['entity']['paragraphs_item'][$pid]['field_title'][0]['#markup']) ? '' : $vars['content'][$section_tabs][$key]['entity']['paragraphs_item'][$pid]['field_title'][0]['#markup'];
        unset($vars['content'][$section_tabs][$key]['entity']['paragraphs_item'][$pid]['field_title']);
      }

      $list = '<ul class="m-tabs">';
      foreach ($tab_titles as $key => $tab_title) {
        $list .= '<li><a id="tab-' . ($key + 1) .'" href="#c-tab-' . ($key + 1) . '">' . $tab_title . '</a></li>';
      }
      $list .= '</ul>';
      
      $pid = $vars['content']['field_banner_section']['#items'][0]['value'];
      unset($vars['content']['field_banner_section'][0]['entity']['paragraphs_item'][$pid]['#suffix']);
      $vars['content'][$section_tabs]['#prefix'] = $title . $list;


      foreach ($vars['content'][$section_tabs]['#items'] as $key => $value) {
        $pid = $value['value'];
        $vars['content'][$section_tabs][$key]['entity']['paragraphs_item'][$pid]['#prefix'] = '<div id="c-tab-' . ($key + 1) . '">';
        $vars['content'][$section_tabs][$key]['entity']['paragraphs_item'][$pid]['#suffix'] = '</div>';
      }
    } 
  }
}

/**
 * Implements hook_css_alter.
 */
function stevanato_css_alter(&$css) {
  if (!user_is_logged_in()) {
    $styles = '';

    foreach ($css as $path => $data) {
      if (!is_numeric($path)) {
        $styles .= file_get_contents($path, TRUE);
        unset($css[$path]);
      }
    }

    $css[] = array(
      'type' => 'inline',
      'data' => $styles,
      'group' => 0,
      'weight' => 1,
      'media' => 'all',
      'every_page' => TRUE,
      'preprocess' => TRUE,
      'browsers' => array(
        'IE' => TRUE,
        '!IE' => TRUE
      )
    );
  }
}

/**
 * Implements hook_preprocess_entity().
 */
function stevanato_preprocess_entity(&$vars) {
  // Add IDs to paragraphs wrappers.
  if ($vars['entity_type'] == 'paragraphs_item' && !empty($mgo = menu_get_object())) {
    $node_type = str_replace('_', '-', $mgo->type);
    $vars['attributes_array']['id'] = 'section-' . $node_type . '-' . $vars['id'];
  }
}
