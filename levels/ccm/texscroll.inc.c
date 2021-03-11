void scroll_ccm_dl_Plane_001_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 20;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(ccm_dl_Plane_001_mesh_layer_1_vtx_1);

	deltaX = (int)(0.05000000074505806 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_ccm_dl_Plane_003_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 56;
	int width = 128 * 0x20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ccm_dl_Plane_003_mesh_layer_1_vtx_0);

	deltaY = (int)(0.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_ccm_dl_Plane_003_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 20;
	int width = 128 * 0x20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ccm_dl_Plane_003_mesh_layer_1_vtx_1);

	deltaY = (int)(0.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_ccm() {
	scroll_ccm_dl_Plane_001_mesh_layer_1_vtx_1();
	scroll_ccm_dl_Plane_003_mesh_layer_1_vtx_0();
	scroll_ccm_dl_Plane_003_mesh_layer_1_vtx_1();
}
