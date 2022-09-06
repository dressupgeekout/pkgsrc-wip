# $NetBSD$

DISTNAME=	quetoo-0
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_GITHUB:=jdolan/}
GITHUB_TAG=	570ceae6e6f105c7e69e804596e947f372186ca5

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	http://quetoo.org/
COMMENT=	Free first-person shooter
LICENSE=	gnu-gpl-v2

USE_LANGUAGES=	c c++
GNU_CONFIGURE=	yes
USE_TOOLS+=	autoconf automake pkg-config

pre-configure:
	cd ${WRKSRC} && autoreconf -fi

.include "../../devel/SDL2/buildlink3.mk"
.include "../../devel/glib2/buildlink3.mk"
.include "../../graphics/SDL2_image/buildlink3.mk"
.include "../../textproc/libxml2/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
