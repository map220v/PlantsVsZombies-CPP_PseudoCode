// Class: CornucopiaLeaderBoardData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaLeaderBoardData::StaticClassInit() */

void CornucopiaLeaderBoardData::StaticClassInit(void)

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
    std::string::string(asStack_10,"CornucopiaRankData");
    (*pcVar3)(plVar2,asStack_10,FUN_04e54944,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CornucopiaLeaderBoardData");
    (*pcVar3)(plVar2,asStack_10,FUN_04e5bdd0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CornucopiaLeaderBoardData::StaticGetClass() */

long * CornucopiaLeaderBoardData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CornucopiaLeaderBoardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CornucopiaLeaderBoardData::GetClass() const */

long * CornucopiaLeaderBoardData::GetClass(void)

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
  (*pcVar3)(plVar1,"CornucopiaLeaderBoardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CornucopiaLeaderBoardData::CornucopiaLeaderBoardData() */

void __thiscall
CornucopiaLeaderBoardData::CornucopiaLeaderBoardData(CornucopiaLeaderBoardData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069e3010;
  *(undefined ***)(this + 8) = &PTR__CornucopiaLeaderBoardData_069e3078;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<CornucopiaRankData,std::allocator<CornucopiaRankData>>::clear
            ((vector<CornucopiaRankData,std::allocator<CornucopiaRankData>> *)(this + 0x18));
  return;
}


/* CornucopiaLeaderBoardData::StaticNew() */

CornucopiaLeaderBoardData * CornucopiaLeaderBoardData::StaticNew(void)

{
  CornucopiaLeaderBoardData *this;
  
  this = ::operator_new(0x30);
  CornucopiaLeaderBoardData(this);
  return this;
}


/* CornucopiaLeaderBoardData::~CornucopiaLeaderBoardData() */

void __thiscall
CornucopiaLeaderBoardData::~CornucopiaLeaderBoardData(CornucopiaLeaderBoardData *this)

{
  *(undefined ***)this = &PTR_GetClass_069e3010;
  *(undefined ***)(this + 8) = &PTR__CornucopiaLeaderBoardData_069e3078;
  std::vector<CornucopiaRankData,std::allocator<CornucopiaRankData>>::~vector
            ((vector<CornucopiaRankData,std::allocator<CornucopiaRankData>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to CornucopiaLeaderBoardData::~CornucopiaLeaderBoardData() */

void __thiscall
CornucopiaLeaderBoardData::~CornucopiaLeaderBoardData(CornucopiaLeaderBoardData *this)

{
  ~CornucopiaLeaderBoardData(this + -8);
  return;
}


/* CornucopiaLeaderBoardData::~CornucopiaLeaderBoardData() */

void __thiscall
CornucopiaLeaderBoardData::~CornucopiaLeaderBoardData(CornucopiaLeaderBoardData *this)

{
  ~CornucopiaLeaderBoardData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CornucopiaLeaderBoardData::~CornucopiaLeaderBoardData() */

void __thiscall
CornucopiaLeaderBoardData::~CornucopiaLeaderBoardData(CornucopiaLeaderBoardData *this)

{
  ~CornucopiaLeaderBoardData(this + -8);
  return;
}

