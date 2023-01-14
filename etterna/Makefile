# $NetBSD$

DISTNAME=	etterna-0.72.1
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_GITHUB:=etternagame/}
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://etternaonline.com/
COMMENT=	Advanced rhythm game focused on keyboard play 
LICENSE=	mit

USE_LANGUAGES=	c c++

# C++20
GCC_REQD+=	8.0

USE_CMAKE=	yes
CMAKE_ARGS+=	-DBUILD_EXAMPLES=OFF
CMAKE_ARGS+=	-DBUILD_TESTS=OFF

BUILD_DEPENDS+=	python27>0:../../lang/python27

.include "../../databases/sqlite3/buildlink3.mk"
.include "../../graphics/MesaLib/buildlink3.mk"
.include "../../multimedia/libogg/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
.include "../../www/curl/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
