// Class: UINewPVPSunIncreaseBank


/* UINewPVPSunIncreaseBank::cancelTouch() */

void __thiscall UINewPVPSunIncreaseBank::cancelTouch(UINewPVPSunIncreaseBank *this)

{
  *(undefined8 *)(this + 0x1a0) = 0;
  this[0x18d] = (UINewPVPSunIncreaseBank)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSunIncreaseBank::initLoadingResourcesGroupList() */

void __thiscall
UINewPVPSunIncreaseBank::initLoadingResourcesGroupList(UINewPVPSunIncreaseBank *this)

{
  code *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0xd0);
  std::string::string(asStack_10,"UI_PauseMenu");
  (*pcVar1)(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPSunIncreaseBank::~UINewPVPSunIncreaseBank() */

void __thiscall UINewPVPSunIncreaseBank::~UINewPVPSunIncreaseBank(UINewPVPSunIncreaseBank *this)

{
  *(undefined ***)this = &PTR_GetClass_0664ef00;
  *(undefined ***)(this + 0x10) = &PTR__UINewPVPSunIncreaseBank_0664f0a0;
  *(undefined ***)(this + 0x168) = &PTR_ButtonPress_0664f0d0;
  if (*(long **)(this + 0x1a8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a8) + 0x48))();
  }
  if (*(long **)(this + 0x1b0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1b0) + 0x48))();
  }
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to UINewPVPSunIncreaseBank::~UINewPVPSunIncreaseBank() */

void __thiscall UINewPVPSunIncreaseBank::~UINewPVPSunIncreaseBank(UINewPVPSunIncreaseBank *this)

{
  ~UINewPVPSunIncreaseBank(this + -0x10);
  return;
}


/* UINewPVPSunIncreaseBank::~UINewPVPSunIncreaseBank() */

void __thiscall UINewPVPSunIncreaseBank::~UINewPVPSunIncreaseBank(UINewPVPSunIncreaseBank *this)

{
  ~UINewPVPSunIncreaseBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINewPVPSunIncreaseBank::~UINewPVPSunIncreaseBank() */

void __thiscall UINewPVPSunIncreaseBank::~UINewPVPSunIncreaseBank(UINewPVPSunIncreaseBank *this)

{
  ~UINewPVPSunIncreaseBank(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSunIncreaseBank::StaticClassInit() */

void UINewPVPSunIncreaseBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"UINewPVPSunIncreaseBank");
    (*pcVar2)(plVar1,asStack_10,FUN_0351f73c,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPSunIncreaseBank::StaticGetClass() */

long * UINewPVPSunIncreaseBank::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"UINewPVPSunIncreaseBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UINewPVPSunIncreaseBank::GetClass() const */

long * UINewPVPSunIncreaseBank::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"UINewPVPSunIncreaseBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UINewPVPSunIncreaseBank::startTouch(unsigned long) */

void __thiscall UINewPVPSunIncreaseBank::startTouch(UINewPVPSunIncreaseBank *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  this[0x18d] = (UINewPVPSunIncreaseBank)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSunIncreaseBank::onLoadComplete() */

void __thiscall UINewPVPSunIncreaseBank::onLoadComplete(UINewPVPSunIncreaseBank *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  string asStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  SecretGachaMgr *local_8;
  
  local_8 = ___stack_chk_guard;
  SecretGachaMgr::GetScreenType(___stack_chk_guard);
  bVar1 = std::operator==(asStack_18,"Normal");
  if (bVar1) {
    *(undefined4 *)(this + 0x1b8) = 0x3f666666;
    fVar4 = (float)FUN_0351e4fc(0x41700000);
    fVar5 = (float)FUN_0351e4fc(0);
  }
  else {
    bVar1 = std::operator==(asStack_18,"Large");
    if (!bVar1) {
      cVar2 = (**(code **)(*gLawnApp + 0x360))(gLawnApp);
      if (cVar2 == '\0') {
        (**(code **)(*gLawnApp + 0x368))(gLawnApp);
      }
    }
    *(undefined4 *)(this + 0x1b8) = 0x3f666666;
    fVar4 = (float)FUN_0351e4fc(0);
    fVar5 = fVar4;
  }
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,fVar4,fVar5);
  UIWidget::SetPositionOffset(local_10,local_c,this);
  iVar3 = FUN_0351d4a8(*(undefined4 *)(this + 0x38));
  FUN_0351d4ac(this + 0x38,(int)((float)iVar3 * *(float *)(this + 0x1b8)));
  iVar3 = FUN_0351d4b4(*(undefined4 *)(this + 0x3c));
  FUN_0351d4b8(this + 0x3c,(int)((float)iVar3 * *(float *)(this + 0x1b8)));
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPSunIncreaseBank::refresh() */

void __thiscall UINewPVPSunIncreaseBank::refresh(UINewPVPSunIncreaseBank *this)

{
  NewPVPMgr *pNVar1;
  undefined4 uVar2;
  
  pNVar1 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  uVar2 = NewPVPMgr::GetSunUpgradeValue(pNVar1,*(int *)(this + 0x180));
  *(undefined4 *)(this + 0x178) = uVar2;
  pNVar1 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  uVar2 = NewPVPMgr::GetSunUpgradeCost(pNVar1,*(int *)(this + 0x180) + 1);
  *(undefined4 *)(this + 0x174) = uVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSunIncreaseBank::onNotifySunAddIncrease() */

void __thiscall UINewPVPSunIncreaseBank::onNotifySunAddIncrease(UINewPVPSunIncreaseBank *this)

{
  char cVar1;
  undefined4 uVar2;
  NewPVPMgr *pNVar3;
  Effect_PopAnim *pEVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = UIWidget::IsVisible((UIWidget *)this);
  if (cVar1 != '\0') {
    Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    uVar2 = NewPVPMgr::GetSunAdd();
    DScrollView::setDirection((DScrollView *)this,uVar2);
    pNVar3 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    uVar2 = NewPVPMgr::GetSunAddCD(pNVar3,*(int *)(this + 0x170));
    *(undefined4 *)(this + 0x184) = uVar2;
    uVar2 = PVZ_T();
    pEVar4 = *(Effect_PopAnim **)(this + 0x1a8);
    *(undefined4 *)(this + 0x188) = uVar2;
    std::string::string(asStack_10,"special");
    Effect_PopAnim::PlaySingleAnimation(pEVar4,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
    pNVar3 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    std::string::string(asStack_10,"Play_Spawn_Sun");
    NewPVPMgr::PlayPositionalSound(pNVar3,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPSunIncreaseBank::onUpdate() */

void __thiscall UINewPVPSunIncreaseBank::onUpdate(UINewPVPSunIncreaseBank *this)

{
  UINewPVPSunIncreaseBank UVar1;
  undefined4 uVar2;
  int iVar3;
  NewPVPMgr *this_00;
  float fVar4;
  
  Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  uVar2 = NewPVPGameSubsystem::GetCurrentSun();
  *(undefined4 *)(this + 0x17c) = uVar2;
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  UVar1 = (UINewPVPSunIncreaseBank)NewPVPMgr::CanUpgradeSun(this_00,*(int *)(this + 0x180) + 1);
  this[0x18c] = UVar1;
  if (this[0x1bc] != (UINewPVPSunIncreaseBank)0x0) {
    fVar4 = (float)PVZ_T();
    if (fVar4 <= *(float *)(this + 0x1c0)) {
      UVar1 = this[0x18c];
    }
    else {
      if (this[0x1c4] == (UINewPVPSunIncreaseBank)0x0) {
        this[0x1c4] = (UINewPVPSunIncreaseBank)0x1;
      }
      uVar2 = PVZ_EOT();
      UVar1 = this[0x18c];
      *(undefined4 *)(this + 0x1c0) = uVar2;
    }
  }
  if ((((UVar1 != (UINewPVPSunIncreaseBank)0x0) && (this[0x1c4] == (UINewPVPSunIncreaseBank)0x0)) &&
      (iVar3 = NewPVPUtils::GetTutorialStep(), iVar3 == 0xb)) &&
     (fVar4 = (float)PVZ_EOT(), *(float *)(this + 0x1c0) == fVar4)) {
    fVar4 = (float)PVZ_T();
    *(float *)(this + 0x1c0) = fVar4 + 5.0;
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSunIncreaseBank::handleTouch(Sexy::Touch const&) */

void __thiscall UINewPVPSunIncreaseBank::handleTouch(UINewPVPSunIncreaseBank *this,Touch *param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  NewPVPMgr *pNVar4;
  NewPVPGameSubsystem *this_00;
  Effect_PopAnim *pEVar5;
  Board *this_01;
  float fVar6;
  string asStack_48 [8];
  Touch aTStack_40 [16];
  int local_30;
  int local_2c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x18c] != (UINewPVPSunIncreaseBank)0x0) {
    Sexy::Touch::Touch(aTStack_40,param_1);
    Board::TranslateBoardPositionToScreenPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    bVar1 = Sexy::TRect<int>::Contains
                      ((TRect<int> *)(this + 400),*(int *)(this_01 + 0x48) + local_30,
                       *(int *)(this_01 + 0x4c) + local_2c);
    switch(*(undefined4 *)(param_1 + 0x30)) {
    case 0:
      bVar1 = bVar1 & *(long *)(this + 0x1a0) == 0;
      if (bVar1 != 0) {
        startTouch(this,*(ulong *)param_1);
        goto LAB_03521fcc;
      }
      break;
    case 1:
      if (bVar1 == 0) {
        if (*(long *)(this + 0x1a0) == *(long *)param_1) goto LAB_0352207c;
      }
      else if (*(long *)(this + 0x1a0) == 0) {
        bVar1 = 0;
        startTouch(this,*(ulong *)param_1);
        goto LAB_03521fcc;
      }
      break;
    case 3:
      if ((bVar1 == 0) || (*(long *)param_1 != *(long *)(this + 0x1a0))) {
LAB_035220a0:
        bVar1 = 0;
      }
      else {
        Board::GetGameSubSystem<NewPVPGameSubsystem>(this_01);
        uVar3 = NewPVPGameSubsystem::GetCurrentSun();
        *(undefined4 *)(this + 0x17c) = uVar3;
        pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        cVar2 = NewPVPMgr::CanUpgradeSun(pNVar4,*(int *)(this + 0x180) + 1);
        if (cVar2 == '\0') goto LAB_035220a0;
        pEVar5 = *(Effect_PopAnim **)(this + 0x1a8);
        if (pEVar5 != (Effect_PopAnim *)0x0) {
          std::string::string(asStack_48,"lvup");
          Effect_PopAnim::PlaySingleAnimation(pEVar5,asStack_48,0);
          std::string::~string(asStack_48);
          nop();
        }
        pEVar5 = *(Effect_PopAnim **)(this + 0x1b0);
        if (pEVar5 != (Effect_PopAnim *)0x0) {
          std::string::string(asStack_48,"idle");
          Effect_PopAnim::PlaySingleAnimation(pEVar5,asStack_48,0);
          std::string::~string(asStack_48);
          nop();
        }
        bVar1 = 1;
        *(int *)(this + 0x180) = *(int *)(this + 0x180) + 1;
        pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        NewPVPMgr::SetCurrentSunLevel(pNVar4,*(int *)(this + 0x180));
        this_00 = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
        NewPVPGameSubsystem::TryUpgradeSun(this_00,*(int *)(this + 0x180));
        refresh(this);
        pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        std::string::string(asStack_48,"Play_FoodApply");
        NewPVPMgr::PlayPositionalSound(pNVar4,asStack_48,0.0);
        std::string::~string(asStack_48);
        nop();
        if ((this[0x1bc] != (UINewPVPSunIncreaseBank)0x0) &&
           (fVar6 = (float)PVZ_EOT(), *(float *)(this + 0x1c0) == fVar6)) {
          fVar6 = (float)PVZ_T();
          this[0x1c4] = (UINewPVPSunIncreaseBank)0x1;
          *(float *)(this + 0x1c0) = fVar6 + 5.0;
        }
      }
      cancelTouch(this);
      goto LAB_03521fcc;
    case 4:
      if (*(long *)param_1 == *(long *)(this + 0x1a0)) {
LAB_0352207c:
        bVar1 = 0;
        cancelTouch(this);
        goto LAB_03521fcc;
      }
    }
  }
  bVar1 = 0;
LAB_03521fcc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSunIncreaseBank::registerForEvents() */

void __thiscall UINewPVPSunIncreaseBank::registerForEvents(UINewPVPSunIncreaseBank *this)

{
  undefined *puVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifySunAddIncrease);
  Sexy::Delegate0::Delegate0<UINewPVPSunIncreaseBank,void(UINewPVPSunIncreaseBank::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifySunAddIncrease,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayRealStarted);
  Sexy::Delegate0::Delegate0<UINewPVPSunIncreaseBank,void(UINewPVPSunIncreaseBank::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyGameplayStarted,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSunIncreaseBank::initIconEffect() */

void __thiscall UINewPVPSunIncreaseBank::initIconEffect(UINewPVPSunIncreaseBank *this)

{
  Effect_PopAnim *pEVar1;
  ResourceInfo *pRVar2;
  string asStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::GetDrawRect();
  *(undefined4 *)(this + 400) = local_18;
  UIWidget::GetDrawRect();
  *(undefined4 *)(this + 0x194) = local_14;
  UIWidget::GetDrawRect();
  *(undefined4 *)(this + 0x198) = local_c;
  UIWidget::GetDrawRect();
  *(undefined4 *)(this + 0x19c) = local_c;
  pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  *(Effect_PopAnim **)(this + 0x1a8) = pEVar1;
  std::string::string(asStack_20,"POPANIM_EFFECTS_NEW_PVP_SUN_UPGRADE");
  GetPAMByName(asStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x1a8),true);
  (**(code **)(**(long **)(this + 0x1a8) + 0x80))
            (*(float *)(this + 0x1b8) * 0.85,*(long **)(this + 0x1a8));
  StandaloneEffect::SetKeepAlive(*(StandaloneEffect **)(this + 0x1a8),true);
  pEVar1 = *(Effect_PopAnim **)(this + 0x1a8);
  std::string::string((string *)&local_18,"idle");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar1,(RtWeakPtr *)&local_18,0);
  std::string::~string((string *)&local_18);
  nop();
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x1a8),false);
  pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  *(Effect_PopAnim **)(this + 0x1b0) = pEVar1;
  std::string::string(asStack_20,"POPANIM_EFFECTS_NEW_PVP_SUN_UPGRADE_SALARY");
  GetPAMByName(asStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x1b0),true);
  StandaloneEffect::SetKeepAlive(*(StandaloneEffect **)(this + 0x1b0),true);
  (**(code **)(**(long **)(this + 0x1b0) + 0x80))
            (*(float *)(this + 0x1b8) * 0.85,*(long **)(this + 0x1b0));
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x1b0),false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPSunIncreaseBank::onGameplayRealStarted() */

void __thiscall UINewPVPSunIncreaseBank::onGameplayRealStarted(UINewPVPSunIncreaseBank *this)

{
  UINewPVPSunIncreaseBank UVar1;
  NewPVPMgr *this_00;
  undefined4 uVar2;
  
  UIWidget::SetVisible((UIWidget *)this,true);
  initIconEffect(this);
  refresh(this);
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  uVar2 = NewPVPMgr::GetSunAddCD(this_00,*(int *)(this + 0x170));
  *(undefined4 *)(this + 0x184) = uVar2;
  UVar1 = (UINewPVPSunIncreaseBank)NewPVPUtils::IsPlayingNewPVPTutorial();
  this[0x1bc] = UVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSunIncreaseBank::playSalaryUpgradeEffect() */

void __thiscall UINewPVPSunIncreaseBank::playSalaryUpgradeEffect(UINewPVPSunIncreaseBank *this)

{
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  float fVar2;
  float fVar3;
  FastCurve aFStack_30 [8];
  int local_28 [4];
  RtWeakPtr aRStack_18 [4];
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::GetDrawRect();
  fVar2 = (float)FUN_0351e4fc(0x436b0000);
  UIWidget::GetDrawRect();
  fVar3 = (float)FUN_0351e4fc(0x41c80000);
  Sexy::FastCurve::SetOutRange(aFStack_30,fVar2 + (float)local_28[0],fVar3 + (float)local_14);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)local_28,"POPANIM_EFFECTS_NEW_PVP_SUN_UPGRADE_SALARY");
  GetPAMByName((string *)local_28);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string((string *)local_28);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  (**(code **)(*(long *)this_00 + 0x80))(*(undefined4 *)(this + 0x1b8),this_00);
  StandaloneEffect::SetScreenSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector2 *)aFStack_30,700000);
  std::string::string((string *)aRStack_18,"idle");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSunIncreaseBank::UINewPVPSunIncreaseBank() */

void __thiscall UINewPVPSunIncreaseBank::UINewPVPSunIncreaseBank(UINewPVPSunIncreaseBank *this)

{
  Board *pBVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x168));
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined ***)(this + 0x10) = &PTR__UINewPVPSunIncreaseBank_0664f0a0;
  *(undefined4 *)(this + 0x174) = 300;
  *(undefined ***)(this + 0x168) = &PTR_ButtonPress_0664f0d0;
  *(undefined ***)this = &PTR_GetClass_0664ef00;
  *(undefined4 *)(this + 0x178) = 200;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x184) = uVar2;
  uVar3 = PVZ_T();
  this[0x18d] = (UINewPVPSunIncreaseBank)0x0;
  this[0x18c] = (UINewPVPSunIncreaseBank)0x1;
  *(undefined4 *)(this + 0x188) = uVar3;
  Sexy::Insets::Insets((Insets *)(this + 400));
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  this[0x1bc] = (UINewPVPSunIncreaseBank)0x0;
  this[0x1c4] = (UINewPVPSunIncreaseBank)0x0;
  *(undefined4 *)(this + 0x1c0) = uVar2;
  *(undefined4 *)(this + 0x1b8) = 0x3f800000;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<UINewPVPSunIncreaseBank,bool(UINewPVPSunIncreaseBank::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<UINewPVPSunIncreaseBank,void(UINewPVPSunIncreaseBank::*)()>
            (aDStack_38,aCStack_80);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,9,a_Stack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPSunIncreaseBank::StaticNew() */

UINewPVPSunIncreaseBank * UINewPVPSunIncreaseBank::StaticNew(void)

{
  UINewPVPSunIncreaseBank *this;
  
  this = ::operator_new(0x1c8);
  UINewPVPSunIncreaseBank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSunIncreaseBank::Draw(Sexy::Graphics*) */

void __thiscall UINewPVPSunIncreaseBank::Draw(UINewPVPSunIncreaseBank *this,Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  SecretGachaMgr *this_00;
  Image *pIVar10;
  float *pfVar11;
  StandaloneEffect *pSVar12;
  undefined8 uVar13;
  LotteryResultProgressBar *this_02;
  NewPVPMgr *this_03;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  float fVar14;
  float fVar15;
  float local_7c;
  GraphicsAutoState aGStack_78 [8];
  string asStack_70 [8];
  GraphicsAutoState aGStack_68 [8];
  GraphicsAutoState aGStack_60 [8];
  GraphicsAutoState aGStack_58 [8];
  Sexy aSStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28 [2];
  int local_20;
  float local_18;
  int iStack_14;
  undefined8 uStack_10;
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_01;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_78,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  uVar3 = NewPVPMgr::GetSunAdd();
  DScrollView::setDirection((DScrollView *)this,uVar3);
  Sexy::Insets::Insets((Insets *)&local_48);
  this_00 = (SecretGachaMgr *)Sexy::Insets::Insets((Insets *)&local_38);
  SecretGachaMgr::GetScreenType(this_00);
  iVar4 = FUN_0351e4e8(0x13);
  fVar15 = *(float *)(this + 0x1b8);
  iVar5 = FUN_0351e4e8(0xd);
  iVar6 = FUN_0351e4e8(0x110);
  iVar7 = FUN_0351e4e8(0x28);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(int)((float)iVar4 * fVar15),(int)((float)iVar5 * fVar15),
             (int)((float)iVar6 * fVar15),(int)((float)iVar7 * fVar15));
  local_48._0_4_ = (int)local_18;
  local_48._4_4_ = iStack_14;
  local_40 = uStack_10;
  std::string::string((string *)&local_18,"IMAGE_UI_DIALOG_ASSET_YELLOW_BG");
  StringHelper::ToImage((string *)&local_18,true);
  std::string::~string((string *)&local_18);
  nop();
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_68,param_1);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + (float)(int)local_48;
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + (float)local_48._4_4_;
  iVar4 = FUN_0351e4e8(0x4e);
  fVar15 = *(float *)(this + 0x1b8);
  iVar5 = FUN_0351e4e8(6);
  iVar6 = FUN_0351e4e8(0x4b);
  iVar7 = FUN_0351e4e8(0x1c);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(int)((float)iVar4 * fVar15),(int)((float)iVar5 * fVar15),
             (int)((float)iVar6 * fVar15),(int)((float)iVar7 * fVar15));
  local_48._0_4_ = (int)local_18;
  local_48._4_4_ = iStack_14;
  local_40 = uStack_10;
  std::string::string((string *)&local_18,"IMAGE_UI_HUD_INGAME_BACKGROUND_3SLICE");
  pIVar10 = (Image *)StringHelper::ToImage((string *)&local_18,false);
  std::string::~string((string *)&local_18);
  nop();
  Sexy::Graphics::DrawImage
            (param_1,pIVar10,(int)local_48,local_48._4_4_,(int)local_40,local_40._4_4_);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_58,param_1);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + (float)(int)local_48;
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + (float)local_48._4_4_;
  iVar4 = FUN_0351e4e8(0xffffffec);
  fVar15 = *(float *)(this + 0x1b8);
  iVar5 = FUN_0351e4e8(0xfffffffc);
  iVar6 = FUN_0351e4e8(0x24);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(int)((float)iVar4 * fVar15),(int)((float)iVar5 * fVar15),
             (int)((float)iVar6 * fVar15),(int)((float)iVar6 * fVar15));
  local_48._0_4_ = (int)local_18;
  local_48._4_4_ = iStack_14;
  local_40 = uStack_10;
  std::string::string((string *)&local_18,"IMAGE_UI_HUD_INGAME_SUN");
  pIVar10 = (Image *)StringHelper::ToImage((string *)&local_18,false);
  std::string::~string((string *)&local_18);
  nop();
  Sexy::Graphics::DrawImage
            (param_1,pIVar10,(int)local_48,local_48._4_4_,(int)local_40,local_40._4_4_);
  iVar4 = FUN_0351e4e8(0xc);
  fVar15 = *(float *)(this + 0x1b8);
  iVar5 = FUN_0351e4e8(0);
  iVar6 = FUN_0351e4e8(0x3f);
  iVar7 = FUN_0351e4e8(0x1c);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(int)((float)iVar4 * fVar15),(int)((float)iVar5 * fVar15),
             (int)((float)iVar6 * fVar15),(int)((float)iVar7 * fVar15));
  local_40 = uStack_10;
  uVar13 = local_40;
  local_40._4_4_ = (int)((ulong)uStack_10 >> 0x20);
  local_40._0_4_ = (int)uStack_10;
  iVar5 = (int)local_40;
  fVar15 = (float)local_40._4_4_ * 0.28;
  iVar4 = local_40._4_4_ + (int)(fVar15 + fVar15);
  local_40 = uVar13;
  Sexy::Insets::Insets((Insets *)&local_18,(int)local_18,iStack_14 - (int)fVar15,iVar5,iVar4);
  uStack_30 = uStack_10;
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x17c));
  Sexy::ToSexyString(aSStack_50,extraout_x1);
  bVar1 = std::operator==(asStack_70,"Large");
  uVar13 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
  if (bVar1) {
    uVar13 = PrimeText_Game::Typeface_FZCuYuan_19_Outline;
  }
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,(Insets *)local_28,(Insets *)&local_38,uVar13,(Insets *)&local_18,5,1);
  FUN_05476c50((Insets *)local_28);
  std::string::~string((string *)aSStack_50);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_58);
  iVar4 = FUN_0351e4e8(0xb8);
  fVar15 = *(float *)(this + 0x1b8);
  iVar5 = FUN_0351e4e8(6);
  iVar6 = FUN_0351e4e8(0x4b);
  iVar7 = FUN_0351e4e8(0x1c);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(int)((float)iVar4 * fVar15),(int)((float)iVar5 * fVar15),
             (int)((float)iVar6 * fVar15),(int)((float)iVar7 * fVar15));
  local_48._0_4_ = (int)local_18;
  local_48._4_4_ = iStack_14;
  local_40 = uStack_10;
  std::string::string((string *)&local_18,"IMAGE_UI_HUD_INGAME_BACKGROUND_3SLICE");
  pIVar10 = (Image *)StringHelper::ToImage((string *)&local_18,false);
  std::string::~string((string *)&local_18);
  nop();
  Sexy::Graphics::DrawImage
            (param_1,pIVar10,(int)local_48,local_48._4_4_,(int)local_40,local_40._4_4_);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_60,param_1);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + (float)(int)local_48;
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + (float)local_48._4_4_;
  iVar4 = FUN_0351e4e8(0xffffffec);
  fVar15 = *(float *)(this + 0x1b8);
  iVar5 = FUN_0351e4e8(0xfffffffc);
  iVar6 = FUN_0351e4e8(0x24);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(int)((float)iVar4 * fVar15),(int)((float)iVar5 * fVar15),
             (int)((float)iVar6 * fVar15),(int)((float)iVar6 * fVar15));
  local_48._0_4_ = (int)local_18;
  local_48._4_4_ = iStack_14;
  local_40 = uStack_10;
  std::string::string((string *)&local_18,"IMAGE_UI_HUD_INGAME_CHALLENGE_SUN_TIMER_ICON");
  pIVar10 = (Image *)StringHelper::ToImage((string *)&local_18,false);
  std::string::~string((string *)&local_18);
  nop();
  Sexy::Graphics::DrawImage
            (param_1,pIVar10,(int)local_48,local_48._4_4_,(int)local_40,local_40._4_4_);
  PVZ_T();
  fVar15 = (float)PVZ_T();
  local_7c = (fVar15 - *(float *)(this + 0x188)) / *(float *)(this + 0x184);
  local_18 = 0.0;
  local_28[0] = 0x3f800000;
  pfVar11 = eastl::min_alt<float>((float *)local_28,&local_7c);
  pfVar11 = eastl::max_alt<float>(&local_18,pfVar11);
  fVar15 = *pfVar11;
  iVar5 = (int)local_40 / 2;
  iVar4 = local_40._4_4_ / 2;
  iVar6 = FUN_0351e4e8(3);
  fVar14 = *(float *)(this + 0x1b8);
  Sexy::Insets::Insets((Insets *)local_28,0,0,0,100);
  Sexy::Insets::Insets((Insets *)&local_18,0xff,0xff,0xff,0);
  DrawRadialCooldown(fVar15,(float)(iVar5 + (int)local_48),(float)(local_48._4_4_ + iVar4),
                     (float)iVar5 - fVar14 * (float)iVar6,param_1,(Insets *)local_28,
                     (Insets *)&local_18);
  iVar4 = FUN_0351e4e8(0xc);
  fVar15 = *(float *)(this + 0x1b8);
  iVar5 = FUN_0351e4e8(0);
  iVar6 = FUN_0351e4e8(0x3f);
  iVar7 = FUN_0351e4e8(0x1c);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(int)((float)iVar4 * fVar15),(int)((float)iVar5 * fVar15),
             (int)((float)iVar6 * fVar15),(int)((float)iVar7 * fVar15));
  local_48 = CONCAT44(iStack_14,local_18);
  local_40 = uStack_10;
  uVar13 = local_40;
  local_40._4_4_ = (int)((ulong)uStack_10 >> 0x20);
  local_40._0_4_ = (int)uStack_10;
  iVar5 = (int)local_40;
  fVar15 = (float)local_40._4_4_ * 0.28;
  iVar4 = local_40._4_4_ + (int)(fVar15 + fVar15);
  local_40 = uVar13;
  Sexy::Insets::Insets((Insets *)&local_18,(int)local_18,iStack_14 - (int)fVar15,iVar5,iVar4);
  local_38 = CONCAT44(iStack_14,local_18);
  uStack_30 = uStack_10;
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x178));
  std::operator+("+",(string *)aGStack_58);
  Sexy::ToSexyString(aSStack_50,extraout_x1_00);
  bVar1 = std::operator==(asStack_70,"Large");
  uVar13 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
  if (bVar1) {
    uVar13 = PrimeText_Game::Typeface_FZCuYuan_19_Outline;
  }
  Sexy::Color::Color((Color *)&local_18,0xe6,0xce,0xc);
  WriteWordInRect(param_1,(Insets *)local_28,(Insets *)&local_38,uVar13,(Insets *)&local_18,5,1);
  FUN_05476c50((Insets *)local_28);
  std::string::~string((string *)aSStack_50);
  std::string::~string((string *)aGStack_58);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_60);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_68);
  if (this[0x18c] != (UINewPVPSunIncreaseBank)0x0) {
    iVar4 = FUN_0351e4e8(0x5f);
    fVar15 = *(float *)(this + 0x1b8);
    iVar5 = FUN_0351e4e8(0x46);
    iVar6 = FUN_0351e4e8(0x32);
    Sexy::Insets::Insets
              ((Insets *)&local_18,(int)((float)iVar4 * fVar15),(int)((float)iVar5 * fVar15),
               (int)((float)iVar5 * fVar15),(int)((float)iVar6 * fVar15));
    local_48 = CONCAT44(iStack_14,local_18);
    *(undefined8 *)(this + 400) = local_48;
    *(undefined8 *)(this + 0x198) = uStack_10;
    local_40 = uStack_10;
    UIWidget::GetDrawRect();
    *(int *)(this + 400) = *(int *)(this + 400) + (int)local_18;
    UIWidget::GetDrawRect();
    *(int *)(this + 0x194) = *(int *)(this + 0x194) + iStack_14;
    std::string::string((string *)&local_18,"IMAGE_UI_NEW_PVP_SUN_UPGRADE_BUTTON");
    this_02 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)&local_18,true);
    std::string::~string((string *)&local_18);
    nop();
    uVar13 = local_48;
    iVar4 = local_48._4_4_;
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_02);
    fVar15 = *(float *)(this + 0x1b8);
    iVar6 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_02);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)this_02,(int)uVar13,iVar4,(int)((float)iVar5 * fVar15),
               (int)((float)iVar6 * *(float *)(this + 0x1b8)));
  }
  iVar4 = FUN_0351e4e8(0x27);
  fVar15 = *(float *)(this + 0x1b8);
  iVar5 = FUN_0351e4e8(0x35);
  iVar6 = FUN_0351e4e8(0xb4);
  iVar7 = FUN_0351e4e8(0x1c);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(int)((float)iVar4 * fVar15),(int)((float)iVar5 * fVar15),
             (int)((float)iVar6 * fVar15),(int)((float)iVar7 * fVar15));
  local_48._0_4_ = (int)local_18;
  local_48._4_4_ = iStack_14;
  local_40 = uStack_10;
  std::string::string((string *)&local_18,"IMAGE_UI_NEW_PVP_SUN_METER");
  pIVar10 = (Image *)StringHelper::ToImage((string *)&local_18,true);
  std::string::~string((string *)&local_18);
  nop();
  Sexy::Graphics::DrawImage
            (param_1,pIVar10,(int)local_48,local_48._4_4_,(int)local_40,local_40._4_4_);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_68,param_1);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + (float)(int)local_48;
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + (float)local_48._4_4_;
  iVar4 = FUN_0351e4e8(4);
  fVar15 = *(float *)(this + 0x1b8);
  iVar5 = FUN_0351e4e8(10);
  iVar6 = FUN_0351e4e8(8);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(int)((float)iVar4 * fVar15),(int)((float)iVar4 * fVar15),
             (int)((float)(int)local_40 - fVar15 * (float)iVar5),
             (int)((float)local_40._4_4_ - fVar15 * (float)iVar6));
  local_48._0_4_ = (int)local_18;
  local_48._4_4_ = iStack_14;
  local_40 = uStack_10;
  std::string::string((string *)&local_18,"IMAGE_UI_NEW_PVP_SUN_FILL");
  pIVar10 = (Image *)StringHelper::ToImage((string *)&local_18,true);
  std::string::~string((string *)&local_18);
  nop();
  local_28[0] = 0x3f800000;
  local_18 = (float)*(int *)(this + 0x17c) / (float)*(int *)(this + 0x174);
  pfVar11 = eastl::min_alt<float>((float *)local_28,&local_18);
  fVar15 = *pfVar11;
  Sexy::Insets::Insets((Insets *)local_28,(Insets *)&local_48);
  local_20 = (int)(fVar15 * (float)local_20);
  Sexy::Graphics::SetClipRect(param_1,(TRect *)local_28);
  Sexy::Graphics::DrawImage
            (param_1,pIVar10,(int)local_48,local_48._4_4_,(int)local_40,local_40._4_4_);
  Sexy::Graphics::ClearClipRect(param_1);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x17c));
  std::operator+((string *)aGStack_58,"/");
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x174));
  std::operator+((string *)aSStack_50,(string *)&local_18);
  std::string::~string((string *)&local_18);
  std::string::~string((string *)aSStack_50);
  std::string::~string((string *)aGStack_58);
  fVar15 = (float)local_40._4_4_ * 0.28;
  Sexy::Insets::Insets
            ((Insets *)&local_18,(int)local_48,local_48._4_4_ - (int)fVar15,(int)local_40,
             local_40._4_4_ + (int)(fVar15 + fVar15));
  local_38 = CONCAT44(iStack_14,local_18);
  uStack_30 = uStack_10;
  Sexy::ToSexyString((Sexy *)aGStack_60,extraout_x1_01);
  bVar1 = std::operator==(asStack_70,"Large");
  uVar13 = PrimeText_Game::Typeface_FZCuYuan_19_Outline;
  if (bVar1) {
    uVar13 = PrimeText_Game::Typeface_FZCuYuan_12_Outline;
  }
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,aSStack_50,(Insets *)&local_38,uVar13,(Insets *)&local_18,5,1);
  FUN_05476c50(aSStack_50);
  std::string::~string((string *)aGStack_60);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_68);
  if ((this[0x1bc] != (UINewPVPSunIncreaseBank)0x0) &&
     (fVar15 = (float)PVZ_EOT(), *(float *)(this + 0x1c0) != fVar15)) {
    iVar6 = FUN_0351e4e8(0x15e);
    iVar5 = local_40._4_4_;
    iVar7 = FUN_0351e4e8(0x5a);
    iVar4 = (int)local_48 + (int)local_40;
    iVar8 = FUN_0351e4e8(0x28);
    iVar9 = FUN_0351e4e8(0xf);
    Sexy::Insets::Insets
              ((Insets *)&local_18,iVar4 + iVar8,local_48._4_4_ + iVar9,iVar6,iVar5 + iVar7);
    if (this[0x1c4] == (UINewPVPSunIncreaseBank)0x0) {
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4d88;
    }
    else {
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa52e8;
    }
    uVar13 = CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
    DrawAdaptiveImage(param_1,(Insets *)&local_18,uVar13);
  }
  iVar4 = FUN_0351e4e8(0);
  fVar15 = *(float *)(this + 0x1b8);
  iVar5 = FUN_0351e4e8(10);
  iVar6 = FUN_0351e4e8(0x46);
  iVar7 = FUN_0351e4e8(0x50);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(int)((float)iVar4 * fVar15),(int)((float)iVar5 * fVar15),
             (int)((float)iVar6 * fVar15),(int)((float)iVar7 * fVar15));
  local_48 = CONCAT44(iStack_14,local_18);
  local_40 = uStack_10;
  std::string::string((string *)&local_18,"IMAGE_UI_NEW_PVP_SUN_UPGRADE_ICON");
  StringHelper::ToImage((string *)&local_18,true);
  std::string::~string((string *)&local_18);
  nop();
  if (*(long *)(this + 0x1a8) != 0) {
    Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)local_28,param_1);
    UIWidget::GetDrawRect();
    fVar15 = (float)FUN_0351e4fc(0x42180000);
    *(float *)(param_1 + 0x10) = (float)(int)local_18 + *(float *)(this + 0x1b8) * fVar15;
    UIWidget::GetDrawRect();
    fVar15 = (float)FUN_0351e4fc(0x425c0000);
    pSVar12 = *(StandaloneEffect **)(this + 0x1a8);
    *(float *)(param_1 + 0x14) = (float)iStack_14 + *(float *)(this + 0x1b8) * fVar15;
    StandaloneEffect::SetVisibility(pSVar12,true);
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x1a8),param_1);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x1a8),false);
    Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)local_28);
  }
  if (*(long *)(this + 0x1b0) != 0) {
    Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)local_28,param_1);
    UIWidget::GetDrawRect();
    iVar4 = FUN_0351e4e8(0xeb);
    *(float *)(param_1 + 0x10) = (float)(int)local_18 + *(float *)(this + 0x1b8) * (float)iVar4;
    UIWidget::GetDrawRect();
    iVar4 = FUN_0351e4e8(0x19);
    pSVar12 = *(StandaloneEffect **)(this + 0x1b0);
    *(float *)(param_1 + 0x14) = (float)iStack_14 + *(float *)(this + 0x1b8) * (float)iVar4;
    StandaloneEffect::SetVisibility(pSVar12,true);
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x1b0),param_1);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x1b0),false);
    Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)local_28);
  }
  Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)aSStack_50,param_1);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + (float)(int)local_48;
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + (float)local_48._4_4_;
  iVar4 = FUN_0351e4e8(0);
  fVar15 = *(float *)(this + 0x1b8);
  iVar5 = FUN_0351e4e8(0x28);
  iVar6 = FUN_0351e4e8(0x46);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(int)((float)iVar4 * fVar15),(int)((float)iVar5 * fVar15),
             (int)((float)iVar6 * fVar15),(int)((float)iVar5 * fVar15));
  local_48 = CONCAT44(iStack_14,local_18);
  local_40 = uStack_10;
  Sexy::StrFormat("LV.%d",(Insets *)&local_18,(ulong)*(uint *)(this + 0x180));
  Sexy::ToSexyString((Sexy *)&local_18,extraout_x1_02);
  std::string::~string((string *)&local_18);
  if (this[0x18c] == (UINewPVPSunIncreaseBank)0x0) {
    this_03 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    cVar2 = NewPVPMgr::IsSunUpgradeFull(this_03);
    if (cVar2 != '\0') {
      TodStringTranslate(L"[RANK_UP_MAX]");
      FUN_054766c8((Insets *)local_28,(Insets *)&local_18);
      FUN_05476c50((Insets *)&local_18);
    }
  }
  std::operator==(asStack_70,"Large");
  uVar13 = PrimeText_Game::Typeface_FZCuYuan_12_Outline;
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,(Insets *)local_28,(Insets *)&local_48,uVar13,(Insets *)&local_18,5,1);
  FUN_05476c50((Insets *)local_28);
  Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)aSStack_50);
  std::string::~string(asStack_70);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINewPVPSunIncreaseBank::Draw(Sexy::Graphics*) */

void __thiscall UINewPVPSunIncreaseBank::Draw(UINewPVPSunIncreaseBank *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

