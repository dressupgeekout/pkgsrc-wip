# $NetBSD$

DISTNAME=	ryzomcore-0.0.0
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_GITHUB:=ryzom/}
# 'core4' branch:
GITHUB_TAG=	ad20f0cb92797c1e9e8a7c67bd0802369459a552

# Graphical assets:
#https://cdn.ryzom.dev/pub/assets/ryzomcore_graphics-rev5.7z

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://www.ryzom.com/
COMMENT=	Ryzom Core
LICENSE=	mit # XXX actually agpl3

WRKSRC=		${WRKDIR}/ryzomcore-${GITHUB_TAG}/build
BUILD_DIRS=	build
USE_CMAKE=	yes
USE_LANGUAGES+=	c c++
GCC_REQD+=	4.9

CMAKE_ARG_PATH=	..
CMAKE_ARGS+=	-DWITH_GUI:BOOL=OFF

# Force out-of-tree builds
post-extract:
	mkdir -p ${WRKSRC}

.include "../../audio/libvorbis/buildlink3.mk"
.include "../../audio/openal-soft/buildlink3.mk"
.include "../../databases/mysql57-client/buildlink3.mk"
.include "../../devel/boost-libs/buildlink3.mk"
.include "../../graphics/MesaLib/buildlink3.mk"
.include "../../graphics/freetype2/buildlink3.mk"
.include "../../graphics/giflib/buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
.include "../../multimedia/libogg/buildlink3.mk"
.include "../../textproc/libxml2/buildlink3.mk"
.include "../../wip/libsquish/buildlink3.mk"
.include "../../www/curl/buildlink3.mk"
.include "../../www/libwww/buildlink3.mk"
.include "../../mk/jpeg.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"

# XXX options: Only needed with WITH_GUI
#.include "../../wip/luabind/buildlink3.mk"
