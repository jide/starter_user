<?php
/**
 * @file
 * starter_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function starter_user_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
