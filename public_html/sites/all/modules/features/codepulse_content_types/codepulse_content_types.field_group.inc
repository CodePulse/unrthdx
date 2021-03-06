<?php
/**
 * @file
 * codepulse_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function codepulse_content_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_actor|node|actors_actresses|form';
  $field_group->group_name = 'group_actor';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'actors_actresses';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Actor/Actress',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_gender',
      2 => 'title',
      3 => 'path',
      4 => 'field_model_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-actor field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_actor|node|actors_actresses|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dancer|node|dancers|form';
  $field_group->group_name = 'group_dancer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dancers';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dancer',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_gender',
      2 => 'field_model_image',
      3 => 'field_bust',
      4 => 'field_chest',
      5 => 'field_waist',
      6 => 'field_hips',
      7 => 'field_shoes',
      8 => 'field_height',
      9 => 'title',
      10 => 'path',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-dancer field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dancer|node|dancers|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_model|node|models|form';
  $field_group->group_name = 'group_model';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'models';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Model',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_model_image',
      2 => 'field_gender',
      3 => 'field_height',
      4 => 'field_waist',
      5 => 'field_hips',
      6 => 'field_chest',
      7 => 'field_bust',
      8 => 'field_shoes',
      9 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_model|node|models|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news|node|news|form';
  $field_group->group_name = 'group_news';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'News',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_news_image',
      2 => 'field_category',
      3 => 'title',
      4 => 'path',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-news field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_news|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page|node|page|form';
  $field_group->group_name = 'group_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Page',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'title',
      2 => 'path',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-page field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_page|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_talent_details|node|talent|form';
  $field_group->group_name = 'group_talent_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'talent';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Talent details',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_bust',
      2 => 'field_chest',
      3 => 'field_gender',
      4 => 'field_height',
      5 => 'field_hips',
      6 => 'field_model_image',
      7 => 'field_shoes',
      8 => 'field_talent_type',
      9 => 'field_waist',
      10 => 'title',
      11 => 'path',
      12 => 'workbench_access',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-talent-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_talent_details|node|talent|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_talent|node|talents_presenters|form';
  $field_group->group_name = 'group_talent';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'talents_presenters';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Talent & Presenter',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_gender',
      2 => 'title',
      3 => 'path',
      4 => 'field_model_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-talent field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_talent|node|talents_presenters|form'] = $field_group;

  return $export;
}
