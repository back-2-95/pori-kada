<?php
/**
 * @file
 * pori_media.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pori_media_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: image
  $overrides["image.topics.effects|0|data|height"] = 257;
  $overrides["image.topics.effects|0|data|width"] = 457;
  $overrides["image.topics_breakpoints_theme_kada_mobile_1x.effects|0|data|height"] = 158;
  $overrides["image.topics_breakpoints_theme_kada_mobile_1x.effects|0|data|width"] = 280;
  $overrides["image.topics_breakpoints_theme_kada_phablet_1x.effects|0|data|height"] = 280;
  $overrides["image.topics_breakpoints_theme_kada_smalldesktop_1x.effects|0|data|height"] = 365;
  $overrides["image.topics_breakpoints_theme_kada_smalldesktop_1x.effects|0|data|width"] = 649;
  $overrides["image.topics_breakpoints_theme_kada_tablet_1x.effects|0|data|height"] = 386;
  $overrides["image.topics_breakpoints_theme_kada_tablet_1x.effects|0|data|width"] = 687;

 return $overrides;
}