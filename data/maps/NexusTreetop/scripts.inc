NexusTreetop_MapScripts::
	.byte 0


NexusTreetop_EventScript_Yasu::
# 8 "data/maps/NexusTreetop/scripts.pory"
	trainerbattle_single TRAINER_YASU, t_Yasu_Intro, t_Yasu_Defeat
# 9 "data/maps/NexusTreetop/scripts.pory"
	msgbox t_Yasu_PostBattle, MSGBOX_AUTOCLOSE
	return


t_Yasu_Intro:
# 12 "data/maps/NexusTreetop/scripts.pory"
	.string "I've been training in here\n"
	.string "For 20 years!$"

t_Yasu_Defeat:
# 18 "data/maps/NexusTreetop/scripts.pory"
	.string "I must have not trained\p"
	.string "nearly enough.$"

t_Yasu_PostBattle:
# 24 "data/maps/NexusTreetop/scripts.pory"
	.string "Time doesn't move forward\p"
	.string "when you're in the bubble.$"
