// !!! DO NOT ADD #pragma once !!! //

RGB_MATRIX_EFFECT(NewEffect)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS
static HSV NewEffect_math(HSV hsv, int16_t dx, int16_t dy, uint8_t dist, uint8_t time) {
    hsv.h = scale8(hsv.h + dist - time + atan2_8(dy, dx), hsv.h);
    return hsv;
}
bool NewEffect(effect_params_t* params) { return effect_runner_dx_dy_dist(params, &NewEffect_math); }
#endif

