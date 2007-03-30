/*
 * DO EDIT THIS FILE - it is generated by Glade but fixed by hand to make it usefull.
 * Keep changes to it to a minimum and mark them with : */
	/*-- hand edit begin --*/
   	/*-- hand edit end --*/

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

	/*-- hand edit begin --*/
#include "../configure.h"

#include "../include/afterbase.h"
#include "../libAfterImage/afterimage.h"
#include "../libAfterStep/asapp.h"
#include "../libAfterStep/screen.h"
#include "../libAfterStep/parser.h"
#include "../libAfterStep/freestor.h"
#include "../libAfterConf/afterconf.h"
#include "asgtk.h"
#include "asgtkai.h"
#include "asgtklistviews.h"

#include "asgtklookedit.h"
//#include "mystyle_editor_callbacks.h"
//#include "mystyle_editor_interface.h"
//#include "support.h"

GtkWidget *asgtk_simple_list_new_no_title(){ return asgtk_simple_list_new(NULL);} 

#define gtk_tree_view_new  asgtk_simple_list_new_no_title

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  do {	g_object_set_data_full (G_OBJECT (component), name, \
  		gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref); \
		asgtk_mystyle_editor->widget = widget ; } while(0)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_mystyle_editor_interface (GtkWidget *mystyle_editor /* assumed descendand from vbox */)
{
  /* GtkWidget *mystyle_editor; */
  ASGtkMyStyleEdit *asgtk_mystyle_editor = ASGTK_MYSTYLE_EDIT(mystyle_editor); 

   	/*-- hand edit end --*/
  GtkWidget *vbox;
  GtkWidget *hbox1_mystyle_name;
  GtkWidget *label_mystyle;
  GtkWidget *entry_mystyle_name;
  GtkWidget *hbox2_overlay;
  GtkWidget *tgl2_overlay;
  GtkWidget *label_overlay;
  GtkWidget *combo_overlay_mystyle;
  GtkWidget *hbox3_inherit;
  GtkWidget *tgl3_inherit;
  GtkWidget *label_inherit;
  GtkWidget *sw_inherit_list;
  GtkWidget *tw_inherit_list;
  GtkWidget *btn_inherit_add;
  GtkWidget *image3;
  GtkWidget *btn_inherit_remove;
  GtkWidget *image4;
  GtkWidget *hbox4_font;
  GtkWidget *tgl4_font;
  GtkWidget *label_font;
  GtkWidget *btn_font_name;
  GtkWidget *label_font_size;
  GtkObject *spin_font_size_adj;
  GtkWidget *spin_font_size;
  GtkWidget *hbox5_colors;
  GtkWidget *tgl5_colors;
  GtkWidget *label_colors_fore;
  GtkWidget *img_fore_color;
  GtkWidget *btn_fore_color;
  GtkWidget *label_colors_back;
  GtkWidget *img_back_color;
  GtkWidget *btn_back_color;
  GtkWidget *hbox6_shadow;
  GtkWidget *tgl5_shadow;
  GtkWidget *label_shadow;
  GtkWidget *combo_shadow_type;
  GtkWidget *hbox7_background;
  GtkWidget *tgl7_background;
  GtkWidget *label_background;
  GtkWidget *combo_background_type;
  GtkWidget *hbox8_grad_details;
  GtkWidget *arrow1_grad_details;
  GtkWidget *btn_grad_color1;
  GtkWidget *label_to1;
  GtkWidget *btn_grad_color2;
  GtkWidget *label1_to2;
  GtkWidget *btn_grad_color3;
  GtkWidget *btn_grad_edit;
  GtkWidget *hbox9_texture_file;
  GtkWidget *arrow2_texture_file;
  GtkWidget *label_texture_file;
  GtkWidget *filechooserbtn_texture_file;
  GtkWidget *hbox10_texture_blend_type;
  GtkWidget *arrow3_texture_blend_type;
  GtkWidget *label_texture_blend_type;
  GtkWidget *combo_texture_blend_type;
  GtkWidget *table1_texture_slicing;
  GtkWidget *label1_texture_slicing_x;
  GtkObject *spin_texture_slicing_x_start_adj;
  GtkWidget *spin_texture_slicing_x_start;
  GtkWidget *label_texture_slicing_x2;
  GtkObject *spin_texture_slicing_x_end_adj;
  GtkWidget *spin_texture_slicing_x_end;
  GtkWidget *label_texture_slicing_y;
  GtkObject *spin_texture_slicing_y_start_adj;
  GtkWidget *spin_texture_slicing_y_start;
  GtkWidget *label_texture_slicing_y2;
  GtkObject *spin_texture_slicing_y_end_adj;
  GtkWidget *spin_texture_slicing_y_end;
  GtkWidget *arrow5_texture_slicing;

	/*-- hand edit begin --*/
  /* mystyle_editor = gtk_window_new (GTK_WINDOW_TOPLEVEL); 
  gtk_widget_set_size_request (mystyle_editor, 340, 360);
  gtk_window_set_title (GTK_WINDOW (mystyle_editor), "MyStyle Editor");

  vbox = gtk_vbox_new (FALSE, 1);
  gtk_widget_show (vbox);
  gtk_container_add (GTK_CONTAINER (mystyle_editor), vbox);
  */
	if( asgtk_mystyle_editor == NULL || GTK_VBOX( mystyle_editor ) == NULL ) return NULL ;
  	vbox = mystyle_editor;
   	/*-- hand edit end --*/

  gtk_container_set_border_width (GTK_CONTAINER (vbox), 3);

  hbox1_mystyle_name = gtk_hbox_new (FALSE, 4);
  gtk_widget_show (hbox1_mystyle_name);
  gtk_box_pack_start (GTK_BOX (vbox), hbox1_mystyle_name, FALSE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (hbox1_mystyle_name), 2);

  label_mystyle = gtk_label_new ("MyStyle");
  gtk_widget_show (label_mystyle);
  gtk_box_pack_start (GTK_BOX (hbox1_mystyle_name), label_mystyle, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (label_mystyle), GTK_JUSTIFY_RIGHT);
  gtk_misc_set_padding (GTK_MISC (label_mystyle), 5, 0);

  entry_mystyle_name = gtk_entry_new ();
  gtk_widget_show (entry_mystyle_name);
  gtk_box_pack_start (GTK_BOX (hbox1_mystyle_name), entry_mystyle_name, TRUE, TRUE, 0);
  gtk_entry_set_has_frame (GTK_ENTRY (entry_mystyle_name), FALSE);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry_mystyle_name), 9679);

  hbox2_overlay = gtk_hbox_new (FALSE, 5);
  gtk_widget_show (hbox2_overlay);
  gtk_box_pack_start (GTK_BOX (vbox), hbox2_overlay, FALSE, TRUE, 0);

  tgl2_overlay = gtk_toggle_button_new_with_mnemonic ("[-]");
  gtk_widget_show (tgl2_overlay);
  gtk_box_pack_start (GTK_BOX (hbox2_overlay), tgl2_overlay, FALSE, FALSE, 0);
  gtk_button_set_relief (GTK_BUTTON (tgl2_overlay), GTK_RELIEF_HALF);

  label_overlay = gtk_label_new ("overlayed by");
  gtk_widget_show (label_overlay);
  gtk_box_pack_start (GTK_BOX (hbox2_overlay), label_overlay, FALSE, FALSE, 0);

  combo_overlay_mystyle = gtk_combo_box_new_text ();
  gtk_widget_show (combo_overlay_mystyle);
  gtk_box_pack_start (GTK_BOX (hbox2_overlay), combo_overlay_mystyle, TRUE, TRUE, 0);

  hbox3_inherit = gtk_hbox_new (FALSE, 5);
  gtk_widget_show (hbox3_inherit);
  gtk_box_pack_start (GTK_BOX (vbox), hbox3_inherit, FALSE, TRUE, 0);

  tgl3_inherit = gtk_toggle_button_new_with_mnemonic ("[-]");
  gtk_widget_show (tgl3_inherit);
  gtk_box_pack_start (GTK_BOX (hbox3_inherit), tgl3_inherit, FALSE, FALSE, 0);
  gtk_button_set_relief (GTK_BUTTON (tgl3_inherit), GTK_RELIEF_HALF);

  label_inherit = gtk_label_new ("Inherits ");
  gtk_widget_show (label_inherit);
  gtk_box_pack_start (GTK_BOX (hbox3_inherit), label_inherit, FALSE, FALSE, 0);

  sw_inherit_list = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (sw_inherit_list);
  gtk_box_pack_start (GTK_BOX (hbox3_inherit), sw_inherit_list, TRUE, FALSE, 0);
  gtk_widget_set_size_request (sw_inherit_list, 191, 26);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (sw_inherit_list), GTK_POLICY_NEVER, GTK_POLICY_AUTOMATIC);
  gtk_scrolled_window_set_shadow_type (GTK_SCROLLED_WINDOW (sw_inherit_list), GTK_SHADOW_IN);

  tw_inherit_list = gtk_tree_view_new ();
  gtk_widget_show (tw_inherit_list);
  gtk_container_add (GTK_CONTAINER (sw_inherit_list), tw_inherit_list);
  gtk_tree_view_set_headers_visible (GTK_TREE_VIEW (tw_inherit_list), FALSE);

  btn_inherit_add = gtk_button_new ();
  gtk_widget_show (btn_inherit_add);
  gtk_box_pack_start (GTK_BOX (hbox3_inherit), btn_inherit_add, FALSE, FALSE, 0);
  gtk_widget_set_size_request (btn_inherit_add, 24, -1);
  gtk_button_set_relief (GTK_BUTTON (btn_inherit_add), GTK_RELIEF_HALF);

  image3 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_container_add (GTK_CONTAINER (btn_inherit_add), image3);

  btn_inherit_remove = gtk_button_new ();
  gtk_widget_show (btn_inherit_remove);
  gtk_box_pack_start (GTK_BOX (hbox3_inherit), btn_inherit_remove, FALSE, FALSE, 0);
  gtk_widget_set_size_request (btn_inherit_remove, 24, -1);
  gtk_button_set_relief (GTK_BUTTON (btn_inherit_remove), GTK_RELIEF_HALF);

  image4 = gtk_image_new_from_stock ("gtk-remove", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_container_add (GTK_CONTAINER (btn_inherit_remove), image4);

  hbox4_font = gtk_hbox_new (FALSE, 5);
  gtk_widget_show (hbox4_font);
  gtk_box_pack_start (GTK_BOX (vbox), hbox4_font, FALSE, TRUE, 0);

  tgl4_font = gtk_toggle_button_new_with_mnemonic ("[-]");
  gtk_widget_show (tgl4_font);
  gtk_box_pack_start (GTK_BOX (hbox4_font), tgl4_font, FALSE, FALSE, 0);
  gtk_button_set_relief (GTK_BUTTON (tgl4_font), GTK_RELIEF_HALF);

  label_font = gtk_label_new ("it uses font ");
  gtk_widget_show (label_font);
  gtk_box_pack_start (GTK_BOX (hbox4_font), label_font, FALSE, FALSE, 0);

  btn_font_name = gtk_button_new_with_mnemonic ("Font Name");
  gtk_widget_show (btn_font_name);
  gtk_box_pack_start (GTK_BOX (hbox4_font), btn_font_name, FALSE, TRUE, 0);
  gtk_widget_set_size_request (btn_font_name, 150, -1);

  label_font_size = gtk_label_new ("of size");
  gtk_widget_show (label_font_size);
  gtk_box_pack_start (GTK_BOX (hbox4_font), label_font_size, FALSE, FALSE, 0);

  spin_font_size_adj = gtk_adjustment_new (14, 0, 150, 1, 10, 10);
  spin_font_size = gtk_spin_button_new (GTK_ADJUSTMENT (spin_font_size_adj), 1, 0);
  gtk_widget_show (spin_font_size);
  gtk_box_pack_start (GTK_BOX (hbox4_font), spin_font_size, FALSE, TRUE, 0);

  hbox5_colors = gtk_hbox_new (FALSE, 5);
  gtk_widget_show (hbox5_colors);
  gtk_box_pack_start (GTK_BOX (vbox), hbox5_colors, FALSE, TRUE, 0);

  tgl5_colors = gtk_toggle_button_new_with_mnemonic ("[-]");
  gtk_widget_show (tgl5_colors);
  gtk_box_pack_start (GTK_BOX (hbox5_colors), tgl5_colors, FALSE, FALSE, 0);
  gtk_button_set_relief (GTK_BUTTON (tgl5_colors), GTK_RELIEF_HALF);

  label_colors_fore = gtk_label_new ("and colors");
  gtk_widget_show (label_colors_fore);
  gtk_box_pack_start (GTK_BOX (hbox5_colors), label_colors_fore, FALSE, FALSE, 0);

  img_fore_color = gtk_image_new ();
  gtk_widget_show (img_fore_color);
  gtk_box_pack_start (GTK_BOX (hbox5_colors), img_fore_color, FALSE, FALSE, 0);
  gtk_widget_set_size_request (img_fore_color, 16, 16);

  btn_fore_color = gtk_button_new_with_mnemonic ("fore color");
  gtk_widget_show (btn_fore_color);
  gtk_box_pack_start (GTK_BOX (hbox5_colors), btn_fore_color, FALSE, TRUE, 0);
  gtk_widget_set_size_request (btn_fore_color, 90, -1);
  gtk_button_set_relief (GTK_BUTTON (btn_fore_color), GTK_RELIEF_HALF);
  
  label_colors_back = gtk_label_new ("over");
  gtk_widget_show (label_colors_back);
  gtk_box_pack_start (GTK_BOX (hbox5_colors), label_colors_back, FALSE, FALSE, 0);

  img_back_color = gtk_image_new ();
  gtk_widget_show (img_back_color);
  gtk_box_pack_start (GTK_BOX (hbox5_colors), img_back_color, FALSE, FALSE, 0);
  gtk_widget_set_size_request (img_back_color, 16, 16);

  btn_back_color = gtk_button_new_with_mnemonic ("back color");
  gtk_widget_show (btn_back_color);
  gtk_box_pack_start (GTK_BOX (hbox5_colors), btn_back_color, FALSE, TRUE, 0);
  gtk_widget_set_size_request (btn_back_color, 90, -1);
  gtk_button_set_relief (GTK_BUTTON (btn_back_color), GTK_RELIEF_HALF);

  hbox6_shadow = gtk_hbox_new (FALSE, 5);
  gtk_widget_show (hbox6_shadow);
  gtk_box_pack_start (GTK_BOX (vbox), hbox6_shadow, FALSE, TRUE, 0);

  tgl5_shadow = gtk_toggle_button_new_with_mnemonic ("[-]");
  gtk_widget_show (tgl5_shadow);
  gtk_box_pack_start (GTK_BOX (hbox6_shadow), tgl5_shadow, FALSE, FALSE, 0);
  gtk_button_set_relief (GTK_BUTTON (tgl5_shadow), GTK_RELIEF_HALF);

  label_shadow = gtk_label_new ("using shadow type");
  gtk_widget_show (label_shadow);
  gtk_box_pack_start (GTK_BOX (hbox6_shadow), label_shadow, FALSE, FALSE, 0);

  combo_shadow_type = gtk_combo_box_new_text ();
  gtk_widget_show (combo_shadow_type);
  gtk_box_pack_start (GTK_BOX (hbox6_shadow), combo_shadow_type, TRUE, TRUE, 0);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_shadow_type), "Normal text");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_shadow_type), "Embossed 3D text");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_shadow_type), "Sunken 3D text");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_shadow_type), "Shade above the text");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_shadow_type), "Shade below the text");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_shadow_type), "Thick embossed 3D text");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_shadow_type), "Thick sunken 3D text");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_shadow_type), "Outlined upper edge");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_shadow_type), "Outlined bottom edge");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_shadow_type), "Outlined all around");

  hbox7_background = gtk_hbox_new (FALSE, 5);
  gtk_widget_show (hbox7_background);
  gtk_box_pack_start (GTK_BOX (vbox), hbox7_background, FALSE, TRUE, 0);

  tgl7_background = gtk_toggle_button_new_with_mnemonic ("[-]");
  gtk_widget_show (tgl7_background);
  gtk_box_pack_start (GTK_BOX (hbox7_background), tgl7_background, FALSE, FALSE, 0);
  gtk_button_set_relief (GTK_BUTTON (tgl7_background), GTK_RELIEF_HALF);

  label_background = gtk_label_new ("over");
  gtk_widget_show (label_background);
  gtk_box_pack_start (GTK_BOX (hbox7_background), label_background, FALSE, FALSE, 0);

  combo_background_type = gtk_combo_box_new_text ();
  gtk_widget_show (combo_background_type);
  gtk_box_pack_start (GTK_BOX (hbox7_background), combo_background_type, TRUE, TRUE, 0);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_background_type), "Solid color background");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_background_type), "Horizontal gradient");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_background_type), "Vertical gradient");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_background_type), "Left-top to right-bottom gradient");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_background_type), "Right-top to left-bottom gradient");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_background_type), "Scaled texture");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_background_type), "Tiled texture");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_background_type), "Tinted desktop background");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_background_type), "Scaled shaped texture");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_background_type), "Sliced shaped texture");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_background_type), "Tiled shaped texture");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_background_type), "Two-way Tinted desktop background");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_background_type), "Tiled pseudo-transp. texture");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_background_type), "Scaled pseudo-transp. texture");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_background_type), "Sliced pseudo-transp. texture");

  hbox8_grad_details = gtk_hbox_new (FALSE, 5);
  gtk_widget_show (hbox8_grad_details);
  gtk_box_pack_start (GTK_BOX (vbox), hbox8_grad_details, FALSE, TRUE, 0);

  arrow1_grad_details = gtk_arrow_new (GTK_ARROW_RIGHT, GTK_SHADOW_OUT);
  gtk_widget_show (arrow1_grad_details);
  gtk_box_pack_start (GTK_BOX (hbox8_grad_details), arrow1_grad_details, FALSE, TRUE, 0);

  btn_grad_color1 = gtk_button_new_with_mnemonic ("color1");
  gtk_widget_show (btn_grad_color1);
  gtk_box_pack_start (GTK_BOX (hbox8_grad_details), btn_grad_color1, FALSE, FALSE, 0);
  gtk_button_set_relief (GTK_BUTTON (btn_grad_color1), GTK_RELIEF_HALF);

  label_to1 = gtk_label_new ("to");
  gtk_widget_show (label_to1);
  gtk_box_pack_start (GTK_BOX (hbox8_grad_details), label_to1, FALSE, FALSE, 0);

  btn_grad_color2 = gtk_button_new_with_mnemonic ("color2");
  gtk_widget_show (btn_grad_color2);
  gtk_box_pack_start (GTK_BOX (hbox8_grad_details), btn_grad_color2, FALSE, FALSE, 0);
  gtk_button_set_relief (GTK_BUTTON (btn_grad_color2), GTK_RELIEF_HALF);

  label1_to2 = gtk_label_new ("to");
  gtk_widget_show (label1_to2);
  gtk_box_pack_start (GTK_BOX (hbox8_grad_details), label1_to2, FALSE, FALSE, 0);

  btn_grad_color3 = gtk_button_new_with_mnemonic ("color3");
  gtk_widget_show (btn_grad_color3);
  gtk_box_pack_start (GTK_BOX (hbox8_grad_details), btn_grad_color3, FALSE, FALSE, 0);
  gtk_button_set_relief (GTK_BUTTON (btn_grad_color3), GTK_RELIEF_HALF);

  btn_grad_edit = gtk_button_new_with_mnemonic ("Edit");
  gtk_widget_show (btn_grad_edit);
  gtk_box_pack_start (GTK_BOX (hbox8_grad_details), btn_grad_edit, FALSE, FALSE, 0);

  hbox9_texture_file = gtk_hbox_new (FALSE, 5);
  gtk_widget_show (hbox9_texture_file);
  gtk_box_pack_start (GTK_BOX (vbox), hbox9_texture_file, FALSE, TRUE, 0);

  arrow2_texture_file = gtk_arrow_new (GTK_ARROW_RIGHT, GTK_SHADOW_OUT);
  gtk_widget_show (arrow2_texture_file);
  gtk_box_pack_start (GTK_BOX (hbox9_texture_file), arrow2_texture_file, FALSE, FALSE, 0);

  label_texture_file = gtk_label_new ("from file :");
  gtk_widget_show (label_texture_file);
  gtk_box_pack_start (GTK_BOX (hbox9_texture_file), label_texture_file, FALSE, FALSE, 0);

  filechooserbtn_texture_file = gtk_file_chooser_button_new ("", GTK_FILE_CHOOSER_ACTION_OPEN);
  gtk_widget_show (filechooserbtn_texture_file);
  gtk_box_pack_start (GTK_BOX (hbox9_texture_file), filechooserbtn_texture_file, TRUE, TRUE, 0);

  hbox10_texture_blend_type = gtk_hbox_new (FALSE, 5);
  gtk_widget_show (hbox10_texture_blend_type);
  gtk_box_pack_start (GTK_BOX (vbox), hbox10_texture_blend_type, FALSE, TRUE, 0);

  arrow3_texture_blend_type = gtk_arrow_new (GTK_ARROW_RIGHT, GTK_SHADOW_OUT);
  gtk_widget_show (arrow3_texture_blend_type);
  gtk_box_pack_start (GTK_BOX (hbox10_texture_blend_type), arrow3_texture_blend_type, FALSE, TRUE, 0);

  label_texture_blend_type = gtk_label_new ("blending type :");
  gtk_widget_show (label_texture_blend_type);
  gtk_box_pack_start (GTK_BOX (hbox10_texture_blend_type), label_texture_blend_type, FALSE, FALSE, 0);

  combo_texture_blend_type = gtk_combo_box_new_text ();
  gtk_widget_show (combo_texture_blend_type);
  gtk_box_pack_start (GTK_BOX (hbox10_texture_blend_type), combo_texture_blend_type, TRUE, TRUE, 0);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_texture_blend_type), "average color values");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_texture_blend_type), "alpha-blending");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_texture_blend_type), "tint");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_texture_blend_type), "color add");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_texture_blend_type), "color substruct");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_texture_blend_type), "color difference");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_texture_blend_type), "lowest color value");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_texture_blend_type), "highest color value");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_texture_blend_type), "screen");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_texture_blend_type), "overlay");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_texture_blend_type), "same hue");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_texture_blend_type), "saturation");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_texture_blend_type), "value");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_texture_blend_type), "colorize");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combo_texture_blend_type), "dissipate");

  table1_texture_slicing = gtk_table_new (2, 5, FALSE);
  gtk_widget_show (table1_texture_slicing);
  gtk_box_pack_start (GTK_BOX (vbox), table1_texture_slicing, FALSE, TRUE, 0);
  gtk_table_set_col_spacings (GTK_TABLE (table1_texture_slicing), 5);

  label1_texture_slicing_x = gtk_label_new ("scaled horiz. between");
  gtk_widget_show (label1_texture_slicing_x);
  gtk_table_attach (GTK_TABLE (table1_texture_slicing), label1_texture_slicing_x, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  spin_texture_slicing_x_start_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  spin_texture_slicing_x_start = gtk_spin_button_new (GTK_ADJUSTMENT (spin_texture_slicing_x_start_adj), 1, 0);
  gtk_widget_show (spin_texture_slicing_x_start);
  gtk_table_attach (GTK_TABLE (table1_texture_slicing), spin_texture_slicing_x_start, 2, 3, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  label_texture_slicing_x2 = gtk_label_new ("and");
  gtk_widget_show (label_texture_slicing_x2);
  gtk_table_attach (GTK_TABLE (table1_texture_slicing), label_texture_slicing_x2, 3, 4, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label_texture_slicing_x2), 0.51, 0.5);

  spin_texture_slicing_x_end_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  spin_texture_slicing_x_end = gtk_spin_button_new (GTK_ADJUSTMENT (spin_texture_slicing_x_end_adj), 1, 0);
  gtk_widget_show (spin_texture_slicing_x_end);
  gtk_table_attach (GTK_TABLE (table1_texture_slicing), spin_texture_slicing_x_end, 4, 5, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  label_texture_slicing_y = gtk_label_new ("scaled vert. between");
  gtk_widget_show (label_texture_slicing_y);
  gtk_table_attach (GTK_TABLE (table1_texture_slicing), label_texture_slicing_y, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label_texture_slicing_y), 1, 0.5);

  spin_texture_slicing_y_start_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  spin_texture_slicing_y_start = gtk_spin_button_new (GTK_ADJUSTMENT (spin_texture_slicing_y_start_adj), 1, 0);
  gtk_widget_show (spin_texture_slicing_y_start);
  gtk_table_attach (GTK_TABLE (table1_texture_slicing), spin_texture_slicing_y_start, 2, 3, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  label_texture_slicing_y2 = gtk_label_new ("and");
  gtk_widget_show (label_texture_slicing_y2);
  gtk_table_attach (GTK_TABLE (table1_texture_slicing), label_texture_slicing_y2, 3, 4, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  spin_texture_slicing_y_end_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  spin_texture_slicing_y_end = gtk_spin_button_new (GTK_ADJUSTMENT (spin_texture_slicing_y_end_adj), 1, 0);
  gtk_widget_show (spin_texture_slicing_y_end);
  gtk_table_attach (GTK_TABLE (table1_texture_slicing), spin_texture_slicing_y_end, 4, 5, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  arrow5_texture_slicing = gtk_arrow_new (GTK_ARROW_RIGHT, GTK_SHADOW_OUT);
  gtk_widget_show (arrow5_texture_slicing);
  gtk_table_attach (GTK_TABLE (table1_texture_slicing), arrow5_texture_slicing, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (mystyle_editor, mystyle_editor, "mystyle_editor");
   	/*-- hand edit start --*/
  /* GLADE_HOOKUP_OBJECT (mystyle_editor, vbox, "vbox"); */
   	/*-- hand edit end --*/
  GLADE_HOOKUP_OBJECT (mystyle_editor, hbox1_mystyle_name, "hbox1_mystyle_name");
  GLADE_HOOKUP_OBJECT (mystyle_editor, label_mystyle, "label_mystyle");
  GLADE_HOOKUP_OBJECT (mystyle_editor, entry_mystyle_name, "entry_mystyle_name");
  GLADE_HOOKUP_OBJECT (mystyle_editor, hbox2_overlay, "hbox2_overlay");
  GLADE_HOOKUP_OBJECT (mystyle_editor, tgl2_overlay, "tgl2_overlay");
  GLADE_HOOKUP_OBJECT (mystyle_editor, label_overlay, "label_overlay");
  GLADE_HOOKUP_OBJECT (mystyle_editor, combo_overlay_mystyle, "combo_overlay_mystyle");
  GLADE_HOOKUP_OBJECT (mystyle_editor, hbox3_inherit, "hbox3_inherit");
  GLADE_HOOKUP_OBJECT (mystyle_editor, tgl3_inherit, "tgl3_inherit");
  GLADE_HOOKUP_OBJECT (mystyle_editor, label_inherit, "label_inherit");
  GLADE_HOOKUP_OBJECT (mystyle_editor, sw_inherit_list, "sw_inherit_list");
  GLADE_HOOKUP_OBJECT (mystyle_editor, tw_inherit_list, "tw_inherit_list");
  GLADE_HOOKUP_OBJECT (mystyle_editor, btn_inherit_add, "btn_inherit_add");
  GLADE_HOOKUP_OBJECT (mystyle_editor, image3, "image3");
  GLADE_HOOKUP_OBJECT (mystyle_editor, btn_inherit_remove, "btn_inherit_remove");
  GLADE_HOOKUP_OBJECT (mystyle_editor, image4, "image4");
  GLADE_HOOKUP_OBJECT (mystyle_editor, hbox4_font, "hbox4_font");
  GLADE_HOOKUP_OBJECT (mystyle_editor, tgl4_font, "tgl4_font");
  GLADE_HOOKUP_OBJECT (mystyle_editor, label_font, "label_font");
  GLADE_HOOKUP_OBJECT (mystyle_editor, btn_font_name, "btn_font_name");
  GLADE_HOOKUP_OBJECT (mystyle_editor, label_font_size, "label_font_size");
  GLADE_HOOKUP_OBJECT (mystyle_editor, spin_font_size, "spin_font_size");
  GLADE_HOOKUP_OBJECT (mystyle_editor, hbox5_colors, "hbox5_colors");
  GLADE_HOOKUP_OBJECT (mystyle_editor, tgl5_colors, "tgl5_colors");
  GLADE_HOOKUP_OBJECT (mystyle_editor, label_colors_fore, "label_colors_fore");
  GLADE_HOOKUP_OBJECT (mystyle_editor, img_fore_color, "img_fore_color");
  GLADE_HOOKUP_OBJECT (mystyle_editor, btn_fore_color, "btn_fore_color");
  GLADE_HOOKUP_OBJECT (mystyle_editor, label_colors_back, "label_colors_back");
  GLADE_HOOKUP_OBJECT (mystyle_editor, img_back_color, "img_back_color");
  GLADE_HOOKUP_OBJECT (mystyle_editor, btn_back_color, "btn_back_color");
  GLADE_HOOKUP_OBJECT (mystyle_editor, hbox6_shadow, "hbox6_shadow");
  GLADE_HOOKUP_OBJECT (mystyle_editor, tgl5_shadow, "tgl5_shadow");
  GLADE_HOOKUP_OBJECT (mystyle_editor, label_shadow, "label_shadow");
  GLADE_HOOKUP_OBJECT (mystyle_editor, combo_shadow_type, "combo_shadow_type");
  GLADE_HOOKUP_OBJECT (mystyle_editor, hbox7_background, "hbox7_background");
  GLADE_HOOKUP_OBJECT (mystyle_editor, tgl7_background, "tgl7_background");
  GLADE_HOOKUP_OBJECT (mystyle_editor, label_background, "label_background");
  GLADE_HOOKUP_OBJECT (mystyle_editor, combo_background_type, "combo_background_type");
  GLADE_HOOKUP_OBJECT (mystyle_editor, hbox8_grad_details, "hbox8_grad_details");
  GLADE_HOOKUP_OBJECT (mystyle_editor, arrow1_grad_details, "arrow1_grad_details");
  GLADE_HOOKUP_OBJECT (mystyle_editor, btn_grad_color1, "btn_grad_color1");
  GLADE_HOOKUP_OBJECT (mystyle_editor, label_to1, "label_to1");
  GLADE_HOOKUP_OBJECT (mystyle_editor, btn_grad_color2, "btn_grad_color2");
  GLADE_HOOKUP_OBJECT (mystyle_editor, label1_to2, "label1_to2");
  GLADE_HOOKUP_OBJECT (mystyle_editor, btn_grad_color3, "btn_grad_color3");
  GLADE_HOOKUP_OBJECT (mystyle_editor, btn_grad_edit, "btn_grad_edit");
  GLADE_HOOKUP_OBJECT (mystyle_editor, hbox9_texture_file, "hbox9_texture_file");
  GLADE_HOOKUP_OBJECT (mystyle_editor, arrow2_texture_file, "arrow2_texture_file");
  GLADE_HOOKUP_OBJECT (mystyle_editor, label_texture_file, "label_texture_file");
  GLADE_HOOKUP_OBJECT (mystyle_editor, filechooserbtn_texture_file, "filechooserbtn_texture_file");
  GLADE_HOOKUP_OBJECT (mystyle_editor, hbox10_texture_blend_type, "hbox10_texture_blend_type");
  GLADE_HOOKUP_OBJECT (mystyle_editor, arrow3_texture_blend_type, "arrow3_texture_blend_type");
  GLADE_HOOKUP_OBJECT (mystyle_editor, label_texture_blend_type, "label_texture_blend_type");
  GLADE_HOOKUP_OBJECT (mystyle_editor, combo_texture_blend_type, "combo_texture_blend_type");
  GLADE_HOOKUP_OBJECT (mystyle_editor, table1_texture_slicing, "table1_texture_slicing");
  GLADE_HOOKUP_OBJECT (mystyle_editor, label1_texture_slicing_x, "label1_texture_slicing_x");
  GLADE_HOOKUP_OBJECT (mystyle_editor, spin_texture_slicing_x_start, "spin_texture_slicing_x_start");
  GLADE_HOOKUP_OBJECT (mystyle_editor, label_texture_slicing_x2, "label_texture_slicing_x2");
  GLADE_HOOKUP_OBJECT (mystyle_editor, spin_texture_slicing_x_end, "spin_texture_slicing_x_end");
  GLADE_HOOKUP_OBJECT (mystyle_editor, label_texture_slicing_y, "label_texture_slicing_y");
  GLADE_HOOKUP_OBJECT (mystyle_editor, spin_texture_slicing_y_start, "spin_texture_slicing_y_start");
  GLADE_HOOKUP_OBJECT (mystyle_editor, label_texture_slicing_y2, "label_texture_slicing_y2");
  GLADE_HOOKUP_OBJECT (mystyle_editor, spin_texture_slicing_y_end, "spin_texture_slicing_y_end");
  GLADE_HOOKUP_OBJECT (mystyle_editor, arrow5_texture_slicing, "arrow5_texture_slicing");

  return mystyle_editor;
}
