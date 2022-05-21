# $NetBSD: Makefile,v 1.4 2012/10/03 21:32:46 asau Exp $

DISTNAME=	oolite-source-1.90
PKGNAME=	${DISTNAME:S/source-//}
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_GITHUB:=OoliteProject/}
GITHUB_RELEASE=	${PKGVERSION_NOREV}
LICENSE=	gnu-gpl-v2
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	pkgsrc-users@pkgsrc.org
COMMENT=	Space sim game, inspired by Elite
HOMEPAGE=	http://www.oolite.org/

USE_LANGUAGES=	objc
USE_TOOLS+=	bash gmake
NO_CONFIGURE=	yes
MAKE_FILE=	GNUmakefile

.include "../../audio/espeak/buildlink3.mk"
.include "../../audio/libvorbis/buildlink3.mk"
.include "../../audio/openal-soft/buildlink3.mk"
.include "../../devel/SDL/buildlink3.mk"
.include "../../devel/gnustep-base/buildlink3.mk"
.include "../../devel/nspr/buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
.include "../../multimedia/libogg/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
