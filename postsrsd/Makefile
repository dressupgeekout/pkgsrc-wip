# $NetBSD: Makefile,v 1.5 2025/08/20 11:35:05 wiz Exp $

DISTNAME=	postsrsd-2.0.11
#PKGREVISION=	0
CATEGORIES=	mail
MASTER_SITES=	${MASTER_SITE_GITHUB:=roehling/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://github.com/roehling/postsrsd
COMMENT=	Postfix Sender Rewriting Scheme daemon
LICENSE=	gnu-gpl-v2

RCD_SCRIPTS=	postsrsd

POSTSRSD_USER?=		postsrsd
POSTSRSD_GROUP?=	postsrsd
PKG_USERS=		${POSTSRSD_USER}:${POSTSRSD_GROUP}
PKG_GROUPS=		${POSTSRSD_GROUP}
USER_GROUP=		${POSTSRSD_USER} ${POSTSRSD_GROUP}

PKG_GECOS.${POSTSRSD_USER}?=	postSRSd

TOOL_DEPENDS+=	help2man-[0-9]*:../../converters/help2man

CMAKE_CONFIGURE_ARGS+=	-DCMAKE_POLICY_VERSION_MINIMUM=3.11 \
	-DFETCHCONTENT_TRY_FIND_PACKAGE_MODE=ALWAYS \
	-DCMAKE_INSTALL_DATAROOTDIR=${PKGMANDIR} \
	-DWITH_SQLITE=yes

# this would need a pkg for https://github.com/jons/libmilter
# CMAKE_CONFIGURE_ARGS+=	-DWITH_MILTER=yes

.include "../../devel/cmake/build.mk"
.include "../../devel/confuse/buildlink3.mk"
.include "../../devel/check/buildlink3.mk"
.include "../../databases/sqlite3/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
