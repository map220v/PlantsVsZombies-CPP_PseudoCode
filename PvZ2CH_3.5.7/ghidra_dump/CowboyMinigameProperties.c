// Class: CowboyMinigameProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CowboyMinigameProperties::StaticClassInit() */

void CowboyMinigameProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"CowboyMinigameProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03c7c8bc,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CowboyMinigameProperties::StaticGetClass() */

long * CowboyMinigameProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CowboyMinigameProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CowboyMinigameProperties::GetClass() const */

long * CowboyMinigameProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"CowboyMinigameProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CowboyMinigameProperties::GetModuleClass() const */

long * CowboyMinigameProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (CowboyMinigameModule::sClass != (long *)0x0) {
    return CowboyMinigameModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  CowboyMinigameModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"CowboyMinigameModule",uVar2,CowboyMinigameModule::StaticNew);
  CowboyMinigameModule::StaticClassInit();
  return CowboyMinigameModule::sClass;
}


/* CowboyMinigameProperties::CowboyMinigameProperties() */

void __thiscall CowboyMinigameProperties::CowboyMinigameProperties(CowboyMinigameProperties *this)

{
  size_t in_x2;
  
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0675a3d0;
  Set8BytesTo0((string *)(this + 0x48));
  this[0x40] = (CowboyMinigameProperties)0x0;
  std::string::append((string *)(this + 0x48),"",in_x2);
  return;
}


/* CowboyMinigameProperties::StaticNew() */

CowboyMinigameProperties * CowboyMinigameProperties::StaticNew(void)

{
  CowboyMinigameProperties *this;
  
  this = ::operator_new(0x50);
  CowboyMinigameProperties(this);
  return this;
}


/* CowboyMinigameProperties::~CowboyMinigameProperties() */

void __thiscall CowboyMinigameProperties::~CowboyMinigameProperties(CowboyMinigameProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0675a3d0;
  std::string::~string((string *)(this + 0x48));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* CowboyMinigameProperties::~CowboyMinigameProperties() */

void __thiscall CowboyMinigameProperties::~CowboyMinigameProperties(CowboyMinigameProperties *this)

{
  ~CowboyMinigameProperties(this);
  AK::FreeHook(this);
  return;
}

