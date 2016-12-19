# $NetBSD$

PKGNAME=	spring-103.0.1
CATEGORIES=	games

GIT_REPOSITORIES=	spring
GIT_REPO.spring=	https://github.com/spring/spring.git
GIT_TAG.spring=		${PKGVERSION_NOREV}

MAINTAINER=	cfkoch@edgebsd.org
HOMEPAGE=	https://springrts.com/
COMMENT=	Real-time strategy game engine
#LICENSE=	FIXME

WRKSRC=		${WRKDIR}/spring
USE_LANGUAGES=	c c++
GCC_REQD+=	4.9

USE_CMAKE=	yes
CMAKE_ARGS+=	-DAI_TYPES:STRING=NATIVE # Do not depend on Java on purpose

BUILD_DEPENDS+=	p7zip>=0:../../archivers/p7zip
BUILD_DEPENDS+=	docbook>=0:../../textproc/docbook

# XXX also wants to build squish from vendored source

.include "../../audio/openal-soft/buildlink3.mk"
.include "../../devel/boost-headers/buildlink3.mk"
.include "../../devel/boost-libs/buildlink3.mk"
.include "../../devel/devIL/buildlink3.mk"
.include "../../devel/SDL2/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../graphics/glew/buildlink3.mk"
.include "../../lang/libunwind/buildlink3.mk"
# XXX this package does not seem to care that I already have assimp installed
.include "../../wip/assimp/buildlink3.mk"
.include "../../wip/mk/git-package.mk"
.include "../../mk/bsd.pkg.mk"

