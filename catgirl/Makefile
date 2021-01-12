# $NetBSD$

DISTNAME=	catgirl-0
CATEGORIES=	chat

MAINTAINER=	dressupgeekout@gmail.com
HOMEPAGE=	https://git.causal.agency/catgirl
COMMENT=	TLS-only terminal IRC client
LICENSE=	gnu-gpl-v3

GIT_REPOSITORIES=	catgirl
GIT_REPO.catgirl=	https://git.causal.agency/catgirl.git
WRKSRC=			${WRKDIR}/catgirl

USE_TOOLS+=	gmake

.include "../../mk/curses.buildlink3.mk"
.include "../../wip/mk/git-package.mk"
.include "../../mk/bsd.pkg.mk"
