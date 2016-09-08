/*! Main */
jQuery(document).ready(function($) {
    // Sticky navbar.
    var top = $('#navbar').offset().top - parseFloat($('#navbar').css('marginTop').replace(/auto/, 10));
    // Returns height of browser viewport
    var viewport_height = $( window ).height();
    // Returns height of HTML document
    var dom_height = $( document ).height();
    var scroll_height = dom_height - viewport_height;
    $(window).scroll(function (event) {
        if (top <= 0) {
            top = $('#navbar').offset().top - parseFloat($('#navbar').css('marginTop').replace(/auto/, 10));
        }
        // what the y position of the scroll is
        var y = $(this).scrollTop();
        // whether that's below the form
        // Only have a floating menu if the page height warrants it by being tall.
        if ((y >= top) && (top > 0) && ((y + 200) < scroll_height)) {
            // if so, ad the fixed class
            $('#navbar').addClass('fixed');
        } else if (y == 0) {
            // otherwise remove it
            $('#navbar').removeClass('fixed');
        }
    });
    // Stack main navigation menu when header
    // and menu side by side is too wide.
    var navbarStacker = function(){
        var window_width = $( window ).width();
        var $navbar = $('#navbar');
        var $navbar_header = $navbar.find('.navbar-header');
        var navbar_header_width = $navbar_header.width();
        var $navbar_menu_container = $navbar.find('.navbar-collapse');
        $navbar_menu_container.css('width', '');
        var navbar_menu_width = $navbar_menu_container.find('ul.menu').width();
        if (window_width >= 768 && window_width < (navbar_header_width + navbar_menu_width + 30)) {
            $navbar.addClass('stacked');
            $navbar_menu_container.css('width', navbar_menu_width+1);
        }
        else{
            $navbar.removeClass('stacked');
            $navbar_menu_container.css('width', '');
        }
    };
    // Wait for DOM completely so widths are
    // accurate on first run from loading page.
    window.setTimeout(function(){ navbarStacker(); }, 100);
    $( window ).resize(function() {
        navbarStacker();
    });
});