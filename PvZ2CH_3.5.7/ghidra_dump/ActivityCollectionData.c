// Class: ActivityCollectionData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionData::StaticClassInit() */

void ActivityCollectionData::StaticClassInit(void)

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
    std::string::string(asStack_10,"ActivityShortInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0341e968,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ActivityCollectionData");
    (*pcVar3)(plVar2,asStack_10,FUN_03420c0c,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityCollectionData::StaticGetClass() */

long * ActivityCollectionData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActivityCollectionData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ActivityCollectionData::GetClass() const */

long * ActivityCollectionData::GetClass(void)

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
  (*pcVar3)(plVar1,"ActivityCollectionData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionData::IsActivityClose(int) */

void __thiscall ActivityCollectionData::IsActivityClose(ActivityCollectionData *this,int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x18));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_034200a8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar1);
    }
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 == param_1) {
      bVar1 = piVar2[2] == 2;
      goto LAB_034200a8;
    }
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_18);
  } while( true );
}


/* ActivityCollectionData::ActivityCollectionData() */

void __thiscall ActivityCollectionData::ActivityCollectionData(ActivityCollectionData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066255c0;
  *(undefined ***)(this + 8) = &PTR__ActivityCollectionData_06625628;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  Set8BytesTo0(this + 0x30);
  Set8BytesTo0(this + 0x38);
  return;
}


/* ActivityCollectionData::StaticNew() */

ActivityCollectionData * ActivityCollectionData::StaticNew(void)

{
  ActivityCollectionData *this;
  
  this = ::operator_new(0x48);
  ActivityCollectionData(this);
  return this;
}


/* ActivityCollectionData::~ActivityCollectionData() */

void __thiscall ActivityCollectionData::~ActivityCollectionData(ActivityCollectionData *this)

{
  *(undefined ***)this = &PTR_GetClass_066255c0;
  *(undefined ***)(this + 8) = &PTR__ActivityCollectionData_06625628;
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::vector<ActivityShortInfo,std::allocator<ActivityShortInfo>>::~vector
            ((vector<ActivityShortInfo,std::allocator<ActivityShortInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to ActivityCollectionData::~ActivityCollectionData() */

void __thiscall ActivityCollectionData::~ActivityCollectionData(ActivityCollectionData *this)

{
  ~ActivityCollectionData(this + -8);
  return;
}


/* ActivityCollectionData::~ActivityCollectionData() */

void __thiscall ActivityCollectionData::~ActivityCollectionData(ActivityCollectionData *this)

{
  ~ActivityCollectionData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ActivityCollectionData::~ActivityCollectionData() */

void __thiscall ActivityCollectionData::~ActivityCollectionData(ActivityCollectionData *this)

{
  ~ActivityCollectionData(this + -8);
  return;
}

