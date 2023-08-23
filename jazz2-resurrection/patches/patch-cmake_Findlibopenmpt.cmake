$NetBSD$

XXX

--- cmake/Findlibopenmpt.cmake.orig	2023-08-23 00:08:26.130668586 -0700
+++ cmake/Findlibopenmpt.cmake	2023-08-23 00:10:25.374007818 -0700
@@ -6,6 +6,7 @@
 	/usr/include/libopenmpt/
 	/usr/local/include/libopenmpt/
 	${EXTERNAL_INCLUDES_DIR}/libopenmpt/
+	PATH_SUFFIXES libopenmpt
 )
 mark_as_advanced(LIBOPENMPT_INCLUDE_DIR)
 
