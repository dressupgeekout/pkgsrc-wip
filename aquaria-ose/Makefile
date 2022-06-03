# $NetBSD$

DISTNAME=	OSE-v1.002
PKGNAME=	aquaria-ose-1.002
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_GITHUB:=AquariaOSE/}
GITHUB_PROJECT=	Aquaria
GITHUB_TAG=	OSE-v${PKGVERSION_NOREV}

MAINTAINER=	charlotte@NetBSD.org
COMMENT=	Aquaria Open Source Edition
LICENSE=	gnu-gpl-v2

EXTRACT_USING=	gtar
USE_CMAKE=	yes
USE_LANGUAGES=	c c++
USE_TOOLS+=	pkg-config

.include "../../audio/openal-soft/buildlink3.mk"
.include "../../devel/SDL/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
