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
