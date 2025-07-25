$NetBSD$

* Part of patchset to build chromium on NetBSD
* Based on OpenBSD's chromium patches, and
  pkgsrc's qt5-qtwebengine patches

--- components/supervised_user/core/browser/list_family_members_service.h.orig	2025-07-21 19:32:31.000000000 +0000
+++ components/supervised_user/core/browser/list_family_members_service.h
@@ -33,7 +33,7 @@ namespace supervised_user {
 // If true, this fetcher is active for all users with CanFetchFamilyMemberInfo
 // capability. Otherwise, it is only used by supervised users.
 constexpr bool FetchListFamilyMembersWithCapability() {
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
   return true;
 #else
   return false;
