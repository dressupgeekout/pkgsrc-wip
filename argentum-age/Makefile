# $NetBSD$

DISTNAME=	anura-0
PKGNAME=	argentum-age-0
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_GITHUB:=anura-engine/}
GITHUB_PROJECT=	anura
GITHUB_TAG=	c36ae6b7b969d37c07755d1c2431131701d7989b

ARGENTUM=	49376c8184b683bc253aac6bdf414eb65194b2fd.tar.gz
IMGUI=		d7ce9212f1d321a1470c8ab8dceeed222c55a3ce.tar.gz
DISTFILES+=	${DEFAULT_DISTFILES} ${ARGENTUM} ${IMGUI}

SITES.${ARGENTUM}=	${MASTER_SITE_GITHUB:=davewx7/}citadel/archive/
SITES.${IMGUI}=		${MASTER_SITE_GITHUB:=anura-engine/}imgui/archive/

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://argentumage.com/
COMMENT=	Turn based strategy game
LICENSE=	mit # XXX: AND the bespoke thing in anura/LICENSE

WRKSRC=		${WRKDIR}/anura-${GITHUB_TAG}

NO_CONFIGURE=	yes
USE_LANGUAGES=	c c++
USE_TOOLS+=	gmake pax pkg-config

CFLAGS+=	-Wno-deprecated-declarations
CFLAGS+=	-Wno-sign-compare

INSTALLATION_DIRS+=	bin
INSTALLATION_DIRS+=	libexec/argentum-age
INSTALLATION_DIRS+=	share/argentum-age

ANURA_DIRS+=	xxx

FROGATTO_DIRS+=	xxx

FROGATTO_FILES+=	master-config.cfg
FROGATTO_FILES+=	module.cfg

# imgui is a submodule of anura.
post-extract:
	${RM} -rf ${WRKSRC}/imgui
	${LN} -sf ${WRKDIR}/imgui-${IMGUI:S/${EXTRACT_SUFX}//} ${WRKSRC}/imgui

pre-configure:
	${SED} -e 's,@@PREFIX@@,${PREFIX},g' \
		${FILESDIR}/argentum.template > ${WRKDIR}/argentum

# Copy Argentum Age's data into the Anura distribution, then install it all
# as just one complete "Argentum Age."
pre-install:
	${MKDIR} ${WRKDIR}/anura/modules/argentum

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/argentum-age ${DESTDIR}${PREFIX}/bin/argentum

.include "../../audio/SDL2_mixer/buildlink3.mk"
.include "../../devel/SDL2/buildlink3.mk"
.include "../../devel/boost-headers/buildlink3.mk"
.include "../../devel/boost-libs/buildlink3.mk"
.include "../../fonts/SDL2_ttf/buildlink3.mk"
.include "../../graphics/SDL2_image/buildlink3.mk"
.include "../../graphics/cairo/buildlink3.mk"
.include "../../graphics/freetype2/buildlink3.mk"
.include "../../graphics/glew/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
