# $NetBSD$

DISTNAME=	furnace-0.6pre4
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_GITHUB:=tildearrow/}
GITHUB_TAG=	v${PKGVERSION_NOREV}-hotfix

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://www.pangeasoft.net/nano/index.html
COMMENT=	Source port of Nanosaur from Pangea Software
LICENSE=	cc-by-nc-sa-v4.0-license

GITHUB_SUBMODULES=	\
	superctr adpcm ef7a217154badc3b99978ac481b268c8aab67bd8 extern/adpcm

#WRKSRC=		${WRKDIR}/Nanosaur-${PKGVERSION_NOREV}

USE_CMAKE=	yes
USE_LANGUAGES=	c c++
USE_TOOLS+=	pax pkg-config

CMAKE_ARGS+=	-DSYSTEM_FFTW=ON
CMAKE_ARGS+=	-DSYSTEM_FMT=ON
CMAKE_ARGS+=	-DSYSTEM_LIBSNDFILE=ON
CMAKE_ARGS+=	-DSYSTEM_SDL2=ON
CMAKE_ARGS+=	-DSYSTEM_ZLIB=ON

#INSTALLATION_DIRS+=	bin
#INSTALLATION_DIRS+=	libexec
#INSTALLATION_DIRS+=	share/nanosaur/Data

#pre-configure:
#	${SED} -e 's,@@PREFIX@@,${PREFIX},g' \
#		${FILESDIR}/nanosaur.template > ${WRKDIR}/nanosaur

#do-install:
#	${INSTALL_SCRIPT} ${WRKDIR}/nanosaur ${DESTDIR}${PREFIX}/bin/nanosaur
#	${INSTALL_PROGRAM} ${WRKSRC}/Nanosaur ${DESTDIR}${PREFIX}/libexec
#	(cd ${WRKSRC}/Data && ${PAX} -r -w . ${DESTDIR}${PREFIX}/share/nanosaur/Data)

.include "../../audio/libsndfile/buildlink3.mk"
.include "../../devel/SDL2/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../math/fftw/buildlink3.mk"
.include "../../textproc/fmtlib/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
