<?php
/**
 * @file
 * contact_page.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function contact_page_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'יצירת קשר',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '563b7313-cbb7-4b92-b54c-960d2087a443',
  'type' => 'webform',
  'language' => 'en',
  'created' => 1383127603,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7ffaf28e-bb31-4c5b-b4a0-d53e28560b50',
  'revision_uid' => 1,
  'body' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'nid' => 1,
    'confirmation' => '',
    'confirmation_format' => 'filtered_html',
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'teaser' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 0,
    'submit_text' => 'שלח',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(
      1 => array(
        'nid' => 1,
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'name',
        'name' => 'שם:',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 0,
        'page_num' => 1,
      ),
      2 => array(
        'nid' => 1,
        'cid' => 2,
        'pid' => 0,
        'form_key' => 'phone',
        'name' => 'טלפון:',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 0,
        'weight' => 1,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => 1,
        'cid' => 3,
        'pid' => 0,
        'form_key' => 'e_mail',
        'name' => 'דוא"ל',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 2,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => 1,
        'cid' => 4,
        'pid' => 0,
        'form_key' => 'message',
        'name' => 'תוכן ההודעה:',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 0,
        'weight' => 3,
        'page_num' => 1,
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-10-30 12:06:43 +0200',
);
  return $nodes;
}
