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
      2 => 'title',
      3 => 'path',
      4 => 'field_model_image',
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
      3 => 'title',
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
