<?php
/**
 * @file
 * olpblogs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function olpblogs_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function olpblogs_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function olpblogs_node_info() {
  $items = array(
    'blog_post' => array(
      'name' => t('Blog Post'),
      'base' => 'node_content',
      'description' => t('Use <em>blog post</em> for blog contents.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
