// Class: PlantPlantain


/* PlantPlantain::onCancelEvent() */

void __thiscall PlantPlantain::onCancelEvent(PlantPlantain *this)

{
  *(undefined8 *)(this + 0x30) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPlantain::StaticClassInit() */

void PlantPlantain::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"PlantPlantain");
    (*pcVar2)(plVar1,asStack_10,FUN_03906500,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPlantain::StaticGetClass() */

long * PlantPlantain::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPlantain",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPlantain::GetClass() const */

long * PlantPlantain::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPlantain",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPlantain::isReadyToFire() */

bool __thiscall PlantPlantain::isReadyToFire(PlantPlantain *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(this + 0x10);
  cVar2 = FUN_03906004(*(undefined1 *)(lVar4 + 0x278));
  bVar3 = false;
  if (cVar2 == '\0') {
    iVar1 = *(int *)(lVar4 + 200);
    bVar3 = iVar1 == 0xd || iVar1 == 1;
  }
  return bVar3;
}


/* PlantPlantain::~PlantPlantain() */

void __thiscall PlantPlantain::~PlantPlantain(PlantPlantain *this)

{
  *(undefined ***)this = &PTR_GetClass_066c1300;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantPlantain::~PlantPlantain() */

void __thiscall PlantPlantain::~PlantPlantain(PlantPlantain *this)

{
  ~PlantPlantain(this);
  AK::FreeHook(this);
  return;
}


/* PlantPlantain::PlantPlantain() */

void __thiscall PlantPlantain::PlantPlantain(PlantPlantain *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined8 *)(this + 0x30) = 0;
  this[0x28] = (PlantPlantain)0x0;
  *(undefined ***)this = &PTR_GetClass_066c1300;
  *(undefined4 *)(this + 0x38) = 0x3f800000;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  this[0x48] = (PlantPlantain)0x0;
  return;
}


/* PlantPlantain::StaticNew() */

PlantPlantain * PlantPlantain::StaticNew(void)

{
  PlantPlantain *this;
  
  this = ::operator_new(0x50);
  PlantPlantain(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPlantain::SetTargetZombie(Zombie*) */

void __thiscall PlantPlantain::SetTargetZombie(PlantPlantain *this,Zombie *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (Zombie *)0x0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x40),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x40),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPlantain::SetPopAnimDelegates(PlantAnimRig*) */

void __thiscall PlantPlantain::SetPopAnimDelegates(PlantPlantain *this,PlantAnimRig *param_1)

{
  PlantAnimRig *pPVar1;
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1<float> aDStack_68 [48];
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::SetPopAnimDelegates((PlantFramework *)this,param_1);
  pPVar1 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,fireProjectileCallback);
  Sexy::Delegate1<float>::Delegate1<PlantPlantain,void(PlantPlantain::*)(float)>
            (aDStack_68,aCStack_98);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,fireProjectileCallback);
  Sexy::Delegate1<float>::Delegate1<PlantPlantain,void(PlantPlantain::*)(float)>
            (aDStack_38,aCStack_80);
  PlantAnimRig::SetPlantDelegates(pPVar1,aDStack_68,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPlantain::registerForEvents() */

void __thiscall PlantPlantain::registerForEvents(PlantPlantain *this)

{
  char cVar1;
  Board *pBVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = PlantFramework::IsArenaBattle();
  if (cVar1 == '\0') {
    pBVar2 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onTouchEvent);
    Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
    Delegate1wRet<PlantPlantain,bool(PlantPlantain::*)(Sexy::Touch_const&)>(aDStack_68,aCStack_98);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aRStack_a8);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCancelEvent);
    Sexy::Delegate0::Delegate0<PlantPlantain,void(PlantPlantain::*)()>(aDStack_38,aCStack_80);
    Board::RegisterTouchGameplayObject(pBVar2,aDStack_68,2,aRStack_a0,aDStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPlantain::setState(int) */

void __thiscall PlantPlantain::setState(PlantPlantain *this,int param_1)

{
  PlantAnimRig_Plantain *pPVar1;
  PlantAnimRig *pPVar2;
  PlantAnimRig_Broccoli *this_00;
  long lVar3;
  long *plVar4;
  PopAnimRig *this_01;
  UIEasyButtonWidget *this_02;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  this_02 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(this_02 + 200) != param_1) {
    *(int *)(this_02 + 200) = param_1;
    switch(param_1) {
    case 1:
      plVar4 = (long *)UIEasyButtonWidget::GetImageNormal(this_02);
      (**(code **)(*plVar4 + 0x118))();
      this_01 = (PopAnimRig *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      Sexy::Color::Color((Color *)aRStack_60,1);
      PopAnimRig::SetPAMColor(this_01,(Color *)aRStack_60);
      break;
    case 0xb:
      pPVar1 = (PlantAnimRig_Plantain *)FUN_0390910c(this_02);
      PlantAnimRig_Plantain::PlayRecoverIn(pPVar1);
      break;
    case 0xc:
      this_00 = (PlantAnimRig_Broccoli *)FUN_0390910c(this_02);
      PlantAnimRig_Broccoli::PlayRestLooped(this_00);
      Plant::GetProps();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
      lVar3 = FUN_0390605c(*(undefined8 *)(lVar3 + 0x70),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      fVar6 = (float)PVZ_T();
      lVar5 = *(long *)(this + 0x10);
      fVar8 = *(float *)(this + 0x38);
      fVar9 = *(float *)(lVar3 + 0x28);
      fVar7 = (float)FUN_03906008(*(undefined4 *)(lVar5 + 0x420));
      *(float *)(lVar5 + 0x128) = fVar6 + fVar7 * fVar8 * fVar9;
      break;
    case 0xd:
      pPVar1 = (PlantAnimRig_Plantain *)FUN_0390910c(this_02);
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
      PlantAnimRig_Plantain::PlayRecoverEnd(pPVar1,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      pPVar2 = (PlantAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PlantAnimRig::SetState(pPVar2,0xe);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPlantain::Initialize() */

void __thiscall PlantPlantain::Initialize(PlantPlantain *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  PlantFramework::Initialize((PlantFramework *)this);
  setState(this,1);
  cVar1 = LawnApp::IsInModule(gLawnApp,4);
  if (cVar1 == '\0') {
    *(undefined4 *)(this + 0x38) = 0x3f800000;
    iVar2 = FUN_03906034(*(undefined8 *)(this + 0x10));
    if (*(code **)(*(long *)this + 0x410) == PlantFramework::GetMiniLevel) {
      iVar3 = PlantFramework::GetMiniLevel((PlantFramework *)this);
    }
    else {
      iVar3 = (**(code **)(*(long *)this + 0x410))();
    }
    if (iVar2 - iVar3 == 1) {
      lVar4 = FUN_0390902c(*(undefined8 *)(this + 0x10));
      *(undefined4 *)(this + 0x38) = *(undefined4 *)(lVar4 + 0x2b8);
    }
    else if (1 < iVar2 - iVar3) {
      lVar4 = FUN_0390902c(*(undefined8 *)(this + 0x10));
      *(undefined4 *)(this + 0x38) = *(undefined4 *)(lVar4 + 700);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPlantain::ApplyPlantfood() */

void __thiscall PlantPlantain::ApplyPlantfood(PlantPlantain *this)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Play_Plantain_PF_Fire");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  setState(this,5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPlantain::CancelPlantfood() */

void __thiscall PlantPlantain::CancelPlantfood(PlantPlantain *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,0xb);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0390962c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantPlantain::UpdateActions() */

void __thiscall PlantPlantain::UpdateActions(PlantPlantain *this)

{
  undefined1 auVar1 [16];
  char cVar2;
  UIEasyButtonWidget *this_00;
  PopAnimRig *pPVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined1 extraout_var [12];
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(this_00 + 200)) {
  case 1:
    cVar2 = PlantFramework::IsArenaBattle();
    if ((cVar2 != '\0') &&
       (cVar2 = Plant::CanFindTarget(*(undefined8 *)(this + 0x10),0), cVar2 != '\0')) {
      (**(code **)(*(long *)this + 0x460))(this);
    }
    break;
  case 10:
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    cVar2 = PopAnimRig::IsPlayingAnything(pPVar3);
    if (cVar2 == '\0') {
      setState(this,0xb);
    }
    break;
  case 0xb:
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    cVar2 = PopAnimRig::IsPlayingAnything(pPVar3);
    if (cVar2 == '\0') {
      setState(this,0xc);
    }
    break;
  case 0xc:
    fVar5 = (float)PVZ_T();
    if (fVar5 <= *(float *)(*(UIEasyButtonWidget **)(this + 0x10) + 0x128)) {
      Plant::GetProps();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      lVar4 = FUN_0390605c(*(undefined8 *)(lVar4 + 0x70),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      fVar8 = *(float *)(*(long *)(this + 0x10) + 0x128);
      fVar5 = (float)PVZ_T();
      fVar7 = *(float *)(this + 0x38);
      fVar9 = *(float *)(lVar4 + 0x28);
      fVar6 = (float)FUN_03906008(*(undefined4 *)(*(long *)(this + 0x10) + 0x420));
      fVar5 = 1.0 - (fVar8 - fVar5) / (fVar7 * fVar9 * fVar6);
      fVar5 = fVar5 * fVar5;
      fVar5 = fVar5 * fVar5 * 125.66371 + 3.1415927;
      cosf(fVar5);
      local_18 = 0x3f800000;
      local_1c = 0x3ecccccd;
      auVar1._4_12_ = extraout_var;
      auVar1._0_4_ = fVar5;
      fVar5 = CurveEvaluate<float>
                        (auVar1,0x3f000000,&local_1c,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,1);
      Sexy::Color::Color((Color *)&local_18);
      local_18 = (int)(fVar5 * 255.0);
      local_14 = local_18;
      local_10 = local_18;
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PopAnimRig::SetPAMColor(pPVar3,(Color *)&local_18);
    }
    else {
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      Sexy::Color::Color((Color *)&local_18,1);
      PopAnimRig::SetPAMColor(pPVar3,(Color *)&local_18);
      setState(this,0xd);
    }
    break;
  case 0xd:
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    cVar2 = PopAnimRig::IsPlayingAnything(pPVar3);
    if (cVar2 == '\0') {
      setState(this,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPlantain::AutoFire() */

void __thiscall PlantPlantain::AutoFire(PlantPlantain *this)

{
  PlantAnimRig *pPVar1;
  code *pcVar2;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PlantAnimRig *)FUN_0390910c(*(undefined8 *)(this + 0x10));
  pcVar2 = *(code **)(*(long *)pPVar1 + 0x130);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  (*pcVar2)(pPVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  PlantAnimRig::SetState(pPVar1,0xe);
  setState(this,10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPlantain::Idle() */

void __thiscall PlantPlantain::Idle(PlantPlantain *this)

{
  long *plVar1;
  PlantAnimRig_Plantain *pPVar2;
  PlantAnimRig_Broccoli *this_00;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(*(UIEasyButtonWidget **)(this + 0x10) + 200)) {
  case 1:
    plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar1 + 0x118))();
    break;
  case 10:
  case 0xc:
    this_00 = (PlantAnimRig_Broccoli *)FUN_0390910c();
    PlantAnimRig_Broccoli::PlayRestLooped(this_00);
    break;
  case 0xb:
    pPVar2 = (PlantAnimRig_Plantain *)FUN_0390910c();
    PlantAnimRig_Plantain::PlayRecoverIn(pPVar2);
    break;
  case 0xd:
    pPVar2 = (PlantAnimRig_Plantain *)FUN_0390910c();
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
    PlantAnimRig_Plantain::PlayRecoverEnd(pPVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPlantain::FindTargetAndFire(PlantWeapon) */

void PlantPlantain::FindTargetAndFire(PlantPlantain *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  PlantAnimRig_Plantain *this;
  Plant *this_00;
  undefined8 uVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::CanFindTarget(*(undefined8 *)(param_1 + 0x10));
  if ((cVar1 == '\0') || (cVar1 = isReadyToFire(param_1), cVar1 == '\0')) {
    cVar1 = '\0';
    goto LAB_03909900;
  }
  param_1[0x48] = (PlantPlantain)0x0;
  cVar2 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
  if (cVar2 == '\0') {
    lVar4 = FUN_03909854(*(undefined8 *)(param_1 + 0x10));
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    fVar7 = *(float *)(lVar4 + 0x2d4);
    iVar3 = FUN_03906034(uVar5);
    if (iVar3 == 5) {
      fVar8 = (float)PlantFramework::Rand((PlantFramework *)param_1,1.0);
      if ((fVar8 < fVar7) &&
         (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x40)), cVar2 == '\0'))
      {
        lVar4 = *(long *)(param_1 + 0x10);
        *(undefined4 *)(lVar4 + 0x150) = 2;
        param_1[0x48] = (PlantPlantain)0x1;
        goto LAB_0390997c;
      }
      uVar5 = *(undefined8 *)(param_1 + 0x10);
    }
    lVar4 = FUN_03909854(uVar5);
    fVar8 = *(float *)(lVar4 + 0x2d0);
    fVar7 = (float)PlantFramework::Rand((PlantFramework *)param_1,1.0);
    if (fVar8 <= fVar7) {
      lVar4 = *(long *)(param_1 + 0x10);
      *(undefined4 *)(lVar4 + 0x150) = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x10);
      *(undefined4 *)(lVar4 + 0x150) = 1;
    }
  }
  else {
    this_00 = *(Plant **)(param_1 + 0x10);
    *(undefined4 *)(this_00 + 0x150) = 3;
    cVar2 = Plant::GetAvatarEnable(this_00);
    if (cVar2 == '\0') {
      lVar4 = *(long *)(param_1 + 0x10);
    }
    else {
      lVar4 = *(long *)(param_1 + 0x10);
      *(undefined4 *)(lVar4 + 0x150) = 4;
    }
  }
LAB_0390997c:
  this = (PlantAnimRig_Plantain *)FUN_0390910c(lVar4);
  PlantAnimRig_Plantain::setIsSuperSkill(this,(bool)param_1[0x48]);
  pcVar6 = *(code **)(*(long *)this + 0x130);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  (*pcVar6)(this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  setState(param_1,10);
LAB_03909900:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPlantain::fireProjectileCallback(float) */

void __thiscall PlantPlantain::fireProjectileCallback(PlantPlantain *this,float param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  Projectile *this_00;
  PlantainProjectile *this_01;
  PlantainSuperSkillProjectile *this_02;
  PlantainPlantFoodProjectile *this_03;
  Plant *this_04;
  long lVar6;
  RealObject *this_05;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    if (*(int *)(*(long *)(this + 0x10) + 0x150) == -1) {
      lVar4 = FUN_03909854();
      uVar7 = *(undefined8 *)(this + 0x10);
      fVar8 = *(float *)(lVar4 + 0x2d4);
      iVar3 = FUN_03906034(uVar7);
      if (iVar3 == 5) {
        fVar9 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
        if ((fVar9 < fVar8) &&
           (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x40)), cVar1 == '\0'))
        {
          *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 2;
          this[0x48] = (PlantPlantain)0x1;
          goto LAB_03909ae8;
        }
        uVar7 = *(undefined8 *)(this + 0x10);
      }
      lVar4 = FUN_03909854(uVar7);
      fVar9 = *(float *)(lVar4 + 0x2d0);
      fVar8 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      if (fVar9 <= fVar8) {
        *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0;
      }
      else {
        *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 1;
      }
    }
  }
  else {
    this_04 = *(Plant **)(this + 0x10);
    *(undefined4 *)(this_04 + 0x150) = 3;
    cVar1 = Plant::GetAvatarEnable(this_04);
    if (cVar1 != '\0') {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 4;
    }
  }
LAB_03909ae8:
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_18);
  FUN_03906010(aRStack_10,*(undefined8 *)(this + 0x10));
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar4 = FUN_0390605c(*(undefined8 *)(lVar4 + 0x70),(long)*(int *)(*(long *)(this + 0x10) + 0x150))
  ;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)(lVar4 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar13 = *pfVar5;
  Plant::GetProps();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar6 = *(long *)(this + 0x10);
  lVar4 = FUN_0390605c(*(undefined8 *)(lVar4 + 0x70),(long)*(int *)(lVar6 + 0x150));
  fVar9 = *(float *)(lVar6 + 0xc4);
  fVar8 = *(float *)(lVar4 + 0x68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          **)(this + 0x10));
  fVar14 = *(float *)(lVar4 + 8);
  uVar10 = *(undefined4 *)(lVar4 + 4);
  Plant::GetProps();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar6 = *(long *)(this + 0x10);
  lVar4 = FUN_0390605c(*(undefined8 *)(lVar4 + 0x70),(long)*(int *)(lVar6 + 0x150));
  fVar12 = *(float *)(lVar6 + 0xc4);
  fVar11 = *(float *)(lVar4 + 0x6c);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)a_Stack_18);
  this_00 = (Projectile *)
            Board::AddProjectile
                      ((Board *)(fVar13 + fVar8 * fVar9),uVar10,fVar14 - fVar11 * fVar12,uVar7,
                       aRStack_10,*(undefined8 *)(this + 0x10),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
    lVar4 = FUN_03906044(uVar7);
    if (((lVar4 != 0) && (lVar4 = FUN_03909a84(uVar7), lVar4 != 0)) &&
       (cVar1 = (**(code **)(*(long *)this + 0x180))(this), cVar1 == '\0')) {
      FUN_03906098(this_00 + 0x184);
    }
  }
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar1 == '\0') {
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  uVar10 = 2;
  if (this[0x28] == (PlantPlantain)0x0) {
    uVar10 = 1;
  }
  FUN_03905ff8(this_00 + 0xb0,uVar10);
  fVar8 = (float)PVZ_T();
  Projectile::SetUpdateTimeOverride(this_00,fVar8 - param_1);
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar1 == '\0') {
    if (this[0x48] == (PlantPlantain)0x0) {
      this_01 = Sexy::RtObject::Cast<PlantainProjectile>((RtObject *)this_00);
      if (this_01 != (PlantainProjectile *)0x0) {
        lVar4 = FUN_03909854(*(undefined8 *)(this + 0x10));
        fVar8 = *(float *)(lVar4 + 0x2c8);
        lVar4 = FUN_03909854(*(undefined8 *)(this + 0x10));
        fVar9 = *(float *)(lVar4 + 0x2c0);
        lVar4 = FUN_03909854(*(undefined8 *)(this + 0x10));
        CoconutCannonProjectile::SetExplosionParameters
                  ((CoconutCannonProjectile *)this_01,fVar8,fVar9,(float)*(int *)(lVar4 + 0x2c4));
        iVar3 = FUN_03906034(*(undefined8 *)(this + 0x10));
        PlantainProjectile::setOwnerLevel(this_01,iVar3);
      }
    }
    else {
      this_02 = Sexy::RtObject::Cast<PlantainSuperSkillProjectile>((RtObject *)this_00);
      if (this_02 != (PlantainSuperSkillProjectile *)0x0) {
        PineconeProjectile::SetOwnerPlant((PineconeProjectile *)this_02,(PlantPinecone *)this);
      }
    }
  }
  else {
    this_03 = Sexy::RtObject::Cast<PlantainPlantFoodProjectile>((RtObject *)this_00);
    if (this_03 != (PlantainPlantFoodProjectile *)0x0) {
      iVar3 = FUN_03906034(*(undefined8 *)(this + 0x10));
      PlantainPlantFoodProjectile::setOwnerLevel(this_03,iVar3);
      bVar2 = (bool)Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
      CurlingItem::SetGenerateIceLane((CurlingItem *)this_03,bVar2);
    }
  }
  this_05 = *(RealObject **)(this + 0x10);
  std::string::string((string *)aRStack_10,"Play_Coconut_Cannon_Fire");
  RealObject::PlayPositionalSound(this_05,(string *)aRStack_10,0.0);
  std::string::~string((string *)aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPlantain::onTouchEvent(Sexy::Touch const&) */

void PlantPlantain::onTouchEvent(Touch *param_1)

{
  char cVar1;
  char cVar2;
  TRect<int> *pTVar3;
  wchar16 *pwVar4;
  long *in_x1;
  LineBreakCategory *pLVar5;
  LineBreakCategory *pLVar6;
  LineBreakCategory *in_x4;
  long lVar7;
  float fVar8;
  float fVar9;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsInModule(gLawnApp,4);
  if (cVar1 == '\0') {
    cVar1 = Plant::IsWatering(*(Plant **)(param_1 + 0x10));
    if (cVar1 == '\0') {
      cVar1 = '\0';
      if ((*(long *)(param_1 + 0x30) == 0) && ((int)in_x1[6] == 0)) {
        fVar8 = (float)FUN_03906340((float)(int)in_x1[2]);
        fVar9 = (float)FUN_03906340((float)*(int *)((long)in_x1 + 0x14));
        pTVar3 = (TRect<int> *)
                 (**(code **)(**(long **)(param_1 + 0x10) + 0x178))(*(long **)(param_1 + 0x10));
        cVar2 = Sexy::TRect<int>::Contains(pTVar3,(int)fVar8,(int)fVar9);
        if (cVar2 != '\0') {
          *(long *)(param_1 + 0x30) = *in_x1;
          goto LAB_0390a154;
        }
      }
      else if (*(long *)(param_1 + 0x30) == *in_x1) {
        if ((int)in_x1[6] == 4) {
          *(undefined8 *)(param_1 + 0x30) = 0;
          goto LAB_0390a154;
        }
        if ((int)in_x1[6] == 3) {
          lVar7 = in_x1[2];
          *(undefined8 *)(param_1 + 0x30) = 0;
          fVar8 = (float)FUN_03906340((float)(int)lVar7);
          fVar9 = (float)FUN_03906340((float)*(int *)((long)in_x1 + 0x14));
          pLVar6 = *(LineBreakCategory **)(param_1 + 0x10);
          pTVar3 = (TRect<int> *)(**(code **)(*(long *)pLVar6 + 0x178))(pLVar6);
          cVar1 = Sexy::TRect<int>::Contains(pTVar3,(int)fVar8,(int)fVar9);
          if ((cVar1 != '\0') &&
             ((lVar7 = *(long *)(gLawnApp + 0x9f0), lVar7 == 0 ||
              ((cVar1 = FUN_0390603c(*(undefined1 *)(lVar7 + 0x887)), cVar1 != '\0' &&
               (cVar1 = FUN_03906040(*(undefined1 *)(lVar7 + 0x888)), cVar1 != '\0')))))) {
            lVar7 = *(long *)(param_1 + 0x10);
            cVar1 = FUN_039078d4(*(undefined4 *)(lVar7 + 0x28));
            if (cVar1 == '\0') {
              cVar1 = Plant::HasCondition(lVar7,0x11);
              if (cVar1 == '\0') {
                pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
                pLVar5 = aLStack_18;
                std::string::string(asStack_10,"FreePlanting");
                cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                                  (pwVar4,(wchar16 *)asStack_10,pLVar5,pLVar6,in_x4);
                if (((cVar1 == '\0') &&
                    (cVar1 = isReadyToFire((PlantPlantain *)param_1), cVar1 == '\0')) ||
                   (cVar1 = *(char *)(*(long *)(gLawnApp + 0x9f0) + 0x973), cVar1 == '\0')) {
                  std::string::~string(asStack_10);
                  nop();
                  cVar1 = '\0';
                }
                else {
                  std::string::~string(asStack_10);
                  nop();
                }
                goto LAB_0390a154;
              }
            }
          }
        }
      }
    }
  }
  cVar1 = '\0';
LAB_0390a154:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}

