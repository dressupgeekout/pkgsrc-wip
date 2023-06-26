$NetBSD$

Adapt script for pkgsrc paths, make arguments available from command line.

--- convert.sh.orig	2011-02-15 18:57:40.000000000 +0000
+++ convert.sh
@@ -1,18 +1,29 @@
 #!/bin/sh
 
-# Sample conversion script
-
 set -e
 
-db=/home/joerg/repo/src-new
-repo=/home/joerg/repo/netbsd/src
+strip=""
+if [ "$#" > 1 ] && [ "$1" = -m ]
+then
+	shift
+	strip=-m
+fi
+if [ "$#" != 2 ]
+then
+	echo usage: $0 [-m] source-cvs-rsync-path target-path >&2
+	exit 1
+fi
+
+PATH=@PREFIX@/libexec/cvs2fossil:$PATH
+db="$2"
+repo="$1"
 fossil=$db.fossil
 
 #
 # If you want the module name itself to be skipped, add -m.
 # Instead of e.g. src/bin/... as path, this will create only bin/...
 #
-time 01-import/01-import $db $repo
+time 01-import "$strip" $db $repo
 oldest=$(echo 'SELECT datetime(r.date,"-1 second") FROM revision r ORDER BY r.date LIMIT 1;' | sqlite3 $db)
 
 #
@@ -35,14 +46,14 @@ oldest=$(echo 'SELECT datetime(r.date,"-
 #  revision IN (SELECT revision.id FROM revision WHERE date > "1998-05-01");
 #EOF
 
-time 02-vendorbranches/02-vendorbranches $db
-time 03-branchtime/03-branchtime $db
+time 02-vendorbranches $db
+time 03-branchtime $db
 rm -f $fossil
-fossil new -A root --date-override "$oldest" $fossil
+fossil1 new -A root --date-override "$oldest" $fossil
 project=eeb7e06236b08dc4b57b6ab3b957fe5756c64f5b
 sqlite3 $fossil 'UPDATE config SET value="'$project'" WHERE name="project-code"'
 initial=$(sqlite3 $fossil 'SELECT uuid FROM blob WHERE rid=1')
-TMPDIR=. time 04-commit/04-commit -b $initial $db $fossil
+TMPDIR=. time 04-commit -b $initial $db $fossil
 du -h $fossil
-time fossil rebuild --noverify $fossil
+time fossil1 rebuild --noverify $fossil
 #TMPDIR=. time sqlite3 $fossil 'pragma synchronous=off; pragma journal_mode=off; vacuum'