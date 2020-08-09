--- menu.h.orig	2020-08-09 14:25:26.859518724 -0700
+++ menu.h	2020-08-09 14:25:35.925470622 -0700
@@ -25,6 +25,8 @@
 #include <dirent.h>
 #if defined(__APPLE__)
         #include <sys/syslimits.h>
+#else
+        #include <limits.h>
 #endif
 
 
