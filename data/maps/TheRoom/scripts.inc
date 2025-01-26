TheRoom_MapScripts::
	.byte 0


TheRoom_EventScript_DragonLady::
# 5 "data/maps/TheRoom/scripts.pory"
	goto_if_set FLAG_ITEM_ROUTE_104_POKE_BALL, TheRoom_EventScript_DragonLady_1
# 12 "data/maps/TheRoom/scripts.pory"
	msgbox t_DragonLady_MasterBall, MSGBOX_NPC
	return

TheRoom_EventScript_DragonLady_1:
# 7 "data/maps/TheRoom/scripts.pory"
	msgbox t_DragonLady_MasterBall_Lost, MSGBOX_NPC
	end


TheRoom_EventScript_ItemMasterBall::
# 32 "data/maps/TheRoom/scripts.pory"
	finditem ITEM_MASTER_BALL
# 33 "data/maps/TheRoom/scripts.pory"
	goto_if_set FLAG_SYS_PRESLEY_DEFEATED, TheRoom_EventScript_ItemMasterBall_2
TheRoom_EventScript_ItemMasterBall_1:
	end

TheRoom_EventScript_ItemMasterBall_2:
# 35 "data/maps/TheRoom/scripts.pory"
	setflag FLAG_HIDE_DRAGONVILLAGE_OLDLADY
	goto TheRoom_EventScript_ItemMasterBall_1


t_DragonLady_MasterBall::
# 16 "data/maps/TheRoom/scripts.pory"
	.string "Hi {PLAYER}!\p"
	.string "I'm going to use that MASTER BALL\n"
	.string "to catch a strong DRAGON type!$"

t_DragonLady_MasterBall_Lost::
# 23 "data/maps/TheRoom/scripts.pory"
	.string "Hi {PLAYER}!\p"
	.string "I had a MASTER BALL,\n"
	.string "but now I cant find it anywhere!$"
