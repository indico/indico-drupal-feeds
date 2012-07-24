<?php
function indico_feeds_feeds_importer_default() {
    $export = array();

    $feeds_importer = new stdClass;
    $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
    $feeds_importer->api_version = 1;
    $feeds_importer->id = 'indico';
    $feeds_importer->config = array(
        'name' => 'Indico feed',
        'description' => 'Indico Feed',
        'fetcher' => array(
            'plugin_key' => 'IndicoFetcher',
            'config' => array(),
        ),
        'parser' => array(
            'plugin_key' => 'IndicoParser',
            'config' => array(),
        ),
        'processor' => array(
            'plugin_key' => 'FeedsNodeProcessor',
            'config' => array(
                'content_type' => 'indico_event',
                'expire' => '-1',
                'author' => 0,
                'mappings' => array(
                    0 => array(
                        'source' => 'id',
                        'target' => 'guid',
                        'unique' => 1,
                    ),
                    1 => array(
                        'source' => 'title',
                        'target' => 'title',
                        'unique' => FALSE,
                    ),
                    2 => array(
                        'source' => 'location',
                        'target' => 'field_location',
                        'unique' => FALSE,
                    ),
                    3 => array(
                        'source' => 'room',
                        'target' => 'field_room',
                        'unique' => FALSE,
                    ),
                    4 => array(
                        'source' => 'link',
                        'target' => 'field_indico_link',
                        'unique' => FALSE,
                    ),
                    5 => array(
                        'source' => 'description',
                        'target' => 'body',
                        'unique' => FALSE,
                    ),
                    6 => array(
                        'source' => 'type',
                        'target' => 'field_type',
                        'unique' => FALSE,
                    ),
                    7 => array(
                        'source' => 'timezone',
                        'target' => 'field_timezone',
                        'unique' => FALSE,
                    ),
                    8 => array(
                        'source' => 'category',
                        'target' => 'field_category',
                        'unique' => FALSE,
                    ),
                    9 => array(
                        'source' => 'startDateTime',
                        'target' => 'field_date:start',
                        'unique' => FALSE,
                    ),
                    10 => array(
                        'source' => 'endDateTime',
                        'target' => 'field_date:end',
                        'unique' => FALSE,
                    ),
                    11 => array(
                        'source' => 'categoryId',
                        'target' => 'field_category_id',
                        'unique' => FALSE,
                    ),
                ),
                'update_existing' => '1',
                'input_format' => 'full_html',
            ),
        ),
        'content_type' => 'indico_feed',
        'update' => 0,
        'import_period' => '21600',
        'expire_period' => 3600,
        'import_on_create' => 1,
        'process_in_background' => 0,
    );
    $export['indico'] = $feeds_importer;

    return $export;
}
