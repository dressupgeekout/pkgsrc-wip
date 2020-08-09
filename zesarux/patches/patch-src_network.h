--- network.h.orig	2020-05-21 11:31:32.000000000 -0700
+++ network.h	2020-08-09 14:47:58.803262320 -0700
@@ -43,7 +43,7 @@
 #endif
 
 
-#ifdef __FreeBSD__
+#if defined( __FreeBSD__) || defined( __NetBSD__)
 #include <netinet/in.h>
 #endif
 
