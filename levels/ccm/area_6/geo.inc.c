#include "src/game/envfx_snow.h"

const GeoLayout ccm_area_6_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(1, 0, 824, 3665, ccm_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 0, 924, 3130, ccm_dl_Cube_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 0, 1174, 2599, ccm_dl_Cube_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 0, 4062, 3365, ccm_dl_Cube_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 0, 4062, 3965, ccm_dl_Cube_004_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 0, 4062, 4565, ccm_dl_Cube_005_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -9119, -3541, 10025, ccm_dl_Mountain_006_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -9119, -3541, 1521, ccm_dl_Mountain_007_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -9119, -3541, -6981, ccm_dl_Mountain_008_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 0, -70, 10815, ccm_dl_Plane_007_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout ccm_area_6[] = {
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
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 222835, 0, -100, 222835, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, ccm_area_6_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_LAVA_BUBBLES, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(1, ccm_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
