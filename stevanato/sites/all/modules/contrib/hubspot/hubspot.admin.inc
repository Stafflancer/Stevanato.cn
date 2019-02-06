<?php
/**
 * @file
 * Provides admin settings page to adjust HubSpot API key, debugging settings,
 * JavaScript embedding, and form submission settings.
 */

/**
 * Form constructor for the Hubspot admin settings form.
 *
 * @see hubspot_admin_settings_validate()
 * @see hubspot_admin_settings_submit()
 */
function hubspot_admin_settings() {
  $form = array();

  $form['additional_settings'] = array(
    '#type' => 'vertical_tabs',
  );

  $form['settings'] = array(
    '#title' => t('Connectivity'),
    '#type' => 'fieldset',
    '#collapsible' => TRUE,
    '#group' => 'additional_settings',
  );

  $form['settings']['hubspot_portalid'] = array(
    '#title' => t('HubSpot Portal ID'),
    '#type' => 'textfield',
    '#required' => TRUE,
    '#default_value' => variable_get('hubspot_portalid', ''),
    '#description' => t('Enter the Hubspot Portal ID for this site.  It can be found by
      <a href="https://login.hubspot.com/login" target="_blank">logging into HubSpot</a> going to the Dashboard and
      examining the url. Example: "https://app.hubspot.com/dashboard-plus/12345/dash/".  The number after
      "dashboard-plus" is your Portal ID.'),
  );

  $form['settings']['hubspot_client_id'] = array(
    '#type' => 'textfield',
    '#title' => t('HubSpot Client ID'),
    '#default_value' => variable_get('hubspot_client_id', ''),
  );

  $form['settings']['hubspot_client_secret'] = array(
    '#type' => 'textfield',
    '#title' => t('HubSpot Client Secret'),
    '#default_value' => variable_get('hubspot_client_secret', ''),
  );

  $form['settings']['hubspot_scope'] = array(
    '#type' => 'textfield',
    '#title' => t('HubSpot Scope'),
    '#default_value' => variable_get('hubspot_scope', 'contacts forms'),
  );

  if (variable_get('hubspot_client_id', '') && variable_get('hubspot_client_secret', '')) {
    $form['settings']['hubspot_authentication'] = array(
      '#value' => t('Connect Hubspot Account'),
      '#type' => 'submit',
      '#validate' => array(),
      '#submit' => array('hubspot_oauth_submit'),
    );

    if (variable_get('hubspot_refresh_token', '')) {
      $form['settings']['hubspot_authentication']['#suffix'] = t('Your Hubspot account is connected.');
      $form['settings']['hubspot_authentication']['#value'] = t('Disconnect Hubspot Account');
      $form['settings']['hubspot_authentication']['#submit'] = array('hubspot_oauth_disconnect');
    }
  }

  $form['settings']['hubspot_log_code'] = array(
    '#title' => t('HubSpot Traffic Logging Code'),
    '#type' => 'textarea',
    '#default_value' => variable_get('hubspot_log_code', ''),
    '#description' => t('To enable HubSpot traffic logging on your site, paste the External Site Traffic Logging code
      here.'),
  );

  $form['debug'] = array(
    '#title' => t('Debugging'),
    '#type' => 'fieldset',
    '#collapsible' => TRUE,
    '#group' => 'additional_settings',
  );

  $form['debug']['hubspot_debug_on'] = array(
    '#title' => t('Debugging enabled'),
    '#type' => 'checkbox',
    '#default_value' => variable_get('hubspot_debug_on', 0),
    '#description' => t('If debugging is enabled, HubSpot errors will be emailed to the address below. Otherwise, they
      will be logged to the regular Drupal error log.'),
  );

  $form['debug']['hubspot_debug_email'] = array(
    '#title' => t('Debugging email'),
    '#type' => 'textfield',
    '#default_value' => variable_get('hubspot_debug_email', variable_get('site_mail', '')),
    '#description' => t('Email error reports to this address if debugging is enabled.'),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => ('Save Configuration'),
  );

  return $form;
}

/**
 * Submit handler for hubspot_admin_settings().
 */
function hubspot_admin_settings_submit($form, &$form_state) {
  variable_set('hubspot_portalid', $form_state['values']['hubspot_portalid']);
  variable_set('hubspot_client_id', $form_state['values']['hubspot_client_id']);
  variable_set('hubspot_client_secret', $form_state['values']['hubspot_client_secret']);
  variable_set('hubspot_scope', $form_state['values']['hubspot_scope']);
  variable_set('hubspot_debug_email', $form_state['values']['hubspot_debug_email']);
  variable_set('hubspot_debug_on', $form_state['values']['hubspot_debug_on']);
  variable_set('hubspot_log_code', $form_state['values']['hubspot_log_code']);

  $txn = db_transaction();

  drupal_set_message(t('The configuration options have been saved.'));
}

/**
 * Form validation handler for hubspot_admin_settings().
 *
 * Ensures that the debug email address provided is valid if debugging is
 * enabled.
 */
function hubspot_admin_settings_validate($form, &$form_state) {
  if ($form_state['values']['hubspot_debug_on'] &&
      !valid_email_address($form_state['values']['hubspot_debug_email'])) {
    form_set_error('hubspot_debug_email', t('You must provide a valid email address.'));
  }

}

/**
 * Form submission handler for hubspot_admin_settings().
 */
function hubspot_oauth_submit($form, &$form_state) {
  $client_id = variable_get('hubspot_client_id', '');
  $scope = variable_get('hubspot_scope', 'contacts forms');

  $data = array(
    'client_id' => $client_id,
    'redirect_uri' => url('hubspot/oauth', array('query' => drupal_get_destination(), 'absolute' => TRUE)),
    'scope' => $scope,
  );

  $form_state['redirect'][] = url('https://app.hubspot.com/oauth/authorize', array('query' => $data));
}

/**
 * Page callback.
 *
 * Saves OAuth tokens from HubSpot and redirects user.
 */
function hubspot_oauth_connect() {
  if (!empty($_GET['code'])) {

    $client_id = variable_get('hubspot_client_id', '');
    $client_secret = variable_get('hubspot_client_secret', '');
    $redirect_uri = url('hubspot/oauth', array('query' => drupal_get_destination(), 'absolute' => TRUE));
    $code = $_GET['code'];

    // Get OAuth 2.0 Access Token and Refresh Tokens
    $url = 'https://api.hubapi.com/oauth/v1/token';

    $data = array(
      'grant_type' => 'authorization_code',
      'client_id' => $client_id,
      'client_secret' => $client_secret,
      'redirect_uri' => $redirect_uri,
      'code' => $code,
    );

    $options = array(
      'headers' => array(
        'Content-Type' => 'application/x-www-form-urlencoded',
      ),
      'method' => 'POST',
      'data' => drupal_http_build_query($data),
    );

    $response = drupal_http_request($url, $options);

    if (isset($response->code) && $response->code == '200' && !empty($response->data)) {
      $response_data = drupal_json_decode($response->data);

      variable_set('hubspot_access_token', $response_data['access_token']);
      variable_set('hubspot_refresh_token', $response_data['refresh_token']);
      variable_set('hubspot_expires_in', $response_data['expires_in']);

      drupal_set_message(t('Successfully authenticated with Hubspot.'));
    }
    else {
      $response_data = !empty($response->data) ? $response->data : '';

      drupal_set_message(t('Failed to get access token and refresh token. Error = %error', array('%error' => $response_data)), 'error');
      watchdog('hubspot', $response_data, array(), 'error');
    }
  }

  if (!empty($_GET['error'])) {
    $error_code = $_GET['error'];
    $error_description = !empty($_GET['error_description']) ? $_GET['error_description'] : '';

    drupal_set_message(t('Authorization failed. Error = @error_code, Description = @error_description', array('@error_code' => $error_code, '@error_description' => $error_description)), 'error', FALSE);
  }

  drupal_goto();
}

/**
 * Form submit handler.
 *
 * Deletes Hubspot OAuth tokens.
 */
function hubspot_oauth_disconnect($form, &$form_state) {
  variable_del('hubspot_access_token');
  variable_del('hubspot_refresh_token');
  variable_del('hubspot_expires_in');
}
