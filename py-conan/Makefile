# $NetBSD$

DISTNAME=	conan-1.14.4
PKGNAME=        ${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	pkgtools
MASTER_SITES=	${MASTER_SITE_PYPI:=c/conan/}

MAINTAINER=	root@zta.lk
HOMEPAGE=	https://conan.io/
COMMENT=	C/C++ package manager
LICENSE=	mit

USE_LANGUAGES=	# none

post-install:
	cd ${DESTDIR}${PREFIX}/bin && for b in conan conan_build_info conan_server; \
          do ${MV} $$b $$b-${PYVERSSUFFIX}; \
        done

DEPENDS+=   ${PYPKGPREFIX}-JWT>=1.4.0<2.0.0:../../textproc/py-JWT
DEPENDS+=   ${PYPKGPREFIX}-requests>=2.7.0<3.0.0:../../devel/py-requests
DEPENDS+=   ${PYPKGPREFIX}-colorama>=0.3.3<0.5.0:../../comms/py-colorama
DEPENDS+=   ${PYPKGPREFIX}-yaml>=3.11<3.14.0:../../textproc/py-yaml
DEPENDS+=   ${PYPKGPREFIX}-patch-1.16:../../wip/py-patch
DEPENDS+=   ${PYPKGPREFIX}-fasteners>=0.14.1:../../devel/py-fasteners
DEPENDS+=   ${PYPKGPREFIX}-six>=1.10.0:../../lang/py-six
DEPENDS+=   ${PYPKGPREFIX}-node-semver-0.6.1:../../wip/py-node-semver
DEPENDS+=   ${PYPKGPREFIX}-distro>=1.0.2<1.2.0:../../wip/py-distro
DEPENDS+=   ${PYPKGPREFIX}-pylint>=1.9.3:../../wip/py-pylint
DEPENDS+=   ${PYPKGPREFIX}-future-0.16.0{,nb[0-9]*}:../../devel/py-future
DEPENDS+=   ${PYPKGPREFIX}-pygments>=2.0<3.0:../../textproc/py-pygments
DEPENDS+=   ${PYPKGPREFIX}-astroid>=1.6.5:../../devel/py-astroid
DEPENDS+=   ${PYPKGPREFIX}-deprecation>=2.0<2.1:../../devel/py-deprecation
DEPENDS+=   ${PYPKGPREFIX}-tqdm>=4.28.1<5:../../misc/py-tqdm
DEPENDS+=   ${PYPKGPREFIX}-jinja2>=2.3<3:../../textproc/py-jinja2
DEPENDS+=   ${PYPKGPREFIX}-bottle>=0.12.8<0.13:../../www/py-bottle
DEPENDS+=   ${PYPKGPREFIX}-pluginbase>=0.5<1.0:../../wip/py-pluginbase
DEPENDS+=   ${PYPKGPREFIX}-sqlite3-[0-9]*:../../databases/py-sqlite3

.include "../../mk/bsd.prefs.mk"
.if ${OPSYS} == "Darwin"
DEPENDS+=   ${PYPKGPREFIX}-idna-2.6:../../www/py-idna
DEPENDS+=   ${PYPKGPREFIX}-cryptography>=1.3.4<2.4.0:../../security/py-cryptography
DEPENDS+=   ${PYPKGPREFIX}-OpenSSL>=16.0.0<19.0.0:../../security/py-OpenSSL
.endif

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
