# $NetBSD$

DISTNAME=	moonlight-embedded-2.5.3
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_GITHUB:=moonlight-stream/}
GITHUB_RELEASE=	v${PKGVERSION_NOREV}
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://moonlight-stream.org/
COMMENT=	GameStream client
LICENSE=	gnu-gpl-v3

USE_LANGUAGES=	c c++
USE_CMAKE=	yes
USE_TOOLS+=	pkg-config

#WRKSRC=		${WRKDIR}/${DISTNAME}

# Work around the fact that the distfile is a tarbomb
EXTRACT_DIR=	${WRKSRC}

#BUILD_MAKE_FLAGS+=	debug
#INSTALL_MAKE_FLAGS+=	INSTALL_ROOT=${DESTDIR}

pre-extract:
	${MKDIR} ${WRKSRC}

.include "../../audio/libopus/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
