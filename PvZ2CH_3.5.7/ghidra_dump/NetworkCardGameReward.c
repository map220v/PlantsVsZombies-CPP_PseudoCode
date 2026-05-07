// Class: NetworkCardGameReward


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkCardGameReward::StaticClassInit() */

void NetworkCardGameReward::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkCardGameRewardContent");
    (*pcVar3)(plVar2,asStack_10,FUN_0355db5c,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkCardGameReward");
    (*pcVar3)(plVar2,asStack_10,FUN_03560014,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkCardGameReward::StaticGetClass() */

long * NetworkCardGameReward::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"NetworkCardGameReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkCardGameReward::GetClass() const */

long * NetworkCardGameReward::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"NetworkCardGameReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkCardGameReward::NetworkCardGameReward() */

void __thiscall NetworkCardGameReward::NetworkCardGameReward(NetworkCardGameReward *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06659f00;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  return;
}


/* NetworkCardGameReward::StaticNew() */

NetworkCardGameReward * NetworkCardGameReward::StaticNew(void)

{
  NetworkCardGameReward *this;
  
  this = ::operator_new(0x50);
  NetworkCardGameReward(this);
  return this;
}


/* NetworkCardGameReward::~NetworkCardGameReward() */

void __thiscall NetworkCardGameReward::~NetworkCardGameReward(NetworkCardGameReward *this)

{
  *(undefined ***)this = &PTR_GetClass_06659f00;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x38));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x20));
  std::
  vector<std::vector<NetworkCardGameRewardContent,std::allocator<NetworkCardGameRewardContent>>,std::allocator<std::vector<NetworkCardGameRewardContent,std::allocator<NetworkCardGameRewardContent>>>>
  ::~vector((vector<std::vector<NetworkCardGameRewardContent,std::allocator<NetworkCardGameRewardContent>>,std::allocator<std::vector<NetworkCardGameRewardContent,std::allocator<NetworkCardGameRewardContent>>>>
             *)(this + 8));
  nop();
  return;
}


/* NetworkCardGameReward::~NetworkCardGameReward() */

void __thiscall NetworkCardGameReward::~NetworkCardGameReward(NetworkCardGameReward *this)

{
  ~NetworkCardGameReward(this);
  AK::FreeHook(this);
  return;
}

