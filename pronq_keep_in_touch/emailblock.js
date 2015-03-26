(function ($, Drupal, window, document, undefined) {

Drupal.behaviors.emailblock = {	
	attach: function(context, settings) {
		// Add misc event listeners
		Drupal.behaviors.emailblock.add_listeners();
	},
	add_listeners:function() {
		// Email form validate / submit
		$(".home-email-form").on('submit', function(e){
			email = $(this).find("input.form-email").val();
			// Check if the email is invalid (or blank)
			if(!/^([a-zA-Z0-9_.+-])+\@(([a-zA-Z0-9-])+\.)+([a-zA-Z0-9]{2,4})+$/.test(email)) {
				// Show the appropriate message, and abort the form submission
				problem = "invalid"
				if($(this).find("input.form-email").val().trim()=="") {
					problem = "empty"
				}
				$(this).find(".success-text").html('<p>'+$(this).find("input.form-email").data(problem)+'</p>').slideDown(300)
				return false;
			}
			
			// Hide any previous errors
			if($(this).find(".success-text").css("display")=="block") {
				$(this).find(".success-text").slideUp(300)
			}
			
			// Start the loader animation
			$(this).parent().find(".loading-indicator-pronq").addClass("active")
			
			// Submit the data
			$.ajax({
				type: "POST",
				dataType: "jsonp",
				url: $(this).attr("action"),
				data: {email:email},
				error: function(query, textStatus, errorThrown) {
					Drupal.behaviors.emailblock.form_success()
				},
			})
			
			return false;
		})
		// If the text in the field is the default val, clear it on focus
		$(".home-email-form input.form-email").on('focus', function(){
			if($(this).val() == $(this).data("default")) {
				$(this).val("");
			}
		})
		// If the field is left blank restore the defautl text on blur
		.on('blur', function(){
			if($(this).val() == "") {
				$(this).val($(this).data("default"));
			}
			
		})
	},
	form_success:function(success) {
		// Called after the email form was successfully submitted
		
		// Hide loader
		$("form.home-email-form").parent().find(".loading-indicator-pronq").removeClass("active")
		
		// Change form state
		if(success === false) {
			$("form.home-email-form input").show();
			$("form.home-email-form .success-text").hide();
		} else {
			message = $("form.home-email-form input.form-email").data("thanks")
			$("form.home-email-form input").hide();
			// Show the success message
			$("form.home-email-form .success-text").html(message).show();
		}
	}
};


})(jQuery, Drupal, this, this.document);
