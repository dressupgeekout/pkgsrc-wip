# $NetBSD$

DISTNAME=	stuntrally-tracks-2.6.2
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_GITHUB:=stuntrally/}
GITHUB_PROJECT=	tracks

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://stuntrally.tuxfamily.org/
COMMENT=	Race track data for Stunt Rally
LICENSE=	gnu-gpl-v3

USE_CMAKE=	yes
USE_LANGUAGES=	c c++
WRKSRC=		${WRKDIR}/${GITHUB_PROJECT}-${PKGVERSION_NOREV}

CMAKE_ARGS+=	-DSHARE_INSTALL=${PREFIX}/share/games/stuntrally

.include "../../mk/bsd.pkg.mk"
