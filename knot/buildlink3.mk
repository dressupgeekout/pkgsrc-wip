# $NetBSD$

BUILDLINK_TREE+=        knot

.if !defined(KNOT_BUILDLINK3_MK)
KNOT_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.knot+=    knot>=3.3.8
BUILDLINK_PKGSRCDIR.knot?=      ../../net/knot

.endif  # KNOT_BUILDLINK3_MK

BUILDLINK_TREE+=        -knot
