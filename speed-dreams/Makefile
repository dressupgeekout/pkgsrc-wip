# $NetBSD$

DISTNAME=	speed-dreams-src-base-2.2.3-r7616
PKGNAME=	speed-dreams-2.2.3
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=speed-dreams/}
EXTRACT_SUFX=	.tar.xz

EXTRACT_DIR=	${WRKDIR}/${DISTNAME}

USE_CMAKE=	yes
USE_LANGUAGES+=	c c++

.include "../../audio/libvorbis/buildlink3.mk"
.include "../../databases/sqlite3/buildlink3.mk"
.include "../../devel/SDL2/buildlink3.mk"
.include "../../games/plib/buildlink3.mk"
.include "../../graphics/osg/buildlink3.mk"
.include "../../multimedia/libogg/buildlink3.mk"
.include "../../net/enet/buildlink3.mk"
.include "../../textproc/expat/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
