$NetBSD$

* Part of patchset to build chromium on NetBSD
* Based on OpenBSD's chromium patches, and
  pkgsrc's qt5-qtwebengine patches

--- media/video/video_encode_accelerator_adapter_test.cc.orig	2025-01-27 17:37:37.000000000 +0000
+++ media/video/video_encode_accelerator_adapter_test.cc
@@ -458,7 +458,7 @@ TEST_P(VideoEncodeAcceleratorAdapterTest
       CreateGreenFrame(large_size, pixel_format, base::Milliseconds(2));
 
   VideoPixelFormat expected_input_format = PIXEL_FORMAT_I420;
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   if (pixel_format != PIXEL_FORMAT_I420 || !small_frame->IsMappable())
     expected_input_format = PIXEL_FORMAT_NV12;
 #endif
