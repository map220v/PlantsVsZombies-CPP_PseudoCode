// Class: MiniGameCollectionBufferData


/* MiniGameCollectionBufferData::~MiniGameCollectionBufferData() */

void __thiscall
MiniGameCollectionBufferData::~MiniGameCollectionBufferData(MiniGameCollectionBufferData *this)

{
  *(undefined ***)this = &PTR_GetClass_066b45c0;
  *(undefined ***)(this + 8) = &PTR__MiniGameCollectionBufferData_066b4628;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to MiniGameCollectionBufferData::~MiniGameCollectionBufferData() */

void __thiscall
MiniGameCollectionBufferData::~MiniGameCollectionBufferData(MiniGameCollectionBufferData *this)

{
  ~MiniGameCollectionBufferData(this + -8);
  return;
}


/* MiniGameCollectionBufferData::~MiniGameCollectionBufferData() */

void __thiscall
MiniGameCollectionBufferData::~MiniGameCollectionBufferData(MiniGameCollectionBufferData *this)

{
  ~MiniGameCollectionBufferData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MiniGameCollectionBufferData::~MiniGameCollectionBufferData() */

void __thiscall
MiniGameCollectionBufferData::~MiniGameCollectionBufferData(MiniGameCollectionBufferData *this)

{
  ~MiniGameCollectionBufferData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionBufferData::StaticClassInit() */

void MiniGameCollectionBufferData::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGameCollectionBufferData");
    (*pcVar2)(plVar1,asStack_10,FUN_038b5578,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameCollectionBufferData::StaticGetClass() */

long * MiniGameCollectionBufferData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MiniGameCollectionBufferData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameCollectionBufferData::GetClass() const */

long * MiniGameCollectionBufferData::GetClass(void)

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
  (*pcVar3)(plVar1,"MiniGameCollectionBufferData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameCollectionBufferData::MiniGameCollectionBufferData() */

void __thiscall
MiniGameCollectionBufferData::MiniGameCollectionBufferData(MiniGameCollectionBufferData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066b45c0;
  *(undefined ***)(this + 8) = &PTR__MiniGameCollectionBufferData_066b4628;
  return;
}


/* MiniGameCollectionBufferData::StaticNew() */

MiniGameCollectionBufferData * MiniGameCollectionBufferData::StaticNew(void)

{
  MiniGameCollectionBufferData *this;
  
  this = ::operator_new(0x18);
  MiniGameCollectionBufferData(this);
  return this;
}

