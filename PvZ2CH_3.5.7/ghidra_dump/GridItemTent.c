// Class: GridItemTent


/* GridItemTent::onDestroyAnimCompleted() */

void __thiscall GridItemTent::onDestroyAnimCompleted(GridItemTent *this)

{
  (**(code **)(*(long *)this + 0x48))();
  return;
}


/* GridItemTent::CalcRenderOrder() const */

void __thiscall GridItemTent::CalcRenderOrder(GridItemTent *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_047cfa54(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x635ce,uVar1,0);
  return;
}


/* non-virtual thunk to GridItemTent::CalcRenderOrder() const */

void __thiscall GridItemTent::CalcRenderOrder(GridItemTent *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemTent::GridItemTent() */

void __thiscall GridItemTent::GridItemTent(GridItemTent *this)

{
  undefined4 uVar1;
  
  GridItemGravestone::GridItemGravestone((GridItemGravestone *)this);
  *(undefined ***)this = &PTR_GetClass_068e7440;
  *(undefined ***)(this + 0x10) = &PTR__GridItemTent_068e7700;
  uVar1 = PVZ_EOT();
  this[0x1e4] = (GridItemTent)0x0;
  *(undefined4 *)(this + 0x1e0) = uVar1;
  return;
}


/* GridItemTent::StaticNew() */

GridItemTent * GridItemTent::StaticNew(void)

{
  GridItemTent *this;
  
  this = ::operator_new(0x1e8);
  GridItemTent(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTent::StaticClassInit() */

void GridItemTent::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemTent");
    (*pcVar2)(plVar1,asStack_10,FUN_047d19c8,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemTent::StaticGetClass() */

long * GridItemTent::StaticGetClass(void)

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
  uVar2 = GridItemGravestone::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemTent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemTent::GetClass() const */

long * GridItemTent::GetClass(void)

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
  uVar2 = GridItemGravestone::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemTent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTent::onGridItemInitialize() */

void __thiscall GridItemTent::onGridItemInitialize(GridItemTent *this)

{
  GridItemTentProps *pGVar1;
  ZombieTentAnimRig *this_00;
  float fVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemGravestone::onGridItemInitialize((GridItemGravestone *)this);
  GridItemGravestone::setState((GridItemGravestone *)this,3);
  this[0x1e4] = (GridItemTent)0x0;
  fVar2 = (float)PVZ_T();
  pGVar1 = GridItem::GetProps<GridItemTentProps>();
  fVar3 = (float)ValueRange::GetRandomValue((ValueRange *)(pGVar1 + 0x104));
  fVar3 = (float)RandRangeFloat(0.0,fVar3);
  FUN_047cfa88(fVar3 + fVar2,this + 0x1e0);
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  ZombieTentAnimRig::PlayStationary(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  GridItemHeavyShield::CalcDamageState((GridItemHeavyShield *)this);
  MessageRouter::Broadcast<GridItem*,GridItemTent*>
            ((MessageRouter *)gMessageRouter,Message::GridItemTentSpawned,this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTent::KillGridItem() */

void __thiscall GridItemTent::KillGridItem(GridItemTent *this)

{
  RtObject *this_00;
  TentAnimRig *pTVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1e4] == (GridItemTent)0x0) {
    GridItemAnimation::GetAnimRig();
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    pTVar1 = Sexy::RtObject::Cast<TentAnimRig>(this_00);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onDestroyAnimCompleted");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieTentAnimRig::PlayDestroy((ZombieTentAnimRig *)pTVar1,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  }
  this[0x1e4] = (GridItemTent)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTent::pickBasicZombie() */

void __thiscall GridItemTent::pickBasicZombie(GridItemTent *this)

{
  bool bVar1;
  GridItemTentProps *pGVar2;
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
  pGVar2 = GridItem::GetProps<GridItemTentProps>();
  local_70 = FUN_047d1d70(*(undefined8 *)(pGVar2 + 0x110));
  local_68 = FUN_047d1dc0(*(undefined8 *)(pGVar2 + 0x118));
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
/* GridItemTent::onUpdate() */

void __thiscall GridItemTent::onUpdate(GridItemTent *this)

{
  GridItemTentProps *pGVar1;
  string *psVar2;
  ZombieType *this_00;
  SexyVector3 *this_01;
  undefined8 *puVar3;
  ZombieLostCityBasic *this_02;
  long *plVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0xa8))(this,1);
  fVar7 = *(float *)(this + 0x1e0);
  fVar6 = (float)PVZ_T();
  if ((fVar7 <= fVar6) && (this[0x1e4] == (GridItemTent)0x0)) {
    pGVar1 = GridItem::GetProps<GridItemTentProps>();
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    pickBasicZombie(this);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    std::string::~string((string *)&local_18);
    this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    ZombieType::EnsureResourceGroupsLoaded(this_00);
    plVar4 = *(long **)(gLawnApp + 0x9f0);
    pcVar5 = *(code **)(*plVar4 + 0x318);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
    this_01 = (SexyVector3 *)(*pcVar5)(plVar4,(string *)&local_18,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_10 = *(undefined4 *)(puVar3 + 1);
    local_18 = (float)*puVar3;
    _local_18 = CONCAT44((int)((ulong)*puVar3 >> 0x20),(float)*(int *)(pGVar1 + 0x128) + local_18);
    BoardEntity::PlaceOnBoard(this_01);
    this_02 = Sexy::RtObject::Cast<ZombieLostCityBasic>((RtObject *)this_01);
    ZombieLostCityBasic::PlayTentAnimation(this_02);
    fVar6 = (float)ValueRange::GetRandomValue((ValueRange *)(pGVar1 + 0x104));
    *(float *)(this + 0x1e0) = *(float *)(this + 0x1e0) + fVar6;
    MessageRouter::Post<Zombie*,Zombie*>
              ((MessageRouter *)gMessageRouter,Message::ZombieSpawnedByTent,(Zombie *)this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  GridItemGravestone::onUpdate((GridItemGravestone *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemTent::~GridItemTent() */

void __thiscall GridItemTent::~GridItemTent(GridItemTent *this)

{
  *(undefined ***)this = &PTR_GetClass_068e7440;
  *(undefined ***)(this + 0x10) = &PTR__GridItemTent_068e7700;
  GridItemGravestone::~GridItemGravestone((GridItemGravestone *)this);
  return;
}


/* non-virtual thunk to GridItemTent::~GridItemTent() */

void __thiscall GridItemTent::~GridItemTent(GridItemTent *this)

{
  ~GridItemTent(this + -0x10);
  return;
}


/* GridItemTent::~GridItemTent() */

void __thiscall GridItemTent::~GridItemTent(GridItemTent *this)

{
  ~GridItemTent(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemTent::~GridItemTent() */

void __thiscall GridItemTent::~GridItemTent(GridItemTent *this)

{
  ~GridItemTent(this + -0x10);
  return;
}

