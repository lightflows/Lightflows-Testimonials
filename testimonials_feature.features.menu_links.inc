<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function testimonials_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:pages/testimonials
  $menu_links['primary-links:pages/testimonials'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'pages/testimonials',
    'router_path' => 'pages/testimonials',
    'link_title' => 'Testimonials',
    'options' => array(
      'attributes' => array(
        'title' => 'Testimonials from happy customers',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Testimonials');


  return $menu_links;
}
