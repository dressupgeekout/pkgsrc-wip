# $NetBSD$

BUILDLINK_TREE+=	stratagus

.if !defined(STRATAGUS_BUILDLINK3_MK)
STRATAGUS_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.stratagus+=	stratagus-*
BUILDLINK_PKGSRCDIR.stratagus?=		../../wip/stratagus-git

.endif # STRATAGUS_BUILDLINK3_MK

BUILDLINK_TREE+=	-stratagus
