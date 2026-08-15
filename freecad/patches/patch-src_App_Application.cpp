$NetBSD$

On NetBSD, use the same method to find HomeDir as OpenBSD.

--- src/App/Application.cpp.orig	2026-04-11 09:07:26.182144557 +0000
+++ src/App/Application.cpp
@@ -3346,7 +3346,7 @@ void Application::ExtractUserPath()
 }
 
 // TODO: Consider using this for all UNIX-like OSes
-#if defined(__OpenBSD__)
+#if defined(__OpenBSD__) || defined(__NetBSD__)
 #include <cstdio>
 #include <cstdlib>
 #include <sys/param.h>
