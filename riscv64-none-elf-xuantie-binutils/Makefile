# $NetBSD: Makefile,v 1.2 2024/05/21 07:08:03 skrll Exp $

GIT_BRANCH=	xuantie-${GITHUB_PROJECT}-2.32
DISTNAME=	${GITHUB_PROJECT}-${THEADVER}
PKGNAME=	cross-riscv64-none-elf-${GIT_BRANCH:S/-gdb//}
CATEGORIES=	cross
THEADVER=	THead-2.6.1
MASTER_SITES=	${MASTER_SITE_GITHUB:=XUANTIE-RV/}
GITHUB_PROJECT=	binutils-gdb
GITHUB_TAG=	refs/tags/${THEADVER}

MAINTAINER=	port-riscv@NetBSD.org
HOMEPAGE=	# empty
COMMENT=	XuanTie binutils for bare metal RISC-V 64-bit ELF
LICENSE=	gnu-gpl-v2 AND gnu-gpl-v3 AND gnu-lgpl-v2 AND gnu-lgpl-v3

USE_LANGUAGES+=		c99 c++
USE_LIBTOOL=		yes
USE_TOOLS+=		bison gmake makeinfo
GNU_CONFIGURE=		yes
GNU_CONFIGURE_STRICT=	no # several sub-configures know --enable-nls

TOOL_DEPENDS+=		gtexinfo>=5.1:../../devel/gtexinfo
_TOOLS_USE_PKGSRC.makeinfo=	yes

RISCV64ELF_PREFIX=	${PREFIX}/cross-riscv64-none-elf-xuantie

OBJDIR=			../build
CONFIGURE_DIRS=		${OBJDIR}
CONFIGURE_SCRIPT=	${WRKSRC}/configure
GNU_CONFIGURE_PREFIX=	${RISCV64ELF_PREFIX}

CONFIGURE_ARGS+=	--target=riscv64-none-elf
CONFIGURE_ARGS+=	--disable-werror
CONFIGURE_ARGS+=	--disable-gdb
CONFIGURE_ARGS+=	--disable-nls
CONFIGURE_ARGS+=	--enable-deterministic-archives
INFO_FILES=		yes

WRKSRC=			${WRKDIR}/${DISTNAME}

pre-configure:
	${RUN} cd ${WRKSRC} && ${MKDIR} ${OBJDIR}

.include "../../mk/bsd.pkg.mk"
