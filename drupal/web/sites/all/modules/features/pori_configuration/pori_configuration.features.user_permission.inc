<?php

/**
 * @file
 * pori_configuration.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pori_configuration_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer EU Cookie Compliance popup'.
  $permissions['administer EU Cookie Compliance popup'] = array(
    'name' => 'administer EU Cookie Compliance popup',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'eu_cookie_compliance',
  );

  // Exported permission: 'administer google tag manager'.
  $permissions['administer google tag manager'] = array(
    'name' => 'administer google tag manager',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'google_tag',
  );

  // Exported permission: 'display EU Cookie Compliance popup'.
  $permissions['display EU Cookie Compliance popup'] = array(
    'name' => 'display EU Cookie Compliance popup',
    'roles' => array(
      'admin' => 'admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'content editor' => 'content editor',
      'event editor' => 'event editor',
      'event external editor' => 'event external editor',
      'external editor' => 'external editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'eu_cookie_compliance',
  );

  // Exported permission: 'flag presentation'.
  $permissions['flag presentation'] = array(
    'name' => 'flag presentation',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag presentation'.
  $permissions['unflag presentation'] = array(
    'name' => 'unflag presentation',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'use bigmenu'.
  $permissions['use bigmenu'] = array(
    'name' => 'use bigmenu',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'bigmenu',
  );

  return $permissions;
}
