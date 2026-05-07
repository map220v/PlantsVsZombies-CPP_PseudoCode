// Class: SchoolBusWaveActionProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SchoolBusWaveActionProps::StaticClassInit() */

void SchoolBusWaveActionProps::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SchoolBusDescription");
    (*pcVar3)(plVar2,asStack_10,FUN_033e06b8,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SchoolBusWaveActionProps");
    (*pcVar3)(plVar2,asStack_10,FUN_033e0878,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SchoolBusWaveActionProps::StaticGetClass() */

long * SchoolBusWaveActionProps::StaticGetClass(void)

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
  uVar2 = WaveActionProperties::StaticGetClass();
  (*pcVar3)(plVar1,"SchoolBusWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SchoolBusWaveActionProps::GetClass() const */

long * SchoolBusWaveActionProps::GetClass(void)

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
  uVar2 = WaveActionProperties::StaticGetClass();
  (*pcVar3)(plVar1,"SchoolBusWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SchoolBusWaveActionProps::GetActionClass() const */

long * SchoolBusWaveActionProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SchoolBusWaveAction::sClass != (long *)0x0) {
    return SchoolBusWaveAction::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SchoolBusWaveAction::sClass = plVar1;
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"SchoolBusWaveAction",uVar2,SchoolBusWaveAction::StaticNew);
  SchoolBusWaveAction::StaticClassInit();
  return SchoolBusWaveAction::sClass;
}


/* SchoolBusWaveActionProps::SchoolBusWaveActionProps() */

void __thiscall SchoolBusWaveActionProps::SchoolBusWaveActionProps(SchoolBusWaveActionProps *this)

{
  WaveActionProperties::WaveActionProperties((WaveActionProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0661b490;
  SchoolBusDescription::SchoolBusDescription((SchoolBusDescription *)(this + 0x40));
  return;
}


/* SchoolBusWaveActionProps::StaticNew() */

SchoolBusWaveActionProps * SchoolBusWaveActionProps::StaticNew(void)

{
  SchoolBusWaveActionProps *this;
  
  this = ::operator_new(0x70);
  SchoolBusWaveActionProps(this);
  return this;
}


/* SchoolBusWaveActionProps::~SchoolBusWaveActionProps() */

void __thiscall SchoolBusWaveActionProps::~SchoolBusWaveActionProps(SchoolBusWaveActionProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0661b490;
  SchoolBusDescription::~SchoolBusDescription((SchoolBusDescription *)(this + 0x40));
  WaveActionProperties::~WaveActionProperties((WaveActionProperties *)this);
  return;
}


/* SchoolBusWaveActionProps::~SchoolBusWaveActionProps() */

void __thiscall SchoolBusWaveActionProps::~SchoolBusWaveActionProps(SchoolBusWaveActionProps *this)

{
  ~SchoolBusWaveActionProps(this);
  AK::FreeHook(this);
  return;
}

