# $NetBSD$

PKGNAME=	spring-103.0.1
CATEGORIES=	games

GIT_REPOSITORIES=	spring
GIT_REPO.spring=	https://github.com/spring/spring.git
GIT_TAG.spring=		${PKGVERSION_NOREV}
#GIT_BRANCH.spring=	103-0-1-cfkoch-netbsd

MAINTAINER=	cfkoch@edgebsd.org
HOMEPAGE=	https://springrts.com/
COMMENT=	Real-time strategy game engine
#LICENSE=	FIXME

WRKSRC=		${WRKDIR}/spring
USE_LANGUAGES=	c c++
GCC_REQD+=	4.9
USE_TOOLS+=	pkg-config

USE_CMAKE=	yes
CMAKE_ARGS+=	-DAI_TYPES:STRING=NATIVE # Do not depend on Java on purpose

# XXX not sure why we can't insist on our prebuilt Assimp
CMAKE_ARGS+=	-DASSIMP_BUILD_STATIC_LIB:BOOL=OFF 
CMAKE_ARGS+=	-DASSIMP_NO_EXPORT:BOOL=OFF
CMAKE_ARGS+=	-DSDL2_INCLUDE_DIR:PATH=${PREFIX}/include/SDL2

BUILD_DEPENDS+=	p7zip>=0:../../archivers/p7zip
BUILD_DEPENDS+=	docbook>=0:../../textproc/docbook

# XXX also wants to build squish from vendored source :\

.include "../../audio/openal-soft/buildlink3.mk"
.include "../../devel/boost-headers/buildlink3.mk"
.include "../../devel/boost-libs/buildlink3.mk"
.include "../../devel/devIL/buildlink3.mk"
.include "../../devel/SDL2/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../graphics/glew/buildlink3.mk"
.include "../../lang/libunwind/buildlink3.mk"
.include "../../www/curl/buildlink3.mk"
.include "../../wip/assimp/buildlink3.mk"
.include "../../wip/mk/git-package.mk"
.include "../../mk/bsd.pkg.mk"
