// Class: EnergyGridProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EnergyGridProperties::StaticClassInit() */

void EnergyGridProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ItemDataEnergy");
    (*pcVar3)(plVar2,asStack_10,FUN_03dd2838,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"EnergyGridData");
    (*pcVar3)(plVar2,asStack_10,FUN_03dd36d0,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"EnergyGridProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_03dd38c8,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EnergyGridProperties::StaticGetClass() */

long * EnergyGridProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EnergyGridProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EnergyGridProperties::GetClass() const */

long * EnergyGridProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"EnergyGridProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EnergyGridProperties::GetModuleClass() const */

long * EnergyGridProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (EnergyGridModule::sClass != (long *)0x0) {
    return EnergyGridModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  EnergyGridModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"EnergyGridModule",uVar2,EnergyGridModule::StaticNew);
  EnergyGridModule::StaticClassInit();
  return EnergyGridModule::sClass;
}


/* EnergyGridProperties::EnergyGridProperties() */

void __thiscall EnergyGridProperties::EnergyGridProperties(EnergyGridProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0677d980;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  *(undefined4 *)(this + 0x40) = 0x40a00000;
  std::
  vector<EnergyGridProperties::EnergyGridData,std::allocator<EnergyGridProperties::EnergyGridData>>
  ::clear((vector<EnergyGridProperties::EnergyGridData,std::allocator<EnergyGridProperties::EnergyGridData>>
           *)(this + 0x48));
  return;
}


/* EnergyGridProperties::StaticNew() */

EnergyGridProperties * EnergyGridProperties::StaticNew(void)

{
  EnergyGridProperties *this;
  
  this = ::operator_new(0x60);
  EnergyGridProperties(this);
  return this;
}


/* EnergyGridProperties::~EnergyGridProperties() */

void __thiscall EnergyGridProperties::~EnergyGridProperties(EnergyGridProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0677d980;
  std::
  vector<EnergyGridProperties::EnergyGridData,std::allocator<EnergyGridProperties::EnergyGridData>>
  ::~vector((vector<EnergyGridProperties::EnergyGridData,std::allocator<EnergyGridProperties::EnergyGridData>>
             *)(this + 0x48));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* EnergyGridProperties::~EnergyGridProperties() */

void __thiscall EnergyGridProperties::~EnergyGridProperties(EnergyGridProperties *this)

{
  ~EnergyGridProperties(this);
  AK::FreeHook(this);
  return;
}

