# $NetBSD$

DISTNAME=	furnace-0.6pre7
CATEGORIES=	audio
MASTER_SITES=	${MASTER_SITE_GITHUB:=tildearrow/}
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://github.com/tildearrow/furnace/
COMMENT=	Multi-system chiptune tracker compatible with DefleMask modules
LICENSE=	gnu-gpl-v2

GITHUB_SUBMODULES=	\
	superctr adpcm ef7a217154badc3b99978ac481b268c8aab67bd8 extern/adpcm

USE_LANGUAGES=	c c++
USE_TOOLS+=	pkg-config

CMAKE_ARGS+=	-DBUILD_GUI:BOOL=ON
CMAKE_ARGS+=	-DSUPPORT_XP:BOOL=OFF
CMAKE_ARGS+=	-DSYSTEM_FFTW:BOOL=ON
CMAKE_ARGS+=	-DSYSTEM_FMT:BOOL=ON
CMAKE_ARGS+=	-DSYSTEM_LIBSNDFILE:BOOL=ON
CMAKE_ARGS+=	-DSYSTEM_SDL2:BOOL=ON
CMAKE_ARGS+=	-DSYSTEM_ZLIB:BOOL=ON
CMAKE_ARGS+=	-DUSE_RTMIDI:BOOL=OFF
CMAKE_ARGS+=	-DWITH_JACK:BOOL=OFF

# XXX ??
CMAKE_ARGS+=	-DCMAKE_SKIP_INSTALL_RPATH:BOOL=ON

.include "../../audio/libsndfile/buildlink3.mk"
.include "../../devel/cmake/build.mk"
.include "../../devel/SDL2/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../graphics/MesaLib/buildlink3.mk"
.include "../../math/fftw/buildlink3.mk"
.include "../../textproc/fmtlib/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
