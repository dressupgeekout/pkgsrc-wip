$NetBSD$

XXX

--- Sources/nCine/Threading/PosixThread.cpp.orig	2023-08-23 00:16:22.903594206 -0700
+++ Sources/nCine/Threading/PosixThread.cpp	2023-08-23 00:27:10.437407694 -0700
@@ -20,6 +20,11 @@
 #	include <pthread_np.h>
 #endif
 
+#if defined(__NetBSD__)
+#	include <pthread.h>
+#	include <sched.h>
+#endif
+
 #if defined(DEATH_TARGET_SWITCH)
 #	include <switch.h>
 #endif
@@ -137,12 +142,20 @@
 
 		const auto nameLength = strnlen(name, MaxThreadNameLength);
 		if (nameLength <= MaxThreadNameLength - 1) {
+#if defined(__NetBSD__)
+			pthread_setname_np(tid_, "%s", (char *)name);
+#else
 			pthread_setname_np(tid_, name);
+#endif
 		} else {
 			char buffer[MaxThreadNameLength];
 			memcpy(buffer, name, MaxThreadNameLength - 1);
 			buffer[MaxThreadNameLength - 1] = '\0';
+#if defined(__NetBSD__)
+			pthread_setname_np(tid_, "%s", (char *)name);
+#else
 			pthread_setname_np(tid_, name);
+#endif
 		}
 	}
 #endif
@@ -154,8 +167,10 @@
 #else
 		const auto nameLength = strnlen(name, MaxThreadNameLength);
 		if (nameLength <= MaxThreadNameLength - 1) {
-#if !defined(DEATH_TARGET_APPLE)
+#if !defined(DEATH_TARGET_APPLE) && !defined(__NetBSD__)
 			pthread_setname_np(pthread_self(), name);
+#elif defined(__NetBSD__)
+			pthread_setname_np(pthread_self(), "%s", (char *)name);
 #else
 			pthread_setname_np(name);
 #endif
@@ -163,8 +178,10 @@
 			char buffer[MaxThreadNameLength];
 			memcpy(buffer, name, MaxThreadNameLength - 1);
 			buffer[MaxThreadNameLength - 1] = '\0';
-#if !defined(DEATH_TARGET_APPLE)
+#if !defined(DEATH_TARGET_APPLE) && !defined(__NetBSD__)
 			pthread_setname_np(pthread_self(), name);
+#elif defined(__NetBSD__)
+			pthread_setname_np(pthread_self(), "%s", (char *)name);
 #else
 			pthread_setname_np(name);
 #endif
@@ -237,6 +254,8 @@
 			boolean_t getDefault = FALSE;
 			thread_policy_get(threadPort, THREAD_AFFINITY_POLICY, reinterpret_cast<thread_policy_t>(&threadAffinityPolicy), &policyCount, &getDefault);
 			affinityMask.affinityTag_ = threadAffinityPolicy.affinity_tag;
+#elif defined(__NetBSD__)
+			pthread_getaffinity_np(tid_, cpuset_size(affinityMask.cpuSet_), affinityMask.cpuSet_);
 #else
 			pthread_getaffinity_np(tid_, sizeof(cpu_set_t), &affinityMask.cpuSet_);
 #endif
@@ -254,6 +273,8 @@
 			thread_affinity_policy_data_t threadAffinityPolicy = { affinityMask.affinityTag_ };
 			thread_port_t threadPort = pthread_mach_thread_np(tid_);
 			thread_policy_set(threadPort, THREAD_AFFINITY_POLICY, reinterpret_cast<thread_policy_t>(&threadAffinityPolicy), THREAD_AFFINITY_POLICY_COUNT);
+#elif defined(__NetBSD__)
+			pthread_setaffinity_np(tid_, cpuset_size(affinityMask.cpuSet_), affinityMask.cpuSet_);
 #else
 			pthread_setaffinity_np(tid_, sizeof(cpu_set_t), &affinityMask.cpuSet_);
 #endif
