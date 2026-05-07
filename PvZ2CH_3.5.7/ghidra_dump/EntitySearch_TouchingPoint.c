// Class: EntitySearch_TouchingPoint


/* EntitySearch_TouchingPoint::EntitySearch_TouchingPoint(Sexy::SexyVector2 const&) */

void __thiscall
EntitySearch_TouchingPoint::EntitySearch_TouchingPoint
          (EntitySearch_TouchingPoint *this,SexyVector2 *param_1)

{
  Sexy::Point::Point((Point *)this,(int)*(float *)param_1,(int)*(float *)(param_1 + 4));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntitySearch_TouchingPoint::Accept(BoardEntity*) */

void __thiscall
EntitySearch_TouchingPoint::Accept(EntitySearch_TouchingPoint *this,BoardEntity *param_1)

{
  Insets *pIVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar1 = (Insets *)(**(code **)(*(long *)param_1 + 0x178))(param_1);
  Sexy::Insets::Insets(aIStack_18,pIVar1);
  Sexy::TRect<int>::Contains((TRect<int> *)aIStack_18,(TPoint *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

