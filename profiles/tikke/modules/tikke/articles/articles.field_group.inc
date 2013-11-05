<?php
/**
 * @file
 * articles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function articles_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|article|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'main',
    'weight' => '7',
    'children' => array(
      0 => 'group_media',
      1 => 'group_texts',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-main field-group-htabs',
      ),
    ),
  );
  $export['group_main|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|article|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'מדיה',
    'weight' => '11',
    'children' => array(
      0 => 'field_image',
      1 => 'field_movie',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'מדיה',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-media field-group-htab',
        'description' => 'אזור זה מאפשר הוספת מדיה מסוגים שונים לעמוד. 
סוגי המדיה הינם בהתאם להגדרת סוג התוכן ויכולים להיות, תמונה בודדת, תמונות לגלריה, סרטונים ועוד... ',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_media|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_texts|node|article|form';
  $field_group->group_name = 'group_texts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'קטעי טקסט',
    'weight' => '9',
    'children' => array(
      0 => 'body',
      1 => 'field_teaser',
      2 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'קטעי טקסט',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-texts field-group-htab',
        'description' => 'באזור זה ניתן להזין את הטקסטים השונים הקשורים בסוג התוכן הזה. 
לכל שדה טקסט יש את המשמעות שלו המתוארת כהסבר מתחת לשדה. ',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_texts|node|article|form'] = $field_group;

  return $export;
}
