# $NetBSD$

DISTNAME=	purple-matrix-0.1.0
CATEGORIES=	chat
MASTER_SITES=	${MASTER_SITE_GITHUB:=matrix-org/}
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://www.matrix.org/
COMMENT=	Libpurple protocol plugin for Matrix 
LICENSE=	gnu-gpl-v2

NO_CONFIGURE=	yes
USE_LANGUAGES=	c c++

USE_TOOLS+=	gmake pkg-config

.include "../../chat/libpurple/buildlink3.mk"
.include "../../databases/sqlite3/buildlink3.mk"
.include "../../devel/glib2/buildlink3.mk"
.include "../../security/olm/buildlink3.mk"
.include "../../textproc/json-glib/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
