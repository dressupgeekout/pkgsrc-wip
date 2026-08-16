# $NetBSD$

DISTNAME=	MagickaBBS-0.17alpha
CATEGORIES=	comms
MASTER_SITES=	${MASTER_SITE_CODEBERG:=ufud-org/}
CODEBERG_TAG=	v0.17alpha

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://codeberg.org/ufud-org/MagickaBBS/
COMMENT=	Bulletin board system
LICENSE=	modified-bsd

USE_LANGUAGES=	c
USE_TOOLS+=	gmake pax
WRKSRC=		${WRKDIR}/magickabbs

#BUILD_DIRS=	jamlib Xmodem lua .

INSTALLATION_DIRS+=	bin
INSTALLATION_DIRS+=	share/doc/MagickaBBS
INSTALLATION_DIRS+=	share/examples/MagickaBBS

MAKE_FILE=	GNUmakefile
#BUILD_TARGET=	www


#post-patch:
#	cd ${WRKSRC} && \
#		${LN} jamlib/Makefile.linux jamlib/Makefile && \
#		${LN} Makefile.freebsd Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/magicka ${DESTDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/README.md ${DESTDIR}${PREFIX}/share/doc/MagickaBBS
	cd ${WRKSRC}/ansis_default && ${PAX} -pp -rw * ${DESTDIR}${PREFIX}/share/examples/MagickaBBS/ansis
	cd ${WRKSRC}/config_default && ${PAX} -pp -rw * ${DESTDIR}${PREFIX}/share/examples/MagickaBBS/config

.include "../../converters/libiconv/buildlink3.mk"
.include "../../databases/sqlite3/buildlink3.mk"
.include "../../security/libssh/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
