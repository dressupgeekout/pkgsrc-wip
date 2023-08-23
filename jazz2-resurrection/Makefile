# $NetBSD$

DISTNAME=	jazz2-resurrection-2.1.0
CATEGORIES=	games
GITHUB_PROJECT=	jazz2-native
MASTER_SITES=	${MASTER_SITE_GITHUB:=deathkiller/}

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://deat.tk/jazz2/
COMMENT=	Native C++ reimplementation of Jazz Jackrabbit 2
LICENSE=	gnu-gpl-v2

USE_LANGUAGES=	c c++

# C++20 stuff
GCC_REQD+=	10.4.0

WRKSRC=		${WRKDIR}/${GITHUB_PROJECT}-${PKGVERSION_NOREV}

CMAKE_ARGS+=	-DNCINE_DOWNLOAD_DEPENDENCIES=OFF
CMAKE_ARGS+=	-DNCINE_PREFERRED_BACKEND=SDL2

.include "../../audio/libopenmpt/buildlink3.mk"
.include "../../audio/libvorbis/buildlink3.mk"
.include "../../audio/openal-soft/buildlink3.mk"
.include "../../devel/SDL2/buildlink3.mk"
.include "../../devel/cmake/build.mk"
.include "../../graphics/glew/buildlink3.mk"
.include "../../graphics/glfw/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
