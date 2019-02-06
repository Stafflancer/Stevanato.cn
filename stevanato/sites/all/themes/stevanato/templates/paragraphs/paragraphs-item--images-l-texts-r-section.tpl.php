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
      
      <div class="desktop-section">
        <?php print render($content); ?>
      </div>
      
      <div class="mobile-sections">
        <?php print render($content['field_section_title']); ?>
        <div class="field field-name-field-images field-type-image field-label-hidden">
          <div class="field-items">
            <div class="field-item">
              <?php print render($content['field_images'][0]); ?>
              <?php print render($content['field_text_cards'][0]); ?>
            </div>
            <div class="field-item">
              <?php print render($content['field_images'][1]); ?>
              <?php print render($content['field_text_cards'][1]); ?>
            </div>
          </div>
        </div>
      </div>

    </div>
  </div>
</div>
