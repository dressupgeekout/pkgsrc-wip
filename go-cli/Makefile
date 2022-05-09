# $NetBSD$

DISTNAME=	go-cli-2.6.0
GITHUB_PROJECT=	cli
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GITHUB:=urfave/}
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	dressupgeekout@gmail.com
HOMEPAGE=	https://github.com/urfave/cli
COMMENT=	A simple package for building command line apps in Go 
LICENSE=	mit

GO_DIST_BASE=	${GITHUB_PROJECT}-${PKGVERSION_NOREV}
GO_SRCPATH=	github.com/urfave/cli:w

.include "../../lang/go/go-package.mk"
.include "../../mk/bsd.pkg.mk"
