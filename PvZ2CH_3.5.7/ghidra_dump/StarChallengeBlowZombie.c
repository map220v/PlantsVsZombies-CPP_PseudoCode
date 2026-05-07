// Class: StarChallengeBlowZombie


/* StarChallengeBlowZombie::GetProgressDescription() const */

void StarChallengeBlowZombie::GetProgressDescription(void)

{
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  Sexy::StrFormat(L"[ %d / %d ]",(ulong)*(uint *)(in_x0 + 0x20),(ulong)*(uint *)(pRVar1 + 0x40));
  return;
}


/* StarChallengeBlowZombie::getChallengeUI() */

ChallengeUI * __thiscall StarChallengeBlowZombie::getChallengeUI(StarChallengeBlowZombie *this)

{
  bool bVar1;
  RtObject *this_00;
  ChallengeUI *pCVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x28));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    pCVar2 = Sexy::RtObject::Cast<ChallengeUI>(this_00);
    return pCVar2;
  }
  return (ChallengeUI *)0x0;
}


/* StarChallengeBlowZombie::gameplayEnded() */

void __thiscall StarChallengeBlowZombie::gameplayEnded(StarChallengeBlowZombie *this)

{
  char cVar1;
  
  cVar1 = FUN_04483600(*(undefined4 *)(this + 0x1c));
  if (cVar1 != '\0') {
    Challenge::Fail();
  }
  Challenge::HideUI((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeBlowZombie::StaticClassInit() */

void StarChallengeBlowZombie::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeBlowZombie");
    (*pcVar2)(plVar1,asStack_10,FUN_044841ec,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeBlowZombie::StaticGetClass() */

long * StarChallengeBlowZombie::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeBlowZombie",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeBlowZombie::~StarChallengeBlowZombie() */

void __thiscall StarChallengeBlowZombie::~StarChallengeBlowZombie(StarChallengeBlowZombie *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0684f7f0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* StarChallengeBlowZombie::~StarChallengeBlowZombie() */

void __thiscall StarChallengeBlowZombie::~StarChallengeBlowZombie(StarChallengeBlowZombie *this)

{
  ~StarChallengeBlowZombie(this);
  AK::FreeHook(this);
  return;
}


/* StarChallengeBlowZombie::StarChallengeBlowZombie() */

void __thiscall StarChallengeBlowZombie::StarChallengeBlowZombie(StarChallengeBlowZombie *this)

{
  Challenge::Challenge((Challenge *)this);
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_0684f7f0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  return;
}


/* StarChallengeBlowZombie::StaticNew() */

StarChallengeBlowZombie * StarChallengeBlowZombie::StaticNew(void)

{
  StarChallengeBlowZombie *this;
  
  this = ::operator_new(0x30);
  StarChallengeBlowZombie(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeBlowZombie::gameplayStarted() */

void __thiscall StarChallengeBlowZombie::gameplayStarted(StarChallengeBlowZombie *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ToxicWaterPerfumeBottleProjectile *this_01;
  GridItemWaterMist *this_02;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28);
  *(undefined4 *)(this + 0x20) = 0;
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar1 = *(int *)(pRVar2 + 0x40);
  Sexy::RtName::RtName(aRStack_18,L"UIChallengeBlowZombie");
  UIWidget::CreateWidget(aRStack_18,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  ToxicWaterPerfumeBottleProjectile::SetType(this_01,*(int *)(this + 0x20));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  GridItemWaterMist::SetType(this_02,iVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeBlowZombie::onZombieBlown(Zombie*) */

void StarChallengeBlowZombie::onZombieBlown(Zombie *param_1)

{
  int iVar1;
  char cVar2;
  ToxicWaterPerfumeBottleProjectile *this;
  ResilienceTutorialIntroProperties *pRVar3;
  char *pcVar4;
  
  cVar2 = FUN_04483600(*(undefined4 *)(param_1 + 0x1c));
  if (cVar2 != '\0') {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
    nop();
    ToxicWaterPerfumeBottleProjectile::SetType(this,*(int *)(param_1 + 0x20));
    iVar1 = *(int *)(param_1 + 0x20);
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
    if (*(int *)(pRVar3 + 0x40) <= iVar1) {
      Challenge::Complete((Challenge *)param_1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
      nop();
      ChallengeUI::SetSuccess();
      pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar4,"Play_UI_Game_Objective_Success_Flower");
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeBlowZombie::registerForEvents() */

void __thiscall StarChallengeBlowZombie::registerForEvents(StarChallengeBlowZombie *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
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
  Sexy::Delegate0::Delegate0<StarChallengeBlowZombie,void(StarChallengeBlowZombie::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::Delegate0<StarChallengeBlowZombie,void(StarChallengeBlowZombie::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayWinConditionMet,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieBlown);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<StarChallengeBlowZombie,void(StarChallengeBlowZombie::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieBlown,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieBlown);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<StarChallengeBlowZombie,void(StarChallengeBlowZombie::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieFlicked,&local_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

