// Class: EntitySearch_TouchingRectangle


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntitySearch_TouchingRectangle::Accept(BoardEntity*) */

void __thiscall
EntitySearch_TouchingRectangle::Accept(EntitySearch_TouchingRectangle *this,BoardEntity *param_1)

{
  Insets *pIVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar1 = (Insets *)(**(code **)(*(long *)param_1 + 0x178))(param_1);
  Sexy::Insets::Insets(aIStack_18,pIVar1);
  Sexy::TRect<int>::Intersects((TRect<int> *)aIStack_18,(TRect *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

