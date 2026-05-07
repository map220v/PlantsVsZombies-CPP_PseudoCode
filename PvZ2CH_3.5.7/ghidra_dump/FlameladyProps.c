// Class: FlameladyProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlameladyProps::StaticClassInit() */

void FlameladyProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"FlameladyProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04130f00,0x548,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FlameladyProps::StaticGetClass() */

long * FlameladyProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"FlameladyProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FlameladyProps::GetClass() const */

long * FlameladyProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"FlameladyProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlameladyProps::FlameladyProps() */

void __thiscall FlameladyProps::FlameladyProps(FlameladyProps *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067eb500;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x2ec));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x2fc));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x30c));
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x318));
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x430));
  *(undefined4 *)(this + 0x2b8) = 3;
  *(undefined4 *)(this + 0x2c4) = 3;
  *(undefined4 *)(this + 0x2c8) = 3;
  *(undefined4 *)(this + 0x2cc) = 10;
  *(undefined4 *)(this + 700) = 2;
  *(undefined4 *)(this + 0x2c0) = 2;
  *(undefined4 *)(this + 0x2d0) = 0x3d4ccccd;
  *(undefined4 *)(this + 0x2dc) = 0x41f00000;
  *(undefined4 *)(this + 0x2d8) = 0x42480000;
  *(undefined4 *)(this + 0x2d4) = 0x41c80000;
  *(undefined4 *)(this + 0x2e8) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x2e0) = 0x3f99999a;
  *(undefined4 *)(this + 0x2e4) = 0x43af0000;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,-30.0);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x2ec) = local_10;
  *(undefined4 *)(this + 0x2f8) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x2f4) = 0x40400000;
  *(undefined4 *)(this + 0x304) = 0x40400000;
  *(undefined4 *)(this + 0x308) = 0x3e4ccccd;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FlameladyProps::StaticNew() */

FlameladyProps * FlameladyProps::StaticNew(void)

{
  FlameladyProps *this;
  
  this = ::operator_new(0x548);
  FlameladyProps(this);
  return this;
}


/* FlameladyProps::~FlameladyProps() */

void __thiscall FlameladyProps::~FlameladyProps(FlameladyProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067eb500;
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x430));
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x318));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* FlameladyProps::~FlameladyProps() */

void __thiscall FlameladyProps::~FlameladyProps(FlameladyProps *this)

{
  ~FlameladyProps(this);
  AK::FreeHook(this);
  return;
}

