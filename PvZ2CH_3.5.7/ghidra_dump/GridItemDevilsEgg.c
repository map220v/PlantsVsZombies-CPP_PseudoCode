// Class: GridItemDevilsEgg


/* GridItemDevilsEgg::~GridItemDevilsEgg() */

void __thiscall GridItemDevilsEgg::~GridItemDevilsEgg(GridItemDevilsEgg *this)

{
  *(undefined ***)this = &PTR_GetClass_069b49a0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemDevilsEgg_069b4c80;
  GridItemAnimController::~GridItemAnimController((GridItemAnimController *)this);
  return;
}


/* non-virtual thunk to GridItemDevilsEgg::~GridItemDevilsEgg() */

void __thiscall GridItemDevilsEgg::~GridItemDevilsEgg(GridItemDevilsEgg *this)

{
  ~GridItemDevilsEgg(this + -0x10);
  return;
}


/* GridItemDevilsEgg::~GridItemDevilsEgg() */

void __thiscall GridItemDevilsEgg::~GridItemDevilsEgg(GridItemDevilsEgg *this)

{
  ~GridItemDevilsEgg(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemDevilsEgg::~GridItemDevilsEgg() */

void __thiscall GridItemDevilsEgg::~GridItemDevilsEgg(GridItemDevilsEgg *this)

{
  ~GridItemDevilsEgg(this + -0x10);
  return;
}


/* GridItemDevilsEgg::CalcRenderOrder() const */

void __thiscall GridItemDevilsEgg::CalcRenderOrder(GridItemDevilsEgg *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_04d616c0(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x64960,uVar1,1);
  return;
}


/* non-virtual thunk to GridItemDevilsEgg::CalcRenderOrder() const */

void __thiscall GridItemDevilsEgg::CalcRenderOrder(GridItemDevilsEgg *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemDevilsEgg::StaticClassInit() */

void GridItemDevilsEgg::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemDevilsEgg");
    (*pcVar2)(plVar1,asStack_10,FUN_04d62b74,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemDevilsEgg::StaticGetClass() */

long * GridItemDevilsEgg::StaticGetClass(void)

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
  uVar2 = GridItemAnimController::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemDevilsEgg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemDevilsEgg::GetClass() const */

long * GridItemDevilsEgg::GetClass(void)

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
  uVar2 = GridItemAnimController::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemDevilsEgg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemDevilsEgg::GridItemDevilsEgg() */

void __thiscall GridItemDevilsEgg::GridItemDevilsEgg(GridItemDevilsEgg *this)

{
  GridItemAnimController::GridItemAnimController((GridItemAnimController *)this);
  *(undefined4 *)(this + 0x1b4) = 1;
  this[0x1b8] = (GridItemDevilsEgg)0x0;
  *(undefined ***)this = &PTR_GetClass_069b49a0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemDevilsEgg_069b4c80;
  return;
}


/* GridItemDevilsEgg::StaticNew() */

GridItemDevilsEgg * GridItemDevilsEgg::StaticNew(void)

{
  GridItemDevilsEgg *this;
  
  this = ::operator_new(0x1c0);
  GridItemDevilsEgg(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemDevilsEgg::SpawnZombie() */

void __thiscall GridItemDevilsEgg::SpawnZombie(GridItemDevilsEgg *this)

{
  string *psVar1;
  ZombieType *this_00;
  Zombie *this_01;
  PopAnimRig *pPVar2;
  char *__s;
  long *plVar3;
  code *pcVar4;
  string asStack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_29;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1b8] == (GridItemDevilsEgg)0x0) {
    __s = "devils_alien_gargantuar";
  }
  else {
    __s = "super_devils_alien_gargantuar";
  }
  std::string::string(asStack_48,__s);
  nop();
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  this_00 = (ZombieType *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
  local_2c = 0;
  local_30 = *(undefined4 *)(this + 0x1b4);
  local_2b = 1;
  local_29 = 1;
  plVar3 = *(long **)(gLawnApp + 0x9f0);
  pcVar4 = *(code **)(*plVar3 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
  this_01 = (Zombie *)(*pcVar4)(plVar3,aRStack_38,0,(RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  if (this_01 != (Zombie *)0x0) {
    Zombie::StartWarpIn(this_01,1.75);
    std::
    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)this);
    BoardEntity::PlaceOnBoard((SexyVector3 *)this_01);
    RealObject::JoinTeam((RealObject *)this_01,1);
    Zombie::SetFacing(this_01,1);
    if (this[0x1b8] == (GridItemDevilsEgg)0x0) {
      pPVar2 = (PopAnimRig *)Zombie::GetAnimRig(this_01);
      std::string::string((string *)aRStack_38,"Gargantuar_Template_clows01");
      PopAnimRig::SetLayerVisibility(pPVar2,(string *)aRStack_38,false);
      std::string::~string((string *)aRStack_38);
      nop();
      pPVar2 = (PopAnimRig *)Zombie::GetAnimRig(this_01);
      std::string::string((string *)aRStack_38,"Gargantuar_Template_clows02");
      PopAnimRig::SetLayerVisibility(pPVar2,(string *)aRStack_38,false);
      std::string::~string((string *)aRStack_38);
      nop();
    }
  }
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemDevilsEgg::onUpdate() */

void __thiscall GridItemDevilsEgg::onUpdate(GridItemDevilsEgg *this)

{
  int iVar1;
  float fVar2;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  iVar1 = *(int *)(this + 0x1a8);
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        fVar2 = (float)PVZ_T();
        if (*(float *)(this + 0x1ac) < fVar2) {
          (**(code **)(*(long *)this + 0x2b8))(this);
        }
      }
      else if (iVar1 == 4) {
        (**(code **)(*(long *)this + 0x230))(this);
      }
    }
    return;
  }
  (**(code **)(*(long *)this + 0x2a8))(this);
  return;
}


/* GridItemDevilsEgg::KillGridItem() */

void __thiscall GridItemDevilsEgg::KillGridItem(GridItemDevilsEgg *this)

{
  SpawnZombie(this);
  GridItem::KillGridItem((GridItem *)this);
  return;
}

