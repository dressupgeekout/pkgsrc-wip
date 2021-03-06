# $NetBSD: options.mk,v 1.10 2018/01/04 20:31:28 adam Exp $

PKG_OPTIONS_VAR=	PKG_OPTIONS.openmpi
PKG_SUPPORTED_OPTIONS=	debug f90 java
PKG_SUGGESTED_OPTIONS+= f90

.include "../../mk/bsd.options.mk"

.if !empty(PKG_OPTIONS:Mdebug)
CONFIGURE_ARGS+=	--enable-debug
.endif

PLIST_VARS+=		f08 f90 java

.if !empty(PKG_OPTIONS:Mf90)
USE_LANGUAGES+=		fortran
GCC_REQD+=		4.7
CONFIGURE_ARGS+=	--enable-mpi-fortran=yes
PLIST.f90=		yes
.  if ${OPSYS} == "Darwin" || ${OPSYS} == "Linux"
PLIST.f08=		yes
.  endif
.else
CONFIGURE_ARGS+=	--enable-mpi-fortran=no
.endif

.if !empty(PKG_OPTIONS:Mjava)
CONFIGURE_ARGS+=	--enable-mpi-java
PLIST.java=		yes
.include "../../mk/java-vm.mk"
.else
CONFIGURE_ARGS+=	--disable-mpi-java
.endif

CONFIGURE_ARGS+=	--without-sge
