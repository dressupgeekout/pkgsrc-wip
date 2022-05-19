# $NetBSD: buildlink3.mk,v 1.2 2019/09/18 22:30:49 nia Exp $

BUILDLINK_TREE+=	OpenColorIO

.if !defined(OPENCOLORIO_BUILDLINK3_MK)
OPENCOLORIO_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.OpenColorIO+=	OpenColorIO>=2.1.1
BUILDLINK_PKGSRCDIR.OpenColorIO?=	../../wip/opencolorio

.include "../../graphics/lcms2/buildlink3.mk"
.include "../../textproc/tinyxml/buildlink3.mk"
.include "../../textproc/yaml-cpp/buildlink3.mk"
.endif	# OPENCOLORIO_BUILDLINK3_MK

BUILDLINK_TREE+=	-OpenColorIO
