/**
 * Modified by Devanand
 */
(function ($) {

    //to show or not to show the referrer banner.
    var toShowOrNotToShow = function(){
        var lsBanner = localStorage.getItem("redirect");
        var ssBanner = sessionStorage.getItem("redirect");

        if(!lsBanner && (window.location.href.indexOf("rd=1") > -1 || ssBanner)){
            showBanner();
        }

    };

    var showBanner = function(){
        $('.banner-redirect>div').show();
        sessionStorage.setItem("redirect", "shown");
    };

    var hideBanner = function(){
        $('.banner-redirect>div').hide();
        localStorage.setItem("redirect", "seen");
    };

    toShowOrNotToShow();

    $('.social-icons-blk').find('.fa').html('');
    $('.dropdown-links').find('div:not(.col-lg-4)').hide();
    $('.usr-menu').find('li.is-expandable>a>p').hide();
    $('.not-link:odd').after('<div class="clearfix"><div>');
    $('.copy-links').find('li:last>a').hover().css('text-decoration', 'none').css('cursor','default');

    $('.lang-selector ul li.active a img').clone().appendTo('.pronq-lang-active-flag');
    //$('.pronq-lang-active-flag').append(currFlag);

    $('.banner-redirect .blk-close').on('click', function(){
        $('.banner-redirect>div').slideUp();

        //setting session var to indicate redirect banner
        //shown and closed
        hideBanner();
    });

    $('.sec-menu').first().fadeIn('fast');

    $('.uk-navbar-nav > li.is-expandable > a').on('click', openMenu);

    $('.navbar-nav-hz').find('a.menu-link').on('click', openMenu);
    $('.uk-navbar-nav').find('li').on('click', function(event) { event.stopPropagation(); } );


    $('.nav-trigger').on('click', function() {
        if($('#nav-icon').hasClass('open')){
            closeMobileNavmenu();

        } else {
            openMobileNavmenu();
        }
    })







    // $('.navbar-secondary').find('a.sec-link.clickable').on('click', function(){
    // 	if ($(this).hasClass('close-link')){
    // 		closeMenu();
    // 	} else {

    // 		$('.sec-item').removeClass('active');
    // 		$('.sec-menu').fadeOut(100);
    // 		$(this).parent().addClass('active');
    // 		$(this).parent().find('.sec-menu').fadeIn(300);
    // 		var theMenu = $(this).parent().find('.sec-menu').height();
    // 		getHeight(theMenu);
    // 	}

    // });


    $('.has-menu').on('click', function(){
        $('.navbar-secondary li').removeClass('active');
        $('.dropdown-secondary').addClass('uk-hidden');
        console.log('pluggedin');
        $(this).find('.dropdown-secondary').removeClass('uk-hidden');
        $(this).addClass('active');


    });

    //$('.is-expandable').on('mouseleave', closeMenu);
    // $('.is-expandable').on('mouseleave', closeMenu);

    $('body').off('click').on('click', closeMenu);
    $('.dropbig').off('click').on('click', closeMenu);
    $('.close-link').on('click', closeMenu);


    function openMenu(e) {
        e.preventDefault();
        if ($(this).parent().hasClass('active')) {
            closeMenu();
        } else {
            $('.is-expandable').removeClass('active');
            $('.dropdown-hz').slideUp('fast');
            $(this).parent().find('.dropdown-hz').slideDown('fast');
            $('.navbar-nav-hz').find('li.main-l').removeClass('active');
            $(this).parent().addClass('active');

            $('.navbar-secondary li').first().addClass('active');
            $('.dropdown-secondary').addClass('uk-hidden');
            $('.dropdown-secondary').first().removeClass('uk-hidden');
            $('.overlay').css('display', 'block');
        }



    }
    function closeMenu() {
        $('.is-expandable').removeClass('active');
        $('.dropdown-hz').slideUp();
        $('.uk-navbar-nav').find('li').removeClass('active');
        $('.overlay').css('display', 'none');

        //$('body').trigger('click', function(){
        //})
    }

    function getHeight(theMenu) {
        // var menuHeight = $(theMenu).height();
        $('.navbar-secondary').height(theMenu+20);
    }

    function openMobileNavmenu(e) {
        // e.stopPropagation();
        // console.log('hello');
        // $('#nav-toggle').addClass('active');
        $('#nav-icon').addClass('open');

        // $('section, footer').addClass('uk-hidden');

        $('.hp-mobile-navmenu').slideDown(900);
    }

    function closeMobileNavmenu(e) {
        // e.stopPropagation();
        console.log('bye');
        // $('section, footer').removeClass('uk-hidden');

        $('.hp-mobile-navmenu').slideUp(900);
        $('#nav-toggle').removeClass('active');
        $('#nav-icon').removeClass('open');


    }


})(jQuery);