# $NetBSD$

DISTNAME=	mastodon-api-2.0.0
CATEGORIES=	chat

MAINTAINER=	charlotte@NetBSD.org
HOMEPAGE=	https://joinmastodon.org/
COMMENT=	Ruby interface to the Mastodon API
LICENSE=	mit

DEPENDS+=	${RUBY_PKGPREFIX}-addressable>=2.6.0:../../net/ruby-addressable
DEPENDS+=	${RUBY_PKGPREFIX}-buftok>=0:../../textproc/ruby-buftok
DEPENDS+=	${RUBY_PKGPREFIX}-http>=3.3.0:../../www/ruby-http
#DEPENDS+=	${RUBY_PKGPREFIX}-oj>=3.7.0:../../wip/ruby-oj

.include "../../lang/ruby/gem.mk"
.include "../../mk/bsd.pkg.mk"
