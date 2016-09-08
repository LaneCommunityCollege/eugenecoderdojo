<?php
/**
 * @file
 * cdojo_base.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function cdojo_base_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_page';
  $page->task = 'page';
  $page->admin_title = 'Home Page';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
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
          0 => 5,
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
        ),
        'parent' => 'canvas',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'membership_left',
          1 => 'membership_right',
        ),
        'parent' => 'main',
        'class' => 'membership-row row',
        'hide_empty' => 0,
      ),
      'membership_left' => array(
        'type' => 'region',
        'title' => 'Membership Left',
        'width' => '50',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'col-md-6 hidden-xs',
        'hide_empty' => 0,
      ),
      'membership_right' => array(
        'type' => 'region',
        'title' => 'Membership Right',
        'width' => '50',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'col-sm-6 col-xs-12',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'volunteer_left',
          1 => 'volunteer_right',
        ),
        'parent' => 'main',
        'class' => 'row volunteer-row',
        'hide_empty' => 0,
      ),
      'volunteer_left' => array(
        'type' => 'region',
        'title' => 'Volunteer Left',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'col-sm-6 col-xs-12',
        'hide_empty' => 0,
      ),
      'volunteer_right' => array(
        'type' => 'region',
        'title' => 'Volunteer Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'col-md-6 hidden-xs',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'contribute_left',
          1 => 'contribute_right',
        ),
        'parent' => 'main',
        'class' => 'row contribute-row',
        'hide_empty' => 0,
      ),
      'contribute_left' => array(
        'type' => 'region',
        'title' => 'Contribute Left',
        'width' => 50,
        'width_type' => '%',
        'parent' => '3',
        'class' => 'col-md-6 hidden-xs',
        'hide_empty' => 0,
      ),
      'contribute_right' => array(
        'type' => 'region',
        'title' => 'Contribute Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => '3',
        'class' => 'col-sm-6 col-xs-12',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'body',
        ),
        'parent' => 'main',
        'class' => 'row sponsors-row',
        'hide_empty' => 0,
      ),
      'body' => array(
        'type' => 'region',
        'title' => 'Sponsors',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'showcase_slider',
        ),
        'parent' => 'main',
        'class' => 'slider-row',
        'hide_empty' => 0,
      ),
      'showcase_slider' => array(
        'type' => 'region',
        'title' => 'Showcase Slider',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'membership_left' => NULL,
      'membership_right' => NULL,
      'volunteer_left' => NULL,
      'volunteer_right' => NULL,
      'contribute_left' => NULL,
      'contribute_right' => NULL,
      'body' => NULL,
      'showcase_slider' => NULL,
    ),
    'membership_left' => array(
      'style' => 'naked',
    ),
    'membership_right' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5253289c-329d-4fd8-bd4b-6dcc03963fb2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c1868b8f-0940-4fe0-a1f0-25e83934b8ce';
    $pane->panel = 'body';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsors_view-panel_pane_1';
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
    $pane->uuid = 'c1868b8f-0940-4fe0-a1f0-25e83934b8ce';
    $display->content['new-c1868b8f-0940-4fe0-a1f0-25e83934b8ce'] = $pane;
    $display->panels['body'][0] = 'new-c1868b8f-0940-4fe0-a1f0-25e83934b8ce';
    $pane = new stdClass();
    $pane->pid = 'new-c8ce1001-dbb9-4e05-aa39-9950cfe1769a';
    $pane->panel = 'contribute_left';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'hidden-xs',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c8ce1001-dbb9-4e05-aa39-9950cfe1769a';
    $display->content['new-c8ce1001-dbb9-4e05-aa39-9950cfe1769a'] = $pane;
    $display->panels['contribute_left'][0] = 'new-c8ce1001-dbb9-4e05-aa39-9950cfe1769a';
    $pane = new stdClass();
    $pane->pid = 'new-c3fc153f-2425-44db-bb0b-c3a1dc9bb3d7';
    $pane->panel = 'contribute_right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Contribute',
      'body' => '<p>We rely on your support to continue our initiatives. Your financial or in-kind donations help bring technological literacy to the youth of Lane county. Find out more about how you can bring our dreams to reality.</p>

<p><a class="btn btn-info btn-lg" href="/donate">Donate</a></p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c3fc153f-2425-44db-bb0b-c3a1dc9bb3d7';
    $display->content['new-c3fc153f-2425-44db-bb0b-c3a1dc9bb3d7'] = $pane;
    $display->panels['contribute_right'][0] = 'new-c3fc153f-2425-44db-bb0b-c3a1dc9bb3d7';
    $pane = new stdClass();
    $pane->pid = 'new-5b3b6694-4feb-41b6-bf7f-be8a86718b4c';
    $pane->panel = 'membership_left';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'hidden-xs',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5b3b6694-4feb-41b6-bf7f-be8a86718b4c';
    $display->content['new-5b3b6694-4feb-41b6-bf7f-be8a86718b4c'] = $pane;
    $display->panels['membership_left'][0] = 'new-5b3b6694-4feb-41b6-bf7f-be8a86718b4c';
    $pane = new stdClass();
    $pane->pid = 'new-258639e7-05ba-40f8-adc2-6efc30347dce';
    $pane->panel = 'membership_right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Membership',
      'body' => '<div>
<p>Do you want to design the next must-have app, create an epic video game or build GIANT robots? Sign up for a membership today and join us for one of our upcoming classes. You’ll be amazed by the things you can do!</p>
<a class="btn btn-info btn-lg" href="/membership">Join Now</a></div>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'cta',
      'css_class' => 'text',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '258639e7-05ba-40f8-adc2-6efc30347dce';
    $display->content['new-258639e7-05ba-40f8-adc2-6efc30347dce'] = $pane;
    $display->panels['membership_right'][0] = 'new-258639e7-05ba-40f8-adc2-6efc30347dce';
    $pane = new stdClass();
    $pane->pid = 'new-ef8e36a6-62e6-46c7-b685-8cfb4ace9b9f';
    $pane->panel = 'showcase_slider';
    $pane->type = 'views_panes';
    $pane->subtype = 'view_showcase_slides-panel_pane_1';
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
    $pane->uuid = 'ef8e36a6-62e6-46c7-b685-8cfb4ace9b9f';
    $display->content['new-ef8e36a6-62e6-46c7-b685-8cfb4ace9b9f'] = $pane;
    $display->panels['showcase_slider'][0] = 'new-ef8e36a6-62e6-46c7-b685-8cfb4ace9b9f';
    $pane = new stdClass();
    $pane->pid = 'new-c5b0618a-487f-4860-b3fa-33fe99c8e300';
    $pane->panel = 'volunteer_left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Volunteer',
      'body' => '<p>CoderDojo runs on volunteers who enjoy the challenges and rewards of mentoring the next generation of programmers. There are many ways in which to help, technical or otherwise. Join us today.</p>

<p><a class="btn btn-info btn-lg" href="/volunteer">Volunteer</a></p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c5b0618a-487f-4860-b3fa-33fe99c8e300';
    $display->content['new-c5b0618a-487f-4860-b3fa-33fe99c8e300'] = $pane;
    $display->panels['volunteer_left'][0] = 'new-c5b0618a-487f-4860-b3fa-33fe99c8e300';
    $pane = new stdClass();
    $pane->pid = 'new-9176c46c-a601-4863-a72f-ecdbada6099f';
    $pane->panel = 'volunteer_right';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'hidden-xs',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9176c46c-a601-4863-a72f-ecdbada6099f';
    $display->content['new-9176c46c-a601-4863-a72f-ecdbada6099f'] = $pane;
    $display->panels['volunteer_right'][0] = 'new-9176c46c-a601-4863-a72f-ecdbada6099f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page'] = $page;

  return $pages;

}
