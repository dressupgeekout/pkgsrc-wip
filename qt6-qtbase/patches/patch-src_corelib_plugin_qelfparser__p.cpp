$NetBSD$

* Support older ELFOSABI_LINUX that has been replaced with ELFOSABI_GNU.
  Needed on NetBSD 9.

--- src/corelib/plugin/qelfparser_p.cpp.orig	2022-09-19 10:23:04.000000000 +0000
+++ src/corelib/plugin/qelfparser_p.cpp
@@ -20,6 +20,11 @@
 #  error "Need ELF header to parse plugins."
 #endif
 
+// support older ELFOSABI define for GNU/Linux
+#if !defined(ELFOSABI_GNU) && defined(ELFOSABI_LINUX)
+#define ELFOSABI_GNU ELFOSABI_LINUX
+#endif
+
 QT_BEGIN_NAMESPACE
 
 using namespace Qt::StringLiterals;