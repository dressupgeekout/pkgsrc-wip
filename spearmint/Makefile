# $NetBSD$

DISTNAME=	spearmint-1.0.0
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_GITHUB:=zturtleman/}
GITHUB_TAG=	release-${PKGVERSION_NOREV}

MAINTAINER=	cfkoch@edgebsd.org
HOMEPAGE=	https://clover.moe/spearmint/
COMMENT=	Video game engine based on Quake 3

WRKSRC=		${WRKDIR}/spearmint-${GITHUB_TAG}
EXTRACT_USING=	gtar
USE_LANGUAGES=	c
NO_CONFIGURE=	yes
USE_TOOLS+=	bash gmake pkg-config

BUILD_MAKE_FLAGS+=	BUILD_CLIENT=1
BUILD_MAKE_FLAGS+=	BUILD_SERVER=1
BUILD_MAKE_FLAGS+=	USE_INTERNAL_LIBS=0
BUILD_MAKE_FLAGS+=	USE_MUMBLE=0
BUILD_TARGET=		release 

.include "../../audio/libmad/buildlink3.mk"
.include "../../audio/libvorbis/buildlink3.mk"
.include "../../audio/openal-soft/buildlink3.mk"
.include "../../audio/opusfile/buildlink3.mk"
.include "../../devel/SDL2/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../graphics/freetype2/buildlink3.mk"
.include "../../graphics/jpeg/buildlink3.mk"
.include "../../multimedia/libogg/buildlink3.mk"
.include "../../www/curl/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
