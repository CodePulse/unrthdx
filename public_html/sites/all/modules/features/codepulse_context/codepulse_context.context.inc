<?php
/**
 * @file
 * codepulse_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function codepulse_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'actors';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'artist/actors-actresses' => 'artist/actors-actresses',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-actors-block' => array(
          'module' => 'views',
          'delta' => 'actors-block',
          'region' => 'content',
          'weight' => '5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['actors'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'actors_individual';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'actors_actresses' => 'actors_actresses',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-actors-block_1' => array(
          'module' => 'views',
          'delta' => 'actors-block_1',
          'region' => 'content',
          'weight' => '7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['actors_individual'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'dancers';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'artist/dancers' => 'artist/dancers',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-dancers-block' => array(
          'module' => 'views',
          'delta' => 'dancers-block',
          'region' => 'content',
          'weight' => '6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['dancers'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'dancers_individual';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'dancers' => 'dancers',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-dancers-block_1' => array(
          'module' => 'views',
          'delta' => 'dancers-block_1',
          'region' => 'content',
          'weight' => '5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['dancers_individual'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'girls';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'artist/girls' => 'artist/girls',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-girls-block' => array(
          'module' => 'views',
          'delta' => 'girls-block',
          'region' => 'content',
          'weight' => '7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['girls'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'guys';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'artist/guys' => 'artist/guys',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-guys-block' => array(
          'module' => 'views',
          'delta' => 'guys-block',
          'region' => 'content',
          'weight' => '8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['guys'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'content',
          'weight' => '10',
        ),
        'views-latest_content-block' => array(
          'module' => 'views',
          'delta' => 'latest_content-block',
          'region' => 'latest_content',
          'weight' => '-10',
        ),
        'views-latest_content-block_1' => array(
          'module' => 'views',
          'delta' => 'latest_content-block_1',
          'region' => 'featured_content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'models';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'artist/models' => 'artist/models',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-models-block' => array(
          'module' => 'views',
          'delta' => 'models-block',
          'region' => 'content',
          'weight' => '6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['models'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news' => 'news',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'news-category/*' => 'news-category/*',
      ),
    ),
    'views' => array(
      'values' => array(
        'news' => 'news',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news_category_block-block' => array(
          'module' => 'views',
          'delta' => 'news_category_block-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['news'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'portfolio_individual';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'models' => 'models',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-portfolio-block_1' => array(
          'module' => 'views',
          'delta' => 'portfolio-block_1',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['portfolio_individual'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'portfolio_main';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'portfolio' => 'portfolio',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-portfolio-block' => array(
          'module' => 'views',
          'delta' => 'portfolio-block',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['portfolio_main'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'footer_one',
          'weight' => '-10',
        ),
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'footer_two',
          'weight' => '-10',
        ),
        'views-tweets-block' => array(
          'module' => 'views',
          'delta' => 'tweets-block',
          'region' => 'footer_three',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'talent';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'artist/talents-presenters' => 'artist/talents-presenters',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-talent_presenters-block' => array(
          'module' => 'views',
          'delta' => 'talent_presenters-block',
          'region' => 'content',
          'weight' => '6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['talent'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'talent_individual';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'talent' => 'talent',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-portfolio-block_1' => array(
          'module' => 'views',
          'delta' => 'portfolio-block_1',
          'region' => 'content',
          'weight' => '9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['talent_individual'] = $context;

  return $export;
}
