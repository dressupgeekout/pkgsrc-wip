# $NetBSD: Makefile,v 1.1 2015/01/24 14:27:04 gschwarz Exp $

DISTNAME=	ophcrack-3.7.0
CATEGORIES=	security
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=ophcrack/}
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	schwarz@NetBSD.org
HOMEPAGE=	http://ophcrack.sourceforge.net/
COMMENT=	Ophcrack is a free Windows password cracker based on rainbow tables
LICENSE=	gnu-gpl-v2

GNU_CONFIGURE=	YES
USE_LANGUAGES=	c c++
USE_TOOLS+=	gmake

.include "../../x11/qt4-tools/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
CONFIGURE_ARGS+=	--with-libssl=${SSLBASE:Q}
.include "../../mk/bsd.pkg.mk"
