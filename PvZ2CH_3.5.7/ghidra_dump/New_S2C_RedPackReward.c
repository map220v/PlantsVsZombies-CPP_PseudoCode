// Class: New_S2C_RedPackReward


/* New_S2C_RedPackReward::New_S2C_RedPackReward() */

void __thiscall New_S2C_RedPackReward::New_S2C_RedPackReward(New_S2C_RedPackReward *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06771090;
  *(undefined ***)(this + 8) = &PTR__New_S2C_RedPackReward_067710f8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* New_S2C_RedPackReward::~New_S2C_RedPackReward() */

void __thiscall New_S2C_RedPackReward::~New_S2C_RedPackReward(New_S2C_RedPackReward *this)

{
  *(undefined ***)this = &PTR_GetClass_06771090;
  *(undefined ***)(this + 8) = &PTR__New_S2C_RedPackReward_067710f8;
  std::vector<New_S2C_RedPackSth,std::allocator<New_S2C_RedPackSth>>::~vector
            ((vector<New_S2C_RedPackSth,std::allocator<New_S2C_RedPackSth>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to New_S2C_RedPackReward::~New_S2C_RedPackReward() */

void __thiscall New_S2C_RedPackReward::~New_S2C_RedPackReward(New_S2C_RedPackReward *this)

{
  ~New_S2C_RedPackReward(this + -8);
  return;
}


/* New_S2C_RedPackReward::~New_S2C_RedPackReward() */

void __thiscall New_S2C_RedPackReward::~New_S2C_RedPackReward(New_S2C_RedPackReward *this)

{
  ~New_S2C_RedPackReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to New_S2C_RedPackReward::~New_S2C_RedPackReward() */

void __thiscall New_S2C_RedPackReward::~New_S2C_RedPackReward(New_S2C_RedPackReward *this)

{
  ~New_S2C_RedPackReward(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* New_S2C_RedPackReward::StaticClassInit() */

void New_S2C_RedPackReward::StaticClassInit(void)

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
    std::string::string(asStack_10,"New_S2C_RedPackSth");
    (*pcVar3)(plVar2,asStack_10,FUN_03d7e5c8,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"New_S2C_RedPackReward");
    (*pcVar3)(plVar2,asStack_10,FUN_03d832ec,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* New_S2C_RedPackReward::StaticGetClass() */

long * New_S2C_RedPackReward::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"New_S2C_RedPackReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* New_S2C_RedPackReward::GetClass() const */

long * New_S2C_RedPackReward::GetClass(void)

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
  (*pcVar3)(plVar1,"New_S2C_RedPackReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* New_S2C_RedPackReward::StaticNew() */

New_S2C_RedPackReward * New_S2C_RedPackReward::StaticNew(void)

{
  New_S2C_RedPackReward *this;
  
  this = ::operator_new(0x30);
  New_S2C_RedPackReward(this);
  return this;
}


/* New_S2C_RedPackReward::TEMPNAMEPLACEHOLDERVALUE(New_S2C_RedPackReward const&) */

New_S2C_RedPackReward * __thiscall
New_S2C_RedPackReward::operator=(New_S2C_RedPackReward *this,New_S2C_RedPackReward *param_1)

{
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  std::vector<New_S2C_RedPackSth,std::allocator<New_S2C_RedPackSth>>::operator=
            ((vector<New_S2C_RedPackSth,std::allocator<New_S2C_RedPackSth>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  return this;
}

