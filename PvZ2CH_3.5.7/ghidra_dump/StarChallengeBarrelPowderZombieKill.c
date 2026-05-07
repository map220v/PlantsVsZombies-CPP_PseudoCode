// Class: StarChallengeBarrelPowderZombieKill


/* StarChallengeBarrelPowderZombieKill::getChallengeUI() */

ChallengeUI * __thiscall
StarChallengeBarrelPowderZombieKill::getChallengeUI(StarChallengeBarrelPowderZombieKill *this)

{
  bool bVar1;
  RtObject *this_00;
  ChallengeUI *pCVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x20));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
    pCVar2 = Sexy::RtObject::Cast<ChallengeUI>(this_00);
    return pCVar2;
  }
  return (ChallengeUI *)0x0;
}


/* StarChallengeBarrelPowderZombieKill::GetProgressDescription() const */

void StarChallengeBarrelPowderZombieKill::GetProgressDescription(void)

{
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  Sexy::StrFormat(L"[ %d / %d ]",(ulong)*(uint *)(in_x0 + 0x28),(ulong)*(uint *)(pRVar1 + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeBarrelPowderZombieKill::StaticClassInit() */

void StarChallengeBarrelPowderZombieKill::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeBarrelPowderZombieKill");
    (*pcVar2)(plVar1,asStack_10,FUN_044909dc,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeBarrelPowderZombieKill::StaticGetClass() */

long * StarChallengeBarrelPowderZombieKill::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeBarrelPowderZombieKill",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeBarrelPowderZombieKill::~StarChallengeBarrelPowderZombieKill() */

void __thiscall
StarChallengeBarrelPowderZombieKill::~StarChallengeBarrelPowderZombieKill
          (StarChallengeBarrelPowderZombieKill *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06850c30;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* StarChallengeBarrelPowderZombieKill::~StarChallengeBarrelPowderZombieKill() */

void __thiscall
StarChallengeBarrelPowderZombieKill::~StarChallengeBarrelPowderZombieKill
          (StarChallengeBarrelPowderZombieKill *this)

{
  ~StarChallengeBarrelPowderZombieKill(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeBarrelPowderZombieKill::StarChallengeBarrelPowderZombieKill() */

void __thiscall
StarChallengeBarrelPowderZombieKill::StarChallengeBarrelPowderZombieKill
          (StarChallengeBarrelPowderZombieKill *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Challenge::Challenge((Challenge *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06850c30;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  *(undefined4 *)(this + 0x28) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x20),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeBarrelPowderZombieKill::StaticNew() */

StarChallengeBarrelPowderZombieKill * StarChallengeBarrelPowderZombieKill::StaticNew(void)

{
  StarChallengeBarrelPowderZombieKill *this;
  
  this = ::operator_new(0x30);
  StarChallengeBarrelPowderZombieKill(this);
  return this;
}


/* StarChallengeBarrelPowderZombieKill::gameplayEnded() */

void __thiscall
StarChallengeBarrelPowderZombieKill::gameplayEnded(StarChallengeBarrelPowderZombieKill *this)

{
  int iVar1;
  char cVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  
  cVar2 = FUN_04490054(*(undefined4 *)(this + 0x1c));
  if (cVar2 == '\0') {
    Challenge::HideUI((Challenge *)this);
    return;
  }
  iVar1 = *(int *)(this + 0x28);
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (iVar1 < *(int *)(pRVar3 + 0x40)) {
    Challenge::Fail();
    Challenge::HideUI((Challenge *)this);
    return;
  }
  Challenge::Complete((Challenge *)this);
  Challenge::HideUI((Challenge *)this);
  return;
}


/* StarChallengeBarrelPowderZombieKill::OnZombiePowderKill(Zombie*) */

void __thiscall
StarChallengeBarrelPowderZombieKill::OnZombiePowderKill
          (StarChallengeBarrelPowderZombieKill *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  long extraout_x0;
  
  cVar1 = FUN_04490054(*(undefined4 *)(this + 0x1c));
  if (cVar1 == '\0') {
    return;
  }
  if (param_1 != (Zombie *)0x0) {
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    if (*(int *)(pRVar3 + 0x40) <= *(int *)(this + 0x28)) {
      Challenge::Complete((Challenge *)this);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x20));
      goto joined_r0x04490738;
    }
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x20));
joined_r0x04490738:
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
    nop();
    FUN_04490044(extraout_x0 + 0x1a8,*(undefined4 *)(this + 0x28));
    cVar1 = FUN_04490060(*(undefined4 *)(this + 0x1c));
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
      nop();
      ChallengeUI::SetSuccess();
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeBarrelPowderZombieKill::onGameplayStarted() */

void __thiscall
StarChallengeBarrelPowderZombieKill::onGameplayStarted(StarChallengeBarrelPowderZombieKill *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  undefined4 uVar1;
  char cVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  long extraout_x0;
  long extraout_x0_00;
  Effect_Protrusion *extraout_x0_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x20);
  *(undefined4 *)(this + 0x28) = 0;
  local_8 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar2 != '\0') {
    Sexy::RtName::RtName(aRStack_18,L"UIChallengeBarrelPowderZombieKill");
    UIWidget::CreateWidget(aRStack_18,1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    Sexy::RtName::~RtName(aRStack_18);
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    uVar1 = *(undefined4 *)(pRVar3 + 0x40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    FUN_0449004c(extraout_x0 + 0x1ac,uVar1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    FUN_04490044(extraout_x0_00 + 0x1a8,*(undefined4 *)(this + 0x28));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b0b0b0);
    Effect_Protrusion::SetInstigator(extraout_x0_01,aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeBarrelPowderZombieKill::registerForEvents() */

void __thiscall
StarChallengeBarrelPowderZombieKill::registerForEvents(StarChallengeBarrelPowderZombieKill *this)

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
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::
  Delegate0<StarChallengeBarrelPowderZombieKill,void(StarChallengeBarrelPowderZombieKill::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::
  Delegate0<StarChallengeBarrelPowderZombieKill,void(StarChallengeBarrelPowderZombieKill::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayWinConditionMet,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnZombiePowderKill);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<StarChallengeBarrelPowderZombieKill,void(StarChallengeBarrelPowderZombieKill::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::OnZombiePowderKill,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

