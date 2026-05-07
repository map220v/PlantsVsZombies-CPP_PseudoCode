// Class: PVPUpgradeData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPUpgradeData::StaticClassInit() */

void PVPUpgradeData::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVPBaseUpgradeData");
    (*pcVar3)(plVar2,asStack_10,FUN_04ae8b20,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PVPLimitCostData");
    (*pcVar3)(plVar2,asStack_10,FUN_04ae648c,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PVPUpgradeData");
    (*pcVar3)(plVar2,asStack_10,FUN_04ae9728,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPUpgradeData::StaticGetClass() */

long * PVPUpgradeData::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"PVPUpgradeData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVPUpgradeData::GetClass() const */

long * PVPUpgradeData::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"PVPUpgradeData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVPUpgradeData::PVPUpgradeData() */

void __thiscall PVPUpgradeData::PVPUpgradeData(PVPUpgradeData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0694cf70;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  return;
}


/* PVPUpgradeData::StaticNew() */

PVPUpgradeData * PVPUpgradeData::StaticNew(void)

{
  PVPUpgradeData *this;
  
  this = ::operator_new(0x50);
  PVPUpgradeData(this);
  return this;
}


/* PVPUpgradeData::~PVPUpgradeData() */

void __thiscall PVPUpgradeData::~PVPUpgradeData(PVPUpgradeData *this)

{
  *(undefined ***)this = &PTR_GetClass_0694cf70;
  std::vector<PVPUpgradeData::PVPLimitCostData,std::allocator<PVPUpgradeData::PVPLimitCostData>>::
  ~vector((vector<PVPUpgradeData::PVPLimitCostData,std::allocator<PVPUpgradeData::PVPLimitCostData>>
           *)(this + 0x38));
  std::vector<PVPUpgradeData::PVPLimitCostData,std::allocator<PVPUpgradeData::PVPLimitCostData>>::
  ~vector((vector<PVPUpgradeData::PVPLimitCostData,std::allocator<PVPUpgradeData::PVPLimitCostData>>
           *)(this + 0x20));
  std::vector<PVPUpgradeData::PVPBaseUpgradeData,std::allocator<PVPUpgradeData::PVPBaseUpgradeData>>
  ::~vector((vector<PVPUpgradeData::PVPBaseUpgradeData,std::allocator<PVPUpgradeData::PVPBaseUpgradeData>>
             *)(this + 8));
  nop();
  return;
}


/* PVPUpgradeData::~PVPUpgradeData() */

void __thiscall PVPUpgradeData::~PVPUpgradeData(PVPUpgradeData *this)

{
  ~PVPUpgradeData(this);
  AK::FreeHook(this);
  return;
}

