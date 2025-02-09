$NetBSD$

* Part of patchset to build electron on NetBSD
* Based on OpenBSD's chromium patches, and
  FreeBSD's electron patches

--- net/http/http_network_session.cc.orig	2024-10-18 12:34:30.298563200 +0000
+++ net/http/http_network_session.cc
@@ -19,7 +19,9 @@
 #include "build/build_config.h"
 #include "net/base/features.h"
 #include "net/dns/host_resolver.h"
+#if defined(USE_KERBEROS)
 #include "net/http/http_auth_handler_factory.h"
+#endif
 #include "net/http/http_response_body_drainer.h"
 #include "net/http/http_stream_factory.h"
 #include "net/http/url_security_manager.h"
