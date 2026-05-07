// Class: NewPVPSeedBankProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPSeedBankProperties::StaticClassInit() */

void NewPVPSeedBankProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPSeedBankProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0351f3e8,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPSeedBankProperties::StaticGetClass() */

long * NewPVPSeedBankProperties::StaticGetClass(void)

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
  uVar2 = SeedBankProperties::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPSeedBankProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPSeedBankProperties::GetClass() const */

long * NewPVPSeedBankProperties::GetClass(void)

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
  uVar2 = SeedBankProperties::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPSeedBankProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPSeedBankProperties::GetModuleClass() const */

long * NewPVPSeedBankProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (NewPVPSeedBankModule::sClass != (long *)0x0) {
    return NewPVPSeedBankModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  NewPVPSeedBankModule::sClass = plVar1;
  uVar2 = SeedBankModule::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPSeedBankModule",uVar2,NewPVPSeedBankModule::StaticNew);
  NewPVPSeedBankModule::StaticClassInit();
  return NewPVPSeedBankModule::sClass;
}


/* NewPVPSeedBankProperties::NewPVPSeedBankProperties() */

void __thiscall NewPVPSeedBankProperties::NewPVPSeedBankProperties(NewPVPSeedBankProperties *this)

{
  SeedBankProperties::SeedBankProperties((SeedBankProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0664ed60;
  return;
}


/* NewPVPSeedBankProperties::StaticNew() */

NewPVPSeedBankProperties * NewPVPSeedBankProperties::StaticNew(void)

{
  NewPVPSeedBankProperties *this;
  
  this = ::operator_new(0xd0);
  NewPVPSeedBankProperties(this);
  return this;
}


/* NewPVPSeedBankProperties::~NewPVPSeedBankProperties() */

void __thiscall NewPVPSeedBankProperties::~NewPVPSeedBankProperties(NewPVPSeedBankProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0664ed60;
  SeedBankProperties::~SeedBankProperties((SeedBankProperties *)this);
  return;
}


/* NewPVPSeedBankProperties::~NewPVPSeedBankProperties() */

void __thiscall NewPVPSeedBankProperties::~NewPVPSeedBankProperties(NewPVPSeedBankProperties *this)

{
  ~NewPVPSeedBankProperties(this);
  AK::FreeHook(this);
  return;
}

