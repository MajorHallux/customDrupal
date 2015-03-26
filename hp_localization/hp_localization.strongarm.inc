<?php
/**
 * @file
 * hp_localization.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hp_localization_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_column_content';
  $strongarm->value = '2';
  $export['language_content_type_column_content'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'language_content_type_micro_site_hero_banner';
    $strongarm->value = '2';
    $export['language_content_type_micro_site_hero_banner'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'language_content_type_micro_site_overview_page';
    $strongarm->value = '2';
    $export['language_content_type_micro_site_overview_page'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'language_content_type_microsite_benefit';
    $strongarm->value = '2';
    $export['language_content_type_microsite_benefit'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'language_content_type_microsite_footer_column';
    $strongarm->value = '2';
    $export['language_content_type_microsite_footer_column'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'language_content_type_getting_started_module';
    $strongarm->value = '2';
    $export['language_content_type_getting_started_module'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'language_content_type_pricing_block';
    $strongarm->value = '2';
    $export['language_content_type_pricing_block'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'language_content_type_pricing_page_content';
    $strongarm->value = '2';
    $export['language_content_type_pricing_page_content'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'language_content_type_product_registration_block';
    $strongarm->value = '2';
    $export['language_content_type_product_registration_block'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'language_content_type_pronq_site_map';
    $strongarm->value = '2';
    $export['language_content_type_pronq_site_map'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'language_content_type_solution_landing_page';
    $strongarm->value = '2';
    $export['language_content_type_solution_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_community_block';
  $strongarm->value = '2';
  $export['language_content_type_community_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_customer_testimonial';
  $strongarm->value = '2';
  $export['language_content_type_customer_testimonial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_download_details';
  $strongarm->value = '2';
  $export['language_content_type_download_details'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_download_page';
  $strongarm->value = '2';
  $export['language_content_type_download_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_event';
  $strongarm->value = '2';
  $export['language_content_type_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_faq';
  $strongarm->value = '2';
  $export['language_content_type_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_featurette';
  $strongarm->value = '2';
  $export['language_content_type_featurette'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_home_page';
  $strongarm->value = '2';
  $export['language_content_type_home_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_how_it_works';
  $strongarm->value = '2';
  $export['language_content_type_how_it_works'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_product_block';
  $strongarm->value = '2';
  $export['language_content_type_product_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_screenshot';
  $strongarm->value = '2';
  $export['language_content_type_screenshot'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_solution_agm';
  $strongarm->value = '2';
  $export['language_content_type_solution_agm'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'language_content_type_solution_vertica';
    $strongarm->value = '2';
    $export['language_content_type_solution_vertica'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'language_content_type_vertical_tab';
    $strongarm->value = '2';
    $export['language_content_type_vertical_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_solution_apppulse_active';
  $strongarm->value = '2';
  $export['language_content_type_solution_apppulse_active'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_solution_apppulse_diagnostic';
  $strongarm->value = '2';
  $export['language_content_type_solution_apppulse_diagnostic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_solution_apppulse_mobile';
  $strongarm->value = '2';
  $export['language_content_type_solution_apppulse_mobile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_solution_block';
  $strongarm->value = '2';
  $export['language_content_type_solution_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_solution_fod';
  $strongarm->value = '2';
  $export['language_content_type_solution_fod'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_solution_loadrunner';
  $strongarm->value = '2';
  $export['language_content_type_solution_loadrunner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_solution_overlord';
  $strongarm->value = '2';
  $export['language_content_type_solution_overlord'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_solution_ptas';
  $strongarm->value = '2';
  $export['language_content_type_solution_ptas'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'language_content_type_solution_codar';
    $strongarm->value = '2';
    $export['language_content_type_solution_codar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_solution_vpv';
  $strongarm->value = '2';
  $export['language_content_type_solution_vpv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_static_page';
  $strongarm->value = '2';
  $export['language_content_type_static_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_terms_conditions';
  $strongarm->value = '2';
  $export['language_content_type_terms_conditions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_cookie_domain';
  $strongarm->value = '';
  $export['language_cookie_domain'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_cookie_param';
  $strongarm->value = 'language';
  $export['language_cookie_param'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_cookie_path';
  $strongarm->value = '/';
  $export['language_cookie_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_cookie_time';
  $strongarm->value = '31536000';
  $export['language_cookie_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_count';
  $strongarm->value = 12;
  $export['language_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_default';
  $strongarm->value = (object) array(
    'language' => 'en',
    'name' => 'English US',
    'native' => 'English US',
    'direction' => '0',
    'enabled' => 1,
    'plurals' => '0',
    'formula' => '',
    'domain' => '',
    'prefix' => '',
    'weight' => '-10',
    'javascript' => '',
    'parent' => '',
  );
  $export['language_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'language_cookie' => array(
      'callbacks' => array(
        'language' => 'language_cookie_language',
        'switcher' => 'language_cookie_language_switcher',
        'url_rewrite' => 'language_cookie_language_rewrite',
      ),
      'file' => 'sites/all/modules/language_cookie/language_cookie.module',
    ),
    'locale-session' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_session',
        'switcher' => 'locale_language_switcher_session',
        'url_rewrite' => 'locale_language_url_rewrite_session',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-user' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_user',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-browser' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_browser',
      ),
      'file' => 'includes/locale.inc',
      'cache' => 0,
    ),
    'language-default' => array(
      'callbacks' => array(
        'language' => 'language_from_default',
      ),
    ),
  );
  $export['language_negotiation_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_content';
  $strongarm->value = array(
    'locale-interface' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_interface',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_url';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'language_cookie' => array(
      'callbacks' => array(
        'language' => 'language_cookie_language',
        'switcher' => 'language_cookie_language_switcher',
        'url_rewrite' => 'language_cookie_language_rewrite',
      ),
      'file' => 'sites/all/modules/language_cookie/language_cookie.module',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_types';
  $strongarm->value = array(
    'language' => TRUE,
    'language_content' => TRUE,
    'language_url' => FALSE,
  );
  $export['language_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_language_negotiation_session_param';
  $strongarm->value = 'language';
  $export['locale_language_negotiation_session_param'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_language_negotiation_url_part';
  $strongarm->value = '0';
  $export['locale_language_negotiation_url_part'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_language_providers_weight_language';
  $strongarm->value = array(
    'locale-url' => '-8',
    'locale-session' => '-6',
    'language_cookie' => '-5',
    'locale-user' => '-4',
    'locale-browser' => '-2',
    'language-default' => '10',
  );
  $export['locale_language_providers_weight_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'variable_realm_list_language';
  $strongarm->value = array(
    0 => 'site_name',
    1 => 'site_slogan',
    2 => 'site_frontpage',
  );
  $export['variable_realm_list_language'] = $strongarm;

#handle removing the Language lable for content types
    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'field_bundle_settings_node__event';
    $strongarm->value = array(

        'extra_fields' => array(

            'display' => array(
                'language' => array(
                    'default' => array(
                        'weight' => '0',
                        'visible' => FALSE,
                    ),
                ),
            ),
        ),
    );
    $export['field_bundle_settings_node__event'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'field_bundle_settings_node__solution_block';
    $strongarm->value = array(

        'extra_fields' => array(

            'display' => array(
                'language' => array(
                    'default' => array(
                        'weight' => '0',
                        'visible' => FALSE,
                    ),
                ),
            ),
        ),
    );
    $export['field_bundle_settings_node__solution_block'] = $strongarm;



    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'field_bundle_settings_node__home_page';
    $strongarm->value = array(

        'extra_fields' => array(

            'display' => array(
                'language' => array(
                    'default' => array(
                        'weight' => '0',
                        'visible' => FALSE,
                    ),
                ),
            ),
        ),
    );
    $export['field_bundle_settings_node__home_page'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'field_bundle_settings_node__community_block';
    $strongarm->value = array(

        'extra_fields' => array(

            'display' => array(
                'language' => array(
                    'default' => array(
                        'weight' => '0',
                        'visible' => FALSE,
                    ),
                ),
            ),
        ),
    );
    $export['field_bundle_settings_node__community_block'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'field_bundle_settings_node__faq';
    $strongarm->value = array(

        'extra_fields' => array(

            'display' => array(
                'language' => array(
                    'default' => array(
                        'weight' => '0',
                        'visible' => FALSE,
                    ),
                ),
            ),
        ),
    );
    $export['field_bundle_settings_node__faq'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'field_bundle_settings_node__getting_started_module';
    $strongarm->value = array(

        'extra_fields' => array(

            'display' => array(
                'language' => array(
                    'default' => array(
                        'weight' => '0',
                        'visible' => FALSE,
                    ),
                ),
            ),
        ),
    );
    $export['field_bundle_settings_node__getting_started_module'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'field_bundle_settings_node__pricing_block';
    $strongarm->value = array(

        'extra_fields' => array(

            'display' => array(
                'language' => array(
                    'default' => array(
                        'weight' => '0',
                        'visible' => FALSE,
                    ),
                ),
            ),
        ),
    );
    $export['field_bundle_settings_node__pricing_block'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'field_bundle_settings_node__product_registration_block';
    $strongarm->value = array(

        'extra_fields' => array(

            'display' => array(
                'language' => array(
                    'default' => array(
                        'weight' => '0',
                        'visible' => FALSE,
                    ),
                ),
            ),
        ),
    );
    $export['field_bundle_settings_node__product_registration_block'] = $strongarm;



    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'field_bundle_settings_node__solution_block';
    $strongarm->value = array(

        'extra_fields' => array(

            'display' => array(
                'language' => array(
                    'default' => array(
                        'weight' => '0',
                        'visible' => FALSE,
                    ),
                ),
            ),
        ),
    );
    $export['field_bundle_settings_node__solution_block'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'field_bundle_settings_node__solution_codar';
    $strongarm->value = array(

        'extra_fields' => array(

            'display' => array(
                'language' => array(
                    'default' => array(
                        'weight' => '0',
                        'visible' => FALSE,
                    ),
                ),
            ),
        ),
    );
    $export['field_bundle_settings_node__solution_codar'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'field_bundle_settings_node__solution_vertica';
    $strongarm->value = array(

        'extra_fields' => array(

            'display' => array(
                'language' => array(
                    'default' => array(
                        'weight' => '0',
                        'visible' => FALSE,
                    ),
                ),
            ),
        ),
    );
    $export['field_bundle_settings_node__solution_vertica'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'field_bundle_settings_node__vertical_tab';
    $strongarm->value = array(

        'extra_fields' => array(

            'display' => array(
                'language' => array(
                    'default' => array(
                        'weight' => '0',
                        'visible' => FALSE,
                    ),
                ),
            ),
        ),
    );
    $export['field_bundle_settings_node__vertical_tab'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'field_bundle_settings_node__micro_site_hero_banner';
    $strongarm->value = array(

        'extra_fields' => array(

            'display' => array(
                'language' => array(
                    'default' => array(
                        'weight' => '0',
                        'visible' => FALSE,
                    ),
                ),
            ),
        ),
    );
    $export['field_bundle_settings_node__micro_site_hero_banner'] = $strongarm;

  return $export;
}
