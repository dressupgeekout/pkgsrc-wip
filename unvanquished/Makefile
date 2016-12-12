# $NetBSD$

PKGNAME=	unvanquished-0
CATEGORIES=	games

GIT_REPOSITORIES+=		unvanquished
#GIT_REPO.unvanquished=		https://github.com/Unvanquished/Unvanquished.git
GIT_REPO.unvanquished=		/home/charlotte/devel/Unvanquished
GIT_BRANCH.unvanquished=	netbsd_support_wip

WRKSRC=		${WRKDIR}/unvanquished/build
USE_LANGUAGES+=	c c++
USE_CMAKE=	yes
BUILD_DIRS=	build
CMAKE_ARG_PATH=	..

post-extract:
	${MKDIR} ${WRKSRC}

BUILD_DEPENDS+=	python27>=0:../../lang/python27
BUILD_DEPENDS+=	py27-jinja2>=0:../../textproc/py-jinja2
BUILD_DEPENDS+=	py27-yaml>=0:../../textproc/py-yaml

.include "../../audio/libopus/buildlink3.mk"
.include "../../audio/libvorbis/buildlink3.mk"
.include "../../audio/openal-soft/buildlink3.mk"
.include "../../audio/opusfile/buildlink3.mk"
.include "../../devel/gmp/buildlink3.mk"
.include "../../devel/SDL2/buildlink3.mk"
.include "../../graphics/freetype2/buildlink3.mk"
.include "../../graphics/glew/buildlink3.mk"
.include "../../graphics/libwebp/buildlink3.mk"
.include "../../graphics/MesaLib/buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
.include "../../multimedia/libogg/buildlink3.mk"
.include "../../multimedia/libtheora/buildlink3.mk"
.include "../../net/GeoIP/buildlink3.mk"
#.include "../../security/libsodium/buildlink3.mk"
.include "../../security/nettle/buildlink3.mk"
.include "../../www/curl/buildlink3.mk"
.include "../../devel/ncursesw/buildlink3.mk"
.include "../../mk/jpeg.buildlink3.mk"
.include "../../wip/mk/git-package.mk"
.include "../../mk/bsd.pkg.mk"
