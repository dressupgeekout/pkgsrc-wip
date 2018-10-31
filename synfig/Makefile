# $NetBSD: Makefile,v 1.7 2014/08/11 23:10:14 thomasklausner Exp $

DISTNAME=	source-synfig-1.2.2
PKGNAME=	${DISTNAME:S/source-//}
GITHUB_TAG=	v${PKGVERSION_NOREV}
GITHUB_RELEASE=	${GITHUB_TAG}
GITHUB_TYPE=	release
CATEGORIES=	multimedia
MASTER_SITES=	${MASTER_SITE_GITHUB:=synfig/}

MAINTAINER=	pho@cielonegro.org
HOMEPAGE=	https://synfig.org/
COMMENT=	Vector-based 2D animation renderer
LICENSE=	gnu-gpl-v3

EXTRACT_USING=		gtar
GNU_CONFIGURE=		yes
USE_TOOLS+=		pkg-config
USE_PKGLOCALEDIR=	yes
USE_LANGUAGES=		c c++
USE_LIBTOOL=		yes

PKGCONFIG_OVERRIDE+=	synfig.pc.in

DEPENDS+=	intltool>=0.35:../../textproc/intltool

.include "options.mk"

.include "../../devel/ETL/buildlink3.mk"
.include "../../devel/gettext-lib/buildlink3.mk"
.include "../../devel/libltdl/convenience.mk"
.include "../../devel/libsigc++/buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
.include "../../textproc/libxml++/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
