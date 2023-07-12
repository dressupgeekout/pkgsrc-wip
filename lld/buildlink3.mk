# $NetBSD: buildlink3.mk,v 1.3 2019/12/29 15:31:21 adam Exp $

BUILDLINK_TREE+=	lld

.if !defined(LLD_BUILDLINK3_MK)
LLD_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.lld+=	lld>=16.0.0
BUILDLINK_PKGSRCDIR.lld?=	../../wip/lld

.include "../../wip/llvm/buildlink3.mk"
.endif	# LLD_BUILDLINK3_MK

BUILDLINK_TREE+=	-lld
