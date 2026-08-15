$NetBSD$

--- ../../inc/liblfds711/lfds711_porting_abstraction_layer_operating_system.h.orig	2026-03-24 14:16:01.608723357 +0000
+++ ../../inc/liblfds711/lfds711_porting_abstraction_layer_operating_system.h
@@ -40,7 +40,7 @@
 
 
 /****************************************************************************/
-#if( defined __linux__ && !defined KERNEL_MODE )
+#if( (defined __linux__ || defined __NetBSD__) && !defined KERNEL_MODE )
 
   #ifdef LFDS711_PAL_OPERATING_SYSTEM
     #error More than one porting abstraction layer matches the current platform in "lfds711_porting_abstraction_layer_operating_system.h".
