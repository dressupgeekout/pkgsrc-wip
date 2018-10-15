$NetBSD$
--- vm/platform.hpp.orig	2018-10-14 23:16:21.347705124 -0700
+++ vm/platform.hpp	2018-10-14 23:16:52.139619388 -0700
@@ -45,7 +45,7 @@
         #error "Unsupported Linux flavor"
       #endif
     #else
-      #error "Unsupported OS"
+      #include "os-genunix.hpp"
     #endif
   #endif
 #endif
