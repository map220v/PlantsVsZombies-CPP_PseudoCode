// Class: WhackAMoleWinOutroProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleWinOutroProps::StaticClassInit() */

void WhackAMoleWinOutroProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"WhackAMoleWinOutroProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03b56b60,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WhackAMoleWinOutroProps::StaticGetClass() */

long * WhackAMoleWinOutroProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WhackAMoleWinOutroProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhackAMoleWinOutroProps::GetClass() const */

long * WhackAMoleWinOutroProps::GetClass(void)

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
  (*pcVar3)(plVar1,"WhackAMoleWinOutroProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhackAMoleWinOutroProps::GetModuleClass() const */

long * WhackAMoleWinOutroProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (WhackAMoleWinOutro::sClass != (long *)0x0) {
    return WhackAMoleWinOutro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  WhackAMoleWinOutro::sClass = plVar1;
  uVar2 = OutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"WhackAMoleWinOutro",uVar2,WhackAMoleWinOutro::StaticNew);
  WhackAMoleWinOutro::StaticClassInit();
  return WhackAMoleWinOutro::sClass;
}


/* WhackAMoleWinOutroProps::WhackAMoleWinOutroProps() */

void __thiscall WhackAMoleWinOutroProps::WhackAMoleWinOutroProps(WhackAMoleWinOutroProps *this)

{
  OutroModuleProperties::OutroModuleProperties((OutroModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06733510;
  return;
}


/* WhackAMoleWinOutroProps::StaticNew() */

WhackAMoleWinOutroProps * WhackAMoleWinOutroProps::StaticNew(void)

{
  WhackAMoleWinOutroProps *this;
  
  this = ::operator_new(0x40);
  WhackAMoleWinOutroProps(this);
  return this;
}


/* WhackAMoleWinOutroProps::~WhackAMoleWinOutroProps() */

void __thiscall WhackAMoleWinOutroProps::~WhackAMoleWinOutroProps(WhackAMoleWinOutroProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06733510;
  OutroModuleProperties::~OutroModuleProperties((OutroModuleProperties *)this);
  return;
}


/* WhackAMoleWinOutroProps::~WhackAMoleWinOutroProps() */

void __thiscall WhackAMoleWinOutroProps::~WhackAMoleWinOutroProps(WhackAMoleWinOutroProps *this)

{
  ~WhackAMoleWinOutroProps(this);
  AK::FreeHook(this);
  return;
}

