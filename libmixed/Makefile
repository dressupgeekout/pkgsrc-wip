# $NetBSD$

DISTNAME=	libmixed-2.0
CATEGORIES=	audio
#MASTER_SITES=	${MASTER_SITE_GITHUB:=Shirakumo/}
MASTER_SITES=	${MASTER_SITE_GITHUB:=dressupgeekout/}
GITHUB_TAG=	3f98ad24605fa81368e2dd0dba2d5953ca5c4767

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://github.com/Shirakumo/libmixed
COMMENT=	Low-level audio mixer pipeline library
LICENSE=	zlib

USE_LANGUAGES+=	c c++
USE_CMAKE=	yes

CMAKE_ARGS+=	-DBUILD_EXAMPLES=OFF
CMAKE_ARGS+=	-DBUILD_TESTER=OFF
CMAKE_ARGS+=	-DBUILD_SIMD=OFF

INSTALLATION_DIRS+=	lib

do-install:
	#${INSTALL_SCRIPT} ${WRKDIR}/SymphonyOfEmpires ${DESTDIR}${PREFIX}/bin/SymphonyOfEmpires
	#${INSTALL_PROGRAM} ${WRKSRC}/SymphonyOfEmpires ${DESTDIR}${PREFIX}/libexec
	#${INSTALL_LIB} ${WRKSRC}/eng3d/libeng3d.so ${DESTDIR}${PREFIX}/lib
	#(cd ${WRKSRC}/mods && ${PAX} -r -w . ${DESTDIR}${PREFIX}/share/SymphonyOfEmpires/mods)

.include "../../mk/bsd.pkg.mk"
