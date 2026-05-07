// Class: GridItemFestivalZombieTent


/* GridItemFestivalZombieTent::GetCantPlantReason() const */

undefined8 GridItemFestivalZombieTent::GetCantPlantReason(void)

{
  return 0x17;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFestivalZombieTent::onTakeDamage(DamageInfo const&) */

void __thiscall
GridItemFestivalZombieTent::onTakeDamage(GridItemFestivalZombieTent *this,DamageInfo *param_1)

{
  DamageInfo aDStack_68 [16];
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68,param_1);
  if (this[0x1e4] != (GridItemFestivalZombieTent)0x0) {
    operator|=(auStack_58,0x100);
  }
  GridItemGravestone::onTakeDamage((DamageInfo *)this);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFestivalZombieTent::CalcRenderOrder() const */

void __thiscall GridItemFestivalZombieTent::CalcRenderOrder(GridItemFestivalZombieTent *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_04ca008c(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x635ce,uVar1,0);
  return;
}


/* non-virtual thunk to GridItemFestivalZombieTent::CalcRenderOrder() const */

void __thiscall GridItemFestivalZombieTent::CalcRenderOrder(GridItemFestivalZombieTent *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemFestivalZombieTent::SetTentLevel(int) */

void __thiscall
GridItemFestivalZombieTent::SetTentLevel(GridItemFestivalZombieTent *this,int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x1e8);
  lVar1 = FUN_04ca0118(uVar4,*(undefined8 *)(this + 0x1f0));
  lVar3 = 0;
  while (lVar3 + 1 != lVar1 + 1) {
    lVar2 = FUN_04ca0140(uVar4,lVar3);
    *(int *)(lVar2 + 0x1c) = param_1;
    lVar3 = lVar3 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFestivalZombieTent::StaticClassInit() */

void GridItemFestivalZombieTent::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemFestivalZombieTent");
    (*pcVar2)(plVar1,asStack_10,FUN_04ca2644,0x208,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFestivalZombieTent::StaticGetClass() */

long * GridItemFestivalZombieTent::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemFestivalZombieTent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFestivalZombieTent::GetClass() const */

long * GridItemFestivalZombieTent::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemFestivalZombieTent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFestivalZombieTent::getZombieLevelInitial(std::string) */

void __thiscall
GridItemFestivalZombieTent::getZombieLevelInitial(GridItemFestivalZombieTent *this,string *param_2)

{
  char cVar1;
  bool bVar2;
  TentZombieWeights *pTVar3;
  undefined8 local_38;
  undefined8 local_30;
  TentZombieWeights aTStack_28 [16];
  string asStack_18 [12];
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1e8));
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x1e8));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    if (!bVar2) {
      local_c = 0;
LAB_04ca1654:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(local_c);
    }
    pTVar3 = (TentZombieWeights *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    TentZombieWeights::TentZombieWeights(aTStack_28,pTVar3);
    cVar1 = std::operator==(asStack_18,param_2);
    if (cVar1 != '\0') {
      TentZombieWeights::~TentZombieWeights(aTStack_28);
      goto LAB_04ca1654;
    }
    TentZombieWeights::~TentZombieWeights(aTStack_28);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_38);
  } while( true );
}


/* GridItemFestivalZombieTent::GridItemFestivalZombieTent() */

void __thiscall
GridItemFestivalZombieTent::GridItemFestivalZombieTent(GridItemFestivalZombieTent *this)

{
  undefined4 uVar1;
  
  GridItemGravestone::GridItemGravestone((GridItemGravestone *)this);
  *(undefined ***)this = &PTR_GetClass_069979a0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemFestivalZombieTent_06997c60;
  uVar1 = PVZ_EOT();
  this[0x1e4] = (GridItemFestivalZombieTent)0x0;
  *(undefined4 *)(this + 0x1e0) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1e8));
  return;
}


/* GridItemFestivalZombieTent::StaticNew() */

GridItemFestivalZombieTent * GridItemFestivalZombieTent::StaticNew(void)

{
  GridItemFestivalZombieTent *this;
  
  this = ::operator_new(0x208);
  GridItemFestivalZombieTent(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFestivalZombieTent::KillGridItem() */

void __thiscall GridItemFestivalZombieTent::KillGridItem(GridItemFestivalZombieTent *this)

{
  RtObject *this_00;
  ZombieTentAnimRig *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1e4] == (GridItemFestivalZombieTent)0x0) {
    GridItemAnimation::GetAnimRig();
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    pZVar1 = Sexy::RtObject::Cast<ZombieTentAnimRig>(this_00);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onDestroyAnimCompleted");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieTentAnimRig::PlayDestroy(pZVar1,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  }
  this[0x1e4] = (GridItemFestivalZombieTent)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFestivalZombieTent::onPlaceOnBoard() */

void __thiscall GridItemFestivalZombieTent::onPlaceOnBoard(GridItemFestivalZombieTent *this)

{
  int iVar1;
  int iVar2;
  Plant *this_00;
  long *plVar3;
  Board *this_01;
  code *pcVar4;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = SharkMinion::getRow((SharkMinion *)this);
  iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_68,"");
  this_00 = (Plant *)Board::GetPlantAt(this_01,iVar2,iVar1,asStack_68);
  std::string::~string(asStack_68);
  nop();
  if (this_00 != (Plant *)0x0) {
    Plant::beThrown(this_00);
  }
  plVar3 = (long *)FUN_04ca1e50(iVar2,iVar1);
  if (plVar3 != (long *)0x0) {
    pcVar4 = *(code **)(*plVar3 + 0x120);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,asStack_68,this,aPStack_78,0);
    (*pcVar4)(plVar3,asStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFestivalZombieTent::setValues(float, float, std::vector<TentZombieWeights,
   std::allocator<TentZombieWeights> >) */

void __thiscall
GridItemFestivalZombieTent::setValues
          (undefined4 param_1,undefined4 param_2,GridItemFestivalZombieTent *this,vector *param_4)

{
  float fVar1;
  
  FUN_04ca007c(this + 300);
  FUN_04ca0084(param_1,this + 0x128);
  std::vector<TentZombieWeights,std::allocator<TentZombieWeights>>::operator=
            ((vector<TentZombieWeights,std::allocator<TentZombieWeights>> *)(this + 0x1e8),param_4);
  *(undefined4 *)(this + 0x200) = param_2;
  fVar1 = (float)PVZ_T();
  FUN_04ca00f8(fVar1 + *(float *)(this + 0x200),this + 0x1e0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFestivalZombieTent::onGridItemInitialize() */

void __thiscall GridItemFestivalZombieTent::onGridItemInitialize(GridItemFestivalZombieTent *this)

{
  GridItemFestivalZombieTentProps *pGVar1;
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
  this[0x1e4] = (GridItemFestivalZombieTent)0x0;
  pGVar1 = GridItem::GetProps<GridItemFestivalZombieTentProps>();
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
  FUN_04ca00f8(fVar5 + fVar4,this + 0x1e0);
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
/* GridItemFestivalZombieTent::SpawnZombie(Sexy::RtWeakPtr<ZombieType const>) */

void __thiscall
GridItemFestivalZombieTent::SpawnZombie
          (GridItemFestivalZombieTent *this,RtMixedPtr<Sexy::Image> *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  GridItemFestivalZombieTentProps *pGVar4;
  ZombieType *this_00;
  Zombie *this_01;
  long lVar5;
  undefined8 *puVar6;
  ZombieWalkOutSubSystem *pZVar7;
  undefined4 *puVar8;
  long *plVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(param_2);
  if (cVar1 == '\0') {
    pGVar4 = GridItem::GetProps<GridItemFestivalZombieTentProps>();
    this_00 = (ZombieType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    ZombieType::EnsureResourceGroupsLoaded(this_00);
    plVar9 = *(long **)(gLawnApp + 0x9f0);
    pcVar10 = *(code **)(*plVar9 + 0x318);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)param_2);
    this_01 = (Zombie *)(*pcVar10)(plVar9,(RtWeakPtr<Sexy::SoundResource> *)&local_18,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    pcVar10 = *(code **)(*(long *)this_01 + 0x198);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    FUN_05475d88((RtWeakPtr<Sexy::SoundResource> *)&local_18,lVar5 + 8);
    uVar3 = getZombieLevelInitial(this,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
    (*pcVar10)(this_01,uVar3);
    std::string::~string((string *)&local_18);
    (**(code **)(*(long *)this_01 + 0x9d8))(this_01);
    std::string::string((string *)&local_18,"FSTent");
    Zombie::AddTag(this_01,(string *)&local_18);
    std::string::~string((string *)&local_18);
    nop();
    bVar2 = Sexy::RtObject::IsA<ZombieChicken>((RtObject *)this_01);
    if (!bVar2) {
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
    _local_18 = CONCAT44((int)((ulong)*puVar6 >> 0x20),(float)*(int *)(pGVar4 + 0x128) + local_18);
    BoardEntity::PlaceOnBoard((SexyVector3 *)this_01);
    fVar11 = (float)PVZ_T();
    fVar12 = (float)RandRangeFloat(*(float *)(this + 0x200) - 1.0,*(float *)(this + 0x200) + 1.0);
    FUN_04ca00f8(fVar12 + fVar11,this + 0x1e0);
    MessageRouter::Post<Zombie*,Zombie*>
              ((MessageRouter *)gMessageRouter,Message::ZombieSpawnedByTent,this_01);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFestivalZombieTent::onDestroyAnimCompleted() */

void __thiscall GridItemFestivalZombieTent::onDestroyAnimCompleted(GridItemFestivalZombieTent *this)

{
  string *psVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetProps<GridItemFestivalZombieTentProps>();
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  SpawnZombie(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  (**(code **)(*(long *)this + 0x48))(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFestivalZombieTent::pickBasicZombie() */

void GridItemFestivalZombieTent::pickBasicZombie(void)

{
  bool bVar1;
  long in_x0;
  BasicZombieWeights *pBVar2;
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
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(in_x0 + 0x1e8));
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(in_x0 + 0x1e8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar1) {
    pBVar2 = (BasicZombieWeights *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    BasicZombieWeights::BasicZombieWeights(aBStack_58,pBVar2);
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
/* GridItemFestivalZombieTent::onUpdate() */

void __thiscall GridItemFestivalZombieTent::onUpdate(GridItemFestivalZombieTent *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  GridItemFestivalZombieTentProps *pGVar6;
  ulong uVar7;
  undefined8 *puVar8;
  Zombie *pZVar9;
  long lVar10;
  string *psVar11;
  string *psVar12;
  ulong uVar13;
  ZombieType *this_00;
  ZombieWalkOutSubSystem *pZVar14;
  undefined4 *puVar15;
  long *plVar16;
  undefined8 uVar17;
  ulong uVar18;
  code *pcVar19;
  float fVar20;
  float fVar21;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0xa8))(this,1);
  pGVar6 = GridItem::GetProps<GridItemFestivalZombieTentProps>();
  fVar21 = *(float *)(this + 0x1e0);
  fVar20 = (float)PVZ_T();
  if ((fVar21 <= fVar20) && (this[0x1e4] == (GridItemFestivalZombieTent)0x0)) {
    psVar11 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    pickBasicZombie();
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar11);
    std::string::~string((string *)&local_20);
    this_00 = (ZombieType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
    ZombieType::EnsureResourceGroupsLoaded(this_00);
    plVar16 = *(long **)(gLawnApp + 0x9f0);
    pcVar19 = *(code **)(*plVar16 + 0x318);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)asStack_28);
    pZVar9 = (Zombie *)(*pcVar19)(plVar16,(string *)&local_20,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    pcVar19 = *(code **)(*(long *)pZVar9 + 0x198);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
    FUN_05475d88((string *)&local_20,lVar10 + 8);
    uVar3 = getZombieLevelInitial(this,(string *)&local_20);
    (*pcVar19)(pZVar9,uVar3);
    std::string::~string((string *)&local_20);
    (**(code **)(*(long *)pZVar9 + 0x9d8))(pZVar9);
    std::string::string((string *)&local_20,"FSTent");
    Zombie::AddTag(pZVar9,(string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
    bVar2 = Sexy::RtObject::IsA<ZombieChicken>((RtObject *)pZVar9);
    if (!bVar2) {
      pZVar14 = Board::GetGameSubSystem<ZombieWalkOutSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      puVar15 = (undefined4 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)pZVar9);
      ZombieWalkOutSubSystem::OutZombie(*puVar15,puVar15[1],puVar15[2],0x40000000,pZVar14,pZVar9);
    }
    puVar8 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_18 = *(undefined4 *)(puVar8 + 1);
    local_20._0_4_ = (float)*puVar8;
    local_20 = CONCAT44((int)((ulong)*puVar8 >> 0x20),
                        (float)*(int *)(pGVar6 + 0x128) + (float)local_20);
    BoardEntity::PlaceOnBoard((SexyVector3 *)pZVar9);
    fVar20 = (float)PVZ_T();
    fVar21 = (float)RandRangeFloat(*(float *)(this + 0x200) - 1.0,*(float *)(this + 0x200) + 1.0);
    FUN_04ca00f8(fVar21 + fVar20,this + 0x1e0);
    MessageRouter::Post<Zombie*,Zombie*>
              ((MessageRouter *)gMessageRouter,Message::ZombieSpawnedByTent,pZVar9);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
  }
  uVar18 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  uVar4 = SharkMinion::getRow((SharkMinion *)this);
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,uVar3,
             uVar4);
  uVar17 = local_20;
  uVar7 = FUN_04ca0148(local_20,CONCAT44(uStack_14,local_18));
  if (uVar7 != 0) {
    do {
      puVar8 = (undefined8 *)FUN_04ca0154(uVar17,uVar18);
      if ((RtObject *)*puVar8 != (RtObject *)0x0) {
        pZVar9 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar8);
        if (pZVar9 != (Zombie *)0x0) {
          std::string::string(asStack_28,"FSTent");
          cVar1 = Zombie::HasTag(pZVar9,asStack_28);
          std::string::~string(asStack_28);
          nop();
          if (cVar1 == '\0') {
            uVar7 = 0;
            lVar10 = FUN_04ca015c(*(undefined8 *)(pGVar6 + 0x130),*(undefined8 *)(pGVar6 + 0x138));
            if (lVar10 != 0) {
              do {
                psVar11 = (string *)Zombie::GetTypeName(pZVar9);
                uVar17 = *(undefined8 *)(pGVar6 + 0x130);
                psVar12 = (string *)FUN_04ca0184(uVar17,uVar7);
                cVar1 = std::operator==(psVar11,psVar12);
                if (cVar1 != '\0') {
                  cVar1 = Zombie::IsControlled(pZVar9);
                  if (((cVar1 == '\0') && (cVar1 = Zombie::IsInvisible(pZVar9), cVar1 == '\0')) &&
                     (iVar5 = Zombie::getZombieStateSerialization(pZVar9), iVar5 == 1)) {
                    FUN_04ca0564(pZVar9 + 0x59a);
                    (**(code **)(*(long *)pZVar9 + 0x48))(pZVar9);
                    psVar11 = (string *)
                              Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr()
                    ;
                    FUN_04ca0184(*(undefined8 *)(pGVar6 + 0x130),uVar7);
                    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar11);
                    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                              ((RtWeakPtr<Sexy::SoundResource> *)asStack_28,
                               (RtWeakPtrBase *)aRStack_30);
                    SpawnZombie(this,asStack_28);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
                    uVar17 = *(undefined8 *)(pGVar6 + 0x130);
                  }
                  else {
                    uVar17 = *(undefined8 *)(pGVar6 + 0x130);
                  }
                }
                uVar7 = uVar7 + 1;
                uVar13 = FUN_04ca015c(uVar17,*(undefined8 *)(pGVar6 + 0x138));
              } while (uVar7 < uVar13);
            }
          }
        }
        uVar17 = local_20;
        uVar7 = FUN_04ca0148(local_20,CONCAT44(uStack_14,local_18));
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar7);
  }
  GridItemGravestone::onUpdate((GridItemGravestone *)this);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFestivalZombieTent::~GridItemFestivalZombieTent() */

void __thiscall
GridItemFestivalZombieTent::~GridItemFestivalZombieTent(GridItemFestivalZombieTent *this)

{
  *(undefined ***)this = &PTR_GetClass_069979a0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemFestivalZombieTent_06997c60;
  std::vector<TentZombieWeights,std::allocator<TentZombieWeights>>::~vector
            ((vector<TentZombieWeights,std::allocator<TentZombieWeights>> *)(this + 0x1e8));
  GridItemGravestone::~GridItemGravestone((GridItemGravestone *)this);
  return;
}


/* non-virtual thunk to GridItemFestivalZombieTent::~GridItemFestivalZombieTent() */

void __thiscall
GridItemFestivalZombieTent::~GridItemFestivalZombieTent(GridItemFestivalZombieTent *this)

{
  ~GridItemFestivalZombieTent(this + -0x10);
  return;
}


/* GridItemFestivalZombieTent::~GridItemFestivalZombieTent() */

void __thiscall
GridItemFestivalZombieTent::~GridItemFestivalZombieTent(GridItemFestivalZombieTent *this)

{
  ~GridItemFestivalZombieTent(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemFestivalZombieTent::~GridItemFestivalZombieTent() */

void __thiscall
GridItemFestivalZombieTent::~GridItemFestivalZombieTent(GridItemFestivalZombieTent *this)

{
  ~GridItemFestivalZombieTent(this + -0x10);
  return;
}

