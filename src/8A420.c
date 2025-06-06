#include "common.h"

s32 func_80089820_8A420(f32 arg0, f32 arg1) {
    s32 var_v0;
    s32 var_v1;

    var_v0 = 1;
    if (!(-arg1 <= arg0)) {
        var_v0 = 0;
    }
    var_v1 = 1;
    if (!(arg0 <= arg1)) {
        var_v1 = 0;
    }
    return var_v0 & var_v1;
}

