<?php

/**
 * @file
 * Used to override the default entity template.
 * @see entity.tpl.php
 *
 * Available variables:
 * - $content:
 *   An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title:
 *   The (sanitized) entity label.
 * - $url:
 *   Direct url of the current entity if specified.
 * - $page:
 *   Flag for the full page state.
 * - $classes:
 *   String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-{ENTITY_TYPE}
 *   - {ENTITY_TYPE}-{BUNDLE}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $menu_fields: The full menu item field entity
 * - $field_*: Any fields available for the current menu item.
 */
?>

<?php if (empty($content['qr_code']['#items'])): ?>
  <a href="<?php print $content['menu_fields_link_path']['#markup']; ?>"><?php print render($content['icon']); ?></a>
<?php else: ?>
  <?php print render($content['icon']); ?>
  <?php print render($content['qr_code']); ?>
<?php endif; ?>
