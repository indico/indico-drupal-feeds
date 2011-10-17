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
                        'source' => 'startDate',
                        'target' => 'field_start_date',
                        'unique' => FALSE,
                    ),
                    5 => array(
                        'source' => 'endDate',
                        'target' => 'field_end_date',
                        'unique' => FALSE,
                    ),
                    6 => array(
                        'source' => 'link',
                        'target' => 'field_indico_link',
                        'unique' => FALSE,
                    ),
                    7 => array(
                        'source' => 'description',
                        'target' => 'body',
                        'unique' => FALSE,
                    ),
                    8 => array(
                        'source' => 'startTime',
                        'target' => 'field_start_time',
                        'unique' => FALSE,
                    ),
                    9 => array(
                        'source' => 'endTime',
                        'target' => 'field_end_time',
                        'unique' => FALSE,
                    ),
                    10 => array(
                        'source' => 'type',
                        'target' => 'field_type',
                        'unique' => FALSE,
                    ),
                    11 => array(
                        'source' => 'timezone',
                        'target' => 'field_timezone',
                        'unique' => FALSE,
                    ),
                    12 => array(
                        'source' => 'category',
                        'target' => 'field_category',
                        'unique' => FALSE,
                    ),
                ),
                'update_existing' => '1',
                'input_format' => 'full_html',
            ),
        ),
        'content_type' => 'indico_feed',
        'update' => 0,
        'import_period' => '3600',
        'expire_period' => 3600,
        'import_on_create' => 1,
        'process_in_background' => 0,
    );
    $export['indico'] = $feeds_importer;

    return $export;
}
