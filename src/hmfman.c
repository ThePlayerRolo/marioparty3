#include "game/hmfman.h"

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001A070_1AC70);

INCLUDE_ASM("asm/nonmatchings/hmfman", Hu3DModelCreate);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001A61C_1B21C);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001A894_1B494);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001ABD4_1B7D4);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001AC34_1B834);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001AC8C_1B88C);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001ACDC_1B8DC);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001AFE4_1BBE4);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001B0B4_1BCB4);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001BD24_1C924);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001BF14_1CB14);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001BF90_1CB90);

void Hu3DModelPosSet(s16 arg0, f32 x, f32 y, f32 z) {
    if (arg0 >= 0 && HmfModelData[arg0].unk64 != NULL) {
        HmfModelData[arg0].pos.x = x;
        HmfModelData[arg0].pos.y = y;
        HmfModelData[arg0].pos.z = z;
    }
}

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001C114_1CD14);

void Hu3DModelRotSet(s16 arg0, f32 x, f32 y, f32 z) {
    if (arg0 >= 0 && HmfModelData[arg0].unk64 != NULL) {
        HmfModelData[arg0].rot.x = x;
        HmfModelData[arg0].rot.y = y;
        HmfModelData[arg0].rot.z = z;
    }
}

void Hu3DModelScaleSet(s16 arg0, f32 x, f32 y, f32 z) {
    if (arg0 >= 0 && HmfModelData[arg0].unk64 != NULL) {
        HmfModelData[arg0].scale.x = x;
        HmfModelData[arg0].scale.y = y;
        HmfModelData[arg0].scale.z = z;
    }
}

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001C1F0_1CDF0);

void func_8001C258_1CE58(s16 arg0, s32 arg1, s32 arg2) {
    HmfModel* model = &HmfModelData[arg0];

    if (model->unk64 != NULL) {
        if (arg1 & 0xB3F82) {
            arg2 |= 0x800000;
        }
        if (arg1 & 0x1C00) {
            func_8001C8E4_1D4E4(arg0, arg2 & 0x1C00);
        }
        model->unk18 &= ~arg1;
        model->unk18 |= arg2;
    }
}

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001C2FC_1CEFC);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001C39C_1CF9C);

INCLUDE_RODATA("asm/nonmatchings/hmfman", D_800A6BB8_A77B8);

INCLUDE_RODATA("asm/nonmatchings/hmfman", D_800A6BBC_A77BC);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001C448_1D048);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001C514_1D114);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001C5B4_1D1B4);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001C624_1D224);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001C6A8_1D2A8);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001C718_1D318);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001C760_1D360);

f32 func_8001C7D0_1D3D0(s16 arg0) {
    if (HmfModelData[arg0].unk04 == 0xFF) {
        return -1.0f;
    }
    return HmfModelData[arg0].unk4C;
}

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001C814_1D414);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001C8A8_1D4A8);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001C8E4_1D4E4);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001C92C_1D52C);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001C954_1D554);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001CAA4_1D6A4);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001CD34_1D934);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001CE28_1DA28);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001CF1C_1DB1C);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001D330_1DF30);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001D33C_1DF3C);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001D558_1E158);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001D638_1E238);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001D874_1E474);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001DACC_1E6CC);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001DDB8_1E9B8);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001E500_1F100);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001E65C_1F25C);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001E888_1F488);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001EBC0_1F7C0);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001ED54_1F954);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001EED8_1FAD8);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001EF24_1FB24);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001EF60_1FB60);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001EF6C_1FB6C);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001EFEC_1FBEC);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001F038_1FC38);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001F154_1FD54);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001F1FC_1FDFC);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001F304_1FF04);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001F358_1FF58);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001F38C_1FF8C);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001F3A8_1FFA8);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001F450_20050);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001F4BC_200BC);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001F668_20268);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001F6B0_202B0);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001F6BC_202BC);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001F6F8_202F8);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001F734_20334);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001F95C_2055C);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001F974_20574);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001F9E4_205E4);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001FA68_20668);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001FB34_20734);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001FBBC_207BC);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001FBFC_207FC);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001FD08_20908);

INCLUDE_ASM("asm/nonmatchings/hmfman", func_8001FDE8_209E8);

INCLUDE_RODATA("asm/nonmatchings/hmfman", D_800A6C04_A7804);
