// Class: PowerupWizardFinger


/* PowerupWizardFinger::onEnterState_Selected(PowerupState) */

void PowerupWizardFinger::onEnterState_Selected(long param_1)

{
  long lVar1;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar1 + 0x68);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupWizardFinger::StaticClassInit() */

void PowerupWizardFinger::StaticClassInit(void)

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
    std::string::string(asStack_10,"PowerupWizardFinger");
    (*pcVar2)(plVar1,asStack_10,FUN_04318750,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupWizardFinger::StaticGetClass() */

long * PowerupWizardFinger::StaticGetClass(void)

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
  uVar2 = BasePowerup::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupWizardFinger",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupWizardFinger::GetClass() const */

long * PowerupWizardFinger::GetClass(void)

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
  uVar2 = BasePowerup::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupWizardFinger",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupWizardFinger::isTouching() */

bool __thiscall PowerupWizardFinger::isTouching(PowerupWizardFinger *this)

{
  return *(long *)(this + 0xd0) != 0;
}


/* PowerupWizardFinger::PowerupWizardFinger() */

void __thiscall PowerupWizardFinger::PowerupWizardFinger(PowerupWizardFinger *this)

{
  BasePowerup::BasePowerup((BasePowerup *)this);
  *(undefined ***)this = &PTR_GetClass_06833360;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 200));
  *(undefined8 *)(this + 0xd0) = 0;
  return;
}


/* PowerupWizardFinger::StaticNew() */

PowerupWizardFinger * PowerupWizardFinger::StaticNew(void)

{
  PowerupWizardFinger *this;
  
  this = ::operator_new(0xd8);
  PowerupWizardFinger(this);
  return this;
}


/* PowerupWizardFinger::~PowerupWizardFinger() */

void __thiscall PowerupWizardFinger::~PowerupWizardFinger(PowerupWizardFinger *this)

{
  *(undefined ***)this = &PTR_GetClass_06833360;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
  BasePowerup::~BasePowerup((BasePowerup *)this);
  return;
}


/* PowerupWizardFinger::~PowerupWizardFinger() */

void __thiscall PowerupWizardFinger::~PowerupWizardFinger(PowerupWizardFinger *this)

{
  ~PowerupWizardFinger(this);
  AK::FreeHook(this);
  return;
}


/* PowerupWizardFinger::onExitState_Activated(PowerupState) */

void PowerupWizardFinger::onExitState_Activated(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 200));
  (**(code **)(*plVar1 + 0x48))();
  return;
}


/* PowerupWizardFinger::cancelTouch() */

void __thiscall PowerupWizardFinger::cancelTouch(PowerupWizardFinger *this)

{
  char cVar1;
  WizardFingerGameObject *this_00;
  
  *(undefined8 *)(this + 0xd0) = 0;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 200));
  if (cVar1 == '\0') {
    return;
  }
  this_00 = (WizardFingerGameObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
  WizardFingerGameObject::SetActive(this_00,false);
  return;
}


/* PowerupWizardFinger::onEnterState_Idle(PowerupState) */

void __thiscall PowerupWizardFinger::onEnterState_Idle(PowerupWizardFinger *this,int param_2)

{
  BasePowerup::onEnterState_Idle();
  if (param_2 != -1) {
    cancelTouch(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupWizardFinger::registerForEvents() */

void __thiscall PowerupWizardFinger::registerForEvents(PowerupWizardFinger *this)

{
  Board *pBVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<PowerupWizardFinger,bool(PowerupWizardFinger::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<PowerupWizardFinger,void(PowerupWizardFinger::*)()>
            (aDStack_38,aCStack_80);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,4,a_Stack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupWizardFinger::shouldActivate(Sexy::Touch const&) */

void __thiscall PowerupWizardFinger::shouldActivate(PowerupWizardFinger *this,Touch *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  WizardFingerGameObject *this_00;
  long lVar5;
  float local_28;
  float local_24;
  Point aPStack_20 [8];
  TRect<int> aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = BasePowerup::isInState((BasePowerup *)this,1);
  bVar1 = false;
  if (cVar2 != '\0') {
    iVar3 = FUN_0431744c(*(undefined4 *)(param_1 + 0x10));
    iVar4 = FUN_0431744c(*(undefined4 *)(param_1 + 0x14));
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,(float)iVar3,(float)iVar4);
    Sexy::Point::Point(aPStack_20,(int)local_28,(int)local_24);
    Board::GetGridBoundingRect();
    cVar2 = Sexy::TRect<int>::Contains(aTStack_18,(TPoint *)aPStack_20);
    bVar1 = false;
    if (cVar2 != '\0') {
      this_00 = (WizardFingerGameObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
      lVar5 = WizardFingerGameObject::GetClosestEntity(this_00,(SexyVector2 *)&local_28);
      bVar1 = lVar5 != 0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* PowerupWizardFinger::updateState_Activated() */

void __thiscall PowerupWizardFinger::updateState_Activated(PowerupWizardFinger *this)

{
  WizardFingerGameObject *this_00;
  
  this_00 = (WizardFingerGameObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
  WizardFingerGameObject::Update(this_00);
  BasePowerup::updateState_Activated((BasePowerup *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupWizardFinger::activate(Sexy::Touch const&) */

void __thiscall PowerupWizardFinger::activate(PowerupWizardFinger *this,Touch *param_1)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  WizardFingerGameObject *pWVar4;
  char *pcVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 200);
  *(undefined8 *)(this + 0xd0) = *(undefined8 *)param_1;
  local_8 = ___stack_chk_guard;
  uVar3 = WizardFingerGameObject::StaticGetClass();
  GameObject::Create(uVar3,0x27);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pWVar4 = (WizardFingerGameObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  WizardFingerGameObject::SetActive(pWVar4,true);
  pWVar4 = (WizardFingerGameObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  iVar1 = FUN_0431744c(*(undefined4 *)(param_1 + 0x10));
  iVar2 = FUN_0431744c(*(undefined4 *)(param_1 + 0x14));
  Sexy::FastCurve::SetOutRange((FastCurve *)aRStack_10,(float)iVar1,(float)iVar2);
  WizardFingerGameObject::SetLocation(pWVar4,(SexyVector2 *)aRStack_10);
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Play_UI_PowerUp_WizardFinger");
  BasePowerup::Activate((BasePowerup *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupWizardFinger::handleTouch(Sexy::Touch const&) */

void __thiscall PowerupWizardFinger::handleTouch(PowerupWizardFinger *this,Touch *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  WizardFingerGameObject *pWVar4;
  char *pcVar5;
  long lVar6;
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = BasePowerup::isInState((BasePowerup *)this,1);
  if ((cVar1 == '\0') && (cVar1 = BasePowerup::isInState((BasePowerup *)this,2), cVar1 == '\0'))
  goto switchD_04318ddc_caseD_2;
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 0:
    if (*(long *)(this + 0xd0) == 0) {
      cVar1 = shouldActivate(this,param_1);
      if (cVar1 != '\0') {
LAB_04318f28:
        activate(this,param_1);
        goto LAB_04318d98;
      }
      cVar1 = BasePowerup::isInState((BasePowerup *)this,2);
      if (cVar1 != '\0') {
        *(undefined8 *)(this + 0xd0) = *(undefined8 *)param_1;
        pWVar4 = (WizardFingerGameObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
        WizardFingerGameObject::SetActive(pWVar4,true);
        pWVar4 = (WizardFingerGameObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
        iVar2 = FUN_0431744c(*(undefined4 *)(param_1 + 0x10));
        iVar3 = FUN_0431744c(*(undefined4 *)(param_1 + 0x14));
        Sexy::FastCurve::SetOutRange(aFStack_10,(float)iVar2,(float)iVar3);
        WizardFingerGameObject::SetLocation(pWVar4,(SexyVector2 *)aFStack_10);
        pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar5,"Play_UI_PowerUp_WizardFinger");
        goto LAB_04318d98;
      }
    }
    break;
  case 1:
    lVar6 = *(long *)(this + 0xd0);
    if (lVar6 == 0) {
      cVar1 = shouldActivate(this,param_1);
      if (cVar1 != '\0') {
        cVar1 = '\0';
        goto LAB_04318f28;
      }
      lVar6 = *(long *)(this + 0xd0);
    }
    if (*(long *)param_1 == lVar6) {
      cVar1 = '\0';
      pWVar4 = (WizardFingerGameObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
      iVar2 = FUN_0431744c(*(undefined4 *)(param_1 + 0x10));
      iVar3 = FUN_0431744c(*(undefined4 *)(param_1 + 0x14));
      Sexy::FastCurve::SetOutRange(aFStack_10,(float)iVar2,(float)iVar3);
      WizardFingerGameObject::SetLocation(pWVar4,(SexyVector2 *)aFStack_10);
      goto LAB_04318d98;
    }
    break;
  case 3:
    cVar1 = *(long *)param_1 == *(long *)(this + 0xd0);
    goto LAB_04318dfc;
  case 4:
    cVar1 = false;
LAB_04318dfc:
    cancelTouch(this);
    goto LAB_04318d98;
  }
switchD_04318ddc_caseD_2:
  cVar1 = '\0';
LAB_04318d98:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}

