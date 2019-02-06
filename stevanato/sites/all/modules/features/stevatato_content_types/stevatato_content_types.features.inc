<?php

/**
 * @file
 * stevatato_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stevatato_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function stevatato_content_types_image_default_styles() {
  $styles = array();

  // Exported image style: 1170x400_simplecrop.
  $styles['1170x400_simplecrop'] = array(
    'label' => '1170x400 SimpleCrop',
    'effects' => array(
      19 => array(
        'name' => 'simplecrop',
        'data' => array(),
        'weight' => 1,
      ),
      20 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1170,
          'height' => 400,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 150x150_simplecrop.
  $styles['150x150_simplecrop'] = array(
    'label' => '150x150 SimpleCrop',
    'effects' => array(
      29 => array(
        'name' => 'simplecrop',
        'data' => array(),
        'weight' => 1,
      ),
      30 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => 150,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 154x154_simplecrop.
  $styles['154x154_simplecrop'] = array(
    'label' => '154x154 SimpleCrop',
    'effects' => array(
      27 => array(
        'name' => 'simplecrop',
        'data' => array(),
        'weight' => 1,
      ),
      28 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 154,
          'height' => 154,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 164x57_simplecrop.
  $styles['164x57_simplecrop'] = array(
    'label' => '164x57 SimpleCrop',
    'effects' => array(
      17 => array(
        'name' => 'simplecrop',
        'data' => array(),
        'weight' => 1,
      ),
      18 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 164,
          'height' => 57,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 270x193_simplecrop.
  $styles['270x193_simplecrop'] = array(
    'label' => '270x193 SimpleCrop',
    'effects' => array(
      25 => array(
        'name' => 'simplecrop',
        'data' => array(),
        'weight' => 1,
      ),
      26 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 270,
          'height' => 193,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 330x450_simplecrop.
  $styles['330x450_simplecrop'] = array(
    'label' => '330x450 SimpleCrop',
    'effects' => array(
      10 => array(
        'name' => 'simplecrop',
        'data' => array(),
        'weight' => 1,
      ),
      12 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 330,
          'height' => 450,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 370x268_simplecrop.
  $styles['370x268_simplecrop'] = array(
    'label' => '370x268 SimpleCrop',
    'effects' => array(
      21 => array(
        'name' => 'simplecrop',
        'data' => array(),
        'weight' => 1,
      ),
      22 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 370,
          'height' => 268,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 510x390_simplecrop.
  $styles['510x390_simplecrop'] = array(
    'label' => '510x390 SimpleCrop',
    'effects' => array(
      16 => array(
        'name' => 'simplecrop',
        'data' => array(),
        'weight' => 0,
      ),
      15 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 510,
          'height' => 390,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 510x510_simplecrop.
  $styles['510x510_simplecrop'] = array(
    'label' => '510x510 SimpleCrop',
    'effects' => array(
      31 => array(
        'name' => 'simplecrop',
        'data' => array(),
        'weight' => 1,
      ),
      32 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 510,
          'height' => 510,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 575x390_simplecrop.
  $styles['575x390_simplecrop'] = array(
    'label' => '575x390 SimpleCrop',
    'effects' => array(
      14 => array(
        'name' => 'simplecrop',
        'data' => array(),
        'weight' => 0,
      ),
      13 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 575,
          'height' => 390,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 585x360_simplecrop.
  $styles['585x360_simplecrop'] = array(
    'label' => '585x360 SimpleCrop',
    'effects' => array(
      23 => array(
        'name' => 'simplecrop',
        'data' => array(),
        'weight' => 1,
      ),
      24 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 585,
          'height' => 360,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 956x450_simplecrop.
  $styles['956x450_simplecrop'] = array(
    'label' => '956x450 SimpleCrop',
    'effects' => array(
      2 => array(
        'name' => 'simplecrop',
        'data' => array(),
        'weight' => 1,
      ),
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 956,
          'height' => 450,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: footer_image.
  $styles['footer_image'] = array(
    'label' => 'Footer image SimpleCrop',
    'effects' => array(
      6 => array(
        'name' => 'simplecrop',
        'data' => array(),
        'weight' => 0,
      ),
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 490,
          'height' => 77,
          'upscale' => 0,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: logo_simplecrop.
  $styles['logo_simplecrop'] = array(
    'label' => 'Logo SimpleCrop',
    'effects' => array(
      8 => array(
        'name' => 'simplecrop',
        'data' => array(),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: qr_code.
  $styles['qr_code'] = array(
    'label' => 'QR code',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 78,
          'height' => 78,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumbnail_simplecrop.
  $styles['thumbnail_simplecrop'] = array(
    'label' => 'Thumbnail (100x100) SimpleCrop',
    'effects' => array(
      3 => array(
        'name' => 'simplecrop',
        'data' => array(),
        'weight' => 0,
      ),
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function stevatato_content_types_node_info() {
  $items = array(
    'about_us' => array(
      'name' => t('About us'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'contact_us' => array(
      'name' => t('Contact us'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event detail'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'homepage' => array(
      'name' => t('Homepage'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'multitabs' => array(
      'name' => t('Multitabs page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Regular page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'platform' => array(
      'name' => t('Platform detail page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'popup' => array(
      'name' => t('Pop up'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product' => array(
      'name' => t('Product'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function stevatato_content_types_paragraphs_info() {
  $items = array(
    '1_big_image_section' => array(
      'name' => '1 big image section',
      'bundle' => '1_big_image_section',
      'locked' => '1',
    ),
    '1_big_image_with_text_section' => array(
      'name' => '1 big image section',
      'bundle' => '1_big_image_with_text_section',
      'locked' => '1',
    ),
    '2_blocks_section' => array(
      'name' => '2 blocks section',
      'bundle' => '2_blocks_section',
      'locked' => '1',
    ),
    '2_media_section' => array(
      'name' => '2 media section',
      'bundle' => '2_media_section',
      'locked' => '1',
    ),
    '4_1_images_section' => array(
      'name' => '4 + 1 images section',
      'bundle' => '4_1_images_section',
      'locked' => '1',
    ),
    'accordion_item' => array(
      'name' => 'Accordion item',
      'bundle' => 'accordion_item',
      'locked' => '1',
    ),
    'accordion_section' => array(
      'name' => 'Accordion section',
      'bundle' => 'accordion_section',
      'locked' => '1',
    ),
    'banner_item_section' => array(
      'name' => 'Banner item section',
      'bundle' => 'banner_item_section',
      'locked' => '1',
    ),
    'banner_section' => array(
      'name' => 'Banner section',
      'bundle' => 'banner_section',
      'locked' => '1',
    ),
    'block_item' => array(
      'name' => 'Block item',
      'bundle' => 'block_item',
      'locked' => '1',
    ),
    'card_item' => array(
      'name' => 'Card item',
      'bundle' => 'card_item',
      'locked' => '1',
    ),
    'county_section' => array(
      'name' => 'County section',
      'bundle' => 'county_section',
      'locked' => '1',
    ),
    'events_section' => array(
      'name' => 'Events section',
      'bundle' => 'events_section',
      'locked' => '1',
    ),
    'icon_item' => array(
      'name' => 'Icon item',
      'bundle' => 'icon_item',
      'locked' => '1',
    ),
    'icons_section' => array(
      'name' => 'Icons section',
      'bundle' => 'icons_section',
      'locked' => '1',
    ),
    'image_text_item' => array(
      'name' => 'Image + text item',
      'bundle' => 'image_text_item',
      'locked' => '1',
    ),
    'images_l_texts_r_section' => array(
      'name' => 'Images L / Texts R section',
      'bundle' => 'images_l_texts_r_section',
      'locked' => '1',
    ),
    'key_numbers_card' => array(
      'name' => 'Key numbers card',
      'bundle' => 'key_numbers_card',
      'locked' => '1',
    ),
    'keys_numbers_section' => array(
      'name' => 'Keys numbers section',
      'bundle' => 'keys_numbers_section',
      'locked' => '1',
    ),
    'media_l_text_r_2_buttons_section' => array(
      'name' => 'Media L / Text R + 2 buttons section',
      'bundle' => 'media_l_text_r_2_buttons_section',
      'locked' => '1',
    ),
    'media_l_text_r_section' => array(
      'name' => 'Media L / Text R section',
      'bundle' => 'media_l_text_r_section',
      'locked' => '1',
    ),
    'more_section' => array(
      'name' => 'More section',
      'bundle' => 'more_section',
      'locked' => '1',
    ),
    'process_section' => array(
      'name' => 'Process section',
      'bundle' => 'process_section',
      'locked' => '1',
    ),
    'product_block' => array(
      'name' => 'Product block',
      'bundle' => 'product_block',
      'locked' => '1',
    ),
    'product_card' => array(
      'name' => 'Product card',
      'bundle' => 'product_card',
      'locked' => '1',
    ),
    'products_highlight_section' => array(
      'name' => 'Products highlight section',
      'bundle' => 'products_highlight_section',
      'locked' => '1',
    ),
    'steps_section' => array(
      'name' => 'Steps section',
      'bundle' => 'steps_section',
      'locked' => '1',
    ),
    'tab_item' => array(
      'name' => 'Tab item',
      'bundle' => 'tab_item',
      'locked' => '1',
    ),
    'tab_section' => array(
      'name' => 'Tab section',
      'bundle' => 'tab_section',
      'locked' => '1',
    ),
    'text_card' => array(
      'name' => 'Text card',
      'bundle' => 'text_card',
      'locked' => '1',
    ),
    'text_l_media_r_section' => array(
      'name' => 'Text L / Media R section',
      'bundle' => 'text_l_media_r_section',
      'locked' => '1',
    ),
    'text_section' => array(
      'name' => 'Text section',
      'bundle' => 'text_section',
      'locked' => '1',
    ),
    'title_section' => array(
      'name' => 'Title section',
      'bundle' => 'title_section',
      'locked' => '1',
    ),
    'video_section' => array(
      'name' => 'Video section',
      'bundle' => 'video_section',
      'locked' => '1',
    ),
    'video_section_inner_page' => array(
      'name' => 'Video section',
      'bundle' => 'video_section_inner_page',
      'locked' => '1',
    ),
  );
  return $items;
}
