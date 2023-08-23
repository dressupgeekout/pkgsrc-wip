$NetBSD$

XXX

--- Sources/nCine/Threading/Thread.h.orig	2023-08-22 23:40:01.087562618 -0700
+++ Sources/nCine/Threading/Thread.h	2023-08-22 23:56:20.318738129 -0700
@@ -13,6 +13,10 @@
 #	include <mach/mach_init.h>
 #endif
 
+#if defined(__NetBSD__)
+#	include <sched.h>
+#endif
+
 namespace nCine
 {
 #if !defined(DEATH_TARGET_ANDROID) && !defined(DEATH_TARGET_EMSCRIPTEN) && !defined(DEATH_TARGET_SWITCH)
@@ -46,6 +50,8 @@
 		DWORD_PTR affinityMask_;
 #	elif defined(DEATH_TARGET_APPLE)
 		integer_t affinityTag_;
+#	elif defined(__NetBSD__)
+		cpuset_t *cpuSet_;
 #	else
 		cpu_set_t cpuSet_;
 #	endif
