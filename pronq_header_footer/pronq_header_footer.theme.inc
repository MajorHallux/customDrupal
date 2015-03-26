<?php


/**
 * Builds the final Nice menu.
 *
 * @return mixed
 *   An HTML string of properly nested Nice menu lists.
 */
function theme_pronq_header_footer_tree($variables) {
  /*
   * The top-level menu name that contains the menu to use (e.g. navigation
   * or main-menu) for Drupal menus. For custom $menus this is just the
   * name for menu display.
   */
  $menu_name = $variables['menu_name'];

  /*
   * The menu ID from which to start building the items, i.e. the parent
   * of the displayed menu.
   */
  $mlid = $variables['mlid'];

  /*
   * The number of children levels to display. Use -1 to display all children
   * and use 0 to display no children.
   */
  $depth = $variables['depth'];

  /*
   * Optional. A custom menu array to use for theming -- it should have.
   * the same structure as that returned by menu_tree_all_data().
   */
  $menu = $variables['menu'];
  $respect_expanded = $variables['respect_expanded'];
  // Load the full menu array.
  $menu = isset($menu) ? $menu : menu_tree_all_data($menu_name);
  if (isset($menu)) {
    $page_menu = menu_tree_page_data($menu_name);
    $trail = pronq_header_footer_build_page_trail($page_menu);
    unset($page_menu);
  }

  // Allow i18n module to translate strings where available.
  if (module_exists('i18n_menu')) {
    $menu = i18n_menu_localize_tree($menu);
  }
  // Assume depth == 0 by default, overriden if mlid is specified.
  $parent_depth = 0;

  // For custom $menus and menus built all the way from the top-level we.
  // don't need to "create" the specific sub-menu and we need to get the title.
  // from the $menu_name since there is no "parent item" array.
  // Create the specific menu if we have a mlid.
  if (!empty($mlid)) {
    // Load the parent menu item.
    $item = menu_link_load($mlid);
    $title = check_plain($item['title']);
    // The depth for our parent item, if it exists.
    $parent_depth = ($item['depth']) ? $item['depth'] : 0;

    // Narrow down the full menu to the specific sub-tree we need.
    for ($p = 1; $p < 10; $p++) {
      if ($sub_mlid = $item["p$p"]) {
        $subitem = menu_link_load($sub_mlid);
        // Menu sets these ghetto-ass keys in _menu_tree_check_access().
        $menu = $menu[(50000 + $subitem['weight']) . ' ' . $subitem['title'] . ' ' . $subitem['mlid']]['below'];
      }
    }
  }
  // Otherwise just set a title and move on.
  else {
    // Get the title from the DB since we don't have it in the $menu.
    $result = db_query("SELECT title FROM {menu_custom} WHERE menu_name = :menu_name", array(':menu_name' => $menu_name))->fetchField();
    $title = check_plain($result);
  }

  $output['content'] = '';
  $output['subject'] = $title;

  if ($menu) {
    // Set the total menu depth counting from this parent if we need it.
    $depth = ($depth > 0) ? ($parent_depth + $depth) : $depth;
    $output['content'] .= theme('pronq_header_footer_build', array(
      'menu' => $menu,
      'depth' => $depth,
      'trail' => $trail,
      'respect_expanded' => $respect_expanded,
    ));
  }

  return $output;
}

/**
 * Helper function that builds the nested lists of a Nice menu.
 *
 * @param array $variables
 *   Menu arguments.
 */
function theme_pronq_header_footer_build($variables) {

  $class= "";

  // Menu array from which to build the nested lists.
  $menu = $variables['menu'];

  // The number of children levels to display. Use -1 to display all children
  // and use 0 to display no children.
  $depth = isset($variables['depth']) ? $variables['depth'] : '-1';

  // An array of parent menu items.
  $trail = isset($variables['trail']) ? $variables['trail'] : array();

  // "Show as expanded" option.
  $respect_expanded = isset($variables['respect_expanded']) ? $variables['respect_expanded'] : 0;

  $output = '';
  // Prepare to count the links so we can mark first, last, odd and even.
  $index = 0;
  $count = 0;
  foreach ($menu as $menu_count) {
    if ($menu_count['link']['hidden'] == 0) {
      $count++;
    }
  }
  // Get to building the menu.
  foreach ($menu as $menu_item) {
    $mlid = $menu_item['link']['mlid'];
    // Check to see if it is a visible menu item.
    if (!isset($menu_item['link']['hidden']) || $menu_item['link']['hidden'] == 0) {
      $index++;
      if ($trail && in_array($mlid, $trail)) {
        $class .= ' active-trail';
      }
      // If it has children build a nice little tree under it.
      // Build a nice little tree under it if it has children, and has been set
      // to expand (when that option is being respected).
      if ((!empty($menu_item['link']['has_children'])) &&
        (!empty($menu_item['below'])) && $depth != 0 &&
        ($respect_expanded == 0 || $menu_item['link']['expanded'])) {
        // Keep passing children into the function 'til we get them all.
        if ($menu_item['link']['depth'] <= $depth || $depth == -1) {
          $children = array(
            '#theme' => 'pronq_header_footer_build',
            '#prefix' => '<ul class="dropdown-menu">',
            '#suffix' => '</ul>',
            '#menu' => $menu_item['below'],
            '#depth' => $depth,
            '#trail' => $trail,
            '#respect_expanded' => $respect_expanded,
          );
        }
        else {
          $children = '';
        }
        // Set the class to parent only of children are displayed.
        $parent_class = ($children && ($menu_item['link']['depth'] <= $depth || $depth == -1)) ? 'menuparent ' : '';
        $title_class = preg_replace('@[^a-zA-Z0-9]+@','-',strtolower(filter_xss($menu_item['link']['title'])));
        $dropdown = isset($parent_class) ? 'dropdown' : '';
        $element = array(
          '#below' => $children,
          '#title' => $menu_item['link']['title'],
          '#href' => $menu_item['link']['href'],
          '#localized_options' => $menu_item['link']['localized_options'],
          '#attributes' => array(
            'class' => array(
              'menu-' . $mlid,
              $parent_class,
              $class,
              $dropdown,
              'menu-' . $title_class
            ),
          ),
          '#original_link' => $menu_item['link'],
        );
        $variables['element'] = $element;

        $output .= theme('menu_link', $variables);
      }
      else {
        $element = array(
          '#below' => '',
          '#title' => $menu_item['link']['title'],
          '#href' => $menu_item['link']['href'],
          '#localized_options' => $menu_item['link']['localized_options'],
          '#attributes' => array(
            'class' => array(
              $class,
            ),
          ),
          '#original_link' => $menu_item['link'],
        );
        $variables['element'] = $element;

        $output .= theme('menu_link', $variables);
      }
    }
  }
  return $output;
}

/**
 * Theme function to allow any menu tree to be themed as a Nice menu.
 *
 * @param array $variables
 *   is an array, menu arguments.
 *
 * @return mixed
 *   An HTML string of Nice menu links.
 */
function theme_pronq_header_footer($variables) {
  $output = array(
    'content' => '',
    'subject' => '',
  );

  // The Nice menu ID.
  $id = $variables['id'];

  // The top parent menu name from which to build the full menu.
  $menu_name = $variables['menu_name'];

  // The menu ID from which to build the displayed menu.
  $mlid = $variables['mlid'];

  // Optional. The direction the menu expands. Default is 'right'.
  $direction = isset($variables['direction']) ? $variables['direction'] : 'down';

  // The number of children levels to display. Use -1 to display all children
  // and use 0 to display no children.
  $depth = isset($variables['depth']) ? $variables['depth'] : '-1';

  /*
   * Optional. A custom menu array to use for theming --
   * it should have the same structure as that returned
   * by menu_tree_all_data(). Default is the standard menu tree.
   */
  $menu = $variables['menu'];
  $ngshow = ($menu_name == 'menu-global-header-menu') ? 'ng-show="headerStyle"' : '';
  //$ngshow = 'ng-if="headerStyle"';

  // "Show as expanded" option.
  $respect_expanded = isset($variables['respect_expanded']) ? $variables['respect_expanded'] : 0;
  if ($menu_tree = theme('pronq_header_footer_tree', array(
    'menu_name' => $menu_name,
    'mlid' => $mlid,
    'depth' => $depth,
    'menu' => $menu,
    'respect_expanded' => $respect_expanded))) {

    if ($menu_tree['content']) {
      if ($menu_name == 'menu-global-header-menu') {
        $output['content'] = '<ul ' . $ngshow  . ' class="nav navbar-nav ' . $menu_name . '"><li class="visible-xs"><a href="/">Home</a>' . $menu_tree['content'] . '</ul>';
      }
      else {
        $output['content'] = '<ul ' . $ngshow  . ' class="nav navbar-nav ' . $menu_name . '">' . $menu_tree['content'] . '</ul>';
      }

    }
  }
  return $output;
}

/**
 * Processes variables for pronq-global-header.tpl.php.
 *
 * Prepares the values passed to the theme_pronq_global_header function to be passed
 * into a pluggable template engine.
 *
 * The $variables array contains the following arguments:
 * - $pronq which is an array made up of the header and footer array with following keys:
 *
 *    - id => The Nice menu ID.
 *    - menu_name => The top parent menu name from which to build the full menu.
 *    - mlid => The menu ID from which to build the displayed menu. Defaults is 0.
 *
 * @see pronq-global-header.tpl.php
 */
function template_preprocess_pronq_global_header(&$variables) {
  $menu_output = theme('pronq_header_footer', $variables['pronq']['header']);
  $variables['pronq_header_menu'] = $menu_output['content'];
    $menu = menu_tree_all_data('menu-global-header-menu');
    // Allow i18n module to translate strings where available.
    if (module_exists('i18n_menu')) {
        $menu = i18n_menu_localize_tree($menu);
    }
    #dsm($menu);
  #$header_tree =  menu_tree_all_data('menu-global-header-menu');
  $header_menu = pronq_header_footer_menu_array($menu);
    #dsm($header_menu);

    // dpm($header_menu, "header final output");
  $variables['pronq_header_nav'] = $header_menu;
  $variables['header_footer_logo_link'] = url(variable_get('header_footer_logo_link', '<front>'));
  $variables['hp_banner_redirect'] = t("Pronq is now HP Software — your new home for enterprise software. <span>Please bookmark our new site at <a href='https://saas.hp.com'>SaaS.HP.com</a> !</span>");

//  dpm($header_menu, "header final output");
}


/**
 * Processes variables for pronq-global-footer.tpl.php.
 *
 * Prepares the values passed to the theme_pronq_global_function function to be passed
 * into a pluggable template engine.
 *
 * The $variables array contains the following arguments:
 * - $pronq which is an array made up of the header and footer array with following keys:
 *
 *    - id => The Nice menu ID.
 *    - menu_name => The top parent menu name from which to build the full menu.
 *    - mlid => The menu ID from which to build the displayed menu. Defaults is 0.
 *
 * @see pronq-global-footer.tpl.php
 */
function template_preprocess_pronq_global_footer(&$variables) {
  global $user;
  $menu_output = theme('pronq_header_footer', $variables['pronq']['footer']);
  $variables['pronq_footer_menu'] = $menu_output['content'];
    $menu = menu_tree_all_data('menu-global-footer-menu');
    // Allow i18n module to translate strings where available.
    if (module_exists('i18n_menu')) {
        $menu = i18n_menu_localize_tree($menu);
    }
  #$footer_tree =  menu_tree_all_data('menu-global-footer-menu');
  $footer_menu = pronq_header_footer_menu_array($menu);
  $variables['pronq_footer_social'] = $footer_menu['social'];
  $variables['pronq_footer_nav'] = $footer_menu['navigation'];
  $variables['pronq_footer_company'] = $footer_menu['company'];
  $variables['pronq_footer_language_selector'] = pronq_update_render_block_content('locale', 'language');
  $variables['pronq_footer_show_language_selector'] = variable_get('ff__language_switcher__enabled',false) ? TRUE : FALSE;
}

function pronq_header_footer_menu_array($tree) {
  $output = array();
  if (is_array($tree) && !empty($tree)) {
    foreach ($tree as $key => $menu_item) {
      if (!$menu_item['link']['hidden']) {
        $parent_label = strtolower($menu_item['link']['link_title']);
        $attributes = isset($menu_item['link']['options']['attributes']) ? $menu_item['link']['options']['attributes'] : array();
        $output[$parent_label]['link'] = l($menu_item['link']['title'], $menu_item['link']['link_path'], array('attributes' => $attributes));

        if ($menu_item['link']['has_children']) {
          foreach ($menu_item['below'] as $child_key => $child) {
            $child_attributes = isset($child['link']['options']['attributes']) ? $child['link']['options']['attributes'] : array();
            if (!$child['link']['hidden']) {
              $child_label = strtolower($child['link']['link_title']);
              $child_link =  l($child['link']['title'], $child['link']['link_path'],  array('attributes' => $child_attributes));


              if ($child['link']['has_children']) {
                $output[$parent_label]['children'][$child_label]['link'] = $child_link;
                foreach ($child['below'] as $kid_key => $kid) {
                  $kid_attributes = isset($kid['link']['options']['attributes']) ? $kid['link']['options']['attributes'] : array();
                  if (!$kid['link']['hidden']) {
                    $kid_label = strtolower($kid['link']['link_title']);
                    $kid_link =  l($kid['link']['title'], $kid['link']['link_path'],  array('attributes' => $kid_attributes));
                    if (isset($kid['link']['localized_options']['attributes']['title'])) {
                      $kid_link .= '<div>' . decode_entities($kid['link']['localized_options']['attributes']['title']) . '</div>';
                    }

                    $output[$parent_label]['children'][$child_label]['children'][$kid_label] = $kid_link;
                  }
                }
              }
              else {
                if (isset($child['link']['options']['attributes']['title'])) {
                  $child_link .= '<div>' . $child['link']['options']['attributes']['title'] . '</div>';
                }
                $output[$parent_label]['children'][$child_label] = $child_link;
              }
            }
          }
        }
      }
    }
  }
  return $output;
}

