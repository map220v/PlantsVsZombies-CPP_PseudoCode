// Class: SecurityGourdModule


/* SecurityGourdModule::initializeModule() */

void __thiscall SecurityGourdModule::initializeModule(SecurityGourdModule *this)

{
  *(undefined4 *)(this + 0x13e0) = 0xffffffff;
  setState_SecurityGourdState(this,0);
  return;
}


/* SecurityGourdModule::setState_SecurityGourdState(SecurityGourdState) */

void __thiscall
SecurityGourdModule::setState_SecurityGourdState(SecurityGourdModule *this,int param_2)

{
  if (*(int *)(this + 0x13e0) != -1) {
    (**(code **)(*(long *)this + 0xa0))(this,*(int *)(this + 0x13e0),3);
  }
  *(int *)(this + 0x13e0) = param_2;
  if (param_2 != -1) {
    (**(code **)(*(long *)this + 0xa0))(this,param_2,1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecurityGourdModule::StaticClassInit() */

void SecurityGourdModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"SecurityGourdModule");
    (*pcVar2)(plVar1,asStack_10,FUN_036e80e0,0x1408,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SecurityGourdModule::StaticGetClass() */

long * SecurityGourdModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"SecurityGourdModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SecurityGourdModule::shouldKnockbackZombie(Zombie*) const */

undefined1 __thiscall
SecurityGourdModule::shouldKnockbackZombie(SecurityGourdModule *this,Zombie *param_1)

{
  undefined1 uVar1;
  
  if (param_1 != (Zombie *)0x0) {
    uVar1 = (**(code **)(*(long *)param_1 + 0x380))(param_1,1);
    return uVar1;
  }
  return 0;
}


/* SecurityGourdModule::~SecurityGourdModule() */

void __thiscall SecurityGourdModule::~SecurityGourdModule(SecurityGourdModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066860c0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x13d8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x13d0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x13c8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x13c0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x13b8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* SecurityGourdModule::~SecurityGourdModule() */

void __thiscall SecurityGourdModule::~SecurityGourdModule(SecurityGourdModule *this)

{
  ~SecurityGourdModule(this);
  AK::FreeHook(this);
  return;
}


/* SecurityGourdModule::SecurityGourdModule() */

void __thiscall SecurityGourdModule::SecurityGourdModule(SecurityGourdModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_066860c0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  Sexy::MTRand::MTRand((MTRand *)(this + 0x20));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x13b8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x13c0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x13c8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x13d0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x13d8));
  *(undefined4 *)(this + 0x13e4) = 0;
  *(undefined4 *)(this + 0x13e8) = 0;
  DVec3::DVec3((DVec3 *)(this + 0x13ec));
  DVec3::DVec3((DVec3 *)(this + 0x13f8));
  this[0x1404] = (SecurityGourdModule)0x0;
  return;
}


/* SecurityGourdModule::StaticNew() */

SecurityGourdModule * SecurityGourdModule::StaticNew(void)

{
  SecurityGourdModule *this;
  
  this = ::operator_new(0x1408);
  SecurityGourdModule(this);
  return this;
}


/* SecurityGourdModule::shouldDestroyZombie(Zombie*) const */

bool __thiscall SecurityGourdModule::shouldDestroyZombie(SecurityGourdModule *this,Zombie *param_1)

{
  ResilienceTutorialIntroProperties *pRVar1;
  float fVar2;
  float fVar3;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if ((param_1 != (Zombie *)0x0) &&
     (fVar2 = (float)FUN_036e6ec8(*(undefined4 *)(param_1 + 0x284)), 0.0 < fVar2)) {
    fVar3 = (float)FUN_036e6ec4(*(undefined4 *)(param_1 + 0x280));
    return fVar3 / fVar2 <= *(float *)(pRVar1 + 0x44);
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecurityGourdModule::resetPlantCooldowns() */

void __thiscall SecurityGourdModule::resetPlantCooldowns(SecurityGourdModule *this)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  UINewPVPTopZombieQueue *this_00;
  FishingEnergyBar *this_01;
  int iVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if ((pRVar2[0x58] != (ResilienceTutorialIntroProperties)0x0) &&
     (this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0)),
     this_00 != (UINewPVPTopZombieQueue *)0x0)) {
    for (iVar3 = 0; cVar1 = FUN_036e6ecc(this_00[0x199]), iVar3 < cVar1; iVar3 = iVar3 + 1) {
      UINewPVPTopZombieQueue::gettItem(this_00,iVar3);
      this_01 = (FishingEnergyBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      FishingEnergyBar::onGameUnpaused(this_01);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecurityGourdModule::knockbackZombie(Zombie*) */

void SecurityGourdModule::knockbackZombie(Zombie *param_1)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  float *pfVar3;
  ZombieTosserSubSystem *pZVar4;
  Zombie *in_x1;
  ZombieTosserSubSystem *pZVar7;
  undefined4 uVar5;
  float fVar6;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
  fVar6 = *(float *)(pRVar2 + 0x4c);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar6 = (float)ZombieTosserSubSystem::CaculateTargetButNotOffScreen(in_x1,(float)iVar1 * fVar6);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)in_x1);
  if (*pfVar3 < fVar6) {
    pZVar4 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
                    /* WARNING: Load size is inaccurate */
    pZVar7._0_4_ = *(ZombieTosserSubSystem **)(pRVar2 + 0x54);
    uVar5 = *(undefined4 *)(pRVar2 + 0x50);
    RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
    ZombieTosserSubSystem::LaunchZombie(pZVar7._0_4_,uVar5,pZVar4);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    MessageRouter::Broadcast<KnockbackReason,KnockbackReason>
              ((MessageRouter *)gMessageRouter,Message::ZombieKnockedBackByPlayer,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecurityGourdModule::getWinningZombie() */

void __thiscall SecurityGourdModule::getWinningZombie(SecurityGourdModule *this)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  Zombie *this_00;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x18));
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x29);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
LAB_036e7f10:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
    this_00 = (Zombie *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    cVar1 = Zombie::IsWinningZombie(this_00);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x18),(RtWeakPtr *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      goto LAB_036e7f10;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* SecurityGourdModule::TriggerEffect() */

void __thiscall SecurityGourdModule::TriggerEffect(SecurityGourdModule *this)

{
  char cVar1;
  undefined4 uVar2;
  
  getWinningZombie(this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x18));
  uVar2 = 4;
  if (cVar1 != '\0') {
    uVar2 = 1;
  }
  setState_SecurityGourdState(this,uVar2);
  Board::BeginPlayingLossAversionUpsellEffect(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecurityGourdModule::knockbackZombies() */

void __thiscall SecurityGourdModule::knockbackZombies(SecurityGourdModule *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  long lVar5;
  Zombie *extraout_x0;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if ((0.0 < *(float *)(pRVar4 + 0x4c)) && (iVar1 = *(int *)(pRVar4 + 0x48), iVar1 != 0)) {
    iVar3 = BoardConstants::NUMBER_OF_ROWS();
    uVar7 = 0;
    Sexy::Insets::Insets(aIStack_30,-6,0,iVar1 + 6,iVar3);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
               aIStack_30);
    uVar8 = local_20;
    lVar5 = FUN_036e6ee0(local_20,local_18);
    if (lVar5 != 0) {
      do {
        FUN_036e6eec(uVar8,uVar7);
        nop();
        cVar2 = shouldKnockbackZombie(this,extraout_x0);
        if (cVar2 != '\0') {
          knockbackZombie((Zombie *)this);
        }
        uVar8 = local_20;
        uVar7 = uVar7 + 1;
        uVar6 = FUN_036e6ee0(local_20,local_18);
      } while (uVar7 < uVar6);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecurityGourdModule::destroyZombie(Zombie*, DamageTypeFlags) */

void __thiscall
SecurityGourdModule::destroyZombie(undefined8 param_1_00,long *param_1,undefined8 param_3)

{
  undefined8 uVar1;
  DamageInfo aDStack_68 [16];
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68);
  uVar1 = operator|(2,0x4000);
  local_58 = operator|(uVar1,param_3);
  (**(code **)(*param_1 + 0x120))(param_1,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecurityGourdModule::destroyZombies() */

void __thiscall SecurityGourdModule::destroyZombies(SecurityGourdModule *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  Zombie *extraout_x0;
  ulong uVar9;
  ulong uVar10;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x18));
  if (bVar2) {
    uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18))
    ;
    uVar7 = operator|(4,0x200000000000);
    destroyZombie(this,uVar6,uVar7);
    iVar1 = *(int *)(pRVar5 + 0x40);
  }
  else {
    iVar1 = *(int *)(pRVar5 + 0x40);
  }
  if (iVar1 != 0) {
    iVar4 = BoardConstants::NUMBER_OF_ROWS();
    uVar10 = 0;
    Sexy::Insets::Insets(aIStack_30,-4,0,iVar1 + 4,iVar4);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
               aIStack_30);
    uVar6 = local_20;
    lVar8 = FUN_036e6ee0(local_20,local_18);
    if (lVar8 != 0) {
      do {
        FUN_036e6eec(uVar6,uVar10);
        nop();
        cVar3 = shouldDestroyZombie(this,extraout_x0);
        if (cVar3 != '\0') {
          destroyZombie(this,extraout_x0,0);
        }
        uVar6 = local_20;
        uVar10 = uVar10 + 1;
        uVar9 = FUN_036e6ee0(local_20,local_18);
      } while (uVar10 < uVar9);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecurityGourdModule::registerForEvents() */

void __thiscall SecurityGourdModule::registerForEvents(SecurityGourdModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,update);
  Sexy::Delegate0::Delegate0<SecurityGourdModule,void(SecurityGourdModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,update);
  Sexy::Delegate0::Delegate0<SecurityGourdModule,void(SecurityGourdModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLossAversionUpsellUpdate(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecurityGourdModule::doExtraActionsToAllZombies() */

void __thiscall SecurityGourdModule::doExtraActionsToAllZombies(SecurityGourdModule *this)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  long lVar3;
  long *extraout_x0;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  string asStack_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar7 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,2);
  DamageInfo::DamageInfo(aDStack_68);
  DamageInfo::AddCondition((DamageInfo *)0x40000000,aDStack_68,2);
  uVar4 = local_80;
  lVar3 = FUN_036e6ee0(local_80,local_78);
  if (lVar3 != 0) {
    do {
      FUN_036e6eec(uVar4,uVar7);
      nop();
      (**(code **)(*extraout_x0 + 0x298))(0x40000000);
      uVar4 = FUN_036e7a70(*(undefined8 *)(pRVar2 + 0x60));
      uVar5 = FUN_036e7ac0(*(undefined8 *)(pRVar2 + 0x68));
      Zombie::GetClassType();
      local_90 = std::
                 find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar4,uVar5,asStack_98);
      local_88 = FUN_036e7ac0(*(undefined8 *)(pRVar2 + 0x68));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_90,(__normal_iterator *)&local_88);
      std::string::~string(asStack_98);
      if (bVar1) {
        destroyZombie(this,extraout_x0,0);
      }
      uVar4 = local_80;
      uVar7 = uVar7 + 1;
      uVar6 = FUN_036e6ee0(local_80,local_78);
    } while (uVar7 < uVar6);
  }
  DamageInfo::~DamageInfo(aDStack_68);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* SecurityGourdModule::doGameplayEffect() */

void __thiscall SecurityGourdModule::doGameplayEffect(SecurityGourdModule *this)

{
  destroyZombies(this);
  knockbackZombies(this);
  resetPlantCooldowns(this);
  doExtraActionsToAllZombies(this);
  return;
}


/* SecurityGourdModule::HandleSuperFSMAction_SecurityGourdState(SecurityGourdState, StateAction) */

void SecurityGourdModule::HandleSuperFSMAction_SecurityGourdState(void)

{
  return;
}


/* SecurityGourdModule::initializeStateMachine() */

void __thiscall SecurityGourdModule::initializeStateMachine(SecurityGourdModule *this)

{
  *(undefined4 *)(this + 0x13e0) = 0xffffffff;
  setState_SecurityGourdState(this,0);
  return;
}


/* SecurityGourdModule::onVineDownEffectComplete(StandaloneEffect*) */

void SecurityGourdModule::onVineDownEffectComplete(StandaloneEffect *param_1)

{
  setState_SecurityGourdState((SecurityGourdModule *)param_1,2);
  return;
}


/* SecurityGourdModule::onGourdDropEffectComplete(StandaloneEffect*) */

void SecurityGourdModule::onGourdDropEffectComplete(StandaloneEffect *param_1)

{
  setState_SecurityGourdState((SecurityGourdModule *)param_1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecurityGourdModule::GetLayerToShow(ZombieSizeType) */

void SecurityGourdModule::GetLayerToShow(string *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  char *__s;
  
  lVar1 = ___stack_chk_guard;
  if (param_3 != 1) {
    if (param_3 == 0) {
      __s = "vine_wrap_imp";
      goto LAB_036e94e4;
    }
    if (param_3 == 2) {
      __s = "vine_wrap_gargantuar";
      goto LAB_036e94e4;
    }
  }
  __s = "vine_wrap_basic";
LAB_036e94e4:
  std::string::string(param_1,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecurityGourdModule::GetVineDownOffsetForSize(ZombieSizeType) */

void SecurityGourdModule::GetVineDownOffsetForSize(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,0.0,64.0,0.0);
  local_18 = local_28;
  uVar2 = local_18;
  local_10 = local_20;
  local_18._0_4_ = (undefined4)local_28;
  uVar1 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar3 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecurityGourdModule::GetVineWrapOffsetForSize(ZombieSizeType) */

void __thiscall SecurityGourdModule::GetVineWrapOffsetForSize(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 1) {
    fVar4 = 5.0;
    fVar5 = -10.0;
  }
  else {
    if (param_2 == 0) {
      fVar5 = -28.0;
    }
    else if (param_2 == 2) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = 64.0;
    }
    fVar4 = 0.0;
  }
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,fVar4,fVar5,0.0);
  local_18 = local_28;
  uVar2 = local_18;
  local_10 = local_20;
  local_18._0_4_ = (undefined4)local_28;
  uVar1 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar3 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_20);
}


/* SecurityGourdModule::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void SecurityGourdModule::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"use_action");
  if (!bVar1) {
    return;
  }
  setState_SecurityGourdState((SecurityGourdModule *)param_1,5);
  return;
}


/* SecurityGourdModule::updateEffect(Sexy::RtWeakPtr<Effect_PopAnim>) */

void __thiscall SecurityGourdModule::updateEffect(undefined8 param_1,RtMixedPtrBase *param_2)

{
  char cVar1;
  StandaloneEffect *this;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 == '\0') {
    return;
  }
  this = (StandaloneEffect *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  StandaloneEffect::Update(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecurityGourdModule::update() */

void __thiscall SecurityGourdModule::update(SecurityGourdModule *this)

{
  undefined4 uVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_036e937c(*(undefined4 *)(this + 0x13e0));
  (**(code **)(*(long *)this + 0xa0))(this,uVar1,2);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x13c8));
  updateEffect(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x13b8));
  updateEffect(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x13c0));
  updateEffect(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x13d0));
  updateEffect(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x13d8));
  updateEffect(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SecurityGourdModule::onVinesEffectComplete(StandaloneEffect*) */

void SecurityGourdModule::onVinesEffectComplete(StandaloneEffect *param_1)

{
  float fVar1;
  
  param_1[0x1404] = (StandaloneEffect)0x1;
  fVar1 = (float)PVZ_T();
  if (fVar1 < *(float *)(param_1 + 0x13e8)) {
    return;
  }
  setState_SecurityGourdState((SecurityGourdModule *)param_1,3);
  return;
}


/* SecurityGourdModule::onVineUpEffectComplete(StandaloneEffect*) */

void SecurityGourdModule::onVineUpEffectComplete(StandaloneEffect *param_1)

{
  float fVar1;
  
  param_1[0x1404] = (StandaloneEffect)0x1;
  fVar1 = (float)PVZ_T();
  if (fVar1 < *(float *)(param_1 + 0x13e8)) {
    return;
  }
  setState_SecurityGourdState((SecurityGourdModule *)param_1,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecurityGourdModule::ShowAnimationLayerForZombieSize(ZombieSizeType) */

void SecurityGourdModule::ShowAnimationLayerForZombieSize(long param_1)

{
  int iVar1;
  UIWidget *pUVar2;
  PopAnimRig *pPVar3;
  Zombie *this;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar4;
  int iVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = 0;
  do {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x13d0));
    pPVar3 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar2);
    iVar1 = iVar5 + 1;
    GetLayerToShow(asStack_10,param_1,iVar5);
    PopAnimRig::SetLayerVisibility(pPVar3,asStack_10,false);
    std::string::~string(asStack_10);
    iVar5 = iVar1;
  } while (iVar1 != 3);
  pUVar2 = (UIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x13d0));
  pPVar3 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar2);
  this = (Zombie *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x18))
  ;
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(this);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  GetLayerToShow(asStack_10,param_1,*(undefined4 *)(lVar4 + 0x58));
  PopAnimRig::SetLayerVisibility(pPVar3,asStack_10,true);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecurityGourdModule::HandleStateMachine_SecurityGourdState(SecurityGourdState, StateAction) */

void SecurityGourdModule::HandleStateMachine_SecurityGourdState
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               ReceivedDataCallback *param_4,uint param_5,int param_6)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *pRVar1;
  RtWeakPtr<SpartanBambooMatrixSystem> *this;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  bool bVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  Effect_PopAnim *pEVar6;
  PopAnim *pPVar7;
  StandaloneEffect *pSVar8;
  UIWidget *pUVar9;
  TimeChallengeEndLevelUI *this_01;
  ulong uVar10;
  PopAnimRig *this_02;
  SexyVector3 *pSVar11;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar12;
  long lVar13;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var14;
  undefined8 *puVar15;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar16;
  Zombie *pZVar17;
  Point *extraout_x1;
  ReceivedDataCallback *this_03;
  code *pcVar18;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  *pRVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  Point aPStack_d0 [8];
  int local_c8;
  int local_c4;
  RtMixedPtr aRStack_c0 [8];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  Delegate2<SecurityGourdState,StateAction> aDStack_80 [48];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_4,HandleSuperFSMAction_SecurityGourdState);
  Sexy::Delegate2<SecurityGourdState,StateAction>::
  Delegate2<SecurityGourdModule,void(SecurityGourdModule::*)(SecurityGourdState,StateAction)>
            (aDStack_80,(RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
  switch(param_5) {
  default:
    Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_80,(char *)(ulong)param_5);
    break;
  case 1:
    if (param_6 == 1) {
      pRVar16 = (RtWeakPtr<Sexy::ResourceInfo> *)(param_4 + 0x18);
      pRVar1 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(param_4 + 0x13b8);
      this = (RtWeakPtr<SpartanBambooMatrixSystem> *)(param_4 + 0x13c0);
      this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(param_4 + 0x13c8);
      pZVar17 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
      pRVar12 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(pZVar17);
      lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar12);
      local_b8 = GetVineDownOffsetForSize(param_4,*(undefined4 *)(lVar13 + 0x58));
      local_b4 = param_2;
      local_b0 = param_3;
      Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(pRVar1,(RtWeakPtrBase *)&local_98);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
      pEVar6 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      std::string::string((string *)&local_a8,
                          "POPANIM_SECURITY_GOURDS_SECURITY_GOURD_DROPVINES_LINE");
      GetPAMByName((string *)&local_a8);
      pPVar7 = (PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
      Effect_PopAnim::CreatePopAnimRig(pEVar6,pPVar7,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
      std::string::~string((string *)&local_a8);
      nop();
      pEVar6 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      Effect_PopAnim::SetCentered(pEVar6,true);
      p_Var14 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
      puVar15 = (undefined8 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost(p_Var14);
      local_a8 = *puVar15;
      local_a0 = *(undefined4 *)(puVar15 + 1);
      pSVar8 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      local_98 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_a8,(SexyVector3 *)&local_b8);
      local_94 = param_2;
      local_90 = param_3;
      StandaloneEffect::SetBoardSpaceOrigin(pSVar8,(SexyVector3 *)&local_98,-1);
      pSVar8 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_c8);
      std::string::string((string *)&local_98,"onVineDownEffectComplete");
      RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,
                 (RtId *)aRStack_c0,(RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
      StandaloneEffect::SetCompletionCallback
                (pSVar8,(RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)&local_98);
      nop();
      Sexy::RtId::~RtId((RtId *)aRStack_c0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_c8);
      pEVar6 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      std::string::string((string *)&local_98,"animation");
      Effect_PopAnim::PlaySingleAnimation(pEVar6,(RtWeakPtr<Sexy::ResourceInfo> *)&local_98,0);
      std::string::~string((string *)&local_98);
      nop();
      pSVar8 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      StandaloneEffect::SetKeepAlive(pSVar8,true);
      Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this,(RtWeakPtrBase *)&local_98);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
      pEVar6 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      std::string::string((string *)aRStack_c0,
                          "POPANIM_SECURITY_GOURDS_SECURITY_GOURD_DROPVINES_TOP");
      GetPAMByName((string *)aRStack_c0);
      pPVar7 = (PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
      Effect_PopAnim::CreatePopAnimRig(pEVar6,pPVar7,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
      std::string::~string((string *)aRStack_c0);
      nop();
      pEVar6 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      Effect_PopAnim::SetCentered(pEVar6,true);
      pSVar8 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      local_98 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_a8,(SexyVector3 *)&local_b8);
      local_94 = param_2;
      local_90 = param_3;
      StandaloneEffect::SetBoardSpaceOrigin(pSVar8,(SexyVector3 *)&local_98,-1);
      pEVar6 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      std::string::string((string *)&local_98,"animation");
      Effect_PopAnim::PlaySingleAnimation(pEVar6,(RtWeakPtr<Sexy::ResourceInfo> *)&local_98,0);
      std::string::~string((string *)&local_98);
      nop();
      pSVar8 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      StandaloneEffect::SetKeepAlive(pSVar8,true);
      lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
      iVar4 = (**(code **)(*plVar5 + 0x170))();
      FUN_036e9370(lVar13 + 0x1c,iVar4 + 1);
      Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)&local_98);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
      pEVar6 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string((string *)aRStack_c0,
                          "POPANIM_SECURITY_GOURDS_SECURITY_GOURD_DROPVINES_BOTTOM");
      GetPAMByName((string *)aRStack_c0);
      pPVar7 = (PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
      Effect_PopAnim::CreatePopAnimRig(pEVar6,pPVar7,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
      std::string::~string((string *)aRStack_c0);
      nop();
      pEVar6 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Effect_PopAnim::SetCentered(pEVar6,true);
      pSVar8 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      local_98 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_a8,(SexyVector3 *)&local_b8);
      local_94 = param_2;
      local_90 = param_3;
      StandaloneEffect::SetBoardSpaceOrigin(pSVar8,(SexyVector3 *)&local_98,-1);
      pEVar6 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string((string *)&local_98,"animation");
      Effect_PopAnim::PlaySingleAnimation(pEVar6,(RtWeakPtr<Sexy::ResourceInfo> *)&local_98,0);
      std::string::~string((string *)&local_98);
      nop();
      pSVar8 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      StandaloneEffect::SetKeepAlive(pSVar8,true);
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
      (**(code **)(*plVar5 + 0x268))();
      break;
    }
    if (param_6 == 0) break;
    if (param_6 != 3) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_80,(char *)0x1);
      break;
    }
    this_03 = param_4 + 0x13c0;
    param_4 = param_4 + 0x13c8;
LAB_036e9c38:
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_03);
    (**(code **)(*plVar5 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_03);
    goto LAB_036e9c54;
  case 2:
    if (param_6 == 1) {
      pRVar16 = (RtWeakPtr<Sexy::ResourceInfo> *)(param_4 + 0x18);
      pRVar1 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(param_4 + 0x13d0);
      pZVar17 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
      pRVar12 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(pZVar17);
      lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar12);
      local_b8 = GetVineWrapOffsetForSize
                           ((SecurityGourdModule *)param_4,*(undefined4 *)(lVar13 + 0x58));
      local_b4 = param_2;
      local_b0 = param_3;
      Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(pRVar1,(RtWeakPtrBase *)&local_98);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
      pEVar6 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      std::string::string((string *)&local_a8,"POPANIM_SECURITY_GOURDS_SECURITY_GOURD_VINES");
      GetPAMByName((string *)&local_a8);
      pPVar7 = (PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
      Effect_PopAnim::CreatePopAnimRig(pEVar6,pPVar7,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
      std::string::~string((string *)&local_a8);
      nop();
      pEVar6 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      Effect_PopAnim::SetCentered(pEVar6,true);
      p_Var14 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
      puVar15 = (undefined8 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost(p_Var14);
      local_a8 = *puVar15;
      local_a0 = *(undefined4 *)(puVar15 + 1);
      pSVar8 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      local_98 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_a8,(SexyVector3 *)&local_b8);
      local_94 = param_2;
      local_90 = param_3;
      StandaloneEffect::SetBoardSpaceOrigin(pSVar8,(SexyVector3 *)&local_98,-1);
      pSVar8 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_c8);
      std::string::string((string *)&local_98,"onVinesEffectComplete");
      RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,
                 (RtId *)aRStack_c0,(RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
      StandaloneEffect::SetCompletionCallback(pSVar8,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)&local_98);
      nop();
      Sexy::RtId::~RtId((RtId *)aRStack_c0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_c8);
      pEVar6 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      std::string::string((string *)&local_98,"animation");
      Effect_PopAnim::PlaySingleAnimation(pEVar6,(RtWeakPtr<Sexy::ResourceInfo> *)&local_98,0);
      std::string::~string((string *)&local_98);
      nop();
      pSVar8 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      StandaloneEffect::SetKeepAlive(pSVar8,true);
      lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
      iVar4 = (**(code **)(*plVar5 + 0x170))();
      FUN_036e9370(lVar13 + 0x1c,iVar4 + 1);
      pZVar17 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
      pRVar16 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(pZVar17);
      lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
      ShowAnimationLayerForZombieSize(param_4,*(undefined4 *)(lVar13 + 0x58));
      fVar20 = (float)PVZ_T();
      *(float *)(param_4 + 0x13e8) = fVar20 + 1.0;
      param_4[0x1404] = (ReceivedDataCallback)0x0;
    }
    else if (param_6 != 0) {
      if (param_6 == 2) {
        fVar20 = (float)PVZ_T();
        if ((*(float *)(param_4 + 0x13e8) < fVar20) &&
           (param_4[0x1404] != (ReceivedDataCallback)0x0)) {
          setState_SecurityGourdState((SecurityGourdModule *)param_4,3);
        }
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_80,(char *)0x2);
      }
    }
    break;
  case 3:
    switch(param_6) {
    case 0:
      break;
    case 1:
      pRVar16 = (RtWeakPtr<Sexy::ResourceInfo> *)(param_4 + 0x13b8);
      pRVar12 = (RtWeakPtr<Sexy::ResourceInfo> *)(param_4 + 0x13d0);
      pSVar8 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_b8);
      std::string::string((string *)&local_98,"onVineUpEffectComplete");
      RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,
                 (RtId *)&local_a8,(RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
      StandaloneEffect::SetCompletionCallback(pSVar8,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)&local_98);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_a8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_b8);
      pEVar6 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
      std::string::string((string *)&local_98,"animation3");
      Effect_PopAnim::PlaySingleAnimation(pEVar6,(RtWeakPtr<Sexy::ResourceInfo> *)&local_98,0);
      std::string::~string((string *)&local_98);
      nop();
      pSVar8 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
      StandaloneEffect::SetKeepAlive(pSVar8,true);
      pEVar6 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar12);
      std::string::string((string *)&local_98,"animation3");
      Effect_PopAnim::PlaySingleAnimation(pEVar6,(RtWeakPtr<Sexy::ResourceInfo> *)&local_98,0);
      std::string::~string((string *)&local_98);
      nop();
      pSVar8 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar12);
      RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50);
      StandaloneEffect::SetCompletionCallback(pSVar8,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      pSVar8 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar12);
      StandaloneEffect::SetKeepAlive(pSVar8,true);
      fVar20 = (float)PVZ_T();
      *(float *)(param_4 + 0x13e4) = fVar20 + 0.05;
      *(float *)(param_4 + 0x13e8) = fVar20 + 0.05 + 1.0;
      p_Var14 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(param_4 + 0x18));
      pSVar11 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost(p_Var14);
      Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x13ec),pSVar11);
      EATextSquish::Vec3::Vec3
                ((Vec3 *)&local_98,*(float *)(param_4 + 0x13ec),*(float *)(param_4 + 0x13f0),
                 *(float *)(param_4 + 0x13f4) + 2000.0);
      Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x13f8),(SexyVector3 *)&local_98);
      param_4[0x1404] = (ReceivedDataCallback)0x0;
      break;
    case 2:
      fVar20 = (float)PVZ_T();
      if (*(float *)(param_4 + 0x13e4) <= fVar20) {
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_4 + 0x18));
        uVar23 = *(undefined4 *)(param_4 + 0x13e4);
        uVar22 = *(undefined4 *)(param_4 + 0x13e8);
        pcVar18 = *(code **)(*plVar5 + 0x78);
        uVar21 = PVZ_T();
        local_94 = uVar22;
        local_98 = CurveLerp(uVar23,param_4 + 0x13ec,param_4 + 0x13f8,1);
        local_90 = uVar21;
        (*pcVar18)(plVar5,(RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
        iVar4 = BoardTransforms::GridToBoardSpaceYUnbounded(-4);
        p_Var14 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(param_4 + 0x18));
        lVar13 = std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(p_Var14);
        if (*(float *)(lVar13 + 4) - *(float *)(lVar13 + 8) <= (float)iVar4) {
          uVar21 = PVZ_T();
          *(undefined4 *)(param_4 + 0x13e8) = uVar21;
        }
      }
      fVar20 = (float)PVZ_T();
      if ((*(float *)(param_4 + 0x13e8) <= fVar20) && (param_4[0x1404] != (ReceivedDataCallback)0x0)
         ) {
        setState_SecurityGourdState((SecurityGourdModule *)param_4,4);
      }
      break;
    case 3:
      this_03 = param_4 + 0x13b8;
      param_4 = param_4 + 0x13d0;
      goto LAB_036e9c38;
    default:
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_80,(char *)0x3);
    }
    break;
  case 4:
    if (param_6 != 0) {
      if (param_6 == 1) {
        pRVar1 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(param_4 + 0x13d8);
        iVar4 = 0;
        Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(pRVar1,(RtWeakPtrBase *)&local_98);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
        pEVar6 = (Effect_PopAnim *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        std::string::string((string *)&local_a8,"POPANIM_SECURITY_GOURDS_SECURITY_GOURD_DROP");
        GetPAMByName((string *)&local_a8);
        pPVar7 = (PopAnim *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
        Effect_PopAnim::CreatePopAnimRig(pEVar6,pPVar7,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
        std::string::~string((string *)&local_a8);
        nop();
        pEVar6 = (Effect_PopAnim *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        Effect_PopAnim::SetCentered(pEVar6,true);
        EATextSquish::Vec3::Vec3((Vec3 *)&local_a8,0.0,192.0,0.0);
        Sexy::Point::Point(aPStack_d0,0,2);
        BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)aPStack_d0,extraout_x1);
        pSVar8 = (StandaloneEffect *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        EATextSquish::Vec3::Vec3
                  ((Vec3 *)&local_98,(float)local_c8 + (float)local_a8,
                   (float)local_c4 + local_a8._4_4_,0.0);
        StandaloneEffect::SetBoardSpaceOrigin(pSVar8,(SexyVector3 *)&local_98,-1);
        pSVar8 = (StandaloneEffect *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_c0);
        std::string::string((string *)&local_98,"onGourdDropEffectComplete");
        RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,
                   (RtId *)&local_b8,(RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
        StandaloneEffect::SetCompletionCallback(pSVar8,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string((string *)&local_98);
        nop();
        Sexy::RtId::~RtId((RtId *)&local_b8);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c0)
        ;
        pUVar9 = (UIWidget *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        this_01 = (TimeChallengeEndLevelUI *)UIWidget::GetAtlasImage(pUVar9);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  (param_4,onPopAnimCommand);
        Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
        Delegate4<SecurityGourdModule,void(SecurityGourdModule::*)(std::string_const&,float,std::string_const&,std::string_const&)>
                  ((Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *)
                   aRStack_50,(RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
        TimeChallengeEndLevelUI::SetContinueCallBack(this_01,aRStack_50);
        pEVar6 = (Effect_PopAnim *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        std::string::string((string *)&local_98,"animation");
        Effect_PopAnim::PlaySingleAnimation(pEVar6,(RtWeakPtr<Sexy::ResourceInfo> *)&local_98,0);
        std::string::~string((string *)&local_98);
        nop();
        pSVar8 = (StandaloneEffect *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        StandaloneEffect::SetKeepAlive(pSVar8,true);
        uVar10 = Sexy::MTRand::Next((MTRand *)(param_4 + 0x20));
        std::string::string((string *)aRStack_50,"security_gourd1");
        nop();
        std::string::string(asStack_48,"security_gourd2");
        nop();
        std::string::string(asStack_40,"security_gourd3");
        nop();
        pRVar19 = aRStack_50;
        do {
          pUVar9 = (UIWidget *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1)
          ;
          this_02 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar9);
          bVar2 = iVar4 == (int)uVar10 + (int)(uVar10 / 3) * -3;
          iVar4 = iVar4 + 1;
          PopAnimRig::SetLayerVisibility(this_02,(string *)pRVar19,bVar2);
          pRVar19 = (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                     *)(pRVar19 + 8);
        } while (iVar4 != 3);
        std::string::~string(asStack_40);
        std::string::~string(asStack_48);
        std::string::~string((string *)aRStack_50);
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_80,&DAT_00000004);
      }
    }
    break;
  case 5:
    if (param_6 == 1) {
      Board::ResumeGameplay(*(Board **)(gLawnApp + 0x9f0));
      Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),false);
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_4 + 0x18));
      if (cVar3 != '\0') {
        pZVar17 = (Zombie *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(param_4 + 0x18));
        Zombie::SetIgnoresAllDamage(pZVar17,false);
      }
      doGameplayEffect((SecurityGourdModule *)param_4);
      break;
    }
    if (param_6 == 0) break;
    if (param_6 != 3) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_80,(char *)0x5);
      break;
    }
    param_4 = param_4 + 0x13d8;
LAB_036e9c54:
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_4);
    (**(code **)(*plVar5 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)param_4);
    break;
  case 0xffffffff:
    if (param_6 != 0) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_80,(char *)0xffffffff);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

