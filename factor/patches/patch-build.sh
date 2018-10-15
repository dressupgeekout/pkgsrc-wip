$NetBSD$
--- build.sh.orig	2018-10-14 23:11:13.102890607 -0700
+++ build.sh	2018-10-14 23:11:23.734973449 -0700
@@ -252,6 +252,7 @@
         *Darwin*) OS=macosx;;
         *linux*) OS=linux;;
         *Linux*) OS=linux;;
+        *) OS=unix;;
     esac
 }
 
