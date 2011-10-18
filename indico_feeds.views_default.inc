<?php
function indico_feeds_views_default_views() {
    $export = array();

    $view = new view;
    $view->name = 'indico_events_block';
    $view->description = 'Display a block containing Indico events (linking to the indico event page)';
    $view->tag = 'Indico';
    $view->base_table = 'node';
    $view->human_name = 'Indico Events Block';
    $view->core = 7;
    $view->api_version = '3.0-alpha1';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'Indico Events';
    $handler->display->display_options['use_ajax'] = TRUE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['query']['options']['query_comment'] = FALSE;
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'mini';
    $handler->display->display_options['pager']['options']['items_per_page'] = '5';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['pager']['options']['id'] = '0';
    $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
    $handler->display->display_options['style_plugin'] = 'list';
    $handler->display->display_options['row_plugin'] = 'fields';
    /* Field: Content: Indico link */
    $handler->display->display_options['fields']['field_indico_link']['id'] = 'field_indico_link';
    $handler->display->display_options['fields']['field_indico_link']['table'] = 'field_data_field_indico_link';
    $handler->display->display_options['fields']['field_indico_link']['field'] = 'field_indico_link';
    $handler->display->display_options['fields']['field_indico_link']['label'] = '';
    $handler->display->display_options['fields']['field_indico_link']['exclude'] = TRUE;
    $handler->display->display_options['fields']['field_indico_link']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['field_indico_link']['alter']['make_link'] = 1;
    $handler->display->display_options['fields']['field_indico_link']['alter']['path'] = '[field_indico_link]';
    $handler->display->display_options['fields']['field_indico_link']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['field_indico_link']['alter']['external'] = 0;
    $handler->display->display_options['fields']['field_indico_link']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['field_indico_link']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['field_indico_link']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['field_indico_link']['alter']['word_boundary'] = 1;
    $handler->display->display_options['fields']['field_indico_link']['alter']['ellipsis'] = 1;
    $handler->display->display_options['fields']['field_indico_link']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['field_indico_link']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['field_indico_link']['alter']['html'] = 0;
    $handler->display->display_options['fields']['field_indico_link']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_indico_link']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['field_indico_link']['hide_empty'] = 0;
    $handler->display->display_options['fields']['field_indico_link']['empty_zero'] = 0;
    $handler->display->display_options['fields']['field_indico_link']['hide_alter_empty'] = 0;
    $handler->display->display_options['fields']['field_indico_link']['field_api_classes'] = 0;
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['label'] = '';
    $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
    $handler->display->display_options['fields']['title']['alter']['path'] = '[field_indico_link]';
    $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['title']['alter']['external'] = 0;
    $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
    $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
    $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['title']['alter']['html'] = 0;
    $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['title']['hide_empty'] = 0;
    $handler->display->display_options['fields']['title']['empty_zero'] = 0;
    $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
    $handler->display->display_options['fields']['title']['link_to_node'] = 0;
    /* Sort criterion: Content: Date -  start date (field_date) */
    $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
    $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
    $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
    /* Sort criterion: Content: Date - end date (field_date:value2) */
    $handler->display->display_options['sorts']['field_date_value2']['id'] = 'field_date_value2';
    $handler->display->display_options['sorts']['field_date_value2']['table'] = 'field_data_field_date';
    $handler->display->display_options['sorts']['field_date_value2']['field'] = 'field_date_value2';
    /* Filter criterion: Content: Type */
    $handler->display->display_options['filters']['type']['id'] = 'type';
    $handler->display->display_options['filters']['type']['table'] = 'node';
    $handler->display->display_options['filters']['type']['field'] = 'type';
    $handler->display->display_options['filters']['type']['value'] = array(
        'indico_event' => 'indico_event',
    );

    /* Display: Block */
    $handler = $view->new_display('block', 'Block', 'block');
    $export['indico_events_block'] = $view;

    $view = new view;
    $view->name = 'indico_events_block_with_details';
    $view->description = 'Display a block containing Indico events (linking to the indico event page) with details';
    $view->tag = 'Indico';
    $view->base_table = 'node';
    $view->human_name = 'Indico Events Block with Details';
    $view->core = 7;
    $view->api_version = '3.0-alpha1';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'Indico Events';
    $handler->display->display_options['use_ajax'] = TRUE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['query']['options']['query_comment'] = FALSE;
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'mini';
    $handler->display->display_options['pager']['options']['items_per_page'] = '5';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['pager']['options']['id'] = '0';
    $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
    $handler->display->display_options['style_plugin'] = 'default';
    $handler->display->display_options['row_plugin'] = 'fields';
    $handler->display->display_options['row_options']['inline'] = array(
        'field_date' => 'field_date',
        'field_location' => 'field_location',
        'field_room' => 'field_room',
    );
    $handler->display->display_options['row_options']['separator'] = '-';
    $handler->display->display_options['row_options']['hide_empty'] = 1;
    $handler->display->display_options['row_options']['default_field_elements'] = 1;
    /* Field: Content: Indico link */
    $handler->display->display_options['fields']['field_indico_link']['id'] = 'field_indico_link';
    $handler->display->display_options['fields']['field_indico_link']['table'] = 'field_data_field_indico_link';
    $handler->display->display_options['fields']['field_indico_link']['field'] = 'field_indico_link';
    $handler->display->display_options['fields']['field_indico_link']['label'] = '';
    $handler->display->display_options['fields']['field_indico_link']['exclude'] = TRUE;
    $handler->display->display_options['fields']['field_indico_link']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['field_indico_link']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['field_indico_link']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['field_indico_link']['alter']['external'] = 0;
    $handler->display->display_options['fields']['field_indico_link']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['field_indico_link']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['field_indico_link']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['field_indico_link']['alter']['word_boundary'] = 1;
    $handler->display->display_options['fields']['field_indico_link']['alter']['ellipsis'] = 1;
    $handler->display->display_options['fields']['field_indico_link']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['field_indico_link']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['field_indico_link']['alter']['html'] = 0;
    $handler->display->display_options['fields']['field_indico_link']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_indico_link']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['field_indico_link']['hide_empty'] = 0;
    $handler->display->display_options['fields']['field_indico_link']['empty_zero'] = 0;
    $handler->display->display_options['fields']['field_indico_link']['hide_alter_empty'] = 0;
    $handler->display->display_options['fields']['field_indico_link']['field_api_classes'] = 0;
    /* Field: Content: Category */
    $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
    $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
    $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
    $handler->display->display_options['fields']['field_category']['label'] = '';
    $handler->display->display_options['fields']['field_category']['alter']['alter_text'] = 1;
    $handler->display->display_options['fields']['field_category']['alter']['text'] = '<br />[field_category]';
    $handler->display->display_options['fields']['field_category']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['field_category']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['field_category']['alter']['external'] = 0;
    $handler->display->display_options['fields']['field_category']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['field_category']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['field_category']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['field_category']['alter']['word_boundary'] = 1;
    $handler->display->display_options['fields']['field_category']['alter']['ellipsis'] = 1;
    $handler->display->display_options['fields']['field_category']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['field_category']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['field_category']['alter']['html'] = 0;
    $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_category']['element_wrapper_type'] = 'em';
    $handler->display->display_options['fields']['field_category']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['field_category']['hide_empty'] = 0;
    $handler->display->display_options['fields']['field_category']['empty_zero'] = 0;
    $handler->display->display_options['fields']['field_category']['hide_alter_empty'] = 0;
    $handler->display->display_options['fields']['field_category']['field_api_classes'] = 0;
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['label'] = '';
    $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
    $handler->display->display_options['fields']['title']['alter']['path'] = '[field_indico_link]';
    $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['title']['alter']['external'] = 0;
    $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
    $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
    $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['title']['alter']['html'] = 0;
    $handler->display->display_options['fields']['title']['element_type'] = 'strong';
    $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['title']['hide_empty'] = 0;
    $handler->display->display_options['fields']['title']['empty_zero'] = 0;
    $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
    $handler->display->display_options['fields']['title']['link_to_node'] = 0;
    /* Field: Content: Date */
    $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
    $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
    $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
    $handler->display->display_options['fields']['field_date']['label'] = '';
    $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
    $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['field_date']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
    $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
    $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
    $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['field_date']['hide_empty'] = 0;
    $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
    $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = 0;
    $handler->display->display_options['fields']['field_date']['settings'] = array(
        'format_type' => 'indico_feeds_event_time',
        'fromto' => 'value',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'show_repeat_rule' => 'show',
    );
    $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
    /* Field: Content: Location */
    $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
    $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
    $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
    $handler->display->display_options['fields']['field_location']['label'] = '';
    $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['field_location']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['field_location']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['field_location']['alter']['external'] = 0;
    $handler->display->display_options['fields']['field_location']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['field_location']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['field_location']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['field_location']['alter']['word_boundary'] = 1;
    $handler->display->display_options['fields']['field_location']['alter']['ellipsis'] = 1;
    $handler->display->display_options['fields']['field_location']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['field_location']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['field_location']['alter']['html'] = 0;
    $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_location']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['field_location']['hide_empty'] = 0;
    $handler->display->display_options['fields']['field_location']['empty_zero'] = 0;
    $handler->display->display_options['fields']['field_location']['hide_alter_empty'] = 0;
    $handler->display->display_options['fields']['field_location']['field_api_classes'] = 0;
    /* Field: Content: Room */
    $handler->display->display_options['fields']['field_room']['id'] = 'field_room';
    $handler->display->display_options['fields']['field_room']['table'] = 'field_data_field_room';
    $handler->display->display_options['fields']['field_room']['field'] = 'field_room';
    $handler->display->display_options['fields']['field_room']['label'] = '';
    $handler->display->display_options['fields']['field_room']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['field_room']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['field_room']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['field_room']['alter']['external'] = 0;
    $handler->display->display_options['fields']['field_room']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['field_room']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['field_room']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['field_room']['alter']['word_boundary'] = 1;
    $handler->display->display_options['fields']['field_room']['alter']['ellipsis'] = 1;
    $handler->display->display_options['fields']['field_room']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['field_room']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['field_room']['alter']['html'] = 0;
    $handler->display->display_options['fields']['field_room']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_room']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['field_room']['hide_empty'] = 0;
    $handler->display->display_options['fields']['field_room']['empty_zero'] = 0;
    $handler->display->display_options['fields']['field_room']['hide_alter_empty'] = 0;
    $handler->display->display_options['fields']['field_room']['field_api_classes'] = 0;
    /* Sort criterion: Content: Date -  start date (field_date) */
    $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
    $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
    $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
    /* Filter criterion: Content: Type */
    $handler->display->display_options['filters']['type']['id'] = 'type';
    $handler->display->display_options['filters']['type']['table'] = 'node';
    $handler->display->display_options['filters']['type']['field'] = 'type';
    $handler->display->display_options['filters']['type']['value'] = array(
        'indico_event' => 'indico_event',
    );

    /* Display: Block */
    $handler = $view->new_display('block', 'Block', 'block');
    $export['indico_events_block_with_details'] = $view;

    $view = new view;
    $view->name = 'indico_events_page';
    $view->description = 'Display a page containing Indico events';
    $view->tag = 'Indico';
    $view->base_table = 'node';
    $view->human_name = 'Indico Events Page';
    $view->core = 0;
    $view->api_version = '3.0-alpha1';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Defaults */
    $handler = $view->new_display('default', 'Defaults', 'default');
    $handler->display->display_options['use_ajax'] = TRUE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['query']['options']['query_comment'] = FALSE;
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'full';
    $handler->display->display_options['pager']['options']['items_per_page'] = '50';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['pager']['options']['id'] = '0';
    $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
    $handler->display->display_options['style_plugin'] = 'table';
    $handler->display->display_options['style_options']['columns'] = array(
        'title' => 'title',
        'field_date' => 'field_date',
        'field_date_1' => 'field_date_1',
        'field_room' => 'field_room',
        'field_category' => 'field_category',
        'field_type' => 'field_type',
    );
    $handler->display->display_options['style_options']['default'] = 'field_date';
    $handler->display->display_options['style_options']['info'] = array(
        'title' => array(
            'sortable' => 1,
            'default_sort_order' => 'asc',
            'align' => '',
            'separator' => '',
        ),
        'field_date' => array(
            'sortable' => 1,
            'default_sort_order' => 'asc',
            'align' => '',
            'separator' => '',
        ),
        'field_date_1' => array(
            'sortable' => 1,
            'default_sort_order' => 'asc',
            'align' => '',
            'separator' => '',
        ),
        'field_room' => array(
            'sortable' => 1,
            'default_sort_order' => 'asc',
            'align' => '',
            'separator' => '',
        ),
        'field_category' => array(
            'sortable' => 1,
            'default_sort_order' => 'asc',
            'align' => '',
            'separator' => '',
        ),
        'field_type' => array(
            'sortable' => 1,
            'default_sort_order' => 'asc',
            'align' => '',
            'separator' => '',
        ),
    );
    $handler->display->display_options['style_options']['override'] = 1;
    $handler->display->display_options['style_options']['sticky'] = 1;
    $handler->display->display_options['style_options']['empty_table'] = 0;
    /* No results behavior: Global: Text area */
    $handler->display->display_options['empty']['text']['id'] = 'text';
    $handler->display->display_options['empty']['text']['table'] = 'views';
    $handler->display->display_options['empty']['text']['field'] = 'area';
    $handler->display->display_options['empty']['text']['empty'] = FALSE;
    $handler->display->display_options['empty']['text']['content'] = 'There are no events available at the moment.';
    $handler->display->display_options['empty']['text']['format'] = 'plain_text';
    $handler->display->display_options['empty']['text']['tokenize'] = 0;
    /* Relationship: Feeds item: Owner feed */
    $handler->display->display_options['relationships']['feed_nid_1']['id'] = 'feed_nid_1';
    $handler->display->display_options['relationships']['feed_nid_1']['table'] = 'feeds_item';
    $handler->display->display_options['relationships']['feed_nid_1']['field'] = 'feed_nid';
    $handler->display->display_options['relationships']['feed_nid_1']['required'] = 1;
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['title']['alter']['external'] = 0;
    $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
    $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
    $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['title']['alter']['html'] = 0;
    $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
    $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['title']['hide_empty'] = 0;
    $handler->display->display_options['fields']['title']['empty_zero'] = 0;
    $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
    $handler->display->display_options['fields']['title']['link_to_node'] = 1;
    /* Field: Content: Date */
    $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
    $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
    $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
    $handler->display->display_options['fields']['field_date']['label'] = 'Start date/time';
    $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
    $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['field_date']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
    $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
    $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
    $handler->display->display_options['fields']['field_date']['element_label_colon'] = 0;
    $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['field_date']['hide_empty'] = 0;
    $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
    $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = 0;
    $handler->display->display_options['fields']['field_date']['settings'] = array(
        'format_type' => 'short',
        'fromto' => 'value',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'show_repeat_rule' => 'show',
    );
    $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
    /* Field: Content: Date */
    $handler->display->display_options['fields']['field_date_1']['id'] = 'field_date_1';
    $handler->display->display_options['fields']['field_date_1']['table'] = 'field_data_field_date';
    $handler->display->display_options['fields']['field_date_1']['field'] = 'field_date';
    $handler->display->display_options['fields']['field_date_1']['label'] = 'End date/time';
    $handler->display->display_options['fields']['field_date_1']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['field_date_1']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['field_date_1']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['field_date_1']['alter']['external'] = 0;
    $handler->display->display_options['fields']['field_date_1']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['field_date_1']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['field_date_1']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['field_date_1']['alter']['word_boundary'] = 1;
    $handler->display->display_options['fields']['field_date_1']['alter']['ellipsis'] = 1;
    $handler->display->display_options['fields']['field_date_1']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['field_date_1']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['field_date_1']['alter']['html'] = 0;
    $handler->display->display_options['fields']['field_date_1']['element_label_colon'] = 0;
    $handler->display->display_options['fields']['field_date_1']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['field_date_1']['hide_empty'] = 0;
    $handler->display->display_options['fields']['field_date_1']['empty_zero'] = 0;
    $handler->display->display_options['fields']['field_date_1']['hide_alter_empty'] = 0;
    $handler->display->display_options['fields']['field_date_1']['settings'] = array(
        'format_type' => 'short',
        'fromto' => 'value2',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'show_repeat_rule' => 'show',
    );
    $handler->display->display_options['fields']['field_date_1']['field_api_classes'] = 0;
    /* Field: Content: Room */
    $handler->display->display_options['fields']['field_room']['id'] = 'field_room';
    $handler->display->display_options['fields']['field_room']['table'] = 'field_data_field_room';
    $handler->display->display_options['fields']['field_room']['field'] = 'field_room';
    $handler->display->display_options['fields']['field_room']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['field_room']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['field_room']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['field_room']['alter']['external'] = 0;
    $handler->display->display_options['fields']['field_room']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['field_room']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['field_room']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['field_room']['alter']['word_boundary'] = 1;
    $handler->display->display_options['fields']['field_room']['alter']['ellipsis'] = 1;
    $handler->display->display_options['fields']['field_room']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['field_room']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['field_room']['alter']['html'] = 0;
    $handler->display->display_options['fields']['field_room']['element_label_colon'] = 0;
    $handler->display->display_options['fields']['field_room']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['field_room']['hide_empty'] = 0;
    $handler->display->display_options['fields']['field_room']['empty_zero'] = 0;
    $handler->display->display_options['fields']['field_room']['hide_alter_empty'] = 0;
    $handler->display->display_options['fields']['field_room']['field_api_classes'] = 0;
    /* Field: Content: Category */
    $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
    $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
    $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
    $handler->display->display_options['fields']['field_category']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['field_category']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['field_category']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['field_category']['alter']['external'] = 0;
    $handler->display->display_options['fields']['field_category']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['field_category']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['field_category']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['field_category']['alter']['word_boundary'] = 1;
    $handler->display->display_options['fields']['field_category']['alter']['ellipsis'] = 1;
    $handler->display->display_options['fields']['field_category']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['field_category']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['field_category']['alter']['html'] = 0;
    $handler->display->display_options['fields']['field_category']['element_label_colon'] = 0;
    $handler->display->display_options['fields']['field_category']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['field_category']['hide_empty'] = 0;
    $handler->display->display_options['fields']['field_category']['empty_zero'] = 0;
    $handler->display->display_options['fields']['field_category']['hide_alter_empty'] = 0;
    $handler->display->display_options['fields']['field_category']['field_api_classes'] = 0;
    /* Field: Content: Type */
    $handler->display->display_options['fields']['field_type']['id'] = 'field_type';
    $handler->display->display_options['fields']['field_type']['table'] = 'field_data_field_type';
    $handler->display->display_options['fields']['field_type']['field'] = 'field_type';
    $handler->display->display_options['fields']['field_type']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['field_type']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['field_type']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['field_type']['alter']['external'] = 0;
    $handler->display->display_options['fields']['field_type']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['field_type']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['field_type']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['field_type']['alter']['word_boundary'] = 1;
    $handler->display->display_options['fields']['field_type']['alter']['ellipsis'] = 1;
    $handler->display->display_options['fields']['field_type']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['field_type']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['field_type']['alter']['html'] = 0;
    $handler->display->display_options['fields']['field_type']['element_label_colon'] = 0;
    $handler->display->display_options['fields']['field_type']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['field_type']['hide_empty'] = 0;
    $handler->display->display_options['fields']['field_type']['empty_zero'] = 0;
    $handler->display->display_options['fields']['field_type']['hide_alter_empty'] = 0;
    $handler->display->display_options['fields']['field_type']['field_api_classes'] = 0;
    /* Contextual filter: Content: Nid */
    $handler->display->display_options['arguments']['nid']['id'] = 'nid';
    $handler->display->display_options['arguments']['nid']['table'] = 'node';
    $handler->display->display_options['arguments']['nid']['field'] = 'nid';
    $handler->display->display_options['arguments']['nid']['relationship'] = 'feed_nid_1';
    $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
    $handler->display->display_options['arguments']['nid']['title_enable'] = 1;
    $handler->display->display_options['arguments']['nid']['title'] = 'Articles from %1';
    $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
    $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
    $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
    $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
    $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
    $handler->display->display_options['arguments']['nid']['specify_validation'] = 1;
    $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
    $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
        'indico_feed' => 'indico_feed',
    );
    $handler->display->display_options['arguments']['nid']['validate_options']['access'] = 0;
    $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
    $handler->display->display_options['arguments']['nid']['not'] = 0;
    /* Filter criterion: Content: Type */
    $handler->display->display_options['filters']['type']['id'] = 'type';
    $handler->display->display_options['filters']['type']['table'] = 'node';
    $handler->display->display_options['filters']['type']['field'] = 'type';
    $handler->display->display_options['filters']['type']['value'] = array(
        'indico_event' => 'indico_event',
    );
    $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

    /* Display: Page */
    $handler = $view->new_display('page', 'Page', 'page_1');
    $handler->display->display_options['path'] = 'node/%/indico-events';
    $handler->display->display_options['menu']['type'] = 'tab';
    $handler->display->display_options['menu']['title'] = 'View events';
    $handler->display->display_options['menu']['weight'] = '-9';
    $export['indico_events_page'] = $view;

    return $export;
}
