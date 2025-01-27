# 1 "data/maps/NexusTreetop/scripts.pory"

# 2 "data/maps/NexusTreetop/scripts.pory"
.set LOCALID_AZUMARILL, 4

NexusTreetop_MapScripts::
# 7 "data/maps/NexusTreetop/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TreeTop_OnResume
	.byte 0


TreeTop_EventScript_RareCandy::
# 12 "data/maps/NexusTreetop/scripts.pory"
	finditem ITEM_RARE_CANDY
	end


TreeTop_EventScript_TMToxic::
# 18 "data/maps/NexusTreetop/scripts.pory"
	finditem ITEM_TM_TOXIC
	end


TreeTop_OnResume:
# 24 "data/maps/NexusTreetop/scripts.pory"
	goto_if_set FLAG_SYS_BUBBLEDENIZEN_DEFEATED, TreeTop_OnResume_1
	return

TreeTop_OnResume_1:
# 26 "data/maps/NexusTreetop/scripts.pory"
	removeobject LOCALID_AZUMARILL
	return


TreeTop_EventScript_BubbleDenizen::
# 32 "data/maps/NexusTreetop/scripts.pory"
	lock
# 33 "data/maps/NexusTreetop/scripts.pory"
	goto_if_set FLAG_SYS_BUBBLEDENIZEN_DEFEATED, TreeTop_EventScript_BubbleDenizen_5
TreeTop_EventScript_BubbleDenizen_4:
# 40 "data/maps/NexusTreetop/scripts.pory"
	goto_if_set FLAG_SYS_BUBBLEDENIZEN_DEFEATED, TreeTop_EventScript_BubbleDenizen_3
# 47 "data/maps/NexusTreetop/scripts.pory"
	compare VAR_TREETOP_AZUMARILL, 1
	goto_if_eq TreeTop_EventScript_BubbleDenizen_9
# 55 "data/maps/NexusTreetop/scripts.pory"
	compare VAR_TREETOP_AZUMARILL, 3
	goto_if_eq TreeTop_EventScript_BubbleDenizen_10
# 61 "data/maps/NexusTreetop/scripts.pory"
	trainerbattle_single TRAINER_BUBBLE_DENIZEN, TreeTop_EventScript_BubbleDenizen_Text_5, TreeTop_EventScript_BubbleDenizen_Text_4, TreeTop_EventScript_BubbleDenizen1_PostDefeat
# 62 "data/maps/NexusTreetop/scripts.pory"
	release
	end

TreeTop_EventScript_BubbleDenizen_2:
# 35 "data/maps/NexusTreetop/scripts.pory"
	msgbox TreeTop_EventScript_BubbleDenizen_Text_0, MSGBOX_DEFAULT
# 36 "data/maps/NexusTreetop/scripts.pory"
	waitmessage
# 37 "data/maps/NexusTreetop/scripts.pory"
	release
	end

TreeTop_EventScript_BubbleDenizen_3:
# 42 "data/maps/NexusTreetop/scripts.pory"
	msgbox TreeTop_EventScript_BubbleDenizen_Text_1, MSGBOX_NPC
# 43 "data/maps/NexusTreetop/scripts.pory"
	waitmessage
# 44 "data/maps/NexusTreetop/scripts.pory"
	release
	end

TreeTop_EventScript_BubbleDenizen_5:
# 33 "data/maps/NexusTreetop/scripts.pory"
	compare VAR_TREETOP_AZUMARILL, 2
	goto_if_lt TreeTop_EventScript_BubbleDenizen_2
	goto TreeTop_EventScript_BubbleDenizen_4

TreeTop_EventScript_BubbleDenizen_9:
# 49 "data/maps/NexusTreetop/scripts.pory"
	msgbox TreeTop_EventScript_BubbleDenizen_Text_2, MSGBOX_NPC
# 50 "data/maps/NexusTreetop/scripts.pory"
	waitmessage
# 51 "data/maps/NexusTreetop/scripts.pory"
	release
# 52 "data/maps/NexusTreetop/scripts.pory"
	setvar VAR_TREETOP_AZUMARILL, 2
	end

TreeTop_EventScript_BubbleDenizen_10:
# 57 "data/maps/NexusTreetop/scripts.pory"
	trainerbattle_single TRAINER_BUBBLE_DENIZEN, TreeTop_EventScript_BubbleDenizen_Text_3, TreeTop_EventScript_BubbleDenizen_Text_4, TreeTop_EventScript_BubbleDenizen1_PostDefeat
# 58 "data/maps/NexusTreetop/scripts.pory"
	release
	end


TreeTop_EventScript_Azumarill::
# 68 "data/maps/NexusTreetop/scripts.pory"
	lock
# 69 "data/maps/NexusTreetop/scripts.pory"
	msgbox TreeTop_EventScript_Azumarill_Text_0, MSGBOX_YESNO
# 70 "data/maps/NexusTreetop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TreeTop_EventScript_Azumarill_1
# 76 "data/maps/NexusTreetop/scripts.pory"
	call TreeTop_EventScript_DontPetAzumarill
	return

TreeTop_EventScript_Azumarill_1:
# 72 "data/maps/NexusTreetop/scripts.pory"
	call TreeTop_EventScript_PetAzumarill
	return


TreeTop_EventScript_PetAzumarill:
# 82 "data/maps/NexusTreetop/scripts.pory"
	compare VAR_TREETOP_AZUMARILL, 2
	goto_if_lt TreeTop_EventScript_PetAzumarill_1
# 93 "data/maps/NexusTreetop/scripts.pory"
	msgbox TreeTop_EventScript_PetAzumarill_Text_1, MSGBOX_AUTOCLOSE
# 94 "data/maps/NexusTreetop/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 95 "data/maps/NexusTreetop/scripts.pory"
	compare VAR_TREETOP_AZUMARILL, 2
	goto_if_eq TreeTop_EventScript_PetAzumarill_5
TreeTop_EventScript_PetAzumarill_4:
# 102 "data/maps/NexusTreetop/scripts.pory"
	release
	end

TreeTop_EventScript_PetAzumarill_1:
# 84 "data/maps/NexusTreetop/scripts.pory"
	msgbox TreeTop_EventScript_PetAzumarill_Text_0, MSGBOX_AUTOCLOSE
# 85 "data/maps/NexusTreetop/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_ENCOUNTER
# 86 "data/maps/NexusTreetop/scripts.pory"
	delay 60
# 87 "data/maps/NexusTreetop/scripts.pory"
	trainerbattle_single TRAINER_BUBBLE_DENIZEN, t_BubbleDenizen1_Intro_Angry, t_BubbleDenizen1_Outro_Angry, TreeTop_EventScript_BubbleDenizen1_PostDefeat
# 88 "data/maps/NexusTreetop/scripts.pory"
	release
	end

TreeTop_EventScript_PetAzumarill_5:
# 97 "data/maps/NexusTreetop/scripts.pory"
	msgbox TreeTop_EventScript_PetAzumarill_Text_2, MSGBOX_DEFAULT
# 98 "data/maps/NexusTreetop/scripts.pory"
	waitmessage
# 99 "data/maps/NexusTreetop/scripts.pory"
	finditem ITEM_WATER_STONE
# 100 "data/maps/NexusTreetop/scripts.pory"
	setvar VAR_TREETOP_AZUMARILL, 3
	goto TreeTop_EventScript_PetAzumarill_4


TreeTop_EventScript_DontPetAzumarill:
# 109 "data/maps/NexusTreetop/scripts.pory"
	compare VAR_TREETOP_AZUMARILL, 0
	goto_if_eq TreeTop_EventScript_DontPetAzumarill_1
	return

TreeTop_EventScript_DontPetAzumarill_1:
# 111 "data/maps/NexusTreetop/scripts.pory"
	msgbox TreeTop_EventScript_DontPetAzumarill_Text_0, MSGBOX_DEFAULT
# 112 "data/maps/NexusTreetop/scripts.pory"
	setvar VAR_TREETOP_AZUMARILL, 1
	return


TreeTop_EventScript_BubbleDenizen1_PostDefeat::
# 118 "data/maps/NexusTreetop/scripts.pory"
	setflag FLAG_SYS_BUBBLEDENIZEN_DEFEATED
	end


NexusTreetop_EventScript_Yasu::
# 136 "data/maps/NexusTreetop/scripts.pory"
	trainerbattle_single TRAINER_YASU, t_Yasu_Intro, t_Yasu_Defeat
# 137 "data/maps/NexusTreetop/scripts.pory"
	msgbox t_Yasu_PostBattle, MSGBOX_AUTOCLOSE
	return


TreeTop_EventScript_BubbleDenizen_Text_0:
# 35 "data/maps/NexusTreetop/scripts.pory"
	.string "Leave us alone!$"

TreeTop_EventScript_BubbleDenizen_Text_1:
# 42 "data/maps/NexusTreetop/scripts.pory"
	.string "AZUMARILL loves belly rubs! Oh, also,\n"
	.string "did you know? One of the houses has a\l"
	.string "secret passage in it!$"

TreeTop_EventScript_BubbleDenizen_Text_2:
# 49 "data/maps/NexusTreetop/scripts.pory"
	.string "Oh, you want to pet AZUMARILL? Sure!\n"
	.string "Here's a tip. They like belly rubs!$"

TreeTop_EventScript_BubbleDenizen_Text_3:
# 57 "data/maps/NexusTreetop/scripts.pory"
	.string "Thanks for petting AZUMARILL! Now,\n"
	.string "let's battle!$"

TreeTop_EventScript_BubbleDenizen_Text_4:
# 57 "data/maps/NexusTreetop/scripts.pory"
	.string "Wow, DRAGON TAMERS sure are strong!$"

TreeTop_EventScript_BubbleDenizen_Text_5:
# 61 "data/maps/NexusTreetop/scripts.pory"
	.string "Wow, a real life DRAGON TAMER! Let's\n"
	.string "battle!$"

TreeTop_EventScript_Azumarill_Text_0:
# 69 "data/maps/NexusTreetop/scripts.pory"
	.string "Pet the AZUMARILL?$"

TreeTop_EventScript_PetAzumarill_Text_0:
# 84 "data/maps/NexusTreetop/scripts.pory"
	.string "The AZUMARILL bites you!$"

TreeTop_EventScript_PetAzumarill_Text_1:
# 93 "data/maps/NexusTreetop/scripts.pory"
	.string "The AZUMARILL loves it!$"

TreeTop_EventScript_PetAzumarill_Text_2:
# 97 "data/maps/NexusTreetop/scripts.pory"
	.string "The AZUMARILL has something to give\n"
	.string "you!$"

TreeTop_EventScript_DontPetAzumarill_Text_0:
# 111 "data/maps/NexusTreetop/scripts.pory"
	.string "Probably a good idea not to pet strange\n"
	.string "AZUMARILL. If you ask the TRAINER,\l"
	.string "maybe she will let you pet it?$"

t_BubbleDenizen1_Intro_Angry:
# 122 "data/maps/NexusTreetop/scripts.pory"
	.string "Hey, you!\p"
	.string "Stay away from my AZUMARILL!$"

t_BubbleDenizen1_Outro_Angry:
# 128 "data/maps/NexusTreetop/scripts.pory"
	.string "Get out of here!\p"
	.string "Leave us alone!$"

t_Yasu_Intro:
# 140 "data/maps/NexusTreetop/scripts.pory"
	.string "I've been training in here\n"
	.string "For 20 years!$"

t_Yasu_Defeat:
# 146 "data/maps/NexusTreetop/scripts.pory"
	.string "I must have not trained\p"
	.string "nearly enough.$"

t_Yasu_PostBattle:
# 152 "data/maps/NexusTreetop/scripts.pory"
	.string "Time doesn't move forward\p"
	.string "when you're in the bubble.$"
