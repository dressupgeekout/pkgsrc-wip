$NetBSD$

Workaround for core dumps, from
https://github.com/LibreSprite/LibreSprite/issues/542

--- src/base/mutex_pthread.h.orig	2026-03-21 12:34:03.269850267 +0000
+++ src/base/mutex_pthread.h
@@ -13,11 +13,14 @@ class base::mutex::mutex_impl { (public)
 public:
 
   mutex_impl() {
-    pthread_mutex_init(&m_handle, NULL);
+    pthread_mutexattr_init(&m_attr);
+    pthread_mutexattr_settype(&m_attr, PTHREAD_MUTEX_ERRORCHECK);
+    pthread_mutex_init(&m_handle, &m_attr);
   }
 
   ~mutex_impl() {
     pthread_mutex_destroy(&m_handle);
+    pthread_mutexattr_destroy(&m_attr);
   }
 
   void lock() {
@@ -34,5 +37,6 @@ class base::mutex::mutex_impl { (public)
 
 private:
   pthread_mutex_t m_handle;
+  pthread_mutexattr_t m_attr;
 
 };
