#include "common.h"

extern f32 D_800A12A4_A1EA4;


s32 func_80089860_8A460(f32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    if ((-D_800A12A4_A1EA4 <= arg0) && (arg0 <= D_800A12A4_A1EA4)) {
        var_v0 = 1;
    }
    return var_v0;
}

