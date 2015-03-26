<div id="email-group">
	<div class="group-width-wrapper group-email-wrapper">
		<p class="section-banner-text">
			<?php echo $email_details; ?>
		</p>
		<div class="form-wrapper">
			<form class="home-email-form clearfix" action="<?php echo $submit_url; ?>" method="post">
				<input type="text" name="email" class="form-email" required="required" value="Enter your email" data-default="Enter your email" data-empty="<?php echo htmlentities($email_empty);?>" data-invalid="<?php echo htmlentities($email_invalid); ?>" data-thanks="<?php echo htmlentities($email_thanks); ?>">
				<input type="submit" value="<?php echo $email_cta; ?>" class="form-submit">
				<div class="success-text"></div>
			</form>
			<div class="loading-indicator-pronq">
				<div class="arc1"><div></div></div>
				<div class="arc2"><div></div></div>
				<div class="arc3"><div></div></div>
				<div class="arc4"><div></div></div>
				<div class="arc5"><div></div></div>
			</div>
		</div>
	</div>
</div>