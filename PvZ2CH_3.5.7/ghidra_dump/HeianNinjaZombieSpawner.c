// Class: HeianNinjaZombieSpawner


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianNinjaZombieSpawner::StaticClassInit() */

void HeianNinjaZombieSpawner::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeianNinjaZombieSpawner");
    (*pcVar2)(plVar1,asStack_10,FUN_03d25648,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeianNinjaZombieSpawner::StaticGetClass() */

long * HeianNinjaZombieSpawner::StaticGetClass(void)

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
  uVar2 = ZombieRainSpawner::StaticGetClass();
  (*pcVar3)(plVar1,"HeianNinjaZombieSpawner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeianNinjaZombieSpawner::HeianNinjaZombieSpawner() */

void __thiscall HeianNinjaZombieSpawner::HeianNinjaZombieSpawner(HeianNinjaZombieSpawner *this)

{
  ZombieRainSpawner::ZombieRainSpawner((ZombieRainSpawner *)this);
  *(undefined ***)this = &PTR_GetActionClass_06765e30;
  return;
}


/* HeianNinjaZombieSpawner::StaticNew() */

HeianNinjaZombieSpawner * HeianNinjaZombieSpawner::StaticNew(void)

{
  HeianNinjaZombieSpawner *this;
  
  this = ::operator_new(0x40);
  HeianNinjaZombieSpawner(this);
  return this;
}


/* HeianNinjaZombieSpawner::~HeianNinjaZombieSpawner() */

void __thiscall HeianNinjaZombieSpawner::~HeianNinjaZombieSpawner(HeianNinjaZombieSpawner *this)

{
  *(undefined ***)this = &PTR_GetActionClass_06765e30;
  ZombieRainSpawner::~ZombieRainSpawner((ZombieRainSpawner *)this);
  return;
}


/* HeianNinjaZombieSpawner::~HeianNinjaZombieSpawner() */

void __thiscall HeianNinjaZombieSpawner::~HeianNinjaZombieSpawner(HeianNinjaZombieSpawner *this)

{
  ~HeianNinjaZombieSpawner(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianNinjaZombieSpawner::PostSpawnZombieSetup(Zombie*, Sexy::SexyVector3, float, float) */

void __thiscall
HeianNinjaZombieSpawner::PostSpawnZombieSetup
          (ZombieDropData *param_1_00,float param_2,undefined4 param_3,undefined8 param_4,
          Zombie *param_1)

{
  int iVar1;
  int iVar2;
  HeianSmokeBombSubsystem *this;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  PVPZoneData aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x80))(param_1,1);
  Zombie::SetIsTargetable(param_1,false);
  iVar1 = BoardTransforms::BoardSpaceToGridX((float)param_1_00._0_4_);
  iVar2 = BoardTransforms::BoardSpaceToGridY(param_2);
  this = Board::GetGameSubSystem<HeianSmokeBombSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
  ZombieDropData::ZombieDropData(param_1_00._0_4_,param_2,param_3,aPStack_20,aRStack_28);
  HeianSmokeBombSubsystem::ActivateSmokeBomb(this,true,1.0,iVar2,iVar1,(ZombieDropData *)aPStack_20)
  ;
  PVPZoneData::~PVPZoneData(aPStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianNinjaZombieSpawner::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
HeianNinjaZombieSpawner::AddResourceRequirements(HeianNinjaZombieSpawner *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieRainSpawner::AddResourceRequirements((ZombieRainSpawner *)this,param_1);
  std::string::string(asStack_10,"HeianSmokeBomb");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

