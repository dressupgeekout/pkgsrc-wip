# $NetBSD$

PKGNAME=	mojoshader-1
CATEGORIES=	devel
HG_REPO=	https://hg.icculus.org/icculus/mojoshader
HG_TAG=		25000edc0176

MAINTAINER=	cfkoch@edgebsd.org
HOMEPAGE=	${HG_REPO}
COMMENT=	XXX FIXME
LICENSE=	zlib

USE_LANGUAGES+=	c c++
USE_CMAKE=	yes
BUILD_TARGET=	mojoshader

do-install:
	${INSTALL_PROGRAM_DIR} ${DESTDIR}${PREFIX}/lib
	${INSTALL_LIB} ${WRKSRC}/lib${BUILD_TARGET}.a ${DESTDIR}${PREFIX}/lib

.include "../../devel/SDL2/buildlink3.mk"
.include "../../wip/mk/hg-package.mk"
.include "../../mk/bsd.pkg.mk"
