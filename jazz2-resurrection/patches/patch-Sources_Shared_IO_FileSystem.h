$NetBSD$

XXX

--- Sources/Shared/IO/FileSystem.h.orig	2023-08-22 23:37:50.979455219 -0700
+++ Sources/Shared/IO/FileSystem.h	2023-08-22 23:38:30.799874770 -0700
@@ -15,7 +15,7 @@
 #	elif defined(DEATH_TARGET_ANDROID)
 using DIR = struct DIR;
 using AAssetDir = struct AAssetDir;
-#	elif defined(__FreeBSD__)
+#	elif defined(__FreeBSD__) || defined(__NetBSD__)
 struct _dirdesc;
 using DIR = struct _dirdesc;
 #	else
