<?php

/**
 * @file
 * stevatato_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stevatato_content_types_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_description|node|event|form';
  $field_group->group_name = 'group_event_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event description',
    'weight' => '8',
    'children' => array(
      0 => 'field_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-description field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_description|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_full_address|node|event|form';
  $field_group->group_name = 'group_full_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Full address',
    'weight' => '3',
    'children' => array(
      0 => 'field_title',
      1 => 'field_text',
      2 => 'field_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-full-address field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_full_address|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_side|paragraphs_item|2_media_section|form';
  $field_group->group_name = 'group_left_side';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '2_media_section';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_tabs';
  $field_group->data = array(
    'label' => 'Left side',
    'weight' => '1',
    'children' => array(
      0 => 'field_image',
      1 => 'field_video_cover',
      2 => 'field_video',
      3 => 'field_media_type',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-left-side field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_left_side|paragraphs_item|2_media_section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_side|paragraphs_item|media_l_text_r_2_buttons_section|form';
  $field_group->group_name = 'group_left_side';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'media_l_text_r_2_buttons_section';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_tabs';
  $field_group->data = array(
    'label' => 'Left side',
    'weight' => '3',
    'children' => array(
      0 => 'field_media_type',
      1 => 'field_image',
      2 => 'field_video',
      3 => 'field_video_cover',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-left-side field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_left_side|paragraphs_item|media_l_text_r_2_buttons_section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_side|paragraphs_item|media_l_text_r_section|form';
  $field_group->group_name = 'group_left_side';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'media_l_text_r_section';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_tabs';
  $field_group->data = array(
    'label' => 'Left side',
    'weight' => '10',
    'children' => array(
      0 => 'field_image',
      1 => 'field_video',
      2 => 'field_video_cover',
      3 => 'field_media_type',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-left-side field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_left_side|paragraphs_item|media_l_text_r_section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_side|paragraphs_item|text_l_media_r_section|form';
  $field_group->group_name = 'group_left_side';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_l_media_r_section';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_tabs';
  $field_group->data = array(
    'label' => 'Left side',
    'weight' => '6',
    'children' => array(
      0 => 'field_logo',
      1 => 'field_title',
      2 => 'field_text',
      3 => 'field_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-left-side field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_left_side|paragraphs_item|text_l_media_r_section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_information|node|event|form';
  $field_group->group_name = 'group_main_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main information',
    'weight' => '0',
    'children' => array(
      0 => 'field_date',
      1 => 'field_place',
      2 => 'field_date_end',
      3 => 'field_display_quote_button',
      4 => 'exclude_node_title',
      5 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-main-information field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_main_information|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_tabs|paragraphs_item|2_media_section|form';
  $field_group->group_name = 'group_main_tabs';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '2_media_section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_left_side',
      1 => 'group_right_side',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-main-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_main_tabs|paragraphs_item|2_media_section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_tabs|paragraphs_item|media_l_text_r_2_buttons_section|form';
  $field_group->group_name = 'group_main_tabs';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'media_l_text_r_2_buttons_section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main tabs',
    'weight' => '3',
    'children' => array(
      0 => 'group_left_side',
      1 => 'group_right_side',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-main-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_main_tabs|paragraphs_item|media_l_text_r_2_buttons_section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_tabs|paragraphs_item|media_l_text_r_section|form';
  $field_group->group_name = 'group_main_tabs';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'media_l_text_r_section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main tabs',
    'weight' => '2',
    'children' => array(
      0 => 'group_left_side',
      1 => 'group_right_side',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-main-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_main_tabs|paragraphs_item|media_l_text_r_section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_tabs|paragraphs_item|text_l_media_r_section|form';
  $field_group->group_name = 'group_main_tabs';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_l_media_r_section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_left_side',
      1 => 'group_right_side',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-main-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_main_tabs|paragraphs_item|text_l_media_r_section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_side|paragraphs_item|2_media_section|form';
  $field_group->group_name = 'group_right_side';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '2_media_section';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_tabs';
  $field_group->data = array(
    'label' => 'Right side',
    'weight' => '2',
    'children' => array(
      0 => 'field_image_2',
      1 => 'field_video_2',
      2 => 'field_video_cover_2',
      3 => 'field_media_type_2',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-right-side field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_right_side|paragraphs_item|2_media_section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_side|paragraphs_item|media_l_text_r_2_buttons_section|form';
  $field_group->group_name = 'group_right_side';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'media_l_text_r_2_buttons_section';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_tabs';
  $field_group->data = array(
    'label' => 'Right side',
    'weight' => '5',
    'children' => array(
      0 => 'field_logo',
      1 => 'field_subtitle',
      2 => 'field_text',
      3 => 'field_link',
      4 => 'field_title',
      5 => 'field_link_2',
      6 => 'field_link_3',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-right-side field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_right_side|paragraphs_item|media_l_text_r_2_buttons_section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_side|paragraphs_item|media_l_text_r_section|form';
  $field_group->group_name = 'group_right_side';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'media_l_text_r_section';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_tabs';
  $field_group->data = array(
    'label' => 'Right side',
    'weight' => '11',
    'children' => array(
      0 => 'field_logo',
      1 => 'field_title',
      2 => 'field_link',
      3 => 'field_text',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-right-side field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_right_side|paragraphs_item|media_l_text_r_section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_side|paragraphs_item|text_l_media_r_section|form';
  $field_group->group_name = 'group_right_side';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_l_media_r_section';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_tabs';
  $field_group->data = array(
    'label' => 'Right side',
    'weight' => '7',
    'children' => array(
      0 => 'field_image',
      1 => 'field_media_type',
      2 => 'field_video',
      3 => 'field_video_cover',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-right-side field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_right_side|paragraphs_item|text_l_media_r_section|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Event description');
  t('Full address');
  t('Left side');
  t('Main information');
  t('Main tabs');
  t('Right side');

  return $field_groups;
}
