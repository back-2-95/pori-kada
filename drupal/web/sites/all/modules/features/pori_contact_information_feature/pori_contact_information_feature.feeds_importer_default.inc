<?php

/**
 * @file
 * pori_contact_information_feature.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function pori_contact_information_feature_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'phone_csv';
  $feeds_importer->config = array(
    'name' => 'Person CSV',
    'description' => 'Import persons from phone exchange in CSV format',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 1,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'private' => 'private',
        ),
        'delete_uploaded_file' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ';',
        'no_headers' => 0,
        'encoding' => 'ISO-8859-15',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Sahkoposti',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Sukunimi',
            'target' => 'field_surname',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Etunimi',
            'target' => 'field_first_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Titteli',
            'target' => 'field_employee_title',
            'field_language' => 'fi',
            'language' => 'fi',
          ),
          4 => array(
            'source' => 'Titteli',
            'target' => 'field_employee_title',
            'field_language' => 'en',
            'language' => 'en',
          ),
          5 => array(
            'source' => 'Sahkoposti',
            'target' => 'field_email_single',
            'unique' => 1,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Puhelinnumero',
            'target' => 'field_mobile_phone_work',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Katuosoite',
            'target' => 'field_visiting_address',
            'field_language' => 'fi',
            'language' => 'fi',
          ),
          8 => array(
            'source' => 'Katuosoite',
            'target' => 'field_visiting_address',
            'field_language' => 'en',
            'language' => 'en',
          ),
          9 => array(
            'source' => 'Company Contact',
            'target' => 'field_person_type',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'Toimiala',
            'target' => 'field_branch',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'Yksikko',
            'target' => 'field_unit',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'Toimintayksikko',
            'target' => 'field_activity_unit',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'Paikkakunta',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'Postinumero',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'person',
        'insert_new' => '1',
        'update_non_existent' => 'delete',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['phone_csv'] = $feeds_importer;

  return $export;
}
