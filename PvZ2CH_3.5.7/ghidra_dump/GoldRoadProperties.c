// Class: GoldRoadProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldRoadProperties::StaticClassInit() */

void GoldRoadProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"GoldRoadProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_044a7164,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GoldRoadProperties::StaticGetClass() */

long * GoldRoadProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GoldRoadProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GoldRoadProperties::GetClass() const */

long * GoldRoadProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"GoldRoadProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GoldRoadProperties::GetModuleClass() const */

long * GoldRoadProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (GoldRoadModule::sClass != (long *)0x0) {
    return GoldRoadModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  GoldRoadModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"GoldRoadModule",uVar2,GoldRoadModule::StaticNew);
  GoldRoadModule::StaticClassInit();
  return GoldRoadModule::sClass;
}


/* GoldRoadProperties::GoldRoadProperties() */

void __thiscall GoldRoadProperties::GoldRoadProperties(GoldRoadProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06852400;
  return;
}


/* GoldRoadProperties::StaticNew() */

GoldRoadProperties * GoldRoadProperties::StaticNew(void)

{
  GoldRoadProperties *this;
  
  this = ::operator_new(0x40);
  GoldRoadProperties(this);
  return this;
}


/* GoldRoadProperties::~GoldRoadProperties() */

void __thiscall GoldRoadProperties::~GoldRoadProperties(GoldRoadProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06852400;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* GoldRoadProperties::~GoldRoadProperties() */

void __thiscall GoldRoadProperties::~GoldRoadProperties(GoldRoadProperties *this)

{
  ~GoldRoadProperties(this);
  AK::FreeHook(this);
  return;
}

