<?php

/**
 * @file
 * kada_page_feature.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function kada_page_feature_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'places_for_services' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'page_places' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:3:{s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:14:"openlayers_map";s:7:"subtype";s:21:"pori_page_service_map";}',
        'load_terms' => 0,
      ),
    ),
  );
  $export['node|page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|project';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'project';
  $ds_fieldsetting->settings = array(
    'duplicate_title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => 'a',
        'ctools' => 'a:3:{s:4:"conf";a:8:{s:4:"link";i:1;s:6:"markup";s:4:"none";s:2:"id";s:0:"";s:5:"class";s:12:"link-to-node";s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:10:"node_title";s:7:"subtype";s:10:"node_title";}',
        'load_terms' => 0,
      ),
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|page|project'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function kada_page_feature_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'description_page';
  $ds_field->label = 'Description | Page';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'page|*';
  $ds_field->properties = array(
    'block' => 'views|9c3148258968c2422cf7dc197c359d4e',
    'block_render' => '3',
  );
  $export['description_page'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'duplicate_info_box_bottom';
  $ds_field->label = 'Duplicate info box (bottom)';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['duplicate_info_box_bottom'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'places_for_services';
  $ds_field->label = 'Places for services';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'page|*';
  $ds_field->properties = array(
    'block' => 'quicktabs|places_for_pages_tabs',
    'block_render' => '1',
  );
  $export['places_for_services'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function kada_page_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'page_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main_content' => array(
        0 => 'domain',
        1 => 'field_lead_paragraph',
        2 => 'body',
        3 => 'field_person_reference',
        4 => 'field_service_offering',
        5 => 'page_places',
      ),
      'sidebar' => array(
        6 => 'field_keywords',
        8 => 'places_for_services',
      ),
      'additional_information' => array(
        7 => 'field_additional_info_link',
        9 => 'field_file_attachment',
      ),
      'contact_information' => array(
        10 => 'field_contact_person',
      ),
      'after_content' => array(
        11 => 'field_topic',
        12 => 'field_subpage',
      ),
    ),
    'fields' => array(
      'domain' => 'main_content',
      'field_lead_paragraph' => 'main_content',
      'body' => 'main_content',
      'field_person_reference' => 'main_content',
      'field_service_offering' => 'main_content',
      'page_places' => 'main_content',
      'field_keywords' => 'sidebar',
      'field_additional_info_link' => 'additional_information',
      'places_for_services' => 'sidebar',
      'field_file_attachment' => 'additional_information',
      'field_contact_person' => 'contact_information',
      'field_topic' => 'after_content',
      'field_subpage' => 'after_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main_content' => 'div',
      'sidebar' => 'div',
      'additional_information' => 'div',
      'contact_information' => 'div',
      'after_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'search_result_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'media' => array(
        0 => 'field_main_image',
      ),
      'main' => array(
        1 => 'body',
        2 => 'field_keywords',
      ),
    ),
    'fields' => array(
      'field_main_image' => 'media',
      'body' => 'main',
      'field_keywords' => 'main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'media' => 'div',
      'main' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|page|search_result'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function kada_page_feature_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'only_title';
  $ds_view_mode->label = 'Only title';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['only_title'] = $ds_view_mode;

  return $export;
}
