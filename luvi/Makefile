# $NetBSD$

PKGNAME=	luvi-2.9.3
CATEGORIES=	devel
LICENSE=	apache-2.0
MASTER_SITES=	${MASTER_SITE_GITHUB:=luvit/luvi}

COMMENT=	A project in between luv and luvit
MAINTAINER=	cfkoch@edgebsd.org
HOMEPAGE=	https://github.com/luvit/luvi/

USE_CMAKE=	yes

WRKSRC=	${WRKDIR}/luvi

.include "../../lang/LuaJIT2/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
