# $NetBSD$

BUILDLINK_TREE+=	kcgi
.if !defined(KCGI_BUILDLINK3_MK)
KCGI_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.kcgi+=	kcgi>=0.13.0
BUILDLINK_ABI_DEPENDS.kcgi+=	kcgi>=0.13.0
BUILDLINK_PKGSRCDIR.kcgi?=	../../wip/kcgi
.endif # KCGI_BUILDLINK3_MK

BUILDLINK_TREE+=	-kcgi