$NetBSD$

* Part of patchset to build electron on NetBSD
* Based on OpenBSD's chromium patches, and
  FreeBSD's electron patches

--- chrome/browser/download/chrome_download_manager_delegate.cc.orig	2024-10-18 12:34:01.461322800 +0000
+++ chrome/browser/download/chrome_download_manager_delegate.cc
@@ -1753,7 +1753,7 @@ void ChromeDownloadManagerDelegate::OnDo
 bool ChromeDownloadManagerDelegate::IsOpenInBrowserPreferredForFile(
     const base::FilePath& path) {
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || \
-    BUILDFLAG(IS_MAC)
+    BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
   if (path.MatchesExtension(FILE_PATH_LITERAL(".pdf"))) {
     return !download_prefs_->ShouldOpenPdfInSystemReader();
   }
@@ -1901,7 +1901,7 @@ void ChromeDownloadManagerDelegate::Chec
     content::CheckDownloadAllowedCallback check_download_allowed_cb) {
   DCHECK_CURRENTLY_ON(BrowserThread::UI);
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || \
-    BUILDFLAG(IS_MAC)
+    BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
   // Don't download pdf if it is a file URL, as that might cause an infinite
   // download loop if Chrome is not the system pdf viewer.
   if (url.SchemeIsFile() && download_prefs_->ShouldOpenPdfInSystemReader()) {
@@ -1979,7 +1979,7 @@ void ChromeDownloadManagerDelegate::Chec
   DCHECK(download_item->IsSavePackageDownload());
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || \
-    BUILDFLAG(IS_MAC)
+    BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
   std::optional<enterprise_connectors::AnalysisSettings> settings =
       safe_browsing::DeepScanningRequest::ShouldUploadBinary(download_item);
 
