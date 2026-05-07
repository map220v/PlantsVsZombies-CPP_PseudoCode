// Class: ZombieLostCityGuideProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityGuideProps::StaticClassInit() */

void ZombieLostCityGuideProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieLostCityGuideProps");
    (*pcVar2)(plVar1,asStack_10,FUN_049a5ed4,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieLostCityGuideProps::StaticGetClass() */

long * ZombieLostCityGuideProps::StaticGetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieLostCityGuideProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieLostCityGuideProps::GetClass() const */

long * ZombieLostCityGuideProps::GetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieLostCityGuideProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieLostCityGuideProps::ZombieLostCityGuideProps() */

void __thiscall ZombieLostCityGuideProps::ZombieLostCityGuideProps(ZombieLostCityGuideProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06922df0;
  return;
}


/* ZombieLostCityGuideProps::StaticNew() */

ZombieLostCityGuideProps * ZombieLostCityGuideProps::StaticNew(void)

{
  ZombieLostCityGuideProps *this;
  
  this = ::operator_new(0x210);
  ZombieLostCityGuideProps(this);
  return this;
}


/* ZombieLostCityGuideProps::~ZombieLostCityGuideProps() */

void __thiscall ZombieLostCityGuideProps::~ZombieLostCityGuideProps(ZombieLostCityGuideProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06922df0;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieLostCityGuideProps::~ZombieLostCityGuideProps() */

void __thiscall ZombieLostCityGuideProps::~ZombieLostCityGuideProps(ZombieLostCityGuideProps *this)

{
  ~ZombieLostCityGuideProps(this);
  AK::FreeHook(this);
  return;
}

