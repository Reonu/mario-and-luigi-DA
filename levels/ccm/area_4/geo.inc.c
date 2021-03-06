#include "src/game/envfx_snow.h"

const GeoLayout ccm_area_4_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 92, 1487, 13511),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 92, 1487, 13511),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 92, 1487, 13511),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 92, 1487, 13511),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 92, 1487, 13511),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 92, 1487, 13511),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 92, 1487, 13511),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 92, 1487, 13511),
		GEO_TRANSLATE_NODE_WITH_DL(1, -25, 0, -1720, ccm_dl_Plane_003_mesh_layer_1),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -38, 0, 9513),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout ccm_area_4[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_FLAMING_SKY, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, -1284, 2487, 113060, -1284, 2387, 113060, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, ccm_area_4_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_LAVA_BUBBLES, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(1, ccm_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
