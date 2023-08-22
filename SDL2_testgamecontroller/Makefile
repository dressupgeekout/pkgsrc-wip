# $NetBSD$

DISTNAME=	SDL2-2.28.2
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GITHUB:=libsdl-org/}
GITHUB_PROJECT=	SDL
GITHUB_RELEASE=	release-${PKGVERSION_NOREV}

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://www.libsdl.org/
COMMENT=	Gamepad configuration utility from SDL
LICENSE=	zlib

USE_LANGUAGES=	c c++
USE_TOOLS+=	gmake pkg-config
GNU_CONFIGURE=	yes

CONFIGURE_DIRS=	${WRKSRC}/test
BUILD_TARGET=	testgamecontroller

.include "../../devel/SDL2/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
