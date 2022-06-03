# $NetBSD$

BUILDLINK_TREE+=	mygui-ogre

.if !defined(MYGUI_OGRE_BUILDLINK3_MK)
MYGUI_OGRE_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.mygui-ogre+=	mygui-ogre>=3.2.2
BUILDLINK_ABI_DEPENDS.mygui-ogre?=	mygui-ogre>=3.2.3.20190707
BUILDLINK_PKGSRCDIR.mygui-ogre?=	../../wip/mygui-ogre

.include "../../devel/ogre/buildlink3.mk"
.include "../../devel/SDL2/buildlink3.mk"
.include "../../graphics/freetype2/buildlink3.mk"
.include "../../graphics/MesaLib/buildlink3.mk"
.include "../../graphics/SDL2_image/buildlink3.mk"
.endif	# MYGUI_OGRE_BUILDLINK3_MK

BUILDLINK_TREE+=	-mygui-ogre
