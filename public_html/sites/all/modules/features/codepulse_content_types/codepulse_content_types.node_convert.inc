<?php
/**
 * @file
 * codepulse_content_types.node_convert.inc
 */

/**
 * Implements hook_default_node_convert_templates().
 */
function codepulse_content_types_default_node_convert_templates() {
  $export = array();

  $node_convert_template = new stdClass();
  $node_convert_template->disabled = FALSE; /* Edit this to true to make a default node_convert_template disabled initially */
  $node_convert_template->api_version = 1;
  $node_convert_template->machine_name = 'actors_to_talent';
  $node_convert_template->name = 'Actors to Talent';
  $node_convert_template->source_type = 'actors_actresses';
  $node_convert_template->destination_type = 'talent';
  $node_convert_template->data = 'a:3:{s:6:"fields";a:2:{s:6:"source";a:9:{i:0;s:4:"body";i:1;s:12:"field_gender";i:2;s:17:"field_model_image";i:3;s:11:"field_chest";i:4;s:10:"field_hips";i:5;s:11:"field_shoes";i:6;s:11:"field_waist";i:7;s:12:"field_height";i:8;s:10:"field_bust";}s:11:"destination";a:9:{i:0;s:4:"body";i:1;s:12:"field_gender";i:2;s:17:"field_model_image";i:3;s:11:"field_chest";i:4;s:10:"field_hips";i:5;s:11:"field_shoes";i:6;s:11:"field_waist";i:7;s:12:"field_height";i:8;s:10:"field_bust";}}s:12:"hook_options";N;s:9:"no_fields";b:0;}';
  $export['actors_to_talent'] = $node_convert_template;

  $node_convert_template = new stdClass();
  $node_convert_template->disabled = FALSE; /* Edit this to true to make a default node_convert_template disabled initially */
  $node_convert_template->api_version = 1;
  $node_convert_template->machine_name = 'dancer_to_talent';
  $node_convert_template->name = 'Dancer to Talent';
  $node_convert_template->source_type = 'dancers';
  $node_convert_template->destination_type = 'talent';
  $node_convert_template->data = 'a:3:{s:6:"fields";a:2:{s:6:"source";a:9:{i:0;s:4:"body";i:1;s:12:"field_gender";i:2;s:17:"field_model_image";i:3;s:10:"field_bust";i:4;s:11:"field_chest";i:5;s:11:"field_waist";i:6;s:10:"field_hips";i:7;s:11:"field_shoes";i:8;s:12:"field_height";}s:11:"destination";a:9:{i:0;s:4:"body";i:1;s:12:"field_gender";i:2;s:17:"field_model_image";i:3;s:10:"field_bust";i:4;s:11:"field_chest";i:5;s:11:"field_waist";i:6;s:10:"field_hips";i:7;s:11:"field_shoes";i:8;s:12:"field_height";}}s:12:"hook_options";N;s:9:"no_fields";b:0;}';
  $export['dancer_to_talent'] = $node_convert_template;

  return $export;
}
