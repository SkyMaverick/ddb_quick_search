#ifndef __GTKUI_SUPPORT_H
#define __GTKUI_SUPPORT_H

#include <gtk/gtk.h>

#if !GTK_CHECK_VERSION(2,24,0)
#define GTK_COMBO_BOX_TEXT GTK_COMBO_BOX
typedef GtkComboBox GtkComboBoxText;
GtkWidget *gtk_combo_box_text_new ();
GtkWidget *gtk_combo_box_text_new_with_entry   (void);
void gtk_combo_box_text_append_text (GtkComboBoxText *combo_box, const gchar *text);
void gtk_combo_box_text_insert_text (GtkComboBoxText *combo_box, gint position, const gchar *text);
void gtk_combo_box_text_prepend_text (GtkComboBoxText *combo_box, const gchar *text);
gchar *gtk_combo_box_text_get_active_text  (GtkComboBoxText *combo_box);
#endif

#endif
