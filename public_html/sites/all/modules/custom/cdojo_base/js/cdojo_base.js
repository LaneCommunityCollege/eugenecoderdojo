/**
 * Moves footer masquerade autocomplete list of usernames up to reasonable position.
 * */
(function ($, Drupal) {
    Drupal.behaviors.dependent_field = {
        attach: function (context, settings) {
            $('.page-user-register input#custom_46_Other, .page-admin-people-create input#custom_46_Other').on('change', function(){
                if($(this).is(':checked')){
                    $('#editrow-custom_60').show();
                }
                else{
                    $('#editrow-custom_60').hide();
                }
            });
            // This is for hiding/showing the demographics section for non-student users.
            $('.page-user-register input#edit-user-roles-7').on('change', function(){
                if($(this).is(':checked')){
                    $('#profilewrap16').hide();
                }
                else{
                    $('#profilewrap16').show();
                }
            });
        }
    }
})(jQuery, Drupal);
