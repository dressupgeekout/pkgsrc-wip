$NetBSD$

Remove all mentions of upstream's personal build system.

--- make.inc.orig	2016-05-22 10:08:28.000000000 -0600
+++ make.inc	2018-10-07 11:03:23.304521964 -0600
@@ -18,14 +18,14 @@
 #
 #  The name of the libraries to be created/linked to
 #
-SuperLUroot	= /home/xiaoye/Dropbox/Codes/SuperLU/SuperLU_5.2.1/build
-SUPERLULIB   	= $(SuperLUroot)/SRC/libsuperlu.a
+SuperLUroot	= $(CURDIR)
+SUPERLULIB   	= $(SuperLUroot)/libsuperlu.a
 
 TMGLIB       	= libtmglib.a
 
 # BLASDEF 	= -DUSE_VENDOR_BLAS
 BLASLIB		= /home/xiaoye/Dropbox/Codes/SuperLU/SuperLU_5.2.1/build/CBLAS/libblas.a
-LIBS		= $(SUPERLULIB) /home/xiaoye/Dropbox/Codes/SuperLU/SuperLU_5.2.1/build/CBLAS/libblas.a
+LIBS		= $(SUPERLULIB) 
 
 #
 #  The archiver and the flag(s) to use when building archive (library)
