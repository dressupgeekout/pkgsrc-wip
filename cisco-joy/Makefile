# $NetBSD$

DISTNAME=	${GITHUB_PROJECT}-${GITHUB_TAG}
PKGNAME=	cisco-joy-${GITHUB_TAG:S/v//}
CATEGORIES=	net
GITHUB_TAG=	v3.0.0
GITHUB_PROJECT=	joy
MASTER_SITES=	${MASTER_SITE_GITHUB:=cisco/}

MAINTAINER=	cfkoch@edgebsd.org
HOMEPAGE=	XXX
COMMENT=	XXX
LICENSE=	modified-bsd

EXTRACT_USING=	gtar
USE_TOOLS+=	bash gmake

HAS_CONFIGURE=		yes
CONFIG_SHELL=		bash
CONFIGURE_SCRIPT=	./config
CONFIGURE_ARGS+=	--lib-path ${PREFIX}/lib

.include "../../devel/zlib/buildlink3.mk"
.include "../../net/libpcap/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
.include "../../www/curl/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
