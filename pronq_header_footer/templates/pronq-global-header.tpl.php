<?php
/**
* @file
* Default theme implementation to display a block.
*
* Available variables:
* - $pronq_header_menu: HTML string for the header menu.
*
* @see template_preprocess()
* @see template_preprocess_pronq_global_header()
* @see template_process()
*
* @ingroup themeable
*/
?>

<div class="row banner-redirect clearfix">
  <div class="container">
      <?php if (isset($hp_banner_redirect)):  ?>

        <?php print $hp_banner_redirect; ?>

        <div class="pull-right blk-close">
          &times;
        </div>
      <?php endif; ?>


  </div></div>

<nav class="hp-navbar uk-navbar clearfix uk-visible-large" ng-controller="headerFooterController">
  <div class="uk-container container uk-container-center">
    <a class="uk-navbar-brand hidden-xs hidden-sm" href="<?php print $header_footer_logo_link ?>"><div class="logo-white"></div></a>

    <ul class="uk-navbar-nav hidden-xs hidden-sm" ng-show="headerStyle">

      <?php if (!empty($pronq_header_nav)):  ?>

        <?php foreach ($pronq_header_nav as $delta => $item): ?>

          <?php $expandable = isset($item['children']) ? 'is-expandable' : ''; ?>

          <li class="<?php print $expandable ?>">

            <?php print render($item['link']); ?>

            <?php if (isset($expandable)):  ?>

             <div class="dropdown-hz dropbig">
               <div class="container">
                 <div class="drop-content">
                   <ul class="navbar-secondary">
                    <?php foreach ($item['children'] as $delta => $menu_child): ?>
                      <?php $has_menu = isset($menu_child['children']) ? 'has-menu' : ''; ?>
                      <li class="<?php print $has_menu ?>">
                        <?php $menu_child_link = is_array($menu_child) ? $menu_child['link'] : $menu_child;  ?>
                        <?php print render($menu_child_link); ?>
                        <?php if ($has_menu):  ?>
                         <?php if ($delta == 'by category'):  ?>
                          <div class="dropdown-secondary uk-hidden">
                            <div class="dropdown-summary-links row">
                              <?php foreach ($menu_child['children'] as $delta => $menu_child_children): ?>
                                <div class="not-link col-lg-6 col-md-6 col-sm-6">
                                <?php print render($menu_child_children); ?>
                              </div>
                             <?php endforeach; ?>
                           </div>
                          </div>
                         <?php elseif (trim($delta) == 'by name (a-z)'): ?>
                        <div class="dropdown-secondary">
                          <div class="dropdown-summary">
                            We offer an extensive list of both SaaS/on-demand and on-premise HP software that you can try and buy at your convenience. Transparently priced, designed to scale, and always at your service.
                          </div>
                          <div class="dropdown-links row">
                            <?php foreach ($menu_child['children'] as $delta => $menu_child_children): ?>
                              <div class="col-lg-4 col-md-4 col-sm-4">
                                <?php print render($menu_child_children); ?>
                              </div>
                            <?php endforeach; ?>
                         <?php else: ?>
                           <div class="dropdown-secondary uk-hidden">
                             <div class="dropdown-summary-links row">
                               <?php foreach ($menu_child['children'] as $delta => $menu_child_children): ?>
                                 <div class=" not-link col-lg-6">
                                   <?php print render($menu_child_children); ?>
                                 </div>
                               <?php endforeach; ?>
                             </div>
                           </div>
                         <?php endif; ?>
                        <?php endif; ?>

                      </li>
                    <?php endforeach; ?>
                     <li class="pull-right">
                       <a class="close-link" href="javascript:void(0)">&times;</a>
                     </li>
                  </ul>
                </div>
              </div>
            </div>
            <?php endif; ?>
          </li>
        <?php endforeach; ?>
      <?php endif; ?>
    </ul>



    <ul class="uk-navbar-nav usr-menu pull-right hidden-xs">

      <li class="is-expandable">
        <!-- {% verbatim %} -->
        <?php if($logged_in): ?>
          <a href="{{myaccounturl}}">{{username}}</a>
        <?php else: ?>
          <a href="{{myaccounturl}}">{{username}}</a>
        <?php endif; ?>
        <!-- {% endverbatim %} -->
        <div class="dropdown-hz dropsmall">
          <div class="uk-container uk-container-center">
            <div class="drop-content">
              <div class="navbar-secondary-signup">

                <!-- {% verbatim %} -->
                <?php if($logged_in): ?>
                  <div class="linkwtxt" ng-if="isAuthenticated">
                    <a href="{{myaccounturl}}">MyAccount</a>
                    <p>Launch and Download products, manage user access, and more.</p>
                  </div>
                  <div class="link" ng-if="isAuthenticated">
                    <a href="/myaccount/service/settings/redirect-to-login">Sign out</a>
                  </div>
                  <div class="linkwtxt cms-hide-links" ng-if="!isAuthenticated">
                    <a href="{{myaccounturl}}">Sign in</a>
                    <p>Personalize your experience, access trials and downloads, and more.</p>
                  </div>
                  <div class="link cms-hide-links" ng-if="!isAuthenticated">
                    <a href="/signup">Sign up for a free account</a>
                  </div>
                <?php else: ?>
                  <div class="linkwtxt">
                    <a href="{{myaccounturl}}">Sign in</a>
                    <p>Personalize your experience, access trials and downloads, and more.</p>
                  </div>
                  <div class="link">
                    <a href="/signup">Sign up for a free account</a>
                  </div>
                <?php endif; ?>
                <!-- {% endverbatim %} -->
              </div>
            </div>
          </div>
        </div>

      </li>

      <li><a href="/contact">Contact us</a></li>

    </ul>
    <!-- <a href="#tm-offcanvas" class="uk-navbar-toggle uk-visible-small uk-float-right"></a> -->

  </div>
</nav>

<nav class="hp-navbar hp-navbar-m uk-navbar visible-xs visible-sm" ng-controller="headerFooterController">
  <!-- <a data-uk-toggle="{target:'#hpmenu', animation:'uk-animation-slide-bottom, uk-animation-slide-top'}" id="nav-toggle" class="uk-visible-small uk-float-right" href="javascript:void(0)"><span></span></a> -->

  <div class="navbar-content">
    <div class="nav-trigger">
      <a id="nav-icon" class="visible-xs visible-sm pull-right" href="javascript:void(0)"><span></span>
        <span></span>
        <span></span>
        <span></span>
      </a>
    </div>

    <div class="uk-navbar-brand visible-xs visible-sm pull-left">
<!--      <img class="lg-white" src="/images/hp_logo_white.png" width="35" height="35" title="HP" alt="HP">-->
      <a href="/"><div class="logo-white"></div></a>
<!--      <img class="lg-blue" src="/images/hp_logo_blue.png" width="35" height="35" title="HP" alt="HP">-->

    </div>


  </div>

  <div id="hpmenu" class="hp-mobile-navmenu clearfix" style="display:none; clear:both" >
    <ul>
      <?php if (!empty($pronq_header_nav)):  ?>
        <?php foreach ($pronq_header_nav as $delta => $item): ?>
          <li ng-if="headerStyle"><?php print render($item['link']); ?></li>
        <?php endforeach; ?>
      <?php endif; ?>

      <?php if($logged_in): ?>
        <li ng-if="isAuthenticated"><a href="{{myaccounturl}}">MyAccount</a></li>
        <li ng-if="isAuthenticated"><a href="/myaccount/service/settings/redirect-to-login">Sign out</a></li>
        <li class="cms-hide-links" ng-if="!isAuthenticated"><a href="{{myaccounturl}}">Sign in</a></li>
        <li class="cms-hide-links" ng-if="!isAuthenticated"><a href="/signup">Sign up</a></li>
      <?php else: ?>
          <li><a href="{{myaccounturl}}">Sign in</a></li>
          <li><a href="/signup">Sign up</a></li>
      <?php endif; ?>
      <li><a href="/contact">Contact us</a></li>


    </ul>
  </div>
</nav>


<div class="overlay" style="display:none"></div>