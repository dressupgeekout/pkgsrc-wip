$NetBSD$

* Part of patchset to build electron on NetBSD
* Based on OpenBSD's chromium patches, and
  FreeBSD's electron patches

--- third_party/blink/renderer/platform/fonts/font_cache.h.orig	2024-10-18 12:34:36.495683200 +0000
+++ third_party/blink/renderer/platform/fonts/font_cache.h
@@ -55,7 +55,7 @@
 #include "third_party/skia/include/core/SkFontMgr.h"
 #include "third_party/skia/include/core/SkRefCnt.h"
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 #include "ui/gfx/font_fallback_linux.h"
 #endif
 
@@ -165,7 +165,7 @@ class PLATFORM_EXPORT FontCache final {
 
   static void MaybePreloadSystemFonts();
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   // These are needed for calling QueryRenderStyleForStrike, since
   // gfx::GetFontRenderParams makes distinctions based on DSF.
   static float DeviceScaleFactor() { return device_scale_factor_; }
@@ -241,7 +241,7 @@ class PLATFORM_EXPORT FontCache final {
       const char* locale_family_name);
 #endif  // BUILDFLAG(IS_ANDROID)
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   static bool GetFontForCharacter(UChar32,
                                   const char* preferred_locale,
                                   gfx::FallbackFontData*);
@@ -314,7 +314,7 @@ class PLATFORM_EXPORT FontCache final {
                                    const FontFaceCreationParams&,
                                    std::string& name);
 
-#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   static AtomicString GetFamilyNameForCharacter(SkFontMgr*,
                                                 UChar32,
                                                 const FontDescription&,
@@ -351,7 +351,7 @@ class PLATFORM_EXPORT FontCache final {
   bool is_test_font_mgr_ = false;
 #endif  // BUILDFLAG(IS_WIN)
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   static float device_scale_factor_;
 #endif
 
