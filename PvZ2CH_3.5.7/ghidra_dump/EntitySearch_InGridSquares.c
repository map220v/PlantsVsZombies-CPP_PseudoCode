// Class: EntitySearch_InGridSquares


/* EntitySearch_InGridSquares::EntitySearch_InGridSquares(Sexy::TRect<int> const&) */

void __thiscall
EntitySearch_InGridSquares::EntitySearch_InGridSquares
          (EntitySearch_InGridSquares *this,TRect *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntitySearch_InGridSquares::Accept(BoardEntity*) */

void __thiscall
EntitySearch_InGridSquares::Accept(EntitySearch_InGridSquares *this,BoardEntity *param_1)

{
  TRect<int> aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 400))(aTStack_18,param_1);
  Sexy::TRect<int>::Intersects(aTStack_18,(TRect *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

