$NetBSD$

* Part of patchset to build chromium on NetBSD
* Based on OpenBSD's chromium patches, and
  pkgsrc's qt5-qtwebengine patches

--- base/allocator/partition_allocator/src/partition_alloc/partition_alloc_forward.h.orig	2025-07-21 19:32:31.000000000 +0000
+++ base/allocator/partition_allocator/src/partition_alloc/partition_alloc_forward.h
@@ -29,9 +29,13 @@ namespace internal {
 // the second one 16. We could technically return something different for
 // malloc() and operator new(), but this would complicate things, and most of
 // our allocations are presumably coming from operator new() anyway.
+#if defined(__i386__) && defined(OS_FREEBSD)
+constexpr size_t kAlignment = 8;
+#else
 constexpr inline size_t kAlignment =
     std::max(alignof(max_align_t),
              static_cast<size_t>(__STDCPP_DEFAULT_NEW_ALIGNMENT__));
+#endif
 static_assert(base::bits::HasSingleBit(kAlignment),
               "Alignment must be power of two.");
 static_assert(kAlignment <= 16,
