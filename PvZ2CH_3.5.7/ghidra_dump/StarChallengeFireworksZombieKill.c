// Class: StarChallengeFireworksZombieKill


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeFireworksZombieKill::StaticClassInit() */

void StarChallengeFireworksZombieKill::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeFireworksZombieKill");
    (*pcVar2)(plVar1,asStack_10,FUN_0448dd74,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeFireworksZombieKill::StaticGetClass() */

long * StarChallengeFireworksZombieKill::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeFireworksZombieKill",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeFireworksZombieKill::~StarChallengeFireworksZombieKill() */

void __thiscall
StarChallengeFireworksZombieKill::~StarChallengeFireworksZombieKill
          (StarChallengeFireworksZombieKill *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06850720;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* StarChallengeFireworksZombieKill::~StarChallengeFireworksZombieKill() */

void __thiscall
StarChallengeFireworksZombieKill::~StarChallengeFireworksZombieKill
          (StarChallengeFireworksZombieKill *this)

{
  ~StarChallengeFireworksZombieKill(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeFireworksZombieKill::StarChallengeFireworksZombieKill() */

void __thiscall
StarChallengeFireworksZombieKill::StarChallengeFireworksZombieKill
          (StarChallengeFireworksZombieKill *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Challenge::Challenge((Challenge *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06850720;
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


/* StarChallengeFireworksZombieKill::StaticNew() */

StarChallengeFireworksZombieKill * StarChallengeFireworksZombieKill::StaticNew(void)

{
  StarChallengeFireworksZombieKill *this;
  
  this = ::operator_new(0x30);
  StarChallengeFireworksZombieKill(this);
  return this;
}


/* StarChallengeFireworksZombieKill::CheckZombieDeadByFireworks(Zombie*, DamageInfo const*) */

bool __thiscall
StarChallengeFireworksZombieKill::CheckZombieDeadByFireworks
          (StarChallengeFireworksZombieKill *this,Zombie *param_1,DamageInfo *param_2)

{
  bool bVar1;
  
  if ((param_1 != (Zombie *)0x0) && (*(RtObject **)param_2 != (RtObject *)0x0)) {
    bVar1 = Sexy::RtObject::IsA<GridItemSummerFireworks>(*(RtObject **)param_2);
    return bVar1;
  }
  return false;
}


/* StarChallengeFireworksZombieKill::gameplayEnded() */

void __thiscall
StarChallengeFireworksZombieKill::gameplayEnded(StarChallengeFireworksZombieKill *this)

{
  int iVar1;
  char cVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  
  cVar2 = FUN_0448d3c8(*(undefined4 *)(this + 0x1c));
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


/* StarChallengeFireworksZombieKill::onZombieDied(Zombie*, DamageInfo const*) */

void __thiscall
StarChallengeFireworksZombieKill::onZombieDied
          (StarChallengeFireworksZombieKill *this,Zombie *param_1,DamageInfo *param_2)

{
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  long extraout_x0;
  ResilienceTutorialIntroProperties *pRVar3;
  
  cVar1 = FUN_0448d3c8(*(undefined4 *)(this + 0x1c));
  if (cVar1 != '\0') {
    if ((param_1 != (Zombie *)0x0) &&
       (cVar1 = CheckZombieDeadByFireworks(this,param_1,param_2), cVar1 != '\0')) {
      *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
      pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      if (*(int *)(pRVar3 + 0x40) <= *(int *)(this + 0x28)) {
        Challenge::Complete((Challenge *)this);
      }
    }
    this_00 = (RtWeakPtr *)(this + 0x20);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      FUN_0448d3b8(extraout_x0 + 0x1a8,*(undefined4 *)(this + 0x28));
      cVar1 = FUN_0448d3d4(*(undefined4 *)(this + 0x1c));
      if (cVar1 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        nop();
        ChallengeUI::SetSuccess();
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeFireworksZombieKill::onGameplayStarted() */

void __thiscall
StarChallengeFireworksZombieKill::onGameplayStarted(StarChallengeFireworksZombieKill *this)

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
    Sexy::RtName::RtName(aRStack_18,L"UIChallengeFireworksZombieKill");
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
    FUN_0448d3c0(extraout_x0 + 0x1ac,uVar1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    FUN_0448d3b8(extraout_x0_00 + 0x1a8,*(undefined4 *)(this + 0x28));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b0aee8);
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
/* StarChallengeFireworksZombieKill::registerForEvents() */

void __thiscall
StarChallengeFireworksZombieKill::registerForEvents(StarChallengeFireworksZombieKill *this)

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
  Delegate0<StarChallengeFireworksZombieKill,void(StarChallengeFireworksZombieKill::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::
  Delegate0<StarChallengeFireworksZombieKill,void(StarChallengeFireworksZombieKill::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayWinConditionMet,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<StarChallengeFireworksZombieKill,void(StarChallengeFireworksZombieKill::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

