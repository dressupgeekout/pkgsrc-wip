# $NetBSD: Makefile,v 1.4 2012/11/12 16:26:51 othyro Exp $
#

TEXML_VERSION=	2.0.1
DISTNAME=	texml-${TEXML_VERSION}
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	print python
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=getfo/}

MAINTAINER=	kamelderouiche@yahoo.com
HOMEPAGE=	http://getfo.org/texml/
COMMENT=	Convert TeXML to LaTeX or ConTeXt
LICENSE=	mit

USE_LANGUAGES=	# none

PYDISTUTILSPKG=	yes

SUBST_CLASSES+=		paths
SUBST_STAGE.paths=	pre-configure
SUBST_SED.paths+=	-e 's,share/man/man1,${PREFIX}/man/man1,g'
SUBST_FILES.paths+=	setup.py
SUBST_MESSAGE.paths=	Fixing header search paths.


.include "../../lang/python/extension.mk"
.include "../../mk/bsd.pkg.mk"
