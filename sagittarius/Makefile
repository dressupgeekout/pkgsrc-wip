# $NetBSD$

DISTNAME=	sagittarius-0.9.13
CATEGORIES=	lang
MASTER_SITES=	${MASTER_SITE_GITHUB:=ktakashi/}
GITHUB_PROJECT=	sagittarius-scheme
GITHUB_RELEASE=	v${PKGVERSION_NOREV}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://ktakashi.github.io/
COMMENT=	R6RS/R7RS Scheme system
LICENSE=	2-clause-bsd

USE_TOOLS+=	pkg-config
USE_LANGUAGES=	c c++

# sagittarius, and its library, is used during the build
# so allow the library to be found at build time
MAKE_ENV+=	LD_LIBRARY_PATH=${WRKSRC}/${CMAKE_BUILD_DIR}/build

PKGCONFIG_OVERRIDE+=	cmake/sagittarius.pc.in
CMAKE_CONFIGURE_ARGS+=	-DMACHINE_GNU_PLATFORM:string=${MACHINE_GNU_PLATFORM}

.include "../../databases/unixodbc/buildlink3.mk"
.include "../../devel/boehm-gc/buildlink3.mk"
.include "../../devel/cmake/build.mk"
.include "../../devel/libatomic/buildlink3.mk"
.include "../../devel/libffi/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
