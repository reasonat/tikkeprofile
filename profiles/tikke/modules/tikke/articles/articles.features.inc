<?php
/**
 * @file
 * articles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function articles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function articles_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function articles_node_info() {
  $items = array(
    'article' => array(
      'name' => t('כתבה'),
      'base' => 'node_content',
      'description' => t('מאפשר הוספת כתבה / מאמר חדשים לאתר שלך. '),
      'has_title' => '1',
      'title_label' => t('כותרת'),
      'help' => '',
    ),
  );
  return $items;
}
