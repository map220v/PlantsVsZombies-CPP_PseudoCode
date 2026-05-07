// Class: PartyAssistMainData


/* PartyAssistMainData::PartyAssistMainData() */

void __thiscall PartyAssistMainData::PartyAssistMainData(PartyAssistMainData *this)

{
  undefined **__n;
  
  INetworkData::INetworkData((INetworkData *)this);
  __n = &PTR_GetClass_069efee0;
  *(undefined ***)this = &PTR_GetClass_069efee0;
  *(undefined ***)(this + 8) = &PTR__PartyAssistMainData_069eff48;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa0));
  Set8BytesTo0((string *)(this + 0xb8));
  Set8BytesTo0((string *)(this + 0xc0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 200));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  std::string::append((string *)(this + 0xb8),"peashooter",(size_t)__n);
  std::string::append((string *)(this + 0xc0),"custom_01",(size_t)__n);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x20),&DAT_057513f0,10);
  *(undefined4 *)(this + 0xe0) = 0;
  this[0xe4] = (PartyAssistMainData)0x0;
  return;
}


/* PartyAssistMainData::~PartyAssistMainData() */

void __thiscall PartyAssistMainData::~PartyAssistMainData(PartyAssistMainData *this)

{
  *(undefined ***)this = &PTR_GetClass_069efee0;
  *(undefined ***)(this + 8) = &PTR__PartyAssistMainData_069eff48;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0xe8));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)(this + 200));
  std::string::~string((string *)(this + 0xc0));
  std::string::~string((string *)(this + 0xb8));
  std::vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>>::~vector
            ((vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>> *)(this + 0xa0));
  std::vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>>::~vector
            ((vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>> *)(this + 0x88));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x70));
  std::vector<PartyTaskInfo,std::allocator<PartyTaskInfo>>::~vector
            ((vector<PartyTaskInfo,std::allocator<PartyTaskInfo>> *)(this + 0x50));
  std::
  vector<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>,std::allocator<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>>>
  ::~vector((vector<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>,std::allocator<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>>>
             *)(this + 0x38));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to PartyAssistMainData::~PartyAssistMainData() */

void __thiscall PartyAssistMainData::~PartyAssistMainData(PartyAssistMainData *this)

{
  ~PartyAssistMainData(this + -8);
  return;
}


/* PartyAssistMainData::~PartyAssistMainData() */

void __thiscall PartyAssistMainData::~PartyAssistMainData(PartyAssistMainData *this)

{
  ~PartyAssistMainData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PartyAssistMainData::~PartyAssistMainData() */

void __thiscall PartyAssistMainData::~PartyAssistMainData(PartyAssistMainData *this)

{
  ~PartyAssistMainData(this + -8);
  return;
}


/* PartyAssistMainData::PartyAssistMainData(PartyAssistMainData const&) */

void __thiscall
PartyAssistMainData::PartyAssistMainData(PartyAssistMainData *this,PartyAssistMainData *param_1)

{
  undefined4 uVar1;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined ***)this = &PTR_GetClass_069efee0;
  *(undefined ***)(this + 8) = &PTR__PartyAssistMainData_069eff48;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x20),(vector *)(param_1 + 0x20));
  std::
  vector<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>,std::allocator<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>>>
  ::vector((vector<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>,std::allocator<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>>>
            *)(this + 0x38),(vector *)(param_1 + 0x38));
  std::vector<PartyTaskInfo,std::allocator<PartyTaskInfo>>::vector
            ((vector<PartyTaskInfo,std::allocator<PartyTaskInfo>> *)(this + 0x50),
             (vector *)(param_1 + 0x50));
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x70),
             (vector *)(param_1 + 0x70));
  std::vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>>::vector
            ((vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>> *)(this + 0x88),
             (vector *)(param_1 + 0x88));
  std::vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>>::vector
            ((vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>> *)(this + 0xa0),
             (vector *)(param_1 + 0xa0));
  FUN_05475d88(this + 0xb8,param_1 + 0xb8);
  FUN_05475d88(this + 0xc0,param_1 + 0xc0);
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
            *)(this + 200),(vector *)(param_1 + 200));
  uVar1 = *(undefined4 *)(param_1 + 0xe0);
  this[0xe4] = param_1[0xe4];
  *(undefined4 *)(this + 0xe0) = uVar1;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0xe8),
             (vector *)(param_1 + 0xe8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PartyAssistMainData::StaticClassInit() */

void PartyAssistMainData::StaticClassInit(void)

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
    std::string::string(asStack_10,"PartyAssistBonusInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_04ea2130,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PartyAssistWishBonusInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_04ea1f6c,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PartyTaskInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_04ea1dac,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PartyAssistMainData");
    (*pcVar3)(plVar2,asStack_10,FUN_04ea7c08,0x100,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PartyAssistMainData::StaticGetClass() */

long * PartyAssistMainData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PartyAssistMainData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PartyAssistMainData::GetClass() const */

long * PartyAssistMainData::GetClass(void)

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
  (*pcVar3)(plVar1,"PartyAssistMainData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PartyAssistMainData::StaticNew() */

PartyAssistMainData * PartyAssistMainData::StaticNew(void)

{
  PartyAssistMainData *this;
  
  this = ::operator_new(0x100);
  PartyAssistMainData(this);
  return this;
}


/* PartyAssistMainData::TEMPNAMEPLACEHOLDERVALUE(PartyAssistMainData const&) */

PartyAssistMainData * __thiscall
PartyAssistMainData::operator=(PartyAssistMainData *this,PartyAssistMainData *param_1)

{
  undefined4 uVar1;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x14) = uVar1;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x20),(vector *)(param_1 + 0x20));
  std::
  vector<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>,std::allocator<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>>>
  ::operator=((vector<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>,std::allocator<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>>>
               *)(this + 0x38),(vector *)(param_1 + 0x38));
  std::vector<PartyTaskInfo,std::allocator<PartyTaskInfo>>::operator=
            ((vector<PartyTaskInfo,std::allocator<PartyTaskInfo>> *)(this + 0x50),
             (vector *)(param_1 + 0x50));
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x70),
             (vector *)(param_1 + 0x70));
  std::vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>>::operator=
            ((vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>> *)(this + 0x88),
             (vector *)(param_1 + 0x88));
  std::vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>>::operator=
            ((vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>> *)(this + 0xa0),
             (vector *)(param_1 + 0xa0));
  thunk_FUN_05475e00(this + 0xb8,param_1 + 0xb8);
  thunk_FUN_05475e00(this + 0xc0,param_1 + 0xc0);
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::operator=((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
               *)(this + 200),(vector *)(param_1 + 200));
  uVar1 = *(undefined4 *)(param_1 + 0xe0);
  this[0xe4] = param_1[0xe4];
  *(undefined4 *)(this + 0xe0) = uVar1;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0xe8),
             (vector *)(param_1 + 0xe8));
  return this;
}

