// Class: RaidingPartyZombieSpawnerProps


/* RaidingPartyZombieSpawnerProps::GetActionClass() const */

long * RaidingPartyZombieSpawnerProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (RaidingPartyZombieSpawner::sClass != (long *)0x0) {
    return RaidingPartyZombieSpawner::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  RaidingPartyZombieSpawner::sClass = plVar1;
  uVar2 = ZombieSpawnerAction::StaticGetClass();
  (*pcVar3)(plVar1,"RaidingPartyZombieSpawner",uVar2,RaidingPartyZombieSpawner::StaticNew);
  RaidingPartyZombieSpawner::StaticClassInit();
  return RaidingPartyZombieSpawner::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RaidingPartyZombieSpawnerProps::StaticClassInit() */

void RaidingPartyZombieSpawnerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"RaidingPartyZombieSpawnerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f19530,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RaidingPartyZombieSpawnerProps::StaticGetClass() */

long * RaidingPartyZombieSpawnerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RaidingPartyZombieSpawnerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RaidingPartyZombieSpawnerProps::GetClass() const */

long * RaidingPartyZombieSpawnerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"RaidingPartyZombieSpawnerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RaidingPartyZombieSpawnerProps::RaidingPartyZombieSpawnerProps() */

void __thiscall
RaidingPartyZombieSpawnerProps::RaidingPartyZombieSpawnerProps(RaidingPartyZombieSpawnerProps *this)

{
  undefined4 uVar1;
  
  ZombieSpawnerActionProps::ZombieSpawnerActionProps((ZombieSpawnerActionProps *)this);
  *(undefined4 *)(this + 0x44) = 1;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_GetClass_06796fe0;
  *(undefined4 *)(this + 0x48) = 0x3f800000;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x4c) = uVar1;
  return;
}


/* RaidingPartyZombieSpawnerProps::StaticNew() */

RaidingPartyZombieSpawnerProps * RaidingPartyZombieSpawnerProps::StaticNew(void)

{
  RaidingPartyZombieSpawnerProps *this;
  
  this = ::operator_new(0x50);
  RaidingPartyZombieSpawnerProps(this);
  return this;
}


/* RaidingPartyZombieSpawnerProps::~RaidingPartyZombieSpawnerProps() */

void __thiscall
RaidingPartyZombieSpawnerProps::~RaidingPartyZombieSpawnerProps
          (RaidingPartyZombieSpawnerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06796fe0;
  ZombieSpawnerActionProps::~ZombieSpawnerActionProps((ZombieSpawnerActionProps *)this);
  return;
}


/* RaidingPartyZombieSpawnerProps::~RaidingPartyZombieSpawnerProps() */

void __thiscall
RaidingPartyZombieSpawnerProps::~RaidingPartyZombieSpawnerProps
          (RaidingPartyZombieSpawnerProps *this)

{
  ~RaidingPartyZombieSpawnerProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RaidingPartyZombieSpawnerProps::GatherSpawnedZombieTypes(std::set<ZombieType const*,
   std::less<ZombieType const*>, std::allocator<ZombieType const*> >&) */

void __thiscall
RaidingPartyZombieSpawnerProps::GatherSpawnedZombieTypes
          (RaidingPartyZombieSpawnerProps *this,set *param_1)

{
  string *psVar1;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  ResourceInfo *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_20,"swashbuckler");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  local_10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  std::set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>::insert
            ((set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>
              *)param_1,(ZombieType **)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

