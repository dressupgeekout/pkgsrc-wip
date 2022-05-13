# $NetBSD$

DISTNAME=	OpenShadingLanguage-1.11.17.0
CATEGORIES=	graphics
MASTER_SITES=	${MASTER_SITE_GITHUB:=AcademySoftwareFoundation/}
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	dressupgeekout@gmail.com
HOMEPAGE=	https://github.com/AcademySoftwareFoundation/OpenShadingLanguage/
COMMENT=	Advanced shading language for production GI renderers 
LICENSE=	modified-bsd

USE_CMAKE=	yes
USE_TOOLS+=	pkg-config
USE_LANGUAGES=	c c++11

# C++14
GCC_REQD+=	5.1


#CMAKE_ARGS+=	-DUSE_EXTERNAL_TINYXML:BOOL=ON
#CMAKE_ARGS+=	-DUSE_EXTERNAL_YAML:BOOL=ON
#CMAKE_ARGS+=	-DOCIO_BUILD_APPS:BOOL=OFF
#CMAKE_ARGS+=	-DOCIO_BUILD_SHARED:BOOL=ON
#CMAKE_ARGS+=	-DOCIO_BUILD_PYGLUE:BOOL=OFF
CMAKE_ARGS+=	-DUSE_LLVM_BITCODE:BOOL=OFF
CMAKE_ARGS+=	-DCMAKE_CXX_STANDARD=14
CMAKE_ARG_PATH=	${WRKSRC}

CONFIGURE_DIRS+=	${WRKDIR}/build

#.if ${MACHINE_ARCH} != "i386" && ${MACHINE_ARCH} != "x86_64"
#CMAKE_ARGS+=	-DOCIO_USE_SSE:BOOL=OFF
#.endif
#
#PKGCONFIG_OVERRIDE+=	export/pkgconfig/OpenColorIO.pc.in
#
#BUILDLINK_TRANSFORM+=	rm:-Werror

#INSTALLATION_DIRS+=	lib/cmake/OpenColorIO

pre-configure:
	${MKDIR} -p ${WRKDIR}/build

#post-install:
#	${MV} ${DESTDIR}${PREFIX}/lib/static/*.a ${DESTDIR}${PREFIX}/lib
#	${MV} ${DESTDIR}${PREFIX}/*.cmake ${DESTDIR}${PREFIX}/lib/cmake/OpenColorIO
#	${MV} ${DESTDIR}${PREFIX}/cmake/*.cmake ${DESTDIR}${PREFIX}/lib/cmake/OpenColorIO

.include "../../devel/boost-headers/buildlink3.mk"
.include "../../graphics/openexr/buildlink3.mk"
.include "../../graphics/openimageio/buildlink3.mk"
.include "../../math/imath/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
