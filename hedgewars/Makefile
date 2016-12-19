# $NetBSD$

PKGNAME=	hedgewars-0.9.22
CATEGORIES=	games

##DISTNAME=	hedgewars-src-${PKGVERSION_NOREV}
##EXTRACT_SUFX=	.tar.bz2
##MASTER_SITES=	http://download.gna.org/hedgewars/

GIT_REPOSITORIES=	hedgewars
#GIT_REPO.hedgewars=	https://github.com/hedgewars/hw.git
GIT_REPO.hedgewars=	/home/charlotte/devel/hedgewars/hw
#GIT_TAG.hedgewars=	0.9.22-release
GIT_BRANCH.hedgewars=	0.9.22-release-cfkoch-WIP

MAINTAINER=	cfkoch@edgebsd.org
COMMENT=	Turn-based strategy game
HOMEPAGE=	http://www.hedgewars.org/
LICENSE=	gnu-gpl-v2

WRKSRC=		${WRKDIR}/hedgewars
USE_LANGUAGES+=	c c++ pascal
USE_CMAKE=	yes
CMAKE_ARGS+=	-DNOPNG:BOOL=OFF
CMAKE_ARGS+=	-DNOSERVER:BOOL=ON # avoids needing Haskell
CMAKE_ARGS+=	-DNOVIDEOREC:BOOL=ON # avoids needing libav
CMAKE_ARGS+=	-DLUA_SYSTEM:BOOL=ON
CMAKE_ARGS+=	-DPHYSFS_SYSTEM:BOOL=ON

#BUILD_DEPENDS+=	gpc>=0:../../lang/gpc XXX not for netbsd

.include "../../devel/physfs/buildlink3.mk"
.include "../../devel/SDL2/buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
#.include "../../lang/ghc7/buildlink3.mk"
.include "../../lang/lua51/buildlink3.mk"
.include "../../wip/mk/git-package.mk"
.include "../../mk/bsd.pkg.mk"
