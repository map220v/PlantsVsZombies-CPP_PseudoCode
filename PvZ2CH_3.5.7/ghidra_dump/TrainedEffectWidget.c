// Class: TrainedEffectWidget


/* TrainedEffectWidget::onAnimStopped(std::string const&) */

void TrainedEffectWidget::onAnimStopped(string *param_1)

{
  *(undefined4 *)(param_1 + 0x168) = 2;
  return;
}


/* TrainedEffectWidget::~TrainedEffectWidget() */

void __thiscall TrainedEffectWidget::~TrainedEffectWidget(TrainedEffectWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0694b860;
  if (*(long **)(this + 0x118) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x118) + 0x18))();
    *(undefined8 *)(this + 0x118) = 0;
  }
  UIWidgetAnim::~UIWidgetAnim((UIWidgetAnim *)this);
  return;
}


/* TrainedEffectWidget::~TrainedEffectWidget() */

void __thiscall TrainedEffectWidget::~TrainedEffectWidget(TrainedEffectWidget *this)

{
  ~TrainedEffectWidget(this);
  AK::FreeHook(this);
  return;
}


/* TrainedEffectWidget::SetStopCallback(Sexy::Delegate0 const&) */

void __thiscall TrainedEffectWidget::SetStopCallback(TrainedEffectWidget *this,Delegate0 *param_1)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x120),(Delegate2 *)param_1);
  return;
}


/* TrainedEffectWidget::TrainedEffectWidget() */

void __thiscall TrainedEffectWidget::TrainedEffectWidget(TrainedEffectWidget *this)

{
  undefined4 uVar1;
  DeviceImage *this_00;
  long *plVar2;
  
  UIWidgetAnim::UIWidgetAnim((UIWidgetAnim *)this);
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined ***)this = &PTR_GetClass_0694b860;
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x120),(DummyInit *)0x0);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x150));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x158));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x160));
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0x3f800000;
  *(undefined4 *)(this + 0x170) = 0x3f800000;
  this_00 = ::operator_new(0x160);
  Sexy::DeviceImage::DeviceImage(this_00,gLawnApp);
  *(DeviceImage **)(this + 0x118) = this_00;
  FUN_04adfab8(this_00 + 0x18);
  plVar2 = *(long **)(this + 0x118);
  uVar1 = FUN_04adfd5c(0x32);
  *(undefined4 *)(plVar2 + 7) = uVar1;
  uVar1 = FUN_04adfd5c(0x32);
  plVar2[0xe] = 0;
  *(undefined4 *)((long)plVar2 + 0x3c) = uVar1;
  (**(code **)(*plVar2 + 0x130))(plVar2,1,1);
  this[0x59] = (TrainedEffectWidget)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainedEffectWidget::PlayEffect(Sexy::SexyVector2 const&, Sexy::SexyVector2 const&) */

void __thiscall
TrainedEffectWidget::PlayEffect(TrainedEffectWidget *this,SexyVector2 *param_1,SexyVector2 *param_2)

{
  long lVar1;
  PopAnimRig *pPVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,(int)*(float *)param_1,(int)*(float *)(param_1 + 4),
             *(undefined4 *)(*(long *)(this + 0x118) + 0x38),
             *(undefined4 *)(*(long *)(this + 0x118) + 0x3c));
  *(undefined8 *)(this + 0x150) = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x158) = *(undefined8 *)param_1;
  pPVar2 = *(PopAnimRig **)(this + 0xd8);
  fVar4 = *(float *)(param_2 + 4);
  fVar3 = *(float *)(param_1 + 4);
  fVar6 = *(float *)param_1;
  fVar5 = *(float *)param_2;
  *(int *)(this + 0x4c) = (int)*(float *)(this + 0x15c);
  *(float *)(this + 0x164) = (fVar4 - fVar3) * 0.1;
  *(int *)(this + 0x48) = (int)*(float *)(this + 0x158);
  *(float *)(this + 0x160) = (fVar5 - fVar6) * 0.1;
  *(undefined4 *)(this + 0x16c) = 0x3fc00000;
  *(undefined4 *)(this + 0x170) = 0x3f99999a;
  std::string::string(asStack_58,"idle");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimStopped);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<TrainedEffectWidget,void(TrainedEffectWidget::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x168) = 1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainedEffectWidget::Draw(Sexy::Graphics*) */

void __thiscall TrainedEffectWidget::Draw(TrainedEffectWidget *this,Graphics *param_1)

{
  int iVar1;
  int *piVar2;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x168) == 1) {
    iVar1 = FUN_04adfd5c(0x19);
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) - (float)iVar1;
    iVar1 = FUN_04adfd5c(5);
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) - (float)iVar1;
    UIWidgetAnim::Draw((UIWidgetAnim *)this,param_1);
  }
  else if (*(int *)(this + 0x168) == 2) {
    local_20 = 0xff;
    local_1c = (int)(*(float *)(this + 0x170) * 255.0);
    piVar2 = eastl::min_alt<int>(&local_20,&local_1c);
    Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xff,*piVar2);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    Sexy::Graphics::SetScale(param_1,*(float *)(this + 0x16c),*(float *)(this + 0x16c),0.0,0.0);
    Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 0x118),0,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainedEffectWidget::Update() */

void __thiscall TrainedEffectWidget::Update(TrainedEffectWidget *this)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(int *)(this + 0x168) == 1) {
    UIWidgetAnim::Update((UIWidgetAnim *)this);
    return;
  }
  if (*(int *)(this + 0x168) == 2) {
    fVar9 = *(float *)(this + 0x160);
    uVar5 = (uint)(*(float *)(this + 0x158) - *(float *)(this + 0x150));
    uVar4 = (int)fVar9 >> 0x1f;
    uVar3 = (int)uVar5 >> 0x1f;
    bVar2 = (int)((uVar5 ^ uVar3) - uVar3) <= (int)(((int)fVar9 ^ uVar4) - uVar4);
    if (!bVar2) {
      *(float *)(this + 0x158) = fVar9 + *(float *)(this + 0x158);
    }
    fVar8 = *(float *)(this + 0x164);
    uVar5 = (uint)(*(float *)(this + 0x15c) - *(float *)(this + 0x154));
    uVar4 = (int)fVar8 >> 0x1f;
    uVar3 = (int)uVar5 >> 0x1f;
    bVar1 = (int)(((int)fVar8 ^ uVar4) - uVar4) < (int)((uVar5 ^ uVar3) - uVar3);
    if (bVar1) {
      *(float *)(this + 0x15c) = fVar8 + *(float *)(this + 0x15c);
    }
    fVar7 = *(float *)(this + 0x170) - _FUN_04ae3c0c;
    *(float *)(this + 0x16c) = *(float *)(this + 0x16c) - _FUN_04ae3c0c;
    *(float *)(this + 0x170) = fVar7;
    *(int *)(this + 0x48) = (int)((float)*(int *)(this + 0x48) + fVar9);
    *(int *)(this + 0x4c) = (int)((float)*(int *)(this + 0x4c) + fVar8);
    if (!bVar1 && bVar2) {
      *(undefined4 *)(this + 0x168) = 0;
      *(undefined4 *)(this + 0x170) = 0;
      iVar6 = FUN_04adf924(*(undefined8 *)(this + 0x128),*(undefined8 *)(this + 0x138));
      if (iVar6 != 0) {
        Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x120))
        ;
        return;
      }
    }
  }
  return;
}

