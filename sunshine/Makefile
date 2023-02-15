# $NetBSD$

DISTNAME=	sunshine-0.18.3
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_GITHUB:=LizardByte/}
GITHUB_TAG=	v${PKGVERSION_NOREV}
DISTFILES+=	${DEFAULT_DISTFILES} ${MINIUPNP} ${MOONLIGHT} \
			${ENET}

MINIUPNP=		014c9df8ee7a36e5bf85aa619062a2d4b95ec8f6.tar.gz
SITES.${MINIUPNP}=	${MASTER_SITE_GITHUB:=miniupnp/}miniupnp/archive/

MOONLIGHT=		07beb0f0a520106c49fda7664369b29e6938ea6e.tar.gz
SITES.${MOONLIGHT}=	${MASTER_SITE_GITHUB:=moonlight-stream/}moonlight-common-c/archive/

ENET=			4cde9cc3dcc5c30775a80da1de87f39f98672a31.tar.gz
SITES.${ENET}=		${MASTER_SITE_GITHUB:=cgutman/}enet/archive/

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://app.lizardbyte.dev/
COMMENT=	GameStream host for Moonlight
LICENSE=	gnu-gpl-v3

USE_CMAKE=	yes

USE_LANGUAGES=	c c++
USE_TOOLS+=	pkg-config

WRKSRC=		${WRKDIR}/Sunshine-${PKGVERSION_NOREV}

# XXX
CMAKE_ARGS+=	-DSUNSHINE_ENABLE_DRM=OFF

CMAKE_ARGS+_=	-DSUNSHINE_ENABLE_CUDA=OFF

post-extract:
	${RM} -rf ${WRKSRC}/third-party/miniupnp
	${LN} -sf ${WRKDIR}/miniupnp-${MINIUPNP:S/.tar.gz//} ${WRKSRC}/third-party/miniupnp
	${RM} -rf ${WRKSRC}/third-party/moonlight-common-c
	${LN} -sf ${WRKDIR}/moonlight-common-c-${MOONLIGHT:S/.tar.gz//} ${WRKSRC}/third-party/moonlight-common-c
	${RM} -rf ${WRKSRC}/third-party/moonlight-common-c/enet
	${LN} -sf ${WRKDIR}/enet-${ENET:S/.tar.gz//} ${WRKSRC}/third-party/moonlight-common-c/enet

.include "../../devel/boost-libs/buildlink3.mk"
.include "../../multimedia/ffmpeg4/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
.include "../../www/curl/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
