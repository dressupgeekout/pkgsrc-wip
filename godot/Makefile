# $NetBSD$

PKGNAME=	godot-2.1.2
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

SCONS_ARGS=	# defined
SCONS_ARGS+=	platform=x11
SCONS_ARGS+=	target=debug
SCONS_ARGS+=	tools=yes
SCONS_ARGS+=	gdscript=yes
SCONS_ARGS+=	vsproj=no
SCONS_ARGS+=	builtin_freetype=no
SCONS_ARGS+=	builtin_glew=no
SCONS_ARGS+=	builtin_libogg=no
SCONS_ARGS+=	builtin_libpng=no
SCONS_ARGS+=	builtin_libtheora=no
SCONS_ARGS+=	builtin_libvorbis=no
SCONS_ARGS+=	builtin_libwebp=no
SCONS_ARGS+=	builtin_openssl=no
SCONS_ARGS+=	builtin_opus=no
SCONS_ARGS+=	builtin_speex=no
SCONS_ARGS+=	builtin_zlib=no
SCONS_ARGS+=	pulseaudio=no # XXX should be an /option/
SCONS_ARGS+=	udev=no

SCONS_ARGS+=	module_gdscript_enabled=no
SCONS_ARGS+=	module_gridmap_enabled=no
SCONS_ARGS+=	module_chibi_enabled=no
SCONS_ARGS+=	module_cscript_enabled=no
SCONS_ARGS+=	module_dds_enabled=no
SCONS_ARGS+=	module_etc1_enabled=no
SCONS_ARGS+=	module_freetype_enabled=no
SCONS_ARGS+=	module_ik_enabled=no
SCONS_ARGS+=	module_jpg_enabled=no
SCONS_ARGS+=	module_mpc_enabled=no
SCONS_ARGS+=	module_ogg_enabled=no
SCONS_ARGS+=	module_openssl_enabled=no
SCONS_ARGS+=	module_opus_enabled=no
SCONS_ARGS+=	module_pbm_enabled=no
SCONS_ARGS+=	module_pvr_enabled=no
SCONS_ARGS+=	module_speex_enabled=no
SCONS_ARGS+=	module_squish_enabled=no
SCONS_ARGS+=	module_theora_enabled=no
SCONS_ARGS+=	module_vorbis_enabled=no
SCONS_ARGS+=	module_webp_enabled=no

do-build:
	cd ${WRKSRC} && ${PKGSRC_SETENV} ${MAKE_ENV} ${PREFIX}/bin/scons ${SCONS_ARGS}

.include "../../audio/libopus/buildlink3.mk"
.include "../../audio/libvorbis/buildlink3.mk"
.include "../../audio/opusfile/buildlink3.mk"
.include "../../audio/pulseaudio/buildlink3.mk"
.include "../../audio/speex/buildlink3.mk"
.include "../../graphics/MesaLib/buildlink3.mk"
.include "../../graphics/freetype2/buildlink3.mk"
.include "../../graphics/glew/buildlink3.mk"
.include "../../graphics/libwebp/buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
.include "../../multimedia/libogg/buildlink3.mk"
.include "../../multimedia/libtheora/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
.include "../../wip/mk/git-package.mk"
.include "../../mk/jpeg.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
