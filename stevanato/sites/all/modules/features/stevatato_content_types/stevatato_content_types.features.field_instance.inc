<?php

/**
 * @file
 * stevatato_content_types.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function stevatato_content_types_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-banner-field_display_quote_button'.
  $field_instances['bean-banner-field_display_quote_button'] = array(
    'bundle' => 'banner',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_display_quote_button',
    'label' => 'Display quote button',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'bean-banner-field_exclude_title_from_display'.
  $field_instances['bean-banner-field_exclude_title_from_display'] = array(
    'bundle' => 'banner',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_exclude_title_from_display',
    'label' => 'Exclude title from display',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'bean-banner-field_sections'.
  $field_instances['bean-banner-field_sections'] = array(
    'bundle' => 'banner',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_sections',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_image_section' => -1,
        '2_blocks_section' => -1,
        '2_media_section' => -1,
        'accordion_item' => -1,
        'accordion_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => 'banner_section',
        'block_item' => -1,
        'card_item' => -1,
        'county_section' => -1,
        'events_section' => -1,
        'images_l_texts_r_section' => -1,
        'key_numbers_card' => -1,
        'keys_numbers_section' => -1,
        'media_l_text_r_section' => -1,
        'more_section' => -1,
        'product_card' => -1,
        'products_highlight_section' => -1,
        'text_card' => -1,
        'text_l_media_r_section' => -1,
        'text_section' => -1,
        'title_section' => -1,
        'video_section' => -1,
        'video_section_inner_page' => -1,
      ),
      'bundle_weights' => array(
        '1_big_image_section' => 2,
        '2_blocks_section' => 3,
        '2_media_section' => 4,
        'accordion_item' => 5,
        'accordion_section' => 6,
        'banner_item_section' => 7,
        'banner_section' => 8,
        'block_item' => 9,
        'card_item' => 10,
        'county_section' => 11,
        'events_section' => 12,
        'images_l_texts_r_section' => 13,
        'key_numbers_card' => 15,
        'keys_numbers_section' => 14,
        'media_l_text_r_section' => 16,
        'more_section' => 17,
        'product_card' => 19,
        'products_highlight_section' => 18,
        'text_card' => 20,
        'text_l_media_r_section' => 21,
        'text_section' => 22,
        'title_section' => 23,
        'video_section' => 24,
        'video_section_inner_page' => 25,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'bean-logo-field_image'.
  $field_instances['bean-logo-field_image'] = array(
    'bundle' => 'logo',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'image_image',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'bean-quote_button-field_link'.
  $field_instances['bean-quote_button-field_link'] = array(
    'bundle' => 'quote_button',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-about_us-field_display_quote_button'.
  $field_instances['node-about_us-field_display_quote_button'] = array(
    'bundle' => 'about_us',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_display_quote_button',
    'label' => 'Display quote button',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-about_us-field_sections'.
  $field_instances['node-about_us-field_sections'] = array(
    'bundle' => 'about_us',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sections',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_image_section' => -1,
        '2_blocks_section' => '2_blocks_section',
        '2_media_section' => -1,
        'accordion_item' => -1,
        'accordion_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => 'banner_section',
        'block_item' => -1,
        'card_item' => -1,
        'county_section' => -1,
        'events_section' => -1,
        'images_l_texts_r_section' => -1,
        'key_numbers_card' => -1,
        'keys_numbers_section' => 'keys_numbers_section',
        'media_l_text_r_section' => 'media_l_text_r_section',
        'more_section' => -1,
        'product_card' => -1,
        'products_highlight_section' => -1,
        'text_card' => -1,
        'text_l_media_r_section' => 'text_l_media_r_section',
        'text_section' => -1,
        'title_section' => -1,
        'video_section' => -1,
        'video_section_inner_page' => -1,
      ),
      'bundle_weights' => array(
        '1_big_image_section' => 2,
        '2_blocks_section' => 3,
        '2_media_section' => 4,
        'accordion_item' => 5,
        'accordion_section' => 6,
        'banner_item_section' => 7,
        'banner_section' => 8,
        'block_item' => 45,
        'card_item' => 9,
        'county_section' => 10,
        'events_section' => 11,
        'images_l_texts_r_section' => 12,
        'key_numbers_card' => 36,
        'keys_numbers_section' => 35,
        'media_l_text_r_section' => 13,
        'more_section' => 14,
        'product_card' => 16,
        'products_highlight_section' => 15,
        'text_card' => 17,
        'text_l_media_r_section' => 18,
        'text_section' => 19,
        'title_section' => 20,
        'video_section' => 21,
        'video_section_inner_page' => 22,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-contact_us-field_display_quote_button'.
  $field_instances['node-contact_us-field_display_quote_button'] = array(
    'bundle' => 'contact_us',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_display_quote_button',
    'label' => 'Display quote button',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-contact_us-field_sections'.
  $field_instances['node-contact_us-field_sections'] = array(
    'bundle' => 'contact_us',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sections',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_image_section' => -1,
        '2_blocks_section' => -1,
        '2_media_section' => -1,
        'accordion_item' => -1,
        'accordion_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => 'banner_section',
        'card_item' => -1,
        'county_section' => 'county_section',
        'events_section' => -1,
        'images_l_texts_r_section' => -1,
        'media_l_text_r_section' => -1,
        'more_section' => -1,
        'product_card' => -1,
        'products_highlight_section' => -1,
        'text_card' => -1,
        'text_l_media_r_section' => -1,
        'text_section' => -1,
        'title_section' => -1,
        'video_section' => -1,
        'video_section_inner_page' => -1,
      ),
      'bundle_weights' => array(
        '1_big_image_section' => 13,
        '2_blocks_section' => 4,
        '2_media_section' => 15,
        'accordion_item' => 16,
        'accordion_section' => 17,
        'banner_item_section' => 6,
        'banner_section' => 7,
        'card_item' => 20,
        'county_section' => 21,
        'events_section' => 22,
        'images_l_texts_r_section' => 23,
        'media_l_text_r_section' => 24,
        'more_section' => 25,
        'product_card' => 27,
        'products_highlight_section' => 26,
        'text_card' => 28,
        'text_l_media_r_section' => 29,
        'text_section' => 11,
        'title_section' => 31,
        'video_section' => 32,
        'video_section_inner_page' => 33,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-event-field_date'.
  $field_instances['node-event-field_date'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'news_events',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'news_events',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date',
    'label' => 'Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-event-field_date_end'.
  $field_instances['node-event-field_date_end'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'day',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date_end',
    'label' => 'Date end',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-event-field_description'.
  $field_instances['node-event-field_description'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-event-field_display_quote_button'.
  $field_instances['node-event-field_display_quote_button'] = array(
    'bundle' => 'event',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_display_quote_button',
    'label' => 'Display quote button',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-event-field_link'.
  $field_instances['node-event-field_link'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-event-field_place'.
  $field_instances['node-event-field_place'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_place',
    'label' => 'Place',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-event-field_text'.
  $field_instances['node-event-field_text'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-event-field_title'.
  $field_instances['node-event-field_title'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-homepage-field_display_quote_button'.
  $field_instances['node-homepage-field_display_quote_button'] = array(
    'bundle' => 'homepage',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_display_quote_button',
    'label' => 'Display quote button',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-homepage-field_sections'.
  $field_instances['node-homepage-field_sections'] = array(
    'bundle' => 'homepage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sections',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_image_section' => -1,
        '2_blocks_section' => -1,
        '2_media_section' => -1,
        'accordion_item' => -1,
        'accordion_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => 'banner_section',
        'card_item' => -1,
        'county_section' => -1,
        'events_section' => 'events_section',
        'images_l_texts_r_section' => 'images_l_texts_r_section',
        'key_numbers_card' => -1,
        'keys_numbers_section' => -1,
        'media_l_text_r_section' => -1,
        'more_section' => -1,
        'product_card' => -1,
        'products_highlight_section' => 'products_highlight_section',
        'text_card' => -1,
        'text_l_media_r_section' => -1,
        'text_section' => -1,
        'title_section' => -1,
        'video_section' => 'video_section',
        'video_section_inner_page' => -1,
      ),
      'bundle_weights' => array(
        '1_big_image_section' => 20,
        '2_blocks_section' => -10,
        '2_media_section' => 22,
        'accordion_item' => 23,
        'accordion_section' => 24,
        'banner_item_section' => -10,
        'banner_section' => -10,
        'card_item' => 27,
        'county_section' => 28,
        'events_section' => -20,
        'images_l_texts_r_section' => 18,
        'key_numbers_card' => 32,
        'keys_numbers_section' => 31,
        'media_l_text_r_section' => 33,
        'more_section' => 34,
        'product_card' => 11,
        'products_highlight_section' => 5,
        'text_card' => -18,
        'text_l_media_r_section' => 38,
        'text_section' => -10,
        'title_section' => 40,
        'video_section' => 13,
        'video_section_inner_page' => 42,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-multitabs-field_banner_section'.
  $field_instances['node-multitabs-field_banner_section'] = array(
    'bundle' => 'multitabs',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_banner_section',
    'label' => 'Banner section',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_image_section' => -1,
        '2_blocks_section' => -1,
        '2_media_section' => -1,
        '4_1_images_section' => -1,
        'accordion_item' => -1,
        'accordion_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => 'banner_section',
        'block_item' => -1,
        'card_item' => -1,
        'county_section' => -1,
        'events_section' => -1,
        'icon_item' => -1,
        'icons_section' => -1,
        'image_text_item' => -1,
        'images_l_texts_r_section' => -1,
        'key_numbers_card' => -1,
        'keys_numbers_section' => -1,
        'media_l_text_r_2_buttons_section' => -1,
        'media_l_text_r_section' => -1,
        'more_section' => -1,
        'product_block' => -1,
        'product_card' => -1,
        'products_highlight_section' => -1,
        'tab_section' => -1,
        'text_card' => -1,
        'text_l_media_r_section' => -1,
        'text_section' => -1,
        'title_section' => -1,
        'video_section' => -1,
        'video_section_inner_page' => -1,
      ),
      'bundle_weights' => array(
        '1_big_image_section' => 2,
        '2_blocks_section' => 3,
        '2_media_section' => 4,
        '4_1_images_section' => 5,
        'accordion_item' => 6,
        'accordion_section' => 7,
        'banner_item_section' => 8,
        'banner_section' => 9,
        'block_item' => 10,
        'card_item' => 11,
        'county_section' => 12,
        'events_section' => 13,
        'icon_item' => 15,
        'icons_section' => 14,
        'image_text_item' => 17,
        'images_l_texts_r_section' => 16,
        'key_numbers_card' => 19,
        'keys_numbers_section' => 18,
        'media_l_text_r_2_buttons_section' => 20,
        'media_l_text_r_section' => 21,
        'more_section' => 22,
        'product_block' => 24,
        'product_card' => 25,
        'products_highlight_section' => 23,
        'tab_section' => 26,
        'text_card' => 27,
        'text_l_media_r_section' => 28,
        'text_section' => 29,
        'title_section' => 30,
        'video_section' => 31,
        'video_section_inner_page' => 32,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-multitabs-field_display_quote_button'.
  $field_instances['node-multitabs-field_display_quote_button'] = array(
    'bundle' => 'multitabs',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_display_quote_button',
    'label' => 'Display quote button',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-multitabs-field_other_sections'.
  $field_instances['node-multitabs-field_other_sections'] = array(
    'bundle' => 'multitabs',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_other_sections',
    'label' => 'Other sections',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_image_section' => -1,
        '1_big_image_with_text_section' => -1,
        '2_blocks_section' => -1,
        '2_media_section' => -1,
        '4_1_images_section' => -1,
        'accordion_item' => -1,
        'accordion_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => -1,
        'block_item' => -1,
        'card_item' => -1,
        'county_section' => -1,
        'events_section' => -1,
        'icon_item' => -1,
        'icons_section' => -1,
        'image_text_item' => -1,
        'images_l_texts_r_section' => -1,
        'key_numbers_card' => -1,
        'keys_numbers_section' => -1,
        'media_l_text_r_2_buttons_section' => -1,
        'media_l_text_r_section' => -1,
        'more_section' => 'more_section',
        'process_section' => -1,
        'product_block' => -1,
        'product_card' => -1,
        'products_highlight_section' => -1,
        'steps_section' => -1,
        'tab_item' => -1,
        'tab_section' => -1,
        'text_card' => -1,
        'text_l_media_r_section' => -1,
        'text_section' => -1,
        'title_section' => -1,
        'video_section' => -1,
        'video_section_inner_page' => -1,
      ),
      'bundle_weights' => array(
        '1_big_image_section' => 2,
        '1_big_image_with_text_section' => 3,
        '2_blocks_section' => 4,
        '2_media_section' => 5,
        '4_1_images_section' => 6,
        'accordion_item' => 7,
        'accordion_section' => 8,
        'banner_item_section' => 9,
        'banner_section' => 10,
        'block_item' => 11,
        'card_item' => 12,
        'county_section' => 13,
        'events_section' => 14,
        'icon_item' => 16,
        'icons_section' => 15,
        'image_text_item' => 18,
        'images_l_texts_r_section' => 17,
        'key_numbers_card' => 20,
        'keys_numbers_section' => 19,
        'media_l_text_r_2_buttons_section' => 21,
        'media_l_text_r_section' => 22,
        'more_section' => 23,
        'process_section' => 24,
        'product_block' => 26,
        'product_card' => 27,
        'products_highlight_section' => 25,
        'steps_section' => 28,
        'tab_item' => 29,
        'tab_section' => 30,
        'text_card' => 31,
        'text_l_media_r_section' => 32,
        'text_section' => 33,
        'title_section' => 34,
        'video_section' => 35,
        'video_section_inner_page' => 36,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-multitabs-field_sections'.
  $field_instances['node-multitabs-field_sections'] = array(
    'bundle' => 'multitabs',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sections',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_image_section' => -1,
        '1_big_image_with_text_section' => -1,
        '2_blocks_section' => -1,
        '2_media_section' => -1,
        '4_1_images_section' => -1,
        'accordion_item' => -1,
        'accordion_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => -1,
        'block_item' => -1,
        'card_item' => -1,
        'county_section' => -1,
        'events_section' => -1,
        'icon_item' => -1,
        'icons_section' => -1,
        'image_text_item' => -1,
        'images_l_texts_r_section' => -1,
        'key_numbers_card' => -1,
        'keys_numbers_section' => -1,
        'media_l_text_r_2_buttons_section' => -1,
        'media_l_text_r_section' => -1,
        'more_section' => -1,
        'process_section' => -1,
        'product_block' => -1,
        'product_card' => -1,
        'products_highlight_section' => -1,
        'steps_section' => -1,
        'tab_item' => -1,
        'tab_section' => 'tab_section',
        'text_card' => -1,
        'text_l_media_r_section' => -1,
        'text_section' => -1,
        'title_section' => -1,
        'video_section' => -1,
        'video_section_inner_page' => -1,
      ),
      'bundle_weights' => array(
        '1_big_image_section' => 2,
        '1_big_image_with_text_section' => 35,
        '2_blocks_section' => 3,
        '2_media_section' => 4,
        '4_1_images_section' => 5,
        'accordion_item' => 6,
        'accordion_section' => 7,
        'banner_item_section' => 8,
        'banner_section' => 9,
        'block_item' => 10,
        'card_item' => 11,
        'county_section' => 12,
        'events_section' => 13,
        'icon_item' => 15,
        'icons_section' => 14,
        'image_text_item' => 17,
        'images_l_texts_r_section' => 16,
        'key_numbers_card' => 19,
        'keys_numbers_section' => 18,
        'media_l_text_r_2_buttons_section' => 20,
        'media_l_text_r_section' => 21,
        'more_section' => 22,
        'process_section' => 56,
        'product_block' => 24,
        'product_card' => 25,
        'products_highlight_section' => 23,
        'steps_section' => 60,
        'tab_item' => 61,
        'tab_section' => 26,
        'text_card' => 27,
        'text_l_media_r_section' => 28,
        'text_section' => 29,
        'title_section' => 30,
        'video_section' => 31,
        'video_section_inner_page' => 32,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-page-field_display_quote_button'.
  $field_instances['node-page-field_display_quote_button'] = array(
    'bundle' => 'page',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_display_quote_button',
    'label' => 'Display quote button',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-page-field_sections'.
  $field_instances['node-page-field_sections'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sections',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_image_section' => '1_big_image_section',
        '1_big_image_with_text_section' => -1,
        '2_blocks_section' => -1,
        '2_media_section' => '2_media_section',
        '4_1_images_section' => -1,
        'accordion_item' => -1,
        'accordion_section' => 'accordion_section',
        'banner_item_section' => -1,
        'banner_section' => 'banner_section',
        'block_item' => -1,
        'card_item' => -1,
        'county_section' => -1,
        'events_section' => -1,
        'icon_item' => -1,
        'icons_section' => 'icons_section',
        'image_text_item' => -1,
        'images_l_texts_r_section' => -1,
        'key_numbers_card' => -1,
        'keys_numbers_section' => -1,
        'media_l_text_r_2_buttons_section' => -1,
        'media_l_text_r_section' => 'media_l_text_r_section',
        'more_section' => 'more_section',
        'process_section' => -1,
        'product_block' => -1,
        'product_card' => -1,
        'products_highlight_section' => -1,
        'steps_section' => -1,
        'tab_item' => -1,
        'tab_section' => -1,
        'text_card' => -1,
        'text_l_media_r_section' => 'text_l_media_r_section',
        'text_section' => 'text_section',
        'title_section' => 'title_section',
        'video_section' => -1,
        'video_section_inner_page' => 'video_section_inner_page',
      ),
      'bundle_weights' => array(
        '1_big_image_section' => 22,
        '1_big_image_with_text_section' => 35,
        '2_blocks_section' => -22,
        '2_media_section' => -21,
        '4_1_images_section' => 38,
        'accordion_item' => 32,
        'accordion_section' => 27,
        'banner_item_section' => -20,
        'banner_section' => -19,
        'block_item' => 43,
        'card_item' => -40,
        'county_section' => 45,
        'events_section' => -18,
        'icon_item' => 48,
        'icons_section' => 47,
        'image_text_item' => 50,
        'images_l_texts_r_section' => -17,
        'key_numbers_card' => 52,
        'keys_numbers_section' => 51,
        'media_l_text_r_2_buttons_section' => 53,
        'media_l_text_r_section' => 8,
        'more_section' => -40,
        'process_section' => 56,
        'product_block' => 58,
        'product_card' => -15,
        'products_highlight_section' => -16,
        'steps_section' => 60,
        'tab_item' => 61,
        'tab_section' => 62,
        'text_card' => -14,
        'text_l_media_r_section' => 20,
        'text_section' => -23,
        'title_section' => -24,
        'video_section' => -13,
        'video_section_inner_page' => -36,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-platform-field_display_quote_button'.
  $field_instances['node-platform-field_display_quote_button'] = array(
    'bundle' => 'platform',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_display_quote_button',
    'label' => 'Display quote button',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-platform-field_sections'.
  $field_instances['node-platform-field_sections'] = array(
    'bundle' => 'platform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sections',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_image_section' => -1,
        '2_blocks_section' => -1,
        '2_media_section' => -1,
        '4_1_images_section' => -1,
        'accordion_item' => -1,
        'accordion_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => 'banner_section',
        'block_item' => -1,
        'card_item' => -1,
        'county_section' => -1,
        'events_section' => -1,
        'icon_item' => -1,
        'icons_section' => -1,
        'image_text_item' => -1,
        'images_l_texts_r_section' => -1,
        'key_numbers_card' => -1,
        'keys_numbers_section' => -1,
        'media_l_text_r_2_buttons_section' => -1,
        'media_l_text_r_section' => 'media_l_text_r_section',
        'more_section' => 'more_section',
        'process_section' => 'process_section',
        'product_block' => -1,
        'product_card' => -1,
        'products_highlight_section' => 'products_highlight_section',
        'steps_section' => 'steps_section',
        'tab_section' => -1,
        'text_card' => -1,
        'text_l_media_r_section' => 'text_l_media_r_section',
        'text_section' => -1,
        'title_section' => -1,
        'video_section' => -1,
        'video_section_inner_page' => -1,
      ),
      'bundle_weights' => array(
        '1_big_image_section' => 2,
        '2_blocks_section' => 3,
        '2_media_section' => 4,
        '4_1_images_section' => 5,
        'accordion_item' => 6,
        'accordion_section' => 7,
        'banner_item_section' => 8,
        'banner_section' => 9,
        'block_item' => 10,
        'card_item' => 11,
        'county_section' => 12,
        'events_section' => 13,
        'icon_item' => 15,
        'icons_section' => 14,
        'image_text_item' => 17,
        'images_l_texts_r_section' => 16,
        'key_numbers_card' => 19,
        'keys_numbers_section' => 18,
        'media_l_text_r_2_buttons_section' => 20,
        'media_l_text_r_section' => 21,
        'more_section' => 22,
        'process_section' => -66,
        'product_block' => 24,
        'product_card' => 25,
        'products_highlight_section' => 23,
        'steps_section' => 58,
        'tab_section' => 26,
        'text_card' => 27,
        'text_l_media_r_section' => 28,
        'text_section' => 29,
        'title_section' => 30,
        'video_section' => 31,
        'video_section_inner_page' => 32,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-popup-field_tabs'.
  $field_instances['node-popup-field_tabs'] = array(
    'bundle' => 'popup',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tabs',
    'label' => 'Tabs',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_image_section' => -1,
        '1_big_image_with_text_section' => -1,
        '2_blocks_section' => -1,
        '2_media_section' => -1,
        '4_1_images_section' => -1,
        'accordion_item' => -1,
        'accordion_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => -1,
        'block_item' => -1,
        'card_item' => -1,
        'county_section' => -1,
        'events_section' => -1,
        'icon_item' => -1,
        'icons_section' => -1,
        'image_text_item' => -1,
        'images_l_texts_r_section' => -1,
        'key_numbers_card' => -1,
        'keys_numbers_section' => -1,
        'media_l_text_r_2_buttons_section' => -1,
        'media_l_text_r_section' => -1,
        'more_section' => -1,
        'process_section' => -1,
        'product_block' => -1,
        'product_card' => -1,
        'products_highlight_section' => -1,
        'steps_section' => -1,
        'tab_item' => 'tab_item',
        'tab_section' => -1,
        'text_card' => -1,
        'text_l_media_r_section' => -1,
        'text_section' => -1,
        'title_section' => -1,
        'video_section' => -1,
        'video_section_inner_page' => -1,
      ),
      'bundle_weights' => array(
        '1_big_image_section' => 2,
        '1_big_image_with_text_section' => 3,
        '2_blocks_section' => 4,
        '2_media_section' => 5,
        '4_1_images_section' => 6,
        'accordion_item' => 7,
        'accordion_section' => 8,
        'banner_item_section' => 9,
        'banner_section' => 10,
        'block_item' => 11,
        'card_item' => 12,
        'county_section' => 13,
        'events_section' => 14,
        'icon_item' => 16,
        'icons_section' => 15,
        'image_text_item' => 18,
        'images_l_texts_r_section' => 17,
        'key_numbers_card' => 20,
        'keys_numbers_section' => 19,
        'media_l_text_r_2_buttons_section' => 21,
        'media_l_text_r_section' => 22,
        'more_section' => 23,
        'process_section' => 24,
        'product_block' => 26,
        'product_card' => 27,
        'products_highlight_section' => 25,
        'steps_section' => 28,
        'tab_item' => 64,
        'tab_section' => 29,
        'text_card' => 30,
        'text_l_media_r_section' => 31,
        'text_section' => 32,
        'title_section' => 33,
        'video_section' => 34,
        'video_section_inner_page' => 35,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Item',
      'title_multiple' => 'Items',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-product-field_display_quote_button'.
  $field_instances['node-product-field_display_quote_button'] = array(
    'bundle' => 'product',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_display_quote_button',
    'label' => 'Display quote button',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-product-field_sections'.
  $field_instances['node-product-field_sections'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sections',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_image_section' => -1,
        '2_blocks_section' => -1,
        '2_media_section' => -1,
        '4_1_images_section' => -1,
        'accordion_item' => -1,
        'accordion_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => 'banner_section',
        'block_item' => -1,
        'card_item' => -1,
        'county_section' => -1,
        'events_section' => -1,
        'image_text_item' => -1,
        'images_l_texts_r_section' => -1,
        'key_numbers_card' => -1,
        'keys_numbers_section' => -1,
        'media_l_text_r_2_buttons_section' => -1,
        'media_l_text_r_section' => -1,
        'more_section' => 'more_section',
        'product_block' => 'product_block',
        'product_card' => -1,
        'products_highlight_section' => -1,
        'text_card' => -1,
        'text_l_media_r_section' => -1,
        'text_section' => -1,
        'title_section' => -1,
        'video_section' => -1,
        'video_section_inner_page' => -1,
      ),
      'bundle_weights' => array(
        '1_big_image_section' => 2,
        '2_blocks_section' => 3,
        '2_media_section' => 4,
        '4_1_images_section' => 49,
        'accordion_item' => 5,
        'accordion_section' => 6,
        'banner_item_section' => 7,
        'banner_section' => 8,
        'block_item' => 9,
        'card_item' => 10,
        'county_section' => 11,
        'events_section' => 12,
        'image_text_item' => -56,
        'images_l_texts_r_section' => 13,
        'key_numbers_card' => 15,
        'keys_numbers_section' => 14,
        'media_l_text_r_2_buttons_section' => -56,
        'media_l_text_r_section' => 16,
        'more_section' => 17,
        'product_block' => 44,
        'product_card' => 19,
        'products_highlight_section' => 18,
        'text_card' => 20,
        'text_l_media_r_section' => 21,
        'text_section' => 22,
        'title_section' => 23,
        'video_section' => 24,
        'video_section_inner_page' => 25,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-1_big_image_section-field_image'.
  $field_instances['paragraphs_item-1_big_image_section-field_image'] = array(
    'bundle' => '1_big_image_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '1170x400_simplecrop',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-1_big_image_with_text_section-field_image'.
  $field_instances['paragraphs_item-1_big_image_with_text_section-field_image'] = array(
    'bundle' => '1_big_image_with_text_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-1_big_image_with_text_section-field_text'.
  $field_instances['paragraphs_item-1_big_image_with_text_section-field_text'] = array(
    'bundle' => '1_big_image_with_text_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-1_big_image_with_text_section-field_title'.
  $field_instances['paragraphs_item-1_big_image_with_text_section-field_title'] = array(
    'bundle' => '1_big_image_with_text_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2_blocks_section-field_blocks'.
  $field_instances['paragraphs_item-2_blocks_section-field_blocks'] = array(
    'bundle' => '2_blocks_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_blocks',
    'label' => 'Blocks',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_image_section' => -1,
        '2_blocks_section' => -1,
        '2_media_section' => -1,
        'accordion_item' => -1,
        'accordion_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => -1,
        'block_item' => 'block_item',
        'card_item' => -1,
        'county_section' => -1,
        'events_section' => -1,
        'images_l_texts_r_section' => -1,
        'key_numbers_card' => -1,
        'keys_numbers_section' => -1,
        'media_l_text_r_section' => -1,
        'more_section' => -1,
        'product_card' => -1,
        'products_highlight_section' => -1,
        'text_card' => -1,
        'text_l_media_r_section' => -1,
        'text_section' => -1,
        'title_section' => -1,
        'video_section' => -1,
        'video_section_inner_page' => -1,
      ),
      'bundle_weights' => array(
        '1_big_image_section' => 2,
        '2_blocks_section' => 3,
        '2_media_section' => 4,
        'accordion_item' => 5,
        'accordion_section' => 6,
        'banner_item_section' => 7,
        'banner_section' => 8,
        'block_item' => 9,
        'card_item' => 10,
        'county_section' => 11,
        'events_section' => 12,
        'images_l_texts_r_section' => 13,
        'key_numbers_card' => 15,
        'keys_numbers_section' => 14,
        'media_l_text_r_section' => 16,
        'more_section' => 17,
        'product_card' => 19,
        'products_highlight_section' => 18,
        'text_card' => 20,
        'text_l_media_r_section' => 21,
        'text_section' => 22,
        'title_section' => 23,
        'video_section' => 24,
        'video_section_inner_page' => 25,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Item',
      'title_multiple' => 'Items',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-2_blocks_section-field_section_title'.
  $field_instances['paragraphs_item-2_blocks_section-field_section_title'] = array(
    'bundle' => '2_blocks_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_title',
    'label' => 'Section title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2_media_section-field_image'.
  $field_instances['paragraphs_item-2_media_section-field_image'] = array(
    'bundle' => '2_media_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '575x390_simplecrop',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2_media_section-field_image_2'.
  $field_instances['paragraphs_item-2_media_section-field_image_2'] = array(
    'bundle' => '2_media_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '575x390_simplecrop',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image_2',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-2_media_section-field_media_type'.
  $field_instances['paragraphs_item-2_media_section-field_media_type'] = array(
    'bundle' => '2_media_section',
    'default_value' => array(
      0 => array(
        'value' => 'img',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_media_type',
    'label' => 'Media type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-2_media_section-field_media_type_2'.
  $field_instances['paragraphs_item-2_media_section-field_media_type_2'] = array(
    'bundle' => '2_media_section',
    'default_value' => array(
      0 => array(
        'value' => 'img',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_media_type_2',
    'label' => 'Media type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2_media_section-field_video'.
  $field_instances['paragraphs_item-2_media_section-field_video'] = array(
    'bundle' => '2_media_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'video',
        'settings' => array(
          'poster_image_style' => '',
          'widthxheight' => '575x390',
        ),
        'type' => 'video_formatter_player',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_video',
    'label' => 'Video',
    'required' => 0,
    'settings' => array(
      'default_dimensions' => '640x360',
      'file_directory' => 'videos/original',
      'file_extensions' => 'mp4 ogg avi mov wmv flv ogv webm',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'video',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'video_upload',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2_media_section-field_video_2'.
  $field_instances['paragraphs_item-2_media_section-field_video_2'] = array(
    'bundle' => '2_media_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'video',
        'settings' => array(
          'poster_image_style' => '',
          'widthxheight' => '575x390',
        ),
        'type' => 'video_formatter_player',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_video_2',
    'label' => 'Video',
    'required' => 0,
    'settings' => array(
      'default_dimensions' => '640x360',
      'file_directory' => 'videos/original',
      'file_extensions' => 'mp4 ogg avi mov wmv flv ogv webm',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'video',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'video_upload',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-2_media_section-field_video_cover'.
  $field_instances['paragraphs_item-2_media_section-field_video_cover'] = array(
    'bundle' => '2_media_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_video_cover',
    'label' => 'Video cover',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'cropped_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-2_media_section-field_video_cover_2'.
  $field_instances['paragraphs_item-2_media_section-field_video_cover_2'] = array(
    'bundle' => '2_media_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_video_cover_2',
    'label' => 'Video cover',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'paragraphs_item-4_1_images_section-field_image'.
  $field_instances['paragraphs_item-4_1_images_section-field_image'] = array(
    'bundle' => '4_1_images_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '154x154_simplecrop',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-4_1_images_section-field_section_title'.
  $field_instances['paragraphs_item-4_1_images_section-field_section_title'] = array(
    'bundle' => '4_1_images_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_title',
    'label' => 'Section title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-4_1_images_section-field_sections'.
  $field_instances['paragraphs_item-4_1_images_section-field_sections'] = array(
    'bundle' => '4_1_images_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_sections',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_image_section' => -1,
        '2_blocks_section' => -1,
        '2_media_section' => -1,
        '4_1_images_section' => -1,
        'accordion_item' => -1,
        'accordion_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => -1,
        'block_item' => -1,
        'card_item' => -1,
        'county_section' => -1,
        'events_section' => -1,
        'image_text_item' => 'image_text_item',
        'images_l_texts_r_section' => -1,
        'key_numbers_card' => -1,
        'keys_numbers_section' => -1,
        'media_l_text_r_section' => -1,
        'more_section' => -1,
        'product_block' => -1,
        'product_card' => -1,
        'products_highlight_section' => -1,
        'text_card' => -1,
        'text_l_media_r_section' => -1,
        'text_section' => -1,
        'title_section' => -1,
        'video_section' => -1,
        'video_section_inner_page' => -1,
      ),
      'bundle_weights' => array(
        '1_big_image_section' => 2,
        '2_blocks_section' => 3,
        '2_media_section' => 4,
        '4_1_images_section' => 5,
        'accordion_item' => 6,
        'accordion_section' => 7,
        'banner_item_section' => 8,
        'banner_section' => 9,
        'block_item' => 10,
        'card_item' => 11,
        'county_section' => 12,
        'events_section' => 13,
        'image_text_item' => 15,
        'images_l_texts_r_section' => 14,
        'key_numbers_card' => 17,
        'keys_numbers_section' => 16,
        'media_l_text_r_section' => 18,
        'more_section' => 19,
        'product_block' => 21,
        'product_card' => 22,
        'products_highlight_section' => 20,
        'text_card' => 23,
        'text_l_media_r_section' => 24,
        'text_section' => 25,
        'title_section' => 26,
        'video_section' => 27,
        'video_section_inner_page' => 28,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Item',
      'title_multiple' => 'Items',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-4_1_images_section-field_text'.
  $field_instances['paragraphs_item-4_1_images_section-field_text'] = array(
    'bundle' => '4_1_images_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-accordion_item-field_text'.
  $field_instances['paragraphs_item-accordion_item-field_text'] = array(
    'bundle' => 'accordion_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-accordion_item-field_title'.
  $field_instances['paragraphs_item-accordion_item-field_title'] = array(
    'bundle' => 'accordion_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-accordion_section-field_accordion_items'.
  $field_instances['paragraphs_item-accordion_section-field_accordion_items'] = array(
    'bundle' => 'accordion_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_accordion_items',
    'label' => 'Accordion items',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_image_section' => -1,
        '2_blocks_section' => -1,
        '2_media_section' => -1,
        'accordion_item' => 'accordion_item',
        'accordion_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => -1,
        'events_section' => -1,
        'images_l_texts_r_section' => -1,
        'media_l_text_r_section' => -1,
        'product_card' => -1,
        'products_highlight_section' => -1,
        'text_card' => -1,
        'text_l_media_r_section' => -1,
        'text_section' => -1,
        'title_section' => -1,
        'video_section' => -1,
      ),
      'bundle_weights' => array(
        '1_big_image_section' => 2,
        '2_blocks_section' => 3,
        '2_media_section' => 4,
        'accordion_item' => 5,
        'accordion_section' => 6,
        'banner_item_section' => 7,
        'banner_section' => 8,
        'events_section' => 9,
        'images_l_texts_r_section' => 10,
        'media_l_text_r_section' => 11,
        'product_card' => 13,
        'products_highlight_section' => 12,
        'text_card' => 14,
        'text_l_media_r_section' => 15,
        'text_section' => 16,
        'title_section' => 17,
        'video_section' => 18,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Item',
      'title_multiple' => 'Items',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-accordion_section-field_section_title'.
  $field_instances['paragraphs_item-accordion_section-field_section_title'] = array(
    'bundle' => 'accordion_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_title',
    'label' => 'Section title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-banner_item_section-field_image'.
  $field_instances['paragraphs_item-banner_item_section-field_image'] = array(
    'bundle' => 'banner_item_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-banner_item_section-field_link'.
  $field_instances['paragraphs_item-banner_item_section-field_link'] = array(
    'bundle' => 'banner_item_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-banner_item_section-field_subtitle_html'.
  $field_instances['paragraphs_item-banner_item_section-field_subtitle_html'] = array(
    'bundle' => 'banner_item_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_subtitle_html',
    'label' => 'Subtitle',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-banner_item_section-field_title_html'.
  $field_instances['paragraphs_item-banner_item_section-field_title_html'] = array(
    'bundle' => 'banner_item_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title_html',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-banner_section-field_sections'.
  $field_instances['paragraphs_item-banner_section-field_sections'] = array(
    'bundle' => 'banner_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_sections',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_block_section' => -1,
        '1_big_image' => -1,
        '2_blocks_section' => -1,
        '2_images_section' => -1,
        'banner_item_section' => 'banner_item_section',
        'banner_section' => -1,
        'image_l_text_r' => -1,
        'news_events_section' => -1,
        'text_l_image_r' => -1,
        'text_section' => -1,
      ),
      'bundle_weights' => array(
        '1_big_block_section' => 2,
        '1_big_image' => 3,
        '2_blocks_section' => 4,
        '2_images_section' => 5,
        'banner_item_section' => 16,
        'banner_section' => 6,
        'image_l_text_r' => 7,
        'news_events_section' => 8,
        'text_l_image_r' => 9,
        'text_section' => 10,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-block_item-field_image'.
  $field_instances['paragraphs_item-block_item-field_image'] = array(
    'bundle' => 'block_item',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'cropped_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'paragraphs_item-block_item-field_link'.
  $field_instances['paragraphs_item-block_item-field_link'] = array(
    'bundle' => 'block_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-block_item-field_title'.
  $field_instances['paragraphs_item-block_item-field_title'] = array(
    'bundle' => 'block_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-card_item-field_image'.
  $field_instances['paragraphs_item-card_item-field_image'] = array(
    'bundle' => 'card_item',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '370x268_simplecrop',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => 268,
              'width' => 370,
            ),
            'ratio' => array(
              'height' => 268,
              'width' => 370,
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'paragraphs_item-card_item-field_link'.
  $field_instances['paragraphs_item-card_item-field_link'] = array(
    'bundle' => 'card_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'paragraphs_item-card_item-field_text'.
  $field_instances['paragraphs_item-card_item-field_text'] = array(
    'bundle' => 'card_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'more_link' => 0,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 40,
          'trim_link' => 0,
          'trim_options' => array(
            'text' => 0,
          ),
          'trim_preserve_tags' => '',
          'trim_suffix' => '',
          'trim_type' => 'words',
        ),
        'type' => 'smart_trim_format',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-card_item-field_title'.
  $field_instances['paragraphs_item-card_item-field_title'] = array(
    'bundle' => 'card_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-county_section-field_image'.
  $field_instances['paragraphs_item-county_section-field_image'] = array(
    'bundle' => 'county_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '585x360_simplecrop',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'paragraphs_item-county_section-field_link'.
  $field_instances['paragraphs_item-county_section-field_link'] = array(
    'bundle' => 'county_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'paragraphs_item-county_section-field_link_2'.
  $field_instances['paragraphs_item-county_section-field_link_2'] = array(
    'bundle' => 'county_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link_2',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'paragraphs_item-county_section-field_subtitle'.
  $field_instances['paragraphs_item-county_section-field_subtitle'] = array(
    'bundle' => 'county_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_subtitle',
    'label' => 'Subtitle',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-county_section-field_text'.
  $field_instances['paragraphs_item-county_section-field_text'] = array(
    'bundle' => 'county_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-county_section-field_title'.
  $field_instances['paragraphs_item-county_section-field_title'] = array(
    'bundle' => 'county_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-icon_item-field_text'.
  $field_instances['paragraphs_item-icon_item-field_text'] = array(
    'bundle' => 'icon_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-icon_item-icon'.
  $field_instances['paragraphs_item-icon_item-icon'] = array(
    'bundle' => 'icon_item',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '150x150_simplecrop',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'icon',
    'label' => 'Icon',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'cropped_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-icons_section-field_icons'.
  $field_instances['paragraphs_item-icons_section-field_icons'] = array(
    'bundle' => 'icons_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_icons',
    'label' => 'Icons',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_image_section' => -1,
        '2_blocks_section' => -1,
        '2_media_section' => -1,
        '4_1_images_section' => -1,
        'accordion_item' => -1,
        'accordion_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => -1,
        'block_item' => -1,
        'card_item' => -1,
        'county_section' => -1,
        'events_section' => -1,
        'icon_item' => 'icon_item',
        'icons_section' => -1,
        'image_text_item' => -1,
        'images_l_texts_r_section' => -1,
        'key_numbers_card' => -1,
        'keys_numbers_section' => -1,
        'media_l_text_r_2_buttons_section' => -1,
        'media_l_text_r_section' => -1,
        'more_section' => -1,
        'product_block' => -1,
        'product_card' => -1,
        'products_highlight_section' => -1,
        'text_card' => -1,
        'text_l_media_r_section' => -1,
        'text_section' => -1,
        'title_section' => -1,
        'video_section' => -1,
        'video_section_inner_page' => -1,
      ),
      'bundle_weights' => array(
        '1_big_image_section' => 2,
        '2_blocks_section' => 3,
        '2_media_section' => 4,
        '4_1_images_section' => 5,
        'accordion_item' => 6,
        'accordion_section' => 7,
        'banner_item_section' => 8,
        'banner_section' => 9,
        'block_item' => 10,
        'card_item' => 11,
        'county_section' => 12,
        'events_section' => 13,
        'icon_item' => 45,
        'icons_section' => 14,
        'image_text_item' => 16,
        'images_l_texts_r_section' => 15,
        'key_numbers_card' => 18,
        'keys_numbers_section' => 17,
        'media_l_text_r_2_buttons_section' => 19,
        'media_l_text_r_section' => 20,
        'more_section' => 21,
        'product_block' => 23,
        'product_card' => 24,
        'products_highlight_section' => 22,
        'text_card' => 25,
        'text_l_media_r_section' => 26,
        'text_section' => 27,
        'title_section' => 28,
        'video_section' => 29,
        'video_section_inner_page' => 30,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Item',
      'title_multiple' => 'Items',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-icons_section-field_section_title'.
  $field_instances['paragraphs_item-icons_section-field_section_title'] = array(
    'bundle' => 'icons_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_title',
    'label' => 'Section title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-icons_section-field_text'.
  $field_instances['paragraphs_item-icons_section-field_text'] = array(
    'bundle' => 'icons_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-image_text_item-field_image'.
  $field_instances['paragraphs_item-image_text_item-field_image'] = array(
    'bundle' => 'image_text_item',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '270x193_simplecrop',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-image_text_item-field_text'.
  $field_instances['paragraphs_item-image_text_item-field_text'] = array(
    'bundle' => 'image_text_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-image_text_item-field_title'.
  $field_instances['paragraphs_item-image_text_item-field_title'] = array(
    'bundle' => 'image_text_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-images_l_texts_r_section-field_images'.
  $field_instances['paragraphs_item-images_l_texts_r_section-field_images'] = array(
    'bundle' => 'images_l_texts_r_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '330x450_simplecrop',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-images_l_texts_r_section-field_section_title'.
  $field_instances['paragraphs_item-images_l_texts_r_section-field_section_title'] = array(
    'bundle' => 'images_l_texts_r_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_title',
    'label' => 'Section title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-images_l_texts_r_section-field_text_cards'.
  $field_instances['paragraphs_item-images_l_texts_r_section-field_text_cards'] = array(
    'bundle' => 'images_l_texts_r_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text_cards',
    'label' => 'Text cards',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '2_blocks_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => -1,
        'images_l_texts_r_section' => -1,
        'product_card' => -1,
        'products_highlight_section' => -1,
        'text_card' => 'text_card',
        'text_section' => -1,
        'video_section' => -1,
      ),
      'bundle_weights' => array(
        '2_blocks_section' => 2,
        'banner_item_section' => 3,
        'banner_section' => 4,
        'images_l_texts_r_section' => 5,
        'product_card' => 7,
        'products_highlight_section' => 6,
        'text_card' => 8,
        'text_section' => 9,
        'video_section' => 10,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-key_numbers_card-field_image'.
  $field_instances['paragraphs_item-key_numbers_card-field_image'] = array(
    'bundle' => 'key_numbers_card',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'cropped_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'paragraphs_item-key_numbers_card-field_text'.
  $field_instances['paragraphs_item-key_numbers_card-field_text'] = array(
    'bundle' => 'key_numbers_card',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-key_numbers_card-field_title'.
  $field_instances['paragraphs_item-key_numbers_card-field_title'] = array(
    'bundle' => 'key_numbers_card',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-keys_numbers_section-field_image'.
  $field_instances['paragraphs_item-keys_numbers_section-field_image'] = array(
    'bundle' => 'keys_numbers_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'cropped_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-keys_numbers_section-field_key_numbers_cards'.
  $field_instances['paragraphs_item-keys_numbers_section-field_key_numbers_cards'] = array(
    'bundle' => 'keys_numbers_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_key_numbers_cards',
    'label' => 'Cards',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_image_section' => -1,
        '2_blocks_section' => -1,
        '2_media_section' => -1,
        'accordion_item' => -1,
        'accordion_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => -1,
        'card_item' => -1,
        'county_section' => -1,
        'events_section' => -1,
        'images_l_texts_r_section' => -1,
        'key_numbers_card' => 'key_numbers_card',
        'keys_numbers_section' => -1,
        'media_l_text_r_section' => -1,
        'more_section' => -1,
        'product_card' => -1,
        'products_highlight_section' => -1,
        'text_card' => -1,
        'text_l_media_r_section' => -1,
        'text_section' => -1,
        'title_section' => -1,
        'video_section' => -1,
        'video_section_inner_page' => -1,
      ),
      'bundle_weights' => array(
        '1_big_image_section' => 2,
        '2_blocks_section' => 3,
        '2_media_section' => 4,
        'accordion_item' => 5,
        'accordion_section' => 6,
        'banner_item_section' => 7,
        'banner_section' => 8,
        'card_item' => 9,
        'county_section' => 10,
        'events_section' => 11,
        'images_l_texts_r_section' => 12,
        'key_numbers_card' => 37,
        'keys_numbers_section' => 13,
        'media_l_text_r_section' => 14,
        'more_section' => 15,
        'product_card' => 17,
        'products_highlight_section' => 16,
        'text_card' => 18,
        'text_l_media_r_section' => 19,
        'text_section' => 20,
        'title_section' => 21,
        'video_section' => 22,
        'video_section_inner_page' => 23,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Item',
      'title_multiple' => 'Items',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-keys_numbers_section-field_section_title'.
  $field_instances['paragraphs_item-keys_numbers_section-field_section_title'] = array(
    'bundle' => 'keys_numbers_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_title',
    'label' => 'Section title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-media_l_text_r_2_buttons_section-field_image'.
  $field_instances['paragraphs_item-media_l_text_r_2_buttons_section-field_image'] = array(
    'bundle' => 'media_l_text_r_2_buttons_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '510x390_simplecrop',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-media_l_text_r_2_buttons_section-field_link'.
  $field_instances['paragraphs_item-media_l_text_r_2_buttons_section-field_link'] = array(
    'bundle' => 'media_l_text_r_2_buttons_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-media_l_text_r_2_buttons_section-field_link_2'.
  $field_instances['paragraphs_item-media_l_text_r_2_buttons_section-field_link_2'] = array(
    'bundle' => 'media_l_text_r_2_buttons_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 9,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link_2',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-media_l_text_r_2_buttons_section-field_link_3'.
  $field_instances['paragraphs_item-media_l_text_r_2_buttons_section-field_link_3'] = array(
    'bundle' => 'media_l_text_r_2_buttons_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 10,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link_3',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-media_l_text_r_2_buttons_section-field_logo'.
  $field_instances['paragraphs_item-media_l_text_r_2_buttons_section-field_logo'] = array(
    'bundle' => 'media_l_text_r_2_buttons_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '164x57_simplecrop',
        ),
        'type' => 'image',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_logo',
    'label' => 'Logo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-media_l_text_r_2_buttons_section-field_media_type'.
  $field_instances['paragraphs_item-media_l_text_r_2_buttons_section-field_media_type'] = array(
    'bundle' => 'media_l_text_r_2_buttons_section',
    'default_value' => array(
      0 => array(
        'value' => 'img',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_media_type',
    'label' => 'Media type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-media_l_text_r_2_buttons_section-field_subtitle'.
  $field_instances['paragraphs_item-media_l_text_r_2_buttons_section-field_subtitle'] = array(
    'bundle' => 'media_l_text_r_2_buttons_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_subtitle',
    'label' => 'Subtitle',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-media_l_text_r_2_buttons_section-field_text'.
  $field_instances['paragraphs_item-media_l_text_r_2_buttons_section-field_text'] = array(
    'bundle' => 'media_l_text_r_2_buttons_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-media_l_text_r_2_buttons_section-field_title'.
  $field_instances['paragraphs_item-media_l_text_r_2_buttons_section-field_title'] = array(
    'bundle' => 'media_l_text_r_2_buttons_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-media_l_text_r_2_buttons_section-field_video'.
  $field_instances['paragraphs_item-media_l_text_r_2_buttons_section-field_video'] = array(
    'bundle' => 'media_l_text_r_2_buttons_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'video',
        'settings' => array(
          'poster_image_style' => '',
          'widthxheight' => '510x390',
        ),
        'type' => 'video_formatter_player',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_video',
    'label' => 'Video',
    'required' => 0,
    'settings' => array(
      'default_dimensions' => '640x360',
      'file_directory' => 'videos/original',
      'file_extensions' => 'mp4 ogg avi mov wmv flv ogv webm',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'video',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'video_upload',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-media_l_text_r_2_buttons_section-field_video_cover'.
  $field_instances['paragraphs_item-media_l_text_r_2_buttons_section-field_video_cover'] = array(
    'bundle' => 'media_l_text_r_2_buttons_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_video_cover',
    'label' => 'Video cover',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-media_l_text_r_section-field_image'.
  $field_instances['paragraphs_item-media_l_text_r_section-field_image'] = array(
    'bundle' => 'media_l_text_r_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '510x510_simplecrop',
        ),
        'type' => 'image',
        'weight' => 9,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-media_l_text_r_section-field_link'.
  $field_instances['paragraphs_item-media_l_text_r_section-field_link'] = array(
    'bundle' => 'media_l_text_r_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-media_l_text_r_section-field_logo'.
  $field_instances['paragraphs_item-media_l_text_r_section-field_logo'] = array(
    'bundle' => 'media_l_text_r_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '164x57_simplecrop',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_logo',
    'label' => 'Logo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-media_l_text_r_section-field_media_type'.
  $field_instances['paragraphs_item-media_l_text_r_section-field_media_type'] = array(
    'bundle' => 'media_l_text_r_section',
    'default_value' => array(
      0 => array(
        'value' => 'img',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_media_type',
    'label' => 'Media type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-media_l_text_r_section-field_text'.
  $field_instances['paragraphs_item-media_l_text_r_section-field_text'] = array(
    'bundle' => 'media_l_text_r_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-media_l_text_r_section-field_title'.
  $field_instances['paragraphs_item-media_l_text_r_section-field_title'] = array(
    'bundle' => 'media_l_text_r_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-media_l_text_r_section-field_video'.
  $field_instances['paragraphs_item-media_l_text_r_section-field_video'] = array(
    'bundle' => 'media_l_text_r_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'video',
        'settings' => array(
          'poster_image_style' => '',
          'widthxheight' => '510x390',
        ),
        'type' => 'video_formatter_player',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_video',
    'label' => 'Video',
    'required' => 0,
    'settings' => array(
      'default_dimensions' => '640x360',
      'file_directory' => 'videos/original',
      'file_extensions' => 'mp4 ogg avi mov wmv flv ogv webm',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'video',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'video_upload',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-media_l_text_r_section-field_video_cover'.
  $field_instances['paragraphs_item-media_l_text_r_section-field_video_cover'] = array(
    'bundle' => 'media_l_text_r_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 8,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_video_cover',
    'label' => 'Video cover',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'cropped_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-more_section-field_cards'.
  $field_instances['paragraphs_item-more_section-field_cards'] = array(
    'bundle' => 'more_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cards',
    'label' => 'Cards',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_image_section' => -1,
        '2_blocks_section' => -1,
        '2_media_section' => -1,
        'accordion_item' => -1,
        'accordion_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => -1,
        'card_item' => 'card_item',
        'events_section' => -1,
        'images_l_texts_r_section' => -1,
        'media_l_text_r_section' => -1,
        'more_section' => -1,
        'product_card' => -1,
        'products_highlight_section' => -1,
        'text_card' => -1,
        'text_l_media_r_section' => -1,
        'text_section' => -1,
        'title_section' => -1,
        'video_section' => -1,
        'video_section_inner_page' => -1,
      ),
      'bundle_weights' => array(
        '1_big_image_section' => 2,
        '2_blocks_section' => 3,
        '2_media_section' => 4,
        'accordion_item' => 5,
        'accordion_section' => 6,
        'banner_item_section' => 7,
        'banner_section' => 8,
        'card_item' => 9,
        'events_section' => 10,
        'images_l_texts_r_section' => 11,
        'media_l_text_r_section' => 12,
        'more_section' => 13,
        'product_card' => 15,
        'products_highlight_section' => 14,
        'text_card' => 16,
        'text_l_media_r_section' => 17,
        'text_section' => 18,
        'title_section' => 19,
        'video_section' => 20,
        'video_section_inner_page' => 21,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Item',
      'title_multiple' => 'Items',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-more_section-field_section_title'.
  $field_instances['paragraphs_item-more_section-field_section_title'] = array(
    'bundle' => 'more_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_title',
    'label' => 'Section title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-process_section-field_cards'.
  $field_instances['paragraphs_item-process_section-field_cards'] = array(
    'bundle' => 'process_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cards',
    'label' => 'Cards',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_image_section' => -1,
        '2_blocks_section' => -1,
        '2_media_section' => -1,
        '4_1_images_section' => -1,
        'accordion_item' => -1,
        'accordion_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => -1,
        'block_item' => -1,
        'card_item' => -1,
        'county_section' => -1,
        'events_section' => -1,
        'icon_item' => -1,
        'icons_section' => -1,
        'image_text_item' => 'image_text_item',
        'images_l_texts_r_section' => -1,
        'key_numbers_card' => -1,
        'keys_numbers_section' => -1,
        'media_l_text_r_2_buttons_section' => -1,
        'media_l_text_r_section' => -1,
        'more_section' => -1,
        'process_section' => -1,
        'product_block' => -1,
        'product_card' => -1,
        'products_highlight_section' => -1,
        'steps_section' => -1,
        'tab_section' => -1,
        'text_card' => -1,
        'text_l_media_r_section' => -1,
        'text_section' => -1,
        'title_section' => -1,
        'video_section' => -1,
        'video_section_inner_page' => -1,
      ),
      'bundle_weights' => array(
        '1_big_image_section' => 2,
        '2_blocks_section' => 3,
        '2_media_section' => 4,
        '4_1_images_section' => 5,
        'accordion_item' => 6,
        'accordion_section' => 7,
        'banner_item_section' => 8,
        'banner_section' => 9,
        'block_item' => 10,
        'card_item' => 11,
        'county_section' => 12,
        'events_section' => 13,
        'icon_item' => 15,
        'icons_section' => 14,
        'image_text_item' => 17,
        'images_l_texts_r_section' => 16,
        'key_numbers_card' => 19,
        'keys_numbers_section' => 18,
        'media_l_text_r_2_buttons_section' => 20,
        'media_l_text_r_section' => 21,
        'more_section' => 22,
        'process_section' => 23,
        'product_block' => 25,
        'product_card' => 26,
        'products_highlight_section' => 24,
        'steps_section' => 27,
        'tab_section' => 28,
        'text_card' => 29,
        'text_l_media_r_section' => 30,
        'text_section' => 31,
        'title_section' => 32,
        'video_section' => 33,
        'video_section_inner_page' => 34,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Item',
      'title_multiple' => 'Items',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-process_section-field_section_title'.
  $field_instances['paragraphs_item-process_section-field_section_title'] = array(
    'bundle' => 'process_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_title',
    'label' => 'Section title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-process_section-field_text'.
  $field_instances['paragraphs_item-process_section-field_text'] = array(
    'bundle' => 'process_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-product_block-field_sections'.
  $field_instances['paragraphs_item-product_block-field_sections'] = array(
    'bundle' => 'product_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_sections',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_image_section' => -1,
        '2_blocks_section' => -1,
        '2_media_section' => -1,
        '4_1_images_section' => '4_1_images_section',
        'accordion_item' => -1,
        'accordion_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => -1,
        'block_item' => -1,
        'card_item' => -1,
        'county_section' => -1,
        'events_section' => -1,
        'icon_item' => -1,
        'icons_section' => 'icons_section',
        'image_text_item' => -1,
        'images_l_texts_r_section' => -1,
        'key_numbers_card' => -1,
        'keys_numbers_section' => -1,
        'media_l_text_r_2_buttons_section' => 'media_l_text_r_2_buttons_section',
        'media_l_text_r_section' => 'media_l_text_r_section',
        'more_section' => -1,
        'product_block' => -1,
        'product_card' => -1,
        'products_highlight_section' => -1,
        'text_card' => -1,
        'text_l_media_r_section' => 'text_l_media_r_section',
        'text_section' => -1,
        'title_section' => -1,
        'video_section' => -1,
        'video_section_inner_page' => -1,
      ),
      'bundle_weights' => array(
        '1_big_image_section' => 2,
        '2_blocks_section' => 3,
        '2_media_section' => 4,
        '4_1_images_section' => 31,
        'accordion_item' => 5,
        'accordion_section' => 6,
        'banner_item_section' => 7,
        'banner_section' => 8,
        'block_item' => 9,
        'card_item' => 10,
        'county_section' => 11,
        'events_section' => 12,
        'icon_item' => 56,
        'icons_section' => 55,
        'image_text_item' => 41,
        'images_l_texts_r_section' => 13,
        'key_numbers_card' => 15,
        'keys_numbers_section' => 14,
        'media_l_text_r_2_buttons_section' => -56,
        'media_l_text_r_section' => 16,
        'more_section' => 17,
        'product_block' => 19,
        'product_card' => 20,
        'products_highlight_section' => 18,
        'text_card' => 21,
        'text_l_media_r_section' => 22,
        'text_section' => 23,
        'title_section' => 24,
        'video_section' => 25,
        'video_section_inner_page' => 26,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-product_block-field_title'.
  $field_instances['paragraphs_item-product_block-field_title'] = array(
    'bundle' => 'product_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-product_card-field_image'.
  $field_instances['paragraphs_item-product_card-field_image'] = array(
    'bundle' => 'product_card',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '370x268_simplecrop',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => 268,
              'width' => 370,
            ),
            'ratio' => array(
              'height' => 268,
              'width' => 370,
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-product_card-field_link'.
  $field_instances['paragraphs_item-product_card-field_link'] = array(
    'bundle' => 'product_card',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'paragraphs_item-product_card-field_text'.
  $field_instances['paragraphs_item-product_card-field_text'] = array(
    'bundle' => 'product_card',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 40,
        ),
        'type' => 'text_trimmed',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-product_card-field_title'.
  $field_instances['paragraphs_item-product_card-field_title'] = array(
    'bundle' => 'product_card',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-products_highlight_section-field_product_cards'.
  $field_instances['paragraphs_item-products_highlight_section-field_product_cards'] = array(
    'bundle' => 'products_highlight_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_product_cards',
    'label' => 'Product cards',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '2_blocks_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => -1,
        'product_card' => 'product_card',
        'products_highlight_section' => -1,
        'text_section' => -1,
      ),
      'bundle_weights' => array(
        '2_blocks_section' => 2,
        'banner_item_section' => 3,
        'banner_section' => 4,
        'product_card' => 12,
        'products_highlight_section' => 5,
        'text_section' => 6,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-products_highlight_section-field_section_title'.
  $field_instances['paragraphs_item-products_highlight_section-field_section_title'] = array(
    'bundle' => 'products_highlight_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_title',
    'label' => 'Section title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-steps_section-field_section_title'.
  $field_instances['paragraphs_item-steps_section-field_section_title'] = array(
    'bundle' => 'steps_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_title',
    'label' => 'Section title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-steps_section-field_sections'.
  $field_instances['paragraphs_item-steps_section-field_sections'] = array(
    'bundle' => 'steps_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_sections',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_image_section' => -1,
        '1_big_image_with_text_section' => '1_big_image_with_text_section',
        '2_blocks_section' => -1,
        '2_media_section' => -1,
        '4_1_images_section' => -1,
        'accordion_item' => -1,
        'accordion_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => -1,
        'block_item' => -1,
        'card_item' => -1,
        'county_section' => -1,
        'events_section' => -1,
        'icon_item' => -1,
        'icons_section' => 'icons_section',
        'image_text_item' => -1,
        'images_l_texts_r_section' => -1,
        'key_numbers_card' => -1,
        'keys_numbers_section' => -1,
        'media_l_text_r_2_buttons_section' => -1,
        'media_l_text_r_section' => -1,
        'more_section' => -1,
        'process_section' => -1,
        'product_block' => -1,
        'product_card' => -1,
        'products_highlight_section' => -1,
        'steps_section' => -1,
        'tab_section' => -1,
        'text_card' => -1,
        'text_l_media_r_section' => -1,
        'text_section' => -1,
        'title_section' => -1,
        'video_section' => -1,
        'video_section_inner_page' => -1,
      ),
      'bundle_weights' => array(
        '1_big_image_section' => 2,
        '1_big_image_with_text_section' => 36,
        '2_blocks_section' => 3,
        '2_media_section' => 4,
        '4_1_images_section' => 5,
        'accordion_item' => 6,
        'accordion_section' => 7,
        'banner_item_section' => 8,
        'banner_section' => 9,
        'block_item' => 10,
        'card_item' => 11,
        'county_section' => 12,
        'events_section' => 13,
        'icon_item' => 15,
        'icons_section' => 14,
        'image_text_item' => 17,
        'images_l_texts_r_section' => 16,
        'key_numbers_card' => 19,
        'keys_numbers_section' => 18,
        'media_l_text_r_2_buttons_section' => 20,
        'media_l_text_r_section' => 21,
        'more_section' => 22,
        'process_section' => 57,
        'product_block' => 24,
        'product_card' => 25,
        'products_highlight_section' => 23,
        'steps_section' => 26,
        'tab_section' => 27,
        'text_card' => 28,
        'text_l_media_r_section' => 29,
        'text_section' => 30,
        'title_section' => 31,
        'video_section' => 32,
        'video_section_inner_page' => 33,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-steps_section-field_steps'.
  $field_instances['paragraphs_item-steps_section-field_steps'] = array(
    'bundle' => 'steps_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_steps',
    'label' => 'Steps',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-tab_item-field_image'.
  $field_instances['paragraphs_item-tab_item-field_image'] = array(
    'bundle' => 'tab_item',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => TRUE,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'paragraphs_item-tab_item-field_product_title'.
  $field_instances['paragraphs_item-tab_item-field_product_title'] = array(
    'bundle' => 'tab_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_product_title',
    'label' => 'Product title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-tab_item-field_text'.
  $field_instances['paragraphs_item-tab_item-field_text'] = array(
    'bundle' => 'tab_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-tab_item-field_title'.
  $field_instances['paragraphs_item-tab_item-field_title'] = array(
    'bundle' => 'tab_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-tab_section-field_sections'.
  $field_instances['paragraphs_item-tab_section-field_sections'] = array(
    'bundle' => 'tab_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_sections',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_image_section' => -1,
        '1_big_image_with_text_section' => -1,
        '2_blocks_section' => -1,
        '2_media_section' => -1,
        '4_1_images_section' => -1,
        'accordion_item' => -1,
        'accordion_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => -1,
        'block_item' => -1,
        'card_item' => -1,
        'county_section' => -1,
        'events_section' => -1,
        'icon_item' => -1,
        'icons_section' => -1,
        'image_text_item' => -1,
        'images_l_texts_r_section' => -1,
        'key_numbers_card' => -1,
        'keys_numbers_section' => -1,
        'media_l_text_r_2_buttons_section' => -1,
        'media_l_text_r_section' => 'media_l_text_r_section',
        'more_section' => -1,
        'process_section' => -1,
        'product_block' => -1,
        'product_card' => -1,
        'products_highlight_section' => 'products_highlight_section',
        'steps_section' => -1,
        'tab_item' => -1,
        'tab_section' => -1,
        'text_card' => -1,
        'text_l_media_r_section' => 'text_l_media_r_section',
        'text_section' => -1,
        'title_section' => -1,
        'video_section' => -1,
        'video_section_inner_page' => -1,
      ),
      'bundle_weights' => array(
        '1_big_image_section' => 2,
        '1_big_image_with_text_section' => 35,
        '2_blocks_section' => 3,
        '2_media_section' => 4,
        '4_1_images_section' => 5,
        'accordion_item' => 6,
        'accordion_section' => 7,
        'banner_item_section' => 8,
        'banner_section' => 9,
        'block_item' => 10,
        'card_item' => 11,
        'county_section' => 12,
        'events_section' => 13,
        'icon_item' => 15,
        'icons_section' => 14,
        'image_text_item' => 17,
        'images_l_texts_r_section' => 16,
        'key_numbers_card' => 19,
        'keys_numbers_section' => 18,
        'media_l_text_r_2_buttons_section' => 20,
        'media_l_text_r_section' => 21,
        'more_section' => 22,
        'process_section' => 56,
        'product_block' => 24,
        'product_card' => 25,
        'products_highlight_section' => 23,
        'steps_section' => 60,
        'tab_item' => 61,
        'tab_section' => 26,
        'text_card' => 27,
        'text_l_media_r_section' => 28,
        'text_section' => 29,
        'title_section' => 30,
        'video_section' => 31,
        'video_section_inner_page' => 32,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-tab_section-field_title'.
  $field_instances['paragraphs_item-tab_section-field_title'] = array(
    'bundle' => 'tab_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-text_card-field_link'.
  $field_instances['paragraphs_item-text_card-field_link'] = array(
    'bundle' => 'text_card',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'paragraphs_item-text_card-field_text'.
  $field_instances['paragraphs_item-text_card-field_text'] = array(
    'bundle' => 'text_card',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 40,
        ),
        'type' => 'text_trimmed',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-text_card-field_title'.
  $field_instances['paragraphs_item-text_card-field_title'] = array(
    'bundle' => 'text_card',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-text_l_media_r_section-field_image'.
  $field_instances['paragraphs_item-text_l_media_r_section-field_image'] = array(
    'bundle' => 'text_l_media_r_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-text_l_media_r_section-field_link'.
  $field_instances['paragraphs_item-text_l_media_r_section-field_link'] = array(
    'bundle' => 'text_l_media_r_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-text_l_media_r_section-field_logo'.
  $field_instances['paragraphs_item-text_l_media_r_section-field_logo'] = array(
    'bundle' => 'text_l_media_r_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '164x57_simplecrop',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_logo',
    'label' => 'Logo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-text_l_media_r_section-field_media_type'.
  $field_instances['paragraphs_item-text_l_media_r_section-field_media_type'] = array(
    'bundle' => 'text_l_media_r_section',
    'default_value' => array(
      0 => array(
        'value' => 'img',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_media_type',
    'label' => 'Media type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-text_l_media_r_section-field_text'.
  $field_instances['paragraphs_item-text_l_media_r_section-field_text'] = array(
    'bundle' => 'text_l_media_r_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-text_l_media_r_section-field_title'.
  $field_instances['paragraphs_item-text_l_media_r_section-field_title'] = array(
    'bundle' => 'text_l_media_r_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-text_l_media_r_section-field_video'.
  $field_instances['paragraphs_item-text_l_media_r_section-field_video'] = array(
    'bundle' => 'text_l_media_r_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'video',
        'settings' => array(
          'poster_image_style' => '',
          'widthxheight' => '510x390',
        ),
        'type' => 'video_formatter_player',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_video',
    'label' => 'Video',
    'required' => 0,
    'settings' => array(
      'default_dimensions' => '640x360',
      'file_directory' => 'videos/original',
      'file_extensions' => 'mp4 ogg avi mov wmv flv ogv webm',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'video',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'video_upload',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-text_l_media_r_section-field_video_cover'.
  $field_instances['paragraphs_item-text_l_media_r_section-field_video_cover'] = array(
    'bundle' => 'text_l_media_r_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_video_cover',
    'label' => 'Video cover',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'paragraphs_item-text_section-field_text'.
  $field_instances['paragraphs_item-text_section-field_text'] = array(
    'bundle' => 'text_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-video_section-field_image'.
  $field_instances['paragraphs_item-video_section-field_image'] = array(
    'bundle' => 'video_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '956x450_simplecrop',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-video_section-field_link'.
  $field_instances['paragraphs_item-video_section-field_link'] = array(
    'bundle' => 'video_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-video_section-field_section_title'.
  $field_instances['paragraphs_item-video_section-field_section_title'] = array(
    'bundle' => 'video_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_title',
    'label' => 'Section title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-video_section-field_video'.
  $field_instances['paragraphs_item-video_section-field_video'] = array(
    'bundle' => 'video_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'video',
        'settings' => array(
          'poster_image_style' => 'simplecrop',
          'widthxheight' => '956x450',
        ),
        'type' => 'video_formatter_player',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_video',
    'label' => 'Video',
    'required' => 0,
    'settings' => array(
      'default_dimensions' => '960x400',
      'file_directory' => 'videos/original',
      'file_extensions' => 'mp4 ogg avi mov wmv flv ogv webm',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'video',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'video_upload',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'paragraphs_item-video_section-field_video_cover'.
  $field_instances['paragraphs_item-video_section-field_video_cover'] = array(
    'bundle' => 'video_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_video_cover',
    'label' => 'Video cover',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => 450,
              'width' => 956,
            ),
            'ratio' => array(
              'height' => 450,
              'width' => 956,
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'cropped_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-video_section_inner_page-field_video'.
  $field_instances['paragraphs_item-video_section_inner_page-field_video'] = array(
    'bundle' => 'video_section_inner_page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'video',
        'settings' => array(
          'poster_image_style' => '',
          'widthxheight' => '956x450',
        ),
        'type' => 'video_formatter_player',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_video',
    'label' => 'Video',
    'required' => 0,
    'settings' => array(
      'default_dimensions' => '640x360',
      'file_directory' => 'videos/original',
      'file_extensions' => 'mp4 ogg avi mov wmv flv ogv webm',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'video',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'video_upload',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-video_section_inner_page-field_video_cover'.
  $field_instances['paragraphs_item-video_section_inner_page-field_video_cover'] = array(
    'bundle' => 'video_section_inner_page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_video_cover',
    'label' => 'Video cover',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'cropped_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Accordion items');
  t('Banner section');
  t('Blocks');
  t('Cards');
  t('Date');
  t('Date end');
  t('Description');
  t('Display quote button');
  t('Exclude title from display');
  t('Icon');
  t('Icons');
  t('Image');
  t('Images');
  t('Link');
  t('Logo');
  t('Media type');
  t('Other sections');
  t('Place');
  t('Product cards');
  t('Product title');
  t('Section title');
  t('Sections');
  t('Steps');
  t('Subtitle');
  t('Tabs');
  t('Text');
  t('Text cards');
  t('Title');
  t('Video');
  t('Video cover');

  return $field_instances;
}
