// Class: PlantWarsTransferOfPlayData


/* PlantWarsTransferOfPlayData::~PlantWarsTransferOfPlayData() */

void __thiscall
PlantWarsTransferOfPlayData::~PlantWarsTransferOfPlayData(PlantWarsTransferOfPlayData *this)

{
  *(undefined ***)this = &PTR_GetClass_069ba3b0;
  *(undefined ***)(this + 8) = &PTR__PlantWarsTransferOfPlayData_069ba418;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to PlantWarsTransferOfPlayData::~PlantWarsTransferOfPlayData() */

void __thiscall
PlantWarsTransferOfPlayData::~PlantWarsTransferOfPlayData(PlantWarsTransferOfPlayData *this)

{
  ~PlantWarsTransferOfPlayData(this + -8);
  return;
}


/* PlantWarsTransferOfPlayData::~PlantWarsTransferOfPlayData() */

void __thiscall
PlantWarsTransferOfPlayData::~PlantWarsTransferOfPlayData(PlantWarsTransferOfPlayData *this)

{
  ~PlantWarsTransferOfPlayData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantWarsTransferOfPlayData::~PlantWarsTransferOfPlayData() */

void __thiscall
PlantWarsTransferOfPlayData::~PlantWarsTransferOfPlayData(PlantWarsTransferOfPlayData *this)

{
  ~PlantWarsTransferOfPlayData(this + -8);
  return;
}


/* PlantWarsTransferOfPlayData::PlantWarsTransferOfPlayData() */

void __thiscall
PlantWarsTransferOfPlayData::PlantWarsTransferOfPlayData(PlantWarsTransferOfPlayData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069ba3b0;
  *(undefined ***)(this + 8) = &PTR__PlantWarsTransferOfPlayData_069ba418;
  return;
}


/* PlantWarsTransferOfPlayData::StaticNew() */

PlantWarsTransferOfPlayData * PlantWarsTransferOfPlayData::StaticNew(void)

{
  PlantWarsTransferOfPlayData *this;
  
  this = ::operator_new(0x18);
  PlantWarsTransferOfPlayData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsTransferOfPlayData::StaticClassInit() */

void PlantWarsTransferOfPlayData::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWarsTransferOfPlayData");
    (*pcVar2)(plVar1,asStack_10,FUN_04d8e1a0,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsTransferOfPlayData::StaticGetClass() */

long * PlantWarsTransferOfPlayData::StaticGetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWarsTransferOfPlayData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsTransferOfPlayData::GetClass() const */

long * PlantWarsTransferOfPlayData::GetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWarsTransferOfPlayData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

