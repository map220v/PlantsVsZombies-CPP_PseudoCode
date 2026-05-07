// Class: DestroyGridItemsChallenge


/* DestroyGridItemsChallenge::gameplayEnded() */

void __thiscall DestroyGridItemsChallenge::gameplayEnded(DestroyGridItemsChallenge *this)

{
  char cVar1;
  
  cVar1 = FUN_036862d0(*(undefined4 *)(this + 0x1c));
  if (cVar1 != '\0') {
    Challenge::Fail();
  }
  Challenge::HideUI((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DestroyGridItemsChallenge::StaticClassInit() */

void DestroyGridItemsChallenge::StaticClassInit(void)

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
    std::string::string(asStack_10,"DestroyGridItemsChallenge");
    (*pcVar2)(plVar1,asStack_10,FUN_03686d18,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DestroyGridItemsChallenge::StaticGetClass() */

long * DestroyGridItemsChallenge::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DestroyGridItemsChallenge",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DestroyGridItemsChallenge::~DestroyGridItemsChallenge() */

void __thiscall
DestroyGridItemsChallenge::~DestroyGridItemsChallenge(DestroyGridItemsChallenge *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0667b970;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* DestroyGridItemsChallenge::~DestroyGridItemsChallenge() */

void __thiscall
DestroyGridItemsChallenge::~DestroyGridItemsChallenge(DestroyGridItemsChallenge *this)

{
  ~DestroyGridItemsChallenge(this);
  AK::FreeHook(this);
  return;
}


/* DestroyGridItemsChallenge::DestroyGridItemsChallenge() */

void __thiscall
DestroyGridItemsChallenge::DestroyGridItemsChallenge(DestroyGridItemsChallenge *this)

{
  Challenge::Challenge((Challenge *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0667b970;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* DestroyGridItemsChallenge::StaticNew() */

DestroyGridItemsChallenge * DestroyGridItemsChallenge::StaticNew(void)

{
  DestroyGridItemsChallenge *this;
  
  this = ::operator_new(0x30);
  DestroyGridItemsChallenge(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DestroyGridItemsChallenge::gameplayStarted() */

void __thiscall DestroyGridItemsChallenge::gameplayStarted(DestroyGridItemsChallenge *this)

{
  Effect_Protrusion *extraout_x0;
  ResilienceTutorialIntroProperties *pRVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UIChallengeGridItemCounter");
  UIWidget::CreateWidget(aRStack_18,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28),(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  nop();
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  FUN_03686370(extraout_x0 + 0x1a8,*(undefined4 *)(pRVar1 + 0x40));
  FUN_0368642c(extraout_x0 + 0x1ac);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aab290);
  Effect_Protrusion::SetInstigator(extraout_x0,aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DestroyGridItemsChallenge::onGridItemDestroyed(std::string const&) */

void __thiscall
DestroyGridItemsChallenge::onGridItemDestroyed(DestroyGridItemsChallenge *this,string *param_1)

{
  RtMixedPtr<Sexy::Image> *this_00;
  int iVar1;
  int iVar2;
  char cVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  long lVar5;
  long extraout_x0;
  int *piVar6;
  char *pcVar7;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = FUN_036862d0(*(undefined4 *)(this + 0x1c));
  if (cVar3 != '\0') {
    this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x28);
    cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
    if (cVar3 == '\0') {
      pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      lVar5 = FUN_05474368(param_1,pRVar4 + 0x48,0);
      if ((lVar5 != -1) &&
         (iVar1 = *(int *)(this + 0x20), iVar2 = *(int *)(pRVar4 + 0x40),
         *(int *)(this + 0x20) = iVar1 + 1, iVar2 <= iVar1 + 1)) {
        pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar7,"Play_UI_Game_Objective_Success_Flower");
        Challenge::Complete((Challenge *)this);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      local_10 = 0;
      local_c = *(int *)(pRVar4 + 0x40) - *(int *)(this + 0x20);
      piVar6 = eastl::max_alt<int>(&local_10,&local_c);
      FUN_03686370(extraout_x0 + 0x1a8,*piVar6);
      cVar3 = FUN_03686314(*(undefined4 *)(this + 0x1c));
      if (cVar3 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        nop();
        if (local_8 == ___stack_chk_guard) {
          ChallengeUI::SetSuccess();
          return;
        }
        goto LAB_036870a4;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_036870a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DestroyGridItemsChallenge::registerForEvents() */

void __thiscall DestroyGridItemsChallenge::registerForEvents(DestroyGridItemsChallenge *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Challenge::registerForEvents((Challenge *)this);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<DestroyGridItemsChallenge,void(DestroyGridItemsChallenge::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::Delegate0<DestroyGridItemsChallenge,void(DestroyGridItemsChallenge::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayWinConditionMet,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGridItemDestroyed);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<DestroyGridItemsChallenge,void(DestroyGridItemsChallenge::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::GridItemDestroyed,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

