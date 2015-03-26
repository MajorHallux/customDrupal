<?php
/**
 * @file
 * hp_localization.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hp_localization_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
