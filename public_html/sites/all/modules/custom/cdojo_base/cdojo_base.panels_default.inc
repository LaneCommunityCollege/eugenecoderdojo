<?php
/**
 * @file
 * cdojo_base.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function cdojo_base_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = '';
  $mini->admin_title = 'Footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
        ),
        'parent' => 'canvas',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'featured_event',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'featured_event' => array(
        'type' => 'region',
        'title' => 'Featured Event',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
      'featured_event' => NULL,
      'view_more_events' => NULL,
      'credits_empty_space' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '88b5e231-e5a8-4ecf-80c4-2037c26a31b6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-df1ae1fe-20d4-4ff2-aa37-00d4a5820b5f';
    $pane->panel = 'featured_event';
    $pane->type = 'views_panes';
    $pane->subtype = 'featured_session-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'df1ae1fe-20d4-4ff2-aa37-00d4a5820b5f';
    $display->content['new-df1ae1fe-20d4-4ff2-aa37-00d4a5820b5f'] = $pane;
    $display->panels['featured_event'][0] = 'new-df1ae1fe-20d4-4ff2-aa37-00d4a5820b5f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer'] = $mini;

  return $export;
}
