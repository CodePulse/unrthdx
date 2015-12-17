<?php
/**
 * @file
 * codepulse_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function codepulse_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'actors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Actors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_model_image']['id'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['table'] = 'field_data_field_model_image';
  $handler->display->display_options['fields']['field_model_image']['field'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['label'] = '';
  $handler->display->display_options['fields']['field_model_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_model_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_model_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_model_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_model_image']['multi_type'] = 'ul';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'talent' => 'talent',
  );
  /* Filter criterion: Content: Talent type (field_talent_type) */
  $handler->display->display_options['filters']['field_talent_type_tid']['id'] = 'field_talent_type_tid';
  $handler->display->display_options['filters']['field_talent_type_tid']['table'] = 'field_data_field_talent_type';
  $handler->display->display_options['filters']['field_talent_type_tid']['field'] = 'field_talent_type_tid';
  $handler->display->display_options['filters']['field_talent_type_tid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['field_talent_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_talent_type_tid']['vocabulary'] = 'talent_type';
  $handler->display->display_options['filters']['field_talent_type_tid']['hierarchy'] = 1;

  /* Display: Actors-actresses block */
  $handler = $view->new_display('block', 'Actors-actresses block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_model_image']['id'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['table'] = 'field_data_field_model_image';
  $handler->display->display_options['fields']['field_model_image']['field'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['label'] = '';
  $handler->display->display_options['fields']['field_model_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_model_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_model_image']['settings'] = array(
    'image_style' => 'portfolio_individual_portfolio',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_model_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_model_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_model_image']['multi_type'] = 'ul';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_model_image]
<div class="model-name-wrapper"><span class="model-name">[title]</span></div>
';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Individual Portfolio */
  $handler = $view->new_display('block', 'Individual Portfolio', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_model_image']['id'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['table'] = 'field_data_field_model_image';
  $handler->display->display_options['fields']['field_model_image']['field'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['label'] = '';
  $handler->display->display_options['fields']['field_model_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_model_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_model_image']['settings'] = array(
    'colorbox_node_style' => 'portfolio_individual_portfolio',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'field_page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'none',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_model_image']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_model_image']['multi_type'] = 'ul';
  $export['actors'] = $view;

  $view = new view();
  $view->name = 'dancers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dancers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Talent type (field_talent_type) */
  $handler->display->display_options['relationships']['field_talent_type_tid']['id'] = 'field_talent_type_tid';
  $handler->display->display_options['relationships']['field_talent_type_tid']['table'] = 'field_data_field_talent_type';
  $handler->display->display_options['relationships']['field_talent_type_tid']['field'] = 'field_talent_type_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_model_image']['id'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['table'] = 'field_data_field_model_image';
  $handler->display->display_options['fields']['field_model_image']['field'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['label'] = '';
  $handler->display->display_options['fields']['field_model_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_model_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_model_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_model_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_model_image']['multi_type'] = 'ul';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'talent' => 'talent',
  );
  /* Filter criterion: Content: Talent type (field_talent_type) */
  $handler->display->display_options['filters']['field_talent_type_tid']['id'] = 'field_talent_type_tid';
  $handler->display->display_options['filters']['field_talent_type_tid']['table'] = 'field_data_field_talent_type';
  $handler->display->display_options['filters']['field_talent_type_tid']['field'] = 'field_talent_type_tid';
  $handler->display->display_options['filters']['field_talent_type_tid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['field_talent_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_talent_type_tid']['vocabulary'] = 'talent_type';
  $handler->display->display_options['filters']['field_talent_type_tid']['hierarchy'] = 1;

  /* Display: Dancers block */
  $handler = $view->new_display('block', 'Dancers block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_model_image']['id'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['table'] = 'field_data_field_model_image';
  $handler->display->display_options['fields']['field_model_image']['field'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['label'] = '';
  $handler->display->display_options['fields']['field_model_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_model_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_model_image']['settings'] = array(
    'image_style' => 'portfolio_individual_portfolio',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_model_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_model_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_model_image']['multi_type'] = 'ul';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_model_image]
<div class="model-name-wrapper"><span class="model-name">[title]</span></div>
';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Individual Portfolio */
  $handler = $view->new_display('block', 'Individual Portfolio', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_model_image']['id'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['table'] = 'field_data_field_model_image';
  $handler->display->display_options['fields']['field_model_image']['field'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['label'] = '';
  $handler->display->display_options['fields']['field_model_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_model_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_model_image']['settings'] = array(
    'colorbox_node_style' => 'portfolio_individual_portfolio',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'field_page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'none',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_model_image']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_model_image']['multi_type'] = 'ul';
  $export['dancers'] = $view;

  $view = new view();
  $view->name = 'girls';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Girls';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_model_image']['id'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['table'] = 'field_data_field_model_image';
  $handler->display->display_options['fields']['field_model_image']['field'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['label'] = '';
  $handler->display->display_options['fields']['field_model_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_model_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_model_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_model_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_model_image']['multi_type'] = 'ul';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'actors_actresses' => 'actors_actresses',
    'dancers' => 'dancers',
    'models' => 'models',
    'talents_presenters' => 'talents_presenters',
  );
  /* Filter criterion: Content: Gender (field_gender) */
  $handler->display->display_options['filters']['field_gender_value']['id'] = 'field_gender_value';
  $handler->display->display_options['filters']['field_gender_value']['table'] = 'field_data_field_gender';
  $handler->display->display_options['filters']['field_gender_value']['field'] = 'field_gender_value';
  $handler->display->display_options['filters']['field_gender_value']['value'] = array(
    'Female' => 'Female',
  );

  /* Display: Girls */
  $handler = $view->new_display('block', 'Girls', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_model_image']['id'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['table'] = 'field_data_field_model_image';
  $handler->display->display_options['fields']['field_model_image']['field'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['label'] = '';
  $handler->display->display_options['fields']['field_model_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_model_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_model_image']['settings'] = array(
    'image_style' => 'portfolio_individual_portfolio',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_model_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_model_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_model_image']['multi_type'] = 'ul';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_model_image]
<div class="model-name-wrapper"><span class="model-name">[title]</span></div>
';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Individual Portfolio */
  $handler = $view->new_display('block', 'Individual Portfolio', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_model_image']['id'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['table'] = 'field_data_field_model_image';
  $handler->display->display_options['fields']['field_model_image']['field'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['label'] = '';
  $handler->display->display_options['fields']['field_model_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_model_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_model_image']['settings'] = array(
    'colorbox_node_style' => 'portfolio_individual_portfolio',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'field_page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'none',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_model_image']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_model_image']['multi_type'] = 'ul';
  $export['girls'] = $view;

  $view = new view();
  $view->name = 'guys';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Guys';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_model_image']['id'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['table'] = 'field_data_field_model_image';
  $handler->display->display_options['fields']['field_model_image']['field'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['label'] = '';
  $handler->display->display_options['fields']['field_model_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_model_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_model_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_model_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_model_image']['multi_type'] = 'ul';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'actors_actresses' => 'actors_actresses',
    'dancers' => 'dancers',
    'models' => 'models',
    'talents_presenters' => 'talents_presenters',
  );
  /* Filter criterion: Content: Gender (field_gender) */
  $handler->display->display_options['filters']['field_gender_value']['id'] = 'field_gender_value';
  $handler->display->display_options['filters']['field_gender_value']['table'] = 'field_data_field_gender';
  $handler->display->display_options['filters']['field_gender_value']['field'] = 'field_gender_value';
  $handler->display->display_options['filters']['field_gender_value']['value'] = array(
    'Male' => 'Male',
  );

  /* Display: Guys */
  $handler = $view->new_display('block', 'Guys', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_model_image']['id'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['table'] = 'field_data_field_model_image';
  $handler->display->display_options['fields']['field_model_image']['field'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['label'] = '';
  $handler->display->display_options['fields']['field_model_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_model_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_model_image']['settings'] = array(
    'image_style' => 'portfolio_individual_portfolio',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_model_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_model_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_model_image']['multi_type'] = 'ul';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_model_image]
<div class="model-name-wrapper"><span class="model-name">[title]</span></div>
';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Individual Portfolio */
  $handler = $view->new_display('block', 'Individual Portfolio', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_model_image']['id'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['table'] = 'field_data_field_model_image';
  $handler->display->display_options['fields']['field_model_image']['field'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['label'] = '';
  $handler->display->display_options['fields']['field_model_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_model_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_model_image']['settings'] = array(
    'colorbox_node_style' => 'portfolio_individual_portfolio',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'field_page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'none',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_model_image']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_model_image']['multi_type'] = 'ul';
  $export['guys'] = $view;

  $view = new view();
  $view->name = 'latest_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Latest content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'jS F Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Posted by: [name] - [created]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Featured content */
  $handler = $view->new_display('block', 'Featured content', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured content';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_news_image']['id'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['table'] = 'field_data_field_news_image';
  $handler->display->display_options['fields']['field_news_image']['field'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'jS F Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Posted by: [name] - [created]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $export['latest_content'] = $view;

  $view = new view();
  $view->name = 'models';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Models';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Talent type (field_talent_type) */
  $handler->display->display_options['relationships']['field_talent_type_tid']['id'] = 'field_talent_type_tid';
  $handler->display->display_options['relationships']['field_talent_type_tid']['table'] = 'field_data_field_talent_type';
  $handler->display->display_options['relationships']['field_talent_type_tid']['field'] = 'field_talent_type_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_model_image']['id'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['table'] = 'field_data_field_model_image';
  $handler->display->display_options['fields']['field_model_image']['field'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['label'] = '';
  $handler->display->display_options['fields']['field_model_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_model_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_model_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_model_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_model_image']['multi_type'] = 'ul';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'talent' => 'talent',
  );
  /* Filter criterion: Content: Talent type (field_talent_type) */
  $handler->display->display_options['filters']['field_talent_type_tid']['id'] = 'field_talent_type_tid';
  $handler->display->display_options['filters']['field_talent_type_tid']['table'] = 'field_data_field_talent_type';
  $handler->display->display_options['filters']['field_talent_type_tid']['field'] = 'field_talent_type_tid';
  $handler->display->display_options['filters']['field_talent_type_tid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['field_talent_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_talent_type_tid']['vocabulary'] = 'talent_type';
  $handler->display->display_options['filters']['field_talent_type_tid']['hierarchy'] = 1;

  /* Display: Models block */
  $handler = $view->new_display('block', 'Models block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_model_image']['id'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['table'] = 'field_data_field_model_image';
  $handler->display->display_options['fields']['field_model_image']['field'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['label'] = '';
  $handler->display->display_options['fields']['field_model_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_model_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_model_image']['settings'] = array(
    'image_style' => 'portfolio_individual_portfolio',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_model_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_model_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_model_image']['multi_type'] = 'ul';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_model_image]
<div class="model-name-wrapper"><span class="model-name">[title]</span></div>
';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Individual Portfolio */
  $handler = $view->new_display('block', 'Individual Portfolio', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_model_image']['id'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['table'] = 'field_data_field_model_image';
  $handler->display->display_options['fields']['field_model_image']['field'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['label'] = '';
  $handler->display->display_options['fields']['field_model_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_model_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_model_image']['settings'] = array(
    'colorbox_node_style' => 'portfolio_individual_portfolio',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'field_page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'none',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_model_image']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_model_image']['multi_type'] = 'ul';
  $export['models'] = $view;

  $view = new view();
  $view->name = 'news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Press & Media';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<div class="submitted">Published by [name] on [created]</div>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_news_image']['id'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['table'] = 'field_data_field_news_image';
  $handler->display->display_options['fields']['field_news_image']['field'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_image']['settings'] = array(
    'image_style' => 'news',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more »';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'press-media';
  $export['news'] = $view;

  $view = new view();
  $view->name = 'news_category_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'News category block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Category';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['news_category_block'] = $view;

  $view = new view();
  $view->name = 'portfolio';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Portfolio';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_model_image']['id'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['table'] = 'field_data_field_model_image';
  $handler->display->display_options['fields']['field_model_image']['field'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['label'] = '';
  $handler->display->display_options['fields']['field_model_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_model_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_model_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_model_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_model_image']['multi_type'] = 'ul';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'talent' => 'talent',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_model_image']['id'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['table'] = 'field_data_field_model_image';
  $handler->display->display_options['fields']['field_model_image']['field'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['label'] = '';
  $handler->display->display_options['fields']['field_model_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_model_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_model_image']['settings'] = array(
    'image_style' => 'portfolio_individual_portfolio',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_model_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_model_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_model_image']['multi_type'] = 'ul';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_model_image]
<div class="model-name-wrapper"><span class="model-name">[title]</span></div>
';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Individual Portfolio */
  $handler = $view->new_display('block', 'Individual Portfolio', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_model_image']['id'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['table'] = 'field_data_field_model_image';
  $handler->display->display_options['fields']['field_model_image']['field'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['label'] = '';
  $handler->display->display_options['fields']['field_model_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_model_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_model_image']['settings'] = array(
    'colorbox_node_style' => 'portfolio_individual_portfolio',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'field_page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'none',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_model_image']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_model_image']['multi_type'] = 'ul';
  $export['portfolio'] = $view;

  $view = new view();
  $view->name = 'talent_presenters';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Talent & Presenters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Talent type (field_talent_type) */
  $handler->display->display_options['relationships']['field_talent_type_tid']['id'] = 'field_talent_type_tid';
  $handler->display->display_options['relationships']['field_talent_type_tid']['table'] = 'field_data_field_talent_type';
  $handler->display->display_options['relationships']['field_talent_type_tid']['field'] = 'field_talent_type_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_model_image']['id'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['table'] = 'field_data_field_model_image';
  $handler->display->display_options['fields']['field_model_image']['field'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['label'] = '';
  $handler->display->display_options['fields']['field_model_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_model_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_model_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_model_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_model_image']['multi_type'] = 'ul';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'talent' => 'talent',
  );
  /* Filter criterion: Content: Talent type (field_talent_type) */
  $handler->display->display_options['filters']['field_talent_type_tid']['id'] = 'field_talent_type_tid';
  $handler->display->display_options['filters']['field_talent_type_tid']['table'] = 'field_data_field_talent_type';
  $handler->display->display_options['filters']['field_talent_type_tid']['field'] = 'field_talent_type_tid';
  $handler->display->display_options['filters']['field_talent_type_tid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['field_talent_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_talent_type_tid']['vocabulary'] = 'talent_type';
  $handler->display->display_options['filters']['field_talent_type_tid']['hierarchy'] = 1;

  /* Display: Talent/Presenters block */
  $handler = $view->new_display('block', 'Talent/Presenters block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_model_image']['id'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['table'] = 'field_data_field_model_image';
  $handler->display->display_options['fields']['field_model_image']['field'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['label'] = '';
  $handler->display->display_options['fields']['field_model_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_model_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_model_image']['settings'] = array(
    'image_style' => 'portfolio_individual_portfolio',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_model_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_model_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_model_image']['multi_type'] = 'ul';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_model_image]
<div class="model-name-wrapper"><span class="model-name">[title]</span></div>
';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Individual Portfolio */
  $handler = $view->new_display('block', 'Individual Portfolio', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_model_image']['id'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['table'] = 'field_data_field_model_image';
  $handler->display->display_options['fields']['field_model_image']['field'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['label'] = '';
  $handler->display->display_options['fields']['field_model_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_model_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_model_image']['settings'] = array(
    'colorbox_node_style' => 'portfolio_individual_portfolio',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'field_page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'none',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_model_image']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_model_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_model_image']['multi_type'] = 'ul';
  $export['talent_presenters'] = $view;

  return $export;
}
