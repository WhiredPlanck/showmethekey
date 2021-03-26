#ifndef __SMTK_KEYS_WIN_H__
#define __SMTK_KEYS_WIN_H__

#include <gtk/gtk.h>

#include "smtk-keys-emitter.h"

G_BEGIN_DECLS

#define SMTK_TYPE_KEYS_WIN smtk_keys_win_get_type()
G_DECLARE_FINAL_TYPE(SmtkKeysWin, smtk_keys_win, SMTK, KEYS_WIN, GtkWindow)

GtkWidget *smtk_keys_win_new(SmtkKeyMode mode, guint64 width, guint64 height,
			     GError **error);

G_END_DECLS

#endif