<?php
/**
 * @file
 * Default theme implementation to display a block.
 *
 * Available variables:
 * - $pronq_footer_menu: HTML string for the footer menu.
 *
 * @see template_preprocess()
 * @see template_preprocess_pronq_global_header()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>

<footer class="footer" ng-controller="headerFooterController">
  <div class="container">
    <div class="footer-grid">

      <div class="left">
        <div class="social-icons-blk">
          <?php if (isset($pronq_footer_social['children'])):  ?>
            <?php foreach ($pronq_footer_social['children'] as $delta => $item): ?>
              <?php print render($item); ?>
            <?php endforeach; ?>
          <?php endif; ?>
        </div>

        <?php if($pronq_footer_language_selector && $pronq_footer_show_language_selector && !$hide_symfony): ?>
          <div class="pronq-lang-selector" ng-if="footerStyle">
            <div class="pronq-lang-active-flag"></div>
            <div class="lang-selector"><?php print $pronq_footer_language_selector; ?></div>
          </div>
        <?php endif; ?>

          <div class="clearfix visible-xs"></div>

        <ul class="site-links-blk uk-list" ng-if="footerStyle">
          <?php if (isset($pronq_footer_nav['children'])):  ?>
            <?php foreach ($pronq_footer_nav['children'] as $delta => $item): ?>
              <li><?php print render($item); ?></li>
            <?php endforeach; ?>
          <?php endif; ?>
        </ul>
      </div>


        <div class="f-right">
            <ul class="copy-links">
                <?php if (isset($pronq_footer_company['children'])):  ?>
                    <?php foreach ($pronq_footer_company['children'] as $delta => $item): ?>
                        <li><?php print render($item); ?></li>
                    <?php endforeach; ?>
                <?php endif; ?>
            </ul>
        </div>
    </div>
  </div>
</footer>