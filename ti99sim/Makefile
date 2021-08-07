# $NetBSD$

PKGNAME=	ti99sim-${VERSION}
DISTNAME=	ti99sim-${PKGVERSION_NOREV}.src
VERSION=	0.16.0
CATEGORIES=	emulators
MASTER_SITES=	https://www.mrousseau.org/programs/ti99sim/archives/
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	dressupgeekout@gmail.com
HOMEPAGE=	https://www.mrousseau.org/programs/ti99sim
COMMENT=	XXX
LICENSE=	gnu-lgpl-v2

WRKSRC=		${WRKDIR}/ti99sim-${PKGVERSION_NOREV}
USE_LANGUAGES=	c c++
USE_TOOLS+=	gmake
GCC_REQD+=	9.3 # for -std=c++2a

MAKE_FILE=	Makefile.linux
BUILD_TARGET=	ti99sim

.include "../../devel/SDL2/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
