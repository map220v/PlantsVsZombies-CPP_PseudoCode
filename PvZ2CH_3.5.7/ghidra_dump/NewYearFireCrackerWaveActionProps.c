// Class: NewYearFireCrackerWaveActionProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewYearFireCrackerWaveActionProps::StaticClassInit() */

void NewYearFireCrackerWaveActionProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"FireCrackerData");
    (*pcVar3)(plVar2,asStack_10,FUN_04c81bcc,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewYearFireCrackerWaveActionProps");
    (*pcVar3)(plVar2,asStack_10,FUN_04c82654,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewYearFireCrackerWaveActionProps::StaticGetClass() */

long * NewYearFireCrackerWaveActionProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewYearFireCrackerWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewYearFireCrackerWaveActionProps::GetClass() const */

long * NewYearFireCrackerWaveActionProps::GetClass(void)

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
  (*pcVar3)(plVar1,"NewYearFireCrackerWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewYearFireCrackerWaveActionProps::GetActionClass() const */

long * NewYearFireCrackerWaveActionProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (NewYearFireCrackerWaveAction::sClass != (long *)0x0) {
    return NewYearFireCrackerWaveAction::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  NewYearFireCrackerWaveAction::sClass = plVar1;
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"NewYearFireCrackerWaveAction",uVar2,NewYearFireCrackerWaveAction::StaticNew);
  NewYearFireCrackerWaveAction::StaticClassInit();
  return NewYearFireCrackerWaveAction::sClass;
}


/* NewYearFireCrackerWaveActionProps::NewYearFireCrackerWaveActionProps() */

void __thiscall
NewYearFireCrackerWaveActionProps::NewYearFireCrackerWaveActionProps
          (NewYearFireCrackerWaveActionProps *this)

{
  WaveActionProperties::WaveActionProperties((WaveActionProperties *)this);
  *(undefined ***)this = &PTR_GetClass_069939c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* NewYearFireCrackerWaveActionProps::StaticNew() */

NewYearFireCrackerWaveActionProps * NewYearFireCrackerWaveActionProps::StaticNew(void)

{
  NewYearFireCrackerWaveActionProps *this;
  
  this = ::operator_new(0x58);
  NewYearFireCrackerWaveActionProps(this);
  return this;
}


/* NewYearFireCrackerWaveActionProps::~NewYearFireCrackerWaveActionProps() */

void __thiscall
NewYearFireCrackerWaveActionProps::~NewYearFireCrackerWaveActionProps
          (NewYearFireCrackerWaveActionProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069939c0;
  std::vector<FireCrackerData,std::allocator<FireCrackerData>>::~vector
            ((vector<FireCrackerData,std::allocator<FireCrackerData>> *)(this + 0x40));
  WaveActionProperties::~WaveActionProperties((WaveActionProperties *)this);
  return;
}


/* NewYearFireCrackerWaveActionProps::~NewYearFireCrackerWaveActionProps() */

void __thiscall
NewYearFireCrackerWaveActionProps::~NewYearFireCrackerWaveActionProps
          (NewYearFireCrackerWaveActionProps *this)

{
  ~NewYearFireCrackerWaveActionProps(this);
  AK::FreeHook(this);
  return;
}

