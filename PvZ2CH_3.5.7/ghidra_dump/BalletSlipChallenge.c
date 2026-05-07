// Class: BalletSlipChallenge


/* BalletSlipChallenge::gameplayEnded() */

void __thiscall BalletSlipChallenge::gameplayEnded(BalletSlipChallenge *this)

{
  char cVar1;
  
  cVar1 = FUN_03681480(*(undefined4 *)(this + 0x1c));
  if (cVar1 != '\0') {
    Challenge::Fail();
  }
  Challenge::HideUI((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BalletSlipChallenge::StaticClassInit() */

void BalletSlipChallenge::StaticClassInit(void)

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
    std::string::string(asStack_10,"BalletSlipChallenge");
    (*pcVar2)(plVar1,asStack_10,FUN_03684b74,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BalletSlipChallenge::StaticGetClass() */

long * BalletSlipChallenge::StaticGetClass(void)

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
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"BalletSlipChallenge",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BalletSlipChallenge::~BalletSlipChallenge() */

void __thiscall BalletSlipChallenge::~BalletSlipChallenge(BalletSlipChallenge *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0667af50;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* BalletSlipChallenge::~BalletSlipChallenge() */

void __thiscall BalletSlipChallenge::~BalletSlipChallenge(BalletSlipChallenge *this)

{
  ~BalletSlipChallenge(this);
  AK::FreeHook(this);
  return;
}


/* BalletSlipChallenge::BalletSlipChallenge() */

void __thiscall BalletSlipChallenge::BalletSlipChallenge(BalletSlipChallenge *this)

{
  Challenge::Challenge((Challenge *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0667af50;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* BalletSlipChallenge::StaticNew() */

BalletSlipChallenge * BalletSlipChallenge::StaticNew(void)

{
  BalletSlipChallenge *this;
  
  this = ::operator_new(0x30);
  BalletSlipChallenge(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BalletSlipChallenge::gameplayStarted() */

void __thiscall BalletSlipChallenge::gameplayStarted(BalletSlipChallenge *this)

{
  Effect_Protrusion *extraout_x0;
  ResilienceTutorialIntroProperties *pRVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UIChallengeApplyConditionCounter");
  UIWidget::CreateWidget(aRStack_18,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28),(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  nop();
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  FUN_03681658(extraout_x0 + 0x1a8,*(undefined4 *)(pRVar1 + 0x40));
  FUN_03681664(extraout_x0 + 0x1ac);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aab0f8);
  Effect_Protrusion::SetInstigator(extraout_x0,aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BalletSlipChallenge::onNotifySlip() */

void __thiscall BalletSlipChallenge::onNotifySlip(BalletSlipChallenge *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  int iVar1;
  int iVar2;
  char cVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  long extraout_x0;
  int *piVar5;
  char *pcVar6;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = FUN_03681480(*(undefined4 *)(this + 0x1c));
  if (cVar3 != '\0') {
    this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x28);
    cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
    if (cVar3 == '\0') {
      pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      iVar1 = *(int *)(this + 0x20);
      iVar2 = *(int *)(pRVar4 + 0x40);
      *(int *)(this + 0x20) = iVar1 + 1;
      if (iVar2 <= iVar1 + 1) {
        pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar6,"Play_UI_Game_Objective_Success_Flower");
        Challenge::Complete((Challenge *)this);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      local_10 = 0;
      local_c = *(int *)(pRVar4 + 0x40) - *(int *)(this + 0x20);
      piVar5 = eastl::max_alt<int>(&local_10,&local_c);
      FUN_03681658(extraout_x0 + 0x1a8,*piVar5);
      cVar3 = FUN_03681620(*(undefined4 *)(this + 0x1c));
      if (cVar3 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        nop();
        if (local_8 == ___stack_chk_guard) {
          ChallengeUI::SetSuccess();
          return;
        }
        goto LAB_03685a70;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_03685a70:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BalletSlipChallenge::registerForEvents() */

void __thiscall BalletSlipChallenge::registerForEvents(BalletSlipChallenge *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Challenge::registerForEvents((Challenge *)this);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<BalletSlipChallenge,void(BalletSlipChallenge::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::Delegate0<BalletSlipChallenge,void(BalletSlipChallenge::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayWinConditionMet,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifySlip);
  Sexy::Delegate0::Delegate0<BalletSlipChallenge,void(BalletSlipChallenge::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifySlip,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

