// Class: HappyVaseBreakerResetData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyVaseBreakerResetData::StaticClassInit() */

void HappyVaseBreakerResetData::StaticClassInit(void)

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
    std::string::string(asStack_10,"HappyVaseBreakerResetData");
    (*pcVar2)(plVar1,asStack_10,FUN_03a12b98,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HappyVaseBreakerResetData::StaticGetClass() */

long * HappyVaseBreakerResetData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HappyVaseBreakerResetData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HappyVaseBreakerResetData::GetClass() const */

long * HappyVaseBreakerResetData::GetClass(void)

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
  (*pcVar3)(plVar1,"HappyVaseBreakerResetData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HappyVaseBreakerResetData::HappyVaseBreakerResetData() */

void __thiscall
HappyVaseBreakerResetData::HappyVaseBreakerResetData(HappyVaseBreakerResetData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066fc280;
  *(undefined ***)(this + 8) = &PTR__HappyVaseBreakerResetData_066fc2e8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* HappyVaseBreakerResetData::StaticNew() */

HappyVaseBreakerResetData * HappyVaseBreakerResetData::StaticNew(void)

{
  HappyVaseBreakerResetData *this;
  
  this = ::operator_new(0x38);
  HappyVaseBreakerResetData(this);
  return this;
}


/* HappyVaseBreakerResetData::~HappyVaseBreakerResetData() */

void __thiscall
HappyVaseBreakerResetData::~HappyVaseBreakerResetData(HappyVaseBreakerResetData *this)

{
  *(undefined ***)this = &PTR_GetClass_066fc280;
  *(undefined ***)(this + 8) = &PTR__HappyVaseBreakerResetData_066fc2e8;
  std::vector<HappyVaseItem,std::allocator<HappyVaseItem>>::~vector
            ((vector<HappyVaseItem,std::allocator<HappyVaseItem>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to HappyVaseBreakerResetData::~HappyVaseBreakerResetData() */

void __thiscall
HappyVaseBreakerResetData::~HappyVaseBreakerResetData(HappyVaseBreakerResetData *this)

{
  ~HappyVaseBreakerResetData(this + -8);
  return;
}


/* HappyVaseBreakerResetData::~HappyVaseBreakerResetData() */

void __thiscall
HappyVaseBreakerResetData::~HappyVaseBreakerResetData(HappyVaseBreakerResetData *this)

{
  ~HappyVaseBreakerResetData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to HappyVaseBreakerResetData::~HappyVaseBreakerResetData() */

void __thiscall
HappyVaseBreakerResetData::~HappyVaseBreakerResetData(HappyVaseBreakerResetData *this)

{
  ~HappyVaseBreakerResetData(this + -8);
  return;
}

