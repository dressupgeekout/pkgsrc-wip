# $NetBSD$

PKGNAME=	assaultcube-1.2.0.2
CATEGORIES=	games

#DISTNAME=	AC-v1.2.0.2
#MASTER_SITES=	${MASTER_SITE_GITHUB:=assaultcube/}
#GITHUB_TAG=	v${PKGVERSION_NOREV}

GIT_REPOSITORIES=		assaultcube
#GIT_REPO.assaultcube=		https://github.com/assaultcube/AC
GIT_REPO.assaultcube=		/home/charlotte/devel/AC
GIT_TAG.assaultcube=		v1.2.0.2

WRKSRC=		${WRKDIR}/assaultcube
EXTRACT_USING=	gtar
USE_TOOLS+=	gmake
USE_LANGUAGES+= c c++

BUILD_DIRS+=	source/src

post-extract:
	${CP} ${FILESDIR}/Makefile_local ${WRKSRC}/source/src

.include "../../audio/libvorbis/buildlink3.mk"
.include "../../audio/openal-soft/buildlink3.mk"
.include "../../devel/gettext-lib/buildlink3.mk"
.include "../../devel/SDL/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../graphics/SDL_image/buildlink3.mk"
.include "../../multimedia/libogg/buildlink3.mk"
.include "../../www/curl/buildlink3.mk"
.include "../../wip/mk/git-package.mk"
.include "../../mk/bsd.pkg.mk"
