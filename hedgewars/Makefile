# $NetBSD$

PKGNAME=	hedgewars-1.0.2
DISTNAME=	hedgewars-src-${PKGVERSION_NOREV}
CATEGORIES=	games
EXTRACT_SUFX=	.tar.bz2
MASTER_SITES=	https://www.hedgewars.org/download/releases/

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	http://www.hedgewars.org/
COMMENT=	Turn-based strategy game
LICENSE=	gnu-gpl-v2

WRKSRC=		${WRKDIR}/${DISTNAME}/hedgewars
USE_LANGUAGES+=	c c++ pascal
USE_CMAKE=	yes

CMAKE_ARGS+=	-DNOPNG:BOOL=OFF
CMAKE_ARGS+=	-DNOSERVER:BOOL=ON # avoids needing Haskell
CMAKE_ARGS+=	-DNOVIDEOREC:BOOL=ON # avoids needing libav
CMAKE_ARGS+=	-DLUA_SYSTEM:BOOL=ON
CMAKE_ARGS+=	-DPHYSFS_SYSTEM:BOOL=ON

# XXX needs FreePascal
#BUILD_DEPENDS+=	gpc>=0:../../wip/fpc

# For the server
#.include "../../lang/ghc7/buildlink3.mk"

.include "../../audio/SDL2_mixer/buildlink3.mk"
.include "../../devel/SDL2/buildlink3.mk"
.include "../../devel/physfs/buildlink3.mk"
.include "../../fonts/SDL2_ttf/buildlink3.mk"
.include "../../graphics/SDL2_image/buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
.include "../../lang/lua51/buildlink3.mk"
.include "../../net/SDL2_net/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
