# $NetBSD: buildlink3.mk,v 1.27 2013/02/16 11:16:06 wiz Exp $

BUILDLINK_TREE+=	libsquish

.if !defined(LIBSQUISH_BUILDLINK3_MK)
LIBSQUISH_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.libsquish+=	libsquish>=0
BUILDLINK_ABI_DEPENDS.libsquish+=	libsquish>=0
BUILDLINK_PKGSRCDIR.libsquish?=		../../wip/libsquish

.endif # LIBSQUISH_BUILDLINK3_MK

BUILDLINK_TREE+=	-libsquish
