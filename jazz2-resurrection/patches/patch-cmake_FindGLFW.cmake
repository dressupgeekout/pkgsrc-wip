$NetBSD$

XXX

--- cmake/FindGLFW.cmake.orig	2023-08-23 00:11:03.680117133 -0700
+++ cmake/FindGLFW.cmake	2023-08-23 00:11:51.528049740 -0700
@@ -25,6 +25,7 @@
   $ENV{GLFW_ROOT}
   PATH_SUFFIXES
   include # For finding the include file under the root of the glfw expanded archive, typically on Windows.
+  GLFW
   PATHS
   /usr/include/
   /usr/local/include/
