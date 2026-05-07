// Class: ProtectThePlantChallengeModule


/* ProtectThePlantChallengeModule::onGameplayEnded() */

void __thiscall
ProtectThePlantChallengeModule::onGameplayEnded(ProtectThePlantChallengeModule *this)

{
  char cVar1;
  
  cVar1 = FUN_04354ec4(*(undefined4 *)(this + 0x1c));
  if (cVar1 == '\0') {
    return;
  }
  Challenge::Complete((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectThePlantChallengeModule::StaticClassInit() */

void ProtectThePlantChallengeModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpawnedPlant");
    (*pcVar3)(plVar2,asStack_10,FUN_04356970,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ProtectThePlantChallengeModule");
    (*pcVar3)(plVar2,asStack_10,FUN_04356b6c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ProtectThePlantChallengeModule::StaticGetClass() */

long * ProtectThePlantChallengeModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ProtectThePlantChallengeModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ProtectThePlantChallengeModule::cleanUp() */

void __thiscall ProtectThePlantChallengeModule::cleanUp(ProtectThePlantChallengeModule *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x38);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* ProtectThePlantChallengeModule::onUpdate() */

void __thiscall ProtectThePlantChallengeModule::onUpdate(ProtectThePlantChallengeModule *this)

{
  SpawnedGridItem *this_00;
  ulong uVar1;
  PopAnimRig *this_01;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = 0;
  while( true ) {
    uVar3 = *(undefined8 *)(this + 0x20);
    uVar1 = FUN_04354fc4(uVar3,*(undefined8 *)(this + 0x28));
    if (uVar1 <= uVar2) break;
    this_00 = (SpawnedGridItem *)FUN_04354ff4(uVar3,uVar2);
    SpawnedGridItem::SyncTile(this_00);
    uVar2 = uVar2 + 1;
  }
  this_01 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38))
  ;
  fVar4 = (float)PVZ_T();
  fVar5 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(this_01,fVar4,fVar5);
  return;
}


/* ProtectThePlantChallengeModule::onPostLoad() */

void __thiscall ProtectThePlantChallengeModule::onPostLoad(ProtectThePlantChallengeModule *this)

{
  long lVar1;
  ResourceInfo *pRVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0x20);
    uVar3 = FUN_04354fc4(uVar5,*(undefined8 *)(this + 0x28));
    if (uVar3 <= uVar4) break;
    lVar1 = FUN_04354ff4(uVar5,uVar4);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x38));
    *(ResourceInfo **)(lVar1 + 0x10) = pRVar2;
    uVar4 = uVar4 + 1;
  }
  return;
}


/* ProtectThePlantChallengeModule::hasFailed() */

bool __thiscall ProtectThePlantChallengeModule::hasFailed(ProtectThePlantChallengeModule *this)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  RtMixedPtrBase *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  
  uVar7 = *(undefined8 *)(this + 0x20);
  uVar3 = FUN_04354fc4(uVar7,*(undefined8 *)(this + 0x28));
  bVar2 = false;
  if (uVar3 != 0) {
    iVar8 = 0;
    for (uVar6 = 0; uVar6 < uVar3; uVar6 = uVar6 + 1) {
      this_00 = (RtMixedPtrBase *)FUN_04354ff4(uVar7,uVar6);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar1 != '\0') {
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04354ff4(*(undefined8 *)(this + 0x20),uVar6);
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        iVar8 = iVar8 + (uint)(0.0 < *(float *)(lVar4 + 0xd8));
      }
      uVar7 = *(undefined8 *)(this + 0x20);
      uVar3 = FUN_04354fc4(uVar7,*(undefined8 *)(this + 0x28));
    }
    pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    bVar2 = iVar8 < *(int *)(pRVar5 + 0x58);
  }
  return bVar2;
}


/* ProtectThePlantChallengeModule::checkWinCondition() */

byte __thiscall
ProtectThePlantChallengeModule::checkWinCondition(ProtectThePlantChallengeModule *this)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = RiftUtils::IsPlayingRiftLevel();
  if ((bVar1 == 0) &&
     (lVar2 = FUN_04354fc4(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28)), lVar2 != 0))
  {
    bVar1 = hasFailed(this);
    return bVar1 ^ 1;
  }
  return bVar1;
}


/* ProtectThePlantChallengeModule::GetProgressDescription() const */

void ProtectThePlantChallengeModule::GetProgressDescription(void)

{
  char cVar1;
  LevelModule *in_x0;
  long lVar2;
  RtMixedPtrBase *this;
  ulong uVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar5 = 0;
  uVar6 = *(undefined8 *)(in_x0 + 0x20);
  uVar7 = 0;
  lVar2 = FUN_04354fc4(uVar6,*(undefined8 *)(in_x0 + 0x28));
  if (lVar2 != 0) {
    do {
      this = (RtMixedPtrBase *)FUN_04355000(uVar6,uVar5);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
      if (cVar1 != '\0') {
        this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04355000(*(undefined8 *)(in_x0 + 0x20),uVar5)
        ;
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        uVar7 = (ulong)((int)uVar7 + (uint)(0.0 < *(float *)(lVar2 + 0xd8)));
      }
      uVar5 = uVar5 + 1;
      uVar6 = *(undefined8 *)(in_x0 + 0x20);
      uVar3 = FUN_04354fc4(uVar6,*(undefined8 *)(in_x0 + 0x28));
    } while (uVar5 < uVar3);
  }
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  Sexy::StrFormat(L"[ %d / %d ]",uVar7,(ulong)*(uint *)(pRVar4 + 0x58));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectThePlantChallengeModule::addToRenderQueue(RenderQueue*) */

void __thiscall
ProtectThePlantChallengeModule::addToRenderQueue
          (ProtectThePlantChallengeModule *this,RenderQueue *param_1)

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
    uVar4 = FUN_04354fc4(uVar6,*(undefined8 *)(this + 0x28));
    if (uVar4 <= uVar5) break;
    lVar2 = FUN_04354ff4(uVar6,uVar5);
    uVar1 = Board::MakeRenderOrder(0x61a85,*(undefined4 *)(lVar2 + 0xc),0);
    pRVar3 = (ReceivedDataCallback *)FUN_04354ff4(*(undefined8 *)(this + 0x20),uVar5);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (pRVar3,SpawnedPlant::DrawTile);
    Sexy::Delegate1<Sexy::Graphics*>::Delegate1<SpawnedPlant,void(SpawnedPlant::*)(Sexy::Graphics*)>
              (aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,uVar1,aDStack_38);
    uVar5 = uVar5 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ProtectThePlantChallengeModule::ProtectThePlantChallengeModule() */

void __thiscall
ProtectThePlantChallengeModule::ProtectThePlantChallengeModule(ProtectThePlantChallengeModule *this)

{
  Challenge::Challenge((Challenge *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06834630;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  return;
}


/* ProtectThePlantChallengeModule::StaticNew() */

ProtectThePlantChallengeModule * ProtectThePlantChallengeModule::StaticNew(void)

{
  ProtectThePlantChallengeModule *this;
  
  this = ::operator_new(0x40);
  ProtectThePlantChallengeModule(this);
  return this;
}


/* ProtectThePlantChallengeModule::failChallenge(Plant*) */

void ProtectThePlantChallengeModule::failChallenge(Plant *param_1)

{
  char cVar1;
  RichManUIMgr *this;
  
  cVar1 = hasFailed((ProtectThePlantChallengeModule *)param_1);
  if (cVar1 != '\0') {
    cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
    if ((cVar1 == '\0') &&
       (cVar1 = Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),1), cVar1 != '\0')) {
      this = (RichManUIMgr *)FUN_04356544(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
      RichManUIMgr::SetPrevNode(this,2);
      return;
    }
  }
  return;
}


/* ProtectThePlantChallengeModule::onGameplayStarted() */

void ProtectThePlantChallengeModule::onGameplayStarted(void)

{
  char cVar1;
  
  cVar1 = ProtectTheGridItemChallengeModule::isWaitingForLastStand();
  if (cVar1 != '\0') {
    return;
  }
  Board::SetSoftPause(*(Board **)(gLawnApp + 0x9f0),false);
  FUN_04354f80(*(long *)(gLawnApp + 0x9f0) + 0x887,1);
  return;
}


/* ProtectThePlantChallengeModule::~ProtectThePlantChallengeModule() */

void __thiscall
ProtectThePlantChallengeModule::~ProtectThePlantChallengeModule
          (ProtectThePlantChallengeModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06834630;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  std::vector<SpawnedPlant,std::allocator<SpawnedPlant>>::~vector
            ((vector<SpawnedPlant,std::allocator<SpawnedPlant>> *)(this + 0x20));
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* ProtectThePlantChallengeModule::~ProtectThePlantChallengeModule() */

void __thiscall
ProtectThePlantChallengeModule::~ProtectThePlantChallengeModule
          (ProtectThePlantChallengeModule *this)

{
  ~ProtectThePlantChallengeModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectThePlantChallengeModule::AddResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) */

void __thiscall
ProtectThePlantChallengeModule::AddResourceRequirements
          (ProtectThePlantChallengeModule *this,set *param_1)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ulong uVar3;
  string *psVar4;
  long *plVar5;
  ulong uVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  for (uVar6 = 0;
      uVar3 = FUN_04354f94(*(undefined8 *)(pRVar2 + 0x40),*(undefined8 *)(pRVar2 + 0x48)),
      uVar6 < uVar3; uVar6 = uVar6 + 1) {
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    FUN_04354fbc(*(undefined8 *)(pRVar2 + 0x40),uVar6);
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
    if (cVar1 != '\0') {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      (**(code **)(*plVar5 + 0x48))(plVar5,param_1);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectThePlantChallengeModule::spawnPlants() */

void __thiscall ProtectThePlantChallengeModule::spawnPlants(ProtectThePlantChallengeModule *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  long lVar4;
  string *psVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  Point aPStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar8 = 0;
  while( true ) {
    uVar9 = *(undefined8 *)(pRVar3 + 0x40);
    uVar7 = FUN_04354f94(uVar9,*(undefined8 *)(pRVar3 + 0x48));
    if (uVar7 <= uVar8) break;
    lVar4 = FUN_04354fbc(uVar9,uVar8);
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
    uVar1 = *(undefined4 *)(lVar4 + 8);
    uVar2 = *(undefined4 *)(lVar4 + 0xc);
    uVar9 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_40);
    lVar6 = Board::AddPlant((Board *)0x0,uVar9,uVar1,uVar2,aRStack_20,1,1,0xffffffff,0,1,1,0,0,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    FUN_04355364(lVar6 + 0x189);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_38);
    Sexy::Point::Point(aPStack_30,*(int *)(lVar4 + 8),*(int *)(lVar4 + 0xc));
    SpawnedGridItem::SpawnedGridItem((SpawnedGridItem *)aRStack_20,aRStack_28,aPStack_30);
    std::vector<SpawnedPlant,std::allocator<SpawnedPlant>>::push_back
              ((vector<SpawnedPlant,std::allocator<SpawnedPlant>> *)(this + 0x20),
               (SpawnedPlant *)aRStack_20);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    uVar8 = uVar8 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectThePlantChallengeModule::onLoadComplete() */

void __thiscall ProtectThePlantChallengeModule::onLoadComplete(ProtectThePlantChallengeModule *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  ResourceInfo *pRVar1;
  RtClass *pRVar2;
  PopAnimRig *pPVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  string asStack_50 [8];
  RtWeakPtr aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x38);
  spawnPlants(this);
  std::string::string(asStack_50,"POPANIM_BACKGROUNDS_PROTECT_TILE");
  GetPAMByName(asStack_50);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_48);
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig((PopAnim *)pRVar1,pRVar2);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  std::string::~string(asStack_50);
  nop();
  pPVar3 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)aRStack_40,"animation");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar3,aRStack_40,0,aDStack_38);
  std::string::~string((string *)aRStack_40);
  nop();
  uVar6 = 0;
  while( true ) {
    uVar7 = *(undefined8 *)(this + 0x20);
    uVar5 = FUN_04354fc4(uVar7,*(undefined8 *)(this + 0x28));
    if (uVar5 <= uVar6) break;
    lVar4 = FUN_04354ff4(uVar7,uVar6);
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
    *(ResourceInfo **)(lVar4 + 0x10) = pRVar1;
    uVar6 = uVar6 + 1;
  }
  Board::SetSoftPause(*(Board **)(gLawnApp + 0x9f0),true);
  FUN_04354f80(*(long *)(gLawnApp + 0x9f0) + 0x887,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectThePlantChallengeModule::gatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
ProtectThePlantChallengeModule::gatherPlantingRestrictions
          (ProtectThePlantChallengeModule *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  RtMixedPtrBase *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar4;
  long lVar5;
  Plant *this_01;
  PlantType *this_02;
  ulong uVar6;
  undefined8 uVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined4 local_10 [2];
  long local_8;
  
  uVar7 = *(undefined8 *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_04354fc4(uVar7,*(undefined8 *)(this + 0x28));
  uVar6 = 0;
  if (uVar3 != 0) {
    do {
      this_00 = (RtMixedPtrBase *)FUN_04354ff4(uVar7,uVar6);
      cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)(this_00 + 8),(TPoint *)param_1);
      if (cVar1 != '\0') {
        cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
        if (cVar1 != '\0') {
          pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04354ff4(*(undefined8 *)(this + 0x20),uVar6)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
          Plant::GetType();
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
          cVar1 = std::operator==((string *)(lVar5 + 8),(string *)(param_2 + 8));
          if (cVar1 == '\0') {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
          }
          else {
            pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_04354ff4(*(undefined8 *)(this + 0x20),uVar6);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
            Plant::GetType();
            this_02 = (PlantType *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
            lVar5 = PlantType::GetProps(this_02);
            cVar1 = *(char *)(lVar5 + 0x248);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
            if (cVar1 != '\0') break;
          }
          pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04354ff4(*(undefined8 *)(this + 0x20),uVar6)
          ;
          this_01 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
          cVar1 = Plant::IsIceblocked(this_01);
          if (((cVar1 == '\0') ||
              (bVar2 = std::operator==((string *)(param_2 + 8),"hotpotato"), !bVar2)) &&
             (lVar5 = PlantType::GetProps(param_2), *(int *)(lVar5 + 0xbc) != 0)) {
            local_10[0] = 0x4e;
            std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                      ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                       (PlantingReason *)local_10);
          }
          break;
        }
        uVar7 = *(undefined8 *)(this + 0x20);
        uVar3 = FUN_04354fc4(uVar7,*(undefined8 *)(this + 0x28));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectThePlantChallengeModule::registerForEvents() */

void __thiscall
ProtectThePlantChallengeModule::registerForEvents(ProtectThePlantChallengeModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
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
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::
  Delegate0<ProtectThePlantChallengeModule,void(ProtectThePlantChallengeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,checkWinCondition);
  Sexy::Delegate0wRet<bool>::
  Delegate0wRet<ProtectThePlantChallengeModule,bool(ProtectThePlantChallengeModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterWinCondition(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cleanUp);
  Sexy::Delegate0::
  Delegate0<ProtectThePlantChallengeModule,void(ProtectThePlantChallengeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::
  Delegate0<ProtectThePlantChallengeModule,void(ProtectThePlantChallengeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::
  Delegate1<ProtectThePlantChallengeModule,void(ProtectThePlantChallengeModule::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::
  Delegate0<ProtectThePlantChallengeModule,void(ProtectThePlantChallengeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::
  Delegate0<ProtectThePlantChallengeModule,void(ProtectThePlantChallengeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDied);
  local_a0 = local_80;
  uStack_98 = uStack_78;
  local_90 = local_70;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<ProtectThePlantChallengeModule,void(ProtectThePlantChallengeModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantConvertedToProjectile);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<ProtectThePlantChallengeModule,void(ProtectThePlantChallengeModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantConvertedToProjectile,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gatherPlantingRestrictions);
  local_c0 = local_50;
  uStack_b8 = uStack_48;
  local_b0 = local_40;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<ProtectThePlantChallengeModule,void(ProtectThePlantChallengeModule::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectThePlantChallengeModule::handlePlantLoss(Plant*) */

void ProtectThePlantChallengeModule::handlePlantLoss(Plant *param_1)

{
  char cVar1;
  bool bVar2;
  BaseChallengeModule *pBVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  BonusChallengeModule *pBVar6;
  char *pcVar7;
  TGALogMgr *this;
  size_t in_x2;
  Plant *local_78;
  undefined8 local_70;
  undefined8 local_68 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_58 [8];
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04354ec4(*(undefined4 *)(param_1 + 0x1c));
  if ((cVar1 == '\0') ||
     (cVar1 = hasFailed((ProtectThePlantChallengeModule *)param_1), cVar1 == '\0'))
  goto LAB_04358680;
  Challenge::Fail();
  cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if (cVar1 != '\0') {
    TGAPVZ1ModeData::TGAPVZ1ModeData((TGAPVZ1ModeData *)avStack_58);
    DString::DString((DString *)local_68,2);
    pcVar7 = (char *)DString::c_str((DString *)local_68);
    std::string::append((string *)avStack_58,pcVar7,in_x2);
    DString::~DString((DString *)local_68);
    Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
    PVZ1ModeNetworkMgr::GetCurrentLevel();
    FUN_05474278(auStack_50,(DString *)local_68);
    std::string::~string((string *)local_68);
    cVar1 = PVZ1ModeUtils::IsHardMode();
    if (cVar1 == '\0') {
      pcVar7 = "0";
    }
    else {
      pcVar7 = "1";
    }
    std::string::append(asStack_48,pcVar7,in_x2);
    std::string::append(asStack_40,"4",in_x2);
    this = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogPVZ1Mode(this,(TGAPVZ1ModeData *)avStack_58);
    TGAPVZ1ModeData::~TGAPVZ1ModeData((TGAPVZ1ModeData *)avStack_58);
  }
  pBVar3 = BoardHelpers::GetLevelModuleByClass<BaseChallengeModule>();
  if (pBVar3 == (BaseChallengeModule *)0x0) {
    MessageRouter::Broadcast<Challenge*,ProtectThePlantChallengeModule*>
              ((MessageRouter *)gMessageRouter,Message::ChallengeFailed,
               (ProtectThePlantChallengeModule *)param_1);
    goto LAB_04358680;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_58);
  (**(code **)(*(long *)pBVar3 + 0xb0))(pBVar3,avStack_58);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_58);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_58);
  local_78 = param_1;
  local_70 = std::
             find<__gnu_cxx::__normal_iterator<Challenge**,std::vector<Challenge*,std::allocator<Challenge*>>>,ProtectThePlantChallengeModule*>
                       (uVar4,uVar5,&local_78);
  local_68[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_58);
  bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_70,(__normal_iterator *)local_68);
  if (bVar2) {
    pBVar6 = BoardHelpers::GetLevelModuleByClass<BonusChallengeModule>();
    if (pBVar6 != (BonusChallengeModule *)0x0) {
      std::vector<Challenge*,std::allocator<Challenge*>>::clear
                ((vector<Challenge*,std::allocator<Challenge*>> *)avStack_58);
      (**(code **)(*(long *)pBVar6 + 0xb0))(pBVar6,avStack_58);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_58);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_58);
      local_78 = param_1;
      local_70 = std::
                 find<__gnu_cxx::__normal_iterator<Challenge**,std::vector<Challenge*,std::allocator<Challenge*>>>,ProtectThePlantChallengeModule*>
                           (uVar4,uVar5,&local_78);
      local_68[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_58);
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_70,(__normal_iterator *)local_68);
      if (!bVar2) goto LAB_04358754;
    }
    MessageRouter::Broadcast<Challenge*,ProtectThePlantChallengeModule*>
              ((MessageRouter *)gMessageRouter,Message::ChallengeFailed,
               (ProtectThePlantChallengeModule *)param_1);
  }
LAB_04358754:
  std::vector<Challenge*,std::allocator<Challenge*>>::~vector
            ((vector<Challenge*,std::allocator<Challenge*>> *)avStack_58);
LAB_04358680:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectThePlantChallengeModule::onPlantDied(Plant*) */

void ProtectThePlantChallengeModule::onPlantDied(Plant *param_1)

{
  char cVar1;
  bool bVar2;
  BaseChallengeModule *pBVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  BonusChallengeModule *pBVar6;
  char *pcVar7;
  TGALogMgr *this;
  size_t in_x2;
  Plant *pPStack_78;
  undefined8 uStack_70;
  undefined8 auStack_68 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_58 [8];
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [56];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar1 = FUN_04354ec4(*(undefined4 *)(param_1 + 0x1c));
  if ((cVar1 == '\0') ||
     (cVar1 = hasFailed((ProtectThePlantChallengeModule *)param_1), cVar1 == '\0'))
  goto LAB_04358680;
  Challenge::Fail();
  cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if (cVar1 != '\0') {
    TGAPVZ1ModeData::TGAPVZ1ModeData((TGAPVZ1ModeData *)avStack_58);
    DString::DString((DString *)auStack_68,2);
    pcVar7 = (char *)DString::c_str((DString *)auStack_68);
    std::string::append((string *)avStack_58,pcVar7,in_x2);
    DString::~DString((DString *)auStack_68);
    Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
    PVZ1ModeNetworkMgr::GetCurrentLevel();
    FUN_05474278(auStack_50,(DString *)auStack_68);
    std::string::~string((string *)auStack_68);
    cVar1 = PVZ1ModeUtils::IsHardMode();
    if (cVar1 == '\0') {
      pcVar7 = "0";
    }
    else {
      pcVar7 = "1";
    }
    std::string::append(asStack_48,pcVar7,in_x2);
    std::string::append(asStack_40,"4",in_x2);
    this = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogPVZ1Mode(this,(TGAPVZ1ModeData *)avStack_58);
    TGAPVZ1ModeData::~TGAPVZ1ModeData((TGAPVZ1ModeData *)avStack_58);
  }
  pBVar3 = BoardHelpers::GetLevelModuleByClass<BaseChallengeModule>();
  if (pBVar3 == (BaseChallengeModule *)0x0) {
    MessageRouter::Broadcast<Challenge*,ProtectThePlantChallengeModule*>
              ((MessageRouter *)gMessageRouter,Message::ChallengeFailed,
               (ProtectThePlantChallengeModule *)param_1);
    goto LAB_04358680;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_58);
  (**(code **)(*(long *)pBVar3 + 0xb0))(pBVar3,avStack_58);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_58);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_58);
  pPStack_78 = param_1;
  uStack_70 = std::
              find<__gnu_cxx::__normal_iterator<Challenge**,std::vector<Challenge*,std::allocator<Challenge*>>>,ProtectThePlantChallengeModule*>
                        (uVar4,uVar5,&pPStack_78);
  auStack_68[0] =
       std::
       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)avStack_58);
  bVar2 = __gnu_cxx::operator==((__normal_iterator *)&uStack_70,(__normal_iterator *)auStack_68);
  if (bVar2) {
    pBVar6 = BoardHelpers::GetLevelModuleByClass<BonusChallengeModule>();
    if (pBVar6 != (BonusChallengeModule *)0x0) {
      std::vector<Challenge*,std::allocator<Challenge*>>::clear
                ((vector<Challenge*,std::allocator<Challenge*>> *)avStack_58);
      (**(code **)(*(long *)pBVar6 + 0xb0))(pBVar6,avStack_58);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_58);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_58);
      pPStack_78 = param_1;
      uStack_70 = std::
                  find<__gnu_cxx::__normal_iterator<Challenge**,std::vector<Challenge*,std::allocator<Challenge*>>>,ProtectThePlantChallengeModule*>
                            (uVar4,uVar5,&pPStack_78);
      auStack_68[0] =
           std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)avStack_58);
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)&uStack_70,(__normal_iterator *)auStack_68)
      ;
      if (!bVar2) goto LAB_04358754;
    }
    MessageRouter::Broadcast<Challenge*,ProtectThePlantChallengeModule*>
              ((MessageRouter *)gMessageRouter,Message::ChallengeFailed,
               (ProtectThePlantChallengeModule *)param_1);
  }
LAB_04358754:
  std::vector<Challenge*,std::allocator<Challenge*>>::~vector
            ((vector<Challenge*,std::allocator<Challenge*>> *)avStack_58);
LAB_04358680:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectThePlantChallengeModule::onPlantConvertedToProjectile(Plant*) */

void ProtectThePlantChallengeModule::onPlantConvertedToProjectile(Plant *param_1)

{
  char cVar1;
  bool bVar2;
  BaseChallengeModule *pBVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  BonusChallengeModule *pBVar6;
  char *pcVar7;
  TGALogMgr *this;
  size_t in_x2;
  Plant *pPStack_78;
  undefined8 uStack_70;
  undefined8 auStack_68 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_58 [8];
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [56];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar1 = FUN_04354ec4(*(undefined4 *)(param_1 + 0x1c));
  if ((cVar1 == '\0') ||
     (cVar1 = hasFailed((ProtectThePlantChallengeModule *)param_1), cVar1 == '\0'))
  goto LAB_04358680;
  Challenge::Fail();
  cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if (cVar1 != '\0') {
    TGAPVZ1ModeData::TGAPVZ1ModeData((TGAPVZ1ModeData *)avStack_58);
    DString::DString((DString *)auStack_68,2);
    pcVar7 = (char *)DString::c_str((DString *)auStack_68);
    std::string::append((string *)avStack_58,pcVar7,in_x2);
    DString::~DString((DString *)auStack_68);
    Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
    PVZ1ModeNetworkMgr::GetCurrentLevel();
    FUN_05474278(auStack_50,(DString *)auStack_68);
    std::string::~string((string *)auStack_68);
    cVar1 = PVZ1ModeUtils::IsHardMode();
    if (cVar1 == '\0') {
      pcVar7 = "0";
    }
    else {
      pcVar7 = "1";
    }
    std::string::append(asStack_48,pcVar7,in_x2);
    std::string::append(asStack_40,"4",in_x2);
    this = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogPVZ1Mode(this,(TGAPVZ1ModeData *)avStack_58);
    TGAPVZ1ModeData::~TGAPVZ1ModeData((TGAPVZ1ModeData *)avStack_58);
  }
  pBVar3 = BoardHelpers::GetLevelModuleByClass<BaseChallengeModule>();
  if (pBVar3 == (BaseChallengeModule *)0x0) {
    MessageRouter::Broadcast<Challenge*,ProtectThePlantChallengeModule*>
              ((MessageRouter *)gMessageRouter,Message::ChallengeFailed,
               (ProtectThePlantChallengeModule *)param_1);
    goto LAB_04358680;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_58);
  (**(code **)(*(long *)pBVar3 + 0xb0))(pBVar3,avStack_58);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_58);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_58);
  pPStack_78 = param_1;
  uStack_70 = std::
              find<__gnu_cxx::__normal_iterator<Challenge**,std::vector<Challenge*,std::allocator<Challenge*>>>,ProtectThePlantChallengeModule*>
                        (uVar4,uVar5,&pPStack_78);
  auStack_68[0] =
       std::
       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)avStack_58);
  bVar2 = __gnu_cxx::operator==((__normal_iterator *)&uStack_70,(__normal_iterator *)auStack_68);
  if (bVar2) {
    pBVar6 = BoardHelpers::GetLevelModuleByClass<BonusChallengeModule>();
    if (pBVar6 != (BonusChallengeModule *)0x0) {
      std::vector<Challenge*,std::allocator<Challenge*>>::clear
                ((vector<Challenge*,std::allocator<Challenge*>> *)avStack_58);
      (**(code **)(*(long *)pBVar6 + 0xb0))(pBVar6,avStack_58);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_58);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_58);
      pPStack_78 = param_1;
      uStack_70 = std::
                  find<__gnu_cxx::__normal_iterator<Challenge**,std::vector<Challenge*,std::allocator<Challenge*>>>,ProtectThePlantChallengeModule*>
                            (uVar4,uVar5,&pPStack_78);
      auStack_68[0] =
           std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)avStack_58);
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)&uStack_70,(__normal_iterator *)auStack_68)
      ;
      if (!bVar2) goto LAB_04358754;
    }
    MessageRouter::Broadcast<Challenge*,ProtectThePlantChallengeModule*>
              ((MessageRouter *)gMessageRouter,Message::ChallengeFailed,
               (ProtectThePlantChallengeModule *)param_1);
  }
LAB_04358754:
  std::vector<Challenge*,std::allocator<Challenge*>>::~vector
            ((vector<Challenge*,std::allocator<Challenge*>> *)avStack_58);
LAB_04358680:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

