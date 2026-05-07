// Class: EntitySearch_InGridRows


/* EntitySearch_InGridRows::EntitySearch_InGridRows(int, int) */

void __thiscall
EntitySearch_InGridRows::EntitySearch_InGridRows
          (EntitySearch_InGridRows *this,int param_1,int param_2)

{
  Sexy::Insets::Insets((Insets *)this,-100,param_1,200,(param_2 - param_1) + 1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntitySearch_InGridRows::Accept(BoardEntity*) */

void __thiscall EntitySearch_InGridRows::Accept(EntitySearch_InGridRows *this,BoardEntity *param_1)

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

