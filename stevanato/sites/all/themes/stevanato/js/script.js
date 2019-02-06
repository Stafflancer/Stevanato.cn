(function($, Drupal) {


  Drupal.behaviors.main_script = {
    attach:function(context, settings) {
      $(document).ready(function() {

        // Dropdown Language block (header)
        // $('#block-locale-language a.active').removeAttr('href');
        // $('#block-locale-language a.active').unbind('click').bind('click', function() {
        //   $(this).closest('#block-locale-language').toggleClass('open-lang', 500);
        // });

        // Sliders
        // Slider Front (Banner)
        $('.main-carousel ul.carousel').not('.slick-initialized').slick({
          infinite: false,
          slidesToShow: 1,
          slidesToScroll: 1,
          arrows: false,
          dots: false,
          autoplay: true,
          autoplaySpeed: 7000,
          pauseOnHover: true,
        });
        // Slider Front (Product)
        $('.paragraphs-items-field-product-cards > .field-name-field-product-cards > .field-items').not('.slick-initialized').slick({
          infinite: false,
          slidesToShow: 3,
          slidesToScroll: 1,
          arrows: false,
          dots: false,
          responsive: [
            {
              breakpoint: 799,
              settings: {
                slidesToShow: 1,
                slidesToScroll: 1,
                infinite: false,
                centerMode: true,
                variableWidth: true,
                dots: true
              }
            },
            {
              breakpoint: 480,
              settings: {
                slidesToShow: 1,
                slidesToScroll: 1,
                infinite: false,
                centerMode: false,
                variableWidth: false,
                dots: true
              }
            }
          ]
        });
        $('.m-tabs a').unbind('click').bind('click', function() {
          setTimeout(function() {
            $('[style*="display: block"] .paragraphs-items-field-product-cards > .field-name-field-product-cards > .field-items').get(0).slick.setPosition();
          }, 100);
          $('[style*="display: block"] .paragraphs-items-field-product-cards > .field-name-field-product-cards > .field-items').get(0).slick.setPosition();
        });
        // Slider Regular page
        $('.paragraphs-item-more-section .paragraphs-items-field-cards > .field-name-field-cards > .field-items').not('.slick-initialized').slick({
          infinite: false,
          slidesToShow: 4,
          slidesToScroll: 1,
          arrows: true,
          dots: false,
          centerMode: true,
          variableWidth: true,
          responsive: [
            {
              breakpoint: 799,
              settings: {
                slidesToShow: 1,
                slidesToScroll: 1,
                infinite: false,
                dots: true
              }
            },
            {
              breakpoint: 480,
              settings: {
                slidesToShow: 1,
                slidesToScroll: 1,
                infinite: false,
                centerMode: false,
                variableWidth: false,
                dots: true
              }
            }
          ]
        });

        $('.slick-next').click();

        $('.slick-current').prev().prev().addClass('opacity');
        $('.slick-current').next().next().addClass('opacity');
        $('.slick-arrow').click(function() {
          $('.slick-slide').removeClass('opacity');
          $('.slick-current').prev().prev().addClass('opacity');
          $('.slick-current').next().next().addClass('opacity');
        });
        $('.paragraphs-item-more-section').mouseup(function() {
          $('.slick-slide').removeClass('opacity');
          $('.slick-current').prev().prev().addClass('opacity');
          $('.slick-current').next().next().addClass('opacity');
        });

        var widthDocument = $(document).width();
        if (widthDocument <= 1024) {
          $('.slick-current').prev().addClass('opacity');
          $('.slick-current').next().addClass('opacity');
          $('.slick-arrow').click(function() {
            $('.slick-slide').removeClass('opacity');
            $('.slick-current').prev().addClass('opacity');
            $('.slick-current').next().addClass('opacity');
          });
          $('.paragraphs-item-more-section').on('swipe', function(e) {
            $('.slick-slide').removeClass('opacity');
            $('.slick-current').prev().addClass('opacity');
            $('.slick-current').next().addClass('opacity');
          });
        }

        var itemsSlider = $('.paragraphs-item-more-section .paragraphs-items-field-cards > .field-name-field-cards .slick-track > .slick-slide').length;
        if (itemsSlider <= 4) {
          $('.paragraphs-item-more-section .paragraphs-items-field-cards > .field-name-field-cards .slick-track').addClass('slider-center');
          $('.slick-slide').removeClass('opacity');
          $('.paragraphs-item-more-section').mouseup(function() {
            $('.slick-slide').removeClass('opacity');
          });
        }

        // Accordion
        function accordion(nameHead, namebody) {
          $(nameHead).unbind("click").bind("click", function() {
            if(!$(this).hasClass('active-acc')) {  // if the "clicked" item is inactive:
              $(nameHead).removeClass('active-acc').next(namebody).slideUp();  // make all items inactive
              $(this).addClass('active-acc');  // activate the "clicked" item
              $(this).next(namebody).slideDown(300);  // open the block following it with the description
            } else {  //otherwise:
              $(this).removeClass('active-acc').next(namebody).slideUp(); // hide this paragraph
            }
          });
        }
        // About Us
        accordion('.paragraphs-item-accordion-item .field-name-field-title', '.paragraphs-item-accordion-section .field-name-field-text');
        // Events
        var widthDoc = $(document).width();
        if (widthDoc >= 1025) {
          $('ul.events-filters li:first-child span').addClass('active-acc');
          $('ul.events-filters li:first-child ul').show();
        }
        accordion('ul.events-filters li span', 'ul.events-filters li ul');
        
        // Fix menu for mobile
        $(window).scroll(function(event){
          var st = $(this).scrollTop();
          var lastScrollTop = 130;
          if (st > lastScrollTop) {
            $('body').removeClass('scroll-up');
            $('body').addClass('scroll-down');
          }
          lastScrollTop = st;
        });
        var lastScrollTop = 0;
        $(window).scroll(function(event){
          var st = $(this).scrollTop();
          if (st < lastScrollTop){
            $('body').removeClass('scroll-down');
            $('body').addClass('scroll-up');
          }
          lastScrollTop = st;
        });

        // Language dropdown (switcher)
        $('#block-block-1 .ch').unbind('click').bind('click', function() {
          $(this).next('li').slideToggle();
        });

        // Mobile header
        // Mobile menu 
        $('#header .toggle').unbind('click').bind('click', function() {
          $(this).toggleClass('open');
          $('#block-system-main-menu').slideToggle(300);
        });

        // Show / Hide search (mobile)
        $('.mobile-search').unbind('click').bind('click', function() {
          $('#block-search-form').show();
          $('.close-search').show();
        });

        $('.close-search').unbind('click').bind('click', function() {
          console.log('123');
          $('#block-search-form').hide();
          $(this).hide();
        });

        // 
        $('#block-block-1').clone().appendTo('#block-system-main-menu');

        // Play Video
        // Front page
        $('.bg-video-cover').unbind('click').bind('click', function() {
          $('video').get(0).play();
          $(this).hide();
        });
        // Regular page
        $('.field-name-field-video + .field-name-field-video-cover').unbind('click').bind('click', function() {
          $(this).prev('.field-name-field-video').find('video').get(0).play();
          $(this).hide();
        });
        $('.field-name-field-video-2 + .field-name-field-video-cover').unbind('click').bind('click', function() {
          $(this).prev('.field-name-field-video-2').find('video').get(0).play();
          $(this).hide();
        });

        // Main menu
        $('ul.menu span').wrap('<a href="javascript: void(0);"></a>');
        var documentWidth = $(document).width();
        if (documentWidth <= 799) {
          $('#block-system-main-menu li.expanded > a').removeAttr('href');
        }
        $('#block-system-main-menu li.expanded > a').unbind('click').bind('click', function() {
          $(this).next('ul').slideToggle();
        });
        $('#block-system-main-menu .content > ul > li.expanded > a').unbind('click').bind('click', function() {
          $('#block-system-main-menu .content > ul > li').toggleClass('hide-menu-item');
          $(this).parent('li').toggleClass('open-menu');
          console.log('12');
        });
        $('#block-system-main-menu .content > ul > li.expanded li.expanded').unbind('click').bind('click', function() {
          $(this).toggleClass('arrow-down');
        });

        // Tabs
        $('.node-multitabs .field-name-field-sections > .field-items > .field-item:first > [id*="c-tab-"]').show();
        $('ul.m-tabs li:first').addClass('active')
        
        $("ul.m-tabs li").click(function() {
          $("ul.m-tabs li").removeClass("active");
          $(this).addClass("active");
          $('.node-multitabs .field-name-field-sections > .field-items > .field-item > [id*="c-tab-"], .paragraphs-items-field-tabs [id*="c-tab-"]').hide();
          var activeTab = $(this).find("a").attr("href");
          $(activeTab).fadeIn();
          return false;
        });

        // Product. If icons > 7 added class
        $('.paragraphs-item-icons-section .paragraphs-items-field-icons .field-name-field-icons > .field-items').each(function() {
          var quantityIcons = $(this).children('.field-item').length;
          if (quantityIcons >= 7) {
            $(this).addClass('col-icons');
          }
        });

        // Button up
        $('.btn-up').click(function() {
          $('body').animate({'scrollTop': 0}, 1000);
          $('html').animate({'scrollTop': 0}, 1000);
        });

        $(window).scroll(function() {
          if($(window).scrollTop() > 200){
            $('.btn-up').addClass('active');
          }
          else{
            $('.btn-up').removeClass('active');
          }
        });

        // Set fragment.
        if ($('.bean-quote-button .field-type-link-field a').attr('href') != undefined) {
          var fragment = $('.bean-quote-button .field-type-link-field a').attr('href').split('#')[1];
          $('.bean-quote-button .field-type-link-field a').attr('href', '#' + fragment);
        }

        // Trigger click for tab if exist tab fragment.
        if (location.hash != '' && $('body').hasClass('node-type-multitabs')) {
          $('.m-tabs a[href="' + location.hash + '"]').click();
        }


      });
    }
  }
}(jQuery, Drupal));
