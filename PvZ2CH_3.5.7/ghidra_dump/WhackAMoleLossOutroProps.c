// Class: WhackAMoleLossOutroProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleLossOutroProps::StaticClassInit() */

void WhackAMoleLossOutroProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"WhackAMoleLossOutroProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03b56f88,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WhackAMoleLossOutroProps::StaticGetClass() */

long * WhackAMoleLossOutroProps::StaticGetClass(void)

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
  uVar2 = OutroModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"WhackAMoleLossOutroProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhackAMoleLossOutroProps::GetClass() const */

long * WhackAMoleLossOutroProps::GetClass(void)

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
  uVar2 = OutroModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"WhackAMoleLossOutroProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhackAMoleLossOutroProps::GetModuleClass() const */

long * WhackAMoleLossOutroProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (WhackAMoleLossOutro::sClass != (long *)0x0) {
    return WhackAMoleLossOutro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  WhackAMoleLossOutro::sClass = plVar1;
  uVar2 = OutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"WhackAMoleLossOutro",uVar2,WhackAMoleLossOutro::StaticNew);
  WhackAMoleLossOutro::StaticClassInit();
  return WhackAMoleLossOutro::sClass;
}


/* WhackAMoleLossOutroProps::WhackAMoleLossOutroProps() */

void __thiscall WhackAMoleLossOutroProps::WhackAMoleLossOutroProps(WhackAMoleLossOutroProps *this)

{
  OutroModuleProperties::OutroModuleProperties((OutroModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06733670;
  return;
}


/* WhackAMoleLossOutroProps::StaticNew() */

WhackAMoleLossOutroProps * WhackAMoleLossOutroProps::StaticNew(void)

{
  WhackAMoleLossOutroProps *this;
  
  this = ::operator_new(0x40);
  WhackAMoleLossOutroProps(this);
  return this;
}


/* WhackAMoleLossOutroProps::~WhackAMoleLossOutroProps() */

void __thiscall WhackAMoleLossOutroProps::~WhackAMoleLossOutroProps(WhackAMoleLossOutroProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06733670;
  OutroModuleProperties::~OutroModuleProperties((OutroModuleProperties *)this);
  return;
}


/* WhackAMoleLossOutroProps::~WhackAMoleLossOutroProps() */

void __thiscall WhackAMoleLossOutroProps::~WhackAMoleLossOutroProps(WhackAMoleLossOutroProps *this)

{
  ~WhackAMoleLossOutroProps(this);
  AK::FreeHook(this);
  return;
}

