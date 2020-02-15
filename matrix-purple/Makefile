# $NetBSD$

DISTNAME=	purple-matrix-git
PKGNAME=	matrix-purple-1d23385e6c22f63591fcbfc85c09999953c388ed
CATEGORIES=	chat
MASTER_SITES=	${MASTER_SITE_GITHUB:=matrix-org/}
GITHUB_PROJECT=	love

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://www.matrix.org/
COMMENT=	Libpurple protocol plugin for Matrix 
LICENSE=	gnu-gpl-v2

#WRKSRC=		${WRKDIR}/${DISTNAME:S/-linux-src//}
NO_CONFIGURE=	yes
USE_LANGUAGES=	c c++

USE_TOOLS+=	pkg-config
#USE_LIBTOOL=	yes

.include "../../chat/libpurple/buildlink3.mk"
.include "../../databases/sqlite3/buildlink3.mk"
.include "../../devel/glib2/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
