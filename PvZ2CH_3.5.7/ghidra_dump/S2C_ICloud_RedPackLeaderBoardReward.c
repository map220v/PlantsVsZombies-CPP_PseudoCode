// Class: S2C_ICloud_RedPackLeaderBoardReward


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ICloud_RedPackLeaderBoardReward::StaticClassInit() */

void S2C_ICloud_RedPackLeaderBoardReward::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_RedPackContent");
    (*pcVar3)(plVar2,asStack_10,FUN_031feb50,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_PlantPendantInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_032036a8,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_ICloud_RedPackLeaderBoardReward");
    (*pcVar3)(plVar2,asStack_10,FUN_03230dcc,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_ICloud_RedPackLeaderBoardReward::StaticGetClass() */

long * S2C_ICloud_RedPackLeaderBoardReward::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ICloud_RedPackLeaderBoardReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ICloud_RedPackLeaderBoardReward::GetClass() const */

long * S2C_ICloud_RedPackLeaderBoardReward::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ICloud_RedPackLeaderBoardReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ICloud_RedPackLeaderBoardReward::S2C_ICloud_RedPackLeaderBoardReward() */

void __thiscall
S2C_ICloud_RedPackLeaderBoardReward::S2C_ICloud_RedPackLeaderBoardReward
          (S2C_ICloud_RedPackLeaderBoardReward *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660a770;
  *(undefined ***)(this + 8) = &PTR__S2C_ICloud_RedPackLeaderBoardReward_0660a7d8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* S2C_ICloud_RedPackLeaderBoardReward::StaticNew() */

S2C_ICloud_RedPackLeaderBoardReward * S2C_ICloud_RedPackLeaderBoardReward::StaticNew(void)

{
  S2C_ICloud_RedPackLeaderBoardReward *this;
  
  this = ::operator_new(0x48);
  S2C_ICloud_RedPackLeaderBoardReward(this);
  return this;
}


/* S2C_ICloud_RedPackLeaderBoardReward::~S2C_ICloud_RedPackLeaderBoardReward() */

void __thiscall
S2C_ICloud_RedPackLeaderBoardReward::~S2C_ICloud_RedPackLeaderBoardReward
          (S2C_ICloud_RedPackLeaderBoardReward *this)

{
  *(undefined ***)this = &PTR_GetClass_0660a770;
  *(undefined ***)(this + 8) = &PTR__S2C_ICloud_RedPackLeaderBoardReward_0660a7d8;
  std::vector<S2C_RedPackContent,std::allocator<S2C_RedPackContent>>::~vector
            ((vector<S2C_RedPackContent,std::allocator<S2C_RedPackContent>> *)(this + 0x30));
  std::vector<S2C_PlantPendantInfo,std::allocator<S2C_PlantPendantInfo>>::~vector
            ((vector<S2C_PlantPendantInfo,std::allocator<S2C_PlantPendantInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_ICloud_RedPackLeaderBoardReward::~S2C_ICloud_RedPackLeaderBoardReward()
    */

void __thiscall
S2C_ICloud_RedPackLeaderBoardReward::~S2C_ICloud_RedPackLeaderBoardReward
          (S2C_ICloud_RedPackLeaderBoardReward *this)

{
  ~S2C_ICloud_RedPackLeaderBoardReward(this + -8);
  return;
}


/* S2C_ICloud_RedPackLeaderBoardReward::~S2C_ICloud_RedPackLeaderBoardReward() */

void __thiscall
S2C_ICloud_RedPackLeaderBoardReward::~S2C_ICloud_RedPackLeaderBoardReward
          (S2C_ICloud_RedPackLeaderBoardReward *this)

{
  ~S2C_ICloud_RedPackLeaderBoardReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_ICloud_RedPackLeaderBoardReward::~S2C_ICloud_RedPackLeaderBoardReward()
    */

void __thiscall
S2C_ICloud_RedPackLeaderBoardReward::~S2C_ICloud_RedPackLeaderBoardReward
          (S2C_ICloud_RedPackLeaderBoardReward *this)

{
  ~S2C_ICloud_RedPackLeaderBoardReward(this + -8);
  return;
}

