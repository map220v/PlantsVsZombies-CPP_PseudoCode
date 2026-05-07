// Class: WhackAMoleModuleProperties


/* WhackAMoleModuleProperties::GetModuleClass() const */

long * WhackAMoleModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (WhackAMoleModule::sClass != (long *)0x0) {
    return WhackAMoleModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  WhackAMoleModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"WhackAMoleModule",uVar2,WhackAMoleModule::StaticNew);
  WhackAMoleModule::StaticClassInit();
  return WhackAMoleModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleModuleProperties::StaticClassInit() */

void WhackAMoleModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"WhackAMoleModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03b5640c,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WhackAMoleModuleProperties::StaticGetClass() */

long * WhackAMoleModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WhackAMoleModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhackAMoleModuleProperties::GetClass() const */

long * WhackAMoleModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"WhackAMoleModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhackAMoleModuleProperties::WhackAMoleModuleProperties() */

void __thiscall
WhackAMoleModuleProperties::WhackAMoleModuleProperties(WhackAMoleModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR_GetClass_06733460;
  *(undefined4 *)(this + 0x60) = 500;
  *(undefined4 *)(this + 0x58) = 1000;
  *(undefined4 *)(this + 0x5c) = 1000;
  *(undefined4 *)(this + 0x6c) = 0x40a00000;
  *(undefined4 *)(this + 0x40) = 0x43340000;
  *(undefined4 *)(this + 0x4c) = 0xc2a00000;
  return;
}


/* WhackAMoleModuleProperties::StaticNew() */

WhackAMoleModuleProperties * WhackAMoleModuleProperties::StaticNew(void)

{
  WhackAMoleModuleProperties *this;
  
  this = ::operator_new(0x70);
  WhackAMoleModuleProperties(this);
  return this;
}


/* WhackAMoleModuleProperties::~WhackAMoleModuleProperties() */

void __thiscall
WhackAMoleModuleProperties::~WhackAMoleModuleProperties(WhackAMoleModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06733460;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* WhackAMoleModuleProperties::~WhackAMoleModuleProperties() */

void __thiscall
WhackAMoleModuleProperties::~WhackAMoleModuleProperties(WhackAMoleModuleProperties *this)

{
  ~WhackAMoleModuleProperties(this);
  AK::FreeHook(this);
  return;
}

