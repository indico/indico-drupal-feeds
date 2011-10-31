<?php
function indico_feeds_ctools_plugin_api() {
    list($module, $api) = func_get_args();
    if ($module == "feeds" && $api == "feeds_importer_default") {
        return array("version" => "1");
    }
}

function indico_feeds_views_api() {
    list($module, $api) = func_get_args();
    if ($module == "views" && $api == "views_default") {
        return array("version" => "3.0");
    }
}

function indico_feeds_node_info() {
    $items = array(
        'indico_event' => array(
            'name' => t('Indico Event'),
            'base' => 'node_content',
            'description' => t('Used by Indico Feeds. Creating content of this type manually will <strong>NOT</strong> create an event in Indico.'),
            'has_title' => '1',
            'title_label' => t('Title'),
            'help' => '',
        ),
        'indico_feed' => array(
            'name' => t('Indico Feed'),
            'base' => 'node_content',
            'description' => t('This content type resembles Feeds importers that import indico events. For every importer you create, a block is created, too.'),
            'has_title' => '1',
            'title_label' => t('Title'),
            'help' => '',
        ),
    );
    variable_set('node_options_indico_feed', array('status'));
    variable_set('node_options_indico_event', array('status'));
    variable_set('node_preview_indico_feed', '0');
    variable_set('node_preview_indico_event', '0');
    variable_set('comment_indico_feed', '0');
    variable_set('comment_indico_event', '0');
    return $items;
}
