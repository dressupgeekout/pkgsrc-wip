$NetBSD: patch-scripts_postprocess-unix.sh,v 1.4 2019/10/26 12:23:01 kamil Exp $

Fix QTDIR.

--- scripts/postprocess-unix.sh.orig	2025-01-14 00:44:20.000000000 +0000
+++ scripts/postprocess-unix.sh
@@ -9,7 +9,7 @@ TSDIRLC="${LCDIR}/ts"
 TSDIRPI="${PIDIR}/ts"
 SPTDIR="${LCDIR}/support"
 DESKTOPDIR="${THISDIR}/desktop"
-LRELEASE="lrelease"
+LRELEASE="@QTDIR@/bin/lrelease"
 
 cd "${THISDIR}"
 
