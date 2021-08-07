--- include/common.hpp.orig	2020-05-25 13:52:23.000000000 -0700
+++ include/common.hpp	2021-08-06 22:58:40.508546524 -0700
@@ -116,9 +116,18 @@
 	// Use the environments endian definitions
 	#include <endian.h>
 
+
+#ifndef BIG_ENDIAN
 	#define BIG_ENDIAN		__BIG_ENDIAN
+#endif
+
+#ifndef LITTLE_ENDIAN
 	#define LITTLE_ENDIAN	__LITTLE_ENDIAN
+#endif
+
+#ifndef BYTE_ORDER
 	#define BYTE_ORDER		__BYTE_ORDER
+#endif
 
 #endif
 
