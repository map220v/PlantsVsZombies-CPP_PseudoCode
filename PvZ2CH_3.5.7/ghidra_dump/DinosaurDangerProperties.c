// Class: DinosaurDangerProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurDangerProperties::StaticClassInit() */

void DinosaurDangerProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinosaurDangerProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04bb9c9c,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurDangerProperties::StaticGetClass() */

long * DinosaurDangerProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurDangerProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurDangerProperties::GetClass() const */

long * DinosaurDangerProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurDangerProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurDangerProperties::GetModuleClass() const */

long * DinosaurDangerProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (DinosaurDangerModule::sClass != (long *)0x0) {
    return DinosaurDangerModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  DinosaurDangerModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurDangerModule",uVar2,DinosaurDangerModule::StaticNew);
  DinosaurDangerModule::StaticClassInit();
  return DinosaurDangerModule::sClass;
}


/* DinosaurDangerProperties::~DinosaurDangerProperties() */

void __thiscall DinosaurDangerProperties::~DinosaurDangerProperties(DinosaurDangerProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06978070;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* DinosaurDangerProperties::~DinosaurDangerProperties() */

void __thiscall DinosaurDangerProperties::~DinosaurDangerProperties(DinosaurDangerProperties *this)

{
  ~DinosaurDangerProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurDangerProperties::DinosaurDangerProperties() */

void __thiscall DinosaurDangerProperties::DinosaurDangerProperties(DinosaurDangerProperties *this)

{
  int iVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06978070;
  std::string::string(asStack_10,"DinosaurDangerStartData/small");
  iVar1 = GetLuaSharedData<int>(asStack_10,0);
  *(int *)(this + 0x44) = iVar1;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"DinosaurDangerStartData/big");
  iVar1 = GetLuaSharedData<int>(asStack_10,0);
  *(int *)(this + 0x40) = iVar1;
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurDangerProperties::StaticNew() */

DinosaurDangerProperties * DinosaurDangerProperties::StaticNew(void)

{
  DinosaurDangerProperties *this;
  
  this = ::operator_new(0x48);
  DinosaurDangerProperties(this);
  return this;
}

