$NetBSD$

* Part of patchset to build chromium on NetBSD
* Based on OpenBSD's chromium patches, and
  pkgsrc's qt5-qtwebengine patches

--- content/utility/utility_blink_platform_with_sandbox_support_impl.h.orig	2025-07-21 19:32:31.000000000 +0000
+++ content/utility/utility_blink_platform_with_sandbox_support_impl.h
@@ -34,7 +34,7 @@ class UtilityBlinkPlatformWithSandboxSup
 
  private:
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_MAC) || \
-    BUILDFLAG(IS_WIN)
+    BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
   std::unique_ptr<blink::WebSandboxSupport> sandbox_support_;
 #endif
 };
