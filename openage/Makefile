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

# XXX because cmake's "findpython3" module can't find python3.7(1) ?
CMAKE_ARGS+=	-DPython3_EXECUTABLE=${PREFIX}/bin/python3.7 

TOOL_DEPENDS+=	python37-[0-9]*:../../lang/python37

.include "../../devel/py-cython/buildlink3.mk"
.include "../../lang/python37/buildlink3.mk"
.include "../../math/py-numpy/buildlink3.mk"

.include "../../lang/python/pyversion.mk"
.include "../../mk/bsd.pkg.mk"
