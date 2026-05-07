// Class: PVZ1ModeMainEntryData


/* PVZ1ModeMainEntryData::PVZ1ModeMainEntryData() */

void __thiscall PVZ1ModeMainEntryData::PVZ1ModeMainEntryData(PVZ1ModeMainEntryData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06991a40;
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa0));
  return;
}


/* PVZ1ModeMainEntryData::~PVZ1ModeMainEntryData() */

void __thiscall PVZ1ModeMainEntryData::~PVZ1ModeMainEntryData(PVZ1ModeMainEntryData *this)

{
  *(undefined ***)this = &PTR_GetClass_06991a40;
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::~vector((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
             *)(this + 0xa0));
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::~vector((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
             *)(this + 0x88));
  std::vector<PVZ1ModeLevelBonusNetworkData,std::allocator<PVZ1ModeLevelBonusNetworkData>>::~vector
            ((vector<PVZ1ModeLevelBonusNetworkData,std::allocator<PVZ1ModeLevelBonusNetworkData>> *)
             (this + 0x58));
  std::vector<PVZ1ModeLevelBonusNetworkData,std::allocator<PVZ1ModeLevelBonusNetworkData>>::~vector
            ((vector<PVZ1ModeLevelBonusNetworkData,std::allocator<PVZ1ModeLevelBonusNetworkData>> *)
             (this + 0x40));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x20));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  nop();
  return;
}


/* PVZ1ModeMainEntryData::~PVZ1ModeMainEntryData() */

void __thiscall PVZ1ModeMainEntryData::~PVZ1ModeMainEntryData(PVZ1ModeMainEntryData *this)

{
  ~PVZ1ModeMainEntryData(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeMainEntryData::StaticClassInit() */

void PVZ1ModeMainEntryData::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1ModeLevelBonusData");
    (*pcVar3)(plVar2,asStack_10,FUN_04c720e0,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PVZ1ModeLevelBonusNetworkData");
    (*pcVar3)(plVar2,asStack_10,FUN_04c743cc,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PVZ1ModeMainEntryData");
    (*pcVar3)(plVar2,asStack_10,FUN_04c73b50,0xc0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeMainEntryData::StaticGetClass() */

long * PVZ1ModeMainEntryData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModeMainEntryData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1ModeMainEntryData::GetClass() const */

long * PVZ1ModeMainEntryData::GetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModeMainEntryData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1ModeMainEntryData::StaticNew() */

PVZ1ModeMainEntryData * PVZ1ModeMainEntryData::StaticNew(void)

{
  PVZ1ModeMainEntryData *this;
  
  this = ::operator_new(0xc0);
  PVZ1ModeMainEntryData(this);
  return this;
}


/* PVZ1ModeMainEntryData::TEMPNAMEPLACEHOLDERVALUE(PVZ1ModeMainEntryData const&) */

PVZ1ModeMainEntryData * __thiscall
PVZ1ModeMainEntryData::operator=(PVZ1ModeMainEntryData *this,PVZ1ModeMainEntryData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  PVZ1ModeMainEntryData PVar5;
  PVZ1ModeMainEntryData PVar6;
  
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  this[0x18] = param_1[0x18];
  *(undefined4 *)(this + 0x1c) = uVar1;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x20),(vector *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  std::vector<PVZ1ModeLevelBonusNetworkData,std::allocator<PVZ1ModeLevelBonusNetworkData>>::
  operator=((vector<PVZ1ModeLevelBonusNetworkData,std::allocator<PVZ1ModeLevelBonusNetworkData>> *)
            (this + 0x40),(vector *)(param_1 + 0x40));
  std::vector<PVZ1ModeLevelBonusNetworkData,std::allocator<PVZ1ModeLevelBonusNetworkData>>::
  operator=((vector<PVZ1ModeLevelBonusNetworkData,std::allocator<PVZ1ModeLevelBonusNetworkData>> *)
            (this + 0x58),(vector *)(param_1 + 0x58));
  uVar1 = *(undefined4 *)(param_1 + 0x70);
  uVar2 = *(undefined4 *)(param_1 + 0x74);
  uVar3 = *(undefined4 *)(param_1 + 0x78);
  uVar4 = *(undefined4 *)(param_1 + 0x7c);
  PVar5 = param_1[0x80];
  PVar6 = param_1[0x81];
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x70) = uVar1;
  *(undefined4 *)(this + 0x74) = uVar2;
  *(undefined4 *)(this + 0x78) = uVar3;
  *(undefined4 *)(this + 0x7c) = uVar4;
  this[0x80] = PVar5;
  this[0x81] = PVar6;
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::operator=((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
               *)(this + 0x88),(vector *)(param_1 + 0x88));
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::operator=((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
               *)(this + 0xa0),(vector *)(param_1 + 0xa0));
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  return this;
}

