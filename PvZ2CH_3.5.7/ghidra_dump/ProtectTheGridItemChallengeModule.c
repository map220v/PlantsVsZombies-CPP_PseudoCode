// Class: ProtectTheGridItemChallengeModule


/* ProtectTheGridItemChallengeModule::isWaitingForLastStand() */

byte ProtectTheGridItemChallengeModule::isWaitingForLastStand(void)

{
  byte bVar1;
  LastStandMinigameModule *this;
  
  if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
     (this = BoardHelpers::GetLevelModuleByClass<LastStandMinigameModule>(),
     this != (LastStandMinigameModule *)0x0)) {
    bVar1 = LastStandMinigameModule::IsPlantingDone(this);
    return bVar1 ^ 1;
  }
  return 0;
}


/* ProtectTheGridItemChallengeModule::cleanUp() */

void ProtectTheGridItemChallengeModule::cleanUp(void)

{
  return;
}


/* ProtectTheGridItemChallengeModule::onGameplayEnded() */

void __thiscall
ProtectTheGridItemChallengeModule::onGameplayEnded(ProtectTheGridItemChallengeModule *this)

{
  char cVar1;
  
  cVar1 = FUN_04c9a80c(*(undefined4 *)(this + 0x1c));
  if (cVar1 == '\0') {
    return;
  }
  Challenge::Complete((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectTheGridItemChallengeModule::StaticClassInit() */

void ProtectTheGridItemChallengeModule::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SpawnedGridItem");
    (*pcVar3)(plVar2,asStack_10,FUN_04c9bf40,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ProtectTheGridItemChallengeModule");
    (*pcVar3)(plVar2,asStack_10,FUN_04c9c13c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ProtectTheGridItemChallengeModule::StaticGetClass() */

long * ProtectTheGridItemChallengeModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ProtectTheGridItemChallengeModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ProtectTheGridItemChallengeModule::onUpdate() */

void __thiscall ProtectTheGridItemChallengeModule::onUpdate(ProtectTheGridItemChallengeModule *this)

{
  SpawnedGridItem *this_00;
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  while( true ) {
    uVar3 = *(undefined8 *)(this + 0x20);
    uVar1 = FUN_04c9a8e4(uVar3,*(undefined8 *)(this + 0x28));
    if (uVar1 <= uVar2) break;
    this_00 = (SpawnedGridItem *)FUN_04c9a914(uVar3,uVar2);
    SpawnedGridItem::SyncTile(this_00);
    uVar2 = uVar2 + 1;
  }
  return;
}


/* ProtectTheGridItemChallengeModule::hasFailed() */

bool __thiscall
ProtectTheGridItemChallengeModule::hasFailed(ProtectTheGridItemChallengeModule *this)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  RtMixedPtrBase *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  GridItem *this_02;
  ResilienceTutorialIntroProperties *pRVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  float fVar8;
  
  uVar6 = *(undefined8 *)(this + 0x20);
  uVar3 = FUN_04c9a8e4(uVar6,*(undefined8 *)(this + 0x28));
  bVar2 = false;
  if (uVar3 != 0) {
    iVar7 = 0;
    for (uVar5 = 0; uVar5 < uVar3; uVar5 = uVar5 + 1) {
      this_00 = (RtMixedPtrBase *)FUN_04c9a914(uVar6,uVar5);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar1 != '\0') {
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04c9a914(*(undefined8 *)(this + 0x20),uVar5);
        this_02 = (GridItem *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        if (*(code **)(*(long *)this_02 + 0x1d8) == GridItem::GetHitpoints) {
          fVar8 = (float)GridItem::GetHitpoints(this_02);
        }
        else {
          fVar8 = (float)(**(code **)(*(long *)this_02 + 0x1d8))();
        }
        iVar7 = iVar7 + (uint)(0.0 < fVar8);
      }
      uVar6 = *(undefined8 *)(this + 0x20);
      uVar3 = FUN_04c9a8e4(uVar6,*(undefined8 *)(this + 0x28));
    }
    pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    bVar2 = iVar7 < *(int *)(pRVar4 + 0x58);
  }
  return bVar2;
}


/* ProtectTheGridItemChallengeModule::checkWinCondition() */

byte __thiscall
ProtectTheGridItemChallengeModule::checkWinCondition(ProtectTheGridItemChallengeModule *this)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = RiftUtils::IsPlayingRiftLevel();
  if ((bVar1 == 0) &&
     (lVar2 = FUN_04c9a8e4(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28)), lVar2 != 0))
  {
    bVar1 = hasFailed(this);
    return bVar1 ^ 1;
  }
  return bVar1;
}


/* ProtectTheGridItemChallengeModule::GetProgressDescription() const */

void ProtectTheGridItemChallengeModule::GetProgressDescription(void)

{
  char cVar1;
  LevelModule *in_x0;
  long lVar2;
  RtMixedPtrBase *this;
  ulong uVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  GridItem *this_01;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  float fVar8;
  
  uVar5 = 0;
  uVar6 = *(undefined8 *)(in_x0 + 0x20);
  uVar7 = 0;
  lVar2 = FUN_04c9a8e4(uVar6,*(undefined8 *)(in_x0 + 0x28));
  if (lVar2 != 0) {
    do {
      this = (RtMixedPtrBase *)FUN_04c9a920(uVar6,uVar5);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
      if (cVar1 != '\0') {
        this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04c9a920(*(undefined8 *)(in_x0 + 0x20),uVar5)
        ;
        this_01 = (GridItem *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        if (*(code **)(*(long *)this_01 + 0x1d8) == GridItem::GetHitpoints) {
          fVar8 = (float)GridItem::GetHitpoints(this_01);
        }
        else {
          fVar8 = (float)(**(code **)(*(long *)this_01 + 0x1d8))();
        }
        uVar7 = (ulong)((int)uVar7 + (uint)(0.0 < fVar8));
      }
      uVar5 = uVar5 + 1;
      uVar6 = *(undefined8 *)(in_x0 + 0x20);
      uVar3 = FUN_04c9a8e4(uVar6,*(undefined8 *)(in_x0 + 0x28));
    } while (uVar5 < uVar3);
  }
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  Sexy::StrFormat(L"[ %d / %d ]",uVar7,(ulong)*(uint *)(pRVar4 + 0x58));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectTheGridItemChallengeModule::addToRenderQueue(RenderQueue*) */

void __thiscall
ProtectTheGridItemChallengeModule::addToRenderQueue
          (ProtectTheGridItemChallengeModule *this,RenderQueue *param_1)

{
  undefined4 uVar1;
  long lVar2;
  ReceivedDataCallback *pRVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(this + 0x20);
    uVar4 = FUN_04c9a8e4(uVar6,*(undefined8 *)(this + 0x28));
    if (uVar4 <= uVar5) break;
    lVar2 = FUN_04c9a914(uVar6,uVar5);
    uVar1 = Board::MakeRenderOrder(0x61a85,*(undefined4 *)(lVar2 + 0xc),0);
    pRVar3 = (ReceivedDataCallback *)FUN_04c9a914(*(undefined8 *)(this + 0x20),uVar5);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (pRVar3,SpawnedGridItem::DrawTile);
    Sexy::Delegate1<Sexy::Graphics*>::
    Delegate1<SpawnedGridItem,void(SpawnedGridItem::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,uVar1,aDStack_38);
    uVar5 = uVar5 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ProtectTheGridItemChallengeModule::ProtectTheGridItemChallengeModule() */

void __thiscall
ProtectTheGridItemChallengeModule::ProtectTheGridItemChallengeModule
          (ProtectTheGridItemChallengeModule *this)

{
  Challenge::Challenge((Challenge *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06996b00;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  return;
}


/* ProtectTheGridItemChallengeModule::StaticNew() */

ProtectTheGridItemChallengeModule * ProtectTheGridItemChallengeModule::StaticNew(void)

{
  ProtectTheGridItemChallengeModule *this;
  
  this = ::operator_new(0x40);
  ProtectTheGridItemChallengeModule(this);
  return this;
}


/* ProtectTheGridItemChallengeModule::onGameplayStarted() */

void ProtectTheGridItemChallengeModule::onGameplayStarted(void)

{
  char cVar1;
  
  cVar1 = isWaitingForLastStand();
  if (cVar1 != '\0') {
    return;
  }
  Board::SetSoftPause(*(Board **)(gLawnApp + 0x9f0),false);
  FUN_04c9a8a4(*(long *)(gLawnApp + 0x9f0) + 0x887,1);
  return;
}


/* ProtectTheGridItemChallengeModule::~ProtectTheGridItemChallengeModule() */

void __thiscall
ProtectTheGridItemChallengeModule::~ProtectTheGridItemChallengeModule
          (ProtectTheGridItemChallengeModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06996b00;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  std::vector<SpawnedGridItem,std::allocator<SpawnedGridItem>>::~vector
            ((vector<SpawnedGridItem,std::allocator<SpawnedGridItem>> *)(this + 0x20));
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* ProtectTheGridItemChallengeModule::~ProtectTheGridItemChallengeModule() */

void __thiscall
ProtectTheGridItemChallengeModule::~ProtectTheGridItemChallengeModule
          (ProtectTheGridItemChallengeModule *this)

{
  ~ProtectTheGridItemChallengeModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectTheGridItemChallengeModule::handleGridItemLoss(std::string const&) */

void ProtectTheGridItemChallengeModule::handleGridItemLoss(string *param_1)

{
  char cVar1;
  bool bVar2;
  BaseChallengeModule *pBVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  BonusChallengeModule *pBVar6;
  string *local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04c9a80c(*(undefined4 *)(param_1 + 0x1c));
  if ((cVar1 == '\0') ||
     (cVar1 = hasFailed((ProtectTheGridItemChallengeModule *)param_1), cVar1 == '\0'))
  goto LAB_04c9c7fc;
  Challenge::Fail();
  pBVar3 = BoardHelpers::GetLevelModuleByClass<BaseChallengeModule>();
  if (pBVar3 == (BaseChallengeModule *)0x0) {
    MessageRouter::Broadcast<Challenge*,ProtectTheGridItemChallengeModule*>
              ((MessageRouter *)gMessageRouter,Message::ChallengeFailed,
               (ProtectTheGridItemChallengeModule *)param_1);
    goto LAB_04c9c7fc;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (**(code **)(*(long *)pBVar3 + 0xb0))(pBVar3,avStack_20);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  local_38 = param_1;
  local_30 = std::
             find<__gnu_cxx::__normal_iterator<Challenge**,std::vector<Challenge*,std::allocator<Challenge*>>>,ProtectTheGridItemChallengeModule*>
                       (uVar4,uVar5,&local_38);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  if (bVar2) {
    pBVar6 = BoardHelpers::GetLevelModuleByClass<BonusChallengeModule>();
    if (pBVar6 != (BonusChallengeModule *)0x0) {
      std::vector<Challenge*,std::allocator<Challenge*>>::clear
                ((vector<Challenge*,std::allocator<Challenge*>> *)avStack_20);
      (**(code **)(*(long *)pBVar6 + 0xb0))(pBVar6,avStack_20);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_20);
      local_38 = param_1;
      local_30 = std::
                 find<__gnu_cxx::__normal_iterator<Challenge**,std::vector<Challenge*,std::allocator<Challenge*>>>,ProtectTheGridItemChallengeModule*>
                           (uVar4,uVar5,&local_38);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
      if (!bVar2) goto LAB_04c9c8c4;
    }
    MessageRouter::Broadcast<Challenge*,ProtectTheGridItemChallengeModule*>
              ((MessageRouter *)gMessageRouter,Message::ChallengeFailed,
               (ProtectTheGridItemChallengeModule *)param_1);
  }
LAB_04c9c8c4:
  std::vector<Challenge*,std::allocator<Challenge*>>::~vector
            ((vector<Challenge*,std::allocator<Challenge*>> *)avStack_20);
LAB_04c9c7fc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectTheGridItemChallengeModule::onGridItemDestroyed(std::string const&) */

void ProtectTheGridItemChallengeModule::onGridItemDestroyed(string *param_1)

{
  char cVar1;
  bool bVar2;
  BaseChallengeModule *pBVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  BonusChallengeModule *pBVar6;
  string *psStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar1 = FUN_04c9a80c(*(undefined4 *)(param_1 + 0x1c));
  if ((cVar1 == '\0') ||
     (cVar1 = hasFailed((ProtectTheGridItemChallengeModule *)param_1), cVar1 == '\0'))
  goto LAB_04c9c7fc;
  Challenge::Fail();
  pBVar3 = BoardHelpers::GetLevelModuleByClass<BaseChallengeModule>();
  if (pBVar3 == (BaseChallengeModule *)0x0) {
    MessageRouter::Broadcast<Challenge*,ProtectTheGridItemChallengeModule*>
              ((MessageRouter *)gMessageRouter,Message::ChallengeFailed,
               (ProtectTheGridItemChallengeModule *)param_1);
    goto LAB_04c9c7fc;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (**(code **)(*(long *)pBVar3 + 0xb0))(pBVar3,avStack_20);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  psStack_38 = param_1;
  uStack_30 = std::
              find<__gnu_cxx::__normal_iterator<Challenge**,std::vector<Challenge*,std::allocator<Challenge*>>>,ProtectTheGridItemChallengeModule*>
                        (uVar4,uVar5,&psStack_38);
  uStack_28 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_20);
  bVar2 = __gnu_cxx::operator==((__normal_iterator *)&uStack_30,(__normal_iterator *)&uStack_28);
  if (bVar2) {
    pBVar6 = BoardHelpers::GetLevelModuleByClass<BonusChallengeModule>();
    if (pBVar6 != (BonusChallengeModule *)0x0) {
      std::vector<Challenge*,std::allocator<Challenge*>>::clear
                ((vector<Challenge*,std::allocator<Challenge*>> *)avStack_20);
      (**(code **)(*(long *)pBVar6 + 0xb0))(pBVar6,avStack_20);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_20);
      psStack_38 = param_1;
      uStack_30 = std::
                  find<__gnu_cxx::__normal_iterator<Challenge**,std::vector<Challenge*,std::allocator<Challenge*>>>,ProtectTheGridItemChallengeModule*>
                            (uVar4,uVar5,&psStack_38);
      uStack_28 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_20);
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)&uStack_30,(__normal_iterator *)&uStack_28)
      ;
      if (!bVar2) goto LAB_04c9c8c4;
    }
    MessageRouter::Broadcast<Challenge*,ProtectTheGridItemChallengeModule*>
              ((MessageRouter *)gMessageRouter,Message::ChallengeFailed,
               (ProtectTheGridItemChallengeModule *)param_1);
  }
LAB_04c9c8c4:
  std::vector<Challenge*,std::allocator<Challenge*>>::~vector
            ((vector<Challenge*,std::allocator<Challenge*>> *)avStack_20);
LAB_04c9c7fc:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectTheGridItemChallengeModule::AddResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) */

void __thiscall
ProtectTheGridItemChallengeModule::AddResourceRequirements
          (ProtectTheGridItemChallengeModule *this,set *param_1)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ulong uVar3;
  string *psVar4;
  GridItemType *this_00;
  ulong uVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  std::string::string(asStack_10,"ProtectThePlantChallengeModule");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"GridItemZombiePotion");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  for (uVar5 = 0;
      uVar3 = FUN_04c9a8b4(*(undefined8 *)(pRVar2 + 0x40),*(undefined8 *)(pRVar2 + 0x48)),
      uVar5 < uVar3; uVar5 = uVar5 + 1) {
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
    FUN_04c9a8dc(*(undefined8 *)(pRVar2 + 0x40),uVar5);
    ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar4);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_10);
    if (cVar1 != '\0') {
      this_00 = (GridItemType *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      GridItemType::AddResourceRequirements(this_00,param_1);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectTheGridItemChallengeModule::spawnGridItems() */

void __thiscall
ProtectTheGridItemChallengeModule::spawnGridItems(ProtectTheGridItemChallengeModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  long lVar2;
  string *psVar3;
  ulong uVar4;
  ulong uVar5;
  Board *pBVar6;
  undefined8 uVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  Point aPStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar5 = 0;
  while( true ) {
    uVar7 = *(undefined8 *)(pRVar1 + 0x40);
    uVar4 = FUN_04c9a8b4(uVar7,*(undefined8 *)(pRVar1 + 0x48));
    if (uVar4 <= uVar5) break;
    lVar2 = FUN_04c9a8dc(uVar7,uVar5);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
    ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar3);
    pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_40);
    Board::AddGridItem(pBVar6,aRStack_20,*(undefined4 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0xc),1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_38);
    Sexy::Point::Point(aPStack_30,*(int *)(lVar2 + 8),*(int *)(lVar2 + 0xc));
    SpawnedGridItem::SpawnedGridItem((SpawnedGridItem *)aRStack_20,aRStack_28,aPStack_30);
    std::vector<SpawnedGridItem,std::allocator<SpawnedGridItem>>::push_back
              ((vector<SpawnedGridItem,std::allocator<SpawnedGridItem>> *)(this + 0x20),
               (SpawnedGridItem *)aRStack_20);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    uVar5 = uVar5 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ProtectTheGridItemChallengeModule::onLoadComplete() */

void __thiscall
ProtectTheGridItemChallengeModule::onLoadComplete(ProtectTheGridItemChallengeModule *this)

{
  spawnGridItems(this);
  Board::SetSoftPause(*(Board **)(gLawnApp + 0x9f0),true);
  FUN_04c9a8a4(*(long *)(gLawnApp + 0x9f0) + 0x887,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectTheGridItemChallengeModule::registerForEvents() */

void __thiscall
ProtectTheGridItemChallengeModule::registerForEvents(ProtectTheGridItemChallengeModule *this)

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
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::
  Delegate0<ProtectTheGridItemChallengeModule,void(ProtectTheGridItemChallengeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,checkWinCondition);
  Sexy::Delegate0wRet<bool>::
  Delegate0wRet<ProtectTheGridItemChallengeModule,bool(ProtectTheGridItemChallengeModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterWinCondition(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cleanUp);
  Sexy::Delegate0::
  Delegate0<ProtectTheGridItemChallengeModule,void(ProtectTheGridItemChallengeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::
  Delegate0<ProtectTheGridItemChallengeModule,void(ProtectTheGridItemChallengeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::
  Delegate1<ProtectTheGridItemChallengeModule,void(ProtectTheGridItemChallengeModule::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::
  Delegate0<ProtectTheGridItemChallengeModule,void(ProtectTheGridItemChallengeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::
  Delegate0<ProtectTheGridItemChallengeModule,void(ProtectTheGridItemChallengeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGridItemDestroyed);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<ProtectTheGridItemChallengeModule,void(ProtectTheGridItemChallengeModule::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::GridItemDestroyed,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

