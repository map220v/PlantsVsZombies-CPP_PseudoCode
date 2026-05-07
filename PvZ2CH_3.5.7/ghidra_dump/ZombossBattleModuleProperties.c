// Class: ZombossBattleModuleProperties


/* ZombossBattleModuleProperties::ZombossBattleModuleProperties() */

void __thiscall
ZombossBattleModuleProperties::ZombossBattleModuleProperties(ZombossBattleModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_068cbf00;
  Sexy::Point::Point((Point *)(this + 0x40));
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 1;
  *(undefined4 *)(this + 0x50) = 1;
  Set8BytesTo0(this + 0x58);
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  return;
}


/* ZombossBattleModuleProperties::~ZombossBattleModuleProperties() */

void __thiscall
ZombossBattleModuleProperties::~ZombossBattleModuleProperties(ZombossBattleModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_068cbf00;
  std::string::~string((string *)(this + 0x58));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* ZombossBattleModuleProperties::~ZombossBattleModuleProperties() */

void __thiscall
ZombossBattleModuleProperties::~ZombossBattleModuleProperties(ZombossBattleModuleProperties *this)

{
  ~ZombossBattleModuleProperties(this);
  AK::FreeHook(this);
  return;
}


/* ZombossBattleModuleProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
ZombossBattleModuleProperties::GatherResourceRequirements
          (ZombossBattleModuleProperties *this,set *param_1)

{
  LevelModuleProperties::GatherResourceRequirements((LevelModuleProperties *)this,param_1);
  (**(code **)(*(long *)this + 0xa0))(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBattleModuleProperties::StaticClassInit() */

void ZombossBattleModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossBattleModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04751404,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossBattleModuleProperties::StaticGetClass() */

long * ZombossBattleModuleProperties::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossBattleModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossBattleModuleProperties::GetClass() const */

long * ZombossBattleModuleProperties::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossBattleModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossBattleModuleProperties::GetModuleClass() const */

long * ZombossBattleModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ZombossBattleModule::sClass != (long *)0x0) {
    return ZombossBattleModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ZombossBattleModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossBattleModule",uVar2,ZombossBattleModule::StaticNew);
  ZombossBattleModule::StaticClassInit();
  return ZombossBattleModule::sClass;
}


/* ZombossBattleModuleProperties::StaticNew() */

ZombossBattleModuleProperties * ZombossBattleModuleProperties::StaticNew(void)

{
  ZombossBattleModuleProperties *this;
  
  this = ::operator_new(0x68);
  ZombossBattleModuleProperties(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBattleModuleProperties::GatherSpecialRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
ZombossBattleModuleProperties::GatherSpecialRequirements
          (ZombossBattleModuleProperties *this,set *param_1)

{
  string *psVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  ZombieZombossMech::GetRequiredAssetGroupsForZombossType(aRStack_10,param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

