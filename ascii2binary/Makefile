# $NetBSD: Makefile,v 1.2 2012/09/24 16:56:39 asau Exp $
#

DISTNAME=	ascii2binary-2.14
CATEGORIES=	textproc
MASTER_SITES=	http://www.billposer.org/Software/Downloads/
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	bartosz.kuzma@gmail.com
HOMEPAGE=	http://www.billposer.org/Software/a2b.html
COMMENT=	Convert between textual representations of numbers and binary
LICENSE=	gnu-gpl-v3

BROKEN_GETTEXT_DETECTION=	yes
GNU_CONFIGURE=	yes

INSTALLATION_DIRS=	bin ${PKGMANDIR}/man1

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ascii2binary ${DESTDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/binary2ascii ${DESTDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/ascii2binary.1 \
		${DESTDIR}${PREFIX}/${PKGMANDIR}/man1
	${INSTALL_MAN} ${WRKSRC}/binary2ascii.1 \
		${DESTDIR}${PREFIX}/${PKGMANDIR}/man1

.include "../../devel/gettext-lib/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
