// Class: EntitySearch_TouchingCircle


/* EntitySearch_TouchingCircle::EntitySearch_TouchingCircle(Sexy::SexyVector2 const&, float) */

void __thiscall
EntitySearch_TouchingCircle::EntitySearch_TouchingCircle
          (EntitySearch_TouchingCircle *this,SexyVector2 *param_1,float param_2)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(float *)(this + 8) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntitySearch_TouchingCircle::Accept(BoardEntity*) */

void __thiscall
EntitySearch_TouchingCircle::Accept(EntitySearch_TouchingCircle *this,BoardEntity *param_1)

{
  bool bVar1;
  Insets *pIVar2;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar2 = (Insets *)(**(code **)(*(long *)param_1 + 0x178))(param_1);
  Sexy::Insets::Insets(aIStack_18,pIVar2);
  bVar1 = RectCircleIntersection<int>((TRect *)aIStack_18,(SexyVector2 *)this,*(float *)(this + 8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}

