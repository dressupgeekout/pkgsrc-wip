$NetBSD$

* Part of patchset to build chromium on NetBSD
* Based on OpenBSD's chromium patches, and
  pkgsrc's qt5-qtwebengine patches

--- ui/ozone/platform/wayland/host/wayland_window.cc.orig	2025-01-27 17:37:37.000000000 +0000
+++ ui/ozone/platform/wayland/host/wayland_window.cc
@@ -330,7 +330,7 @@ void WaylandWindow::OnPointerFocusChange
   // Whenever the window gets the pointer focus back, the cursor shape must be
   // updated. Otherwise, it is invalidated upon wl_pointer::leave and is not
   // restored by the Wayland compositor.
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   if (focused && async_cursor_) {
     async_cursor_->AddCursorLoadedCallback(base::BindOnce(
         &WaylandWindow::OnCursorLoaded, AsWeakPtr(), async_cursor_));
@@ -611,7 +611,7 @@ bool WaylandWindow::ShouldUseNativeFrame
 void WaylandWindow::SetCursor(scoped_refptr<PlatformCursor> platform_cursor) {
   DCHECK(platform_cursor);
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   auto async_cursor = WaylandAsyncCursor::FromPlatformCursor(platform_cursor);
 
   if (async_cursor_ == async_cursor) {
@@ -813,7 +813,7 @@ std::string WaylandWindow::WindowStates:
   } else {
     base::TrimString(states, " ", &states);
   }
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   states += "; tiled_edges: ";
   std::string tiled = "";
   if (tiled_edges.left) {
@@ -1318,12 +1318,12 @@ void WaylandWindow::UpdateCursorShape(sc
         cursor->bitmaps(), hotspot_in_dips,
         std::ceil(cursor->cursor_image_scale_factor()));
   }
-#if !BUILDFLAG(IS_LINUX)
+#if !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_BSD)
   cursor_ = cursor;
 #endif
 }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 void WaylandWindow::OnCursorLoaded(scoped_refptr<WaylandAsyncCursor> cursor,
                                    scoped_refptr<BitmapCursor> bitmap_cursor) {
   if (HasPointerFocus() && async_cursor_ == cursor && bitmap_cursor) {
