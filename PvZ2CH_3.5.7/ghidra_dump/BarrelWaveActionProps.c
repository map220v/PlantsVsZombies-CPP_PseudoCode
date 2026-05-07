// Class: BarrelWaveActionProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BarrelWaveActionProps::StaticClassInit() */

void BarrelWaveActionProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"BarrelDescription");
    (*pcVar3)(plVar2,asStack_10,FUN_04c7be4c,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"BarrelWaveActionProps");
    (*pcVar3)(plVar2,asStack_10,FUN_04c7c228,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BarrelWaveActionProps::StaticGetClass() */

long * BarrelWaveActionProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BarrelWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BarrelWaveActionProps::GetClass() const */

long * BarrelWaveActionProps::GetClass(void)

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
  (*pcVar3)(plVar1,"BarrelWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BarrelWaveActionProps::GetActionClass() const */

long * BarrelWaveActionProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (BarrelWaveAction::sClass != (long *)0x0) {
    return BarrelWaveAction::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  BarrelWaveAction::sClass = plVar1;
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"BarrelWaveAction",uVar2,BarrelWaveAction::StaticNew);
  BarrelWaveAction::StaticClassInit();
  return BarrelWaveAction::sClass;
}


/* BarrelWaveActionProps::BarrelWaveActionProps() */

void __thiscall BarrelWaveActionProps::BarrelWaveActionProps(BarrelWaveActionProps *this)

{
  WaveActionProperties::WaveActionProperties((WaveActionProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06992500;
  *(undefined4 *)(this + 0x40) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}


/* BarrelWaveActionProps::StaticNew() */

BarrelWaveActionProps * BarrelWaveActionProps::StaticNew(void)

{
  BarrelWaveActionProps *this;
  
  this = ::operator_new(0x60);
  BarrelWaveActionProps(this);
  return this;
}


/* BarrelWaveActionProps::~BarrelWaveActionProps() */

void __thiscall BarrelWaveActionProps::~BarrelWaveActionProps(BarrelWaveActionProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06992500;
  std::vector<BarrelDescription,std::allocator<BarrelDescription>>::~vector
            ((vector<BarrelDescription,std::allocator<BarrelDescription>> *)(this + 0x48));
  WaveActionProperties::~WaveActionProperties((WaveActionProperties *)this);
  return;
}


/* BarrelWaveActionProps::~BarrelWaveActionProps() */

void __thiscall BarrelWaveActionProps::~BarrelWaveActionProps(BarrelWaveActionProps *this)

{
  ~BarrelWaveActionProps(this);
  AK::FreeHook(this);
  return;
}

