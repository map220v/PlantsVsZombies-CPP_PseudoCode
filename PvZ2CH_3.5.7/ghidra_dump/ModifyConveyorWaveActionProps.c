// Class: ModifyConveyorWaveActionProps


/* ModifyConveyorWaveActionProps::GetActionClass() const */

long * ModifyConveyorWaveActionProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ModifyConveyorWaveAction::sClass != (long *)0x0) {
    return ModifyConveyorWaveAction::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ModifyConveyorWaveAction::sClass = plVar1;
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"ModifyConveyorWaveAction",uVar2,ModifyConveyorWaveAction::StaticNew);
  ModifyConveyorWaveAction::StaticClassInit();
  return ModifyConveyorWaveAction::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ModifyConveyorWaveActionProps::StaticClassInit() */

void ModifyConveyorWaveActionProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ConveyorAddSeedInstruction");
    (*pcVar3)(plVar2,asStack_10,FUN_03c78b9c,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ConveyorRemoveSeedInstruction");
    (*pcVar3)(plVar2,asStack_10,FUN_03c78a4c,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ModifyConveyorWaveActionProps");
    (*pcVar3)(plVar2,asStack_10,FUN_03c79220,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ModifyConveyorWaveActionProps::StaticGetClass() */

long * ModifyConveyorWaveActionProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ModifyConveyorWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ModifyConveyorWaveActionProps::GetClass() const */

long * ModifyConveyorWaveActionProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ModifyConveyorWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ModifyConveyorWaveActionProps::ModifyConveyorWaveActionProps() */

void __thiscall
ModifyConveyorWaveActionProps::ModifyConveyorWaveActionProps(ModifyConveyorWaveActionProps *this)

{
  WaveActionProperties::WaveActionProperties((WaveActionProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0675a1e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  return;
}


/* ModifyConveyorWaveActionProps::StaticNew() */

ModifyConveyorWaveActionProps * ModifyConveyorWaveActionProps::StaticNew(void)

{
  ModifyConveyorWaveActionProps *this;
  
  this = ::operator_new(0x70);
  ModifyConveyorWaveActionProps(this);
  return this;
}


/* ModifyConveyorWaveActionProps::~ModifyConveyorWaveActionProps() */

void __thiscall
ModifyConveyorWaveActionProps::~ModifyConveyorWaveActionProps(ModifyConveyorWaveActionProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0675a1e0;
  std::vector<ConveyorRemoveSeedInstruction,std::allocator<ConveyorRemoveSeedInstruction>>::~vector
            ((vector<ConveyorRemoveSeedInstruction,std::allocator<ConveyorRemoveSeedInstruction>> *)
             (this + 0x58));
  std::vector<ConveyorAddSeedInstruction,std::allocator<ConveyorAddSeedInstruction>>::~vector
            ((vector<ConveyorAddSeedInstruction,std::allocator<ConveyorAddSeedInstruction>> *)
             (this + 0x40));
  WaveActionProperties::~WaveActionProperties((WaveActionProperties *)this);
  return;
}


/* ModifyConveyorWaveActionProps::~ModifyConveyorWaveActionProps() */

void __thiscall
ModifyConveyorWaveActionProps::~ModifyConveyorWaveActionProps(ModifyConveyorWaveActionProps *this)

{
  ~ModifyConveyorWaveActionProps(this);
  AK::FreeHook(this);
  return;
}

