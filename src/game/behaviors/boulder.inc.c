// boulder.c.inc

void bhv_big_boulder_init(void) {
    o->oHomeX = o->oPosX;
    o->oHomeY = o->oPosY;
    o->oHomeZ = o->oPosZ;

    o->oGravity = 8.0f;
    o->oFriction = 0.999f;
    o->oBuoyancy = 2.0f;
}

void boulder_act_1(void) {
    s16 sp1E;

    sp1E = object_step_without_floor_orient();
    if ((sp1E & 0x09) == 0x01 && o->oVelY > 10.0f) {
        cur_obj_play_sound_2(SOUND_GENERAL_GRINDEL_ROLL);
        spawn_mist_particles();
    }

    if (o->oForwardVel > 70.0)
        o->oForwardVel = 70.0f;

    if (o->oPosY < -1000.0f)
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
}

void bhv_big_boulder_loop(void) {
    cur_obj_scale(1.5f);
    o->oGraphYOffset = 270.0f;
    switch (o->oAction) {
        case 0:
            o->oForwardVel = 40.0f;
            o->oAction = 1;
            break;

        case 1:
            boulder_act_1();
            adjust_rolling_face_pitch(1.5f);
            cur_obj_play_sound_1(SOUND_ENV_UNKNOWN2);
            break;
    }

    set_rolling_sphere_hitbox();
}

void bhv_big_boulder_generator_loop(void) {
    struct Object *sp1C;
        if (o->oTimer == 150) {
            sp1C = spawn_object(o, MODEL_SNOW_BOULDER, bhvBigBoulder);
            sp1C->oMoveAngleYaw = (s16)(random_float() * 4096.0f) + 0x8000;
            o->oTimer = 0;
        }
    }
