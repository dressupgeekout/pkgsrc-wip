$NetBSD$

* Part of patchset to build chromium on NetBSD
* Based on OpenBSD's chromium patches, and
  pkgsrc's qt5-qtwebengine patches

--- content/child/child_process.cc.orig	2024-10-26 07:00:13.872029000 +0000
+++ content/child/child_process.cc
@@ -32,7 +32,7 @@
 #include "content/common/android/cpu_time_metrics.h"
 #endif
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 #include "content/child/sandboxed_process_thread_type_handler.h"
 #endif
 
@@ -179,7 +179,7 @@ void ChildProcess::set_main_thread(Child
   main_thread_.reset(thread);
 }
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 void ChildProcess::SetIOThreadType(base::ThreadType thread_type) {
   if (!io_thread_) {
     return;
