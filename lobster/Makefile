# $NetBSD$

DISTNAME=	lobster-70e44d475995b03363dedf9c2bcb817b0db8fdcf
CATEGORIES=	lang
MASTER_SITES=	${MASTER_SITE_GITHUB:=aardappel/}
GITHUB_TAG=	${PKGVERSION_NOREV}
GITHUB_RELEASE=	${DISTNAME}
GITHUB_TYPE=	tag

MAINTAINER=	cfkoch@edgebsd.org
HOMEPAGE=	http://strlen.com/lobster
COMMENT=	The Lobster programming language
LICENSE=	apache-2.0

WRKSRC=		${WRKDIR}/${DISTNAME}/dev

USE_LANGUAGES+=	c c++
USE_CMAKE=	yes

# Needed for '#include <charconv>' support, introduced in C++17
GCC_REQD+=		8.1

CMAKE_ARGS+=	-DLOBSTER_ENGINE=OFF

.include "../../mk/bsd.pkg.mk"
