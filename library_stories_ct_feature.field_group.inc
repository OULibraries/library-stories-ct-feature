<?php
/**
 * @file
 * library_stories_ct_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function library_stories_ct_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stories_basic|node|library_stories|form';
  $field_group->group_name = 'group_stories_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_stories';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
      1 => 'field_caption',
      2 => 'field_call_out_quote',
      3 => 'field_introduction',
      4 => 'field_extended_description',
      5 => 'field_custom_area',
      6 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-stories-basic field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_stories_basic|node|library_stories|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stories_display|node|library_stories|form';
  $field_group->group_name = 'group_stories_display';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_stories';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Display',
    'weight' => '1',
    'children' => array(
      0 => 'field_add_to_events_page',
      1 => 'field_archive',
      2 => 'field_sticky',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-stories-display field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_stories_display|node|library_stories|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stories_url|node|library_stories|form';
  $field_group->group_name = 'group_stories_url';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_stories';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'URL Settings',
    'weight' => '2',
    'children' => array(
      0 => 'field_link',
      1 => 'path',
      2 => 'redirect',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-stories-url field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_stories_url|node|library_stories|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Basic Info');
  t('Display');
  t('URL Settings');

  return $field_groups;
}
