$NetBSD$

* Part of patchset to build electron on NetBSD
* Based on OpenBSD's chromium patches, and
  FreeBSD's electron patches

--- components/viz/common/features.cc.orig	2024-10-18 12:34:11.483905000 +0000
+++ components/viz/common/features.cc
@@ -234,7 +234,7 @@ BASE_FEATURE(kAllowForceMergeRenderPassW
              "AllowForceMergeRenderPassWithRequireOverlayQuads",
              base::FEATURE_ENABLED_BY_DEFAULT);
 
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 // On platforms using SkiaOutputDeviceBufferQueue and not yet universally using
 // SkiaRenderer-allocated images, when this is true SkiaRenderer will allocate
 // and maintain a buffer queue of images for the root render pass, instead of
@@ -500,7 +500,7 @@ bool ShouldOnBeginFrameThrottleVideo() {
   return base::FeatureList::IsEnabled(features::kOnBeginFrameThrottleVideo);
 }
 
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 bool ShouldRendererAllocateImages() {
   return base::FeatureList::IsEnabled(kRendererAllocatesImages);
 }
