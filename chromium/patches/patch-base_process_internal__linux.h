$NetBSD$

* Part of patchset to build chromium on NetBSD
* Based on OpenBSD's chromium patches, and
  pkgsrc's qt5-qtwebengine patches

--- base/process/internal_linux.h.orig	2025-07-21 19:32:31.000000000 +0000
+++ base/process/internal_linux.h
@@ -146,6 +146,9 @@ TimeDelta ClockTicksToTimeDelta(int64_t 
 // arguments to the lambda.
 template <typename Lambda>
 void ForEachProcessTask(base::ProcessHandle process, Lambda&& lambda) {
+#if BUILDFLAG(IS_BSD)
+  return;
+#else
   // Iterate through the different threads tracked in /proc/<pid>/task.
   FilePath fd_path = GetProcPidDir(process).Append("task");
 
@@ -169,6 +172,7 @@ void ForEachProcessTask(base::ProcessHan
     FilePath task_path = fd_path.Append(tid_str);
     lambda(tid, task_path);
   }
+#endif
 }
 
 }  // namespace internal
