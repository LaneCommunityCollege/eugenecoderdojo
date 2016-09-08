<?php
/**
 * @file
 * cdojo_base.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cdojo_base_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-showcase_slides-field_image'.
  $field_instances['node-showcase_slides-field_image'] = array(
    'bundle' => 'showcase_slides',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'full',
        'weight' => 0,
      ),
      'front_page_slider' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'front_page_slider',
        'weight' => 0,
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
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'allow_override' => 0,
      'referencable_types' => array(
        'file' => 0,
        'image' => 'image',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image');

  return $field_instances;
}
