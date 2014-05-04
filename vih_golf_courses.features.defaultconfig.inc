<?php
/**
 * @file
 * vih_golf_courses.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function vih_golf_courses_defaultconfig_features() {
  return array(
    'vih_golf_courses' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function vih_golf_courses_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create commerce_product entities of bundle vih_shourt_course_golf'.
  $permissions['create commerce_product entities of bundle vih_shourt_course_golf'] = array(
    'name' => 'create commerce_product entities of bundle vih_shourt_course_golf',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create vih_golf_courses content'.
  $permissions['create vih_golf_courses content'] = array(
    'name' => 'create vih_golf_courses content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create vih_short_course_golf content'.
  $permissions['create vih_short_course_golf content'] = array(
    'name' => 'create vih_short_course_golf content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any vih_golf_courses content'.
  $permissions['delete any vih_golf_courses content'] = array(
    'name' => 'delete any vih_golf_courses content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any vih_short_course_golf content'.
  $permissions['delete any vih_short_course_golf content'] = array(
    'name' => 'delete any vih_short_course_golf content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own vih_golf_courses content'.
  $permissions['delete own vih_golf_courses content'] = array(
    'name' => 'delete own vih_golf_courses content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own vih_short_course_golf content'.
  $permissions['delete own vih_short_course_golf content'] = array(
    'name' => 'delete own vih_short_course_golf content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any commerce_product entity of bundle vih_shourt_course_golf'.
  $permissions['edit any commerce_product entity of bundle vih_shourt_course_golf'] = array(
    'name' => 'edit any commerce_product entity of bundle vih_shourt_course_golf',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any vih_golf_courses content'.
  $permissions['edit any vih_golf_courses content'] = array(
    'name' => 'edit any vih_golf_courses content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any vih_short_course_golf content'.
  $permissions['edit any vih_short_course_golf content'] = array(
    'name' => 'edit any vih_short_course_golf content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own commerce_product entities of bundle vih_shourt_course_golf'.
  $permissions['edit own commerce_product entities of bundle vih_shourt_course_golf'] = array(
    'name' => 'edit own commerce_product entities of bundle vih_shourt_course_golf',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own vih_golf_courses content'.
  $permissions['edit own vih_golf_courses content'] = array(
    'name' => 'edit own vih_golf_courses content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own vih_short_course_golf content'.
  $permissions['edit own vih_short_course_golf content'] = array(
    'name' => 'edit own vih_short_course_golf content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any commerce_product entity of bundle vih_shourt_course_golf'.
  $permissions['view any commerce_product entity of bundle vih_shourt_course_golf'] = array(
    'name' => 'view any commerce_product entity of bundle vih_shourt_course_golf',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle vih_shourt_course_golf'.
  $permissions['view own commerce_product entities of bundle vih_shourt_course_golf'] = array(
    'name' => 'view own commerce_product entities of bundle vih_shourt_course_golf',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  return $permissions;
}
