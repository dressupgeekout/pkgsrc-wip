# $NetBSD$

DISTNAME=	libdispatch-5.2
CATEGORIES=	sysutils
MASTER_SITES=	${MASTER_SITE_GITHUB:=apple/}
GITHUB_PROJECT=	swift-corelibs-libdispatch
GITHUB_TAG=	swift-${PKGVERSION_NOREV}-branch

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://apple.github.io/swift-corelibs-libdispatch/
COMMENT=	The libdispatch project, for concurrency on multicore hardware
LICENSE=	apache

PKGSRC_COMPILER=	clang

USE_CMAKE=	yes

USE_LANGUAGES+=	c c++

.include "../../mk/bsd.pkg.mk"
