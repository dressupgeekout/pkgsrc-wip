$NetBSD$

XXX

--- Sources/Shared/IO/FileSystem.cpp.orig	2023-08-22 23:58:07.515844835 -0700
+++ Sources/Shared/IO/FileSystem.cpp	2023-08-23 00:03:29.011389384 -0700
@@ -33,7 +33,7 @@
 #	if defined(__linux__)
 #		include <sys/sendfile.h>
 #	endif
-#	if defined(__FreeBSD__)
+#	if defined(__FreeBSD__) || defined(__NetBSD__)
 #		include <sys/types.h>
 #		include <sys/sysctl.h>
 #	endif
@@ -381,7 +381,12 @@
 				return;
 			}
 
+#if defined(__NetBSD__)
+			// dirfd(3) is a macro on NetBSD
+			std::int32_t dfd = dirfd(d);
+#else
 			std::int32_t dfd = ::dirfd(d);
+#endif
 			struct dirent* ent;
 			while ((ent = ::readdir(d)) != nullptr) {
 				if (ent->d_name[0] >= '0' && ent->d_name[0] <= '9') {
