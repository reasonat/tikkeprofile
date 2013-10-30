<?php
/**
 * @file
 * galleries.features.inc
 */

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
