$NetBSD$

--- net/dns/dns_config_service_posix_unittest.cc.orig	2017-02-02 02:02:56.000000000 +0000
+++ net/dns/dns_config_service_posix_unittest.cc
@@ -2,8 +2,6 @@
 // Use of this source code is governed by a BSD-style license that can be
 // found in the LICENSE file.
 
-#include <resolv.h>
-
 #include <memory>
 
 #include "base/cancelable_callback.h"
