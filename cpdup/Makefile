# $NetBSD: Makefile,v 1.7 2013/01/05 22:22:45 kristerw Exp $
#

DISTNAME=	cpdup-1.22
CATEGORIES=	sysutils
MASTER_SITES=	${MASTER_SITE_GITHUB:=DragonFlyBSD/}
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://github.com/DragonFlyBSD/cpdup/
COMMENT=	Designed to make exact mirrors of directory trees
LICENSE=	3-clause-bsd

USE_TOOLS+=	gmake

INSTALLATION_DIRS=	bin ${PKGMANDIR}/man1

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/cpdup ${DESTDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/cpdup.1 ${DESTDIR}${PREFIX}/${PKGMANDIR}/man1

#.if ! "${OPSYS}" == "NetBSD"
#.include "../../devel/libbsd/buildlink3.mk"
#.endif

.include "../../mk/bsd.pkg.mk"
