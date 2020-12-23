# $NetBSD$

DISTNAME=	zrythm-1.0.0-alpha.6.0.1
PKGNAME=	zrythm-1.0.0
CATEGORIES=	games
MASTER_SITES=	https://www.zrythm.org/releases/
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	dressupgeekout@gmail.com
HOMEPAGE=	https://www.zrythm.org
COMMENT=	XXX FIXME
LICENSE=	isc

USE_LANGUAGES=	c c++

# AFAICT, cmake(1) is used as a "driver" for pkg-config(1), if that makes
# any sense
USE_CMAKE=	yes

.include "../../archivers/zstd/buildlink3.mk"
.include "../../audio/libsamplerate/buildlink3.mk"
.include "../../audio/lilv/buildlink3.mk"
.include "../../audio/rubberband/buildlink3.mk"
.include "../../devel/SDL2/buildlink3.mk"
.include "../../devel/glib2/buildlink3.mk"
.include "../../lang/guile22/buildlink3.mk"
.include "../../math/fftw/buildlink3.mk"
.include "../../math/fftwf/buildlink3.mk"
.include "../../textproc/libyaml/buildlink3.mk"
.include "../../wip/libaudec/buildlink3.mk"
.include "../../wip/libcyaml/buildlink3.mk"
.include "../../wip/reproc/buildlink3.mk"
.include "../../x11/gtk3/buildlink3.mk"
.include "../../x11/gtksourceview4/buildlink3.mk"

.include "../../devel/meson/build.mk"
.include "../../mk/bsd.pkg.mk"
