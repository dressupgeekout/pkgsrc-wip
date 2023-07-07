# $NetBSD$

DISTNAME=	veloren-0.15.0
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_GITLAB:=veloren/}
GITLAB_PROJECT=	veloren
GITLAB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://www.veloren.net/
COMMENT=	Multiplayer voxel RPG
LICENSE=	gnu-gpl-v3

WRKSRC=		${WRKDIR}/veloren-${GITLAB_TAG}

.include "cargo-depends.mk"

do-install:
	${DO_NADA}

.include "../../audio/alsa-lib/buildlink3.mk"
.include "../../lang/rust/cargo.mk"
.include "../../mk/bsd.pkg.mk"
