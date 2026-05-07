// Class: NetworkPlayerSurvey


/* NetworkPlayerSurvey::NetworkPlayerSurvey() */

void __thiscall NetworkPlayerSurvey::NetworkPlayerSurvey(NetworkPlayerSurvey *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066eb270;
  *(undefined ***)(this + 8) = &PTR__NetworkPlayerSurvey_066eb2d8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* NetworkPlayerSurvey::~NetworkPlayerSurvey() */

void __thiscall NetworkPlayerSurvey::~NetworkPlayerSurvey(NetworkPlayerSurvey *this)

{
  *(undefined ***)this = &PTR_GetClass_066eb270;
  *(undefined ***)(this + 8) = &PTR__NetworkPlayerSurvey_066eb2d8;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x30));
  std::vector<PlayerSurveyStringData,std::allocator<PlayerSurveyStringData>>::~vector
            ((vector<PlayerSurveyStringData,std::allocator<PlayerSurveyStringData>> *)(this + 0x18))
  ;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkPlayerSurvey::~NetworkPlayerSurvey() */

void __thiscall NetworkPlayerSurvey::~NetworkPlayerSurvey(NetworkPlayerSurvey *this)

{
  ~NetworkPlayerSurvey(this + -8);
  return;
}


/* NetworkPlayerSurvey::~NetworkPlayerSurvey() */

void __thiscall NetworkPlayerSurvey::~NetworkPlayerSurvey(NetworkPlayerSurvey *this)

{
  ~NetworkPlayerSurvey(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkPlayerSurvey::~NetworkPlayerSurvey() */

void __thiscall NetworkPlayerSurvey::~NetworkPlayerSurvey(NetworkPlayerSurvey *this)

{
  ~NetworkPlayerSurvey(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkPlayerSurvey::StaticClassInit() */

void NetworkPlayerSurvey::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlayerSurveyStringData");
    (*pcVar3)(plVar2,asStack_10,FUN_039be914,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkPlayerSurvey");
    (*pcVar3)(plVar2,asStack_10,FUN_039bfd34,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkPlayerSurvey::StaticGetClass() */

long * NetworkPlayerSurvey::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkPlayerSurvey",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkPlayerSurvey::GetClass() const */

long * NetworkPlayerSurvey::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkPlayerSurvey",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkPlayerSurvey::StaticNew() */

NetworkPlayerSurvey * NetworkPlayerSurvey::StaticNew(void)

{
  NetworkPlayerSurvey *this;
  
  this = ::operator_new(0x48);
  NetworkPlayerSurvey(this);
  return this;
}

