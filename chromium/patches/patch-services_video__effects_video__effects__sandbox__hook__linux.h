$NetBSD$

* Part of patchset to build chromium on NetBSD
* Based on OpenBSD's chromium patches, and
  pkgsrc's qt5-qtwebengine patches

--- services/video_effects/video_effects_sandbox_hook_linux.h.orig	2025-07-21 19:32:31.000000000 +0000
+++ services/video_effects/video_effects_sandbox_hook_linux.h
@@ -5,7 +5,13 @@
 #ifndef SERVICES_VIDEO_EFFECTS_VIDEO_EFFECTS_SANDBOX_HOOK_LINUX_H_
 #define SERVICES_VIDEO_EFFECTS_VIDEO_EFFECTS_SANDBOX_HOOK_LINUX_H_
 
+#include "build/build_config.h"
+
+#if BUILDFLAG(IS_BSD)
+#include "sandbox/policy/sandbox.h"
+#else
 #include "sandbox/policy/linux/sandbox_linux.h"
+#endif
 
 namespace video_effects {
 
