# $NetBSD$

DISTNAME=	musikcube-0.96.6
CATEGORIES=	audio
MASTER_SITES=	${MASTER_SITE_GITHUB:=clangen/}

MAINTAINER=	dressupgeekout@gmail.com
COMMENT=	Terminal-based music player, audio engine and server
LICENSE=	modified-bsd

USE_LANGUAGES+=	c c++

USE_CMAKE=	yes
CMAKE_ARGS+=	-DENABLE_PULSEAUDIO:BOOL=OFF # XXX should be an option
CMAKE_ARGS+=	-DENABLE_FFMPEG:BOOL=OFF # XXX should be an option

.include "../../devel/boost-headers/buildlink3.mk"
.include "../../devel/boost-libs/buildlink3.mk"
.include "../../devel/libev/buildlink3.mk"
.include "../../devel/ncursesw/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
.include "../../www/curl/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
