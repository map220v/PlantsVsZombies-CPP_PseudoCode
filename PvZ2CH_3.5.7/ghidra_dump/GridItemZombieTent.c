// Class: GridItemZombieTent


/* GridItemZombieTent::onDestroyAnimCompleted() */

void __thiscall GridItemZombieTent::onDestroyAnimCompleted(GridItemZombieTent *this)

{
  (**(code **)(*(long *)this + 0x48))();
  return;
}


/* GridItemZombieTent::CalcRenderOrder() const */

void __thiscall GridItemZombieTent::CalcRenderOrder(GridItemZombieTent *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_04ca008c(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x635ce,uVar1,0);
  return;
}


/* non-virtual thunk to GridItemZombieTent::CalcRenderOrder() const */

void __thiscall GridItemZombieTent::CalcRenderOrder(GridItemZombieTent *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieTent::StaticClassInit() */

void GridItemZombieTent::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemZombieTent");
    (*pcVar2)(plVar1,asStack_10,FUN_04ca229c,0x208,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieTent::StaticGetClass() */

long * GridItemZombieTent::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemZombieTent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieTent::GetClass() const */

long * GridItemZombieTent::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemZombieTent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieTent::GridItemZombieTent() */

void __thiscall GridItemZombieTent::GridItemZombieTent(GridItemZombieTent *this)

{
  undefined4 uVar1;
  
  GridItemGravestone::GridItemGravestone((GridItemGravestone *)this);
  *(undefined ***)this = &PTR_GetClass_06997620;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombieTent_069978e0;
  uVar1 = PVZ_EOT();
  this[0x1e4] = (GridItemZombieTent)0x0;
  *(undefined4 *)(this + 0x1e0) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1e8));
  return;
}


/* GridItemZombieTent::StaticNew() */

GridItemZombieTent * GridItemZombieTent::StaticNew(void)

{
  GridItemZombieTent *this;
  
  this = ::operator_new(0x208);
  GridItemZombieTent(this);
  return this;
}


/* GridItemZombieTent::setValues(float, float, std::vector<TentZombieWeights,
   std::allocator<TentZombieWeights> >) */

void __thiscall
GridItemZombieTent::setValues
          (undefined4 param_1,undefined4 param_2,GridItemZombieTent *this,vector *param_4)

{
  float fVar1;
  
  FUN_04ca007c(this + 300);
  FUN_04ca0084(param_1,this + 0x128);
  std::vector<TentZombieWeights,std::allocator<TentZombieWeights>>::operator=
            ((vector<TentZombieWeights,std::allocator<TentZombieWeights>> *)(this + 0x1e8),param_4);
  *(undefined4 *)(this + 0x200) = param_2;
  fVar1 = (float)PVZ_T();
  FUN_04ca00f0(fVar1 + *(float *)(this + 0x200),this + 0x1e0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieTent::onGridItemInitialize() */

void __thiscall GridItemZombieTent::onGridItemInitialize(GridItemZombieTent *this)

{
  GridItemZombieTentProps *pGVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ZombieTentAnimRig *this_00;
  float fVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemGravestone::onGridItemInitialize((GridItemGravestone *)this);
  GridItemGravestone::setState((GridItemGravestone *)this,3);
  this[0x1e4] = (GridItemZombieTent)0x0;
  pGVar1 = GridItem::GetProps<GridItemZombieTentProps>();
  uVar2 = *(undefined8 *)(pGVar1 + 0x110);
  *(undefined4 *)(this + 0x200) = *(undefined4 *)(pGVar1 + 300);
  uVar2 = FUN_04ca14dc(uVar2);
  uVar3 = FUN_04ca152c(*(undefined8 *)(pGVar1 + 0x118));
  std::vector<TentZombieWeights,std::allocator<TentZombieWeights>>::
  assign<__gnu_cxx::__normal_iterator<TentZombieWeights_const*,std::vector<TentZombieWeights,std::allocator<TentZombieWeights>>>,void>
            ((vector<TentZombieWeights,std::allocator<TentZombieWeights>> *)(this + 0x1e8),uVar2,
             uVar3);
  fVar4 = (float)PVZ_T();
  fVar5 = (float)RandRangeFloat(*(float *)(this + 0x200) - 1.0,*(float *)(this + 0x200) + 1.0);
  FUN_04ca00f0(fVar5 + fVar4,this + 0x1e0);
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  ZombieTentAnimRig::PlayStationary(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  GridItemHeavyShield::CalcDamageState((GridItemHeavyShield *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieTent::onUpdate() */

void __thiscall GridItemZombieTent::onUpdate(GridItemZombieTent *this)

{
  bool bVar1;
  undefined4 uVar2;
  GridItemZombieTentProps *pGVar3;
  string *psVar4;
  ZombieType *this_00;
  RtObject *this_01;
  long lVar5;
  undefined8 *puVar6;
  ZombieWalkOutSubSystem *pZVar7;
  undefined4 *puVar8;
  long *plVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0xa8))(this,1);
  fVar12 = *(float *)(this + 0x1e0);
  fVar11 = (float)PVZ_T();
  if ((fVar12 <= fVar11) && (this[0x1e4] == (GridItemZombieTent)0x0)) {
    pGVar3 = GridItem::GetProps<GridItemZombieTentProps>();
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    GridItemFestivalZombieTent::pickBasicZombie();
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
    std::string::~string((string *)&local_18);
    this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    ZombieType::EnsureResourceGroupsLoaded(this_00);
    plVar9 = *(long **)(gLawnApp + 0x9f0);
    pcVar10 = *(code **)(*plVar9 + 0x318);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
    this_01 = (RtObject *)(*pcVar10)(plVar9,(string *)&local_18,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    pcVar10 = *(code **)(*(long *)this_01 + 0x198);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    FUN_05475d88((string *)&local_18,lVar5 + 8);
    uVar2 = GridItemFestivalZombieTent::getZombieLevelInitial
                      ((GridItemFestivalZombieTent *)this,(string *)&local_18);
    (*pcVar10)(this_01,uVar2);
    std::string::~string((string *)&local_18);
    (**(code **)(*(long *)this_01 + 0x9d8))(this_01);
    bVar1 = Sexy::RtObject::IsA<ZombieChicken>(this_01);
    if (!bVar1) {
      pZVar7 = Board::GetGameSubSystem<ZombieWalkOutSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      puVar8 = (undefined4 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this_01);
      ZombieWalkOutSubSystem::OutZombie(*puVar8,puVar8[1],puVar8[2],0x40000000,pZVar7,this_01);
    }
    puVar6 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_10 = *(undefined4 *)(puVar6 + 1);
    local_18 = (float)*puVar6;
    _local_18 = CONCAT44((int)((ulong)*puVar6 >> 0x20),(float)*(int *)(pGVar3 + 0x128) + local_18);
    BoardEntity::PlaceOnBoard((SexyVector3 *)this_01);
    fVar11 = (float)PVZ_T();
    fVar12 = (float)RandRangeFloat(*(float *)(this + 0x200) - 1.0,*(float *)(this + 0x200) + 1.0);
    FUN_04ca00f0(fVar12 + fVar11,this + 0x1e0);
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


/* GridItemZombieTent::~GridItemZombieTent() */

void __thiscall GridItemZombieTent::~GridItemZombieTent(GridItemZombieTent *this)

{
  *(undefined ***)this = &PTR_GetClass_06997620;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombieTent_069978e0;
  std::vector<TentZombieWeights,std::allocator<TentZombieWeights>>::~vector
            ((vector<TentZombieWeights,std::allocator<TentZombieWeights>> *)(this + 0x1e8));
  GridItemGravestone::~GridItemGravestone((GridItemGravestone *)this);
  return;
}


/* non-virtual thunk to GridItemZombieTent::~GridItemZombieTent() */

void __thiscall GridItemZombieTent::~GridItemZombieTent(GridItemZombieTent *this)

{
  ~GridItemZombieTent(this + -0x10);
  return;
}


/* GridItemZombieTent::~GridItemZombieTent() */

void __thiscall GridItemZombieTent::~GridItemZombieTent(GridItemZombieTent *this)

{
  ~GridItemZombieTent(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemZombieTent::~GridItemZombieTent() */

void __thiscall GridItemZombieTent::~GridItemZombieTent(GridItemZombieTent *this)

{
  ~GridItemZombieTent(this + -0x10);
  return;
}

