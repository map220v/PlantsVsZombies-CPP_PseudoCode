// Class: OutroModuleProperties


/* OutroModuleProperties::OutroModuleProperties() */

void __thiscall OutroModuleProperties::OutroModuleProperties(OutroModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06793740;
  return;
}


/* OutroModuleProperties::~OutroModuleProperties() */

void __thiscall OutroModuleProperties::~OutroModuleProperties(OutroModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06793740;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* OutroModuleProperties::~OutroModuleProperties() */

void __thiscall OutroModuleProperties::~OutroModuleProperties(OutroModuleProperties *this)

{
  ~OutroModuleProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OutroModuleProperties::StaticClassInit() */

void OutroModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"OutroModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03f0a62c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OutroModuleProperties::StaticGetClass() */

long * OutroModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"OutroModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OutroModuleProperties::GetClass() const */

long * OutroModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"OutroModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OutroModuleProperties::GetModuleClass() const */

long * OutroModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (OutroModule::sClass != (long *)0x0) {
    return OutroModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  OutroModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"OutroModule",uVar2,OutroModule::StaticNew);
  OutroModule::StaticClassInit();
  return OutroModule::sClass;
}


/* OutroModuleProperties::StaticNew() */

OutroModuleProperties * OutroModuleProperties::StaticNew(void)

{
  OutroModuleProperties *this;
  
  this = ::operator_new(0x40);
  OutroModuleProperties(this);
  return this;
}

