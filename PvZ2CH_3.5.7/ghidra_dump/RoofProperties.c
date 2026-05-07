// Class: RoofProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RoofProperties::StaticClassInit() */

void RoofProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RoofProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03d6e604,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RoofProperties::StaticGetClass() */

long * RoofProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RoofProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RoofProperties::GetClass() const */

long * RoofProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RoofProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RoofProperties::GetModuleClass() const */

long * RoofProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (RoofModule::sClass != (long *)0x0) {
    return RoofModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  RoofModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"RoofModule",uVar2,RoofModule::StaticNew);
  RoofModule::StaticClassInit();
  return RoofModule::sClass;
}


/* RoofProperties::RoofProperties() */

void __thiscall RoofProperties::RoofProperties(RoofProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 2;
  *(undefined ***)this = &PTR_GetClass_0676eb10;
  return;
}


/* RoofProperties::StaticNew() */

RoofProperties * RoofProperties::StaticNew(void)

{
  RoofProperties *this;
  
  this = ::operator_new(0x48);
  RoofProperties(this);
  return this;
}


/* RoofProperties::~RoofProperties() */

void __thiscall RoofProperties::~RoofProperties(RoofProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0676eb10;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* RoofProperties::~RoofProperties() */

void __thiscall RoofProperties::~RoofProperties(RoofProperties *this)

{
  ~RoofProperties(this);
  AK::FreeHook(this);
  return;
}

