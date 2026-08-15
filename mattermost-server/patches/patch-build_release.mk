$NetBSD$

Add NetBSD build, following our cousin's example.

--- build/release.mk.orig	2026-03-06 10:55:21.000000000 +0000
+++ build/release.mk
@@ -69,6 +69,26 @@ else
 	env GOOS=freebsd GOARCH=arm64 $(GO) build -o $(GOBIN)/freebsd_arm64 $(GOFLAGS) -trimpath -tags production -ldflags '$(LDFLAGS)' ./...
 endif
 
+build-netbsd: build-netbsd-amd64 build-netbsd-arm64
+
+build-netbsd-amd64:
+	@echo Build NetBSD amd64
+ifeq ($(BUILDER_GOOS_GOARCH),"netbsd_amd64")
+	env GOOS=netbsd GOARCH=amd64 $(GO) build -o $(GOBIN) $(GOFLAGS) -trimpath -tags production -ldflags '$(LDFLAGS)' ./...
+else
+	mkdir -p $(GOBIN)/netbsd_amd64
+	env GOOS=netbsd GOARCH=amd64 $(GO) build -o $(GOBIN)/netbsd_amd64 $(GOFLAGS) -trimpath -tags production -ldflags '$(LDFLAGS)' ./...
+endif
+
+build-netbsd-arm64:
+	@echo Build NetBSD arm64
+ifeq ($(BUILDER_GOOS_GOARCH),"netbsd_arm64")
+	env GOOS=netbsd GOARCH=arm64 $(GO) build -o $(GOBIN) $(GOFLAGS) -trimpath -tags production -ldflags '$(LDFLAGS)' ./...
+else
+	mkdir -p $(GOBIN)/netbsd_arm64
+	env GOOS=netbsd GOARCH=arm64 $(GO) build -o $(GOBIN)/netbsd_arm64 $(GOFLAGS) -trimpath -tags production -ldflags '$(LDFLAGS)' ./...
+endif
+
 build-windows:
 	@echo Build Windows amd64
 ifeq ($(BUILDER_GOOS_GOARCH),"windows_amd64")
@@ -139,6 +159,22 @@ else
 	env GOOS=freebsd GOARCH=arm64 $(GO) build -o $(GOBIN)/freebsd_arm64 $(GOFLAGS) -trimpath -tags production -ldflags '$(LDFLAGS)' ./cmd/...
 endif
 
+build-cmd-netbsd:
+	@echo Build CMD NetBSD amd64
+ifeq ($(BUILDER_GOOS_GOARCH),"netbsd_amd64")
+	env GOOS=netbsd GOARCH=amd64 $(GO) build -o $(GOBIN) $(GOFLAGS) -trimpath -tags production -ldflags '$(LDFLAGS)' ./cmd/...
+else
+	mkdir -p $(GOBIN)/netbsd_amd64
+	env GOOS=netbsd GOARCH=amd64 $(GO) build -o $(GOBIN)/netbsd_amd64 $(GOFLAGS) -trimpath -tags production -ldflags '$(LDFLAGS)' ./cmd/...
+endif
+	@echo Build CMD NetBSD arm64
+ifeq ($(BUILDER_GOOS_GOARCH),"netbsd_arm64")
+	env GOOS=netbsd GOARCH=arm64 $(GO) build -o $(GOBIN) $(GOFLAGS) -trimpath -tags production -ldflags '$(LDFLAGS)' ./cmd/...
+else
+	mkdir -p $(GOBIN)/netbsd_arm64
+	env GOOS=netbsd GOARCH=arm64 $(GO) build -o $(GOBIN)/netbsd_arm64 $(GOFLAGS) -trimpath -tags production -ldflags '$(LDFLAGS)' ./cmd/...
+endif
+
 build-cmd-windows:
 	@echo Build CMD Windows amd64
 ifeq ($(BUILDER_GOOS_GOARCH),"windows_amd64")
@@ -275,6 +311,22 @@ package-freebsd-arm64: package-prep
 
 package-freebsd: package-freebsd-amd64 package-freebsd-arm64
 
+package-netbsd-amd64: package-prep
+	DIST_PATH_GENERIC=$(DIST_PATH_NETBSD_AMD64) CURRENT_PACKAGE_ARCH=netbsd_amd64 MM_BIN_NAME=mattermost MMCTL_BIN_NAME=mmctl $(MAKE) package-general
+	@# Package
+	tar -C $(DIST_PATH_NETBSD_AMD64)/.. -czf $(DIST_PATH)-$(BUILD_TYPE_NAME)-netbsd-amd64.tar.gz mattermost ../mattermost
+	@# Cleanup
+	rm -rf $(DIST_ROOT)/netbsd_amd64
+
+package-netbsd-arm64: package-prep
+	DIST_PATH_GENERIC=$(DIST_PATH_NETBSD_ARM64) CURRENT_PACKAGE_ARCH=netbsd_arm64 MM_BIN_NAME=mattermost MMCTL_BIN_NAME=mmctl $(MAKE) package-general
+	@# Package
+	tar -C $(DIST_PATH_NETBSD_ARM64)/.. -czf $(DIST_PATH)-$(BUILD_TYPE_NAME)-netbsd-arm64.tar.gz mattermost ../mattermost
+	@# Cleanup
+	rm -rf $(DIST_ROOT)/netbsd_arm64
+
+package-netbsd: package-netbsd-amd64 package-netbsd-arm64
+
 package-linux-amd64: package-prep
 	DIST_PATH_GENERIC=$(DIST_PATH_LIN_AMD64) PLUGIN_ARCH=linux-amd64 $(MAKE) package-plugins
 	DIST_PATH_GENERIC=$(DIST_PATH_LIN_AMD64) CURRENT_PACKAGE_ARCH=linux_amd64 MM_BIN_NAME=mattermost MMCTL_BIN_NAME=mmctl $(MAKE) package-general
