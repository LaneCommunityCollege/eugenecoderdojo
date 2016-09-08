<?php
/**
 * @file
 * cdojo_base.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cdojo_base_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sessions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'civicrm_event';
  $view->human_name = 'Sessions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sessions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-6 col-sm-12';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'row list-inline';
  $handler->display->display_options['style_options']['wrapper_class'] = 'session-list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'start_date' => 'start_date',
    'end_date' => 'end_date',
  );
  $handler->display->display_options['row_options']['separator'] = '-';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: CiviCRM Events: Event ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: CiviCRM Events: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_civicrm_event'] = 'page';
  /* Field: CiviCRM Events: Summary */
  $handler->display->display_options['fields']['summary']['id'] = 'summary';
  $handler->display->display_options['fields']['summary']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['summary']['field'] = 'summary';
  $handler->display->display_options['fields']['summary']['label'] = '';
  $handler->display->display_options['fields']['summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['summary']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Events: Start Date */
  $handler->display->display_options['fields']['start_date']['id'] = 'start_date';
  $handler->display->display_options['fields']['start_date']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['start_date']['field'] = 'start_date';
  $handler->display->display_options['fields']['start_date']['label'] = '';
  $handler->display->display_options['fields']['start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['start_date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['start_date']['custom_date_format'] = 'M';
  $handler->display->display_options['fields']['start_date']['second_date_format'] = 'long';
  /* Field: CiviCRM Events: Start Date */
  $handler->display->display_options['fields']['start_date_1']['id'] = 'start_date_1';
  $handler->display->display_options['fields']['start_date_1']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['start_date_1']['field'] = 'start_date';
  $handler->display->display_options['fields']['start_date_1']['label'] = '';
  $handler->display->display_options['fields']['start_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['start_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['start_date_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['start_date_1']['custom_date_format'] = 'j';
  $handler->display->display_options['fields']['start_date_1']['second_date_format'] = 'long';
  /* Field: CiviCRM Events: Text Link */
  $handler->display->display_options['fields']['text_link']['id'] = 'text_link';
  $handler->display->display_options['fields']['text_link']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['text_link']['field'] = 'text_link';
  $handler->display->display_options['fields']['text_link']['label'] = '';
  $handler->display->display_options['fields']['text_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['text_link']['alter']['text'] = '<div class="session-wrap clearfix">
<h4>[title]</h4>
<p>[summary]</p>
<div class="cal-icons">
<h6>[start_date]</h6><span>[start_date_1]</span>
</div>
<span class="btn" role="btn">[text_link]</span>
</div>';
  $handler->display->display_options['fields']['text_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['text_link']['link_to_civicrm_event'] = 'page';
  $handler->display->display_options['fields']['text_link']['link_text'] = 'Event Info';
  /* Sort criterion: CiviCRM Events: Start Date */
  $handler->display->display_options['sorts']['start_date']['id'] = 'start_date';
  $handler->display->display_options['sorts']['start_date']['table'] = 'civicrm_event';
  $handler->display->display_options['sorts']['start_date']['field'] = 'start_date';
  $handler->display->display_options['sorts']['start_date']['granularity'] = 'hour';
  /* Filter criterion: CiviCRM Events: Is Public */
  $handler->display->display_options['filters']['is_public']['id'] = 'is_public';
  $handler->display->display_options['filters']['is_public']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['is_public']['field'] = 'is_public';
  $handler->display->display_options['filters']['is_public']['value'] = '1';
  /* Filter criterion: CiviCRM Events: Is Online Registration On */
  $handler->display->display_options['filters']['is_online_registration']['id'] = 'is_online_registration';
  $handler->display->display_options['filters']['is_online_registration']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['is_online_registration']['field'] = 'is_online_registration';
  $handler->display->display_options['filters']['is_online_registration']['value'] = '1';
  /* Filter criterion: CiviCRM Events: Is Active */
  $handler->display->display_options['filters']['is_active']['id'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['is_active']['field'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['value'] = '1';
  /* Filter criterion: CiviCRM Events: Registration End Date */
  $handler->display->display_options['filters']['registration_end_date']['id'] = 'registration_end_date';
  $handler->display->display_options['filters']['registration_end_date']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['registration_end_date']['field'] = 'registration_end_date';
  $handler->display->display_options['filters']['registration_end_date']['operator'] = '>=';
  $handler->display->display_options['filters']['registration_end_date']['value']['value'] = 'now';
  $handler->display->display_options['filters']['registration_end_date']['value']['type'] = 'offset';
  /* Filter criterion: CiviCRM Events: Start Date */
  $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['operator'] = '>=';
  $handler->display->display_options['filters']['start_date']['value']['value'] = 'now';
  $handler->display->display_options['filters']['start_date']['value']['type'] = 'offset';

  /* Display: Sessions Page */
  $handler = $view->new_display('page', 'Sessions Page', 'sessions_page');
  $handler->display->display_options['path'] = 'sessions';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Sessions';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['sessions'] = $view;

  $view = new view();
  $view->name = 'view_showcase_slides';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Showcase Slides';
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
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'front_page_slider';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'showcase_slides' => 'showcase_slides',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['view_showcase_slides'] = $view;

  return $export;
}
