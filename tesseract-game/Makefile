# $NetBSD$

PKGNAME=	tesseract-game-0.0.20140512
DISTNAME=	tesseract_2014_05_12_first_edition_linux
CATEGORIES=	games
MASTER_SITES=	https://download.tuxfamily.org/tesseract/
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://tesseract.gg/
COMMENT=	First-person shooter game based on Cube 2

USE_TOOLS+=	gmake pkg-config
USE_LANGUAGES=	c c++03

WRKSRC=		${WRKDIR}/tesseract
BUILD_DIRS+=	src

# compares `this` against null
CXXFLAGS+=	-fno-delete-null-pointer-checks

INSTALLATION_DIRS+=	bin
INSTALLATION_DIRS+=	libexec
INSTALLATION_DIRS+=	share/tesseract

pre-configure:
	${SED}	-e 's,@PREFIX@,${PREFIX},g' \
		< ${FILESDIR}/tess_wrapper.sh.in > \
		${WRKDIR}/tess_client
	${SED}	-e 's,@PREFIX@,${PREFIX},g' \
		< ${FILESDIR}/tess_wrapper.sh.in > \
		${WRKDIR}/tess_server

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/tess_client \
	    ${DESTDIR}${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKDIR}/tess_server \
	    ${DESTDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/src/tess_client \
	    ${DESTDIR}${PREFIX}/libexec
	${INSTALL_PROGRAM} ${WRKSRC}/src/tess_server \
	    ${DESTDIR}${PREFIX}/libexec
	${CP} -R ${WRKSRC}/config \
	    ${DESTDIR}${PREFIX}/share/tesseract
	${CP} -R ${WRKSRC}/media \
	    ${DESTDIR}${PREFIX}/share/tesseract

.include "../../audio/SDL2_mixer/buildlink3.mk"
.include "../../graphics/MesaLib/buildlink3.mk"
.include "../../graphics/SDL2_image/buildlink3.mk"
.include "../../devel/SDL2/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../net/enet/buildlink3.mk"
.include "../../x11/libX11/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
