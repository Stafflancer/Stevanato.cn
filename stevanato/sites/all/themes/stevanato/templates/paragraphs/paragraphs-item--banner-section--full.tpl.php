<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */

// dpm($content);
?>

<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
		<!-- Banner section -->
		<div class="banner-wrapper">
		  <div class="main-carousel">
		    <ul class="carousel">
		      <?php foreach ($content['field_sections']['#items'] as $key => $item): ?>
		      	<?php 
		      		$pid = $item['value'];
		      		$item_fields = $content['field_sections'][$key]['entity']['paragraphs_item'][$pid]; 
		      	?>
		        <li>
		          <div class="banner-content" style="background-image: url(<?php print image_style_url($item_fields['field_image'][0]['#image_style'], $item_fields['field_image'][0]['#item']['uri']) ?>);">
		          	<div class="main-banner-text">
			            <div class="title">
			              <?php print render($item_fields['field_title_html']); ?>
			            </div>
			            
			            <div class="subtitle">
			              <?php print render($item_fields['field_subtitle_html']); ?>
			            </div>

			            <?php print render($item_fields['field_link']); ?>
			            <?php print render($item_fields['field_share']); ?>
		            </div>
		          </div>
		        </li>
		      <?php endforeach; ?>
		    </ul>
		  </div>
		</div>
		<!-- // Banner section -->
  </div>
</div>
