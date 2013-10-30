<?php
/**
 * @file
 * faq.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function faq_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function faq_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function faq_node_info() {
  $items = array(
    'faq' => array(
      'name' => t('שאלה ותשובה'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('כותרת'),
      'help' => '',
    ),
  );
  return $items;
}
