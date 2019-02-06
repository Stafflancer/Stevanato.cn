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
?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="block-row">
    <div class="content"<?php print $content_attributes; ?>>

    	<?php if ($content['field_media_type']['#items'][0]['value'] == 'img'): ?>
    		<?php print render($content['field_image']); ?>
    	<?php else: ?>
            <div class="field-video">
                <div class="video-cover">
            		<?php print render($content['field_video']); ?>
            		<?php print render($content['field_video_cover']); ?>
                </div>
            </div>
    	<?php endif; ?>

    	<?php if ($content['field_media_type_2']['#items'][0]['value'] == 'img'): ?>
    		<?php print render($content['field_image_2']); ?>
    	<?php else: ?>
            <div class="field-video">
                <div class="video-cover">
            		<?php print render($content['field_video_2']); ?>
            		<?php print render($content['field_video_cover_2']); ?>
                </div>
            </div>
    	<?php endif; ?>
      
    </div>
  </div>
</div>
