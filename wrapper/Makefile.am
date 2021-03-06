
AM_CPPFLAGS = \
	-I$(top_srcdir) \
	-DG_LOG_DOMAIN=\"xfce4-panel-wrapper\" \
	-DPACKAGE_LOCALE_DIR=\"$(localedir)\" \
	$(PLATFORM_CPPFLAGS)

wrapperdir = $(HELPER_PATH_PREFIX)/xfce4/panel

wrapper_PROGRAMS = \
	wrapper-1.0

wrapper_built_sources = \
	wrapper-dbus-client-infos.h

wrapper_1_0_SOURCES = \
	$(wrapper_built_sources) \
	main.c \
	wrapper-module.c \
	wrapper-module.h \
	wrapper-plug.c \
	wrapper-plug.h

wrapper_1_0_CFLAGS = \
	$(GTK_CFLAGS) \
	$(DBUS_CFLAGS) \
	$(GMODULE_CFLAGS) \
	$(LIBXFCE4UTIL_CFLAGS) \
	$(PLATFORM_CFLAGS)

wrapper_1_0_LDFLAGS = \
	-no-undefined \
	$(PLATFORM_LDFLAGS)

wrapper_1_0_LDADD = \
	$(top_builddir)/libxfce4panel/libxfce4panel-$(LIBXFCE4PANEL_VERSION_API).la \
	$(GTK_LIBS) \
	$(DBUS_LIBS) \
	$(GMODULE_LIBS) \
	$(LIBXFCE4UTIL_LIBS)

wrapper_1_0_DEPENDENCIES = \
	$(top_builddir)/libxfce4panel/libxfce4panel-$(LIBXFCE4PANEL_VERSION_API).la

#
# Gtk+ 3 support library
#
if ENABLE_GTK3_LIBRARY

wrapper_PROGRAMS += wrapper-2.0

wrapper_2_0_SOURCES = \
	$(wrapper_built_sources) \
	main.c \
	wrapper-module.c \
	wrapper-module.h \
	wrapper-plug.c \
	wrapper-plug.h

wrapper_2_0_CFLAGS = \
	$(GTK3_CFLAGS) \
	$(DBUS_CFLAGS) \
	$(GMODULE_CFLAGS) \
	$(LIBXFCE4UTIL_CFLAGS) \
	$(PLATFORM_CFLAGS)

wrapper_2_0_LDFLAGS = \
	-no-undefined \
	$(PLATFORM_LDFLAGS)

wrapper_2_0_LDADD = \
	$(top_builddir)/libxfce4panel/libxfce4panel-2.0.la \
	$(GTK3_LIBS) \
	$(DBUS_LIBS) \
	$(GMODULE_LIBS) \
	$(LIBXFCE4UTIL_LIBS)

wrapper_2_0_DEPENDENCIES = \
	$(top_builddir)/libxfce4panel/libxfce4panel-2.0.la

endif

if MAINTAINER_MODE

wrapper-dbus-client-infos.h: $(top_builddir)/panel/panel-plugin-external-wrapper-infos.xml Makefile
	$(AM_V_GEN) dbus-binding-tool --mode=glib-client $< > $@

#wrapper-marshal.h: $(top_builddir)/panel/panel-marshal.list Makefile
#	$(AM_V_GEN)glib-genmarshal --header --prefix=wrapper_marshal $< > $@
#
#wrapper-marshal.c: $(top_builddir)/panel/panel-marshal.list Makefile
#	$(AM_V_GEN) echo "#include <wrapper/wrapper-marshal.h>" > $@ \
#	&& glib-genmarshal --body --prefix=wrapper_marshal $< >> $@

BUILT_SOURCES = \
	$(wrapper_built_sources)

DISTCLEANFILES = \
	$(wrapper_built_sources)

endif

# vi:set ts=8 sw=8 noet ai nocindent syntax=automake:
