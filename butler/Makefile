# $NetBSD$

DISTNAME=	butler-15.18.0
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_GITHUB:=itchio/}
GITHUB_PROJECT=	butler
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	cfkoch@edgebsd.org
HOMEPAGE=	https://itch.io
COMMENT=	itch.io command line helper tool
#LICENSE=	apache-2.0

EXTRACT_USING=	gtar

GO_DIST_BASE=	${DISTNAME}
GO_SRCPATH=	github.com/itchio/butler

.include "../../lang/go/go-package.mk"
.include "../../mk/bsd.pkg.mk"
