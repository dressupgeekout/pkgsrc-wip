# $NetBSD$

PKGNAME=	godot-2.1.1
CATEGORIES=	devel games
MASTER_SITES=	# defined

GIT_REPOSITORIES=	godot
GIT_REPO.godot=		https://github.com/godotengine/godot.git
GIT_TAG.godot=		${PKGVERSION_NOREV}-stable

MAINTAINER=	cfkoch@edgebsd.org
COMMENT=	Multi-platform 2D and 3D game engine
LICENSE=	mit

WRKSRC=		${WRKDIR}/godot
USE_LANGUAGES+=	c c++
USE_TOOLS+=	pkg-config

BUILD_DEPENDS+=	scons>=0:../../devel/scons

SCONS_ARGS=
SCONS_ARGS+=	platform=x11
SCONS_ARGS+=	builtin-freetype=no
SCONS_ARGS+=	builtin-glew=no
SCONS_ARGS+=	builtin-libogg=no
SCONS_ARGS+=	builtin-libpng=no
SCONS_ARGS+=	builtin-libtheora=no
SCONS_ARGS+=	builtin-libvorbis=no
SCONS_ARGS+=	builtin-libewbp=no
SCONS_ARGS+=	builtin-openssl=no
SCONS_ARGS+=	builtin-opus=no
SCONS_ARGS+=	builtin-speex=no
SCONS_ARGS+=	builtin-zlib=no
SCONS_ARGS+=	pulseaudio=yes # XXX should be an /option/ 
SCONS_ARGS+=	udev=no

do-build:
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${PREFIX}/bin/scons ${SCONS_ARGS}

.include "../../audio/libopus/buildlink3.mk"
.include "../../audio/libvorbis/buildlink3.mk"
.include "../../audio/pulseaudio/buildlink3.mk"
.include "../../audio/speex/buildlink3.mk"
.include "../../graphics/freetype2/buildlink3.mk"
.include "../../graphics/glew/buildlink3.mk"
.include "../../graphics/libwebp/buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
.include "../../graphics/MesaLib/buildlink3.mk"
.include "../../multimedia/libogg/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
.include "../../wip/mk/git-package.mk"
.include "../../mk/jpeg.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
