<?php
/**
 * @file
 * library_stories_ct_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_stories_ct_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function library_stories_ct_feature_node_info() {
  $items = array(
    'library_stories' => array(
      'name' => t('Library Stories'),
      'base' => 'node_content',
      'description' => t('Use <i>library stories</i> to add new showcase stories to the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
