$NetBSD$

* Part of patchset to build electron on NetBSD
* Based on OpenBSD's chromium patches, and
  FreeBSD's electron patches

--- content/browser/gpu/gpu_data_manager_impl.h.orig	2024-10-18 12:34:12.467391500 +0000
+++ content/browser/gpu/gpu_data_manager_impl.h
@@ -220,7 +220,7 @@ class CONTENT_EXPORT GpuDataManagerImpl 
   void OnDisplayMetricsChanged(const display::Display& display,
                                uint32_t changed_metrics) override;
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   bool IsGpuMemoryBufferNV12Supported();
   void SetGpuMemoryBufferNV12Supported(bool supported);
 #endif  // BUILDFLAG(IS_LINUX)
