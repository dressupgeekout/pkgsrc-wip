# $NetBSD$

DISTNAME=	mindustry-126.2
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_GITHUB:=Anuken/}
GITHUB_PROJECT=	Mindustry
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://mindustrygame.github.io/
COMMENT=	The automation tower defense RTS
LICENSE=	gnu-gpl-v3

#USE_TOOLS+=	bash

#REPLACE_BASH=	gradlew

USE_JAVA=		yes
#USE_JAVA2=		yes
PKG_JVM_DEFAULT=	openjdk17

MAKE_ENV+=	JAVA_HOME=${PKG_JAVA_HOME}

do-build:
	${RUN} cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${SH} ./gradlew desktop:dist

.include "../../mk/java-vm.mk"
.include "../../mk/bsd.pkg.mk"
