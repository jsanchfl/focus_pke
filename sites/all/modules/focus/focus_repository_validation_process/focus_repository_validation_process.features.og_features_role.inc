<?php
/**
 * @file
 * focus_repository_validation_process.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function focus_repository_validation_process_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:editorial_team:contributor'.
  $roles['node:editorial_team:contributor'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'editorial_team',
    'name' => 'contributor',
  );

  // Exported OG Role: 'node:editorial_team:publisher'.
  $roles['node:editorial_team:publisher'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'editorial_team',
    'name' => 'publisher',
  );

  // Exported OG Role: 'node:editorial_team:validator'.
  $roles['node:editorial_team:validator'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'editorial_team',
    'name' => 'validator',
  );

  return $roles;
}