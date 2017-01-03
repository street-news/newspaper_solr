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
  $environment->conf = array(
    'apachesolr_search_changed_boost' => '0:0',
    'apachesolr_search_comment_boost' => '0:0',
    'apachesolr_search_date_boost' => '1:100.0',
    'apachesolr_search_promote_boost' => '0',
    'apachesolr_search_sticky_boost' => '0',
    'apachesolr_search_type_boosts' => array(
      'article' => '0',
      'page' => '0',
    ),
    'field_bias' => array(
      'bs_promote' => '0',
      'bs_status' => '0',
      'bs_sticky' => '0',
      'bs_translate' => '0',
      'bundle' => '0',
      'bundle_name' => '0',
      'content' => '1.0',
      'ds_changed' => '0',
      'ds_created' => '0',
      'ds_last_comment_or_change' => '0',
      'entity_id' => '0',
      'entity_type' => '0',
      'hash' => '0',
      'id' => '0',
      'im_field_access_section' => '0',
      'im_field_issue' => '0',
      'im_field_section' => '0',
      'im_field_tags' => '0',
      'im_vid_1' => '0',
      'im_vid_2' => '0',
      'im_vid_3' => '0',
      'im_vid_4' => '0',
      'is_tnid' => '0',
      'is_uid' => '0',
      'label' => '5.0',
      'path' => '0',
      'path_alias' => '0',
      'site' => '0',
      'sm_field_authors' => '0',
      'sm_field_byline' => '0',
      'sm_vid_Access_control_sections' => '0',
      'sm_vid_Issue' => '0',
      'sm_vid_Section' => '0',
      'sm_vid_Tags' => '0',
      'sort_label' => '0',
      'sort_language' => '0',
      'sort_name' => '0',
      'sort_name_formatted' => '0',
      'spell' => '0',
      'ss_language' => '0',
      'ss_name' => '0',
      'ss_name_formatted' => '0',
      'tags_a' => '0',
      'tags_h1' => '5.0',
      'tags_h2_h3' => '3.0',
      'tags_h4_h5_h6' => '2.0',
      'tags_inline' => '1.0',
      'taxonomy_names' => '2.0',
      'tid' => '0',
      'timestamp' => '0',
      'tm_vid_1_names' => '0',
      'tm_vid_2_names' => '0',
      'tm_vid_3_names' => '0',
      'tm_vid_4_names' => '0',
      'tos_content_extra' => '0.1',
      'tos_name' => '3.0',
      'tos_name_formatted' => '0',
      'ts_comments' => '0.5',
      'url' => '0',
    ),
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'article',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
