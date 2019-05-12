# $NetBSD$

PKGNAME=	herculesws-2019.05.05+3
DISTNAME=	openclonk-${PKGVERSION_NOREV}-src
VERSION=	8.0
CATEGORIES=	games
MASTER_SITES=	http://www.openclonk.org/builds/release/${VERSION}/

MAINTAINER=	cfkoch@edgebsd.org
HOMEPAGE=	https://github.com/HerculesWS/Hercules
COMMENT=	MMORPG server package
LICENSE=	isc

#WRKSRC=		${WRKDIR}/openclonk-release-${PKGVERSION_NOREV}-src
EXTRACT_USING=	gtar
USE_LANGUAGES=	c c++
USE_TOOLS+=	pkg-config
GNU_CONFIGURE=	yes

#.include "../../audio/SDL2_mixer/buildlink3.mk"
#.include "../../audio/freealut/buildlink3.mk"
#.include "../../audio/libvorbis/buildlink3.mk"
#.include "../../audio/openal-soft/buildlink3.mk"
#.include "../../devel/SDL2/buildlink3.mk"
#.include "../../devel/glib2/buildlink3.mk"
#.include "../../devel/readline/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
#.include "../../graphics/freetype2/buildlink3.mk"
#.include "../../graphics/glew/buildlink3.mk"
#.include "../../graphics/jpeg/buildlink3.mk"
#.include "../../graphics/png/buildlink3.mk"
#.include "../../multimedia/libogg/buildlink3.mk"
#.include "../../x11/gtk3/buildlink3.mk"
#.include "../../x11/gtksourceview3/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
