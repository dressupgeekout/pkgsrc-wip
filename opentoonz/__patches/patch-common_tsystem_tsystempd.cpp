$NetBSD$

Add NetBSD support.

--- common/tsystem/tsystempd.cpp.orig	2022-03-31 06:31:45.000000000 -0700
+++ common/tsystem/tsystempd.cpp	2022-11-11 21:46:49.937751923 -0800
@@ -74,7 +74,11 @@
 #include <unistd.h>
 #include <sys/proc.h>
 #include <sys/vmmeter.h>
+#if defined(__NetBSD__)
+#include <uvm/uvm_extern.h>
+#else
 #include <vm/vm_param.h>
+#endif /* __NetBSD__ */
 #include <grp.h>
 #include <utime.h>
 #include <stdio.h>
@@ -282,7 +286,7 @@
 
   TINT64 ret = 0;
   size_t size;
-#ifdef __OpenBSD__
+#if defined(__OpenBSD__) || defined(__NetBSD__)
   int mib[] = {CTL_VM, VM_UVMEXP};
   struct uvmexp  uvmexp;
 #else
@@ -290,11 +294,11 @@
   struct vmtotal vmtotal;
 #endif
 
-#ifdef __OpenBSD__
+#if defined(__OpenBSD__) || defined(__NetBSD__)
   size = sizeof(uvmexp);
   if (sysctl(mib, 2, &uvmexp, &size, NULL, 0) < 0)
     return (ret);
-  ret = pagetok((guint64)uvmexp.free);
+  ret = pagetok((uint64_t)uvmexp.free);
 #else
   size = sizeof(vmtotal);
   if (sysctl(mib, 2, &vmtotal, &size, NULL, 0) < 0)
@@ -336,13 +340,23 @@
     return 0;
   }
 #ifndef _WIN32
+#if defined(__NetBSD__)
+  struct stat buf;
+#else
   struct statfs buf;
+#endif
 #ifdef __sgi
   statfs(::to_string(diskName).c_str(), &buf, sizeof(struct statfs), 0);
+#elif __NetBSD__
+  stat(::to_string(diskName).c_str(), &buf);
 #else
   statfs(::to_string(diskName).c_str(), &buf);
 #endif
+#if defined(__NetBSD__)
+  size = (TINT64)((buf.st_blocks * buf.st_blksize) >> 10);
+#else
   size = (TINT64)((buf.f_blocks * buf.f_bsize) >> 10);
+#endif
 #else
   DWORD sectorsPerCluster;     // sectors per cluster
   DWORD bytesPerSector;        // bytes per sector
@@ -373,13 +387,24 @@
     return 0;
   }
 #ifndef _WIN32
+#if defined(__NetBSD__)
+  struct stat buf;
+#else
   struct statfs buf;
+#endif
 #ifdef __sgi
   statfs(diskName.getWideString().c_str(), &buf, sizeof(struct statfs), 0);
+#elif __NetBSD__
+  stat(::to_string(diskName).c_str(), &buf);
 #else
   statfs(::to_string(diskName).c_str(), &buf);
 #endif
+#if defined(__NetBSD__)
+  /* XXX charlotte: unverified */
+  size = (TINT64)(buf.st_size * buf.st_blksize) >> 10;
+#else
   size = (TINT64)(buf.f_bfree * buf.f_bsize) >> 10;
+#endif
 #else
   DWORD sectorsPerCluster;     // sectors per cluster
   DWORD bytesPerSector;        // bytes per sector
@@ -438,7 +463,7 @@
 
   TINT64 ret = 0;
   size_t size;
-#ifdef __OpenBSD__
+#if defined(__OpenBSD__) || defined(__NetBSD__)
   int mib[] = {CTL_VM, VM_UVMEXP};
   struct uvmexp  uvmexp;
 #else
@@ -446,11 +471,11 @@
   struct vmtotal vmtotal;
 #endif
 
-#ifdef __OpenBSD__
+#if defined(__OpenBSD__) || defined(__NetBSD__)
   size = sizeof(uvmexp);
   if (sysctl(mib, 2, &uvmexp, &size, NULL, 0) < 0)
     return (ret);
-  ret = pagetok((guint64)uvmexp.npages);
+  ret = pagetok((int64_t)uvmexp.npages);
 #else
   size = sizeof(vmtotal);
   if (sysctl(mib, 2, &vmtotal, &size, NULL, 0) < 0)
