--- daemon/cmake/DaemonPlatform.cmake.orig	2022-09-06 17:53:23.627441006 -0700
+++ daemon/cmake/DaemonPlatform.cmake	2022-09-06 17:54:12.482395013 -0700
@@ -29,7 +29,7 @@
 ################################################################################
 
 # When adding a new platform, look at all the places WIN32, APPLE and LINUX are used
-if( CMAKE_SYSTEM_NAME MATCHES "Linux" )
+if( CMAKE_SYSTEM_NAME MATCHES "Linux" OR CMAKE_SYSTEM_NAME MATCHES "NetBSD" )
   set( LINUX ON )
 elseif( WIN32 )
 elseif( APPLE )
