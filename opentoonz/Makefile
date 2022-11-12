# $NetBSD$

DISTNAME=	opentoonz-${GITHUB_TAG:S/v//}
GITHUB_TAG=	v1.6.0
CATEGORIES=	multimedia
MASTER_SITES=	${MASTER_SITE_GITHUB:=opentoonz/}

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://opentoonz.github.io/
COMMENT=	Open source animation production software
LICENSE=	modified-bsd

EXTRACT_USING=	gtar
USE_CMAKE=	yes
USE_TOOLS+=	pkg-config
USE_LANGUAGES+=	c c++

WRKSRC=		${WRKDIR}/${DISTNAME}/toonz/sources

CMAKE_MODULE_PATH_OVERRIDE+=	../cmake

.include "../../archivers/lz4/buildlink3.mk"
.include "../../archivers/lzo/buildlink3.mk"
.include "../../archivers/xz/buildlink3.mk"
.include "../../devel/boost-libs/buildlink3.mk"
.include "../../devel/libusb1/buildlink3.mk"
.include "../../graphics/freeglut/buildlink3.mk"
.include "../../graphics/freetype2/buildlink3.mk"
.include "../../graphics/glew/buildlink3.mk"
.include "../../graphics/glu/buildlink3.mk"
.include "../../graphics/libmypaint/buildlink3.mk"
.include "../../graphics/opencv/buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
.include "../../math/superlu/buildlink3.mk"
.include "../../x11/qt5-qtbase/buildlink3.mk" 
.include "../../x11/qt5-qtmultimedia/buildlink3.mk" 
.include "../../x11/qt5-qtscript/buildlink3.mk" 
.include "../../x11/qt5-qttools/buildlink3.mk" 
.include "../../mk/jpeg.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
