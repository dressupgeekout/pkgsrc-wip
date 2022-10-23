# $NetBSD$

DISTNAME=	pencil2d-0.6.6
CATEGORIES=	multimedia
MASTER_SITES=	${MASTER_SITE_GITHUB:=pencil2d/}
GITHUB_PROJECT=	pencil
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://www.pencil2d.org/
COMMENT=	2D animation tool
LICENSE=	gnu-gpl-v2

USE_LANGUAGES=	c c++
USE_TOOLS+=	gmake

QMAKE_ARGS+=	pencil2d.pro
QMAKE_ARGS+=	NO_TESTS=1
#QMAKE_ARGS+=	PREFIX=${PREFIX}

#BUILD_MAKE_FLAGS+=	core_lib
#BUILD_MAKE_FLAGS+=	
#INSTALL_MAKE_FLAGS+=	INSTALL_ROOT=${DESTDIR}
#
#pre-extract:
#	${MKDIR} ${WRKSRC}

MAKE_JOBS_SAFE=	no

do-configure:
	cd ${WRKSRC} && ${SETENV} ${CONFIGURE_ENV} ${QTDIR}/bin/qmake ${QMAKE_ARGS}

.include "../../x11/qt5-qtsvg/buildlink3.mk"
.include "../../x11/qt5-qttools/buildlink3.mk"
.include "../../x11/qt5-qtxmlpatterns/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"

# sudo apt install qt5-default qt5-qmake libqt5xmlpatterns5-dev
# libqt5svg5-dev qtmultimedia5-dev qttools5-dev-tools
