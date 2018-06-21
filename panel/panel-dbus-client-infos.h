/* Generated by dbus-binding-tool; do not edit! */

#include <glib.h>
#include <dbus/dbus-glib.h>

G_BEGIN_DECLS

#ifndef _DBUS_GLIB_ASYNC_DATA_FREE
#define _DBUS_GLIB_ASYNC_DATA_FREE
static inline void
_dbus_glib_async_data_free (gpointer stuff)
{
	g_slice_free (DBusGAsyncData, stuff);
}
#endif

#ifndef DBUS_GLIB_CLIENT_WRAPPERS_org_xfce_Panel
#define DBUS_GLIB_CLIENT_WRAPPERS_org_xfce_Panel

static inline gboolean
_panel_dbus_client_display_preferences_dialog (DBusGProxy *proxy, const guint IN_active, const char * IN_socket_id, GError **error)

{
  return dbus_g_proxy_call (proxy, "DisplayPreferencesDialog", error, G_TYPE_UINT, IN_active, G_TYPE_STRING, IN_socket_id, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*_panel_dbus_client_display_preferences_dialog_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
_panel_dbus_client_display_preferences_dialog_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(_panel_dbus_client_display_preferences_dialog_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static inline DBusGProxyCall*
_panel_dbus_client_display_preferences_dialog_async (DBusGProxy *proxy, const guint IN_active, const char * IN_socket_id, _panel_dbus_client_display_preferences_dialog_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "DisplayPreferencesDialog", _panel_dbus_client_display_preferences_dialog_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_UINT, IN_active, G_TYPE_STRING, IN_socket_id, G_TYPE_INVALID);
}
static inline gboolean
_panel_dbus_client_display_items_dialog (DBusGProxy *proxy, const guint IN_active, GError **error)

{
  return dbus_g_proxy_call (proxy, "DisplayItemsDialog", error, G_TYPE_UINT, IN_active, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*_panel_dbus_client_display_items_dialog_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
_panel_dbus_client_display_items_dialog_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(_panel_dbus_client_display_items_dialog_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static inline DBusGProxyCall*
_panel_dbus_client_display_items_dialog_async (DBusGProxy *proxy, const guint IN_active, _panel_dbus_client_display_items_dialog_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "DisplayItemsDialog", _panel_dbus_client_display_items_dialog_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_UINT, IN_active, G_TYPE_INVALID);
}
static inline gboolean
_panel_dbus_client_save (DBusGProxy *proxy, GError **error)

{
  return dbus_g_proxy_call (proxy, "Save", error, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*_panel_dbus_client_save_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
_panel_dbus_client_save_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(_panel_dbus_client_save_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static inline DBusGProxyCall*
_panel_dbus_client_save_async (DBusGProxy *proxy, _panel_dbus_client_save_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "Save", _panel_dbus_client_save_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
static inline gboolean
_panel_dbus_client_add_new_item (DBusGProxy *proxy, const char * IN_plugin_name, const char ** IN_arguments, GError **error)

{
  return dbus_g_proxy_call (proxy, "AddNewItem", error, G_TYPE_STRING, IN_plugin_name, G_TYPE_STRV, IN_arguments, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*_panel_dbus_client_add_new_item_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
_panel_dbus_client_add_new_item_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(_panel_dbus_client_add_new_item_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static inline DBusGProxyCall*
_panel_dbus_client_add_new_item_async (DBusGProxy *proxy, const char * IN_plugin_name, const char ** IN_arguments, _panel_dbus_client_add_new_item_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "AddNewItem", _panel_dbus_client_add_new_item_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_plugin_name, G_TYPE_STRV, IN_arguments, G_TYPE_INVALID);
}
static inline gboolean
_panel_dbus_client_plugin_event (DBusGProxy *proxy, const char * IN_plugin_name, const char * IN_name, const GValue* IN_value, gboolean* OUT_succeed, GError **error)

{
  return dbus_g_proxy_call (proxy, "PluginEvent", error, G_TYPE_STRING, IN_plugin_name, G_TYPE_STRING, IN_name, G_TYPE_VALUE, IN_value, G_TYPE_INVALID, G_TYPE_BOOLEAN, OUT_succeed, G_TYPE_INVALID);
}

typedef void (*_panel_dbus_client_plugin_event_reply) (DBusGProxy *proxy, gboolean OUT_succeed, GError *error, gpointer userdata);

static void
_panel_dbus_client_plugin_event_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  gboolean OUT_succeed;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_BOOLEAN, &OUT_succeed, G_TYPE_INVALID);
  (*(_panel_dbus_client_plugin_event_reply)data->cb) (proxy, OUT_succeed, error, data->userdata);
  return;
}

static inline DBusGProxyCall*
_panel_dbus_client_plugin_event_async (DBusGProxy *proxy, const char * IN_plugin_name, const char * IN_name, const GValue* IN_value, _panel_dbus_client_plugin_event_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "PluginEvent", _panel_dbus_client_plugin_event_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_plugin_name, G_TYPE_STRING, IN_name, G_TYPE_VALUE, IN_value, G_TYPE_INVALID);
}
static inline gboolean
_panel_dbus_client_terminate (DBusGProxy *proxy, const gboolean IN_restart, GError **error)

{
  return dbus_g_proxy_call (proxy, "Terminate", error, G_TYPE_BOOLEAN, IN_restart, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*_panel_dbus_client_terminate_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
_panel_dbus_client_terminate_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(_panel_dbus_client_terminate_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static inline DBusGProxyCall*
_panel_dbus_client_terminate_async (DBusGProxy *proxy, const gboolean IN_restart, _panel_dbus_client_terminate_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "Terminate", _panel_dbus_client_terminate_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_BOOLEAN, IN_restart, G_TYPE_INVALID);
}
#endif /* defined DBUS_GLIB_CLIENT_WRAPPERS_org_xfce_Panel */

G_END_DECLS