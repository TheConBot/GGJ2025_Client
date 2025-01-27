TheCave2_MapScripts::
# 3 "data/maps/TheCave2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TheCave2_OnTransition
	.byte 0


TheCave2_OnTransition:
# 8 "data/maps/TheCave2/scripts.pory"
	setrespawn HEAL_LOCATION_THE_BUBBLE
	end

