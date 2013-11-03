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
    'label' => 'ראשי',
    'weight' => '0',
    'children' => array(
      0 => 'group_texts',
      1 => 'group_media',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
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
    'weight' => '10',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'תכנים',
    'weight' => '9',
    'children' => array(
      0 => 'body',
      1 => 'field_teaser',
      2 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'תכנים',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => 'אזור זה מאפשר הוספה ועריכה של כל קטעי הטקסט הקשורים לסוג התוכן ״כתבה״. </br>
באפשרותך לערוך תכנים אלו בכל שלב, עם זאת, <strong>במידה והחלטת לא לפרסם תוכן זה יש לבחור בתפריט הימני תחת ״אפשרויות פרסום״ את המצב ״לא פורסם״</strong>. ',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_texts|node|article|form'] = $field_group;

  return $export;
}
