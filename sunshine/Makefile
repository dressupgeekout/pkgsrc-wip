# $NetBSD$

DISTNAME=	sunshine-0.18.3
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_GITHUB:=LizardByte/}
GITHUB_TAG=	v${PKGVERSION_NOREV}

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

.include "../../devel/boost-libs/buildlink3.mk"
.include "../../multimedia/ffmpeg4/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
.include "../../www/curl/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
