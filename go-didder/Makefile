# $NetBSD$

DISTNAME=	go-didder-1.1.0
GITHUB_PROJECT=	didder
CATEGORIES=	graphics
MASTER_SITES=	${MASTER_SITE_GITHUB:=makeworld-the-better-one/}
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	dressupgeekout@gmail.com
HOMEPAGE=	https://github.com/makeworld-the-better-one/didder/
COMMENT=	A fast and accurate command-line image dithering tool
LICENSE=	gnu-gpl-v3

GO_DIST_BASE=	${GITHUB_PROJECT}-${PKGVERSION_NOREV}
GO_SRCPATH=	github.com/makeworld-the-better-one/didder

.include "../../graphics/go-imaging/buildlink3.mk"
.include "../../wip/go-dither/buildlink3.mk"
.include "../../lang/go/go-package.mk"
.include "../../mk/bsd.pkg.mk"
