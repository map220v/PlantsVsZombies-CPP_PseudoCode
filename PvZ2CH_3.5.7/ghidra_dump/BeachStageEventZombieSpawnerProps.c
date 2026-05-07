// Class: BeachStageEventZombieSpawnerProps


/* BeachStageEventZombieSpawnerProps::GetActionClass() const */

long * BeachStageEventZombieSpawnerProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (BeachStageEventZombieSpawner::sClass != (long *)0x0) {
    return BeachStageEventZombieSpawner::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  BeachStageEventZombieSpawner::sClass = plVar1;
  uVar2 = ZombieSpawnerAction::StaticGetClass();
  (*pcVar3)(plVar1,"BeachStageEventZombieSpawner",uVar2,BeachStageEventZombieSpawner::StaticNew);
  BeachStageEventZombieSpawner::StaticClassInit();
  return BeachStageEventZombieSpawner::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeachStageEventZombieSpawnerProps::StaticClassInit() */

void BeachStageEventZombieSpawnerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"BeachStageEventZombieSpawnerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03cf59b8,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeachStageEventZombieSpawnerProps::StaticGetClass() */

long * BeachStageEventZombieSpawnerProps::StaticGetClass(void)

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
  uVar2 = ZombieSpawnerActionProps::StaticGetClass();
  (*pcVar3)(plVar1,"BeachStageEventZombieSpawnerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeachStageEventZombieSpawnerProps::GetClass() const */

long * BeachStageEventZombieSpawnerProps::GetClass(void)

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
  uVar2 = ZombieSpawnerActionProps::StaticGetClass();
  (*pcVar3)(plVar1,"BeachStageEventZombieSpawnerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeachStageEventZombieSpawnerProps::GetZombieName() const */

void BeachStageEventZombieSpawnerProps::GetZombieName(void)

{
  char cVar1;
  size_t in_x2;
  string *in_x8;
  
  FUN_05475d88();
  cVar1 = FUN_0547419c();
  if (cVar1 != '\0') {
    std::string::append(in_x8,"beach",in_x2);
  }
  return;
}


/* BeachStageEventZombieSpawnerProps::BeachStageEventZombieSpawnerProps() */

void __thiscall
BeachStageEventZombieSpawnerProps::BeachStageEventZombieSpawnerProps
          (BeachStageEventZombieSpawnerProps *this)

{
  size_t in_x2;
  undefined4 uVar1;
  
  ZombieSpawnerActionProps::ZombieSpawnerActionProps((ZombieSpawnerActionProps *)this);
  *(undefined4 *)(this + 0x40) = 1;
  *(undefined4 *)(this + 0x44) = 1;
  *(undefined ***)this = &PTR_GetClass_06761d40;
  *(undefined4 *)(this + 0x48) = 0x3f800000;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x50) = 5;
  *(undefined4 *)(this + 0x54) = 8;
  *(undefined4 *)(this + 0x4c) = uVar1;
  Set8BytesTo0(this + 0x58);
  Set8BytesTo0((string *)(this + 0x60));
  std::string::append((string *)(this + 0x60),"[WARNING_LOW_TIDE]",in_x2);
  return;
}


/* BeachStageEventZombieSpawnerProps::StaticNew() */

BeachStageEventZombieSpawnerProps * BeachStageEventZombieSpawnerProps::StaticNew(void)

{
  BeachStageEventZombieSpawnerProps *this;
  
  this = ::operator_new(0x68);
  BeachStageEventZombieSpawnerProps(this);
  return this;
}


/* BeachStageEventZombieSpawnerProps::~BeachStageEventZombieSpawnerProps() */

void __thiscall
BeachStageEventZombieSpawnerProps::~BeachStageEventZombieSpawnerProps
          (BeachStageEventZombieSpawnerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06761d40;
  std::string::~string((string *)(this + 0x60));
  std::string::~string((string *)(this + 0x58));
  ZombieSpawnerActionProps::~ZombieSpawnerActionProps((ZombieSpawnerActionProps *)this);
  return;
}


/* BeachStageEventZombieSpawnerProps::~BeachStageEventZombieSpawnerProps() */

void __thiscall
BeachStageEventZombieSpawnerProps::~BeachStageEventZombieSpawnerProps
          (BeachStageEventZombieSpawnerProps *this)

{
  ~BeachStageEventZombieSpawnerProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeachStageEventZombieSpawnerProps::GatherSpawnedZombieTypes(std::set<ZombieType const*,
   std::less<ZombieType const*>, std::allocator<ZombieType const*> >&) */

void __thiscall
BeachStageEventZombieSpawnerProps::GatherSpawnedZombieTypes
          (BeachStageEventZombieSpawnerProps *this,set *param_1)

{
  string *psVar1;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  ResourceInfo *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  GetZombieName();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  local_10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  std::set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>::insert
            ((set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>
              *)param_1,(ZombieType **)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

