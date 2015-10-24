<?php
/**
 * @file
 * vih_golf_courses.features.inc
 */

/**
 * Implements hook_commerce_line_item_default_types().
 */
function vih_golf_courses_commerce_line_item_default_types() {
  $items = array(
    'vih_short_course_golf' => array(
      'name' => 'VIH Short Course Golf',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Add product',
      'base' => 'commerce_product_line_item',
    ),
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add product');

  return $items;
}

/**
 * Implements hook_commerce_product_default_types().
 */
function vih_golf_courses_commerce_product_default_types() {
  $items = array(
    'vih_shourt_course_golf' => array(
      'type' => 'vih_shourt_course_golf',
      'name' => 'VIH Short Course Golf',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_golf_courses_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vih_golf_courses_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vih_golf_courses_node_info() {
  $items = array(
    'vih_golf_courses' => array(
      'name' => t('Short Course Golf Field'),
      'base' => 'node_content',
      'description' => t('Use <em>golf field</em> to describe the golf fields you are going to play on the golf courses.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'vih_short_course_golf' => array(
      'name' => t('Short Course Golf'),
      'base' => 'node_content',
      'description' => t('Use <em>short golf course</em> when you need information also need information about golf handicap and clubs.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
