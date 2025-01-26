# 1 "data/maps/TheCave/scripts.pory"

# 2 "data/maps/TheCave/scripts.pory"
.set LOCALID_GURU, 1

TheCave_MapScripts::
# 7 "data/maps/TheCave/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TheCave_OnLoad
# 8 "data/maps/TheCave/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TheCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TheCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/TheCave/scripts.pory"
	map_script_2 VAR_DRAGON_VILLAGE_STATE, 0, TheCave_MapScript_DragonVillageState0
	.2byte 0


TheCave_OnLoad::
# 16 "data/maps/TheCave/scripts.pory"
	setholewarp MAP_THE_CAVE2
	return


TheCave_MapScript_DragonVillageState0::
# 21 "data/maps/TheCave/scripts.pory"
	lock
# 22 "data/maps/TheCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, m_Player_Walkup
# 23 "data/maps/TheCave/scripts.pory"
	delay 60
# 24 "data/maps/TheCave/scripts.pory"
	playse SE_PIN
# 25 "data/maps/TheCave/scripts.pory"
	applymovement LOCALID_GURU, m_Guru_Opening
# 26 "data/maps/TheCave/scripts.pory"
	waitmovement 0
# 27 "data/maps/TheCave/scripts.pory"
	msgbox t_Guru_Opening, MSGBOX_DEFAULT
# 28 "data/maps/TheCave/scripts.pory"
	applymovement LOCALID_GURU, m_Guru_Opening1
# 29 "data/maps/TheCave/scripts.pory"
	waitmovement 0
# 30 "data/maps/TheCave/scripts.pory"
	msgbox t_Guru_Opening1, MSGBOX_DEFAULT
# 31 "data/maps/TheCave/scripts.pory"
	applymovement LOCALID_GURU, m_Guru_Opening2
# 32 "data/maps/TheCave/scripts.pory"
	waitmovement 0
# 33 "data/maps/TheCave/scripts.pory"
	msgbox t_Guru_Opening2, MSGBOX_DEFAULT
# 34 "data/maps/TheCave/scripts.pory"
	applymovement LOCALID_GURU, m_Guru_Opening3
# 35 "data/maps/TheCave/scripts.pory"
	delay 60
# 36 "data/maps/TheCave/scripts.pory"
	applymovement LOCALID_GURU, m_Guru_Opening4
# 37 "data/maps/TheCave/scripts.pory"
	waitmovement 0
# 38 "data/maps/TheCave/scripts.pory"
	setvar VAR_0x8004, 1
# 39 "data/maps/TheCave/scripts.pory"
	setvar VAR_0x8005, 1
# 40 "data/maps/TheCave/scripts.pory"
	setvar VAR_0x8006, 8
# 41 "data/maps/TheCave/scripts.pory"
	setvar VAR_0x8007, 5
# 42 "data/maps/TheCave/scripts.pory"
	delay 60
# 43 "data/maps/TheCave/scripts.pory"
	special ShakeCamera
# 44 "data/maps/TheCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, m_Player_Walkup
# 45 "data/maps/TheCave/scripts.pory"
	delay 60
# 46 "data/maps/TheCave/scripts.pory"
	special ShakeCamera
# 47 "data/maps/TheCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, m_Player_Walkup
# 48 "data/maps/TheCave/scripts.pory"
	delay 60
# 49 "data/maps/TheCave/scripts.pory"
	special ShakeCamera
# 50 "data/maps/TheCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, m_Player_Walkup
# 51 "data/maps/TheCave/scripts.pory"
	delay 60
# 52 "data/maps/TheCave/scripts.pory"
	setvar VAR_DRAGON_VILLAGE_STATE, 1
# 53 "data/maps/TheCave/scripts.pory"
	release
	return


# 56 "data/maps/TheCave/scripts.pory"
m_Guru_Opening:
# 58 "data/maps/TheCave/scripts.pory"
	emote_exclamation_mark
# 59 "data/maps/TheCave/scripts.pory"
	delay_16
# 59 "data/maps/TheCave/scripts.pory"
	delay_16
# 60 "data/maps/TheCave/scripts.pory"
	walk_down
# 61 "data/maps/TheCave/scripts.pory"
	walk_down
# 62 "data/maps/TheCave/scripts.pory"
	step_end

# 65 "data/maps/TheCave/scripts.pory"
m_Guru_Opening1:
# 67 "data/maps/TheCave/scripts.pory"
	walk_up
# 68 "data/maps/TheCave/scripts.pory"
	delay_16
# 68 "data/maps/TheCave/scripts.pory"
	delay_16
	step_end

# 71 "data/maps/TheCave/scripts.pory"
m_Guru_Opening2:
# 73 "data/maps/TheCave/scripts.pory"
	face_down
# 74 "data/maps/TheCave/scripts.pory"
	delay_16
# 74 "data/maps/TheCave/scripts.pory"
	delay_16
	step_end

# 77 "data/maps/TheCave/scripts.pory"
m_Guru_Opening3:
# 79 "data/maps/TheCave/scripts.pory"
	walk_down
# 80 "data/maps/TheCave/scripts.pory"
	delay_16
# 80 "data/maps/TheCave/scripts.pory"
	delay_16
	step_end

# 82 "data/maps/TheCave/scripts.pory"
m_Guru_Opening4:
# 84 "data/maps/TheCave/scripts.pory"
	walk_left
# 85 "data/maps/TheCave/scripts.pory"
	walk_down
# 86 "data/maps/TheCave/scripts.pory"
	walk_down
# 87 "data/maps/TheCave/scripts.pory"
	walk_right
# 88 "data/maps/TheCave/scripts.pory"
	face_up
# 89 "data/maps/TheCave/scripts.pory"
	delay_16
# 89 "data/maps/TheCave/scripts.pory"
	delay_16
	step_end

# 92 "data/maps/TheCave/scripts.pory"
m_Player_Walkup:
# 94 "data/maps/TheCave/scripts.pory"
	walk_up
# 95 "data/maps/TheCave/scripts.pory"
	delay_16
# 95 "data/maps/TheCave/scripts.pory"
	delay_16
	step_end

t_Guru_Opening:
# 98 "data/maps/TheCave/scripts.pory"
	.string "Hello, young one.\p"
	.string "I am the Dragon Guru!$"

t_Guru_Opening1:
# 104 "data/maps/TheCave/scripts.pory"
	.string "I have been waiting for you.\p"
	.string "I have a gift for you.$"

t_Guru_Opening2:
# 110 "data/maps/TheCave/scripts.pory"
	.string "You must eat these strange mushrooms,\n"
	.string "and become a true DRAGON TAMER.\p"
	.string "All of your ancestors have passed\n"
	.string "this trial.$"

t_Guru_Opening3:
# 118 "data/maps/TheCave/scripts.pory"
	.string "Do this and burst free from the bubble!\p"
	.string "Good luck,\n"
	.string "young DRAGON TAMER.$"
