<?php
/**
 * @file
 * codepulse_entityforms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function codepulse_entityforms_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function codepulse_entityforms_default_entityform_type() {
  $items = array();
  $items['contact_us'] = entity_import('entityform_type', '{
    "type" : "contact_us",
    "label" : "Contact us",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submit_button_text" : "Send",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "filtered_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : "3" },
      "resubmit_action" : "new",
      "redirect_path" : "contact-us\\/thank-you",
      "instruction_pre" : { "value" : "", "format" : "filtered_html" }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/contact-us",
        "alias" : "contact-us",
        "language" : "und"
      }
    }
  }');
  $items['join_unrthdx'] = entity_import('entityform_type', '{
    "type" : "join_unrthdx",
    "label" : "Join unrthdx",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submit_button_text" : "Submit",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "filtered_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : "3", "4" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "join-unrthdx\\/thank-you",
      "instruction_pre" : { "value" : "", "format" : "filtered_html" }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/join-unrthdx",
        "alias" : "join-unrthdx",
        "language" : "und"
      }
    }
  }');
  $items['talent_booking'] = entity_import('entityform_type', '{
    "type" : "talent_booking",
    "label" : "Talent booking",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "filtered_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : "3" },
      "resubmit_action" : "new",
      "redirect_path" : "talent-booking\\/thank-you",
      "instruction_pre" : { "value" : "", "format" : "filtered_html" }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/talent-booking",
        "alias" : "talent-booking",
        "language" : "und"
      }
    }
  }');
  return $items;
}
