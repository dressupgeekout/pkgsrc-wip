# $NetBSD$

DISTNAME=	vili-1.0.0
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GITHUB:=Sygmei/}
GITHUB_PROJECT=	Vili
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	dressupgeekout@gmail.com
COMMENT=	A simplistic readable data format
LICENSE=	mit

USE_LANGUAGES+=	c c++17

USE_CMAKE=	yes
CMAKE_ARGS+=	-DBUILD_TESTS:BOOL=OFF

.include "../../mk/bsd.pkg.mk"
