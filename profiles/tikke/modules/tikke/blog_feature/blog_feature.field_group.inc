<?php
/**
 * @file
 * blog_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function blog_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|post|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'post';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'main',
    'weight' => '6',
    'children' => array(
      0 => 'group_text',
      1 => 'group_media',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-main field-group-htabs',
      ),
    ),
  );
  $export['group_main|node|post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|post|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'מדיה של הפוסט',
    'weight' => '12',
    'children' => array(
      0 => 'field_image',
      1 => 'field_movie',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'מדיה של הפוסט',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-media field-group-htab',
        'description' => 'אזור זה מאפשר לך להוסיף מדיה לפוסט שלך - תמונות וסרטוני וידאו. ',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_media|node|post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|node|post|form';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'תכנים של הפוסט',
    'weight' => '10',
    'children' => array(
      0 => 'body',
      1 => 'field_terms',
      2 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'תכנים של הפוסט',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-text field-group-htab',
        'description' => 'אזור זה מאפשר הוספת תכנים שונים הקשורים לפוסט זה. </br>
בגלל שזה פוסט בעמוד הראשי של הבלוג יופיע תקציר של אזור התוכן הראשי, אלא אם כן האפיון אומר אחרת. ',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_text|node|post|form'] = $field_group;

  return $export;
}
