NewMap1_MapScripts::
# 3 "data/maps/NewMap1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, InitPlayer
	.byte 0


InitPlayer::
# 8 "data/maps/NewMap1/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, InitPlayer_2
InitPlayer_1:
	end

InitPlayer_2:
# 10 "data/maps/NewMap1/scripts.pory"
	givemon SPECIES_DRATINI, 25, ITEM_DRAGON_FANG
# 11 "data/maps/NewMap1/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 12 "data/maps/NewMap1/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 13 "data/maps/NewMap1/scripts.pory"
	setrespawn HEAL_LOCATION_DRAGON_VILLAGE
	goto InitPlayer_1


NewMap1_EventScript_CitySign::
# 20 "data/maps/NewMap1/scripts.pory"
	msgbox t_DragonVillage_Sign, MSGBOX_SIGN
	return


NewMap1_EventScript_LittleGirl::
# 25 "data/maps/NewMap1/scripts.pory"
	msgbox t_LittleGirl_Skibidi, MSGBOX_NPC
	return


NewMap1_EventScript_Presley::
# 30 "data/maps/NewMap1/scripts.pory"
	trainerbattle_single TRAINER_PRESLEY, t_OlderBoy_Intro, t_OlderBoy_Defeat, NewMap1_EventScript_Presley_PostDefeat
# 31 "data/maps/NewMap1/scripts.pory"
	msgbox t_OlderBoy_PostBattle, MSGBOX_AUTOCLOSE
	return


NewMap1_EventScript_CaveOldLady::
# 36 "data/maps/NewMap1/scripts.pory"
	msgbox t_CaveOldLady_Ritual, MSGBOX_NPC
	return


NewMap1_EventScript_Presley_PostDefeat::
# 41 "data/maps/NewMap1/scripts.pory"
	setflag FLAG_SYS_PRESLEY_DEFEATED
# 42 "data/maps/NewMap1/scripts.pory"
	goto_if_set FLAG_ITEM_ROUTE_104_POKE_BALL, NewMap1_EventScript_Presley_PostDefeat_2
NewMap1_EventScript_Presley_PostDefeat_1:
	end

NewMap1_EventScript_Presley_PostDefeat_2:
# 44 "data/maps/NewMap1/scripts.pory"
	setflag FLAG_HIDE_DRAGONVILLAGE_OLDLADY
	goto NewMap1_EventScript_Presley_PostDefeat_1


t_CaveOldLady_Ritual:
# 49 "data/maps/NewMap1/scripts.pory"
	.string "We are still preparing for the\n"
	.string "ritual.\p"
	.string "Go play in the village for a bit.$"

t_DragonVillage_Sign:
# 56 "data/maps/NewMap1/scripts.pory"
	.string "{LEFT_ARROW} Dragon Village\n"
	.string "Dragon Guru Cave {RIGHT_ARROW}$"

t_LittleGirl_Skibidi:
# 62 "data/maps/NewMap1/scripts.pory"
	.string "My brother keeps saying SKIBIDI.\p"
	.string "I think he's got brainrot!$"

t_OlderBoy_Intro:
# 68 "data/maps/NewMap1/scripts.pory"
	.string "DRAGON types are so SKIBIDI!\p"
	.string "You wouldn't get it,\n"
	.string "boomer.$"

t_OlderBoy_Defeat:
# 75 "data/maps/NewMap1/scripts.pory"
	.string "Fr, you just vibed on me.\p"
	.string "Respect, though.$"

t_OlderBoy_PostBattle:
# 81 "data/maps/NewMap1/scripts.pory"
	.string "Bruh, you got any snacks?\p"
	.string "Battling makes me hungry.$"
