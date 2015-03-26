<?php

/**
 * @file
 * Defines the inline entity form controller for Nodes.
 */

class PronqNodeInlineEntityFormController extends NodeInlineEntityFormController   {



  /**
   * Overrides EntityInlineEntityFormController::entityForm().
   */
  public function entityForm($entity_form, &$form_state) {
     #dsm("WHOLE FORM");
      #dsm($entity_form);
    $node = $entity_form['#entity'];
      #dsm("BEFORE REVISION LOAD");
      if (isset($node->nid)) {
          if (workbench_moderation_node_type_moderated($node->type)) {
              // Load the node moderation data
              workbench_moderation_node_data($node);
              // We ONLY edit the current revision
              $node = workbench_moderation_node_current_load($node);
              $entity_form['#entity'] = $node;
          }
      }
      #dsm("AFTER REVISION LOAD");
    $type = node_type_get_type($node);
    $extra_fields = field_info_extra_fields('node', $node->type, 'form');

    // Do some prep work on the node, similarly to node_form().
    if (!isset($node->title)) {
      $node->title = NULL;
    }
    node_object_prepare($node);

    $entity_form['title'] = array(
      '#type' => 'textfield',
      '#title' => check_plain($type->title_label),
      '#required' => TRUE,
      '#default_value' => $node->title,
      '#maxlength' => 255,
      // The label might be missing if the Title module has replaced it.
      '#weight' => !empty($extra_fields['title']) ? $extra_fields['title']['weight'] : -5,
        '#description' => t('This is coming from our pronq moderation module'),
    );
    $entity_form['status'] = array(
      '#type' => 'radios',
      //'#access' => user_access('administer nodes'),
      '#title' => t('Status'),
      '#default_value' => 1,
      '#options' => array(1 => t('Published'), 0 => t('Unpublished')),
      '#required' => TRUE,
      '#weight' => 99,
    );

    $langcode = entity_language('node', $node);
    field_attach_form('node', $node, $entity_form, $form_state, $langcode);

    return $entity_form;
  }

    /**
     * Overrides EntityInlineEntityFormController::entityFormSubmit().
     */
    public function entityFormSubmit(&$entity_form, &$form_state) {
        //make sure IEF knows to make a new draft
        #dsm($entity_form);

        /*$node = node_load($entity_form['#entity']->nid);
        $node->workbench_moderation_state_new = 'draft';
        $node->workbench_moderation_state_current = $entity_form['#entity']->workbench_moderation['current']->state;
        workbench_moderation_moderate($node,'draft');*/
        $entity_form['#entity']->workbench_moderation_state_new = 'draft';
        $entity_form['#entity']->revision = 1;
        node_submit($entity_form['#entity']);
        #parent::entityFormSubmit($entity_form, $form_state);

        //do any other node submits on the IEF node
        $child_form_state = form_state_defaults();
        $child_form_state['values'] = drupal_array_get_nested_value($form_state['values'], $entity_form['#parents']);
        foreach (module_implements('node_submit') as $module) {
            $function = $module . '_node_submit';
            $function($entity_form['#entity'], $entity_form, $child_form_state);
        }
    }
}
