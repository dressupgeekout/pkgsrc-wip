$NetBSD$

* Part of patchset to build electron on NetBSD
* Based on OpenBSD's chromium patches, and
  FreeBSD's electron patches

--- base/memory/discardable_memory.cc.orig	2024-10-18 12:33:59.774269800 +0000
+++ base/memory/discardable_memory.cc
@@ -26,7 +26,7 @@ BASE_FEATURE(kMadvFreeDiscardableMemory,
              base::FEATURE_DISABLED_BY_DEFAULT);
 #endif  // BUILDFLAG(IS_POSIX)
 
-#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 BASE_FEATURE(kDiscardableMemoryBackingTrial,
              "DiscardableMemoryBackingTrial",
              base::FEATURE_DISABLED_BY_DEFAULT);
@@ -52,7 +52,7 @@ const base::FeatureParam<DiscardableMemo
 
 namespace {
 
-#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 
 DiscardableMemoryBacking GetBackingForFieldTrial() {
   DiscardableMemoryTrialGroup trial_group =
@@ -71,7 +71,7 @@ DiscardableMemoryBacking GetBackingForFi
 
 }  // namespace
 
-#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 
 // Probe capabilities of this device to determine whether we should participate
 // in the discardable memory backing trial.
@@ -101,7 +101,7 @@ DiscardableMemory::DiscardableMemory() =
 DiscardableMemory::~DiscardableMemory() = default;
 
 DiscardableMemoryBacking GetDiscardableMemoryBacking() {
-#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   if (DiscardableMemoryBackingFieldTrialIsEnabled()) {
     return GetBackingForFieldTrial();
   }
