// Class: NetworkSecretAreaReward


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkSecretAreaReward::StaticClassInit() */

void NetworkSecretAreaReward::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkSecretAreaRewardContent");
    (*pcVar3)(plVar2,asStack_10,FUN_03dcb704,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkSecretAreaReward");
    (*pcVar3)(plVar2,asStack_10,FUN_03dce7f8,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkSecretAreaReward::StaticGetClass() */

long * NetworkSecretAreaReward::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkSecretAreaReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkSecretAreaReward::GetClass() const */

long * NetworkSecretAreaReward::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkSecretAreaReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkSecretAreaReward::NetworkSecretAreaReward() */

void __thiscall NetworkSecretAreaReward::NetworkSecretAreaReward(NetworkSecretAreaReward *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0677c970;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  return;
}


/* NetworkSecretAreaReward::StaticNew() */

NetworkSecretAreaReward * NetworkSecretAreaReward::StaticNew(void)

{
  NetworkSecretAreaReward *this;
  
  this = ::operator_new(0x50);
  NetworkSecretAreaReward(this);
  return this;
}


/* NetworkSecretAreaReward::~NetworkSecretAreaReward() */

void __thiscall NetworkSecretAreaReward::~NetworkSecretAreaReward(NetworkSecretAreaReward *this)

{
  *(undefined ***)this = &PTR_GetClass_0677c970;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x38));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x20));
  std::
  vector<std::vector<NetworkSecretAreaRewardContent,std::allocator<NetworkSecretAreaRewardContent>>,std::allocator<std::vector<NetworkSecretAreaRewardContent,std::allocator<NetworkSecretAreaRewardContent>>>>
  ::~vector((vector<std::vector<NetworkSecretAreaRewardContent,std::allocator<NetworkSecretAreaRewardContent>>,std::allocator<std::vector<NetworkSecretAreaRewardContent,std::allocator<NetworkSecretAreaRewardContent>>>>
             *)(this + 8));
  nop();
  return;
}


/* NetworkSecretAreaReward::~NetworkSecretAreaReward() */

void __thiscall NetworkSecretAreaReward::~NetworkSecretAreaReward(NetworkSecretAreaReward *this)

{
  ~NetworkSecretAreaReward(this);
  AK::FreeHook(this);
  return;
}

