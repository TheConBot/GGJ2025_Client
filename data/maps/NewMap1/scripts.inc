NewMap1_MapScripts::
	.byte 0

NewMap1_EventScript_CitySign::
	lock
	faceplayer
	msgbox Text_TakeDratini, MSGBOX_DEFAULT
	getpartysize
	compare VAR_RESULT, 6
	goto_if_eq Script_PlayerHasFullParty
	givemon SPECIES_DRATINI, 5, ITEM_DRAGON_FANG
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_SYS_POKEMON_GET
	playfanfare MUS_OBTAIN_ITEM
	msgbox Text_ReceivedDratini, MSGBOX_DEFAULT
	waitfanfare
	release
	end

NewMap1_EventScript_LittleGirl::
	msgbox Text_BubblesGone, MSGBOX_NPC
	end

NewMap1_EventScript_Presley::
	trainerbattle_single TRAINER_PRESLEY, Route125_Text_PresleyIntro, Route125_Text_PresleyDefeat
	msgbox Route125_Text_PresleyPostBattle, MSGBOX_AUTOCLOSE
	end

Script_PlayerHasFullParty::
	msgbox Text_PlayerHasFullParty, MSGBOX_DEFAULT
	release
	end

Text_TakeDratini:
	.string "Please, take this Dratini.$"

Text_ReceivedDratini:
	.string "{PLAYER} received a Dratini!$"

Text_PlayerHasFullParty:
	.string "Ah, your party is full.$"

Text_BubblesGone:
	.string "WAAAHH!!\n"
	.string "Some big meanie stole my bubbles!\p"
	.string "Can you go beat them up for me?\n"
	.string "Pwetty pwease? UwU$"
