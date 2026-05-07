// Class: INetworkErrorData


/* INetworkErrorData::INetworkErrorData(int) */

void __thiscall INetworkErrorData::INetworkErrorData(INetworkErrorData *this,int param_1)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066092a0;
  *(undefined ***)(this + 8) = &PTR__INetworkErrorData_06609308;
  Set8BytesTo0(this + 0x18);
  *(undefined4 *)(this + 0x20) = 0;
  FUN_05476574(this + 0x28);
  *(int *)(this + 0x20) = param_1;
  return;
}


/* INetworkErrorData::INetworkErrorData(INetworkErrorData const&) */

void __thiscall
INetworkErrorData::INetworkErrorData(INetworkErrorData *this,INetworkErrorData *param_1)

{
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_066092a0;
  *(undefined ***)(this + 8) = &PTR__INetworkErrorData_06609308;
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_05477b24(this + 0x28,param_1 + 0x28);
  return;
}


/* INetworkErrorData::~INetworkErrorData() */

void __thiscall INetworkErrorData::~INetworkErrorData(INetworkErrorData *this)

{
  *(undefined ***)this = &PTR_GetClass_066092a0;
  *(undefined ***)(this + 8) = &PTR__INetworkErrorData_06609308;
  FUN_05476c50(this + 0x28);
  std::string::~string((string *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to INetworkErrorData::~INetworkErrorData() */

void __thiscall INetworkErrorData::~INetworkErrorData(INetworkErrorData *this)

{
  ~INetworkErrorData(this + -8);
  return;
}


/* INetworkErrorData::~INetworkErrorData() */

void __thiscall INetworkErrorData::~INetworkErrorData(INetworkErrorData *this)

{
  ~INetworkErrorData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to INetworkErrorData::~INetworkErrorData() */

void __thiscall INetworkErrorData::~INetworkErrorData(INetworkErrorData *this)

{
  ~INetworkErrorData(this + -8);
  return;
}


/* INetworkErrorData::INetworkErrorData() */

void __thiscall INetworkErrorData::INetworkErrorData(INetworkErrorData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066092a0;
  *(undefined ***)(this + 8) = &PTR__INetworkErrorData_06609308;
  Set8BytesTo0(this + 0x18);
  *(undefined4 *)(this + 0x20) = 0;
  FUN_05476574(this + 0x28);
  return;
}


/* INetworkErrorData::StaticNew() */

INetworkErrorData * INetworkErrorData::StaticNew(void)

{
  INetworkErrorData *this;
  
  this = ::operator_new(0x30);
  INetworkErrorData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* INetworkErrorData::StaticClassInit() */

void INetworkErrorData::StaticClassInit(void)

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
    std::string::string(asStack_10,"INetworkErrorData");
    (*pcVar2)(plVar1,asStack_10,FUN_0320a9b8,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* INetworkErrorData::StaticGetClass() */

long * INetworkErrorData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"INetworkErrorData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* INetworkErrorData::GetClass() const */

long * INetworkErrorData::GetClass(void)

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
  (*pcVar3)(plVar1,"INetworkErrorData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* INetworkErrorData::INetworkErrorData(std::string const&) */

void __thiscall INetworkErrorData::INetworkErrorData(INetworkErrorData *this,string *param_1)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066092a0;
  *(undefined ***)(this + 8) = &PTR__INetworkErrorData_06609308;
  Set8BytesTo0(this + 0x18);
  *(undefined4 *)(this + 0x20) = 0;
  FUN_05476574(this + 0x28);
  std::string::string(asStack_10,"{\"d\":");
  nop();
  thunk_FUN_054757c0(asStack_10,param_1);
  uVar1 = thunk_FUN_054744e0(asStack_10,0x7d,0xffffffffffffffff);
  FUN_054755d4(asStack_10,uVar1,&DAT_05593340);
  PlantPacketJsonConverter::SerializeJson((PlantPacketJsonConverter *)this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

