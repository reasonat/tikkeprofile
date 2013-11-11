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

  // Exported field_instance: 'node-gallery-field_add_images'
  $field_instances['node-gallery-field_add_images'] = array(
    'bundle' => 'gallery',
    'deleted' => 0,
    'description' => 'כלי זה מאפשר גרירה של תמונות או העלאה ידנית.  ניתן להעלות מספר תמונות בפעולה אחת [העלאה מרבית]. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'nivo_formatter',
        'settings' => array(
          'nivo_formatter_image_style' => 'large',
          'nivo_formatter_nivo_slider' => array(
            'animSpeed' => 500,
            'boxCols' => 8,
            'boxRows' => 4,
            'captionOpacity' => 0.8,
            'controlNav' => TRUE,
            'directionNav' => TRUE,
            'directionNavHide' => TRUE,
            'effect' => array(
              'random' => 'random',
            ),
            'keyboardNav' => TRUE,
            'manualAdvance' => FALSE,
            'nextText' => 'Next',
            'pauseOnHover' => TRUE,
            'pauseTime' => 3000,
            'prevText' => 'Prev',
            'slices' => 15,
            'startSlide' => 0,
          ),
          'nivo_formatter_theme' => 'default',
          'nivo_slider_thumbnail' => array(
            'controlNavThumbs' => FALSE,
            'controlNavThumbsFromRel' => FALSE,
            'thumbnail_style' => 'thumbnail',
          ),
        ),
        'type' => 'nivo_formatter',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-gallery-field_gallery_text'
  $field_instances['node-gallery-field_gallery_text'] = array(
    'bundle' => 'gallery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_gallery_text',
    'label' => 'הוספת טקסט לגלריה',
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
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('הוספת טקסט לגלריה');
  t('הוספת תמונות לגלריה [העלאה מרבית]');
  t('כלי זה מאפשר גרירה של תמונות או העלאה ידנית.  ניתן להעלות מספר תמונות בפעולה אחת [העלאה מרבית]. ');

  return $field_instances;
}
