# $NetBSD$

DISTNAME=	openage-0.4.1
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_GITHUB:=SFTtech/}
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	cfkoch@edgebsd.org
HOMEPAGE=	https://openage.dev/
COMMENT=	Open source clone of the Age of Empires II engine
LICENSE=	modified-bsd # XXX XXX XXX

USE_LANGUAGES=	c c++
USE_CMAKE=	yes

CMAKE_ARGS+=	-DALLOW_IN_SOURCE_BUILD=TRUE

.include "../../lang/python37/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
