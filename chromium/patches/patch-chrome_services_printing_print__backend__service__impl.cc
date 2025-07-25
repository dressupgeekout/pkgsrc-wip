$NetBSD$

* Part of patchset to build chromium on NetBSD
* Based on OpenBSD's chromium patches, and
  pkgsrc's qt5-qtwebengine patches

--- chrome/services/printing/print_backend_service_impl.cc.orig	2025-07-21 19:32:31.000000000 +0000
+++ chrome/services/printing/print_backend_service_impl.cc
@@ -48,7 +48,7 @@
 #include "printing/backend/cups_connection_pool.h"
 #endif
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "base/no_destructor.h"
 #include "ui/linux/linux_ui.h"
 #include "ui/linux/linux_ui_delegate_stub.h"
@@ -75,7 +75,7 @@ namespace printing {
 
 namespace {
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 void InstantiateLinuxUiDelegate() {
   // TODO(crbug.com/40561724)  Until a real UI can be used in a utility process,
   // need to use the stub version.
@@ -84,7 +84,7 @@ void InstantiateLinuxUiDelegate() {
 #endif
 
 scoped_refptr<base::SequencedTaskRunner> GetPrintingTaskRunner() {
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // Use task runner associated with equivalent of UI thread.  Needed for calls
   // made through `PrintDialogLinuxInterface` to properly execute.
   CHECK(base::SequencedTaskRunner::HasCurrentDefault());
@@ -467,7 +467,7 @@ void PrintBackendServiceImpl::Init(
   // `InitCommon()`.
   InitializeProcessForPrinting();
   print_backend_ = PrintBackend::CreateInstance(locale);
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // Test framework already initializes the UI, so this should not go in
   // `InitCommon()`.  Additionally, low-level Linux UI is not needed when tests
   // are using `TestPrintingContext`.
@@ -688,7 +688,7 @@ void PrintBackendServiceImpl::UpdatePrin
   crash_keys_ = std::make_unique<crash_keys::ScopedPrinterInfo>(
       *printer_name, print_backend_->GetPrinterDriverInfo(*printer_name));
 
-#if BUILDFLAG(IS_LINUX) && BUILDFLAG(USE_CUPS)
+#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)) && BUILDFLAG(USE_CUPS)
   // Try to fill in advanced settings based upon basic info options.
   PrinterBasicInfo basic_info;
   if (print_backend_->GetPrinterBasicInfo(*printer_name, &basic_info) ==
