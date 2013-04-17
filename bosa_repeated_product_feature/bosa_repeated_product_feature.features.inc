<?php
/**
 * @file
 * bosa_repeated_product_feature.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function bosa_repeated_product_feature_commerce_product_default_types() {
  $items = array(
    'repeated_product' => array(
      'type' => 'repeated_product',
      'name' => 'Periode produkt',
      'description' => 'Produkt der bliver gentaget i en defineret periode',
      'help' => '',
      'revision' => '1',
    ),
  );
  return $items;
}
