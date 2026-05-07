// Class: BonusChallengeModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BonusChallengeModule::StaticClassInit() */

void BonusChallengeModule::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"BonusChallengeModule");
    (*pcVar2)(plVar1,asStack_10,FUN_036a9e44,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BonusChallengeModule::StaticGetClass() */

long * BonusChallengeModule::StaticGetClass(void)

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
  uVar2 = BaseChallengeModule::StaticGetClass();
  (*pcVar3)(plVar1,"BonusChallengeModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BonusChallengeModule::BonusChallengeModule() */

void __thiscall BonusChallengeModule::BonusChallengeModule(BonusChallengeModule *this)

{
  BaseChallengeModule::BaseChallengeModule((BaseChallengeModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_066806c0;
  return;
}


/* BonusChallengeModule::StaticNew() */

BonusChallengeModule * BonusChallengeModule::StaticNew(void)

{
  BonusChallengeModule *this;
  
  this = ::operator_new(0x20);
  BonusChallengeModule(this);
  return this;
}


/* BonusChallengeModule::~BonusChallengeModule() */

void __thiscall BonusChallengeModule::~BonusChallengeModule(BonusChallengeModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066806c0;
  BaseChallengeModule::~BaseChallengeModule((BaseChallengeModule *)this);
  return;
}


/* BonusChallengeModule::~BonusChallengeModule() */

void __thiscall BonusChallengeModule::~BonusChallengeModule(BonusChallengeModule *this)

{
  ~BonusChallengeModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BonusChallengeModule::CalcTotalActiveChallenges() */

void __thiscall BonusChallengeModule::CalcTotalActiveChallenges(BonusChallengeModule *this)

{
  undefined4 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  (**(code **)(*(long *)this + 0xb8))
            (this,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar1 = FUN_036a9cf0(local_20,local_18);
  std::vector<Challenge*,std::allocator<Challenge*>>::~vector
            ((vector<Challenge*,std::allocator<Challenge*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BonusChallengeModule::CalcCompletedActiveChallenges() */

void __thiscall BonusChallengeModule::CalcCompletedActiveChallenges(BonusChallengeModule *this)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  int iVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  iVar4 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (**(code **)(*(long *)this + 0xb8))(this,avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    if ((*plVar3 != 0) && (cVar1 = FUN_036a9cdc(*(undefined4 *)(*plVar3 + 0x1c)), cVar1 != '\0')) {
      iVar4 = iVar4 + 1;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<Challenge*,std::allocator<Challenge*>>::~vector
            ((vector<Challenge*,std::allocator<Challenge*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar4);
  }
  return;
}

