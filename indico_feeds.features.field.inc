<?php
function indico_feeds_field_default_fields() {
    $fields = array();

    // Exported field: 'node-indico_event-body'
    $fields['node-indico_event-body'] = array(
        'field_config' => array(
            'active' => '1',
            'cardinality' => '1',
            'deleted' => '0',
            'entity_types' => array(
                0 => 'node',
            ),
            'field_name' => 'body',
            'foreign keys' => array(
                'format' => array(
                    'columns' => array(
                        'format' => 'format',
                    ),
                    'table' => 'filter_format',
                ),
            ),
            'indexes' => array(
                'format' => array(
                    0 => 'format',
                ),
            ),
            'module' => 'text',
            'settings' => array(),
            'translatable' => '0',
            'type' => 'text_with_summary',
        ),
        'field_instance' => array(
            'bundle' => 'indico_event',
            'default_value' => NULL,
            'deleted' => '0',
            'description' => 'This field contains the description of the event.',
            'display' => array(
                'default' => array(
                    'label' => 'above',
                    'module' => 'text',
                    'settings' => array(),
                    'type' => 'text_default',
                    'weight' => '11',
                ),
                'teaser' => array(
                    'label' => 'above',
                    'settings' => array(),
                    'type' => 'hidden',
                    'weight' => 0,
                ),
            ),
            'entity_type' => 'node',
            'field_name' => 'body',
            'label' => 'Description',
            'required' => 0,
            'settings' => array(
                'display_summary' => 0,
                'text_processing' => '1',
                'user_register_form' => FALSE,
            ),
            'widget' => array(
                'active' => 1,
                'module' => 'text',
                'settings' => array(
                    'rows' => '20',
                    'summary_rows' => 5,
                ),
                'type' => 'text_textarea_with_summary',
                'weight' => '2',
            ),
        ),
    );

    // Exported field: 'node-indico_event-field_category'
    $fields['node-indico_event-field_category'] = array(
        'field_config' => array(
            'active' => '1',
            'cardinality' => '1',
            'deleted' => '0',
            'entity_types' => array(),
            'field_name' => 'field_category',
            'foreign keys' => array(
                'format' => array(
                    'columns' => array(
                        'format' => 'format',
                    ),
                    'table' => 'filter_format',
                ),
            ),
            'indexes' => array(
                'format' => array(
                    0 => 'format',
                ),
            ),
            'module' => 'text',
            'settings' => array(
                'max_length' => '255',
            ),
            'translatable' => '0',
            'type' => 'text',
        ),
        'field_instance' => array(
            'bundle' => 'indico_event',
            'default_value' => NULL,
            'deleted' => '0',
            'description' => '',
            'display' => array(
                'default' => array(
                    'label' => 'inline',
                    'module' => 'text',
                    'settings' => array(),
                    'type' => 'text_default',
                    'weight' => '1',
                ),
                'teaser' => array(
                    'label' => 'above',
                    'settings' => array(),
                    'type' => 'hidden',
                    'weight' => 0,
                ),
            ),
            'entity_type' => 'node',
            'field_name' => 'field_category',
            'label' => 'Category',
            'required' => 1,
            'settings' => array(
                'text_processing' => '0',
                'user_register_form' => FALSE,
            ),
            'widget' => array(
                'active' => 1,
                'module' => 'text',
                'settings' => array(
                    'size' => '60',
                ),
                'type' => 'text_textfield',
                'weight' => '11',
            ),
        ),
    );

    // Exported field: 'node-indico_event-field_category_id'
    $fields['node-indico_event-field_category_id'] = array(
        'field_config' => array(
            'active' => '1',
            'cardinality' => '1',
            'deleted' => '0',
            'entity_types' => array(),
            'field_name' => 'field_category_id',
            'foreign keys' => array(
                'format' => array(
                    'columns' => array(
                        'format' => 'format',
                    ),
                    'table' => 'filter_format',
                ),
            ),
            'indexes' => array(
                'format' => array(
                    0 => 'format',
                ),
            ),
            'module' => 'text',
            'settings' => array(
                'max_length' => '255',
            ),
            'translatable' => '0',
            'type' => 'text',
        ),
        'field_instance' => array(
            'bundle' => 'indico_event',
            'default_value' => NULL,
            'deleted' => '0',
            'description' => '',
            'display' => array(
                'default' => array(
                    'label' => 'inline',
                    'module' => 'text',
                    'settings' => array(),
                    'type' => 'text_default',
                    'weight' => '1',
                ),
                'teaser' => array(
                    'label' => 'above',
                    'settings' => array(),
                    'type' => 'hidden',
                    'weight' => 0,
                ),
            ),
            'entity_type' => 'node',
            'field_name' => 'field_category_id',
            'label' => 'Category ID',
            'required' => 1,
            'settings' => array(
                'text_processing' => '0',
                'user_register_form' => FALSE,
            ),
            'widget' => array(
                'active' => 1,
                'module' => 'text',
                'settings' => array(
                    'size' => '60',
                ),
                'type' => 'text_textfield',
                'weight' => '11',
            ),
        ),
    );

    // Exported field: 'node-indico_event-field_room_map_url'
    $fields['node-indico_event-field_room_map_url'] = array(
        'field_config' => array(
            'active' => '1',
            'cardinality' => '1',
            'deleted' => '0',
            'entity_types' => array(),
            'field_name' => 'field_room_map_url',
            'foreign keys' => array(
                'format' => array(
                    'columns' => array(
                        'format' => 'format',
                    ),
                    'table' => 'filter_format',
                ),
            ),
            'indexes' => array(
                'format' => array(
                    0 => 'format',
                ),
            ),
            'module' => 'text',
            'settings' => array(
                'max_length' => '1024',
            ),
            'translatable' => '0',
            'type' => 'text',
        ),
        'field_instance' => array(
            'bundle' => 'indico_event',
            'default_value' => NULL,
            'deleted' => '0',
            'description' => '',
            'display' => array(
                'default' => array(
                    'label' => 'inline',
                    'module' => 'text',
                    'settings' => array(),
                    'type' => 'text_default',
                    'weight' => '1',
                ),
                'teaser' => array(
                    'label' => 'above',
                    'settings' => array(),
                    'type' => 'hidden',
                    'weight' => 0,
                ),
            ),
            'entity_type' => 'node',
            'field_name' => 'field_room_map_url',
            'label' => 'Room Map URL',
            'required' => 1,
            'settings' => array(
                'text_processing' => '0',
                'user_register_form' => FALSE,
            ),
            'widget' => array(
                'active' => 1,
                'module' => 'text',
                'settings' => array(
                    'size' => '60',
                ),
                'type' => 'text_textfield',
                'weight' => '13',
            ),
        ),
    );

    // Exported field: 'node-indico_event-field_date'
    $fields['node-indico_event-field_date'] = array(
        'field_config' => array(
            'active' => '1',
            'cardinality' => '1',
            'deleted' => '0',
            'entity_types' => array(),
            'field_name' => 'field_date',
            'foreign keys' => array(),
            'indexes' => array(),
            'module' => 'date',
            'settings' => array(
                'granularity' => array(
                    'day' => 'day',
                    'hour' => 'hour',
                    'minute' => 'minute',
                    'month' => 'month',
                    'second' => 0,
                    'year' => 'year',
                ),
                'repeat' => 0,
                'timezone_db' => 'UTC',
                'todate' => 'required',
                'tz_handling' => 'utc',
            ),
            'translatable' => '0',
            'type' => 'datetime',
        ),
        'field_instance' => array(
            'bundle' => 'indico_event',
            'deleted' => '0',
            'description' => 'This field contains the date/time of the event.',
            'display' => array(
                'default' => array(
                    'label' => 'inline',
                    'module' => 'date',
                    'settings' => array(
                        'format_type' => 'short',
                        'fromto' => 'both',
                        'multiple_from' => '',
                        'multiple_number' => '',
                        'multiple_to' => '',
                        'show_repeat_rule' => 'show',
                    ),
                    'type' => 'date_default',
                    'weight' => '2',
                ),
                'teaser' => array(
                    'label' => 'above',
                    'settings' => array(),
                    'type' => 'hidden',
                    'weight' => 0,
                ),
            ),
            'entity_type' => 'node',
            'field_name' => 'field_date',
            'label' => 'Date',
            'required' => 1,
            'settings' => array(
                'default_value' => 'now',
                'default_value2' => 'blank',
                'default_value_code' => '',
                'default_value_code2' => '',
                'user_register_form' => FALSE,
            ),
            'widget' => array(
                'active' => 1,
                'module' => 'date',
                'settings' => array(
                    'increment' => 15,
                    'input_format' => 'Y-m-d H:i:s',
                    'input_format_custom' => '',
                    'label_position' => 'above',
                    'repeat_collapsed' => 0,
                    'text_parts' => array(),
                    'year_range' => '-3:+3',
                ),
                'type' => 'date_text',
                'weight' => '3',
            ),
        ),
    );

    // Exported field: 'node-indico_event-field_indico_link'
    $fields['node-indico_event-field_indico_link'] = array(
        'field_config' => array(
            'active' => '1',
            'cardinality' => '1',
            'deleted' => '0',
            'entity_types' => array(),
            'field_name' => 'field_indico_link',
            'foreign keys' => array(
                'format' => array(
                    'columns' => array(
                        'format' => 'format',
                    ),
                    'table' => 'filter_format',
                ),
            ),
            'indexes' => array(
                'format' => array(
                    0 => 'format',
                ),
            ),
            'module' => 'text',
            'settings' => array(
                'max_length' => '255',
            ),
            'translatable' => '0',
            'type' => 'text',
        ),
        'field_instance' => array(
            'bundle' => 'indico_event',
            'default_value' => NULL,
            'deleted' => '0',
            'description' => 'This field contains the link to the Indico event.',
            'display' => array(
                'default' => array(
                    'label' => 'inline',
                    'module' => 'text',
                    'settings' => array(),
                    'type' => 'text_default',
                    'weight' => '10',
                ),
                'teaser' => array(
                    'label' => 'above',
                    'settings' => array(),
                    'type' => 'hidden',
                    'weight' => 0,
                ),
            ),
            'entity_type' => 'node',
            'field_name' => 'field_indico_link',
            'label' => 'Indico link',
            'required' => 1,
            'settings' => array(
                'text_processing' => '0',
                'user_register_form' => FALSE,
            ),
            'widget' => array(
                'active' => 1,
                'module' => 'text',
                'settings' => array(
                    'size' => '60',
                ),
                'type' => 'text_textfield',
                'weight' => '12',
            ),
        ),
    );

    // Exported field: 'node-indico_event-field_location'
    $fields['node-indico_event-field_location'] = array(
        'field_config' => array(
            'active' => '1',
            'cardinality' => '1',
            'deleted' => '0',
            'entity_types' => array(),
            'field_name' => 'field_location',
            'foreign keys' => array(
                'format' => array(
                    'columns' => array(
                        'format' => 'format',
                    ),
                    'table' => 'filter_format',
                ),
            ),
            'indexes' => array(
                'format' => array(
                    0 => 'format',
                ),
            ),
            'module' => 'text',
            'settings' => array(
                'max_length' => '255',
            ),
            'translatable' => '0',
            'type' => 'text',
        ),
        'field_instance' => array(
            'bundle' => 'indico_event',
            'default_value' => NULL,
            'deleted' => '0',
            'description' => 'This field contains the "location" of the event. It is usually "CERN".',
            'display' => array(
                'default' => array(
                    'label' => 'inline',
                    'module' => 'text',
                    'settings' => array(),
                    'type' => 'text_default',
                    'weight' => '7',
                ),
                'teaser' => array(
                    'label' => 'above',
                    'settings' => array(),
                    'type' => 'hidden',
                    'weight' => 0,
                ),
            ),
            'entity_type' => 'node',
            'field_name' => 'field_location',
            'label' => 'Location',
            'required' => 0,
            'settings' => array(
                'text_processing' => '0',
                'user_register_form' => FALSE,
            ),
            'widget' => array(
                'active' => 1,
                'module' => 'text',
                'settings' => array(
                    'size' => '60',
                ),
                'type' => 'text_textfield',
                'weight' => '9',
            ),
        ),
    );

    // Exported field: 'node-indico_event-field_room'
    $fields['node-indico_event-field_room'] = array(
        'field_config' => array(
            'active' => '1',
            'cardinality' => '1',
            'deleted' => '0',
            'entity_types' => array(),
            'field_name' => 'field_room',
            'foreign keys' => array(
                'format' => array(
                    'columns' => array(
                        'format' => 'format',
                    ),
                    'table' => 'filter_format',
                ),
            ),
            'indexes' => array(
                'format' => array(
                    0 => 'format',
                ),
            ),
            'module' => 'text',
            'settings' => array(
                'max_length' => '255',
            ),
            'translatable' => '0',
            'type' => 'text',
        ),
        'field_instance' => array(
            'bundle' => 'indico_event',
            'default_value' => NULL,
            'deleted' => '0',
            'description' => 'This field contains the "Room" of the event.',
            'display' => array(
                'default' => array(
                    'label' => 'inline',
                    'module' => 'text',
                    'settings' => array(),
                    'type' => 'text_default',
                    'weight' => '8',
                ),
                'teaser' => array(
                    'label' => 'above',
                    'settings' => array(),
                    'type' => 'hidden',
                    'weight' => 0,
                ),
            ),
            'entity_type' => 'node',
            'field_name' => 'field_room',
            'label' => 'Room',
            'required' => 0,
            'settings' => array(
                'text_processing' => '0',
                'user_register_form' => FALSE,
            ),
            'widget' => array(
                'active' => 1,
                'module' => 'text',
                'settings' => array(
                    'size' => '60',
                ),
                'type' => 'text_textfield',
                'weight' => '10',
            ),
        ),
    );

    // Exported field: 'node-indico_event-field_timezone'
    $fields['node-indico_event-field_timezone'] = array(
        'field_config' => array(
            'active' => '1',
            'cardinality' => '1',
            'deleted' => '0',
            'entity_types' => array(),
            'field_name' => 'field_timezone',
            'foreign keys' => array(
                'format' => array(
                    'columns' => array(
                        'format' => 'format',
                    ),
                    'table' => 'filter_format',
                ),
            ),
            'indexes' => array(
                'format' => array(
                    0 => 'format',
                ),
            ),
            'module' => 'text',
            'settings' => array(
                'max_length' => '64',
            ),
            'translatable' => '0',
            'type' => 'text',
        ),
        'field_instance' => array(
            'bundle' => 'indico_event',
            'default_value' => NULL,
            'deleted' => '0',
            'description' => 'This field contains the selected timezone for the event, e.g. "UTC" or "Europe/Zurich"',
            'display' => array(
                'default' => array(
                    'label' => 'inline',
                    'module' => 'text',
                    'settings' => array(),
                    'type' => 'text_default',
                    'weight' => '9',
                ),
                'teaser' => array(
                    'label' => 'above',
                    'settings' => array(),
                    'type' => 'hidden',
                    'weight' => 0,
                ),
            ),
            'entity_type' => 'node',
            'field_name' => 'field_timezone',
            'label' => 'Timezone',
            'required' => 1,
            'settings' => array(
                'text_processing' => '0',
                'user_register_form' => FALSE,
            ),
            'widget' => array(
                'active' => 1,
                'module' => 'text',
                'settings' => array(
                    'size' => '60',
                ),
                'type' => 'text_textfield',
                'weight' => '8',
            ),
        ),
    );

    // Exported field: 'node-indico_event-field_type'
    $fields['node-indico_event-field_type'] = array(
        'field_config' => array(
            'active' => '1',
            'cardinality' => '1',
            'deleted' => '0',
            'entity_types' => array(),
            'field_name' => 'field_type',
            'foreign keys' => array(),
            'indexes' => array(
                'value' => array(
                    0 => 'value',
                ),
            ),
            'module' => 'list',
            'settings' => array(
                'allowed_values' => array(
                    'simple_event' => 'Lecture',
                    'meeting' => 'Meeting',
                    'conference' => 'Conference',
                ),
                'allowed_values_function' => '',
            ),
            'translatable' => '0',
            'type' => 'list_text',
        ),
        'field_instance' => array(
            'bundle' => 'indico_event',
            'default_value' => NULL,
            'deleted' => '0',
            'description' => '',
            'display' => array(
                'default' => array(
                    'label' => 'inline',
                    'module' => 'list',
                    'settings' => array(),
                    'type' => 'list_default',
                    'weight' => '0',
                ),
                'teaser' => array(
                    'label' => 'above',
                    'settings' => array(),
                    'type' => 'hidden',
                    'weight' => 0,
                ),
            ),
            'entity_type' => 'node',
            'field_name' => 'field_type',
            'label' => 'Type',
            'required' => 1,
            'settings' => array(
                'user_register_form' => FALSE,
            ),
            'widget' => array(
                'active' => 1,
                'module' => 'options',
                'settings' => array(),
                'type' => 'options_select',
                'weight' => '1',
            ),
        ),
    );

    // Translatables
    // Included for use with string extractors like potx.
    t('Category');
    t('Date');
    t('Description');
    t('Indico link');
    t('Location');
    t('Room');
    t('This field contains the "Room" of the event.');
    t('This field contains the "location" of the event. It is usually "CERN".');
    t('This field contains the UTC date/time of the event.');
    t('This field contains the description of the event.');
    t('This field contains the link to the Indico event.');
    t('This field contains the selected timezone for the event, e.g. "UTC" or "Europe/Zurich"');
    t('Timezone');
    t('Type');

    return $fields;
}
