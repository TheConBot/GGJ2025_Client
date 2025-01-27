Treetop_House1_MapScripts::
	.byte 0


Treetop_House1_TorkoalLady::
# 5 "data/maps/Treetop_House1/scripts.pory"
	lock
# 6 "data/maps/Treetop_House1/scripts.pory"
	faceplayer
# 7 "data/maps/Treetop_House1/scripts.pory"
	goto_if_set FLAG_FORTREE_NPC_TRADE_COMPLETED, Treetop_House1_TorkoalLady_2
# 13 "data/maps/Treetop_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TORKOAL
# 14 "data/maps/Treetop_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 15 "data/maps/Treetop_House1/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 16 "data/maps/Treetop_House1/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 17 "data/maps/Treetop_House1/scripts.pory"
	msgbox t_Treetop_House1_YouWillTradeWontYou, MSGBOX_YESNO
# 18 "data/maps/Treetop_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Treetop_House1_TorkoalLady_5
# 24 "data/maps/Treetop_House1/scripts.pory"
	special ChoosePartyMon
# 25 "data/maps/Treetop_House1/scripts.pory"
	waitstate
# 27 "data/maps/Treetop_House1/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 28 "data/maps/Treetop_House1/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Treetop_House1_TorkoalLady_8
# 34 "data/maps/Treetop_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 35 "data/maps/Treetop_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 36 "data/maps/Treetop_House1/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 37 "data/maps/Treetop_House1/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne Treetop_House1_TorkoalLady_11
# 44 "data/maps/Treetop_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 45 "data/maps/Treetop_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 46 "data/maps/Treetop_House1/scripts.pory"
	special CreateInGameTradePokemon
# 47 "data/maps/Treetop_House1/scripts.pory"
	special DoInGameTradeScene
# 48 "data/maps/Treetop_House1/scripts.pory"
	waitstate
# 50 "data/maps/Treetop_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 51 "data/maps/Treetop_House1/scripts.pory"
	msgbox t_Treetop_House1_MonYouTakeCare, MSGBOX_DEFAULT
# 52 "data/maps/Treetop_House1/scripts.pory"
	setflag FLAG_FORTREE_NPC_TRADE_COMPLETED
# 53 "data/maps/Treetop_House1/scripts.pory"
	release
	end

Treetop_House1_TorkoalLady_2:
# 9 "data/maps/Treetop_House1/scripts.pory"
	msgbox t_Treetop_House1_GoingToMakeTorkoalStrong, MSGBOX_DEFAULT
# 10 "data/maps/Treetop_House1/scripts.pory"
	release
	end

Treetop_House1_TorkoalLady_5:
# 20 "data/maps/Treetop_House1/scripts.pory"
	msgbox t_Treetop_House1_YouWontTradeMe, MSGBOX_DEFAULT
# 21 "data/maps/Treetop_House1/scripts.pory"
	release
	end

Treetop_House1_TorkoalLady_8:
# 30 "data/maps/Treetop_House1/scripts.pory"
	msgbox t_Treetop_House1_YouWontTradeMe, MSGBOX_DEFAULT
# 31 "data/maps/Treetop_House1/scripts.pory"
	release
	end

Treetop_House1_TorkoalLady_11:
# 39 "data/maps/Treetop_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 40 "data/maps/Treetop_House1/scripts.pory"
	msgbox t_Treetop_House1_NotNinjask, MSGBOX_DEFAULT
# 41 "data/maps/Treetop_House1/scripts.pory"
	release
	end


t_Treetop_House1_YouWillTradeWontYou::
# 57 "data/maps/Treetop_House1/scripts.pory"
	.string "Oh dear, I must have it!\n"
	.string "A NINJASK, so resplendent yet elusive!\l"
	.string "I'll trade my TORKOAL for it!\p"
	.string "Did you hear my plea?\n"
	.string "From the depths of my heart?\l"
	.string "I'll even let you in on a secret\p"
	.string "You can catch NINCADA on the forest floor.\n"
	.string "So won't you help me?$"

t_Treetop_House1_MonYouTakeCare::
# 69 "data/maps/Treetop_House1/scripts.pory"
	.string "Ah, thank you, kind soul!\p"
	.string "NINJASK, welcome!\n"
	.string "TORKOAL, be well with your new friend!$"

t_Treetop_House1_NotNinjask::
# 76 "data/maps/Treetop_House1/scripts.pory"
	.string "Oh no, this won't do.\n"
	.string "That isn't a NINJASK.$"

t_Treetop_House1_YouWontTradeMe::
# 82 "data/maps/Treetop_House1/scripts.pory"
	.string "Oh, you won't trade?\n"
	.string "Even after my heartfelt plea?$"

t_Treetop_House1_GoingToMakeTorkoalStrong::
# 88 "data/maps/Treetop_House1/scripts.pory"
	.string "You must make TORKOAL stronger\n"
	.string "to make yourself stronger too!$"
