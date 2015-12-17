<?php
/**
 * @file
 * codepulse_entityforms.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function codepulse_entityforms_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|entityform|talent_booking|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'talent_booking';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Your details',
    'weight' => '0',
    'children' => array(
      0 => 'field_your_name_company_agency',
      1 => 'field_contact_number',
      2 => 'field_secondary_contact_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-details field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_details|entityform|talent_booking|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_details|entityform|talent_booking|form';
  $field_group->group_name = 'group_event_details';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'talent_booking';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Job/event Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_desired_artists',
      1 => 'field_description_of_job',
      2 => 'field_date_time',
      3 => 'field_location',
      4 => 'field_budget',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-details field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_event_details|entityform|talent_booking|form'] = $field_group;

  return $export;
}
