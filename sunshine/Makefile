# $NetBSD$

DISTNAME=	sunshine-0.18.4
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_GITHUB:=LizardByte/}
GITHUB_TAG=	v${PKGVERSION_NOREV}

GITHUB_SUBMODULES+=	\
	miniupnp miniupnp 014c9df8ee7a36e5bf85aa619062a2d4b95ec8f6 third-party/miniupnp

GITHUB_SUBMODULES+=	\
	moonlight-stream moonlight-common-c 07beb0f0a520106c49fda7664369b29e6938ea6e third-party/moonlight-common-c

GITHUB_SUBMODULES+=	\
	cgutman enet 4cde9cc3dcc5c30775a80da1de87f39f98672a31 third-party/moonlight-common-c/enet

# eidheim/Simple-Web-Server actually comes form GitLab, not GitHub -- use my
# personal fork instead
GITHUB_SUBMODULES+=	\
	dressupgeekout Simple-Web-Server 2f29926dbbcd8a0425064d98c24f37ac50bd0b5b third-party/Simple-Web-Server

GITHUB_SUBMODULES+=	\
	sleepybishop nanors 395e5ada44dd8d5974eaf6bb6b17f23406e3ca72 third-party/nanors

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://app.lizardbyte.dev/
COMMENT=	GameStream host for Moonlight
LICENSE=	gnu-gpl-v3

USE_CMAKE=	yes

USE_LANGUAGES=	c c++
USE_TOOLS+=	pkg-config

WRKSRC=		${WRKDIR}/Sunshine-${PKGVERSION_NOREV}

CMAKE_ARGS+=	-DSUNSHINE_ENABLE_DRM=OFF
CMAKE_ARGS+_=	-DSUNSHINE_ENABLE_CUDA=OFF

.include "../../devel/boost-libs/buildlink3.mk"
.include "../../multimedia/ffmpeg4/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
.include "../../www/curl/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
