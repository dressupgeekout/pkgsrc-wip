# $NetBSD: Makefile,v 1.58 2017/02/12 06:26:07 ryoon Exp $

# PKGREVISION= 3
.include "../../meta-pkgs/xfce4/Makefile.common"

DISTNAME=	xfwm4-4.12.5
PKGNAME=	xfce4-wm-4.12.5
CATEGORIES=	wm
MASTER_SITES+=	http://archive.xfce.org/src/xfce/xfwm4/4.12/

HOMEPAGE=	http://docs.xfce.org/xfce/xfwm4/start
COMMENT=	Xfce window manager

.include "../../devel/libwnck/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../x11/libxfce4ui/buildlink3.mk"
.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
