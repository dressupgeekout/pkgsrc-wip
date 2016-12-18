# $NetBSD$

DISTNAME=	speed-dreams-src-base-2.1.1-r6404
PKGNAME=	speed-dreams-2.1.1
CATEGORIES=	games
EXTRACT_SUFX=	.tar.xz
#MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=speed-dreams/}

WRKSRC=	${WRKDIR}/speeddreams

do-fetch:
	@${DO_NADA}

do-extract:
	mkdir -p ${WRKSRC}
	tar -xJ -f /home/charlotte/dl/speed-dreams-src-base-2.2.1-r6404${EXTRACT_SUFX} -C ${WRKSRC}

NO_CHECKSUM=	yes

USE_CMAKE=	yes
USE_LANGUAGES+=	c c++

.include "../../audio/libvorbis/buildlink3.mk"
.include "../../databases/sqlite3/buildlink3.mk"
.include "../../devel/SDL2/buildlink3.mk"
.include "../../graphics/osg/buildlink3.mk"
.include "../../multimedia/libogg/buildlink3.mk"
.include "../../net/enet/buildlink3.mk"
.include "../../textproc/expat/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
