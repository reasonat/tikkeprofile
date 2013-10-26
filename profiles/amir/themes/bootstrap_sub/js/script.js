/*
 * ##### Sasson - advanced drupal theming. #####
 *
 * SITENAME scripts.
 *
 */
(function($) {

// DUPLICATE AND UNCOMMENT
Drupal.behaviors.behaviorName = {
  attach: function(context) {
   $(".view-products-terms-pages").each(function(){
	   $(this).addClass('hidden-phone'); });
  }
};




})(jQuery);

