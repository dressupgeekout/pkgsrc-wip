$NetBSD$

NetBSD also has the number of processors stored in a sysctl.
--- source/vdrift/numprocessors.h.orig	2022-06-02 22:36:09.416952078 -0700
+++ source/vdrift/numprocessors.h	2022-06-02 22:37:24.166196927 -0700
@@ -7,7 +7,7 @@
 	|| defined (_WIN64) || defined(__CYGWIN__) || defined(__MINGW32__)
 	#include <windows.h>
 	#include <process.h>
-#elif defined(__APPLE__) || defined (__FreeBSD__)
+#elif defined(__APPLE__) || defined (__FreeBSD__) || defined(__NetBSD__)
 	//#include <pthread.h>
 
 	// Required to get number of processors on OS X using sysctlbyname.
@@ -28,7 +28,7 @@
 		SYSTEM_INFO systemInfo;
 		GetSystemInfo(&systemInfo);
 		return (unsigned int)systemInfo.dwNumberOfProcessors;
-#elif defined (__APPLE__) || defined(__FreeBSD__)
+#elif defined (__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__)
 		int numProcessors = 0;
 		size_t size = sizeof(numProcessors);
 		int returnCode = sysctlbyname("hw.ncpu", &numProcessors, &size, NULL, 0);
