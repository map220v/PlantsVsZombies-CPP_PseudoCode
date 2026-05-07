// Class: GridItemCardGameGravestoneZombieDeathSpawner


/* GridItemCardGameGravestoneZombieDeathSpawner::onUpdate() */

void __thiscall
GridItemCardGameGravestoneZombieDeathSpawner::onUpdate
          (GridItemCardGameGravestoneZombieDeathSpawner *this)

{
  code *pcVar1;
  float fVar2;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  fVar2 = (float)PVZ_Dt();
  pcVar1 = *(code **)(*(long *)this + 0xa8);
  *(float *)(this + 0x1d0) = *(float *)(this + 0x1d0) + fVar2;
  (*pcVar1)(this,0);
  RealObject::SetUseGroundClipRect((RealObject *)this,true);
  GridItemGravestone::updateState((GridItemGravestone *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameGravestoneZombieDeathSpawner::StaticClassInit() */

void GridItemCardGameGravestoneZombieDeathSpawner::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCardGameGravestoneZombieDeathSpawner");
    (*pcVar2)(plVar1,asStack_10,FUN_03d5dfa0,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameGravestoneZombieDeathSpawner::StaticGetClass() */

long * GridItemCardGameGravestoneZombieDeathSpawner::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCardGameGravestoneZombieDeathSpawner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameGravestoneZombieDeathSpawner::GetClass() const */

long * GridItemCardGameGravestoneZombieDeathSpawner::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCardGameGravestoneZombieDeathSpawner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameGravestoneZombieDeathSpawner::GridItemCardGameGravestoneZombieDeathSpawner() */

void __thiscall
GridItemCardGameGravestoneZombieDeathSpawner::GridItemCardGameGravestoneZombieDeathSpawner
          (GridItemCardGameGravestoneZombieDeathSpawner *this)

{
  GridItemGravestone::GridItemGravestone((GridItemGravestone *)this);
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined ***)this = &PTR_GetClass_0676bcc0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameGravestoneZombieDeathSpawner_0676bf80;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1e8));
  return;
}


/* GridItemCardGameGravestoneZombieDeathSpawner::StaticNew() */

GridItemCardGameGravestoneZombieDeathSpawner *
GridItemCardGameGravestoneZombieDeathSpawner::StaticNew(void)

{
  GridItemCardGameGravestoneZombieDeathSpawner *this;
  
  this = ::operator_new(0x1f0);
  GridItemCardGameGravestoneZombieDeathSpawner(this);
  return this;
}


/* GridItemCardGameGravestoneZombieDeathSpawner::SetSpawnZombieType(Sexy::RtWeakPtr<ZombieType
   const>) */

void __thiscall
GridItemCardGameGravestoneZombieDeathSpawner::SetSpawnZombieType
          (GridItemCardGameGravestoneZombieDeathSpawner *this,RtWeakPtr *param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  bool bVar1;
  ZombieType *this_01;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x1e8);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,param_2);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
  if (!bVar1) {
    return;
  }
  this_01 = (ZombieType *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  ZombieType::EnsureResourceGroupsLoaded(this_01);
  return;
}


/* GridItemCardGameGravestoneZombieDeathSpawner::registerForEvents() */

void __thiscall
GridItemCardGameGravestoneZombieDeathSpawner::registerForEvents
          (GridItemCardGameGravestoneZombieDeathSpawner *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GridItemGravestone::registerForEvents((GridItemGravestone *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnZombieDied);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<GridItemCardGameGravestoneZombieDeathSpawner,void(GridItemCardGameGravestoneZombieDeathSpawner::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameGravestoneZombieDeathSpawner::OnZombieDied(Zombie*, DamageInfo const*) */

void GridItemCardGameGravestoneZombieDeathSpawner::OnZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  int iVar1;
  SexyVector3 *pSVar2;
  long *plVar3;
  code *pcVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  long local_8;
  
  iVar1 = *(int *)(param_1 + 0x1e0);
  local_8 = ___stack_chk_guard;
  *(int *)(param_1 + 0x1e0) = iVar1 + 1;
  if (2 < iVar1 + 1) {
    Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
    local_30 = 1;
    local_2c = 0;
    local_2b = 1;
    plVar3 = *(long **)(gLawnApp + 0x9f0);
    pcVar4 = *(code **)(*plVar3 + 0x318);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)(param_1 + 0x1e8));
    pSVar2 = (SexyVector3 *)(*pcVar4)(plVar3,aRStack_38,0xfffffffb,(SpawnZombieParams *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    (**(code **)(*(long *)pSVar2 + 0x198))(pSVar2,1);
    RealObject::JoinTeam((RealObject *)pSVar2,1);
    Zombie::SetFacing((Zombie *)pSVar2,1);
    std::
    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)param_1);
    BoardEntity::PlaceOnBoard(pSVar2);
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameGravestoneZombieDeathSpawner::onGridItemInitialize() */

void __thiscall
GridItemCardGameGravestoneZombieDeathSpawner::onGridItemInitialize
          (GridItemCardGameGravestoneZombieDeathSpawner *this)

{
  string *psVar1;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemGravestone::onGridItemInitialize((GridItemGravestone *)this);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_18,"cardgame_tutorial");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  SetSpawnZombieType(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  FUN_03d5dc78(this + 0x24);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameGravestoneZombieDeathSpawner::~GridItemCardGameGravestoneZombieDeathSpawner() */

void __thiscall
GridItemCardGameGravestoneZombieDeathSpawner::~GridItemCardGameGravestoneZombieDeathSpawner
          (GridItemCardGameGravestoneZombieDeathSpawner *this)

{
  *(undefined ***)this = &PTR_GetClass_0676bcc0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameGravestoneZombieDeathSpawner_0676bf80;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e8));
  GridItemGravestone::~GridItemGravestone((GridItemGravestone *)this);
  return;
}


/* non-virtual thunk to
   GridItemCardGameGravestoneZombieDeathSpawner::~GridItemCardGameGravestoneZombieDeathSpawner() */

void __thiscall
GridItemCardGameGravestoneZombieDeathSpawner::~GridItemCardGameGravestoneZombieDeathSpawner
          (GridItemCardGameGravestoneZombieDeathSpawner *this)

{
  ~GridItemCardGameGravestoneZombieDeathSpawner(this + -0x10);
  return;
}


/* GridItemCardGameGravestoneZombieDeathSpawner::~GridItemCardGameGravestoneZombieDeathSpawner() */

void __thiscall
GridItemCardGameGravestoneZombieDeathSpawner::~GridItemCardGameGravestoneZombieDeathSpawner
          (GridItemCardGameGravestoneZombieDeathSpawner *this)

{
  ~GridItemCardGameGravestoneZombieDeathSpawner(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   GridItemCardGameGravestoneZombieDeathSpawner::~GridItemCardGameGravestoneZombieDeathSpawner() */

void __thiscall
GridItemCardGameGravestoneZombieDeathSpawner::~GridItemCardGameGravestoneZombieDeathSpawner
          (GridItemCardGameGravestoneZombieDeathSpawner *this)

{
  ~GridItemCardGameGravestoneZombieDeathSpawner(this + -0x10);
  return;
}

