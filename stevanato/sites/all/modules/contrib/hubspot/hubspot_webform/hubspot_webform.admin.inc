<?php
/**
 * @file
 * Provides admin settings page to adjust form submission settings.
 */

/**
 * Form constructor for the Hubspot settings form.
 *
 * @param $form
 * @param $form_state
 * @param object $node
 *   The node using Hubspot.
 *
 * @return array
 */
function hubspot_webform_form_settings($form, $form_state, $node) {
  $form = array();

  $hubspot_forms = _hubspot_webform_get_forms();

  if (isset($hubspot_forms['error'])) {
    $form['webforms']['#description'] = $hubspot_forms['error'];
  }
  else {
    if (empty($hubspot_forms['value'])) {
      $form['webforms']['#description'] = t('No HubSpot forms found. You will need to create a form on HubSpot before you can configure it here.');
    }
    else {
      $hubspot_form_options = array("--donotmap--" => "Do Not Map");
      $hubspot_field_options = array();
      foreach ($hubspot_forms['value'] as $hubspot_form) {
        $hubspot_form_options[$hubspot_form['guid']] = $hubspot_form['name'];
        $hubspot_field_options[$hubspot_form['guid']]['fields']['--donotmap--'] = "Do Not Map";

        foreach ($hubspot_form['fields'] as $hubspot_field) {
          $hubspot_field_options[$hubspot_form['guid']]['fields'][$hubspot_field['name']] = ($hubspot_field['label'] ? $hubspot_field['label'] : $hubspot_field['name']) . ' (' . $hubspot_field['fieldType'] . ')';
        }
      }

      $nid = $node->nid;

      $form['nid'] = array(
        '#type' => 'hidden',
        '#value' => $nid,
      );

      $form['hubspot_form'] = array(
        '#title' => t('HubSpot form'),
        '#type' => 'select',
        '#options' => $hubspot_form_options,
        '#default_value' => _hubspot_webform_default_value($nid),
      );

      foreach ($hubspot_form_options as $key => $value) {
        if ($key != '--donotmap--') {
          $form[$key] = array(
            '#title' => t('Field mappings for @field', array('field' => $value)),
            '#type' => 'fieldset',
            '#tree' => TRUE,
            '#states' => array(
              'visible' => array(
                ':input[name="hubspot_form"]' => array('value' => $key),
              ),
            ),
          );

          foreach ($node->webform['components'] as $component) {
            if ($component['type'] == 'addressfield' && module_exists('addressfield_tokens')) {
              $addressfield_fields = addressfield_tokens_components();

              foreach ($addressfield_fields as $addressfield_key => $addressfield_value) {
                $form[$key][$component['form_key'] . '_' . $addressfield_key] = array(
                  '#title' => $component['name'] . ': ' . $addressfield_value . ' (' . $component['type'] . ')',
                  '#type' => 'select',
                  '#options' => $hubspot_field_options[$key]['fields'],
                  '#default_value' => _hubspot_webform_default_value($nid, $key, $component['form_key'] . '_' . $addressfield_key),
                );
              }
            }
            elseif ($component['type'] !== 'markup') {
              $form[$key][$component['form_key']] = array(
                '#title' => $component['name'] . ' (' . $component['type'] . ')',
                '#type' => 'select',
                '#options' => $hubspot_field_options[$key]['fields'],
                '#default_value' => _hubspot_webform_default_value($nid, $key, $component['form_key']),
              );
            }
          }
        }
      }
    }
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => ('Save Configuration'),
  );

  return $form;
}

/**
 * Submit handler for hubspot_webform_form_settings form.
 */
function hubspot_webform_form_settings_submit($form, &$form_state) {
  $txn = db_transaction();

  db_delete('hubspot')->condition('nid', $form_state['values']['nid'])->execute();

  if ($form_state['values']['hubspot_form'] != '--donotmap--') {
    foreach ($form_state['values'][$form_state['values']['hubspot_form']] as $webform_field => $hubspot_field) {
      $fields = array(
        'nid' => $form_state['values']['nid'],
        'hubspot_guid' => $form_state['values']['hubspot_form'],
        'webform_field' => $webform_field,
        'hubspot_field' => $hubspot_field,
      );
      db_insert('hubspot')->fields($fields)->execute();
    }
  }

  drupal_set_message(t('The configuration options have been saved.'));
}

/**
 * Hubspot webform admin settings.
 */
function _hubspot_webform_admin_settings(&$form) {
  $form['webforms'] = array(
    '#title' => t('Webforms'),
    '#type' => 'fieldset',
    '#collapsible' => TRUE,
    '#group' => 'additional_settings',
    '#description' => 'The following webforms have been detected and can be configured to submit to the HubSpot API.',
    '#tree' => TRUE,
  );

  $webform_nodes = variable_get('webform_node_types', array('webform'));
  $nodes = array();

  $hubspot_forms = _hubspot_webform_get_forms();

  if (isset($hubspot_forms['error'])) {
    $form['webforms']['#description'] = $hubspot_forms['error'];
  }
  else {
    if (empty($hubspot_forms['value'])) {
      $form['webforms']['#description'] = t('No HubSpot forms found. You will need to create a form on HubSpot before you can configure it here.');
    }
    else {
      $hubspot_form_options = array("--donotmap--" => "Do Not Map");
      $hubspot_field_options = array();
      foreach ($hubspot_forms['value'] as $hubspot_form) {
        $hubspot_form_options[$hubspot_form['guid']] = $hubspot_form['name'];
        $hubspot_field_options[$hubspot_form['guid']]['fields']['--donotmap--'] = "Do Not Map";
        foreach ($hubspot_form['fields'] as $hubspot_field) {
          $hubspot_field_options[$hubspot_form['guid']]['fields'][$hubspot_field['name']] = $hubspot_field['label'] . ' (' . $hubspot_field['fieldType'] . ')';
        }
      }

      foreach ($webform_nodes as $node_type) {
        $query = new EntityFieldQuery();

        $query->entityCondition('entity_type', 'node')
          ->entityCondition('bundle', $node_type)
          ->propertyCondition('status', 1);

        $result = $query->execute();

        if (isset($result['node'])) {
          $node_ids = array_keys($result['node']);
          $nodes = array_merge($nodes, entity_load('node', $node_ids));
        }
      }

      foreach ($nodes as $node) {
        $nid = $node->nid;
        $form['webforms']['nid-' . $nid] = array(
          '#title' => $node->title,
          '#type' => 'fieldset',
        );

        $form['webforms']['nid-' . $nid]['hubspot_form'] = array(
          '#title' => t('HubSpot form'),
          '#type' => 'select',
          '#options' => $hubspot_form_options,
          '#default_value' => _hubspot_webform_default_value($nid),
        );

        foreach ($hubspot_form_options as $key => $value) {
          if ($key != '--donotmap--') {
            $form['webforms']['nid-' . $nid][$key] = array(
              '#title' => t('Field mappings for @field', array('@field' => $value)),
              '#type' => 'fieldset',
              '#states' => array(
                'visible' => array(
                  ':input[name="webforms[nid-' . $nid . '][hubspot_form]"]' => array('value' => $key),
                ),
              ),
            );

            foreach ($node->webform['components'] as $component) {
              if ($component['type'] !== 'markup') {
                $form['webforms']['nid-' . $nid][$key][$component['form_key']] = array(
                  '#title' => $component['name'] . ' (' . $component['type'] . ')',
                  '#type' => 'select',
                  '#options' => $hubspot_field_options[$key]['fields'],
                  '#default_value' => _hubspot_webform_default_value($nid, $key, $component['form_key']),
                );
              }
            }
          }
        }
      }
    }
  }

  $form['#submit'][] = 'hubspot_webform_settings_submit';
}

/**
 * Submit handler for hubspot_webform_settings().
 */
function hubspot_webform_settings_submit($form, &$form_state) {
  $txn = db_transaction();

  // Check if webform values even exist before continuing.
  if (isset($form_state['values']['webforms'])) {
    foreach ($form_state['values']['webforms'] as $key => $settings) {
      db_delete('hubspot')->condition('nid', str_replace('nid-', '', $key))->execute();

      if ($settings['hubspot_form'] != '--donotmap--') {
        foreach ($settings[$settings['hubspot_form']] as $webform_field => $hubspot_field) {
          $fields = array(
            'nid' => str_replace('nid-', '', $key),
            'hubspot_guid' => $settings['hubspot_form'],
            'webform_field' => $webform_field,
            'hubspot_field' => $hubspot_field,
          );
          db_insert('hubspot')->fields($fields)->execute();
        }
      }
    }
  }
}

/**
 * Gets the list of forms from HubSpot via the API.
 */
function _hubspot_webform_get_forms() {
  $access_token = variable_get('hubspot_access_token', '');

  if (empty($access_token)) {
    return array('error' => t('This site is not connected to a HubSpot Account.'));
  }

  // @todo: Use '/forms/v2/forms' instead of '/contacts/v1/forms'.
  $url = 'https://api.hubapi.com/contacts/v1/forms';
  $options = array(
      'headers' => array(
          'Authorization' => 'Bearer ' . $access_token,
          'Content-Type' => 'application/json',
        ),
    );

  $request = drupal_http_request($url, $options);

  if ($request->code == 401) {
    $refresh = hubspot_oauth_refresh();
    if ($refresh) {
      $access_token = variable_get('hubspot_access_token', '');
      $options['headers']['Authorization'] = 'Bearer ' . $access_token;
      $request = drupal_http_request($url, $options);
    }
  }

  return array('value' => drupal_json_decode($request->data));
}

/**
 * Returns the default value for the given arguments.
 */
function _hubspot_webform_default_value($nid, $hubspot_guid = NULL, $webform_field = NULL) {
  if (empty($hubspot_guid)) {
    return db_query_range("SELECT hubspot_guid FROM {hubspot} h WHERE h.nid = :nid", 0, 1, array(':nid' => $nid))->fetchField();
  }
  else {
    return db_query_range("SELECT hubspot_field FROM {hubspot} h WHERE h.nid = :nid AND h.hubspot_guid = :guid AND h.webform_field = :webform_field", 0, 1, array(
      ':nid' => $nid,
      ':guid' => $hubspot_guid,
      ':webform_field' => $webform_field,
    ))->fetchField();
  }
}
