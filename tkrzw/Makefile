# $NetBSD$

DISTNAME=	tkrzw-1.0.24
CATEGORIES=	databases
MASTER_SITES=	https://dbmx.net/tkrzw/pkg/

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://dbmx.net/tkrzw/
COMMENT=	A set of implementations of DBM
LICENSE=	apache-2.1

USE_LANGUAGES+=	c c++
GCC_REQD+=	7.3  # C++17

GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	--enable-opt-native
CONFIGURE_ARGS+=	--enable-most-features

.include "../../archivers/lz4/buildlink3.mk"
.include "../../archivers/xz/buildlink3.mk"
.include "../../archivers/zstd/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
