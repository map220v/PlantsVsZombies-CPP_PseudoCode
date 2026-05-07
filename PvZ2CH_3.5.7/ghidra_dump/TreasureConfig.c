// Class: TreasureConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TreasureConfig::StaticClassInit() */

void TreasureConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"TreasureReward");
    (*pcVar3)(plVar2,asStack_10,FUN_0484a788,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TreasurePool");
    (*pcVar3)(plVar2,asStack_10,FUN_0484a3a4,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TreasureConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_0484b2fc,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TreasureConfig::StaticGetClass() */

long * TreasureConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TreasureConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TreasureConfig::GetClass() const */

long * TreasureConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"TreasureConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TreasureConfig::GetTreasurePool(std::string&) */

void __thiscall TreasureConfig::GetTreasurePool(TreasureConfig *this,string *param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = 0;
  do {
    auVar4 = FUN_0484a29c(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28));
    if (auVar4._0_8_ <= uVar2) {
      uVar3 = 0;
LAB_0484af30:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
    Sexy::StringToUpper((Sexy *)param_1,auVar4._8_8_);
    auVar4 = FUN_0484a2d8(*(undefined8 *)(this + 0x20),uVar2);
    Sexy::StringToUpper(auVar4._0_8_,auVar4._8_8_);
    cVar1 = std::operator==(asStack_18,asStack_10);
    if (cVar1 != '\0') {
      uVar3 = FUN_0484a2d8(*(undefined8 *)(this + 0x20),uVar2);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      goto LAB_0484af30;
    }
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    uVar2 = uVar2 + 1;
  } while( true );
}


/* TreasureConfig::TreasureConfig() */

void __thiscall TreasureConfig::TreasureConfig(TreasureConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0690b4f0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x38));
  return;
}


/* TreasureConfig::StaticNew() */

TreasureConfig * TreasureConfig::StaticNew(void)

{
  TreasureConfig *this;
  
  this = ::operator_new(0x68);
  TreasureConfig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TreasureConfig::GetTreasureRewardBySku(std::string) */

void __thiscall TreasureConfig::GetTreasureRewardBySku(TreasureConfig *this,undefined8 param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_0484b6fc(uVar2,uVar3,param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  }
  else {
    uVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* TreasureConfig::~TreasureConfig() */

void __thiscall TreasureConfig::~TreasureConfig(TreasureConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0690b4f0;
  std::
  map<std::string,std::vector<TreasureReward,std::allocator<TreasureReward>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<TreasureReward,std::allocator<TreasureReward>>>>>
  ::~map((map<std::string,std::vector<TreasureReward,std::allocator<TreasureReward>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<TreasureReward,std::allocator<TreasureReward>>>>>
          *)(this + 0x38));
  std::vector<TreasurePool,std::allocator<TreasurePool>>::~vector
            ((vector<TreasurePool,std::allocator<TreasurePool>> *)(this + 0x20));
  std::vector<TreasureReward,std::allocator<TreasureReward>>::~vector
            ((vector<TreasureReward,std::allocator<TreasureReward>> *)(this + 8));
  nop();
  return;
}


/* TreasureConfig::~TreasureConfig() */

void __thiscall TreasureConfig::~TreasureConfig(TreasureConfig *this)

{
  ~TreasureConfig(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TreasureConfig::GetTreasureRewardsByWorld(std::string const&) */

void __thiscall TreasureConfig::GetTreasureRewardsByWorld(TreasureConfig *this,string *param_1)

{
  map<std::string,std::vector<TreasureReward,std::allocator<TreasureReward>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<TreasureReward,std::allocator<TreasureReward>>>>>
  *this_00;
  char cVar1;
  long lVar2;
  vector<TreasureReward,std::allocator<TreasureReward>> *this_01;
  TreasureReward *pTVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<std::string,std::vector<TreasureReward,std::allocator<TreasureReward>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<TreasureReward,std::allocator<TreasureReward>>>>>
             *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  cVar1 = std::
          map<std::string,std::vector<TreasureReward,std::allocator<TreasureReward>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<TreasureReward,std::allocator<TreasureReward>>>>>
          ::empty(this_00);
  if (cVar1 != '\0') {
    uVar5 = 0;
    while( true ) {
      uVar6 = *(undefined8 *)(this + 8);
      uVar4 = FUN_0484a260(uVar6,*(undefined8 *)(this + 0x10));
      if (uVar4 <= uVar5) break;
      auVar7 = FUN_0484a290(uVar6,uVar5);
      Sexy::StringToUpper((Sexy *)(auVar7._0_8_ + 0x18),auVar7._8_8_);
      this_01 = (vector<TreasureReward,std::allocator<TreasureReward>> *)
                std::
                map<std::string,std::vector<TreasureReward,std::allocator<TreasureReward>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<TreasureReward,std::allocator<TreasureReward>>>>>
                ::operator[](this_00,(string *)&local_10);
      pTVar3 = (TreasureReward *)FUN_0484a290(*(undefined8 *)(this + 8),uVar5);
      std::vector<TreasureReward,std::allocator<TreasureReward>>::push_back(this_01,pTVar3);
      std::string::~string((string *)&local_10);
      uVar5 = uVar5 + 1;
    }
  }
  local_18 = std::
             map<std::string,std::vector<TreasureReward,std::allocator<TreasureReward>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<TreasureReward,std::allocator<TreasureReward>>>>>
             ::find(this_00,param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    lVar2 = lVar2 + 8;
  }
  else {
    lVar2 = 0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar2);
  }
  return;
}

