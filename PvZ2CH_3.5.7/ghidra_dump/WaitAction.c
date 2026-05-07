// Class: WaitAction


/* WaitAction::WaitAction(float) */

void __thiscall WaitAction::WaitAction(WaitAction *this,float param_1)

{
  undefined4 uVar1;
  
  RunnableAction::RunnableAction((RunnableAction *)this);
  *(undefined ***)this = &PTR_nop_06675e20;
  uVar1 = PVZ_EOT();
  *(float *)(this + 0x10) = param_1;
  *(undefined4 *)(this + 0xc) = uVar1;
  return;
}


/* WaitAction::onBegin() */

void __thiscall WaitAction::onBegin(WaitAction *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0xc) = uVar1;
  if (0.0 < *(float *)(this + 0x10)) {
    return;
  }
  RunnableAction::End((RunnableAction *)this);
  return;
}


/* WaitAction::onUpdate() */

void __thiscall WaitAction::onUpdate(WaitAction *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (fVar1 < *(float *)(this + 0x10) + *(float *)(this + 0xc)) {
    return;
  }
  RunnableAction::End((RunnableAction *)this);
  return;
}

