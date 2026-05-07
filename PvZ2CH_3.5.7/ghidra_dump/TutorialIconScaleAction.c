// Class: TutorialIconScaleAction


/* TutorialIconScaleAction::TutorialIconScaleAction(float, float, float, CurveType,
   TutorialIconEffect*) */

void __thiscall
TutorialIconScaleAction::TutorialIconScaleAction
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,TutorialIconScaleAction *this,
          undefined4 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  
  RunnableAction::RunnableAction((RunnableAction *)this);
  *(undefined8 *)(this + 0x10) = param_6;
  *(undefined4 *)(this + 0x18) = param_5;
  *(undefined ***)this = &PTR_nop_068533e0;
  uVar1 = PVZ_EOT();
  this[0x2c] = (TutorialIconScaleAction)0x0;
  *(undefined4 *)(this + 0x20) = param_1;
  *(undefined4 *)(this + 0x1c) = uVar1;
  *(undefined4 *)(this + 0x24) = param_2;
  *(undefined4 *)(this + 0x28) = param_3;
  return;
}


/* TutorialIconScaleAction::onBegin() */

void __thiscall TutorialIconScaleAction::onBegin(TutorialIconScaleAction *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1c) = uVar1;
  if (*(TutorialIconEffect **)(this + 0x10) != (TutorialIconEffect *)0x0) {
    TutorialIconEffect::SetIsHidden(*(TutorialIconEffect **)(this + 0x10),false);
  }
  (**(code **)(*(long *)this + 0x28))(this);
  return;
}


/* TutorialIconScaleAction::onUpdate() */

void __thiscall TutorialIconScaleAction::onUpdate(TutorialIconScaleAction *this)

{
  float fVar1;
  float fVar2;
  
  if (*(long *)(this + 0x10) == 0) {
    return;
  }
  fVar1 = (float)PVZ_T();
  fVar2 = (fVar1 - *(float *)(this + 0x1c)) / *(float *)(this + 0x28);
  fVar1 = CurveEvaluate<float>(this + 0x20,this + 0x24,*(undefined4 *)(this + 0x18));
  TutorialIconEffect::UpdateScale(*(TutorialIconEffect **)(this + 0x10),fVar1);
  (**(code **)(*(long *)this + 0x30))(fVar2,this);
  if (fVar2 <= 1.0) {
    if (this[0x2c] == (TutorialIconScaleAction)0x0) {
      return;
    }
  }
  else {
    this[0x2c] = (TutorialIconScaleAction)0x1;
  }
  RunnableAction::End((RunnableAction *)this);
  return;
}

