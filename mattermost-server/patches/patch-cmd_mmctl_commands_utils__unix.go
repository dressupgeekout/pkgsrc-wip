$NetBSD$

Add NetBSD build, following our cousin's example.

--- cmd/mmctl/commands/utils_unix.go.orig	2026-03-06 10:55:21.000000000 +0000
+++ cmd/mmctl/commands/utils_unix.go
@@ -1,7 +1,7 @@
 // Copyright (c) 2015-present Mattermost, Inc. All Rights Reserved.
 // See LICENSE.txt for license information.
 
-//go:build linux || darwin || freebsd
+//go:build linux || darwin || freebsd || netbsd
 
 package commands
 
