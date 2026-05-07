// Class: IntroModuleProperties


/* IntroModuleProperties::IntroModuleProperties() */

void __thiscall IntroModuleProperties::IntroModuleProperties(IntroModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0678adf0;
  return;
}


/* IntroModuleProperties::~IntroModuleProperties() */

void __thiscall IntroModuleProperties::~IntroModuleProperties(IntroModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0678adf0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* IntroModuleProperties::~IntroModuleProperties() */

void __thiscall IntroModuleProperties::~IntroModuleProperties(IntroModuleProperties *this)

{
  ~IntroModuleProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroModuleProperties::StaticClassInit() */

void IntroModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"IntroModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03e4056c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroModuleProperties::StaticGetClass() */

long * IntroModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"IntroModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntroModuleProperties::GetClass() const */

long * IntroModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"IntroModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntroModuleProperties::GetModuleClass() const */

long * IntroModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (IntroModule::sClass != (long *)0x0) {
    return IntroModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  IntroModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"IntroModule",uVar2,IntroModule::StaticNew);
  IntroModule::StaticClassInit();
  return IntroModule::sClass;
}


/* IntroModuleProperties::StaticNew() */

IntroModuleProperties * IntroModuleProperties::StaticNew(void)

{
  IntroModuleProperties *this;
  
  this = ::operator_new(0x40);
  IntroModuleProperties(this);
  return this;
}

