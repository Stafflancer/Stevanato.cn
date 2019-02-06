(function ($, Drupal) {
  Drupal.behaviors.stevanato_common_load_images = {
    attach: function (context, settings) {

      $("img").each(function (index) {
        var this_image = $(this);
        $.fn.extend({
          renameAttr: function (name, newName, removeData) {
            var val;
            return this.each(function () {
              val = jQuery.attr(this, name);
              $.attr(this, newName, val);
              $.removeAttr(this, name);
              // remove original data
              if (removeData !== false) {
                $.removeData(this, name.replace('data-', ''));
              }
            });
          }
        });
        $(this_image).renameAttr('data-src', 'src');
      });

      $(".banner-content").each(function (index) {
        var this_image = $(this);
        $.fn.extend({
          renameAttr: function (name, newName, removeData) {
            var val;
            return this.each(function () {
              val = jQuery.attr(this, name);
              $.attr(this, newName, val);
              $.removeAttr(this, name);
              // remove original data
              if (removeData !== false) {
                $.removeData(this, name.replace('data-', ''));
              }
            });
          }
        });
        $(this_image).renameAttr('data-style', 'style');
      });

    }
  }
})(jQuery, Drupal);