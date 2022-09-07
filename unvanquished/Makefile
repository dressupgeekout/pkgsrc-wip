# $NetBSD$

DISTNAME=	unvanquished-0.53.2
CATEGORIES=	games
GIT_REPO=	https://github.com/Unvanquished/Unvanquished.git
GIT_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://unvanquished.net/
COMMENT=	An FPS/RTS hybrid game powered by the Daemon engine
LICENSE=	gnu-gpl-v3

USE_CMAKE=	yes
USE_LANGUAGES=	c c++

WRKSRC=		${WRKDIR}/Unvanquished

# Out-of-tree build is required.
CONFIGURE_DIRS+=	${WRKDIR}/build
CMAKE_ARG_PATH=		${WRKSRC}

pre-configure:
	${MKDIR} ${WRKDIR}/build

#USE_TOOLS+=	pkg-config
#
#INSTALLATION_DIRS+=	bin
#INSTALLATION_DIRS+=	libexec
#INSTALLATION_DIRS+=	share/nanosaur/Data
#
#pre-configure:
#	${SED} -e 's,@@PREFIX@@,${PREFIX},g' \
#		${FILESDIR}/nanosaur.template > ${WRKDIR}/nanosaur
#
#do-install:
#	${INSTALL_SCRIPT} ${WRKDIR}/nanosaur ${DESTDIR}${PREFIX}/bin/nanosaur
#	${INSTALL_PROGRAM} ${WRKSRC}/Nanosaur ${DESTDIR}${PREFIX}/libexec
#	(cd ${WRKSRC}/Data && ${PAX} -r -w . ${DESTDIR}${PREFIX}/share/nanosaur/Data)

#zlib, libgmp, libnettle, libcurl, SDL2, GLEW, libpng, libjpeg ≥ 8, libwebp ≥
#0.2.0, Freetype, Lua, OpenAL, libogg, libvorbis, libtheora, libopus,
#libopusfile.

.include "../../devel/SDL2/buildlink3.mk"

#.include "../../audio/libopus/buildlink3.mk"
#.include "../../audio/opusfile/buildlink3.mk"
#.include "../../graphics/freetype2/buildlink3.mk"
#.include "../../grapics/libwebp/buildlink3.mk"
#.include "../../grapics/png/buildlink3.mk"
#.include "../../multimedia/libogg/buildlink3.mk"
#.include "../../multimedia/libtheora/buildlink3.mk"
#.include "../../security/nettle/buildlink3.mk"
#.include "../../www/curl/buildlink3.mk"

.include "../../wip/mk/git-package.mk"
.include "../../mk/bsd.pkg.mk"
