--- src/console/screenio.cpp.orig	2021-08-06 23:04:06.192412495 -0700
+++ src/console/screenio.cpp	2021-08-06 23:04:20.594244294 -0700
@@ -26,7 +26,7 @@
 //
 //----------------------------------------------------------------------------
 
-#if defined( OS_LINUX ) || defined( OS_MACOSX )
+#if defined( OS_LINUX ) || defined( OS_MACOSX ) || defined( __NetBSD__ )
 	#include <signal.h>
 	#include <stdarg.h>
 	#include <cstdio>
