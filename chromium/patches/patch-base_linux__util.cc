$NetBSD$

--- base/linux_util.cc.orig	2017-02-02 02:02:47.000000000 +0000
+++ base/linux_util.cc
@@ -110,12 +110,14 @@ char g_linux_distro[kDistroSize] =
     "CrOS";
 #elif defined(OS_ANDROID)
     "Android";
+#elif defined(OS_BSD)
+    "BSD";
 #else  // if defined(OS_LINUX)
     "Unknown";
 #endif
 
 std::string GetLinuxDistro() {
-#if defined(OS_CHROMEOS) || defined(OS_ANDROID)
+#if defined(OS_CHROMEOS) || defined(OS_ANDROID) || defined(OS_BSD)
   return g_linux_distro;
 #elif defined(OS_LINUX)
   LinuxDistroHelper* distro_state_singleton = LinuxDistroHelper::GetInstance();
