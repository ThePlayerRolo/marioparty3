#include "common.h"

void func_800E1934_F5554_shared_board(s32, s32);
extern s8 D_80102C48_116868_shared_board;

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5070", func_800E1450_F5070_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5070", func_800E17B0_F53D0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5070", func_800E1828_F5448_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5070", func_800E18FC_F551C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5070", func_800E1934_F5554_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5070", func_800E1F28_F5B48_shared_board);

void ShowPlayerCoinChange(s32 player, s32 coins) {
    D_80102C48_116868_shared_board = 1;
    func_800E1934_F5554_shared_board(player, coins);
}
