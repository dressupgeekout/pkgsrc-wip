# $NetBSD$

DISTNAME=	opentoonz-1.7.1
CATEGORIES=	multimedia
MASTER_SITES=	${MASTER_SITE_GITHUB:=opentoonz/}
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://opentoonz.github.io/
COMMENT=	Open source animation production software
LICENSE=	modified-bsd

USE_TOOLS+=	pkg-config
USE_LANGUAGES+=	c c++

WRKSRC=		${WRKDIR}/${DISTNAME}/toonz/sources

CMAKE_MODULE_PATH_OVERRIDE+=	../cmake

.include "../../archivers/lz4/buildlink3.mk"
.include "../../archivers/lzo/buildlink3.mk"
.include "../../archivers/xz/buildlink3.mk"
.include "../../devel/boost-libs/buildlink3.mk"
.include "../../devel/cmake/build.mk"
.include "../../devel/libusb1/buildlink3.mk"
.include "../../graphics/freeglut/buildlink3.mk"
.include "../../graphics/freetype2/buildlink3.mk"
.include "../../graphics/glew/buildlink3.mk"
.include "../../graphics/glu/buildlink3.mk"
.include "../../graphics/libmypaint/buildlink3.mk"
.include "../../graphics/opencv/buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
.include "../../math/gsl/buildlink3.mk"
.include "../../math/superlu/buildlink3.mk"
.include "../../x11/qt5-qtbase/buildlink3.mk" 
.include "../../x11/qt5-qtmultimedia/buildlink3.mk" 
.include "../../x11/qt5-qtscript/buildlink3.mk" 
.include "../../x11/qt5-qtserialport/buildlink3.mk" 
.include "../../x11/qt5-qtsvg/buildlink3.mk" 
.include "../../x11/qt5-qttools/buildlink3.mk" 
.include "../../mk/jpeg.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
