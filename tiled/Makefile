# $NetBSD$

DISTNAME=	tiled-1.8.5
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GITHUB:=mapeditor/}
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://www.mapeditor.org/
COMMENT=	Flexible level editor
LICENSE=	gnu-gpl-v2

USE_LANGUAGES=	c c++

BUILD_DEPENDS+=	qtcreator>=4:../../editors/qtcreator

QBS=		qbs

QBS_BUILD_ARGS=		# defined
QBS_BUILD_ARGS+=	tiled
QBS_BUILD_ARGS+=	qbs.installPrefix:"${PREFIX}"

QBS_INSTALL_ARGS=	# defined
QBS_INSTALL_ARGS+=	--install-root ${DESTDIR}

do-configure:
	${RUN} ${QBS} setup-toolchains --detect 

do-build:
	${RUN} ${QBS} ${QBS_BUILD_ARGS}

do-install:
	${RUN} ${QBS} install ${QBS_INSTALL_ARGS}

.include "../../x11/qt5-qtbase/buildlink3.mk"
.include "../../x11/qt5-qtsvg/buildlink3.mk"
.include "../../x11/qt5-qttools/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
