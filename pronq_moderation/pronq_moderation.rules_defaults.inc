<?php
/**
 * Created by PhpStorm.
 * User: seanschoolcraft
 * Date: 6/10/14
 * Time: 3:38 PM
 */
function pronq_moderation_default_rules_configuration() {

    $items['pronq_moderation_microsite_moderation'] = entity_import('rules_config','{ "pronq_moderation_microsite_moderation" : {
    "LABEL" : "Microsite Moderation",
    "PLUGIN" : "reaction rule",
    "OWNER" : "rules",
    "TAGS" : [ "moderation" ],
    "REQUIRES" : [ "rules", "workbench_moderation" ],
    "ON" : { "node_insert" : [], "node_update" : [] },
    "IF" : [
      { "node_is_of_type" : {
          "node" : [ "node" ],
          "type" : { "value" :
            {
              "micro_site_overview_page" : "micro_site_overview_page",
              "microsite_resources_page" : "microsite_resources_page",
              "microsite_tour_page" : "microsite_tour_page",
              "microsite_detail_page" : "microsite_detail_page"

            }
           }
        }
      },
      { "NOT contents_previous_state" : { "node" : [ "node" ], "moderation_state" : "published" } },
      { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "published" } },
      { "AND" : [
          { "OR" : [
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_hero_banners" } },
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_benefits" } },
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_footer_columns" } },
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_overview_columns" } },
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_detail_sections" } },
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_highlight_screenshots" } },
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_product_features" } },
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_product_screenshots" } },
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_install_steps" } },
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_horizontal_tabs" } },
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_scenarios" } },
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_get_started_content" } }
            ]
          }
        ]
      }
    ],
    "DO" : [
      { "LOOP" : {
          "USING" : { "list" : [ "node:field-hero-banners" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      },
       { "LOOP" : {
          "USING" : { "list" : [ "node:field_get_started_content" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      },
      { "LOOP" : {
          "USING" : { "list" : [ "node:field_scenarios" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      },
      { "LOOP" : {
          "USING" : { "list" : [ "node:field_horizontal_tabs" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      },
      { "LOOP" : {
          "USING" : { "list" : [ "node:field_install_steps" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      },
      { "LOOP" : {
          "USING" : { "list" : [ "node:field_product_screenshots" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      },
      { "LOOP" : {
          "USING" : { "list" : [ "node:field_product_features" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      },
      { "LOOP" : {
          "USING" : { "list" : [ "node:field_product_features" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      },
      { "LOOP" : {
          "USING" : { "list" : [ "node:field_highlight_screenshots" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      },
      { "LOOP" : {
          "USING" : { "list" : [ "node:field_detail_sections" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      },
      { "LOOP" : {
          "USING" : { "list" : [ "node:field-benefits" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      },
      { "LOOP" : {
          "USING" : { "list" : [ "node:field-footer-columns" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      },
      { "LOOP" : {
          "USING" : { "list" : [ "node:field-overview-columns" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      }
    ]
  }
}');

    $items['rules_download_page_moderation'] = entity_import('rules_config', '{ "rules_download_page_moderation" : {
    "LABEL" : "Download Page Moderation",
    "PLUGIN" : "reaction rule",
    "OWNER" : "rules",
    "TAGS" : [ "moderation" ],
    "REQUIRES" : [ "rules", "workbench_moderation" ],
    "ON" : {
      "node_insert--download_page" : { "bundle" : "download_page" },
      "node_update--download_page" : { "bundle" : "download_page" }
    },
    "IF" : [
      { "node_is_of_type" : {
          "node" : [ "node" ],
          "type" : { "value" : { "download_page" : "download_page" } }
        }
      },
      { "NOT contents_previous_state" : { "node" : [ "node" ], "moderation_state" : "published" } },
      { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "published" } }
    ],
    "DO" : [
      { "LOOP" : {
          "USING" : { "list" : [ "node:field-detail-sections" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current child node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      }
    ]
  }
}');
    $items['approval_email'] = entity_import('rules_config', '{ "approval_email" : {
    "LABEL" : "Approval Email",
    "PLUGIN" : "reaction rule",
    "OWNER" : "rules",
    "REQUIRES" : [ "rules", "workbench_moderation" ],
    "ON" : { "node_insert" : [], "node_update" : [] },
    "IF" : [
      { "node_is_of_type" : {
          "node" : [ "node" ],
          "type" : { "value" : {
              "page" : "page",
              "download_page" : "download_page",
              "home_page" : "home_page",
              "micro_site_overview_page" : "micro_site_overview_page",
              "microsite_detail_page" : "microsite_detail_page",
              "microsite_resources_page" : "microsite_resources_page",
              "microsite_tour_page" : "microsite_tour_page",
              "pronq_site_map" : "pronq_site_map",
              "solution_agm" : "solution_agm",
              "solution_apppulse_active" : "solution_apppulse_active",
              "solution_apppulse_diagnostic" : "solution_apppulse_diagnostic",
              "solution_apppulse_mobile" : "solution_apppulse_mobile",
              "solution_block" : "solution_block",
              "solution_codar" : "solution_codar",
              "solution_fod" : "solution_fod",
              "solution_landing_page" : "solution_landing_page",
              "solution_loadrunner" : "solution_loadrunner",
              "solution_overlord" : "solution_overlord",
              "solution_ptas" : "solution_ptas",
              "solution_vertica" : "solution_vertica",
              "solution_vpv" : "solution_vpv",
              "static_page" : "static_page"
            }
          }
        }
      },
      { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "needs_review" } },
      { "NOT content_is_live_revision" : { "node" : [ "node" ] } },
      { "NOT data_is" : { "data" : [ "site:url" ], "value" : "https:\/\/dev.pronq.com\/" } },
      { "NOT data_is" : { "data" : [ "site:url" ], "value" : "https:\/\/pronqdev.pronq.com\/" } }
    ],
    "DO" : [
      { "mail" : {
          "to" : "[node:pm_notify]",
          "subject" : "[node:title] is ready for PM Approval",
          "message" : "[node:title] ([node:edit-url]) has been modified and is ready for PM Approval. \r\nPlease review the content and moderation log before marking ready for Publish. \r\nLatest Log Message: [node:log]",
          "language" : [ "" ]
        }
      }
    ]
  }
}');

    $items['design_email'] = entity_import('rules_config', '{ "design_email" : {
    "LABEL" : "Design Email",
    "PLUGIN" : "reaction rule",
    "OWNER" : "rules",
    "REQUIRES" : [ "rules", "workbench_moderation" ],
    "ON" : { "node_insert" : [], "node_update" : [] },
    "IF" : [
      { "node_is_of_type" : {
          "node" : [ "node" ],
          "type" : { "value" : {
              "page" : "page",
              "download_page" : "download_page",
              "home_page" : "home_page",
              "micro_site_overview_page" : "micro_site_overview_page",
              "microsite_detail_page" : "microsite_detail_page",
              "microsite_resources_page" : "microsite_resources_page",
              "microsite_tour_page" : "microsite_tour_page",
              "pricing_page_content" : "pricing_page_content",
              "product_registration_block" : "product_registration_block",
              "solution_agm" : "solution_agm",
              "solution_apppulse_active" : "solution_apppulse_active",
              "solution_apppulse_diagnostic" : "solution_apppulse_diagnostic",
              "solution_apppulse_mobile" : "solution_apppulse_mobile",
              "solution_codar" : "solution_codar",
              "solution_fod" : "solution_fod",
              "solution_landing_page" : "solution_landing_page",
              "solution_loadrunner" : "solution_loadrunner",
              "solution_overlord" : "solution_overlord",
              "solution_ptas" : "solution_ptas",
              "solution_vertica" : "solution_vertica",
              "solution_vpv" : "solution_vpv",
              "static_page" : "static_page"
            }
          }
        }
      },
      { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "needs_design_review" } },
      { "NOT content_is_live_revision" : { "node" : [ "node" ] } },
      { "NOT data_is" : { "data" : [ "site:url" ], "value" : "https:\/\/dev.pronq.com\/" } },
      { "NOT data_is" : { "data" : [ "site:url" ], "value" : "https:\/\/pronqdev.pronq.com\/" } }
    ],
    "DO" : [
      { "mail" : {
          "to" : "[node:design_notify]",
          "subject" : "[node:title] needs Design attention",
          "message" : "[node:title] ([node:edit-url]) has been modified and needs Design Attention. \r\nPlease review the content and moderation log before marking ready for PM Approval. \r\nLatest Log Message: [node:log]",
          "language" : [ "" ]
        }
      }
    ]
  }
}');
    $items['content_email'] = entity_import('rules_config', '{ "content_email" : {
    "LABEL" : "Content Email",
    "PLUGIN" : "reaction rule",
    "OWNER" : "rules",
    "REQUIRES" : [ "rules", "workbench_moderation" ],
    "ON" : { "node_insert" : [], "node_update" : [] },
    "IF" : [
      { "node_is_of_type" : {
          "node" : [ "node" ],
          "type" : { "value" : {
              "page" : "page",
              "download_page" : "download_page",
              "home_page" : "home_page",
              "micro_site_overview_page" : "micro_site_overview_page",
              "microsite_detail_page" : "microsite_detail_page",
              "microsite_resources_page" : "microsite_resources_page",
              "microsite_tour_page" : "microsite_tour_page",
              "pricing_page_content" : "pricing_page_content",
              "product_registration_block" : "product_registration_block",
              "pronq_site_map" : "pronq_site_map",
              "solution_agm" : "solution_agm",
              "solution_apppulse_active" : "solution_apppulse_active",
              "solution_apppulse_diagnostic" : "solution_apppulse_diagnostic",
              "solution_apppulse_mobile" : "solution_apppulse_mobile",
              "solution_block" : "solution_block",
              "solution_codar" : "solution_codar",
              "solution_fod" : "solution_fod",
              "solution_landing_page" : "solution_landing_page",
              "solution_loadrunner" : "solution_loadrunner",
              "solution_overlord" : "solution_overlord",
              "solution_ptas" : "solution_ptas",
              "solution_vertica" : "solution_vertica",
              "solution_vpv" : "solution_vpv",
              "static_page" : "static_page"
            }
          }
        }
      },
      { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "needs_content_review" } },
      { "NOT content_is_live_revision" : { "node" : [ "node" ] } },
      { "NOT data_is" : { "data" : [ "site:url" ], "value" : "https:\/\/dev.pronq.com\/" } },
      { "NOT data_is" : { "data" : [ "site:url" ], "value" : "https:\/\/pronqdev.pronq.com\/" } }
    ],
    "DO" : [
      { "mail" : {
          "to" : "[node:content_notify], [node:author]",
          "subject" : "[node:title] needs Content attention",
          "message" : "[node:title] ([node:edit-url]) has been modified and needs Content Attention. \r\nPlease review the content and moderation log before marking ready for PM Approval. \r\nLatest Log Message: [node:log]",
          "language" : [ "" ]
        }
      }
    ]
  }
}');
    $items['publish_email'] = entity_import('rules_config', '{ "publish_email" : {
    "LABEL" : "Publish Email",
    "PLUGIN" : "reaction rule",
    "OWNER" : "rules",
    "TAGS" : [ "email", "publish" ],
    "REQUIRES" : [ "rules", "workbench_moderation", "cache_actions" ],
    "ON" : { "node_insert" : [], "node_update" : [] },
    "IF" : [
      { "node_is_of_type" : {
          "node" : [ "node" ],
          "type" : { "value" : {
              "page" : "page",
              "download_page" : "download_page",
              "home_page" : "home_page",
              "micro_site_overview_page" : "micro_site_overview_page",
              "microsite_detail_page" : "microsite_detail_page",
              "microsite_resources_page" : "microsite_resources_page",
              "microsite_tour_page" : "microsite_tour_page",
              "pricing_page_content" : "pricing_page_content",
              "product_registration_block" : "product_registration_block",
              "pronq_site_map" : "pronq_site_map",
              "solution_agm" : "solution_agm",
              "solution_apppulse_active" : "solution_apppulse_active",
              "solution_apppulse_diagnostic" : "solution_apppulse_diagnostic",
              "solution_apppulse_mobile" : "solution_apppulse_mobile",
              "solution_codar" : "solution_codar",
              "solution_fod" : "solution_fod",
              "solution_landing_page" : "solution_landing_page",
              "solution_loadrunner" : "solution_loadrunner",
              "solution_overlord" : "solution_overlord",
              "solution_ptas" : "solution_ptas",
              "solution_vertica" : "solution_vertica",
              "solution_vpv" : "solution_vpv",
              "static_page" : "static_page"
            }
          }
        }
      },
      { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "published" } },
      { "NOT data_is" : { "data" : [ "site:url" ], "value" : "http:\/\/pronqdev.pronq.com\/" } },
      { "data_is" : {
          "data" : [ "node:language" ],
          "op" : "IN",
          "value" : { "value" : { "und" : "und", "en" : "en" } }
        }
      },
      { "NOT text_matches" : { "text" : [ "site:url" ], "match" : "http:\/\/pronqdev.saas.hp.com\/" } }
    ],
    "DO" : [
      { "mail" : {
          "to" : "[node:publish_notify], [node:translation_notify]",
          "subject" : "[node:title] has been Published!",
          "message" : "[node:title] ([node:edit-url]) has been Published and is live on the site at [node:url]\r\nPlease review the content and see if any further modifications are required. \r\nTranslation team should also verify and see if any other language versions need to be updated to reflect new\/updated content.\r\nLatest Log Message: \r\n[node:log]",
          "language" : [ "" ]
        }
      },
      { "cache_actions_action_clear_cache" : { "tables" : { "value" : { "cache_page" : "cache_page" } } } },
      { "drupal_message" : { "message" : "[site:url]", "type" : "error" } }
    ]
  }
}');
    $items['pronq_moderation_pdp_moderation'] = entity_import('rules_config', '{ "pronq_moderation_pdp_moderation" : {
    "LABEL" : "PDP Moderation",
    "PLUGIN" : "reaction rule",
    "OWNER" : "rules",
    "REQUIRES" : [ "rules", "workbench_moderation" ],
    "ON" : { "node_insert" : [], "node_update" : [] },
    "IF" : [
      { "node_is_of_type" : {
          "node" : [ "node" ],
          "type" : { "value" : {
              "product_registration_block" : "product_registration_block",
              "solution_agm" : "solution_agm",
              "solution_apppulse_active" : "solution_apppulse_active",
              "solution_apppulse_diagnostic" : "solution_apppulse_diagnostic",
              "solution_apppulse_mobile" : "solution_apppulse_mobile",
              "solution_codar" : "solution_codar",
              "solution_fod" : "solution_fod",
              "solution_loadrunner" : "solution_loadrunner",
              "solution_overlord" : "solution_overlord",
              "solution_ptas" : "solution_ptas",
              "solution_vertica" : "solution_vertica",
              "solution_vpv" : "solution_vpv"
            }
          }
        }
      },
      { "NOT contents_previous_state" : { "node" : [ "node" ], "moderation_state" : "published" } },
      { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "published" } },
      { "AND" : [
          { "OR" : [
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_lr_columns_content" } },
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_loadrunner_screenshots" } },
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_loadrunner_testimonials" } },
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_columns_content" } },
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_featurettes" } },
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_testimonials" } },
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_screenshots" } },
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_how_it_works" } },
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_body_tabs" } },
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_getting_started_tabs" } }
            ]
          }
        ]
      }
    ],
    "DO" : [
      { "LOOP" : {
          "USING" : { "list" : [ "node:field-lr-columns-content" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      },
      { "LOOP" : {
          "USING" : { "list" : [ "node:field-loadrunner-screenshots" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      },
      { "LOOP" : {
          "USING" : { "list" : [ "node:field-loadrunner-testimonials" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      },
      { "LOOP" : {
          "USING" : { "list" : [ "node:field-columns-content" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      },
      { "LOOP" : {
          "USING" : { "list" : [ "node:field-featurettes" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      },
      { "LOOP" : {
          "USING" : { "list" : [ "node:field-screenshots" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      },
      { "LOOP" : {
          "USING" : { "list" : [ "node:field-testimonials" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      },
      { "LOOP" : {
          "USING" : { "list" : [ "node:field-how-it-works" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      },
      { "LOOP" : {
          "USING" : { "list" : [ "node:field-body-tabs" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "list-item" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      },
      { "LOOP" : {
          "USING" : { "list" : [ "node:field-getting-started-tabs" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "list-item" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      }
    ]
  }
}');
    $items['pronq_moderation_homepage_moderation'] = entity_import('rules_config', '{ "pronq_moderation_homepage_moderation" : {
        "LABEL" : "Homepage Moderation",
    "PLUGIN" : "reaction rule",
    "OWNER" : "rules",
    "TAGS" : [ "moderation" ],
    "REQUIRES" : [ "rules", "workbench_moderation" ],
    "ON" : { "node_insert" : [], "node_update" : [] },
    "IF" : [
      { "node_is_of_type" : {
          "node" : [ "node" ],
          "type" : { "value" : { "home_page" : "home_page" } }
        }
      },
      { "NOT contents_previous_state" : { "node" : [ "node" ], "moderation_state" : "published" } },
      { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "published" } },
      { "AND" : [
          { "OR" : [
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_solutions_blocks" } },
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_community_blocks" } },
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_events" } }
            ]
          }
        ]
      }
    ],
    "DO" : [
      { "LOOP" : {
          "USING" : { "list" : [ "node:field-solutions-blocks" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      },
      { "LOOP" : {
          "USING" : { "list" : [ "node:field-community-blocks" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      },
      { "LOOP" : {
          "USING" : { "list" : [ "node:field-events" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      }
    ]
  }
}');

    $items['pronq_moderation_api_type_moderation'] = entity_import('rules_config','{ "pronq_moderation_api_type_moderation" : {
    "LABEL" : "API Type Moderation",
    "PLUGIN" : "reaction rule",
    "OWNER" : "rules",
    "TAGS" : [ "moderation" ],
    "REQUIRES" : [ "rules", "workbench_moderation" ],
    "ON" : { "node_insert" : [], "node_update" : [] },
    "IF" : [
      { "node_is_of_type" : {
          "node" : [ "node" ],
          "type" : { "value" : { "pricing_page_content" : "pricing_page_content" } }
        }
      },
      { "NOT contents_previous_state" : { "node" : [ "node" ], "moderation_state" : "published" } },
      { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "published" } }
    ],
    "DO" : [
      { "LOOP" : {
          "USING" : { "list" : [ "node:field-columns-content" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current child node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      },
      { "LOOP" : {
          "USING" : { "list" : [ "node:field-pricing-faq" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      },
      { "LOOP" : {
          "USING" : { "list" : [ "node:field-pricing-blocks" ] },
          "ITEM" : { "list_item" : "Current list item" },
          "DO" : [
            { "workbench_moderation_load_current_revision" : {
                "USING" : { "node" : [ "list-item" ] },
                "PROVIDE" : { "node_revision" : { "node_revision" : "Current node revision" } }
              }
            },
            { "workbench_moderation_set_state" : {
                "node" : [ "node-revision" ],
                "moderation_state" : "published",
                "force_transition" : 1
              }
            }
          ]
        }
      }
    ]
  }
}
    ');
    return $items;
}