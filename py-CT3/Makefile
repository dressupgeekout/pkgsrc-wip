# $NetBSD$

VERSION=	3.4.0
DISTNAME=	ct3-${VERSION}
PKGNAME=	${PYPKGPREFIX}-${DISTNAME:S/ct3/CT3/}
CATEGORIES=	textproc
MASTER_SITES=	${MASTER_SITE_PYPI:=c/ct3/}

MAINTAINER=	gdt@NetBSD.org
HOMEPAGE=	https://cheetahtemplate.org/
COMMENT=	Template engine and code generation tool
LICENSE=	mit

TOOL_DEPENDS+=	${PYPKGPREFIX}-setuptools-[0-9]*:../../devel/py-setuptools

CONFLICTS+=	Cheetah-[0-9]*
CONFLICTS+=	py-cheetah3-[0-9]*

REPLACE_PYTHON+=	Cheetah/CheetahWrapper.py
REPLACE_PYTHON+=	Cheetah/DirectiveAnalyzer.py
REPLACE_PYTHON+=	Cheetah/Filters.py
REPLACE_PYTHON+=	Cheetah/NameMapper.py
REPLACE_PYTHON+=	Cheetah/Servlet.py
REPLACE_PYTHON+=	Cheetah/Templates/SkeletonPage.py
REPLACE_PYTHON+=	Cheetah/Tests/CheetahWrapper.py
REPLACE_PYTHON+=	Cheetah/Tests/Performance.py
REPLACE_PYTHON+=	Cheetah/Tests/SyntaxAndOutput.py
REPLACE_PYTHON+=	Cheetah/Tests/Test.py
REPLACE_PYTHON+=	Cheetah/Tools/SiteHierarchy.py
REPLACE_PYTHON+=	Cheetah/Version.py

post-install:
	cd ${DESTDIR}${PREFIX}/bin && \
	${MV} cheetah cheetah-${PYVERSSUFFIX} && \
	${MV} cheetah-analyze cheetah-analyze-${PYVERSSUFFIX} && \
	${MV} cheetah-compile cheetah-compile-${PYVERSSUFFIX} || ${TRUE}

.include "../../lang/python/application.mk"
.include "../../lang/python/wheel.mk"
.include "../../mk/bsd.pkg.mk"
