// Class: NewYearChargeConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewYearChargeConfig::StaticClassInit() */

void NewYearChargeConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"stThirdAward");
    (*pcVar3)(plVar2,asStack_10,FUN_0392509c,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewYearChargeConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_0392997c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewYearChargeConfig::StaticGetClass() */

long * NewYearChargeConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewYearChargeConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewYearChargeConfig::GetClass() const */

long * NewYearChargeConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"NewYearChargeConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewYearChargeConfig::NewYearChargeConfig() */

void __thiscall NewYearChargeConfig::NewYearChargeConfig(NewYearChargeConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_GetClass_066ca6c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* NewYearChargeConfig::StaticNew() */

NewYearChargeConfig * NewYearChargeConfig::StaticNew(void)

{
  NewYearChargeConfig *this;
  
  this = ::operator_new(0x30);
  NewYearChargeConfig(this);
  return this;
}


/* NewYearChargeConfig::~NewYearChargeConfig() */

void __thiscall NewYearChargeConfig::~NewYearChargeConfig(NewYearChargeConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_066ca6c0;
  std::vector<stThirdAward,std::allocator<stThirdAward>>::~vector
            ((vector<stThirdAward,std::allocator<stThirdAward>> *)(this + 0x18));
  nop();
  return;
}


/* NewYearChargeConfig::~NewYearChargeConfig() */

void __thiscall NewYearChargeConfig::~NewYearChargeConfig(NewYearChargeConfig *this)

{
  ~NewYearChargeConfig(this);
  AK::FreeHook(this);
  return;
}

