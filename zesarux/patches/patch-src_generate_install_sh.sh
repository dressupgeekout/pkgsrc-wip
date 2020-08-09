--- generate_install_sh.sh.orig	2020-08-09 15:13:13.222454935 -0700
+++ generate_install_sh.sh	2020-08-09 15:14:05.797669004 -0700
@@ -1,11 +1,12 @@
-#!/bin/bash
+#!/usr/bin/env bash
 
 
-INSTALLPREFIX=`cat compileoptions.h |grep INSTALL_PREFIX|cut -d '"' -f2`
+prefix=`cat compileoptions.h |grep INSTALL_PREFIX|cut -d '"' -f2`
+INSTALLPREFIX=${DESTDIR}/${prefix}
 
 
 cat > install.sh << _EOF
-#!/bin/bash
+#!/usr/bin/env bash
 
 echo "Installing ZEsarUX under $INSTALLPREFIX ..."
 
