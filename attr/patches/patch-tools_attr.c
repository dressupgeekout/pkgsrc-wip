$NetBSD$

Add missing header for basename()
https://savannah.nongnu.org/bugs/index.php?63920

--- tools/attr.c.orig	2019-08-12 08:39:01.000000000 +0000
+++ tools/attr.c
@@ -28,6 +28,7 @@
 #include <errno.h>
 #include <string.h>
 #include <locale.h>
+#include <libgen.h>
 
 #include <attr/attributes.h>
 
