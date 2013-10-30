<?php
/**
 * @file
 * galleries.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function galleries_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function galleries_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function galleries_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('גלריה'),
      'base' => 'node_content',
      'description' => t('כלי המאפשר הוספת גלריה חדשה לאתר שלך. '),
      'has_title' => '1',
      'title_label' => t('שם הגלריה'),
      'help' => '',
    ),
  );
  return $items;
}
