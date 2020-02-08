# $NetBSD$

DISTNAME=	cpdup-1.20
CATEGORIES=	sysutils
MASTER_SITES=	${MASTER_SITE_GITHUB:=DragonFlyBSD/}
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://dragonflybsd.org
COMMENT=	File system mirroring utility from DragonFly
LICENSE=	modified-bsd

EXTRACT_USING=	gtar

GNU_MAKE=	yes
USE_TOOLS+=	gmake pkg-config
MAKE_FILE=	GNUmakefile

NO_CONFIGURE=	yes

#do-install:
#	${INSTALL_LIB_DIR} ${DESTDIR}${PREFIX}/lib
#	${INSTALL_LIB} ${WRKSRC}/libtheorafile.so ${DESTDIR}${PREFIX}/lib

.include "../../security/openssl/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
