// Class: StarChallengePotionZombieKill


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePotionZombieKill::StaticClassInit() */

void StarChallengePotionZombieKill::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengePotionZombieKill");
    (*pcVar2)(plVar1,asStack_10,FUN_04489b4c,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengePotionZombieKill::StaticGetClass() */

long * StarChallengePotionZombieKill::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengePotionZombieKill",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengePotionZombieKill::gameplayEnded() */

void __thiscall StarChallengePotionZombieKill::gameplayEnded(StarChallengePotionZombieKill *this)

{
  int iVar1;
  char cVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  
  cVar2 = FUN_04489160(*(undefined4 *)(this + 0x1c));
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePotionZombieKill::onGameplayStarted() */

void __thiscall
StarChallengePotionZombieKill::onGameplayStarted(StarChallengePotionZombieKill *this)

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
    Sexy::RtName::RtName(aRStack_18,L"UIChallengePotionZombieKill");
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
    FUN_04489158(extraout_x0 + 0x1ac,uVar1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    FUN_04489150(extraout_x0_00 + 0x1a8,*(undefined4 *)(this + 0x28));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b0ac98);
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
/* StarChallengePotionZombieKill::StarChallengePotionZombieKill() */

void __thiscall
StarChallengePotionZombieKill::StarChallengePotionZombieKill(StarChallengePotionZombieKill *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Challenge::Challenge((Challenge *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06850060;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  *(undefined4 *)(this + 0x28) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x20),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x30));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengePotionZombieKill::StaticNew() */

StarChallengePotionZombieKill * StarChallengePotionZombieKill::StaticNew(void)

{
  StarChallengePotionZombieKill *this;
  
  this = ::operator_new(0x48);
  StarChallengePotionZombieKill(this);
  return this;
}


/* StarChallengePotionZombieKill::~StarChallengePotionZombieKill() */

void __thiscall
StarChallengePotionZombieKill::~StarChallengePotionZombieKill(StarChallengePotionZombieKill *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06850060;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* StarChallengePotionZombieKill::~StarChallengePotionZombieKill() */

void __thiscall
StarChallengePotionZombieKill::~StarChallengePotionZombieKill(StarChallengePotionZombieKill *this)

{
  ~StarChallengePotionZombieKill(this);
  AK::FreeHook(this);
  return;
}


/* StarChallengePotionZombieKill::onZombieDied(Zombie*, DamageInfo const*) */

void StarChallengePotionZombieKill::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  RtWeakPtr *this;
  char cVar1;
  bool bVar2;
  long extraout_x0;
  ResilienceTutorialIntroProperties *pRVar3;
  
  cVar1 = FUN_04489160(*(undefined4 *)(param_1 + 0x1c));
  if (cVar1 != '\0') {
    if ((param_2 != (DamageInfo *)0x0) &&
       (cVar1 = StarChallengeTentZombieKill::CheckZombiesInCondition(param_1), cVar1 != '\0')) {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
      if (*(int *)(pRVar3 + 0x40) <= *(int *)(param_1 + 0x28)) {
        Challenge::Complete((Challenge *)param_1);
      }
    }
    this = (RtWeakPtr *)(param_1 + 0x20);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      nop();
      FUN_04489150(extraout_x0 + 0x1a8,*(undefined4 *)(param_1 + 0x28));
      cVar1 = FUN_0448916c(*(undefined4 *)(param_1 + 0x1c));
      if (cVar1 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        nop();
        ChallengeUI::SetSuccess();
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePotionZombieKill::ZombieConditionEnded(Zombie*, int) */

void __thiscall
StarChallengePotionZombieKill::ZombieConditionEnded
          (StarChallengePotionZombieKill *this,Zombie *param_1,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_2 - 0x12U < 6) || (param_2 - 0x61U < 2)) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x30);
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    ToolPacketData::GetProps();
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                         (uVar2,uVar3,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar1) {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00,
                 local_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePotionZombieKill::ZombieConditionApplied(Zombie*, int, float) */

void StarChallengePotionZombieKill::ZombieConditionApplied
               (Zombie *param_1,int param_2,float param_3)

{
  char cVar1;
  int in_w2;
  float extraout_s0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((in_w2 - 0x12U < 6) || (in_w2 - 0x61U < 2)) &&
     (cVar1 = StarChallengeTentZombieKill::CheckZombiesInCondition(param_1), param_3 = extraout_s0,
     cVar1 == '\0')) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
               (param_1 + 0x30),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    param_3 = (float)Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePotionZombieKill::registerForEvents() */

void __thiscall
StarChallengePotionZombieKill::registerForEvents(StarChallengePotionZombieKill *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
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
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<StarChallengePotionZombieKill,void(StarChallengePotionZombieKill::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::Delegate0<StarChallengePotionZombieKill,void(StarChallengePotionZombieKill::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayWinConditionMet,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_a0 = local_80;
  uStack_98 = uStack_78;
  local_90 = local_70;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<StarChallengePotionZombieKill,void(StarChallengePotionZombieKill::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ZombieConditionApplied);
  local_b0 = local_58;
  local_c0 = local_68;
  uStack_b8 = uStack_60;
  MessageRouter::
  Subscribe<Zombie*,int,float,Sexy::CBMemberTranslatorX<StarChallengePotionZombieKill,void(StarChallengePotionZombieKill::*)(Zombie*,int,float)>>
            ((MessageRouter *)puVar1,Message::ZombieConditionApplied,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ZombieConditionEnded);
  local_e0 = local_50;
  uStack_d8 = uStack_48;
  local_d0 = local_40;
  MessageRouter::
  Subscribe<Zombie*,int,Sexy::CBMemberTranslatorX<StarChallengePotionZombieKill,void(StarChallengePotionZombieKill::*)(Zombie*,int)>>
            ((MessageRouter *)puVar1,Message::ZombieConditionEnded,&local_e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

