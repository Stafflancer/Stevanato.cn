(function($, Drupal) {
  Drupal.behaviors.stevanato_common_event_node_form = {
    attach: function (context, settings) {

      console.log($(".field-name-field-date-end #edit-field-date-end-und-0-value-day"));
      $(".field-name-field-date #edit-field-date-und-0-value .form-item-field-date-und-0-value-year").prependTo(".field-name-field-date #edit-field-date-und-0-value");

      $('<div class="form-item"><label for="edit-field-date-end-und-0-value-day">&emsp;</label><span>&ndash;</span></div>').clone().appendTo(".field-name-field-date #edit-field-date-und-0-value");
      $(".field-name-field-date-end .form-item-field-date-end-und-0-value-day").clone().appendTo(".field-name-field-date #edit-field-date-und-0-value");

      var date_filter_custom = $(".field-name-field-date #edit-field-date-und-0-value");
      date_filter_custom.change(function() {

        var obj = {
          0: 'day',
          1: 'month',
          2: 'year'
        };
        $.each(obj, function(key, value) {

          if (value == 'day') {
            select = $(".field-name-field-date #edit-field-date-und-0-value #edit-field-date-end-und-0-value-" + value);
          }
          else {
            select = $(".field-name-field-date #edit-field-date-und-0-value #edit-field-date-und-0-value-" + value);
          }
          $(".field-name-field-date-end #edit-field-date-end-und-0-value #edit-field-date-end-und-0-value-" + value)
          .val(select.val());
        });
      });

    }
  };
})(jQuery, Drupal);
