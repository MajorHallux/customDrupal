<?php
/**
 * Created by PhpStorm.
 * User: seanschoolcraft
 * Date: 2/23/15
 * Time: 2:49 PM
 */

/**
 * Implementation of hook_views_default_views_alter().
 */
function hp_views_views_default_views_alter(&$views) {
    //View for RESOURCES LANDING PAGE
    $view = new view();
    $view->name = 'resources';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'node';
    $view->human_name = 'Resources';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'Resources';
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'none';
    $handler->display->display_options['style_plugin'] = 'default';
    $handler->display->display_options['row_plugin'] = 'fields';
    /* Header: Global: Text area */
    $handler->display->display_options['header']['area']['id'] = 'area';
    $handler->display->display_options['header']['area']['table'] = 'views';
    $handler->display->display_options['header']['area']['field'] = 'area';
    $handler->display->display_options['header']['area']['content'] = 'Need to troubleshoot a technical problem, learn how to leverage product tools or get best practices? Get in-depth information with a trip to our Resources section.';
    $handler->display->display_options['header']['area']['format'] = 'full_html';
    /* Field: Content: Product Code */
    $handler->display->display_options['fields']['field_product_code']['id'] = 'field_product_code';
    $handler->display->display_options['fields']['field_product_code']['table'] = 'field_data_field_product_code';
    $handler->display->display_options['fields']['field_product_code']['field'] = 'field_product_code';
    $handler->display->display_options['fields']['field_product_code']['label'] = '';
    $handler->display->display_options['fields']['field_product_code']['exclude'] = TRUE;
    $handler->display->display_options['fields']['field_product_code']['element_label_colon'] = FALSE;
    /* Field: Content: Product Logo */
    $handler->display->display_options['fields']['field_product_logo']['id'] = 'field_product_logo';
    $handler->display->display_options['fields']['field_product_logo']['table'] = 'field_data_field_product_logo';
    $handler->display->display_options['fields']['field_product_logo']['field'] = 'field_product_logo';
    $handler->display->display_options['fields']['field_product_logo']['label'] = '';
    $handler->display->display_options['fields']['field_product_logo']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_product_logo']['click_sort_column'] = 'fid';
    $handler->display->display_options['fields']['field_product_logo']['settings'] = array(
        'image_style' => '',
        'image_link' => '',
    );
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['label'] = '';
    $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
    $handler->display->display_options['fields']['title']['alter']['path'] = 'resources/[field_product_code]';
    $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
    $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
    $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
    /* Field: Content: Body */
    $handler->display->display_options['fields']['body']['id'] = 'body';
    $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
    $handler->display->display_options['fields']['body']['field'] = 'body';
    $handler->display->display_options['fields']['body']['label'] = '';
    $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
    /* Sort criterion: Content: Title */
    $handler->display->display_options['sorts']['title']['id'] = 'title';
    $handler->display->display_options['sorts']['title']['table'] = 'node';
    $handler->display->display_options['sorts']['title']['field'] = 'title';
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
        'product_block' => 'product_block',
    );

    /* Display: Landing Page */
    $handler = $view->new_display('page', 'Landing Page', 'page');
    $handler->display->display_options['defaults']['header'] = FALSE;
    /* Header: Global: Text area */
    $handler->display->display_options['header']['area']['id'] = 'area';
    $handler->display->display_options['header']['area']['table'] = 'views';
    $handler->display->display_options['header']['area']['field'] = 'area';
    $handler->display->display_options['header']['area']['content'] = '<h2>Resources</h2><br />Need to troubleshoot a technical problem, learn how to leverage product tools or get best practices? Get in-depth information with a trip to our Resources section.';
    $handler->display->display_options['header']['area']['format'] = 'full_html';
    $handler->display->display_options['path'] = 'resources';
    $translatables['resources'] = array(
        t('Master'),
        t('Resources'),
        t('more'),
        t('Apply'),
        t('Reset'),
        t('Sort by'),
        t('Asc'),
        t('Desc'),
        t('Need to troubleshoot a technical problem, learn how to leverage product tools or get best practices? Get in-depth information with a trip to our Resources section.'),
        t('Landing Page'),
    );

    $views[$view->name] = $view;

    //View for Workbench
    $view = new view();
    $view->name = 'workbench_moderation';
    $view->description = 'Lists content by moderation state.';
    $view->tag = 'Workbench Moderation';
    $view->base_table = 'node_revision';
    $view->human_name = 'Workbench Moderation: Content';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Defaults */
    $handler = $view->new_display('default', 'Defaults', 'default');
    $handler->display->display_options['title'] = 'Content I\'ve edited';
    $handler->display->display_options['use_more_always'] = TRUE;
    $handler->display->display_options['use_more_text'] = 'view all';
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['access']['perm'] = 'use workbench_moderation my drafts tab';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['query']['options']['query_comment'] = FALSE;
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'full';
    $handler->display->display_options['pager']['options']['items_per_page'] = '25';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['pager']['options']['id'] = '0';
    $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
    $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 25, 50, 100, 200';
    $handler->display->display_options['style_plugin'] = 'table';
    $handler->display->display_options['style_options']['columns'] = array(
        'nid' => 'nid',
        'log' => 'log',
        'nothing' => 'nothing',
        'state' => 'state',
        'moderation_actions' => 'moderation_actions',
        'title' => 'title',
        'type' => 'type',
        'name' => 'name',
        'changed' => 'changed',
    );
    $handler->display->display_options['style_options']['default'] = 'changed';
    $handler->display->display_options['style_options']['info'] = array(
        'nid' => array(
            'sortable' => 0,
            'default_sort_order' => 'asc',
            'align' => '',
            'separator' => '',
        ),
        'log' => array(
            'align' => '',
            'separator' => '',
        ),
        'nothing' => array(
            'align' => '',
            'separator' => '',
        ),
        'state' => array(
            'sortable' => 1,
            'default_sort_order' => 'asc',
            'align' => '',
            'separator' => '',
        ),
        'moderation_actions' => array(
            'align' => '',
            'separator' => '',
        ),
        'title' => array(
            'sortable' => 1,
            'default_sort_order' => 'asc',
            'align' => '',
            'separator' => '',
        ),
        'type' => array(
            'sortable' => 1,
            'default_sort_order' => 'asc',
            'align' => '',
            'separator' => '',
        ),
        'name' => array(
            'sortable' => 1,
            'default_sort_order' => 'asc',
            'align' => '',
            'separator' => '',
        ),
        'changed' => array(
            'sortable' => 1,
            'default_sort_order' => 'desc',
            'align' => '',
            'separator' => '',
        ),
    );
    $handler->display->display_options['style_options']['order'] = 'desc';
    /* No results behavior: Global: Text area */
    $handler->display->display_options['empty']['area']['id'] = 'area';
    $handler->display->display_options['empty']['area']['table'] = 'views';
    $handler->display->display_options['empty']['area']['field'] = 'area';
    $handler->display->display_options['empty']['area']['content'] = 'You haven\'t created or edited any content.';
    $handler->display->display_options['empty']['area']['format'] = '1';
    /* Relationship: Workbench Moderation: Node */
    $handler->display->display_options['relationships']['nid']['id'] = 'nid';
    $handler->display->display_options['relationships']['nid']['table'] = 'workbench_moderation_node_history';
    $handler->display->display_options['relationships']['nid']['field'] = 'nid';
    $handler->display->display_options['relationships']['nid']['required'] = TRUE;
    /* Relationship: Content revision: User */
    $handler->display->display_options['relationships']['uid']['id'] = 'uid';
    $handler->display->display_options['relationships']['uid']['table'] = 'node_revision';
    $handler->display->display_options['relationships']['uid']['field'] = 'uid';
    /* Field: Content: Nid */
    $handler->display->display_options['fields']['nid']['id'] = 'nid';
    $handler->display->display_options['fields']['nid']['table'] = 'node';
    $handler->display->display_options['fields']['nid']['field'] = 'nid';
    $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
    $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
    $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
    /* Field: Content revision: Log message */
    $handler->display->display_options['fields']['log']['id'] = 'log';
    $handler->display->display_options['fields']['log']['table'] = 'node_revision';
    $handler->display->display_options['fields']['log']['field'] = 'log';
    $handler->display->display_options['fields']['log']['exclude'] = TRUE;
    /* Field: Workbench Moderation: Moderation history link */
    $handler->display->display_options['fields']['workbench_moderation_history_link']['id'] = 'workbench_moderation_history_link';
    $handler->display->display_options['fields']['workbench_moderation_history_link']['table'] = 'node';
    $handler->display->display_options['fields']['workbench_moderation_history_link']['field'] = 'workbench_moderation_history_link';
    $handler->display->display_options['fields']['workbench_moderation_history_link']['exclude'] = TRUE;
    $handler->display->display_options['fields']['workbench_moderation_history_link']['hide_alter_empty'] = FALSE;
    /* Field: Moderation state */
    $handler->display->display_options['fields']['state']['id'] = 'state';
    $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
    $handler->display->display_options['fields']['state']['field'] = 'state';
    $handler->display->display_options['fields']['state']['ui_name'] = 'Moderation state';
    $handler->display->display_options['fields']['state']['label'] = 'Moderation state';
    $handler->display->display_options['fields']['state']['alter']['alter_text'] = TRUE;
    $handler->display->display_options['fields']['state']['alter']['text'] = '<div>[state]</div><div>[workbench_moderation_history_link]</div>';
    $handler->display->display_options['fields']['state']['hide_alter_empty'] = FALSE;
    $handler->display->display_options['fields']['state']['machine_name'] = 0;
    /* Field: Workbench Moderation: Moderation links */
    $handler->display->display_options['fields']['moderation_actions']['id'] = 'moderation_actions';
    $handler->display->display_options['fields']['moderation_actions']['table'] = 'workbench_moderation_node_history';
    $handler->display->display_options['fields']['moderation_actions']['field'] = 'moderation_actions';
    $handler->display->display_options['fields']['moderation_actions']['label'] = 'Set moderation state';
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['relationship'] = 'nid';
    $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
    $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
    /* Field: Content: Type */
    $handler->display->display_options['fields']['type']['id'] = 'type';
    $handler->display->display_options['fields']['type']['table'] = 'node';
    $handler->display->display_options['fields']['type']['field'] = 'type';
    $handler->display->display_options['fields']['type']['relationship'] = 'nid';
    $handler->display->display_options['fields']['type']['alter']['word_boundary'] = FALSE;
    $handler->display->display_options['fields']['type']['alter']['ellipsis'] = FALSE;
    /* Field: User: Name */
    $handler->display->display_options['fields']['name']['id'] = 'name';
    $handler->display->display_options['fields']['name']['table'] = 'users';
    $handler->display->display_options['fields']['name']['field'] = 'name';
    $handler->display->display_options['fields']['name']['relationship'] = 'uid';
    $handler->display->display_options['fields']['name']['label'] = 'Revised by';
    /* Field: Content: Updated date */
    $handler->display->display_options['fields']['changed']['id'] = 'changed';
    $handler->display->display_options['fields']['changed']['table'] = 'node';
    $handler->display->display_options['fields']['changed']['field'] = 'changed';
    $handler->display->display_options['fields']['changed']['relationship'] = 'nid';
    $handler->display->display_options['fields']['changed']['label'] = 'Last updated';
    $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
    $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
    $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
    /* Sort criterion: Content: Updated date */
    $handler->display->display_options['sorts']['changed']['id'] = 'changed';
    $handler->display->display_options['sorts']['changed']['table'] = 'node';
    $handler->display->display_options['sorts']['changed']['field'] = 'changed';
    $handler->display->display_options['sorts']['changed']['relationship'] = 'nid';
    $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
    /* Filter criterion: User: Current */
    $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
    $handler->display->display_options['filters']['uid_current']['table'] = 'users';
    $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
    $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
    $handler->display->display_options['filters']['uid_current']['value'] = '1';
    /* Filter criterion: Content: Title */
    $handler->display->display_options['filters']['title']['id'] = 'title';
    $handler->display->display_options['filters']['title']['table'] = 'node';
    $handler->display->display_options['filters']['title']['field'] = 'title';
    $handler->display->display_options['filters']['title']['relationship'] = 'nid';
    $handler->display->display_options['filters']['title']['operator'] = 'contains';
    $handler->display->display_options['filters']['title']['exposed'] = TRUE;
    $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
    $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
    $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
    $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
    $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
    /* Filter criterion: Content: Type */
    $handler->display->display_options['filters']['type']['id'] = 'type';
    $handler->display->display_options['filters']['type']['table'] = 'node';
    $handler->display->display_options['filters']['type']['field'] = 'type';
    $handler->display->display_options['filters']['type']['relationship'] = 'nid';
    $handler->display->display_options['filters']['type']['value'] = array(
        'download_page' => 'download_page',
        'event' => 'event',
        'home_page' => 'home_page',
        'product_registration_block' => 'product_registration_block',
        'pronq_site_map' => 'pronq_site_map',
        'solution_apppulse_active' => 'solution_apppulse_active',
        'solution_apppulse_diagnostic' => 'solution_apppulse_diagnostic',
        'solution_apppulse_mobile' => 'solution_apppulse_mobile',
        'solution_loadrunner' => 'solution_loadrunner',
        'solution_overlord' => 'solution_overlord',
        'solution_ptas' => 'solution_ptas',
        'solution_vpv' => 'solution_vpv',
        'static_page' => 'static_page',
        'terms_conditions' => 'terms_conditions',
    );
    $handler->display->display_options['filters']['type']['group'] = 1;
    $handler->display->display_options['filters']['type']['exposed'] = TRUE;
    $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
    $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
    $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
    $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
    $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
    $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
        2 => '2',
        1 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        10 => 0,
        6 => 0,
        11 => 0,
        8 => 0,
    );
    $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
    /* Filter criterion: Workbench Moderation: State */
    $handler->display->display_options['filters']['state']['id'] = 'state';
    $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
    $handler->display->display_options['filters']['state']['field'] = 'state';
    $handler->display->display_options['filters']['state']['value'] = array(
        'all' => 'all',
        'draft' => 'draft',
        'needs_review' => 'needs_review',
        'published' => 'published',
    );
    $handler->display->display_options['filters']['state']['exposed'] = TRUE;
    $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
    $handler->display->display_options['filters']['state']['expose']['label'] = 'State';
    $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
    $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
    $handler->display->display_options['filters']['state']['expose']['remember'] = TRUE;
    $handler->display->display_options['filters']['state']['expose']['reduce'] = TRUE;
    /* Filter criterion: Workbench Moderation: Current */
    $handler->display->display_options['filters']['current']['id'] = 'current';
    $handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
    $handler->display->display_options['filters']['current']['field'] = 'current';

    /* Display: Needs review page */
    $handler = $view->new_display('page', 'Needs review page', 'needs_review_page');
    $handler->display->display_options['defaults']['title'] = FALSE;
    $handler->display->display_options['title'] = 'Needs review';
    $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
    $handler->display->display_options['defaults']['access'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['access']['perm'] = 'use workbench_moderation needs review tab';
    $handler->display->display_options['defaults']['empty'] = FALSE;
    /* No results behavior: Global: Text area */
    $handler->display->display_options['empty']['area']['id'] = 'area';
    $handler->display->display_options['empty']['area']['table'] = 'views';
    $handler->display->display_options['empty']['area']['field'] = 'area';
    $handler->display->display_options['empty']['area']['content'] = 'This list displays content in the "Needs review" state that you can moderate. Currently there is no such content.';
    $handler->display->display_options['empty']['area']['format'] = 'plain_text';
    $handler->display->display_options['defaults']['filter_groups'] = FALSE;
    $handler->display->display_options['defaults']['filters'] = FALSE;
    /* Filter criterion: Workbench Moderation: Current */
    $handler->display->display_options['filters']['current']['id'] = 'current';
    $handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
    $handler->display->display_options['filters']['current']['field'] = 'current';
    $handler->display->display_options['filters']['current']['value'] = '1';
    /* Filter criterion: Workbench Moderation: State */
    $handler->display->display_options['filters']['state']['id'] = 'state';
    $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
    $handler->display->display_options['filters']['state']['field'] = 'state';
    $handler->display->display_options['filters']['state']['value'] = array(
        'needs_review' => 'needs_review',
        'needs_design_review' => 'needs_design_review',
        'needs_content_review' => 'needs_content_review',
    );
    $handler->display->display_options['filters']['state']['expose']['label'] = 'Workbench Moderation: State';
    $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
    $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
    /* Filter criterion: Content: Title */
    $handler->display->display_options['filters']['title']['id'] = 'title';
    $handler->display->display_options['filters']['title']['table'] = 'node';
    $handler->display->display_options['filters']['title']['field'] = 'title';
    $handler->display->display_options['filters']['title']['relationship'] = 'nid';
    $handler->display->display_options['filters']['title']['operator'] = 'contains';
    $handler->display->display_options['filters']['title']['exposed'] = TRUE;
    $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
    $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
    $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
    $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
    $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
    /* Filter criterion: Content: Type */
    $handler->display->display_options['filters']['type']['id'] = 'type';
    $handler->display->display_options['filters']['type']['table'] = 'node';
    $handler->display->display_options['filters']['type']['field'] = 'type';
    $handler->display->display_options['filters']['type']['relationship'] = 'nid';
    $handler->display->display_options['filters']['type']['exposed'] = TRUE;
    $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
    $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
    $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
    $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
    $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
    $handler->display->display_options['path'] = 'admin/workbench/needs-review';
    $handler->display->display_options['menu']['type'] = 'tab';
    $handler->display->display_options['menu']['title'] = 'Needs review';
    $handler->display->display_options['menu']['weight'] = '99';

    /* Display: Drafts page */
    $handler = $view->new_display('page', 'Drafts page', 'drafts_page');
    $handler->display->display_options['defaults']['title'] = FALSE;
    $handler->display->display_options['title'] = 'My drafts';
    $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
    $handler->display->display_options['defaults']['empty'] = FALSE;
    /* No results behavior: Global: Text area */
    $handler->display->display_options['empty']['area']['id'] = 'area';
    $handler->display->display_options['empty']['area']['table'] = 'views';
    $handler->display->display_options['empty']['area']['field'] = 'area';
    $handler->display->display_options['empty']['area']['content'] = 'This list displays content you have created that is not published. Currently there is no such content.';
    $handler->display->display_options['empty']['area']['format'] = 'plain_text';
    $handler->display->display_options['path'] = 'admin/workbench/drafts';
    $handler->display->display_options['menu']['type'] = 'tab';
    $handler->display->display_options['menu']['title'] = 'My drafts';
    $handler->display->display_options['menu']['weight'] = '98';

    /* Display: Needs published page */
    $handler = $view->new_display('page', 'Needs published page', 'page_1');
    $handler->display->display_options['defaults']['title'] = FALSE;
    $handler->display->display_options['title'] = 'Needs Published';
    $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
    $handler->display->display_options['defaults']['access'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['access']['perm'] = 'use workbench_moderation needs review tab';
    $handler->display->display_options['defaults']['empty'] = FALSE;
    /* No results behavior: Global: Text area */
    $handler->display->display_options['empty']['area']['id'] = 'area';
    $handler->display->display_options['empty']['area']['table'] = 'views';
    $handler->display->display_options['empty']['area']['field'] = 'area';
    $handler->display->display_options['empty']['area']['content'] = 'This list displays content in the "Needs review" state that you can moderate. Currently there is no such content.';
    $handler->display->display_options['empty']['area']['format'] = 'plain_text';
    $handler->display->display_options['defaults']['filter_groups'] = FALSE;
    $handler->display->display_options['defaults']['filters'] = FALSE;
    /* Filter criterion: Workbench Moderation: Current */
    $handler->display->display_options['filters']['current']['id'] = 'current';
    $handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
    $handler->display->display_options['filters']['current']['field'] = 'current';
    $handler->display->display_options['filters']['current']['value'] = '1';
    /* Filter criterion: Workbench Moderation: State */
    $handler->display->display_options['filters']['state']['id'] = 'state';
    $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
    $handler->display->display_options['filters']['state']['field'] = 'state';
    $handler->display->display_options['filters']['state']['value'] = array(
        'needs_review' => 'needs_review',
    );
    $handler->display->display_options['filters']['state']['expose']['label'] = 'Workbench Moderation: State';
    $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
    $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
    /* Filter criterion: Content: Title */
    $handler->display->display_options['filters']['title']['id'] = 'title';
    $handler->display->display_options['filters']['title']['table'] = 'node';
    $handler->display->display_options['filters']['title']['field'] = 'title';
    $handler->display->display_options['filters']['title']['relationship'] = 'nid';
    $handler->display->display_options['filters']['title']['operator'] = 'contains';
    $handler->display->display_options['filters']['title']['exposed'] = TRUE;
    $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
    $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
    $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
    $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
    $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
    /* Filter criterion: Content: Type */
    $handler->display->display_options['filters']['type']['id'] = 'type';
    $handler->display->display_options['filters']['type']['table'] = 'node';
    $handler->display->display_options['filters']['type']['field'] = 'type';
    $handler->display->display_options['filters']['type']['relationship'] = 'nid';
    $handler->display->display_options['filters']['type']['exposed'] = TRUE;
    $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
    $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
    $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
    $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
    $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
    $handler->display->display_options['path'] = 'admin/workbench/needs-published';
    $handler->display->display_options['menu']['type'] = 'tab';
    $handler->display->display_options['menu']['title'] = 'Needs Published';
    $handler->display->display_options['menu']['weight'] = '100';
    $handler->display->display_options['menu']['context'] = 0;
    $handler->display->display_options['menu']['context_only_inline'] = 0;
    $translatables['workbench_moderation'] = array(
        t('Defaults'),
        t('Content I\'ve edited'),
        t('view all'),
        t('Apply'),
        t('Reset'),
        t('Sort by'),
        t('Asc'),
        t('Desc'),
        t('Items per page'),
        t('- All -'),
        t('Offset'),
        t('« first'),
        t('‹ previous'),
        t('next ›'),
        t('last »'),
        t('You haven\'t created or edited any content.'),
        t('Node'),
        t('revision user'),
        t('Nid'),
        t('Log message'),
        t('Moderation history link'),
        t('Moderation state'),
        t('<div>[state]</div><div>[workbench_moderation_history_link]</div>'),
        t('Set moderation state'),
        t('Title'),
        t('Type'),
        t('Revised by'),
        t('Last updated'),
        t('State'),
        t('Needs review page'),
        t('Needs review'),
        t('more'),
        t('This list displays content in the "Needs review" state that you can moderate. Currently there is no such content.'),
        t('Workbench Moderation: State'),
        t('Drafts page'),
        t('My drafts'),
        t('This list displays content you have created that is not published. Currently there is no such content.'),
        t('Needs published page'),
        t('Needs Published'),
    );
    // Override the existing view with this new definition.
    $views['workbench_moderation'] = $view;

    #VIEW FOR API DELIVERY OF TRY/BUY CONTENT
    $view = new view();
    $view->name = 'trybuy_content_delivery';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'node';
    $view->human_name = 'TryBuy Content Delivery';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'some';
    $handler->display->display_options['pager']['options']['items_per_page'] = '1';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['style_plugin'] = 'views_json';
    $handler->display->display_options['style_options']['plaintext_output'] = 0;
    $handler->display->display_options['style_options']['remove_newlines'] = 1;
    $handler->display->display_options['style_options']['jsonp_prefix'] = '';
    $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
    $handler->display->display_options['style_options']['object_arrays'] = 0;
    $handler->display->display_options['style_options']['numeric_strings'] = 0;
    $handler->display->display_options['style_options']['bigint_string'] = 0;
    $handler->display->display_options['style_options']['pretty_print'] = 0;
    $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
    $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
    $handler->display->display_options['style_options']['char_encoding'] = array();
    /* Field: Content: Heading */
    $handler->display->display_options['fields']['field_heading']['id'] = 'field_heading';
    $handler->display->display_options['fields']['field_heading']['table'] = 'field_data_field_heading';
    $handler->display->display_options['fields']['field_heading']['field'] = 'field_heading';
    /* Field: Content: Sub Heading */
    $handler->display->display_options['fields']['field_sub_heading']['id'] = 'field_sub_heading';
    $handler->display->display_options['fields']['field_sub_heading']['table'] = 'field_data_field_sub_heading';
    $handler->display->display_options['fields']['field_sub_heading']['field'] = 'field_sub_heading';
    $handler->display->display_options['fields']['field_sub_heading']['label'] = 'Subheading';
    /* Field: Content: Body */
    $handler->display->display_options['fields']['body']['id'] = 'body';
    $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
    $handler->display->display_options['fields']['body']['field'] = 'body';
    $handler->display->display_options['fields']['body']['label'] = 'Description';
    $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
    /* Field: Content: Logged In */
    $handler->display->display_options['fields']['field_logged_in']['id'] = 'field_logged_in';
    $handler->display->display_options['fields']['field_logged_in']['table'] = 'field_data_field_logged_in';
    $handler->display->display_options['fields']['field_logged_in']['field'] = 'field_logged_in';
    $handler->display->display_options['fields']['field_logged_in']['exclude'] = TRUE;
    /* Contextual filter: Content: Registration Type (field_registration_type) */
    $handler->display->display_options['arguments']['field_registration_type_tid']['id'] = 'field_registration_type_tid';
    $handler->display->display_options['arguments']['field_registration_type_tid']['table'] = 'field_data_field_registration_type';
    $handler->display->display_options['arguments']['field_registration_type_tid']['field'] = 'field_registration_type_tid';
    $handler->display->display_options['arguments']['field_registration_type_tid']['default_argument_type'] = 'fixed';
    $handler->display->display_options['arguments']['field_registration_type_tid']['summary']['number_of_records'] = '0';
    $handler->display->display_options['arguments']['field_registration_type_tid']['summary']['format'] = 'default_summary';
    $handler->display->display_options['arguments']['field_registration_type_tid']['summary_options']['items_per_page'] = '25';
    $handler->display->display_options['arguments']['field_registration_type_tid']['specify_validation'] = TRUE;
    $handler->display->display_options['arguments']['field_registration_type_tid']['validate']['type'] = 'taxonomy_term';
    $handler->display->display_options['arguments']['field_registration_type_tid']['validate_options']['vocabularies'] = array(
        'registration_type' => 'registration_type',
    );
    $handler->display->display_options['arguments']['field_registration_type_tid']['validate_options']['type'] = 'convert';
    $handler->display->display_options['arguments']['field_registration_type_tid']['validate_options']['transform'] = TRUE;
    /* Contextual filter: Content: Product Code (field_product_code) */
    $handler->display->display_options['arguments']['field_product_code_value']['id'] = 'field_product_code_value';
    $handler->display->display_options['arguments']['field_product_code_value']['table'] = 'field_data_field_product_code';
    $handler->display->display_options['arguments']['field_product_code_value']['field'] = 'field_product_code_value';
    $handler->display->display_options['arguments']['field_product_code_value']['default_action'] = 'not found';
    $handler->display->display_options['arguments']['field_product_code_value']['default_argument_type'] = 'fixed';
    $handler->display->display_options['arguments']['field_product_code_value']['summary']['number_of_records'] = '0';
    $handler->display->display_options['arguments']['field_product_code_value']['summary']['format'] = 'default_summary';
    $handler->display->display_options['arguments']['field_product_code_value']['summary_options']['items_per_page'] = '25';
    $handler->display->display_options['arguments']['field_product_code_value']['limit'] = '0';
    /* Contextual filter: Content: Logged In (field_logged_in) */
    $handler->display->display_options['arguments']['field_logged_in_value']['id'] = 'field_logged_in_value';
    $handler->display->display_options['arguments']['field_logged_in_value']['table'] = 'field_data_field_logged_in';
    $handler->display->display_options['arguments']['field_logged_in_value']['field'] = 'field_logged_in_value';
    $handler->display->display_options['arguments']['field_logged_in_value']['default_argument_type'] = 'fixed';
    $handler->display->display_options['arguments']['field_logged_in_value']['summary']['number_of_records'] = '0';
    $handler->display->display_options['arguments']['field_logged_in_value']['summary']['format'] = 'default_summary';
    $handler->display->display_options['arguments']['field_logged_in_value']['summary_options']['items_per_page'] = '25';
    $handler->display->display_options['arguments']['field_logged_in_value']['limit'] = '0';
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
        'product_registration_block' => 'product_registration_block',
    );
    /* Filter criterion: Content: Product Code (field_product_code) */
    $handler->display->display_options['filters']['field_product_code_value']['id'] = 'field_product_code_value';
    $handler->display->display_options['filters']['field_product_code_value']['table'] = 'field_data_field_product_code';
    $handler->display->display_options['filters']['field_product_code_value']['field'] = 'field_product_code_value';

    /* Display: Page */
    $handler = $view->new_display('page', 'Page', 'page_1');
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
        'product_registration_block' => 'product_registration_block',
    );
    /* Filter criterion: Workbench Moderation: Published */
    $handler->display->display_options['filters']['published']['id'] = 'published';
    $handler->display->display_options['filters']['published']['table'] = 'workbench_moderation_node_history';
    $handler->display->display_options['filters']['published']['field'] = 'published';
    $handler->display->display_options['filters']['published']['value'] = '1';
    $handler->display->display_options['path'] = 'product-registration/%/%';

    /* Display: buy content */
    $handler = $view->new_display('page', 'buy content', 'page_2');
    $handler->display->display_options['defaults']['arguments'] = FALSE;
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
        'product_registration_block' => 'product_registration_block',
    );
    /* Filter criterion: Content: Product Code (field_product_code) */
    $handler->display->display_options['filters']['field_product_code_value']['id'] = 'field_product_code_value';
    $handler->display->display_options['filters']['field_product_code_value']['table'] = 'field_data_field_product_code';
    $handler->display->display_options['filters']['field_product_code_value']['field'] = 'field_product_code_value';
    $handler->display->display_options['filters']['field_product_code_value']['value'] = 'buy-next';
    $handler->display->display_options['path'] = 'product-registration/buy/%';
    $translatables['trybuy_content_delivery'] = array(
        t('Master'),
        t('more'),
        t('Apply'),
        t('Reset'),
        t('Sort by'),
        t('Asc'),
        t('Desc'),
        t('Heading'),
        t('Subheading'),
        t('Description'),
        t('Logged In'),
        t('All'),
        t('Page'),
        t('buy content'),
    );


    $views[$view->name] = $view;

    //Product Terms List View default
    $view = new view();
    $view->name = 'product_terms_list';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'taxonomy_term_data';
    $view->human_name = 'Product terms list';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'none';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['style_plugin'] = 'default';
    $handler->display->display_options['row_plugin'] = 'fields';
    /* Field: Taxonomy term: Name */
    $handler->display->display_options['fields']['name']['id'] = 'name';
    $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
    $handler->display->display_options['fields']['name']['field'] = 'name';
    $handler->display->display_options['fields']['name']['label'] = '';
    $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
    $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
    $handler->display->display_options['fields']['name']['element_type'] = '0';
    $handler->display->display_options['fields']['name']['element_label_type'] = '0';
    $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['name']['element_wrapper_type'] = '0';
    $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
    /* Field: Taxonomy term: Term description */
    $handler->display->display_options['fields']['description']['id'] = 'description';
    $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
    $handler->display->display_options['fields']['description']['field'] = 'description';
    $handler->display->display_options['fields']['description']['label'] = '';
    $handler->display->display_options['fields']['description']['element_type'] = '0';
    $handler->display->display_options['fields']['description']['element_label_type'] = '0';
    $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['description']['element_wrapper_type'] = '0';
    $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
    /* Field: Field: Solution Logo */
    $handler->display->display_options['fields']['field_solution_logo']['id'] = 'field_solution_logo';
    $handler->display->display_options['fields']['field_solution_logo']['table'] = 'field_data_field_solution_logo';
    $handler->display->display_options['fields']['field_solution_logo']['field'] = 'field_solution_logo';
    $handler->display->display_options['fields']['field_solution_logo']['label'] = '';
    $handler->display->display_options['fields']['field_solution_logo']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_solution_logo']['click_sort_column'] = 'fid';
    $handler->display->display_options['fields']['field_solution_logo']['settings'] = array(
        'image_style' => '',
        'image_link' => '',
    );
    /* Filter criterion: Taxonomy vocabulary: Machine name */
    $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
    $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
    $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
    $handler->display->display_options['filters']['machine_name']['value'] = array(
        'product_category' => 'product_category',
    );
    $translatables['product_terms_list'] = array(
        t('Master'),
        t('more'),
        t('Apply'),
        t('Reset'),
        t('Sort by'),
        t('Asc'),
        t('Desc'),
    );

    $views['product_terms_list'] = $view;

    //product landing page default view
    $view = new view();
    $view->name = 'products_home';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'node';
    $view->human_name = 'Products home';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'Products';
    $handler->display->display_options['use_ajax'] = TRUE;
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
    $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
    $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Products A-Z';
    $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
    $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
    $handler->display->display_options['exposed_form']['options']['bef'] = array(
        'general' => array(
            'allow_secondary' => 0,
            'secondary_label' => 'Advanced options',
        ),
        'field_solution_category_tid' => array(
            'bef_format' => 'bef_links',
            'more_options' => array(
                'bef_select_all_none' => FALSE,
                'bef_collapsible' => 0,
                'is_secondary' => 0,
                'any_label' => '',
                'bef_filter_description' => '',
                'tokens' => array(
                    'available' => array(
                        0 => 'global_types',
                    ),
                ),
                'rewrite' => array(
                    'filter_rewrite_values' => '',
                ),
            ),
        ),
    );
    $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
    $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
    $handler->display->display_options['pager']['type'] = 'none';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['style_plugin'] = 'default';
    $handler->display->display_options['style_options']['grouping'] = array(
        0 => array(
            'field' => 'field_product_category',
            'rendered' => 1,
            'rendered_strip' => 0,
        ),
    );
    $handler->display->display_options['row_plugin'] = 'fields';
    /* Header: Global: Text area */
    $handler->display->display_options['header']['area']['id'] = 'area';
    $handler->display->display_options['header']['area']['table'] = 'views';
    $handler->display->display_options['header']['area']['field'] = 'area';
    $handler->display->display_options['header']['area']['label'] = 'Products';
    $handler->display->display_options['header']['area']['empty'] = TRUE;
    $handler->display->display_options['header']['area']['content'] = '<h1>Products</h1><p>HP Software offers both SaaS/on-demand and on-premise software that you can try and buy at your convenience.
We\'re adding new products, solutions, and resources pretty often, so <a href="javascript:void(0);" class="newsletter-signup">sign up for our newsletter</a> to stay informed.</p>';
    $handler->display->display_options['header']['area']['format'] = 'full_html';
    /* Field: Content: Info Link */
    $handler->display->display_options['fields']['field_info_link_1']['id'] = 'field_info_link_1';
    $handler->display->display_options['fields']['field_info_link_1']['table'] = 'field_data_field_info_link';
    $handler->display->display_options['fields']['field_info_link_1']['field'] = 'field_info_link';
    $handler->display->display_options['fields']['field_info_link_1']['label'] = '';
    $handler->display->display_options['fields']['field_info_link_1']['exclude'] = TRUE;
    $handler->display->display_options['fields']['field_info_link_1']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_info_link_1']['click_sort_column'] = 'url';
    $handler->display->display_options['fields']['field_info_link_1']['type'] = 'link_plain';
    /* Field: Content: Product Logo */
    $handler->display->display_options['fields']['field_product_logo']['id'] = 'field_product_logo';
    $handler->display->display_options['fields']['field_product_logo']['table'] = 'field_data_field_product_logo';
    $handler->display->display_options['fields']['field_product_logo']['field'] = 'field_product_logo';
    $handler->display->display_options['fields']['field_product_logo']['label'] = '';
    $handler->display->display_options['fields']['field_product_logo']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_product_logo']['click_sort_column'] = 'fid';
    $handler->display->display_options['fields']['field_product_logo']['settings'] = array(
        'image_style' => '',
        'image_link' => '',
    );
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['label'] = '';
    $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
    $handler->display->display_options['fields']['title']['alter']['path'] = '[field_info_link_1]';
    $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
    $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
    $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
    /* Field: Content: Body */
    $handler->display->display_options['fields']['body']['id'] = 'body';
    $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
    $handler->display->display_options['fields']['body']['field'] = 'body';
    $handler->display->display_options['fields']['body']['label'] = '';
    $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
    $handler->display->display_options['fields']['body']['settings'] = array(
        'trim_length' => '200',
    );
    /* Field: Content: Info Link */
    $handler->display->display_options['fields']['field_info_link']['id'] = 'field_info_link';
    $handler->display->display_options['fields']['field_info_link']['table'] = 'field_data_field_info_link';
    $handler->display->display_options['fields']['field_info_link']['field'] = 'field_info_link';
    $handler->display->display_options['fields']['field_info_link']['label'] = '';
    $handler->display->display_options['fields']['field_info_link']['element_type'] = '0';
    $handler->display->display_options['fields']['field_info_link']['element_label_type'] = '0';
    $handler->display->display_options['fields']['field_info_link']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_info_link']['element_wrapper_type'] = '0';
    $handler->display->display_options['fields']['field_info_link']['element_default_classes'] = FALSE;
    $handler->display->display_options['fields']['field_info_link']['click_sort_column'] = 'url';
    /* Field: Content: Try Link */
    $handler->display->display_options['fields']['field_try_link']['id'] = 'field_try_link';
    $handler->display->display_options['fields']['field_try_link']['table'] = 'field_data_field_try_link';
    $handler->display->display_options['fields']['field_try_link']['field'] = 'field_try_link';
    $handler->display->display_options['fields']['field_try_link']['label'] = '';
    $handler->display->display_options['fields']['field_try_link']['element_type'] = '0';
    $handler->display->display_options['fields']['field_try_link']['element_label_type'] = '0';
    $handler->display->display_options['fields']['field_try_link']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_try_link']['element_wrapper_type'] = '0';
    $handler->display->display_options['fields']['field_try_link']['element_default_classes'] = FALSE;
    $handler->display->display_options['fields']['field_try_link']['click_sort_column'] = 'url';
    /* Field: Content: Buy Link */
    $handler->display->display_options['fields']['field_buy_link']['id'] = 'field_buy_link';
    $handler->display->display_options['fields']['field_buy_link']['table'] = 'field_data_field_buy_link';
    $handler->display->display_options['fields']['field_buy_link']['field'] = 'field_buy_link';
    $handler->display->display_options['fields']['field_buy_link']['label'] = '';
    $handler->display->display_options['fields']['field_buy_link']['element_type'] = '0';
    $handler->display->display_options['fields']['field_buy_link']['element_label_type'] = '0';
    $handler->display->display_options['fields']['field_buy_link']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_buy_link']['element_wrapper_type'] = '0';
    $handler->display->display_options['fields']['field_buy_link']['element_default_classes'] = FALSE;
    $handler->display->display_options['fields']['field_buy_link']['click_sort_column'] = 'url';
    /* Field: Content: Solution Category */
    $handler->display->display_options['fields']['field_solution_category']['id'] = 'field_solution_category';
    $handler->display->display_options['fields']['field_solution_category']['table'] = 'field_data_field_solution_category';
    $handler->display->display_options['fields']['field_solution_category']['field'] = 'field_solution_category';
    $handler->display->display_options['fields']['field_solution_category']['label'] = '';
    $handler->display->display_options['fields']['field_solution_category']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_solution_category']['type'] = 'taxonomy_term_reference_plain';
    $handler->display->display_options['fields']['field_solution_category']['delta_offset'] = '0';
    /* Sort criterion: Content: Title */
    $handler->display->display_options['sorts']['title']['id'] = 'title';
    $handler->display->display_options['sorts']['title']['table'] = 'node';
    $handler->display->display_options['sorts']['title']['field'] = 'title';
    $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
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
        'product_block' => 'product_block',
    );
    /* Filter criterion: Content: Solution Category (field_solution_category) */
    $handler->display->display_options['filters']['field_solution_category_tid']['id'] = 'field_solution_category_tid';
    $handler->display->display_options['filters']['field_solution_category_tid']['table'] = 'field_data_field_solution_category';
    $handler->display->display_options['filters']['field_solution_category_tid']['field'] = 'field_solution_category_tid';
    $handler->display->display_options['filters']['field_solution_category_tid']['exposed'] = TRUE;
    $handler->display->display_options['filters']['field_solution_category_tid']['expose']['operator_id'] = 'field_solution_category_tid_op';
    $handler->display->display_options['filters']['field_solution_category_tid']['expose']['label'] = 'Products by solutions';
    $handler->display->display_options['filters']['field_solution_category_tid']['expose']['operator'] = 'field_solution_category_tid_op';
    $handler->display->display_options['filters']['field_solution_category_tid']['expose']['identifier'] = 'field_solution_category_tid';
    $handler->display->display_options['filters']['field_solution_category_tid']['expose']['remember_roles'] = array(
        2 => '2',
        1 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        10 => 0,
        6 => 0,
        8 => 0,
    );
    $handler->display->display_options['filters']['field_solution_category_tid']['type'] = 'select';
    $handler->display->display_options['filters']['field_solution_category_tid']['vocabulary'] = 'product_category';

    /* Display: Product Landing Page */
    $handler = $view->new_display('page', 'Product Landing Page', 'page_1');
    $handler->display->display_options['path'] = 'products';

    /* Display: Page */
    $handler = $view->new_display('page', 'Page', 'page');
    $handler->display->display_options['enabled'] = FALSE;
    $handler->display->display_options['defaults']['fields'] = FALSE;
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['label'] = '';
    $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
    $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
    /* Field: Content: Body */
    $handler->display->display_options['fields']['body']['id'] = 'body';
    $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
    $handler->display->display_options['fields']['body']['field'] = 'body';
    $handler->display->display_options['fields']['body']['label'] = '';
    $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
    /* Field: Global: Custom text */
    $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
    $handler->display->display_options['fields']['nothing']['table'] = 'views';
    $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
    $handler->display->display_options['fields']['nothing']['label'] = '';
    $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="tryBuyLinks"><a href="/app_dev.php/login">TRY</a> | <a>BUY</a><span>';
    $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
    $handler->display->display_options['path'] = 'products';
    $translatables['products_home'] = array(
        t('Master'),
        t('more'),
        t('Apply'),
        t('Products A-Z'),
        t('Sort by'),
        t('Asc'),
        t('Desc'),
        t('Select any filter and click on Apply to see results'),
        t('Products'),
        t('<h1>Products</h1><p>HP Software offers both SaaS/on-demand and on-premise software that you can try and buy at your convenience.
We\'re adding new products, solutions, and resources pretty often, so <a href="javascript:void(0);" class="newsletter-signup">sign up for our newsletter</a> to stay informed.</p>'),
        t('Title'),
        t('Products by solutions'),
        t('Product Landing Page'),
        t('Page'),
        t('<span class="tryBuyLinks"><a href="/app_dev.php/login">TRY</a> | <a>BUY</a><span>'),
    );

    $views['products_home'] = $view;

    $view = new view();
    $view->name = 'pricing_page_content';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'node';
    $view->human_name = 'Pricing Page Content';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'some';
    $handler->display->display_options['pager']['options']['items_per_page'] = '1';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['style_plugin'] = 'views_json';
    $handler->display->display_options['style_options']['root_object'] = 'rows';
    $handler->display->display_options['style_options']['top_child_object'] = 'row';
    $handler->display->display_options['style_options']['plaintext_output'] = 0;
    $handler->display->display_options['style_options']['remove_newlines'] = 1;
    $handler->display->display_options['style_options']['jsonp_prefix'] = '';
    $handler->display->display_options['style_options']['using_views_api_mode'] = 1;
    $handler->display->display_options['style_options']['object_arrays'] = 0;
    $handler->display->display_options['style_options']['numeric_strings'] = 0;
    $handler->display->display_options['style_options']['bigint_string'] = 0;
    $handler->display->display_options['style_options']['pretty_print'] = 0;
    $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
    $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
    $handler->display->display_options['style_options']['char_encoding'] = array();
    /* Relationship: Entity Reference: Referenced Entity */
    $handler->display->display_options['relationships']['field_comparison_rows_target_id']['id'] = 'field_comparison_rows_target_id';
    $handler->display->display_options['relationships']['field_comparison_rows_target_id']['table'] = 'field_data_field_comparison_rows';
    $handler->display->display_options['relationships']['field_comparison_rows_target_id']['field'] = 'field_comparison_rows_target_id';
    $handler->display->display_options['relationships']['field_comparison_rows_target_id']['label'] = 'Term';
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['label'] = '';
    $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
    $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
    $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
    /* Field: Content: Body */
    $handler->display->display_options['fields']['body']['id'] = 'body';
    $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
    $handler->display->display_options['fields']['body']['field'] = 'body';
    /* Field: Content: Nid */
    $handler->display->display_options['fields']['nid']['id'] = 'nid';
    $handler->display->display_options['fields']['nid']['table'] = 'node';
    $handler->display->display_options['fields']['nid']['field'] = 'nid';
    $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
    /* Contextual filter: Content: Product Section (field_product_section) */
    $handler->display->display_options['arguments']['field_product_section_tid']['id'] = 'field_product_section_tid';
    $handler->display->display_options['arguments']['field_product_section_tid']['table'] = 'field_data_field_product_section';
    $handler->display->display_options['arguments']['field_product_section_tid']['field'] = 'field_product_section_tid';
    $handler->display->display_options['arguments']['field_product_section_tid']['default_argument_type'] = 'fixed';
    $handler->display->display_options['arguments']['field_product_section_tid']['summary']['number_of_records'] = '0';
    $handler->display->display_options['arguments']['field_product_section_tid']['summary']['format'] = 'default_summary';
    $handler->display->display_options['arguments']['field_product_section_tid']['summary_options']['items_per_page'] = '25';
    $handler->display->display_options['arguments']['field_product_section_tid']['specify_validation'] = TRUE;
    $handler->display->display_options['arguments']['field_product_section_tid']['validate']['type'] = 'taxonomy_term';
    $handler->display->display_options['arguments']['field_product_section_tid']['validate_options']['vocabularies'] = array(
        'editorial_sections' => 'editorial_sections',
    );
    $handler->display->display_options['arguments']['field_product_section_tid']['validate_options']['type'] = 'convert';
    $handler->display->display_options['arguments']['field_product_section_tid']['validate_options']['transform'] = TRUE;
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
        'pricing_page_content' => 'pricing_page_content',
    );
    $handler->display->display_options['filters']['type']['group'] = 1;

    /* Display: Main Pricing Page */
    $handler = $view->new_display('page', 'Main Pricing Page', 'page_1');
    $handler->display->display_options['defaults']['style_plugin'] = FALSE;
    $handler->display->display_options['style_plugin'] = 'views_json';
    $handler->display->display_options['style_options']['root_object'] = '';
    $handler->display->display_options['style_options']['top_child_object'] = '';
    $handler->display->display_options['style_options']['plaintext_output'] = 0;
    $handler->display->display_options['style_options']['remove_newlines'] = 1;
    $handler->display->display_options['style_options']['jsonp_prefix'] = '';
    $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
    $handler->display->display_options['style_options']['object_arrays'] = 0;
    $handler->display->display_options['style_options']['numeric_strings'] = 0;
    $handler->display->display_options['style_options']['bigint_string'] = 0;
    $handler->display->display_options['style_options']['pretty_print'] = 0;
    $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
    $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
    $handler->display->display_options['style_options']['char_encoding'] = array();
    $handler->display->display_options['defaults']['style_options'] = FALSE;
    $handler->display->display_options['defaults']['row_plugin'] = FALSE;
    $handler->display->display_options['defaults']['row_options'] = FALSE;
    $handler->display->display_options['defaults']['fields'] = FALSE;
    /* Field: Content: Nid */
    $handler->display->display_options['fields']['nid']['id'] = 'nid';
    $handler->display->display_options['fields']['nid']['table'] = 'node';
    $handler->display->display_options['fields']['nid']['field'] = 'nid';
    $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
    /* Field: Global: Custom text */
    $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
    $handler->display->display_options['fields']['nothing']['table'] = 'views';
    $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
    $handler->display->display_options['fields']['nothing']['label'] = 'site_name';
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['label'] = 'title';
    $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
    $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
    $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
    /* Field: Content: Body */
    $handler->display->display_options['fields']['body']['id'] = 'body';
    $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
    $handler->display->display_options['fields']['body']['field'] = 'body';
    $handler->display->display_options['fields']['body']['label'] = 'body';
    $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
    /* Field: Global: View */
    $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
    $handler->display->display_options['fields']['view_1']['table'] = 'views';
    $handler->display->display_options['fields']['view_1']['field'] = 'view';
    $handler->display->display_options['fields']['view_1']['label'] = 'faqs';
    $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['view_1']['hide_empty'] = TRUE;
    $handler->display->display_options['fields']['view_1']['view'] = 'pricing_page_content';
    $handler->display->display_options['fields']['view_1']['display'] = 'page_3';
    $handler->display->display_options['fields']['view_1']['arguments'] = '[!nid]';
    /* Field: Content: Pricing Overview Title */
    $handler->display->display_options['fields']['field_pricing_overview_title']['id'] = 'field_pricing_overview_title';
    $handler->display->display_options['fields']['field_pricing_overview_title']['table'] = 'field_data_field_pricing_overview_title';
    $handler->display->display_options['fields']['field_pricing_overview_title']['field'] = 'field_pricing_overview_title';
    $handler->display->display_options['fields']['field_pricing_overview_title']['label'] = 'overview_title';
    /* Field: Content: Pricing Overview Text */
    $handler->display->display_options['fields']['field_pricing_overview_text']['id'] = 'field_pricing_overview_text';
    $handler->display->display_options['fields']['field_pricing_overview_text']['table'] = 'field_data_field_pricing_overview_text';
    $handler->display->display_options['fields']['field_pricing_overview_text']['field'] = 'field_pricing_overview_text';
    $handler->display->display_options['fields']['field_pricing_overview_text']['label'] = 'overview_text';
    /* Field: Global: View */
    $handler->display->display_options['fields']['view_2']['id'] = 'view_2';
    $handler->display->display_options['fields']['view_2']['table'] = 'views';
    $handler->display->display_options['fields']['view_2']['field'] = 'view';
    $handler->display->display_options['fields']['view_2']['label'] = 'overview';
    $handler->display->display_options['fields']['view_2']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['view_2']['hide_empty'] = TRUE;
    $handler->display->display_options['fields']['view_2']['view'] = 'pricing_page_content';
    $handler->display->display_options['fields']['view_2']['display'] = 'page_4';
    $handler->display->display_options['fields']['view_2']['arguments'] = '[!nid]';
    /* Field: Global: View */
    $handler->display->display_options['fields']['view_3']['id'] = 'view_3';
    $handler->display->display_options['fields']['view_3']['table'] = 'views';
    $handler->display->display_options['fields']['view_3']['field'] = 'view';
    $handler->display->display_options['fields']['view_3']['label'] = 'comparisons';
    $handler->display->display_options['fields']['view_3']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['view_3']['hide_empty'] = TRUE;
    $handler->display->display_options['fields']['view_3']['view'] = 'pricing_page_content';
    $handler->display->display_options['fields']['view_3']['display'] = 'page_5';
    $handler->display->display_options['fields']['view_3']['arguments'] = '[!nid]';
    /* Field: Global: View */
    $handler->display->display_options['fields']['view']['id'] = 'view';
    $handler->display->display_options['fields']['view']['table'] = 'views';
    $handler->display->display_options['fields']['view']['field'] = 'view';
    $handler->display->display_options['fields']['view']['label'] = 'pricing_packages';
    $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['view']['hide_empty'] = TRUE;
    $handler->display->display_options['fields']['view']['view'] = 'pricing_page_content';
    $handler->display->display_options['fields']['view']['display'] = 'page_2';
    $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
    $handler->display->display_options['defaults']['arguments'] = FALSE;
    /* Contextual filter: Content: Product Code (field_product_code) */
    $handler->display->display_options['arguments']['field_product_code_value']['id'] = 'field_product_code_value';
    $handler->display->display_options['arguments']['field_product_code_value']['table'] = 'field_data_field_product_code';
    $handler->display->display_options['arguments']['field_product_code_value']['field'] = 'field_product_code_value';
    $handler->display->display_options['arguments']['field_product_code_value']['default_argument_type'] = 'fixed';
    $handler->display->display_options['arguments']['field_product_code_value']['summary']['number_of_records'] = '0';
    $handler->display->display_options['arguments']['field_product_code_value']['summary']['format'] = 'default_summary';
    $handler->display->display_options['arguments']['field_product_code_value']['summary_options']['items_per_page'] = '25';
    $handler->display->display_options['arguments']['field_product_code_value']['limit'] = '0';
    $handler->display->display_options['path'] = 'pricing-page/%';

    /* Display: Pricing Blocks */
    $handler = $view->new_display('page', 'Pricing Blocks', 'page_2');
    $handler->display->display_options['defaults']['pager'] = FALSE;
    $handler->display->display_options['pager']['type'] = 'none';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['defaults']['style_plugin'] = FALSE;
    $handler->display->display_options['style_plugin'] = 'views_json';
    $handler->display->display_options['style_options']['root_object'] = '';
    $handler->display->display_options['style_options']['top_child_object'] = '';
    $handler->display->display_options['style_options']['plaintext_output'] = 0;
    $handler->display->display_options['style_options']['remove_newlines'] = 1;
    $handler->display->display_options['style_options']['jsonp_prefix'] = '';
    $handler->display->display_options['style_options']['using_views_api_mode'] = 1;
    $handler->display->display_options['style_options']['object_arrays'] = 0;
    $handler->display->display_options['style_options']['numeric_strings'] = 0;
    $handler->display->display_options['style_options']['bigint_string'] = 0;
    $handler->display->display_options['style_options']['pretty_print'] = 0;
    $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
    $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
    $handler->display->display_options['style_options']['char_encoding'] = array();
    $handler->display->display_options['defaults']['style_options'] = FALSE;
    $handler->display->display_options['defaults']['row_plugin'] = FALSE;
    $handler->display->display_options['defaults']['row_options'] = FALSE;
    $handler->display->display_options['defaults']['relationships'] = FALSE;
    /* Relationship: Entity Reference: Referencing entity */
    $handler->display->display_options['relationships']['reverse_field_pricing_blocks_node']['id'] = 'reverse_field_pricing_blocks_node';
    $handler->display->display_options['relationships']['reverse_field_pricing_blocks_node']['table'] = 'node';
    $handler->display->display_options['relationships']['reverse_field_pricing_blocks_node']['field'] = 'reverse_field_pricing_blocks_node';
    $handler->display->display_options['relationships']['reverse_field_pricing_blocks_node']['label'] = 'referencing Content';
    $handler->display->display_options['defaults']['fields'] = FALSE;
    /* Field: Content: Nid */
    $handler->display->display_options['fields']['nid']['id'] = 'nid';
    $handler->display->display_options['fields']['nid']['table'] = 'node';
    $handler->display->display_options['fields']['nid']['field'] = 'nid';
    $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
    /* Field: Content: Product Code */
    $handler->display->display_options['fields']['field_product_code']['id'] = 'field_product_code';
    $handler->display->display_options['fields']['field_product_code']['table'] = 'field_data_field_product_code';
    $handler->display->display_options['fields']['field_product_code']['field'] = 'field_product_code';
    $handler->display->display_options['fields']['field_product_code']['relationship'] = 'reverse_field_parent_node';
    $handler->display->display_options['fields']['field_product_code']['label'] = 'package_id';
    /* Field: Content: Block Header */
    $handler->display->display_options['fields']['field_block_header']['id'] = 'field_block_header';
    $handler->display->display_options['fields']['field_block_header']['table'] = 'field_data_field_block_header';
    $handler->display->display_options['fields']['field_block_header']['field'] = 'field_block_header';
    $handler->display->display_options['fields']['field_block_header']['relationship'] = 'reverse_field_parent_node';
    $handler->display->display_options['fields']['field_block_header']['label'] = 'header';
    /* Field: Content: Button Text */
    $handler->display->display_options['fields']['field_button_text']['id'] = 'field_button_text';
    $handler->display->display_options['fields']['field_button_text']['table'] = 'field_data_field_button_text';
    $handler->display->display_options['fields']['field_button_text']['field'] = 'field_button_text';
    $handler->display->display_options['fields']['field_button_text']['relationship'] = 'reverse_field_parent_node';
    $handler->display->display_options['fields']['field_button_text']['label'] = 'button';
    /* Field: Content: Block Text */
    $handler->display->display_options['fields']['field_block_text']['id'] = 'field_block_text';
    $handler->display->display_options['fields']['field_block_text']['table'] = 'field_data_field_block_text';
    $handler->display->display_options['fields']['field_block_text']['field'] = 'field_block_text';
    $handler->display->display_options['fields']['field_block_text']['relationship'] = 'reverse_field_parent_node';
    $handler->display->display_options['fields']['field_block_text']['label'] = 'text';
    /* Field: Content: Button URL */
    $handler->display->display_options['fields']['field_button_url']['id'] = 'field_button_url';
    $handler->display->display_options['fields']['field_button_url']['table'] = 'field_data_field_button_url';
    $handler->display->display_options['fields']['field_button_url']['field'] = 'field_button_url';
    $handler->display->display_options['fields']['field_button_url']['label'] = 'button_url';
    $handler->display->display_options['fields']['field_button_url']['hide_empty'] = TRUE;
    /* Field: Content: Pricing Prefix */
    $handler->display->display_options['fields']['field_pricing_prefix']['id'] = 'field_pricing_prefix';
    $handler->display->display_options['fields']['field_pricing_prefix']['table'] = 'field_data_field_pricing_prefix';
    $handler->display->display_options['fields']['field_pricing_prefix']['field'] = 'field_pricing_prefix';
    $handler->display->display_options['fields']['field_pricing_prefix']['relationship'] = 'reverse_field_parent_node';
    $handler->display->display_options['fields']['field_pricing_prefix']['label'] = 'prefix';
    /* Field: Content: Pricing Suffix */
    $handler->display->display_options['fields']['field_pricing_suffix']['id'] = 'field_pricing_suffix';
    $handler->display->display_options['fields']['field_pricing_suffix']['table'] = 'field_data_field_pricing_suffix';
    $handler->display->display_options['fields']['field_pricing_suffix']['field'] = 'field_pricing_suffix';
    $handler->display->display_options['fields']['field_pricing_suffix']['relationship'] = 'reverse_field_parent_node';
    $handler->display->display_options['fields']['field_pricing_suffix']['label'] = 'suffix';
    /* Field: Global: View */
    $handler->display->display_options['fields']['view']['id'] = 'view';
    $handler->display->display_options['fields']['view']['table'] = 'views';
    $handler->display->display_options['fields']['view']['field'] = 'view';
    $handler->display->display_options['fields']['view']['label'] = 'comparisons';
    $handler->display->display_options['fields']['view']['view'] = 'pricing_page_content';
    $handler->display->display_options['fields']['view']['display'] = 'page_6';
    $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
    /* Field: Global: View */
    $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
    $handler->display->display_options['fields']['view_1']['table'] = 'views';
    $handler->display->display_options['fields']['view_1']['field'] = 'view';
    $handler->display->display_options['fields']['view_1']['label'] = 'steps';
    $handler->display->display_options['fields']['view_1']['hide_empty'] = TRUE;
    $handler->display->display_options['fields']['view_1']['view'] = 'pricing_page_content';
    $handler->display->display_options['fields']['view_1']['display'] = 'page_7';
    $handler->display->display_options['fields']['view_1']['arguments'] = '[!nid]';
    $handler->display->display_options['defaults']['arguments'] = FALSE;
    /* Contextual filter: Content: Nid */
    $handler->display->display_options['arguments']['nid']['id'] = 'nid';
    $handler->display->display_options['arguments']['nid']['table'] = 'node';
    $handler->display->display_options['arguments']['nid']['field'] = 'nid';
    $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_pricing_blocks_node';
    $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
    $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
    $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
    $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
    $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
        'pricing_block' => 'pricing_block',
    );
    $handler->display->display_options['filters']['type']['group'] = 1;
    $handler->display->display_options['path'] = 'pricing-blocks/%';

    /* Display: Pricing FAQs */
    $handler = $view->new_display('page', 'Pricing FAQs', 'page_3');
    $handler->display->display_options['defaults']['pager'] = FALSE;
    $handler->display->display_options['pager']['type'] = 'none';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['defaults']['style_plugin'] = FALSE;
    $handler->display->display_options['style_plugin'] = 'views_json';
    $handler->display->display_options['style_options']['root_object'] = '';
    $handler->display->display_options['style_options']['top_child_object'] = '';
    $handler->display->display_options['style_options']['plaintext_output'] = 0;
    $handler->display->display_options['style_options']['remove_newlines'] = 1;
    $handler->display->display_options['style_options']['jsonp_prefix'] = '';
    $handler->display->display_options['style_options']['using_views_api_mode'] = 1;
    $handler->display->display_options['style_options']['object_arrays'] = 0;
    $handler->display->display_options['style_options']['numeric_strings'] = 0;
    $handler->display->display_options['style_options']['bigint_string'] = 0;
    $handler->display->display_options['style_options']['pretty_print'] = 0;
    $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
    $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
    $handler->display->display_options['style_options']['char_encoding'] = array();
    $handler->display->display_options['defaults']['style_options'] = FALSE;
    $handler->display->display_options['defaults']['row_plugin'] = FALSE;
    $handler->display->display_options['defaults']['row_options'] = FALSE;
    $handler->display->display_options['defaults']['relationships'] = FALSE;
    /* Relationship: Entity Reference: Referencing entity */
    $handler->display->display_options['relationships']['reverse_field_pricing_faq_node']['id'] = 'reverse_field_pricing_faq_node';
    $handler->display->display_options['relationships']['reverse_field_pricing_faq_node']['table'] = 'node';
    $handler->display->display_options['relationships']['reverse_field_pricing_faq_node']['field'] = 'reverse_field_pricing_faq_node';
    $handler->display->display_options['relationships']['reverse_field_pricing_faq_node']['label'] = 'Parent';
    $handler->display->display_options['defaults']['fields'] = FALSE;
    /* Field: Content: Question */
    $handler->display->display_options['fields']['field_question']['id'] = 'field_question';
    $handler->display->display_options['fields']['field_question']['table'] = 'field_data_field_question';
    $handler->display->display_options['fields']['field_question']['field'] = 'field_question';
    $handler->display->display_options['fields']['field_question']['label'] = 'question';
    $handler->display->display_options['fields']['field_question']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_question']['type'] = 'text_plain';
    /* Field: Content: Answer */
    $handler->display->display_options['fields']['field_answer']['id'] = 'field_answer';
    $handler->display->display_options['fields']['field_answer']['table'] = 'field_data_field_answer';
    $handler->display->display_options['fields']['field_answer']['field'] = 'field_answer';
    $handler->display->display_options['fields']['field_answer']['label'] = 'answer';
    $handler->display->display_options['fields']['field_answer']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_answer']['settings'] = array(
        'trim_length' => '1200',
    );
    $handler->display->display_options['defaults']['arguments'] = FALSE;
    /* Contextual filter: Content: Nid */
    $handler->display->display_options['arguments']['nid']['id'] = 'nid';
    $handler->display->display_options['arguments']['nid']['table'] = 'node';
    $handler->display->display_options['arguments']['nid']['field'] = 'nid';
    $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_pricing_faq_node';
    $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
    $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
    $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
    $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
    $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
        'faq' => 'faq',
    );
    $handler->display->display_options['filters']['type']['group'] = 1;
    $handler->display->display_options['path'] = 'pricing-faqs/%';

    /* Display: Pricing Overview */
    $handler = $view->new_display('page', 'Pricing Overview', 'page_4');
    $handler->display->display_options['defaults']['pager'] = FALSE;
    $handler->display->display_options['pager']['type'] = 'none';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['defaults']['style_plugin'] = FALSE;
    $handler->display->display_options['style_plugin'] = 'views_json';
    $handler->display->display_options['style_options']['root_object'] = '';
    $handler->display->display_options['style_options']['top_child_object'] = '';
    $handler->display->display_options['style_options']['plaintext_output'] = 0;
    $handler->display->display_options['style_options']['remove_newlines'] = 1;
    $handler->display->display_options['style_options']['jsonp_prefix'] = '';
    $handler->display->display_options['style_options']['using_views_api_mode'] = 1;
    $handler->display->display_options['style_options']['object_arrays'] = 0;
    $handler->display->display_options['style_options']['numeric_strings'] = 0;
    $handler->display->display_options['style_options']['bigint_string'] = 0;
    $handler->display->display_options['style_options']['pretty_print'] = 0;
    $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
    $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
    $handler->display->display_options['style_options']['char_encoding'] = array();
    $handler->display->display_options['defaults']['style_options'] = FALSE;
    $handler->display->display_options['defaults']['row_plugin'] = FALSE;
    $handler->display->display_options['defaults']['row_options'] = FALSE;
    $handler->display->display_options['defaults']['relationships'] = FALSE;
    /* Relationship: Entity Reference: Referencing entity */
    $handler->display->display_options['relationships']['reverse_field_columns_content_node']['id'] = 'reverse_field_columns_content_node';
    $handler->display->display_options['relationships']['reverse_field_columns_content_node']['table'] = 'node';
    $handler->display->display_options['relationships']['reverse_field_columns_content_node']['field'] = 'reverse_field_columns_content_node';
    $handler->display->display_options['relationships']['reverse_field_columns_content_node']['label'] = 'Parent';
    /* Relationship: File Usage: File */
    $handler->display->display_options['relationships']['node_to_file']['id'] = 'node_to_file';
    $handler->display->display_options['relationships']['node_to_file']['table'] = 'file_usage';
    $handler->display->display_options['relationships']['node_to_file']['field'] = 'node_to_file';
    $handler->display->display_options['defaults']['fields'] = FALSE;
    /* Field: Content: Column Text */
    $handler->display->display_options['fields']['field_column_text']['id'] = 'field_column_text';
    $handler->display->display_options['fields']['field_column_text']['table'] = 'field_data_field_column_text';
    $handler->display->display_options['fields']['field_column_text']['field'] = 'field_column_text';
    $handler->display->display_options['fields']['field_column_text']['label'] = 'text';
    /* Field: Content: Column Title */
    $handler->display->display_options['fields']['field_column_title']['id'] = 'field_column_title';
    $handler->display->display_options['fields']['field_column_title']['table'] = 'field_data_field_column_title';
    $handler->display->display_options['fields']['field_column_title']['field'] = 'field_column_title';
    $handler->display->display_options['fields']['field_column_title']['label'] = 'title';
    /* Field: File: Path */
    $handler->display->display_options['fields']['uri']['id'] = 'uri';
    $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
    $handler->display->display_options['fields']['uri']['field'] = 'uri';
    $handler->display->display_options['fields']['uri']['relationship'] = 'node_to_file';
    $handler->display->display_options['fields']['uri']['label'] = 'image';
    $handler->display->display_options['defaults']['arguments'] = FALSE;
    /* Contextual filter: Content: Nid */
    $handler->display->display_options['arguments']['nid']['id'] = 'nid';
    $handler->display->display_options['arguments']['nid']['table'] = 'node';
    $handler->display->display_options['arguments']['nid']['field'] = 'nid';
    $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_columns_content_node';
    $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
    $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
    $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
    $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
    $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
        'column_content' => 'column_content',
    );
    $handler->display->display_options['filters']['type']['group'] = 1;
    $handler->display->display_options['path'] = 'pricing-overview/%';

    /* Display: Comparison Rows */
    $handler = $view->new_display('page', 'Comparison Rows', 'page_5');
    $handler->display->display_options['defaults']['pager'] = FALSE;
    $handler->display->display_options['pager']['type'] = 'none';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['defaults']['style_plugin'] = FALSE;
    $handler->display->display_options['style_plugin'] = 'views_json';
    $handler->display->display_options['style_options']['root_object'] = '';
    $handler->display->display_options['style_options']['top_child_object'] = '';
    $handler->display->display_options['style_options']['plaintext_output'] = 0;
    $handler->display->display_options['style_options']['remove_newlines'] = 1;
    $handler->display->display_options['style_options']['jsonp_prefix'] = '';
    $handler->display->display_options['style_options']['using_views_api_mode'] = 1;
    $handler->display->display_options['style_options']['object_arrays'] = 0;
    $handler->display->display_options['style_options']['numeric_strings'] = 0;
    $handler->display->display_options['style_options']['bigint_string'] = 0;
    $handler->display->display_options['style_options']['pretty_print'] = 0;
    $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
    $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
    $handler->display->display_options['style_options']['char_encoding'] = array();
    $handler->display->display_options['defaults']['style_options'] = FALSE;
    $handler->display->display_options['defaults']['row_plugin'] = FALSE;
    $handler->display->display_options['defaults']['row_options'] = FALSE;
    $handler->display->display_options['defaults']['relationships'] = FALSE;
    /* Relationship: Entity Reference: Referenced Entity */
    $handler->display->display_options['relationships']['field_comparison_rows_target_id']['id'] = 'field_comparison_rows_target_id';
    $handler->display->display_options['relationships']['field_comparison_rows_target_id']['table'] = 'field_data_field_comparison_rows';
    $handler->display->display_options['relationships']['field_comparison_rows_target_id']['field'] = 'field_comparison_rows_target_id';
    $handler->display->display_options['relationships']['field_comparison_rows_target_id']['label'] = 'Term';
    $handler->display->display_options['defaults']['fields'] = FALSE;
    /* Field: Taxonomy term: Name */
    $handler->display->display_options['fields']['name']['id'] = 'name';
    $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
    $handler->display->display_options['fields']['name']['field'] = 'name';
    $handler->display->display_options['fields']['name']['relationship'] = 'field_comparison_rows_target_id';
    $handler->display->display_options['fields']['name']['label'] = 'name';
    /* Field: Taxonomy term: Row Type */
    $handler->display->display_options['fields']['field_row_type']['id'] = 'field_row_type';
    $handler->display->display_options['fields']['field_row_type']['table'] = 'field_data_field_row_type';
    $handler->display->display_options['fields']['field_row_type']['field'] = 'field_row_type';
    $handler->display->display_options['fields']['field_row_type']['relationship'] = 'field_comparison_rows_target_id';
    $handler->display->display_options['fields']['field_row_type']['label'] = 'type';
    /* Field: Taxonomy term: Term description */
    $handler->display->display_options['fields']['description']['id'] = 'description';
    $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
    $handler->display->display_options['fields']['description']['field'] = 'description';
    $handler->display->display_options['fields']['description']['relationship'] = 'field_comparison_rows_target_id';
    $handler->display->display_options['fields']['description']['label'] = 'tooltip';
    $handler->display->display_options['defaults']['arguments'] = FALSE;
    /* Contextual filter: Content: Nid */
    $handler->display->display_options['arguments']['nid']['id'] = 'nid';
    $handler->display->display_options['arguments']['nid']['table'] = 'node';
    $handler->display->display_options['arguments']['nid']['field'] = 'nid';
    $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
    $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
    $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
    $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
    $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
    $handler->display->display_options['path'] = 'pricing-page-rows/%';

    /* Display: Pricing Block Rows */
    $handler = $view->new_display('page', 'Pricing Block Rows', 'page_6');
    $handler->display->display_options['defaults']['pager'] = FALSE;
    $handler->display->display_options['pager']['type'] = 'none';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['defaults']['style_plugin'] = FALSE;
    $handler->display->display_options['style_plugin'] = 'views_json';
    $handler->display->display_options['style_options']['root_object'] = '';
    $handler->display->display_options['style_options']['top_child_object'] = '';
    $handler->display->display_options['style_options']['plaintext_output'] = 0;
    $handler->display->display_options['style_options']['remove_newlines'] = 1;
    $handler->display->display_options['style_options']['jsonp_prefix'] = '';
    $handler->display->display_options['style_options']['using_views_api_mode'] = 1;
    $handler->display->display_options['style_options']['object_arrays'] = 0;
    $handler->display->display_options['style_options']['numeric_strings'] = 0;
    $handler->display->display_options['style_options']['bigint_string'] = 0;
    $handler->display->display_options['style_options']['pretty_print'] = 0;
    $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
    $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
    $handler->display->display_options['style_options']['char_encoding'] = array();
    $handler->display->display_options['defaults']['style_options'] = FALSE;
    $handler->display->display_options['defaults']['row_plugin'] = FALSE;
    $handler->display->display_options['defaults']['row_options'] = FALSE;
    $handler->display->display_options['defaults']['relationships'] = FALSE;
    $handler->display->display_options['defaults']['fields'] = FALSE;
    /* Field: Multifield: Key */
    $handler->display->display_options['fields']['field_row_values_field_key']['id'] = 'field_row_values_field_key';
    $handler->display->display_options['fields']['field_row_values_field_key']['table'] = 'field_data_field_row_values';
    $handler->display->display_options['fields']['field_row_values_field_key']['field'] = 'field_row_values_field_key';
    $handler->display->display_options['fields']['field_row_values_field_key']['label'] = 'name';
    $handler->display->display_options['fields']['field_row_values_field_key']['settings'] = array(
        'link' => 0,
    );
    $handler->display->display_options['fields']['field_row_values_field_key']['group_rows'] = FALSE;
    $handler->display->display_options['fields']['field_row_values_field_key']['delta_offset'] = '0';
    /* Field: Multifield: Value */
    $handler->display->display_options['fields']['field_row_values_field_value']['id'] = 'field_row_values_field_value';
    $handler->display->display_options['fields']['field_row_values_field_value']['table'] = 'field_data_field_row_values';
    $handler->display->display_options['fields']['field_row_values_field_value']['field'] = 'field_row_values_field_value';
    $handler->display->display_options['fields']['field_row_values_field_value']['label'] = 'value';
    $handler->display->display_options['fields']['field_row_values_field_value']['group_rows'] = FALSE;
    $handler->display->display_options['fields']['field_row_values_field_value']['delta_offset'] = '0';
    $handler->display->display_options['defaults']['arguments'] = FALSE;
    /* Contextual filter: Content: Nid */
    $handler->display->display_options['arguments']['nid']['id'] = 'nid';
    $handler->display->display_options['arguments']['nid']['table'] = 'node';
    $handler->display->display_options['arguments']['nid']['field'] = 'nid';
    $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
    $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
    $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
    $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
    $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
        'pricing_block' => 'pricing_block',
    );
    $handler->display->display_options['filters']['type']['group'] = 1;
    $handler->display->display_options['path'] = 'pricing-block-rows/%';

    /* Display: Pricing Steps */
    $handler = $view->new_display('page', 'Pricing Steps', 'page_7');
    $handler->display->display_options['defaults']['pager'] = FALSE;
    $handler->display->display_options['pager']['type'] = 'none';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['defaults']['style_plugin'] = FALSE;
    $handler->display->display_options['style_plugin'] = 'views_json';
    $handler->display->display_options['style_options']['root_object'] = '';
    $handler->display->display_options['style_options']['top_child_object'] = '';
    $handler->display->display_options['style_options']['plaintext_output'] = 0;
    $handler->display->display_options['style_options']['remove_newlines'] = 1;
    $handler->display->display_options['style_options']['jsonp_prefix'] = '';
    $handler->display->display_options['style_options']['using_views_api_mode'] = 1;
    $handler->display->display_options['style_options']['object_arrays'] = 0;
    $handler->display->display_options['style_options']['numeric_strings'] = 0;
    $handler->display->display_options['style_options']['bigint_string'] = 0;
    $handler->display->display_options['style_options']['pretty_print'] = 0;
    $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
    $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
    $handler->display->display_options['style_options']['char_encoding'] = array();
    $handler->display->display_options['defaults']['style_options'] = FALSE;
    $handler->display->display_options['defaults']['row_plugin'] = FALSE;
    $handler->display->display_options['defaults']['row_options'] = FALSE;
    $handler->display->display_options['defaults']['relationships'] = FALSE;
    /* Relationship: Entity Reference: Referencing entity */
    $handler->display->display_options['relationships']['reverse_field_steps_node']['id'] = 'reverse_field_steps_node';
    $handler->display->display_options['relationships']['reverse_field_steps_node']['table'] = 'node';
    $handler->display->display_options['relationships']['reverse_field_steps_node']['field'] = 'reverse_field_steps_node';
    $handler->display->display_options['relationships']['reverse_field_steps_node']['label'] = 'referencing Content';
    $handler->display->display_options['defaults']['fields'] = FALSE;
    /* Field: Content: Step # */
    $handler->display->display_options['fields']['field_step_num']['id'] = 'field_step_num';
    $handler->display->display_options['fields']['field_step_num']['table'] = 'field_data_field_step_num';
    $handler->display->display_options['fields']['field_step_num']['field'] = 'field_step_num';
    $handler->display->display_options['fields']['field_step_num']['label'] = 'step_number';
    $handler->display->display_options['fields']['field_step_num']['settings'] = array(
        'thousand_separator' => ' ',
        'prefix_suffix' => 1,
    );
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['label'] = 'title';
    /* Field: Field: Description */
    $handler->display->display_options['fields']['field_fields_field_description']['id'] = 'field_fields_field_description';
    $handler->display->display_options['fields']['field_fields_field_description']['table'] = 'field_data_field_fields';
    $handler->display->display_options['fields']['field_fields_field_description']['field'] = 'field_fields_field_description';
    $handler->display->display_options['fields']['field_fields_field_description']['label'] = 'description';
    $handler->display->display_options['fields']['field_fields_field_description']['delta_offset'] = '0';
    /* Field: Field: Tooltip */
    $handler->display->display_options['fields']['field_tooltip']['id'] = 'field_tooltip';
    $handler->display->display_options['fields']['field_tooltip']['table'] = 'field_data_field_tooltip';
    $handler->display->display_options['fields']['field_tooltip']['field'] = 'field_tooltip';
    $handler->display->display_options['fields']['field_tooltip']['label'] = 'tooltip';
    /* Field: Global: View */
    $handler->display->display_options['fields']['view']['id'] = 'view';
    $handler->display->display_options['fields']['view']['table'] = 'views';
    $handler->display->display_options['fields']['view']['field'] = 'view';
    $handler->display->display_options['fields']['view']['label'] = 'fields';
    $handler->display->display_options['fields']['view']['view'] = 'pricing_page_content';
    $handler->display->display_options['fields']['view']['display'] = 'page_8';
    $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
    /* Field: Content: Nid */
    $handler->display->display_options['fields']['nid']['id'] = 'nid';
    $handler->display->display_options['fields']['nid']['table'] = 'node';
    $handler->display->display_options['fields']['nid']['field'] = 'nid';
    $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
    $handler->display->display_options['defaults']['arguments'] = FALSE;
    /* Contextual filter: Content: Nid */
    $handler->display->display_options['arguments']['nid']['id'] = 'nid';
    $handler->display->display_options['arguments']['nid']['table'] = 'node';
    $handler->display->display_options['arguments']['nid']['field'] = 'nid';
    $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_steps_node';
    $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
    $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
    $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
    $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
    $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
        'pricing_step' => 'pricing_step',
    );
    $handler->display->display_options['filters']['type']['group'] = 1;
    $handler->display->display_options['path'] = 'pricing-blocks/%';

    /* Display: Pricing Step Fields */
    $handler = $view->new_display('page', 'Pricing Step Fields', 'page_8');
    $handler->display->display_options['defaults']['pager'] = FALSE;
    $handler->display->display_options['pager']['type'] = 'none';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['defaults']['style_plugin'] = FALSE;
    $handler->display->display_options['style_plugin'] = 'views_json';
    $handler->display->display_options['style_options']['root_object'] = '';
    $handler->display->display_options['style_options']['top_child_object'] = '';
    $handler->display->display_options['style_options']['plaintext_output'] = 0;
    $handler->display->display_options['style_options']['remove_newlines'] = 1;
    $handler->display->display_options['style_options']['jsonp_prefix'] = '';
    $handler->display->display_options['style_options']['using_views_api_mode'] = 1;
    $handler->display->display_options['style_options']['object_arrays'] = 0;
    $handler->display->display_options['style_options']['numeric_strings'] = 0;
    $handler->display->display_options['style_options']['bigint_string'] = 0;
    $handler->display->display_options['style_options']['pretty_print'] = 0;
    $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
    $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
    $handler->display->display_options['style_options']['char_encoding'] = array();
    $handler->display->display_options['defaults']['style_options'] = FALSE;
    $handler->display->display_options['defaults']['row_plugin'] = FALSE;
    $handler->display->display_options['defaults']['row_options'] = FALSE;
    $handler->display->display_options['defaults']['relationships'] = FALSE;
    $handler->display->display_options['defaults']['fields'] = FALSE;
    /* Field: Content: Fields (field_fields:field_default_value_value) */
    $handler->display->display_options['fields']['field_fields_field_default_value_value']['id'] = 'field_fields_field_default_value_value';
    $handler->display->display_options['fields']['field_fields_field_default_value_value']['table'] = 'field_data_field_fields';
    $handler->display->display_options['fields']['field_fields_field_default_value_value']['field'] = 'field_fields_field_default_value_value';
    $handler->display->display_options['fields']['field_fields_field_default_value_value']['label'] = 'default_value';
    $handler->display->display_options['fields']['field_fields_field_default_value_value']['delta_offset'] = '0';
    /* Field: Content: Fields (field_fields:field_description_value) */
    $handler->display->display_options['fields']['field_fields_field_description_value']['id'] = 'field_fields_field_description_value';
    $handler->display->display_options['fields']['field_fields_field_description_value']['table'] = 'field_data_field_fields';
    $handler->display->display_options['fields']['field_fields_field_description_value']['field'] = 'field_fields_field_description_value';
    $handler->display->display_options['fields']['field_fields_field_description_value']['label'] = 'description';
    $handler->display->display_options['fields']['field_fields_field_description_value']['delta_offset'] = '0';
    /* Field: Content: Fields (field_fields:field_field_id_value) */
    $handler->display->display_options['fields']['field_fields_field_field_id_value']['id'] = 'field_fields_field_field_id_value';
    $handler->display->display_options['fields']['field_fields_field_field_id_value']['table'] = 'field_data_field_fields';
    $handler->display->display_options['fields']['field_fields_field_field_id_value']['field'] = 'field_fields_field_field_id_value';
    $handler->display->display_options['fields']['field_fields_field_field_id_value']['label'] = 'field_id';
    $handler->display->display_options['fields']['field_fields_field_field_id_value']['delta_offset'] = '0';
    /* Field: Content: Fields (field_fields:field_field_label_value) */
    $handler->display->display_options['fields']['field_fields_field_field_label_value']['id'] = 'field_fields_field_field_label_value';
    $handler->display->display_options['fields']['field_fields_field_field_label_value']['table'] = 'field_data_field_fields';
    $handler->display->display_options['fields']['field_fields_field_field_label_value']['field'] = 'field_fields_field_field_label_value';
    $handler->display->display_options['fields']['field_fields_field_field_label_value']['label'] = 'label';
    $handler->display->display_options['fields']['field_fields_field_field_label_value']['delta_offset'] = '0';
    /* Field: Content: Fields (field_fields:field_field_title_value) */
    $handler->display->display_options['fields']['field_fields_field_field_title_value']['id'] = 'field_fields_field_field_title_value';
    $handler->display->display_options['fields']['field_fields_field_field_title_value']['table'] = 'field_data_field_fields';
    $handler->display->display_options['fields']['field_fields_field_field_title_value']['field'] = 'field_fields_field_field_title_value';
    $handler->display->display_options['fields']['field_fields_field_field_title_value']['label'] = 'title';
    $handler->display->display_options['fields']['field_fields_field_field_title_value']['delta_offset'] = '0';
    /* Field: Content: Fields (field_fields:field_tooltip_value) */
    $handler->display->display_options['fields']['field_fields_field_tooltip_value']['id'] = 'field_fields_field_tooltip_value';
    $handler->display->display_options['fields']['field_fields_field_tooltip_value']['table'] = 'field_data_field_fields';
    $handler->display->display_options['fields']['field_fields_field_tooltip_value']['field'] = 'field_fields_field_tooltip_value';
    $handler->display->display_options['fields']['field_fields_field_tooltip_value']['label'] = 'tooltip';
    $handler->display->display_options['fields']['field_fields_field_tooltip_value']['delta_offset'] = '0';
    $handler->display->display_options['defaults']['arguments'] = FALSE;
    /* Contextual filter: Content: Nid */
    $handler->display->display_options['arguments']['nid']['id'] = 'nid';
    $handler->display->display_options['arguments']['nid']['table'] = 'node';
    $handler->display->display_options['arguments']['nid']['field'] = 'nid';
    $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
    $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
    $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
    $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
    $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
        'pricing_step' => 'pricing_step',
    );
    $handler->display->display_options['filters']['type']['group'] = 1;
    $handler->display->display_options['path'] = 'pricing-block-rows/%';
    $translatables['pricing_page_content'] = array(
        t('Master'),
        t('more'),
        t('Apply'),
        t('Reset'),
        t('Sort by'),
        t('Asc'),
        t('Desc'),
        t('Term'),
        t('Body'),
        t('Nid'),
        t('All'),
        t('Main Pricing Page'),
        t('site_name'),
        t('title'),
        t('body'),
        t('faqs'),
        t('overview_title'),
        t('overview_text'),
        t('overview'),
        t('comparisons'),
        t('pricing_packages'),
        t('Pricing Blocks'),
        t('referencing Content'),
        t('package_id'),
        t('header'),
        t('button'),
        t('text'),
        t('button_url'),
        t('prefix'),
        t('suffix'),
        t('steps'),
        t('Pricing FAQs'),
        t('Parent'),
        t('question'),
        t('answer'),
        t('Pricing Overview'),
        t('File'),
        t('image'),
        t('Comparison Rows'),
        t('name'),
        t('type'),
        t('tooltip'),
        t('Pricing Block Rows'),
        t('value'),
        t('Pricing Steps'),
        t('step_number'),
        t('description'),
        t('fields'),
        t('Pricing Step Fields'),
        t('default_value'),
        t('field_id'),
        t('label'),
    );


    $views['pricing_page_content'] = $view;

    $view = new view();
    $view->name = 'comparison_keys';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'taxonomy_term_data';
    $view->human_name = 'Comparison Keys';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'full';
    $handler->display->display_options['style_plugin'] = 'default';
    $handler->display->display_options['row_plugin'] = 'fields';
    /* Relationship: Entity Reference: Referencing entity */
    $handler->display->display_options['relationships']['reverse_field_comparison_rows_node']['id'] = 'reverse_field_comparison_rows_node';
    $handler->display->display_options['relationships']['reverse_field_comparison_rows_node']['table'] = 'taxonomy_term_data';
    $handler->display->display_options['relationships']['reverse_field_comparison_rows_node']['field'] = 'reverse_field_comparison_rows_node';
    $handler->display->display_options['relationships']['reverse_field_comparison_rows_node']['label'] = 'Parent';
    /* Field: Taxonomy term: Name */
    $handler->display->display_options['fields']['name']['id'] = 'name';
    $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
    $handler->display->display_options['fields']['name']['field'] = 'name';
    $handler->display->display_options['fields']['name']['label'] = '';
    $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
    $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
    $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
    /* Field: Taxonomy term: Row Type */
    $handler->display->display_options['fields']['field_row_type']['id'] = 'field_row_type';
    $handler->display->display_options['fields']['field_row_type']['table'] = 'field_data_field_row_type';
    $handler->display->display_options['fields']['field_row_type']['field'] = 'field_row_type';
    $handler->display->display_options['fields']['field_row_type']['exclude'] = TRUE;
    /* Contextual filter: Content: Nid */
    $handler->display->display_options['arguments']['nid']['id'] = 'nid';
    $handler->display->display_options['arguments']['nid']['table'] = 'node';
    $handler->display->display_options['arguments']['nid']['field'] = 'nid';
    $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_comparison_rows_node';
    $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
    $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '3';
    $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
    $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
    $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
    /* Filter criterion: Taxonomy vocabulary: Machine name */
    $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
    $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
    $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
    $handler->display->display_options['filters']['machine_name']['value'] = array(
        'comparison_rows' => 'comparison_rows',
    );

    /* Display: Entity Reference */
    $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
    $handler->display->display_options['defaults']['title'] = FALSE;
    $handler->display->display_options['pager']['type'] = 'none';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['defaults']['style_plugin'] = FALSE;
    $handler->display->display_options['style_plugin'] = 'entityreference_style';
    $handler->display->display_options['style_options']['grouping'] = array(
        0 => array(
            'field' => 'field_row_type',
            'rendered' => 1,
            'rendered_strip' => 0,
        ),
    );
    $handler->display->display_options['style_options']['search_fields'] = array(
        'name' => 'name',
        'field_row_type' => 0,
    );
    $handler->display->display_options['defaults']['style_options'] = FALSE;
    $handler->display->display_options['defaults']['row_plugin'] = FALSE;
    $handler->display->display_options['row_plugin'] = 'entityreference_fields';
    $handler->display->display_options['defaults']['row_options'] = FALSE;
    $translatables['comparison_keys'] = array(
        t('Master'),
        t('more'),
        t('Apply'),
        t('Reset'),
        t('Sort by'),
        t('Asc'),
        t('Desc'),
        t('Items per page'),
        t('- All -'),
        t('Offset'),
        t('« first'),
        t('‹ previous'),
        t('next ›'),
        t('last »'),
        t('Parent'),
        t('Row Type'),
        t('All'),
        t('Entity Reference'),
    );
    $views['comparison_keys'] = $view;
}