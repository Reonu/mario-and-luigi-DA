#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/bob/header.h"

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0xb, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_WOODEN_DOOR, wooden_door_geo), 

	AREA(1, bob_area_1),
		INSTANT_WARP(0x00, 0x02, 0, 0, 0),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xFF, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_CCM, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x05, LEVEL_CCM, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x06, LEVEL_CCM, 0x04, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x07, LEVEL_CCM, 0x05, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x08, LEVEL_CCM, 0x06, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x09, LEVEL_CCM, 0x07, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_LUIGINPC, -254, 102, 2421, 0, 180, 0, 0x00010000, bhvLuigiNpc),
		OBJECT(MODEL_HMC_WOODEN_DOOR, -3258, 103, -20, 0, 90, 0, 0x00000000, bhvStaticObject),
		OBJECT(MODEL_HMC_WOODEN_DOOR, -3025, 102, 4207, 0, 126, 0, 0x00000000, bhvStaticObject),
		OBJECT(MODEL_TOAD2, -471, 102, 2416, 0, 180, 0, 0x00000000, bhvToad2),
		OBJECT(MODEL_TOAD2, 4197, 102, 12, 0, 180, 0, 0x00020000, bhvToad2),
		OBJECT(MODEL_TOAD2, 1594, 102, 6740, 0, 180, 0, 0x00070000, bhvToad2),
		OBJECT(MODEL_TOAD2, -2253, 102, -7028, 0, 180, 0, 0x00080000, bhvToad2),
		OBJECT(MODEL_TOAD2, -3066, 1470, 4211, 0, 180, 0, 0x0000F0000, bhvToad2),
		OBJECT(MODEL_NONE, -628, 102, 1847, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, -644, 102, 1764),
		OBJECT(MODEL_WOODEN_SIGNPOST, -620, 102, 2061, 0, -180, 0, 0x00060000, bhvMessagePanel),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_HOT),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	AREA(2, bob_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 59, -9263, -10770, 0, 0, 0, 0x000A0000, bhvInstantActiveWarp),
		OBJECT(MODEL_KOOPA_SHELL, 589, -9144, -9246, 0, 0, 0, 0x00000000, bhvKoopaShell),
		OBJECT(MODEL_KOOPA_SHELL, 248, -9148, -9259, 0, 0, 0, 0x00000000, bhvKoopaShell),
		OBJECT(MODEL_STAR, -38, -4589, -1783, 0, 0, 0, 0x00000000, bhvStar),
		TERRAIN(bob_area_2_collision),
		MACRO_OBJECTS(bob_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	AREA(3, bob_area_3),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_ENDING, 0x01, 0x00, WARP_NO_CHECKPOINT),
		WARP_NODE(0xFB, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_LUIGINPCBYE, 172, 0, 238, 0, 180, 0, 0x00100000, bhvLuigiNpcBye),
		OBJECT(MODEL_NONE, -5, 0, -68, 0, 0, 0, 0x000A0000, bhvInstantActiveWarp),
		OBJECT(MODEL_WOODEN_SIGNPOST, 15, 0, 99, 0, 180, 0, 0x00040000, bhvMessagePanel),
		TERRAIN(bob_area_3_collision),
		MACRO_OBJECTS(bob_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_EVENT_CUTSCENE_CREDITS),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -644, 102, 1764),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
