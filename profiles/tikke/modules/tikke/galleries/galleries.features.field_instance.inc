<?php
/**
 * @file
 * galleries.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function galleries_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-gallery-body'
  $field_instances['node-gallery-body'] = array(
    'bundle' => 'gallery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'שדה זה אינו חובה והוא לא תמיד יופיע באתר. הופעתו באתר תלויה ב<strong>אפיון של האתר</strong>.',
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
    'label' => 'הוספת תוכן לגלריה',
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
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-gallery-field_add_images'
  $field_instances['node-gallery-field_add_images'] = array(
    'bundle' => 'gallery',
    'deleted' => 0,
    'description' => 'כלי זה מאפשר גרירה של תמונות או העלאה ידנית.  ניתן להעלות מספר תמונות בפעולה אחת [העלאה מרבית]. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'juicebox',
        'settings' => array(
          'apply_markup_filter' => 1,
          'caption_source' => 'alt',
          'custom_parent_classes' => '',
          'image_style' => 'large',
          'jlib_backgroundColor' => '#fff',
          'jlib_galleryHeight' => '100%',
          'jlib_galleryWidth' => '90%',
          'jlib_showExpandButton' => 1,
          'jlib_showOpenButton' => 1,
          'jlib_showThumbsButton' => 1,
          'jlib_textColor' => 'rgba(255,255,255,1)',
          'jlib_thumbFrameColor' => 'rgba(255,255,255,.5)',
          'jlib_useFullscreenExpand' => 0,
          'jlib_useThumbDots' => 0,
          'linkurl_source' => '',
          'linkurl_target' => '_blank',
          'manual_config' => '',
          'thumb_style' => 'thumbnail',
          'title_source' => 'title',
        ),
        'type' => 'juicebox_formatter',
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
    'field_name' => 'field_add_images',
    'label' => 'הוספת תמונות לגלריה [העלאה מרבית]',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'gallery_images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'dragndrop_upload_image',
      'settings' => array(
        'droppable_area_text' => 'יש לגרור את התמונות לאזור הזה. ',
        'multiupload' => 1,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
        'standard_upload' => 1,
        'upload_button_text' => 'העלאה',
        'upload_event' => 'auto',
      ),
      'type' => 'dragndrop_upload_image',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('הוספת תוכן לגלריה');
  t('הוספת תמונות לגלריה [העלאה מרבית]');
  t('כלי זה מאפשר גרירה של תמונות או העלאה ידנית.  ניתן להעלות מספר תמונות בפעולה אחת [העלאה מרבית]. ');
  t('שדה זה אינו חובה והוא לא תמיד יופיע באתר. הופעתו באתר תלויה ב<strong>אפיון של האתר</strong>.');

  return $field_instances;
}
