$NetBSD$

--- ld/emulparams/elf32lriscv-defs.sh.orig	2022-09-08 03:15:34.000000000 +0000
+++ ld/emulparams/elf32lriscv-defs.sh
@@ -16,16 +16,8 @@ if test `echo "$host" | sed -e s/64//` =
   esac
 fi
 
-# Enable shared library support for everything except an embedded elf target.
-case "$target" in
-  riscv*-elf)
-    SCRIPT_NAME=elfriscv
-    ;;
-  *)
-    GENERATE_SHLIB_SCRIPT=yes
-    GENERATE_PIE_SCRIPT=yes
-    ;;
-esac
+GENERATE_SHLIB_SCRIPT=yes
+GENERATE_PIE_SCRIPT=yes
 
 TEXT_START_ADDR=0x10000
 MAXPAGESIZE="CONSTANT (MAXPAGESIZE)"
