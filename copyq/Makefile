# $NetBSD: Makefile,v 1.2 2025/01/23 23:27:29 riastradh Exp $

DISTNAME=	copyq-9.1.0
PKGREVISION=	1
CATEGORIES=	x11
MASTER_SITES=	${MASTER_SITE_GITHUB:=hluk/}
GH_PROJECT=	CopyQ
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	kikadf.01@gmail.com
HOMEPAGE=	https://hluk.github.io/CopyQ
COMMENT=	Qt5 based clipboard manager
LICENSE=	gnu-gpl-v3

USE_LANGUAGES=	c c++
WRKSRC=		${WRKDIR}/${GH_PROJECT}-${PKGVERSION_NOREV}
CMAKE_CONFIGURE_ARGS+=-DWITH_QT6=ON

.include "../../devel/cmake/build.mk"
.include "../../devel/extra-cmake-modules/buildlink3.mk"
.include "../../devel/kf6-knotifications/buildlink3.mk"
.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../x11/libXtst/buildlink3.mk"
.include "../../x11/qt6-qtbase/buildlink3.mk"
.include "../../wip/kf6-kstatusnotifieritem/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
