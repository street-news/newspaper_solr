<?php
/**
 * @file
 * newspaper_solr.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function newspaper_solr_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'localhost server';
  $environment->url = variable_get('solr_search_environment', 'http://localhost:8983/solr/newspaper');
  $environment->service_class = '';
  $environment->conf = array();
  $environment->index_bundles = array(
    'node' => array(
      0 => 'article',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
