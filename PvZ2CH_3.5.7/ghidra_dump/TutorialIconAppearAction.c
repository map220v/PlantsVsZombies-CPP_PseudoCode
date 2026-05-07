// Class: TutorialIconAppearAction


/* TutorialIconAppearAction::TutorialIconAppearAction(float, TutorialIconEffect*) */

void __thiscall
TutorialIconAppearAction::TutorialIconAppearAction
          (TutorialIconAppearAction *this,float param_1,TutorialIconEffect *param_2)

{
  undefined4 uVar1;
  
  RunnableAction::RunnableAction((RunnableAction *)this);
  *(TutorialIconEffect **)(this + 0x10) = param_2;
  *(undefined ***)this = &PTR_nop_06853340;
  uVar1 = PVZ_EOT();
  *(float *)(this + 0x1c) = param_1;
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}


/* TutorialIconAppearAction::onBegin() */

void __thiscall TutorialIconAppearAction::onBegin(TutorialIconAppearAction *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x18) = uVar1;
  if (0.0 < *(float *)(this + 0x1c)) {
    (**(code **)(*(long *)this + 0x28))(this);
    return;
  }
  RunnableAction::End((RunnableAction *)this);
  (**(code **)(*(long *)this + 0x28))(this);
  return;
}


/* TutorialIconAppearAction::onUpdate() */

void __thiscall TutorialIconAppearAction::onUpdate(TutorialIconAppearAction *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x1c) + *(float *)(this + 0x18) <= fVar1) {
    RunnableAction::End((RunnableAction *)this);
  }
  (**(code **)(*(long *)this + 0x30))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialIconAppearAction::Prepare() */

void __thiscall TutorialIconAppearAction::Prepare(TutorialIconAppearAction *this)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x10) != 0) {
    lVar1 = Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    FUN_044b41cc(lVar1 + 0x38,1);
    TutorialIconEffect::SetIsHidden(*(TutorialIconEffect **)(this + 0x10),true);
    plVar3 = *(long **)(this + 0x10);
    pcVar2 = *(code **)(*plVar3 + 0x78);
    EATextSquish::Vec3::Vec3
              (aVStack_18,(float)*(int *)(gLawnApp + 0x724) * 0.5,
               (float)*(int *)(gLawnApp + 0x728) * 0.5,0.0);
    (*pcVar2)(plVar3,aVStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

