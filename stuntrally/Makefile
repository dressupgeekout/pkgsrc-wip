# $NetBSD$

DISTNAME=	stuntrally-2.6.2
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_GITHUB:=stuntrally/}

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://stuntrally.tuxfamily.org/
COMMENT=	3D racing game
LICENSE=	gnu-gpl-v3

USE_CMAKE=	yes
USE_LANGUAGES=	c c++

# Out-of-tree build is required.
CONFIGURE_DIRS+=	${WRKDIR}/build

CMAKE_ARG_PATH=	${WRKSRC}

pre-configure:
	${MKDIR} ${WRKDIR}/build

.include "../../devel/SDL2/buildlink3.mk"
.include "../../devel/boost-headers/buildlink3.mk"
.include "../../devel/boost-libs/buildlink3.mk"
.include "../../devel/bullet/buildlink3.mk"
.include "../../devel/ogre/buildlink3.mk"
.include "../../graphics/mygui/buildlink3.mk"
.include "../../net/enet/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
