// Class: ArtifactHolo


/* ArtifactHolo::DoTrigger() */

void __thiscall ArtifactHolo::DoTrigger(ArtifactHolo *this)

{
  this[0x60] = (ArtifactHolo)0x1;
  return;
}


/* ArtifactHolo::NotifyHoloEnd() */

void ArtifactHolo::NotifyHoloEnd(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHolo::StaticClassInit() */

void ArtifactHolo::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactHolo");
    (*pcVar2)(plVar1,asStack_10,FUN_0373b440,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactHolo::StaticGetClass() */

long * ArtifactHolo::StaticGetClass(void)

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
  uVar2 = Artifact::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactHolo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactHolo::GetClass() const */

long * ArtifactHolo::GetClass(void)

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
  uVar2 = Artifact::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactHolo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactHolo::~ArtifactHolo() */

void __thiscall ArtifactHolo::~ArtifactHolo(ArtifactHolo *this)

{
  *(undefined ***)this = &PTR_GetClass_066958b0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactHolo::~ArtifactHolo() */

void __thiscall ArtifactHolo::~ArtifactHolo(ArtifactHolo *this)

{
  ~ArtifactHolo(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHolo::CreateHoloGridItem(BoardEntity*) */

void __thiscall ArtifactHolo::CreateHoloGridItem(ArtifactHolo *this,BoardEntity *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  long lVar5;
  GridItem *this_00;
  GridItemThorns *this_01;
  ResourceInfo *pRVar6;
  Board *this_02;
  float fVar7;
  float fVar8;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  fVar8 = pfVar4[1];
  fVar7 = *pfVar4;
  nop();
  GridItem::GetType();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  FUN_05475d88(asStack_18,lVar5 + 8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_02 = *(Board **)(gLawnApp + 0x9f0);
  iVar2 = BoardTransforms::BoardSpaceToGridX(fVar7);
  iVar3 = BoardTransforms::BoardSpaceToGridY(fVar8);
  lVar5 = Board::AddGridItem(this_02,asStack_18,iVar2,iVar3,1);
  bVar1 = std::operator==(asStack_18,"thorns");
  if (bVar1) {
    nop();
    nop();
    FUN_03723d90(*(undefined4 *)(this_00 + 0x1a8),this_01 + 0x1a8);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this_00 + 0x1c8));
    GridItemThorns::SetBindZombie(this_01,(BoardEntity *)pRVar6);
    FUN_03723d98(*(undefined4 *)(this_00 + 0x1b8),this_01 + 0x1b8);
    FUN_03723d88(*(undefined4 *)(this_00 + 0x1ac),this_01 + 0x1ac);
    GridItemThorns::SetPoisonedlv5Dot(this_01,*(float *)(this_00 + 0x1bc));
    FUN_03723da0(*(undefined4 *)(this_00 + 0x1d8),this_01 + 0x1d8);
    if (*(code **)(*(long *)this_00 + 0x1e0) == GridItem::GetMaxHitpoints) {
      GridItem::GetMaxHitpoints(this_00);
    }
    else {
      (**(code **)(*(long *)this_00 + 0x1e0))();
    }
    FUN_03723b34(this_01 + 300);
    if (*(code **)(*(long *)this_00 + 0x1d8) == GridItem::GetHitpoints) {
      GridItem::GetHitpoints(this_00);
    }
    else {
      (**(code **)(*(long *)this_00 + 0x1d8))();
    }
    FUN_03723b3c(this_01 + 0x128);
  }
  FUN_03726e20(lVar5 + 0x55);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar5);
}


/* ArtifactHolo::CanTriggerMain() */

byte __thiscall ArtifactHolo::CanTriggerMain(ArtifactHolo *this)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = Artifact::CanTriggerMain((Artifact *)this);
  bVar2 = 0;
  if (cVar1 != '\0') {
    bVar2 = (byte)this[0x60] ^ 1;
  }
  return bVar2;
}


/* ArtifactHolo::DelayToCooldown() */

void __thiscall ArtifactHolo::DelayToCooldown(ArtifactHolo *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  this[0x3c] = (ArtifactHolo)0x1;
  *(float *)(this + 0x38) = fVar1 + *(float *)(this + 0x28);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHolo::ArtifactHolo() */

void __thiscall ArtifactHolo::ArtifactHolo(ArtifactHolo *this)

{
  undefined *puVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_066958b0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,NotifyHoloStart);
  Sexy::Delegate0::Delegate0<ArtifactHolo,void(ArtifactHolo::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyHoloStart,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,NotifyHoloEnd);
  Sexy::Delegate0::Delegate0<ArtifactHolo,void(ArtifactHolo::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyHoloEnd,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,DelayToCooldown);
  Sexy::Delegate0::Delegate0<ArtifactHolo,void(ArtifactHolo::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyHoloCooldown,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactHolo::StaticNew() */

ArtifactHolo * ArtifactHolo::StaticNew(void)

{
  ArtifactHolo *this;
  
  this = ::operator_new(0x68);
  ArtifactHolo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHolo::CreateHoloPlant(BoardEntity*) */

void __thiscall ArtifactHolo::CreateHoloPlant(ArtifactHolo *this,BoardEntity *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  BoardEntity *this_00;
  string *psVar4;
  Plant *pPVar5;
  undefined8 uVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  Plant::GetType();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar1 = BoardEntity::CalcColumnPosition(this_00);
  uVar2 = SharkMinion::getRow((SharkMinion *)this_00);
  uVar3 = FUN_03723b28(*(undefined4 *)(this_00 + 0x50));
  uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_20);
  pPVar5 = (Plant *)Board::AddPlant((Board *)0x0,uVar6,uVar1,uVar2,aRStack_10,1,1,uVar3,0,1,1,0,1,0,
                                    1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (pPVar5 != (Plant *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
    Plant::SetHoloPlant(pPVar5,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    FUN_03726e20(pPVar5 + 0x55);
    Plant::ApplyCondition(*(float *)(this + 0x40),*(float *)(this + 0x40) - 2.0,pPVar5,0x22);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHolo::CreateHoloZombie(BoardEntity*, bool) */

void ArtifactHolo::CreateHoloZombie(BoardEntity *param_1,bool param_2)

{
  bool bVar1;
  undefined4 uVar2;
  Zombie *this;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar3;
  string *psVar4;
  ZombieType *this_01;
  RealObject *pRVar5;
  undefined8 *puVar6;
  Board *pBVar7;
  Zombie *pZVar8;
  string asStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  float local_40;
  float fStack_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_29;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  FUN_05475d88(asStack_50,lVar3 + 8);
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
  this_01 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  ZombieType::EnsureResourceGroupsLoaded(this_01);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
  local_30 = FUN_03723b28(*(undefined4 *)(this + 0x50));
  local_29 = 1;
  local_2c = 0;
  local_2b = 0;
  uVar2 = SharkMinion::getRow((SharkMinion *)this);
  pBVar7 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
  pRVar5 = (RealObject *)
           Board::AddZombieInRow
                     (pBVar7,(RtWeakPtr<Sexy::SoundResource> *)&local_40,uVar2,0xfffffffb,
                      (SpawnZombieParams *)&local_30,1,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  RealObject::JoinTeam(pRVar5,1);
  lVar3 = FUN_05474374(asStack_50,"zoybeanpod",0);
  if (lVar3 == -1) {
    lVar3 = FUN_05474374(asStack_50,"turkeypult",0);
    if (lVar3 != -1) goto LAB_037768e0;
  }
  else {
    bVar1 = std::operator==(asStack_50,"zombie_zoybeanpodgatlingpea");
    if (!bVar1) goto LAB_037768e0;
  }
  Zombie::SetFacing((Zombie *)pRVar5,1);
LAB_037768e0:
  pZVar8._0_4_ = (Zombie *)PVZ_EOT();
  Zombie::ApplyCondition(pZVar8._0_4_,0,pRVar5,0x90,1);
  puVar6 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_40 = (float)*puVar6;
  local_38 = *(undefined4 *)(puVar6 + 1);
  fStack_3c = (float)((ulong)*puVar6 >> 0x20);
  _local_40 = CONCAT44(fStack_3c - 20.0,local_40 - 20.0);
  (**(code **)(*(long *)pRVar5 + 0x78))(pRVar5,(RtWeakPtr<Sexy::SoundResource> *)&local_40);
  FUN_03726e20(pRVar5 + 0x55);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  std::string::~string(asStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar5);
}


/* ArtifactHolo::Activate() */

void __thiscall ArtifactHolo::Activate(ArtifactHolo *this)

{
  char cVar1;
  ArtifactMgr *pAVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  Artifact::Activate((Artifact *)this);
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  if (cVar1 == '\0') {
    *(undefined4 *)(this + 0x2c) = 0;
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  }
  else {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    *(float *)(this + 0x2c) = fVar3 * 0.01;
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  }
  fVar3 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    fVar3 = fVar3 * 0.01;
  }
  *(float *)(this + 0x30) = fVar3;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,0);
  *(float *)(this + 0x40) = fVar3;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,2);
  *(float *)(this + 0x40) = *(float *)(this + 0x40) + fVar3 * fVar4;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,1);
  *(float *)(this + 0x44) = fVar3 * 0.01;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  *(float *)(this + 0x44) = *(float *)(this + 0x44) + fVar4 * fVar3 * 0.01;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  uVar5 = ArtifactMgr::CalculateFieldValue(pAVar2,2,0);
  *(undefined4 *)(this + 0x50) = uVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  if (cVar1 == '\0') {
    fVar3 = (float)PVZ_EOT();
  }
  else {
    fVar3 = (float)PVZ_T();
    fVar3 = fVar3 + *(float *)(this + 0x50);
  }
  *(float *)(this + 0x4c) = fVar3;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,1);
  *(int *)(this + 0x54) = (int)fVar3;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,2);
  *(float *)(this + 0x58) = fVar3;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,2);
  *(float *)(this + 0x58) = *(float *)(this + 0x58) + fVar3 * fVar4;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,3,0);
  this[0x60] = (ArtifactHolo)0x0;
  *(int *)(this + 0x5c) = (int)fVar3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHolo::FindHoloTargets(BoardEntityTypeFlag, int) */

void ArtifactHolo::FindHoloTargets
               (vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *param_1
               ,undefined8 param_2,int param_3,int param_4,undefined8 param_5,int param_6)

{
  ulong uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  RtObject *this;
  ArtifactHoloProperties *pAVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  BoardEntity **ppBVar11;
  long extraout_x0;
  RtObject *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar12;
  long extraout_x0_00;
  long *plVar13;
  undefined8 local_d0;
  undefined8 local_c8;
  TRect aTStack_c0 [16];
  EntitySearch_InGridSquares aEStack_b0 [16];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [24];
  Event1wRet<3,bool,BoardEntity*> aEStack_58 [32];
  Delegate1wRet<bool,BoardEntity*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_a0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_88);
  Sexy::Event1wRet<3,bool,BoardEntity*>::Event1wRet(aEStack_58);
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar5 = BoardConstants::NUMBER_OF_ROWS();
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,0,iVar4,iVar5,param_6);
  EntitySearch_InGridSquares::EntitySearch_InGridSquares(aEStack_b0,aTStack_c0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)aEStack_b0,EntitySearch_TouchingRectangle::Accept);
  Sexy::Delegate1wRet<bool,BoardEntity*>::
  Delegate1wRet<EntitySearch_TouchingRectangle,bool(EntitySearch_TouchingRectangle::*)(BoardEntity*)>
            (aDStack_38,aRStack_70);
  Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_58,(Delegate1wRet *)aDStack_38);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_a0,param_3,
             aEStack_58);
  EntityComponent_GroundEffect::GetEffect();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
  pAVar6 = Sexy::RtObject::Cast<ArtifactHoloProperties>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  lVar7 = FUN_03724708(local_a0,local_98);
  if (lVar7 != 0) {
    local_d0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_a0);
    local_c8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_a0);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_d0,(__normal_iterator *)&local_c8), bVar2)
    {
      ppBVar11 = (BoardEntity **)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d0);
      nop();
      nop();
      nop();
      if (param_3 == 1) {
        cVar3 = RealObject::IsOnTeam(extraout_x0,1);
        if ((((cVar3 != '\0') &&
             (cVar3 = FUN_0373c274(*(undefined4 *)(extraout_x0 + 0x28)), cVar3 == '\0')) &&
            (cVar3 = PlantRestrictionSet::IsExcluded((Plant *)(pAVar6 + 0x150)), cVar3 == '\0')) &&
           (((cVar3 = Plant::HasCondition(extraout_x0,6), cVar3 == '\0' &&
             (cVar3 = Plant::HasCondition(extraout_x0,0x10), cVar3 == '\0')) &&
            ((cVar3 = Plant::HasCondition(extraout_x0,2), cVar3 == '\0' &&
             (cVar3 = Plant::HasCondition(extraout_x0,1), cVar3 == '\0')))))) {
          Plant::GetType();
          plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
          cVar3 = (**(code **)(*plVar13 + 0xa0))();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
          if (cVar3 == '\0') {
            if (param_4 < 1) goto LAB_03794fec;
            cVar3 = Plant::HasCondition(extraout_x0,0x21);
            if (cVar3 == '\0') {
              cVar3 = Plant::HasCondition(extraout_x0,0x22);
              goto joined_r0x037950e8;
            }
          }
        }
      }
      else if (param_3 == 2) {
        if (param_4 < 1) {
          if ((param_4 == -1) && (cVar3 = RealObject::IsOnTeam(this_00,1), cVar3 != '\0')) {
            pRVar12 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)this_00);
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar12);
            lVar7 = FUN_05474374(lVar7 + 8,"zoybeanpod",0);
            if (lVar7 == -1) {
              lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar12);
              lVar7 = FUN_05474374(lVar7 + 8,"turkeypult",0);
              if (lVar7 == -1) goto LAB_03794e34;
            }
            cVar3 = Zombie::HasCondition(this_00,0x90);
            if (cVar3 == '\0') {
              cVar3 = Zombie::HasCondition(this_00,0x27);
joined_r0x037950e8:
              if (cVar3 == '\0') goto LAB_03794fec;
            }
          }
        }
        else {
          cVar3 = RealObject::IsOnTeam(this_00,2);
          if (((((((cVar3 != '\0') &&
                  (cVar3 = ZombieRestrictionSet::IsExcluded
                                     ((ZombieRestrictionSet *)(pAVar6 + 0x1a0),(Zombie *)this_00),
                  cVar3 == '\0')) && (bVar2 = Sexy::RtObject::IsA<Zomboss>(this_00), !bVar2)) &&
                ((bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>(this_00), !bVar2 &&
                 (cVar3 = (**(code **)(*(long *)this_00 + 0x4d8))(), cVar3 == '\0')))) &&
               ((cVar3 = (**(code **)(*(long *)this_00 + 0x508))(), cVar3 == '\0' &&
                ((cVar3 = Zombie::HasFogImmune((Zombie *)this_00), cVar3 == '\0' &&
                 (cVar3 = Zombie::IsBerserk((Zombie *)this_00), cVar3 == '\0')))))) &&
              (cVar3 = (**(code **)(*(long *)this_00 + 0x328))(), cVar3 == '\0')) &&
             ((((cVar3 = (**(code **)(*(long *)this_00 + 0x330))(), cVar3 == '\0' &&
                (cVar3 = Zombie::HasCondition(this_00,0x90), cVar3 == '\0')) &&
               (cVar3 = Zombie::HasCondition(this_00,0x27), cVar3 == '\0')) &&
              ((iVar4 = Zombie::getZombieStateSerialization((Zombie *)this_00), iVar4 != 9 &&
               (cVar3 = Zombie::HasCondition(this_00,0xe), cVar3 == '\0')))))) {
            pRVar12 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)this_00);
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar12);
            bVar2 = std::operator==((string *)(lVar7 + 8),"dark_cavalry");
            if (bVar2) {
              nop();
              cVar3 = FUN_03723d84(*(undefined1 *)(extraout_x0_00 + 0x80c));
              if (cVar3 == '\0') goto LAB_03794e34;
            }
LAB_03794fec:
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_88,ppBVar11);
          }
        }
      }
      else if (((param_3 == 4) && (cVar3 = RealObject::IsOnTeam(), cVar3 != '\0')) &&
              (cVar3 = GridItemRestrictionSet::IsIncluded((GridItem *)(pAVar6 + 0x178)),
              cVar3 != '\0')) goto LAB_03794fec;
LAB_03794e34:
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_d0);
    }
  }
  if (param_4 < 1) {
    std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
              (param_1,(vector *)&local_88);
  }
  else {
    uVar8 = FUN_03724708(local_88,local_80);
    uVar1 = (long)(int)uVar8;
    if ((ulong)(long)param_4 <= uVar8) {
      uVar1 = (long)param_4;
    }
    if (param_3 == 2) {
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_88);
      uVar10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_88);
      Sexy::Point::Point((Point *)&local_c8,0,2);
      EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
                ((BoardEntitySorter_ClosestByColumn *)aRStack_70,
                 (__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_c8);
      std::
      sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
                (uVar9,uVar10,aRStack_70);
    }
    else {
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_88);
      uVar10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_88);
      std::
      random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
                (uVar9,uVar10);
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_70);
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_88);
    local_c8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_88);
    uVar10 = __gnu_cxx::
             __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
             ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_c8,uVar1);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::
    assign<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,void>
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_70,uVar9,uVar10);
    std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
              (param_1,(vector *)aRStack_70);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_70);
  }
  Sexy::Event1wRet<3,bool,BoardEntity*>::~Event1wRet(aEStack_58);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_88);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHolo::Update() */

void __thiscall ArtifactHolo::Update(ArtifactHolo *this)

{
  char cVar1;
  bool bVar2;
  BoardEntity *extraout_x0;
  float fVar3;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03723bb8(this[0x3d]);
  if (cVar1 != '\0') {
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
    if ((cVar1 != '\0') && (fVar3 = (float)PVZ_T(), *(float *)(this + 0x4c) < fVar3)) {
      FindHoloTargets(avStack_20,this,1,*(undefined4 *)(this + 0x54));
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(avStack_20);
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(avStack_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
            bVar2) {
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
        nop();
        Plant::ApplyCondition(*(float *)(this + 0x58),*(float *)(this + 0x58) - 2.0);
        CreateHoloPlant(this,extraout_x0);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
        Plant::SetHoloPlant((Plant *)extraout_x0,aRStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
      }
      fVar3 = (float)PVZ_T();
      *(float *)(this + 0x4c) = fVar3 + *(float *)(this + 0x50);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    }
    if ((this[0x3c] != (ArtifactHolo)0x0) &&
       (fVar3 = (float)Artifact::GetTriggerLeftTime((Artifact *)this), fVar3 <= 0.0)) {
      this[0x3c] = (ArtifactHolo)0x0;
      this[0x60] = (ArtifactHolo)0x0;
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHolo::NotifyHoloStart() */

void __thiscall ArtifactHolo::NotifyHoloStart(ArtifactHolo *this)

{
  bool bVar1;
  char cVar2;
  bool extraout_w0;
  bool extraout_w0_00;
  BoardEntity *extraout_x0;
  BoardEntity *extraout_x0_00;
  BoardEntity *pBVar3;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_68 [24];
  undefined8 local_50 [3];
  undefined8 local_38 [3];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindHoloTargets(avStack_68,this,1,0xffffffff);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_68);
  local_50[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(avStack_68);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)local_50)
        , bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    nop();
    cVar2 = Plant::HasCondition();
    if (cVar2 == '\0') {
      cVar2 = Plant::HasCondition(extraout_x0,0x21);
      if (cVar2 != '\0') {
        Plant::EndCondition((Plant *)extraout_x0,0x21);
      }
      CreateHoloPlant(this,extraout_x0);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_20,(RtWeakPtrBase *)local_38);
      Plant::SetHoloPlant((Plant *)extraout_x0,(RtWeakPtr<Sexy::SoundResource> *)local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
      Plant::ApplyCondition(*(float *)(this + 0x40),*(float *)(this + 0x40) - 2.0,extraout_x0,0x21);
    }
    else {
      Plant::EndCondition((Plant *)extraout_x0,0x22);
      Plant::ApplyCondition(*(float *)(this + 0x40),*(float *)(this + 0x40) - 2.0,extraout_x0,0x22);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
  }
  FindHoloTargets((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_50,this,2,0xffffffff);
  local_38[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)local_50);
  local_20[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)local_50);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)local_38,(__normal_iterator *)local_20),
        bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_38);
    nop();
    CreateHoloZombie((BoardEntity *)this,extraout_w0);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_38);
  }
  FindHoloTargets((RtWeakPtr<Sexy::ResourceInfo> *)local_38,this,4,0xffffffff);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_38);
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)local_38);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
    nop();
    pBVar3 = (BoardEntity *)CreateHoloGridItem(this,extraout_x0_00);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_20,(RtWeakPtrBase *)&local_70);
    BoardEntity::SetHoloParent(pBVar3,(RtWeakPtr<Sexy::SoundResource> *)local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
  }
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,3);
  if (cVar2 != '\0') {
    FindHoloTargets((RtWeakPtr<Sexy::SoundResource> *)local_20,this,2,*(undefined4 *)(this + 0x5c));
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_20);
    local_70 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70), bVar1)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      nop();
      CreateHoloZombie((BoardEntity *)this,extraout_w0_00);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_50);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactHolo::AutoClick(int) */

void ArtifactHolo::AutoClick(int param_1)

{
  ArtifactHolo *this;
  
  this = (ArtifactHolo *)(ulong)(uint)param_1;
  if (this[0x3f] == (ArtifactHolo)0x0) {
    NotifyHoloStart(this);
    this[0x3f] = (ArtifactHolo)0x1;
  }
  return;
}

