// Class: InvitationData


/* InvitationData::InvitationData() */

void __thiscall InvitationData::InvitationData(InvitationData *this)

{
  undefined **__n;
  
  INetworkData::INetworkData((INetworkData *)this);
  __n = &PTR_GetClass_069e3fe0;
  *(undefined ***)this = &PTR_GetClass_069e3fe0;
  *(undefined ***)(this + 8) = &PTR__InvitationData_069e4048;
  Set8BytesTo0((string *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0x70));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  *(undefined4 *)(this + 0x14) = 0;
  std::string::append((string *)(this + 0x18),"",(size_t)__n);
  this[0x20] = (InvitationData)0x0;
  this[0x21] = (InvitationData)0x0;
  this[0x22] = (InvitationData)0x0;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::clear
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x28));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::clear
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x40));
  std::vector<InvitationTask,std::allocator<InvitationTask>>::clear
            ((vector<InvitationTask,std::allocator<InvitationTask>> *)(this + 0x58));
  std::vector<InvitationPlayerInfo,std::allocator<InvitationPlayerInfo>>::clear
            ((vector<InvitationPlayerInfo,std::allocator<InvitationPlayerInfo>> *)(this + 0x78));
  *(undefined4 *)(this + 0x90) = 0;
  std::vector<InvitationLottery,std::allocator<InvitationLottery>>::clear
            ((vector<InvitationLottery,std::allocator<InvitationLottery>> *)(this + 0x98));
  *(undefined4 *)(this + 0xb0) = 0;
  return;
}


/* InvitationData::~InvitationData() */

void __thiscall InvitationData::~InvitationData(InvitationData *this)

{
  *(undefined ***)this = &PTR_GetClass_069e3fe0;
  *(undefined ***)(this + 8) = &PTR__InvitationData_069e4048;
  std::vector<InvitationLottery,std::allocator<InvitationLottery>>::~vector
            ((vector<InvitationLottery,std::allocator<InvitationLottery>> *)(this + 0x98));
  std::vector<InvitationPlayerInfo,std::allocator<InvitationPlayerInfo>>::~vector
            ((vector<InvitationPlayerInfo,std::allocator<InvitationPlayerInfo>> *)(this + 0x78));
  std::vector<InvitationTask,std::allocator<InvitationTask>>::~vector
            ((vector<InvitationTask,std::allocator<InvitationTask>> *)(this + 0x58));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x40));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x28));
  std::string::~string((string *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to InvitationData::~InvitationData() */

void __thiscall InvitationData::~InvitationData(InvitationData *this)

{
  ~InvitationData(this + -8);
  return;
}


/* InvitationData::~InvitationData() */

void __thiscall InvitationData::~InvitationData(InvitationData *this)

{
  ~InvitationData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to InvitationData::~InvitationData() */

void __thiscall InvitationData::~InvitationData(InvitationData *this)

{
  ~InvitationData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InvitationData::StaticClassInit() */

void InvitationData::StaticClassInit(void)

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
    std::string::string(asStack_10,"InvitationInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_04e65e80,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"InvitationTask");
    (*pcVar3)(plVar2,asStack_10,FUN_04e6b460,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"InvitationPlayerInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_04e661c0,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"InvitationLottery");
    (*pcVar3)(plVar2,asStack_10,FUN_04e6b224,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"InvitationData");
    (*pcVar3)(plVar2,asStack_10,FUN_04e6bbc8,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InvitationData::StaticGetClass() */

long * InvitationData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"InvitationData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InvitationData::GetClass() const */

long * InvitationData::GetClass(void)

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
  (*pcVar3)(plVar1,"InvitationData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InvitationData::StaticNew() */

InvitationData * InvitationData::StaticNew(void)

{
  InvitationData *this;
  
  this = ::operator_new(0xb8);
  InvitationData(this);
  return this;
}


/* InvitationData::TEMPNAMEPLACEHOLDERVALUE(InvitationData const&) */

InvitationData * __thiscall InvitationData::operator=(InvitationData *this,InvitationData *param_1)

{
  InvitationData IVar1;
  InvitationData IVar2;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  IVar1 = param_1[0x20];
  IVar2 = param_1[0x21];
  this[0x22] = param_1[0x22];
  this[0x20] = IVar1;
  this[0x21] = IVar2;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x28),
             (vector *)(param_1 + 0x28));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x40),
             (vector *)(param_1 + 0x40));
  std::vector<InvitationTask,std::allocator<InvitationTask>>::operator=
            ((vector<InvitationTask,std::allocator<InvitationTask>> *)(this + 0x58),
             (vector *)(param_1 + 0x58));
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
  std::vector<InvitationPlayerInfo,std::allocator<InvitationPlayerInfo>>::operator=
            ((vector<InvitationPlayerInfo,std::allocator<InvitationPlayerInfo>> *)(this + 0x78),
             (vector *)(param_1 + 0x78));
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  std::vector<InvitationLottery,std::allocator<InvitationLottery>>::operator=
            ((vector<InvitationLottery,std::allocator<InvitationLottery>> *)(this + 0x98),
             (vector *)(param_1 + 0x98));
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  return this;
}

