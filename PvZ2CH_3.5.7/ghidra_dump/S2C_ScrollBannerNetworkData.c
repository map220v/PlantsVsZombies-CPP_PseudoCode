// Class: S2C_ScrollBannerNetworkData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ScrollBannerNetworkData::StaticClassInit() */

void S2C_ScrollBannerNetworkData::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_ScrollBannerData");
    (*pcVar3)(plVar2,asStack_10,FUN_0459fbe8,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_ScrollBannerNetworkData");
    (*pcVar3)(plVar2,asStack_10,FUN_045a0a28,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_ScrollBannerNetworkData::StaticGetClass() */

long * S2C_ScrollBannerNetworkData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ScrollBannerNetworkData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ScrollBannerNetworkData::GetClass() const */

long * S2C_ScrollBannerNetworkData::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ScrollBannerNetworkData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ScrollBannerNetworkData::S2C_ScrollBannerNetworkData() */

void __thiscall
S2C_ScrollBannerNetworkData::S2C_ScrollBannerNetworkData(S2C_ScrollBannerNetworkData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_068661e0;
  *(undefined ***)(this + 8) = &PTR__S2C_ScrollBannerNetworkData_06866248;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* S2C_ScrollBannerNetworkData::StaticNew() */

S2C_ScrollBannerNetworkData * S2C_ScrollBannerNetworkData::StaticNew(void)

{
  S2C_ScrollBannerNetworkData *this;
  
  this = ::operator_new(0x30);
  S2C_ScrollBannerNetworkData(this);
  return this;
}


/* S2C_ScrollBannerNetworkData::~S2C_ScrollBannerNetworkData() */

void __thiscall
S2C_ScrollBannerNetworkData::~S2C_ScrollBannerNetworkData(S2C_ScrollBannerNetworkData *this)

{
  *(undefined ***)this = &PTR_GetClass_068661e0;
  *(undefined ***)(this + 8) = &PTR__S2C_ScrollBannerNetworkData_06866248;
  std::vector<S2C_ScrollBannerData,std::allocator<S2C_ScrollBannerData>>::~vector
            ((vector<S2C_ScrollBannerData,std::allocator<S2C_ScrollBannerData>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_ScrollBannerNetworkData::~S2C_ScrollBannerNetworkData() */

void __thiscall
S2C_ScrollBannerNetworkData::~S2C_ScrollBannerNetworkData(S2C_ScrollBannerNetworkData *this)

{
  ~S2C_ScrollBannerNetworkData(this + -8);
  return;
}


/* S2C_ScrollBannerNetworkData::~S2C_ScrollBannerNetworkData() */

void __thiscall
S2C_ScrollBannerNetworkData::~S2C_ScrollBannerNetworkData(S2C_ScrollBannerNetworkData *this)

{
  ~S2C_ScrollBannerNetworkData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_ScrollBannerNetworkData::~S2C_ScrollBannerNetworkData() */

void __thiscall
S2C_ScrollBannerNetworkData::~S2C_ScrollBannerNetworkData(S2C_ScrollBannerNetworkData *this)

{
  ~S2C_ScrollBannerNetworkData(this + -8);
  return;
}


/* S2C_ScrollBannerNetworkData::S2C_ScrollBannerNetworkData(S2C_ScrollBannerNetworkData const&) */

void __thiscall
S2C_ScrollBannerNetworkData::S2C_ScrollBannerNetworkData
          (S2C_ScrollBannerNetworkData *this,S2C_ScrollBannerNetworkData *param_1)

{
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_068661e0;
  *(undefined ***)(this + 8) = &PTR__S2C_ScrollBannerNetworkData_06866248;
  std::vector<S2C_ScrollBannerData,std::allocator<S2C_ScrollBannerData>>::vector
            ((vector<S2C_ScrollBannerData,std::allocator<S2C_ScrollBannerData>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  return;
}

