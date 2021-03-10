// sound_birds.inc.c

void bhv_birds_sound_loop(void) {
    if (o->oTimer == 0) {
        if (gCurrLevelNum == LEVEL_CCM){
            cutscene_object(CUTSCENE_BEHIND, o);
        }
    }
    if (o->oTimer < 2000) {
        gMarioState->pos[2] = -10000;
    }
    if (gMarioState->faceAngle[1] > 10000) {
        gMarioState->faceAngle[1] = 10000;
    }
    if (gMarioState->faceAngle[1] < -10000) {
        gMarioState->faceAngle[1] = -10000;
    }
    gMarioState->marioObj->header.gfx.node.flags &= ~GRAPH_RENDER_INVISIBLE;
}
