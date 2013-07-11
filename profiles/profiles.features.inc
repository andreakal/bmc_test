<?php
/**
 * @file
 * profiles.features.inc
 */

/**
 * Implements hook_views_api().
 */
function profiles_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function profiles_node_info() {
  $items = array(
    'profile' => array(
      'name' => t('profile'),
      'base' => 'node_content',
      'description' => t('This is a person.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
