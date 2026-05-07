// Class: EntitySearch_TouchingRay


/* EntitySearch_TouchingRay::EntitySearch_TouchingRay(Sexy::SexyVector2 const&, Sexy::SexyVector2
   const&) */

void __thiscall
EntitySearch_TouchingRay::EntitySearch_TouchingRay
          (EntitySearch_TouchingRay *this,SexyVector2 *param_1,SexyVector2 *param_2)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntitySearch_TouchingRay::Accept(BoardEntity*) */

void __thiscall
EntitySearch_TouchingRay::Accept(EntitySearch_TouchingRay *this,BoardEntity *param_1)

{
  bool bVar1;
  Insets *pIVar2;
  Insets aIStack_38 [16];
  SexyRay2 aSStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar2 = (Insets *)(**(code **)(*(long *)param_1 + 0x178))(param_1);
  Sexy::Insets::Insets(aIStack_38,pIVar2);
  Sexy::SexyRay2::SexyRay2(aSStack_28,(SexyVector2 *)this,(SexyVector2 *)(this + 8));
  bVar1 = RectRayIntersection<int>((TRect *)aIStack_38,aSStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}

