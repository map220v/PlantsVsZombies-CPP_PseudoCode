// Class: ZombieRomanImpProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanImpProps::StaticClassInit() */

void ZombieRomanImpProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieRomanImpProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04658300,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRomanImpProps::StaticGetClass() */

long * ZombieRomanImpProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRomanImpProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRomanImpProps::GetClass() const */

long * ZombieRomanImpProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRomanImpProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRomanImpProps::ZombieRomanImpProps() */

void __thiscall ZombieRomanImpProps::ZombieRomanImpProps(ZombieRomanImpProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x210) = 10;
  *(undefined ***)this = &PTR_GetClass_0688a280;
  return;
}


/* ZombieRomanImpProps::StaticNew() */

ZombieRomanImpProps * ZombieRomanImpProps::StaticNew(void)

{
  ZombieRomanImpProps *this;
  
  this = ::operator_new(0x218);
  ZombieRomanImpProps(this);
  return this;
}


/* ZombieRomanImpProps::~ZombieRomanImpProps() */

void __thiscall ZombieRomanImpProps::~ZombieRomanImpProps(ZombieRomanImpProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0688a280;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieRomanImpProps::~ZombieRomanImpProps() */

void __thiscall ZombieRomanImpProps::~ZombieRomanImpProps(ZombieRomanImpProps *this)

{
  ~ZombieRomanImpProps(this);
  AK::FreeHook(this);
  return;
}

