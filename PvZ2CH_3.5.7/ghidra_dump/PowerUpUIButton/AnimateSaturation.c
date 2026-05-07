// Class: PowerUpUIButton::AnimateSaturation


/* PowerUpUIButton::AnimateSaturation::AnimateSaturation(PowerUpUIButton*, float, float, float) */

void __thiscall
PowerUpUIButton::AnimateSaturation::AnimateSaturation
          (AnimateSaturation *this,PowerUpUIButton *param_1,float param_2,float param_3,
          float param_4)

{
  undefined4 uVar1;
  
  RunnableAction::RunnableAction((RunnableAction *)this);
  *(PowerUpUIButton **)(this + 0x10) = param_1;
  *(undefined ***)this = &PTR_nop_06675440;
  *(float *)(this + 0x18) = param_2;
  *(float *)(this + 0x1c) = param_3;
  *(float *)(this + 0x20) = param_4;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x24) = uVar1;
  return;
}


/* PowerUpUIButton::AnimateSaturation::onBegin() */

void __thiscall PowerUpUIButton::AnimateSaturation::onBegin(AnimateSaturation *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x24) = uVar1;
  return;
}


/* PowerUpUIButton::AnimateSaturation::onUpdate() */

void __thiscall PowerUpUIButton::AnimateSaturation::onUpdate(AnimateSaturation *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)PVZ_T();
  fVar3 = *(float *)(this + 0x24);
  fVar4 = *(float *)(this + 0x20);
  fVar2 = CurveEvaluateClamped<float>(this + 0x18,this + 0x1c,1);
  SetSaturation(*(PowerUpUIButton **)(this + 0x10),fVar2);
  if (1.0 <= (fVar1 - fVar3) / fVar4) {
    RunnableAction::End((RunnableAction *)this);
    return;
  }
  return;
}

