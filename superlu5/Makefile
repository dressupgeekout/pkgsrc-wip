# $NetBSD$

DISTNAME=		superlu_5.2.1
PKGNAME=		superlu-5.2.1
CATEGORIES=		math
MASTER_SITES=		http://crd.lbl.gov/~xiaoye/SuperLU/

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://crd.lbl.gov/~xiaoye/SuperLU/
COMMENT=		ANSI C routine library for the solution of sparse linear systems

# /usr/bin/ar: ../libsuperlu.a: Error reading dlamch.o: File truncated
MAKE_JOBS_SAFE=		no

DEPENDS+=		blas-[0-9]*:../../math/blas

USE_TOOLS+=		gmake

WRKSRC=			${WRKDIR}/SuperLU_5.2.1
BUILD_TARGET=		superlulib

do-install:
	${INSTALL_LIB_DIR} ${DESTDIR}${PREFIX}/lib
	${INSTALL_LIB} ${WRKSRC}/SRC/libsuperlu.a ${DESTDIR}${PREFIX}/lib
	${INSTALL_DATA_DIR} ${DESTDIR}${PREFIX}/include/superlu
	${INSTALL_DATA} ${WRKSRC}/SRC/*.h ${DESTDIR}${PREFIX}/include/superlu

.include "../../mk/bsd.pkg.mk"
