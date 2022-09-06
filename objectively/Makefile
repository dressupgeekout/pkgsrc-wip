# $NetBSD$

DISTNAME=	objectively-0
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_GITHUB:=jdolan/}
GITHUB_PROJECT=	Objectively
GITHUB_TAG=	13003c4897b76e9819649539b37f7839fbc35889

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://github.com/jdolan/Objectively
COMMENT=	Object-oriented framework and core library
LICENSE=	zlib

USE_LANGUAGES=	c c++
GNU_CONFIGURE=	yes
USE_TOOLS+=	autoconf automake pkg-config

pre-configure:
	cd ${WRKSRC} && autoreconf -fi

.include "../../devel/check/buildlink3.mk"
.include "../../www/curl/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
