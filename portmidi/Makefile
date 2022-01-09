# $NetBSD$

DISTNAME=	portmidi-2.0.2
CATEGORIES=	audio
MASTER_SITES=	${MASTER_SITE_GITHUB:=PortMidi/}
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	dressupgeekout@gmail.com
HOMEPAGE=	http://portmedia.sourceforge.net/portmidi
COMMENT=	Cross-platform MIDI input/output library
LICENSE=	mit

EXTRACT_USING=	gtar
USE_LANGUAGES=	c c++
USE_CMAKE=	yes

BUILD_DEPENDS+=	cmake>=3.22.0:../../devel/cmake

.include "../../mk/bsd.pkg.mk"
