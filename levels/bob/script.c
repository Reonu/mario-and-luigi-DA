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
		OBJECT(MODEL_BOWSER_BOMB, 831, 102, -5459, 0, 0, 0, 50, bhvBowserBomb),
		OBJECT(MODEL_LUIGINPC, 1859, 193, 6831, 0, 180, 0, 0x00010000, bhvLuigiNpc),
		OBJECT(MODEL_HMC_WOODEN_DOOR, -3258, 103, -20, 0, 90, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_HMC_WOODEN_DOOR, -3025, 102, 4207, 0, 126, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_TOAD, -56, 102, 2234, 0, 180, 0, 0x00000000, bhvToadMessage),
		OBJECT(MODEL_NONE, 0, 200, 0, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, -178, 102, -5959),
		OBJECT(MODEL_BITS_WARP_PIPE , 953, 102, -4879, 0, 0, 0, 0x00030000, bhvWarpPipe),
		OBJECT(MODEL_BITS_WARP_PIPE , 636, 102, -4838, 0, 0, 0, 0x00040000, bhvWarpPipe),
		OBJECT(MODEL_BITS_WARP_PIPE , 303, 102, -4874, 0, 0, 0, 0x00050000, bhvWarpPipe),
		OBJECT(MODEL_BITS_WARP_PIPE , 12, 102, -4874, 0, 0, 0, 0x00060000, bhvWarpPipe),
		OBJECT(MODEL_BITS_WARP_PIPE , -252, 102, -4874, 0, 0, 0, 0x00070000, bhvWarpPipe),
		OBJECT(MODEL_BITS_WARP_PIPE , -517, 102, -4874, 0, 0, 0, 0x00080000, bhvWarpPipe),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	AREA(2, bob_area_2),
		INSTANT_WARP(0x00, 0x01, 0, 0, 0),
		TERRAIN(bob_area_2_collision),
		MACRO_OBJECTS(bob_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -178, 102, -5959),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
