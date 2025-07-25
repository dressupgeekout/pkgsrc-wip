$NetBSD$

* Part of patchset to build chromium on NetBSD
* Based on OpenBSD's chromium patches, and
  pkgsrc's qt5-qtwebengine patches

--- chrome/browser/ui/webui/app_home/app_home_page_handler.cc.orig	2025-07-21 19:32:31.000000000 +0000
+++ chrome/browser/ui/webui/app_home/app_home_page_handler.cc
@@ -62,7 +62,7 @@
 #include "ui/base/window_open_disposition_utils.h"
 #include "url/gurl.h"
 
-static_assert(BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX));
+static_assert(BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD));
 
 using content::WebUI;
 using extensions::Extension;
