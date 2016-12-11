# $NetBSD$

PKGNAME=	ryzom-0.12.0
CATEGORIES=	games

HG_REPOSITORIES=	ryzom-core
#HG_REPOSITORIES+=	ryzom-data
#HG_REPO.ryzom-core=	https://bitbucket.org/ryzom/ryzomcore
HG_REPO.ryzom-core=	/home/charlotte/devel/ryzomcore
HG_TAG.ryzom-core=	ryzomcore/v0.12.0

WRKSRC=		${WRKDIR}/ryzom-core/code/build
BUILD_DIRS=	build
USE_CMAKE=	yes
CMAKE_ARG_PATH=	..
USE_LANGUAGES+=	c c++
GCC_REQD+=	4.9

post-extract:
	mkdir -p ${WRKSRC}/build

.include "../../audio/libvorbis/buildlink3.mk"
.include "../../audio/openal-soft/buildlink3.mk"
.include "../../databases/mysql57-client/buildlink3.mk"
.include "../../devel/boost-libs/buildlink3.mk"
.include "../../graphics/freetype2/buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
.include "../../textproc/libxml2/buildlink3.mk"
.include "../../multimedia/libogg/buildlink3.mk"
.include "../../wip/libsquish/buildlink3.mk"
.include "../../www/curl/buildlink3.mk"
.include "../../www/libwww/buildlink3.mk"
.include "../../wip/mk/hg-package.mk"
.include "../../mk/bsd.pkg.mk"
