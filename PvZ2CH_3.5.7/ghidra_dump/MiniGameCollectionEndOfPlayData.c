// Class: MiniGameCollectionEndOfPlayData


/* MiniGameCollectionEndOfPlayData::~MiniGameCollectionEndOfPlayData() */

void __thiscall
MiniGameCollectionEndOfPlayData::~MiniGameCollectionEndOfPlayData
          (MiniGameCollectionEndOfPlayData *this)

{
  *(undefined ***)this = &PTR_GetClass_066b44a0;
  *(undefined ***)(this + 8) = &PTR__MiniGameCollectionEndOfPlayData_066b4508;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to MiniGameCollectionEndOfPlayData::~MiniGameCollectionEndOfPlayData() */

void __thiscall
MiniGameCollectionEndOfPlayData::~MiniGameCollectionEndOfPlayData
          (MiniGameCollectionEndOfPlayData *this)

{
  ~MiniGameCollectionEndOfPlayData(this + -8);
  return;
}


/* MiniGameCollectionEndOfPlayData::~MiniGameCollectionEndOfPlayData() */

void __thiscall
MiniGameCollectionEndOfPlayData::~MiniGameCollectionEndOfPlayData
          (MiniGameCollectionEndOfPlayData *this)

{
  ~MiniGameCollectionEndOfPlayData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MiniGameCollectionEndOfPlayData::~MiniGameCollectionEndOfPlayData() */

void __thiscall
MiniGameCollectionEndOfPlayData::~MiniGameCollectionEndOfPlayData
          (MiniGameCollectionEndOfPlayData *this)

{
  ~MiniGameCollectionEndOfPlayData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionEndOfPlayData::StaticClassInit() */

void MiniGameCollectionEndOfPlayData::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGameCollectionEndOfPlayData");
    (*pcVar2)(plVar1,asStack_10,FUN_038b7434,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameCollectionEndOfPlayData::StaticGetClass() */

long * MiniGameCollectionEndOfPlayData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MiniGameCollectionEndOfPlayData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameCollectionEndOfPlayData::GetClass() const */

long * MiniGameCollectionEndOfPlayData::GetClass(void)

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
  (*pcVar3)(plVar1,"MiniGameCollectionEndOfPlayData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameCollectionEndOfPlayData::MiniGameCollectionEndOfPlayData() */

void __thiscall
MiniGameCollectionEndOfPlayData::MiniGameCollectionEndOfPlayData
          (MiniGameCollectionEndOfPlayData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066b44a0;
  *(undefined ***)(this + 8) = &PTR__MiniGameCollectionEndOfPlayData_066b4508;
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)(this + 0x14));
  return;
}


/* MiniGameCollectionEndOfPlayData::StaticNew() */

MiniGameCollectionEndOfPlayData * MiniGameCollectionEndOfPlayData::StaticNew(void)

{
  MiniGameCollectionEndOfPlayData *this;
  
  this = ::operator_new(0x28);
  MiniGameCollectionEndOfPlayData(this);
  return this;
}


/* MiniGameCollectionEndOfPlayData::TEMPNAMEPLACEHOLDERVALUE(MiniGameCollectionEndOfPlayData const&)
    */

MiniGameCollectionEndOfPlayData * __thiscall
MiniGameCollectionEndOfPlayData::operator=
          (MiniGameCollectionEndOfPlayData *this,MiniGameCollectionEndOfPlayData *param_1)

{
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return this;
}


/* MiniGameCollectionEndOfPlayData::MiniGameCollectionEndOfPlayData(MiniGameCollectionEndOfPlayData
   const&) */

void __thiscall
MiniGameCollectionEndOfPlayData::MiniGameCollectionEndOfPlayData
          (MiniGameCollectionEndOfPlayData *this,MiniGameCollectionEndOfPlayData *param_1)

{
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined ***)this = &PTR_GetClass_066b44a0;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined ***)(this + 8) = &PTR__MiniGameCollectionEndOfPlayData_066b4508;
  return;
}

