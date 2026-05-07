// Class: GridItemEightiesArcadeCabinet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEightiesArcadeCabinet::setRiseHeight(float) */

void __thiscall
GridItemEightiesArcadeCabinet::setRiseHeight(GridItemEightiesArcadeCabinet *this,float param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined4 local_24;
  undefined4 local_20 [2];
  undefined8 local_18;
  float local_10;
  undefined4 local_c;
  long local_8;
  
  fVar5 = 0.0;
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  if (cVar1 != '\0') {
    Sexy::Insets::Insets((Insets *)&local_18);
    GridItemAnimation::GetAnimRig();
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
    (**(code **)(*plVar3 + 0x90))(plVar3,(RtMixedPtrBase *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
    local_20[0] = 0;
    local_24 = local_c;
    iVar2 = CurveLerp<int>(0,0x447a0000,param_1,&local_24,(RtWeakPtr<Sexy::ResourceInfo> *)local_20,
                           4);
    fVar5 = (float)-iVar2;
  }
  puVar4 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_18 = *puVar4;
  local_10 = fVar5;
  (**(code **)(*(long *)this + 0x78))(this,(RtMixedPtrBase *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEightiesArcadeCabinet::StaticClassInit() */

void GridItemEightiesArcadeCabinet::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemEightiesArcadeCabinet");
    (*pcVar2)(plVar1,asStack_10,FUN_03e363e0,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemEightiesArcadeCabinet::StaticGetClass() */

long * GridItemEightiesArcadeCabinet::StaticGetClass(void)

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
  uVar2 = GridItemJammable::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemEightiesArcadeCabinet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemEightiesArcadeCabinet::GetClass() const */

long * GridItemEightiesArcadeCabinet::GetClass(void)

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
  uVar2 = GridItemJammable::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemEightiesArcadeCabinet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemEightiesArcadeCabinet::GridItemEightiesArcadeCabinet() */

void __thiscall
GridItemEightiesArcadeCabinet::GridItemEightiesArcadeCabinet(GridItemEightiesArcadeCabinet *this)

{
  undefined4 uVar1;
  
  GridItemJammable::GridItemJammable((GridItemJammable *)this);
  *(undefined ***)this = &PTR_GetClass_0678a080;
  *(undefined ***)(this + 0x10) = &PTR__GridItemEightiesArcadeCabinet_0678a3a8;
  EntityComponent_GroundEffect::EntityComponent_GroundEffect
            ((EntityComponent_GroundEffect *)(this + 0x1f8));
  *(undefined4 *)(this + 0x218) = 0xffffffff;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x21c) = uVar1;
  *(undefined4 *)(this + 0x220) = uVar1;
  *(undefined4 *)(this + 0x224) = uVar1;
  *(undefined4 *)(this + 0x228) = 0;
  return;
}


/* GridItemEightiesArcadeCabinet::StaticNew() */

GridItemEightiesArcadeCabinet * GridItemEightiesArcadeCabinet::StaticNew(void)

{
  GridItemEightiesArcadeCabinet *this;
  
  this = ::operator_new(0x230);
  GridItemEightiesArcadeCabinet(this);
  return this;
}


/* GridItemEightiesArcadeCabinet::shouldCreateZombie() */

byte __thiscall
GridItemEightiesArcadeCabinet::shouldCreateZombie(GridItemEightiesArcadeCabinet *this)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  iVar2 = Effect_AngerFlame::GetFlameCol((Effect_AngerFlame *)this);
  if ((iVar2 == 3) && (fVar4 = (float)PVZ_T(), *(float *)(this + 0x220) <= fVar4)) {
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar3 = FUN_03e35c88(*(undefined4 *)(this + 0x130));
    if (iVar3 < iVar2) {
      bVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
      return bVar1 ^ 1;
    }
  }
  return 0;
}


/* GridItemEightiesArcadeCabinet::CanPushMe() */

bool __thiscall GridItemEightiesArcadeCabinet::CanPushMe(GridItemEightiesArcadeCabinet *this)

{
  bool bVar1;
  int iVar2;
  GridItemEightiesArcadeCabinetProps *pGVar3;
  float fVar4;
  float fVar5;
  
  pGVar3 = GridItem::GetProps<GridItemEightiesArcadeCabinetProps>();
  iVar2 = Effect_AngerFlame::GetFlameCol((Effect_AngerFlame *)this);
  bVar1 = false;
  if (iVar2 != 2) {
    iVar2 = Effect_AngerFlame::GetFlameCol((Effect_AngerFlame *)this);
    bVar1 = true;
    if ((iVar2 == 3) && (*(float *)(this + 0x220) != *(float *)(this + 0x224))) {
      fVar5 = *(float *)(pGVar3 + 0x150);
      fVar4 = (float)PVZ_T();
      bVar1 = fVar5 < fVar4 - *(float *)(this + 0x224);
    }
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEightiesArcadeCabinet::setState(CabinetState) */

void __thiscall
GridItemEightiesArcadeCabinet::setState(GridItemEightiesArcadeCabinet *this,int param_2)

{
  char cVar1;
  GridItemEightiesArcadeCabinetAnimRig *this_00;
  GridItemEightiesArcadeCabinetProps *pGVar2;
  float fVar3;
  float fVar4;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x218) != param_2) {
    *(int *)(this + 0x218) = param_2;
    GridItemAnimation::GetAnimRig();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    switch(param_2) {
    case 0:
      GridItemAnimRig_BesiegeGuide::PlayIdle((GridItemAnimRig_BesiegeGuide *)this_00);
      RealObject::SetUseGroundClipRect((RealObject *)this,true);
      (**(code **)(*(long *)this + 0x80))(this,0);
      MessageRouter::Broadcast<GridItemJammable*,GridItemEightiesArcadeCabinet*>
                ((MessageRouter *)gMessageRouter,Message::JammableGridItemAddedToBoard,this);
      break;
    case 1:
      RealObject::SetUseGroundClipRect((RealObject *)this,false);
      cVar1 = FUN_03e35c8c(this[0x1bd]);
      if (cVar1 == '\0') {
        GridItemAnimRig_BesiegeGuide::PlayIdle((GridItemAnimRig_BesiegeGuide *)this_00);
      }
      break;
    case 2:
      fVar4 = (float)PVZ_T();
      *(float *)(this + 0x21c) = fVar4 + 2.0;
      cVar1 = FUN_03e35c8c(this[0x1bd]);
      if (cVar1 == '\0') {
        GridItemEightiesArcadeCabinetAnimRig::PlayVideoGameLoop(this_00);
      }
      break;
    case 3:
      pGVar2 = GridItem::GetProps<GridItemEightiesArcadeCabinetProps>();
      local_10 = *(undefined8 *)(pGVar2 + 0x148);
      fVar4 = (float)PVZ_T();
      fVar3 = (float)ValueRange::GetRandomValue((ValueRange *)&local_10);
      *(float *)(this + 0x220) = fVar3 + fVar4;
      *(float *)(this + 0x224) = fVar3 + fVar4;
      break;
    case 4:
      fVar4 = (float)PVZ_T();
      *(float *)(this + 0x21c) = fVar4 + 2.0;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemEightiesArcadeCabinet::onGridItemInitialize() */

void __thiscall
GridItemEightiesArcadeCabinet::onGridItemInitialize(GridItemEightiesArcadeCabinet *this)

{
  GridItemEightiesArcadeCabinetProps *pGVar1;
  undefined4 uVar2;
  
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItem::GetProps<GridItemEightiesArcadeCabinetProps>();
  GridItemJammable::SetJamStyle((string *)this);
  pGVar1 = GridItem::GetProps<GridItemEightiesArcadeCabinetProps>();
  uVar2 = *(undefined4 *)(pGVar1 + 0x10);
  FUN_03e35c78(uVar2,this + 300);
  FUN_03e35c80(uVar2,this + 0x128);
  setState(this,1);
  FUN_03e35d48(this + 0x24);
  return;
}


/* GridItemEightiesArcadeCabinet::SetRiseFromGround() */

void __thiscall
GridItemEightiesArcadeCabinet::SetRiseFromGround(GridItemEightiesArcadeCabinet *this)

{
  (**(code **)(*(long *)this + 0x80))(this,1);
  setState(this,0);
  return;
}


/* GridItemEightiesArcadeCabinet::~GridItemEightiesArcadeCabinet() */

void __thiscall
GridItemEightiesArcadeCabinet::~GridItemEightiesArcadeCabinet(GridItemEightiesArcadeCabinet *this)

{
  *(undefined ***)this = &PTR_GetClass_0678a080;
  *(undefined ***)(this + 0x10) = &PTR__GridItemEightiesArcadeCabinet_0678a3a8;
  EntityComponent_GroundEffect::~EntityComponent_GroundEffect
            ((EntityComponent_GroundEffect *)(this + 0x1f8));
  GridItemJammable::~GridItemJammable((GridItemJammable *)this);
  return;
}


/* non-virtual thunk to GridItemEightiesArcadeCabinet::~GridItemEightiesArcadeCabinet() */

void __thiscall
GridItemEightiesArcadeCabinet::~GridItemEightiesArcadeCabinet(GridItemEightiesArcadeCabinet *this)

{
  ~GridItemEightiesArcadeCabinet(this + -0x10);
  return;
}


/* GridItemEightiesArcadeCabinet::~GridItemEightiesArcadeCabinet() */

void __thiscall
GridItemEightiesArcadeCabinet::~GridItemEightiesArcadeCabinet(GridItemEightiesArcadeCabinet *this)

{
  ~GridItemEightiesArcadeCabinet(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemEightiesArcadeCabinet::~GridItemEightiesArcadeCabinet() */

void __thiscall
GridItemEightiesArcadeCabinet::~GridItemEightiesArcadeCabinet(GridItemEightiesArcadeCabinet *this)

{
  ~GridItemEightiesArcadeCabinet(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEightiesArcadeCabinet::pick8BitZombie() */

void __thiscall GridItemEightiesArcadeCabinet::pick8BitZombie(GridItemEightiesArcadeCabinet *this)

{
  bool bVar1;
  GridItemEightiesArcadeCabinetProps *pGVar2;
  BasicZombieWeights *pBVar3;
  undefined8 local_70;
  undefined8 local_68;
  string asStack_60 [8];
  BasicZombieWeights aBStack_58 [16];
  undefined1 auStack_48 [8];
  undefined4 local_40;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  pGVar2 = GridItem::GetProps<GridItemEightiesArcadeCabinetProps>();
  local_70 = FUN_03e36778(*(undefined8 *)(pGVar2 + 0x158));
  local_68 = FUN_03e367c8(*(undefined8 *)(pGVar2 + 0x160));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar1) {
    pBVar3 = (BasicZombieWeights *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    BasicZombieWeights::BasicZombieWeights(aBStack_58,pBVar3);
    FUN_05475d88(asStack_60,auStack_48);
    ProbabilitySet<std::string>::AddItem
              ((ProbabilitySet<std::string> *)aPStack_38,asStack_60,local_40);
    std::string::~string(asStack_60);
    BasicZombieWeights::~BasicZombieWeights(aBStack_58);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_70);
  }
  ProbabilitySet<std::string>::PickItem();
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEightiesArcadeCabinet::createZombie() */

void __thiscall GridItemEightiesArcadeCabinet::createZombie(GridItemEightiesArcadeCabinet *this)

{
  GridItemEightiesArcadeCabinetProps *pGVar1;
  string *psVar2;
  ZombieType *this_00;
  SexyVector3 *pSVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = GridItem::GetProps<GridItemEightiesArcadeCabinetProps>();
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  pick8BitZombie(this);
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  std::string::~string((string *)&local_18);
  this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  plVar6 = *(long **)(gLawnApp + 0x9f0);
  pcVar7 = *(code **)(*plVar6 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
  pSVar3 = (SexyVector3 *)(*pcVar7)(plVar6,(string *)&local_18,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar4,"Play_Zomb_Eighties_8Bit_Spawn");
  puVar5 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_10 = *(undefined4 *)(puVar5 + 1);
  local_18 = (float)*puVar5;
  _local_18 = CONCAT44((int)((ulong)*puVar5 >> 0x20),*(float *)(pGVar1 + 0x154) + local_18);
  BoardEntity::PlaceOnBoard(pSVar3);
  fVar8 = (float)ValueRange::GetRandomValue((ValueRange *)(pGVar1 + 0x140));
  fVar9 = (float)PVZ_T();
  *(float *)(this + 0x224) = fVar9;
  *(float *)(this + 0x220) = fVar9 + fVar8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEightiesArcadeCabinet::updateState() */

void __thiscall GridItemEightiesArcadeCabinet::updateState(GridItemEightiesArcadeCabinet *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Effect_AngerFlame::GetFlameCol((Effect_AngerFlame *)this);
  switch(uVar2) {
  case 0:
    fVar4 = (float)PVZ_Dt();
    fVar4 = fVar4 + *(float *)(this + 0x228);
    *(float *)(this + 0x228) = fVar4;
    if (0.15 <= fVar4) {
      EntityComponent_GroundEffect::SetGroundEffect
                ((EntityComponent_GroundEffect *)(this + 0x1f8),this,3,1);
      fVar4 = *(float *)(this + 0x228);
    }
    local_c = 1000;
    local_10 = 0;
    iVar3 = CurveLerp<int>(0,0x3f800000,fVar4,&local_10,&local_c,4);
    setRiseHeight(this,(float)iVar3);
    if (*(float *)(this + 0x228) < 1.0) break;
    EntityComponent_GroundEffect::ClearGroundEffect
              ((EntityComponent_GroundEffect *)(this + 0x1f8),(RealObject *)this);
    cVar1 = (**(code **)(*(long *)this + 0x310))(this);
    if (cVar1 != '\0') {
      setState(this,2);
      break;
    }
    goto LAB_03e37668;
  case 2:
    fVar4 = (float)PVZ_T();
    if (fVar4 < *(float *)(this + 0x21c)) {
      setState(this,3);
    }
    break;
  case 3:
    cVar1 = shouldCreateZombie(this);
    if (cVar1 != '\0') {
      createZombie(this);
    }
    break;
  case 4:
    fVar4 = (float)PVZ_T();
    if (*(float *)(this + 0x21c) <= fVar4) break;
LAB_03e37668:
    setState(this,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemEightiesArcadeCabinet::onUpdate() */

void __thiscall GridItemEightiesArcadeCabinet::onUpdate(GridItemEightiesArcadeCabinet *this)

{
  GridItemBoardEntityConditionTarget::onUpdate((GridItemBoardEntityConditionTarget *)this);
  updateState(this);
  return;
}


/* GridItemEightiesArcadeCabinet::StartJamming() */

void __thiscall GridItemEightiesArcadeCabinet::StartJamming(GridItemEightiesArcadeCabinet *this)

{
  int iVar1;
  
  GridItemJammable::StartJamming((GridItemJammable *)this);
  iVar1 = Effect_AngerFlame::GetFlameCol((Effect_AngerFlame *)this);
  if ((iVar1 != 1) &&
     (iVar1 = Effect_AngerFlame::GetFlameCol((Effect_AngerFlame *)this), iVar1 != 4)) {
    return;
  }
  setState(this,2);
  return;
}


/* GridItemEightiesArcadeCabinet::StopJamming() */

void __thiscall GridItemEightiesArcadeCabinet::StopJamming(GridItemEightiesArcadeCabinet *this)

{
  int iVar1;
  
  GridItemJammable::StopJamming((GridItemJammable *)this);
  iVar1 = Effect_AngerFlame::GetFlameCol((Effect_AngerFlame *)this);
  if ((iVar1 != 3) &&
     (iVar1 = Effect_AngerFlame::GetFlameCol((Effect_AngerFlame *)this), iVar1 != 2)) {
    return;
  }
  setState(this,4);
  return;
}


/* GridItemEightiesArcadeCabinet::IsJamming() */

undefined8 __thiscall GridItemEightiesArcadeCabinet::IsJamming(GridItemEightiesArcadeCabinet *this)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = FUN_03e35c88(*(undefined4 *)(this + 0x130));
  if (iVar1 <= iVar2) {
    return 0;
  }
  uVar3 = GridItemJammable::IsJamming((GridItemJammable *)this);
  return uVar3;
}

