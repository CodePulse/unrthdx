jQuery(document).ready(function() {		
	jQuery(".search-box .form-text").focus(function() {
        jQuery(this).stop().animate({'width' : '180px', 'padding-left' : '38px'});
    });
	jQuery(".search-box .form-text").blur(function() {
        jQuery(this).stop().animate({'width' : '38px', 'padding-left' : '0px'});
    });
    jQuery('#edit-workbench-access--2').val(8);
    jQuery('.form-item-workbench-access').css('display', 'none');
});