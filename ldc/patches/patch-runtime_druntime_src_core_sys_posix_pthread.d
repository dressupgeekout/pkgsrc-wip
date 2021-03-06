$NetBSD$

Stolen from https://github.com/nrTQgc/druntime/tree/netbsd

--- runtime/druntime/src/core/sys/posix/pthread.d.orig	2016-02-13 20:02:16.000000000 +0000
+++ runtime/druntime/src/core/sys/posix/pthread.d
@@ -209,6 +209,85 @@ else version( FreeBSD )
     enum PTHREAD_COND_INITIALIZER               = null;
     enum PTHREAD_RWLOCK_INITIALIZER             = null;
 }
+else version( NetBSD )
+{
+    enum PRI_NONE = -1;
+    enum
+    {
+        PTHREAD_INHERIT_SCHED       = 0x0,
+
+        PTHREAD_CREATE_DETACHED     = 1,
+        PTHREAD_CREATE_JOINABLE     = 0,
+        PTHREAD_EXPLICIT_SCHED      = 1,
+    }
+
+    enum
+    {
+        PTHREAD_PROCESS_PRIVATE     = 0,
+        PTHREAD_PROCESS_SHARED      = 1,
+    }
+
+    enum
+    {
+        PTHREAD_CANCEL_ENABLE       = 0,
+        PTHREAD_CANCEL_DISABLE      = 1,
+        PTHREAD_CANCEL_DEFERRED     = 0,
+        PTHREAD_CANCEL_ASYNCHRONOUS = 1,
+    }
+
+    enum PTHREAD_CANCELED = cast(void*) 1;
+
+    enum PTHREAD_DONE_INIT  = 1;
+
+    struct _PTHREAD_MUTEX_INITIALIZER{
+       enum f1 = 0x33330003;
+       enum f2 = 0;
+       enum f3 = [ 0, 0, 0 ];
+       enum f4 = 0;
+       enum f5 = [0, 0, 0 ];
+       enum f6 = null;
+       enum f7 = null;
+       enum f8 = 0;
+       enum f9 = null;
+    }
+    enum PTHREAD_MUTEX_INITIALIZER              = _PTHREAD_MUTEX_INITIALIZER();
+
+    struct _PTHREAD_ONCE_INIT{
+      enum f1 = PTHREAD_MUTEX_INITIALIZER;
+      enum f2 = 0;
+    }
+    enum PTHREAD_ONCE_INIT                      = _PTHREAD_ONCE_INIT();
+    struct _PTHREAD_COND_INITIALIZER{
+       enum f1 = 0x55550005;
+       enum f2 = 0;
+       struct __PTHREAD_COND_INITIALIZER_S
+       {
+          enum p1 = null;
+          enum p2 = null;
+          enum p3 = null;
+          enum p4 = null;
+       }
+       enum f3 = __PTHREAD_COND_INITIALIZER_S();
+    }
+    enum PTHREAD_COND_INITIALIZER               = _PTHREAD_COND_INITIALIZER();
+    struct _PTHREAD_RWLOCK_INITIALIZER
+    {
+        enum f1 = 0x99990009;
+        enum f2  = 0;
+        struct __PTHREAD_RWLOCK_INITIALIZER_S
+        {
+            enum p1 = null;
+            enum p2 = null;
+        }
+
+        enum f3 = __PTHREAD_RWLOCK_INITIALIZER_S();
+        enum f4 = __PTHREAD_RWLOCK_INITIALIZER_S();
+        enum f5 = 0;
+        enum f6 = null;
+        enum f7 = null;
+    }
+    enum PTHREAD_RWLOCK_INITIALIZER             = _PTHREAD_RWLOCK_INITIALIZER();
+}
 else version (Solaris)
 {
     enum
@@ -362,6 +441,33 @@ else version( FreeBSD )
     void __pthread_cleanup_push_imp(_pthread_cleanup_routine, void*, _pthread_cleanup_info*);
     void __pthread_cleanup_pop_imp(int);
 }
+else version( NetBSD )
+{
+    alias void function(void*) _pthread_cleanup_routine;
+
+    struct _pthread_cleanup_store
+    {
+        void*[4]    pthread_cleanup_pad;
+    }
+
+    struct pthread_cleanup
+    {
+        _pthread_cleanup_store __cleanup_info__ = void;
+
+        extern (D) void push()( _pthread_cleanup_routine cleanup_routine, void* cleanup_arg )
+        {
+            pthread__cleanup_push( cleanup_routine, cleanup_arg, &__cleanup_info__ );
+        }
+
+        extern (D) void pop()( int execute )
+        {
+            pthread__cleanup_pop( execute, &__cleanup_info__ );
+        }
+    }
+
+    void pthread__cleanup_push(_pthread_cleanup_routine, void*, void*);
+    void pthread__cleanup_pop(int, void *);
+}
 else version (Solaris)
 {
     alias void function(void*) _pthread_cleanup_routine;
@@ -507,6 +613,18 @@ else version( FreeBSD )
     int pthread_barrierattr_init(pthread_barrierattr_t*);
     int pthread_barrierattr_setpshared(pthread_barrierattr_t*, int);
 }
+else version( NetBSD )
+{
+    enum PTHREAD_BARRIER_SERIAL_THREAD = 1234567;
+
+    int pthread_barrier_destroy(pthread_barrier_t*);
+    int pthread_barrier_init(pthread_barrier_t*, in pthread_barrierattr_t*, uint);
+    int pthread_barrier_wait(pthread_barrier_t*);
+    int pthread_barrierattr_destroy(pthread_barrierattr_t*);
+    int pthread_barrierattr_getpshared(in pthread_barrierattr_t*, int*);
+    int pthread_barrierattr_init(pthread_barrierattr_t*);
+    int pthread_barrierattr_setpshared(pthread_barrierattr_t*, int);
+}
 else version (OSX)
 {
 }
@@ -565,6 +683,14 @@ else version( FreeBSD )
     int pthread_spin_trylock(pthread_spinlock_t*);
     int pthread_spin_unlock(pthread_spinlock_t*);
 }
+else version( NetBSD )
+{
+    int pthread_spin_init(pthread_spinlock_t*, int);
+    int pthread_spin_destroy(pthread_spinlock_t*);
+    int pthread_spin_lock(pthread_spinlock_t*);
+    int pthread_spin_trylock(pthread_spinlock_t*);
+    int pthread_spin_unlock(pthread_spinlock_t*);
+}
 else version (OSX)
 {
 }
@@ -648,6 +774,24 @@ else version( FreeBSD )
     int pthread_mutexattr_settype(pthread_mutexattr_t*, int) @trusted;
     int pthread_setconcurrency(int);
 }
+else version( NetBSD )
+{
+    enum
+    {
+        PTHREAD_MUTEX_NORMAL        = 0,
+        PTHREAD_MUTEX_ERRORCHECK    = 1,
+        PTHREAD_MUTEX_RECURSIVE     = 2,
+        PTHREAD_MUTEX_TYPE_MAX
+    }
+    enum PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_ERRORCHECK;
+
+    int pthread_attr_getguardsize(in pthread_attr_t*, size_t*);
+    int pthread_attr_setguardsize(pthread_attr_t*, size_t);
+    int pthread_getconcurrency();
+    int pthread_mutexattr_gettype(pthread_mutexattr_t*, int*);
+    int pthread_mutexattr_settype(pthread_mutexattr_t*, int) @trusted;
+    int pthread_setconcurrency(int);
+}
 else version (Solaris)
 {
     enum
@@ -698,6 +842,10 @@ else version( FreeBSD )
 {
     int pthread_getcpuclockid(pthread_t, clockid_t*);
 }
+else version( NetBSD )
+{
+
+}
 else version (OSX)
 {
 }
@@ -740,6 +888,12 @@ else version( FreeBSD )
     int pthread_rwlock_timedrdlock(pthread_rwlock_t*, in timespec*);
     int pthread_rwlock_timedwrlock(pthread_rwlock_t*, in timespec*);
 }
+else version( NetBSD )
+{
+    int pthread_mutex_timedlock(pthread_mutex_t*, in timespec*);
+    int pthread_rwlock_timedrdlock(pthread_rwlock_t*, in timespec*);
+    int pthread_rwlock_timedwrlock(pthread_rwlock_t*, in timespec*);
+}
 else version (Solaris)
 {
     int pthread_mutex_timedlock(pthread_mutex_t*, in timespec*);
@@ -876,6 +1030,24 @@ else version( FreeBSD )
     int pthread_setschedparam(pthread_t, int, sched_param*);
     // int pthread_setschedprio(pthread_t, int); // not implemented
 }
+else version( NetBSD )
+{
+    enum
+    {
+        PTHREAD_SCOPE_PROCESS   = 0,
+        PTHREAD_SCOPE_SYSTEM    = 0x1
+    }
+
+    int pthread_attr_getinheritsched(in pthread_attr_t*, int*);
+    int pthread_attr_getschedpolicy(in pthread_attr_t*, int*);
+    int pthread_attr_getscope(in pthread_attr_t*, int*);
+    int pthread_attr_setinheritsched(pthread_attr_t*, int);
+    int pthread_attr_setschedpolicy(pthread_attr_t*, int);
+    int pthread_attr_setscope(in pthread_attr_t*, int);
+    int pthread_getschedparam(pthread_t, int*, sched_param*);
+    int pthread_setschedparam(pthread_t, int, sched_param*);
+    //int pthread_setschedprio(pthread_t, int);
+}
 else version (Solaris)
 {
     enum
@@ -953,6 +1125,15 @@ else version( FreeBSD )
     int pthread_attr_setstackaddr(pthread_attr_t*, void*);
     int pthread_attr_setstacksize(pthread_attr_t*, size_t);
 }
+else version( NetBSD )
+{
+    int pthread_attr_getstack(in pthread_attr_t*, void**, size_t*);
+    int pthread_attr_getstackaddr(in pthread_attr_t*, void**);
+    int pthread_attr_getstacksize(in pthread_attr_t*, size_t*);
+    int pthread_attr_setstack(pthread_attr_t*, void*, size_t);
+    int pthread_attr_setstackaddr(pthread_attr_t*, void*);
+    int pthread_attr_setstacksize(pthread_attr_t*, size_t);
+}
 else version (Solaris)
 {
     int pthread_attr_getstack(in pthread_attr_t*, void**, size_t*);
@@ -1006,6 +1187,15 @@ else version( FreeBSD )
     int pthread_rwlockattr_getpshared(in pthread_rwlockattr_t*, int*);
     int pthread_rwlockattr_setpshared(pthread_rwlockattr_t*, int);
 }
+else version( NetBSD )
+{
+    int pthread_condattr_getpshared(in pthread_condattr_t*, int*);
+    int pthread_condattr_setpshared(pthread_condattr_t*, int);
+    int pthread_mutexattr_getpshared(in pthread_mutexattr_t*, int*);
+    int pthread_mutexattr_setpshared(pthread_mutexattr_t*, int);
+    int pthread_rwlockattr_getpshared(in pthread_rwlockattr_t*, int*);
+    int pthread_rwlockattr_setpshared(pthread_rwlockattr_t*, int);
+}
 else version( OSX )
 {
     int pthread_condattr_getpshared(in pthread_condattr_t*, int*);
