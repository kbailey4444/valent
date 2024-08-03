// SPDX-License-Identifier: GPL-3.0-or-later
// SPDX-FileCopyrightText: Andy Holmes <andrew.g.r.holmes@gmail.com>

#include "config.h"

#include <gio/gio.h>
#include <gtk/gtk.h>
#include <libpeas.h>
#include <valent.h>

#include "valent-mutter-clipboard.h"
#include "valent-mutter-input.h"
#include "valent-ui-manager.h"


_VALENT_EXTERN void
valent_gnome_plugin_register_types (PeasObjectModule *module)
{
  peas_object_module_register_extension_type (module,
                                              VALENT_TYPE_CLIPBOARD_ADAPTER,
                                              VALENT_TYPE_MUTTER_CLIPBOARD);
  peas_object_module_register_extension_type (module,
                                              VALENT_TYPE_INPUT_ADAPTER,
                                              VALENT_TYPE_MUTTER_INPUT);
  if (gtk_is_initialized ())
    {
      peas_object_module_register_extension_type (module,
                                                  VALENT_TYPE_APPLICATION_PLUGIN,
                                                  VALENT_TYPE_UI_MANAGER);
    }
}
