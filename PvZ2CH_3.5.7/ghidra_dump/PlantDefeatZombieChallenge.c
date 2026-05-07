// Class: PlantDefeatZombieChallenge


/* PlantDefeatZombieChallenge::initializeModule() */

void __thiscall PlantDefeatZombieChallenge::initializeModule(PlantDefeatZombieChallenge *this)

{
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* PlantDefeatZombieChallenge::GetProgressDescription() const */

void PlantDefeatZombieChallenge::GetProgressDescription(void)

{
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  Sexy::StrFormat(L"[ %d / %d ]",(ulong)*(uint *)(in_x0 + 0x20),(ulong)*(uint *)(pRVar1 + 0x48));
  return;
}


/* PlantDefeatZombieChallenge::onGameplayEnded() */

void __thiscall PlantDefeatZombieChallenge::onGameplayEnded(PlantDefeatZombieChallenge *this)

{
  char cVar1;
  
  cVar1 = FUN_04c6a19c(*(undefined4 *)(this + 0x1c));
  if (cVar1 != '\0') {
    Challenge::Fail();
  }
  Challenge::HideUI((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDefeatZombieChallenge::StaticClassInit() */

void PlantDefeatZombieChallenge::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantDefeatZombieChallenge");
    (*pcVar2)(plVar1,asStack_10,FUN_04c6ae10,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDefeatZombieChallenge::StaticGetClass() */

long * PlantDefeatZombieChallenge::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantDefeatZombieChallenge",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDefeatZombieChallenge::~PlantDefeatZombieChallenge() */

void __thiscall
PlantDefeatZombieChallenge::~PlantDefeatZombieChallenge(PlantDefeatZombieChallenge *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_069914b0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* PlantDefeatZombieChallenge::~PlantDefeatZombieChallenge() */

void __thiscall
PlantDefeatZombieChallenge::~PlantDefeatZombieChallenge(PlantDefeatZombieChallenge *this)

{
  ~PlantDefeatZombieChallenge(this);
  AK::FreeHook(this);
  return;
}


/* PlantDefeatZombieChallenge::PlantDefeatZombieChallenge() */

void __thiscall
PlantDefeatZombieChallenge::PlantDefeatZombieChallenge(PlantDefeatZombieChallenge *this)

{
  Challenge::Challenge((Challenge *)this);
  *(undefined ***)this = &PTR_GetModuleClass_069914b0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  return;
}


/* PlantDefeatZombieChallenge::StaticNew() */

PlantDefeatZombieChallenge * PlantDefeatZombieChallenge::StaticNew(void)

{
  PlantDefeatZombieChallenge *this;
  
  this = ::operator_new(0x30);
  PlantDefeatZombieChallenge(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDefeatZombieChallenge::PlantKillZombie(std::string const&) */

void __thiscall
PlantDefeatZombieChallenge::PlantKillZombie(PlantDefeatZombieChallenge *this,string *param_1)

{
  RtWeakPtr *this_00;
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  long extraout_x0;
  int *piVar6;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = FUN_04c6a19c(*(undefined4 *)(this + 0x1c));
  if (cVar3 != '\0') {
    pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    cVar3 = std::operator==((string *)(pRVar5 + 0x50),param_1);
    if ((cVar3 != '\0') &&
       (iVar1 = *(int *)(this + 0x20), iVar2 = *(int *)(pRVar5 + 0x48),
       *(int *)(this + 0x20) = iVar1 + 1, iVar2 <= iVar1 + 1)) {
      Challenge::Complete((Challenge *)this);
    }
    this_00 = (RtWeakPtr *)(this + 0x28);
    bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar4) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      local_10 = 0;
      local_c = *(int *)(pRVar5 + 0x48) - *(int *)(this + 0x20);
      piVar6 = eastl::max_alt<int>(&local_10,&local_c);
      FUN_04c6a23c(extraout_x0 + 0x1a8,*piVar6);
      cVar3 = FUN_04c6a1e0(*(undefined4 *)(this + 0x1c));
      if (cVar3 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        nop();
        if (local_8 == ___stack_chk_guard) {
          ChallengeUI::SetSuccess();
          return;
        }
        goto LAB_04c6abf8;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_04c6abf8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDefeatZombieChallenge::onGameplayStarted() */

void __thiscall PlantDefeatZombieChallenge::onGameplayStarted(PlantDefeatZombieChallenge *this)

{
  Effect_Protrusion *extraout_x0;
  ResilienceTutorialIntroProperties *pRVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UIChallengeZombieKillCounter");
  UIWidget::CreateWidget(aRStack_18,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28),(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  nop();
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  FUN_04c6a23c(extraout_x0 + 0x1a8,*(undefined4 *)(pRVar1 + 0x48));
  FUN_04c6a2f8(extraout_x0 + 0x1ac);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b94028);
  Effect_Protrusion::SetInstigator(extraout_x0,aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDefeatZombieChallenge::registerForEvents() */

void __thiscall PlantDefeatZombieChallenge::registerForEvents(PlantDefeatZombieChallenge *this)

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
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<PlantDefeatZombieChallenge,void(PlantDefeatZombieChallenge::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<PlantDefeatZombieChallenge,void(PlantDefeatZombieChallenge::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayWinConditionMet,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,PlantKillZombie);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<PlantDefeatZombieChallenge,void(PlantDefeatZombieChallenge::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::PlantKillZombie,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

