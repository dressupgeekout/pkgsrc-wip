# $NetBSD$

PKGNAME=	factor-0.98
DISTNAME=	factor-src-${PKGVERSION_NOREV}
CATEGORIES=	lang
MASTER_SITES=	http://downloads.factorcode.org/releases/${PKGVERSION_NOREV}/
EXTRACT_SUFX=	.zip

MAINTAINER=	cfkoch@edgebsd.org
HOMEPAGE=	http://factorcode.org/
COMMENT=	A practical stack language
LICENSE=	2-clause-bsd

WRKSRC=		${WRKDIR}/factor
USE_TOOLS+=	bash gmake
USE_LANGUAGES+=	c c++
NO_CONFIGURE=	yes

MAKE_FILE=	GNUmakefile
BUILD_TARGET=	default

.include "../../mk/bsd.pkg.mk"
