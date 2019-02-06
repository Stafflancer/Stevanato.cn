<?php

/**
 * @file
 * stevatato_content_types.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function stevatato_content_types_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'banner';
  $bean_type->label = 'Banner';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['banner'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'logo';
  $bean_type->label = 'Logo';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['logo'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'quote_button';
  $bean_type->label = 'Quote button';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['quote_button'] = $bean_type;

  return $export;
}
