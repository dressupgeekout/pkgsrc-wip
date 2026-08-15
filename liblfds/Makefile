# $NetBSD$

DISTNAME=	liblfds%20release%207.1.1%20source
PKGNAME=	liblfds-7.1.1
CATEGORIES=	devel
MASTER_SITES=	https://www.liblfds.org/downloads/
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://www.liblfds.org/
COMMENT=	Lock-free data structure library
LICENSE=	public-domain

USE_TOOLS+=	gmake

WRKSRC=		${WRKDIR}/liblfds7.1.1/liblfds711/build/gcc_gnumake

BUILD_TARGET=	so_rel
INSTALL_TARGET=	so_install

MAKE_FLAGS+=	INSINCDIR=${DESTDIR}${PREFIX}/include/
MAKE_FLAGS+=	INSLIBDIR=${DESTDIR}${PREFIX}/lib/

INSTALLATION_DIRS+=	include lib

.include "../../mk/bsd.pkg.mk"
