<?php
/**
 * @file
 * hp_localization.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function hp_localization_locale_default_languages() {
  $languages = array();

  // Exported language: de.
  $languages['de'] = array(
    'language' => 'de',
    'name' => 'German',
    'native' => 'Deutsch',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'de-de',
    'weight' => -3,
    'parent' => 'en',
  );
  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English US',
    'native' => 'English US',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => '',
    'weight' => -10,
    'parent' => NULL,
  );
  // Exported language: es.
  $languages['es'] = array(
    'language' => 'es',
    'name' => 'Spanish (European)',
    'native' => 'Español',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'es-es',
    'weight' => -7,
    'parent' => 'en',
  );
  // Exported language: es-mx.
  $languages['es-mx'] = array(
    'language' => 'es-mx',
    'name' => 'Spanish (Mexico)',
    'native' => 'Español Mexico',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'es-mx',
    'weight' => -6,
    'parent' => 'es',
  );
  // Exported language: fr.
  $languages['fr'] = array(
    'language' => 'fr',
    'name' => 'French',
    'native' => 'Français',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'fr-fr',
    'weight' => -9,
    'parent' => 'en',
  );
  // Exported language: fr-ca.
  $languages['fr-ca'] = array(
    'language' => 'fr-ca',
    'name' => 'French Canadian',
    'native' => 'Français (Canada)',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'fr-ca',
    'weight' => -8,
    'parent' => 'fr',
  );
  // Exported language: it.
  $languages['it'] = array(
    'language' => 'it',
    'name' => 'Italian',
    'native' => 'Italiano',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'it-it',
    'weight' => -2,
    'parent' => 'en',
  );
  // Exported language: ja.
  $languages['ja'] = array(
    'language' => 'ja',
    'name' => 'Japanese',
    'native' => '日本語',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'ja-jp',
    'weight' => -1,
    'parent' => 'en',
  );
  // Exported language: ko.
  $languages['ko'] = array(
    'language' => 'ko',
    'name' => 'Korean',
    'native' => '한국어',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'ko-kr',
    'weight' => 0,
    'parent' => 'en',
  );
  // Exported language: pt-br.
  $languages['pt-br'] = array(
    'language' => 'pt-br',
    'name' => 'Portuguese, Brazil',
    'native' => 'Português  (Brazil)',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'pt-br',
    'weight' => -5,
    'parent' => 'pt-pt',
  );
  // Exported language: pt-pt.
  $languages['pt-pt'] = array(
    'language' => 'pt-pt',
    'name' => 'Portuguese, Portugal',
    'native' => 'Português',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'pt-pt',
    'weight' => -4,
    'parent' => 'en',
  );
  // Exported language: ru.
  $languages['ru'] = array(
    'language' => 'ru',
    'name' => 'Russian',
    'native' => 'Русский',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'ru-ru',
    'weight' => 1,
    'parent' => 'en',
  );
  return $languages;
}
