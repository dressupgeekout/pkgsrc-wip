# $NetBSD$

DISTNAME=	zrythm-1.0.0-beta.3.4.1
PKGNAME=	zrythm-1.0.0
CATEGORIES=	audio
MASTER_SITES=	https://www.zrythm.org/releases/
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://www.zrythm.org
COMMENT=	Highly automated and intuitive digital audio workstation
LICENSE=	isc

USE_LANGUAGES=	c c++

# AFAICT, cmake(1) is used as a "driver" for pkg-config(1), if that makes
# any sense
USE_CMAKE=	yes

# xdg-open(1) needs to be in the PATH at configure-time.
DEPENDS+=	xdg-utils>=0:../../misc/xdg-utils

.include "../../archivers/zstd/buildlink3.mk"
.include "../../audio/libaudec/buildlink3.mk"
.include "../../audio/libsamplerate/buildlink3.mk"
.include "../../audio/lilv/buildlink3.mk"
.include "../../audio/rubberband/buildlink3.mk"
.include "../../devel/SDL2/buildlink3.mk"
.include "../../devel/glib2/buildlink3.mk"
.include "../../devel/pango/buildlink3.mk"
.include "../../graphics/graphene/buildlink3.mk"
.include "../../lang/guile22/buildlink3.mk"
.include "../../math/fftw/buildlink3.mk"
.include "../../math/fftwf/buildlink3.mk"
.include "../../textproc/libcyaml/buildlink3.mk"
.include "../../textproc/libyaml/buildlink3.mk"
.include "../../wip/reproc/buildlink3.mk"
.include "../../x11/gtk3/buildlink3.mk"
.include "../../x11/gtksourceview4/buildlink3.mk"

.include "../../devel/meson/build.mk"
.include "../../mk/bsd.pkg.mk"
