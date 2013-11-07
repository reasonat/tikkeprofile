<?php
/**
 * @file
 * blog_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function blog_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-post-body'
  $field_instances['node-post-body'] = array(
    'bundle' => 'post',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'הוספת תוכן לפוסט',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-post-field_image'
  $field_instances['node-post-field_image'] = array(
    'bundle' => 'post',
    'deleted' => 0,
    'description' => 'באפשרותך להוסיף תמונה ראשית לפוסט שלך. תמונה זו לרוב תופיע מעל התוכן, בהתאם לעיצוב של האתר. </br>
בנוסף, תמונה זו לרוב תופיע בעמוד בלוג הראשי. ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'large',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'הוספת תמונה לפוסט',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'post_images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 0,
          'upload' => 'upload',
          'youtube' => 0,
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-post-field_movie'
  $field_instances['node-post-field_movie'] = array(
    'bundle' => 'post',
    'deleted' => 0,
    'description' => 'כאן באפשרותך להוסיף סרטון לפוסט ממקורות צד שלישי [embed], בהתאם לאפיון שלך, לרוב זה יהיה מיוטיוב. </br>
ניתן להוסיף מספר בלתי מוגבל של קטעי וידאו לפוסט אחד. ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'full',
        ),
        'type' => 'media',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_movie',
    'label' => 'הוספת סרטון לפוסט',
    'required' => 0,
    'settings' => array(
      'file_extensions' => 'jpg jpeg gif png txt doc docx xls xlsx pdf ppt pptx pps ppsx odt ods odp mp3 mov mp4 m4a m4v mpeg avi ogg oga ogv weba webp webm',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 0,
          'youtube' => 'youtube',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 0,
          'video' => 'video',
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 'media_internet',
          'upload' => 0,
          'youtube' => 0,
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-post-field_terms'
  $field_instances['node-post-field_terms'] = array(
    'bundle' => 'post',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'באפשרותך לתייג את הפוסט בסיווג אחד או מספר סיווגים [הפרדה באמצעות פסיק]. </br>
<strong>מומלץ לא להוסיף יותר מדי סיווגים לפוסט מה שיכול רק להשפיע לרעה על חוויית המשתמש ולעיתים לרעה על הקידום.</strong>
ניתן לעדכן את התגיות בעמוד - [site:url]/admin/structure/taxonomy',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_terms',
    'label' => 'תגיות',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('באפשרותך להוסיף תמונה ראשית לפוסט שלך. תמונה זו לרוב תופיע מעל התוכן, בהתאם לעיצוב של האתר. </br>
בנוסף, תמונה זו לרוב תופיע בעמוד בלוג הראשי. ');
  t('באפשרותך לתייג את הפוסט בסיווג אחד או מספר סיווגים [הפרדה באמצעות פסיק]. </br>
<strong>מומלץ לא להוסיף יותר מדי סיווגים לפוסט מה שיכול רק להשפיע לרעה על חוויית המשתמש ולעיתים לרעה על הקידום.</strong>
ניתן לעדכן את התגיות בעמוד - [site:url]/admin/structure/taxonomy');
  t('הוספת סרטון לפוסט');
  t('הוספת תוכן לפוסט');
  t('הוספת תמונה לפוסט');
  t('כאן באפשרותך להוסיף סרטון לפוסט ממקורות צד שלישי [embed], בהתאם לאפיון שלך, לרוב זה יהיה מיוטיוב. </br>
ניתן להוסיף מספר בלתי מוגבל של קטעי וידאו לפוסט אחד. ');
  t('תגיות');

  return $field_instances;
}
