// Class: ZombieRainSpawnerProps


/* ZombieRainSpawnerProps::GetWaveStartMessage() const */

void ZombieRainSpawnerProps::GetWaveStartMessage(void)

{
  long in_x0;
  
  Sexy::ToWString((string *)(in_x0 + 0x60));
  return;
}


/* ZombieRainSpawnerProps::ZombieRainSpawnerProps() */

void __thiscall ZombieRainSpawnerProps::ZombieRainSpawnerProps(ZombieRainSpawnerProps *this)

{
  undefined4 uVar1;
  
  ZombieSpawnerActionProps::ZombieSpawnerActionProps((ZombieSpawnerActionProps *)this);
  *(undefined4 *)(this + 0x40) = 1;
  *(undefined4 *)(this + 0x44) = 1;
  *(undefined ***)this = &PTR_GetActionClass_069121b0;
  *(undefined4 *)(this + 0x48) = 0x3f800000;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x54) = 5;
  *(undefined4 *)(this + 0x4c) = uVar1;
  *(undefined4 *)(this + 0x58) = 8;
  *(undefined4 *)(this + 0x50) = 0x3fc00000;
  Set8BytesTo0(this + 0x60);
  Set8BytesTo0(this + 0x68);
  return;
}


/* ZombieRainSpawnerProps::~ZombieRainSpawnerProps() */

void __thiscall ZombieRainSpawnerProps::~ZombieRainSpawnerProps(ZombieRainSpawnerProps *this)

{
  *(undefined ***)this = &PTR_GetActionClass_069121b0;
  std::string::~string((string *)(this + 0x68));
  std::string::~string((string *)(this + 0x60));
  ZombieSpawnerActionProps::~ZombieSpawnerActionProps((ZombieSpawnerActionProps *)this);
  return;
}


/* ZombieRainSpawnerProps::~ZombieRainSpawnerProps() */

void __thiscall ZombieRainSpawnerProps::~ZombieRainSpawnerProps(ZombieRainSpawnerProps *this)

{
  ~ZombieRainSpawnerProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRainSpawnerProps::StaticClassInit() */

void ZombieRainSpawnerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieRainSpawnerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0493852c,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRainSpawnerProps::StaticGetClass() */

long * ZombieRainSpawnerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRainSpawnerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRainSpawnerProps::GetActionClass() const */

long * ZombieRainSpawnerProps::GetActionClass(void)

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
  (*pcVar3)(plVar1,"ZombieRainSpawnerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRainSpawnerProps::GetZombieName() const */

void ZombieRainSpawnerProps::GetZombieName(void)

{
  char cVar1;
  size_t in_x2;
  string *in_x8;
  
  FUN_05475d88();
  cVar1 = FUN_0547419c();
  if (cVar1 != '\0') {
    std::string::append(in_x8,"future_imp",in_x2);
  }
  return;
}


/* ZombieRainSpawnerProps::StaticNew() */

ZombieRainSpawnerProps * ZombieRainSpawnerProps::StaticNew(void)

{
  ZombieRainSpawnerProps *this;
  
  this = ::operator_new(0x70);
  ZombieRainSpawnerProps(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRainSpawnerProps::GatherSpawnedZombieTypes(std::set<ZombieType const*, std::less<ZombieType
   const*>, std::allocator<ZombieType const*> >&) */

void __thiscall
ZombieRainSpawnerProps::GatherSpawnedZombieTypes(ZombieRainSpawnerProps *this,set *param_1)

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

