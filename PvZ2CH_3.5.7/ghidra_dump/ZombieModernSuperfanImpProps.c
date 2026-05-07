// Class: ZombieModernSuperfanImpProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernSuperfanImpProps::StaticClassInit() */

void ZombieModernSuperfanImpProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieModernSuperfanImpProps");
    (*pcVar2)(plVar1,asStack_10,FUN_043c41d4,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieModernSuperfanImpProps::StaticGetClass() */

long * ZombieModernSuperfanImpProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieModernSuperfanImpProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieModernSuperfanImpProps::GetClass() const */

long * ZombieModernSuperfanImpProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieModernSuperfanImpProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieModernSuperfanImpProps::ZombieModernSuperfanImpProps() */

void __thiscall
ZombieModernSuperfanImpProps::ZombieModernSuperfanImpProps(ZombieModernSuperfanImpProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined ***)this = &PTR_GetClass_06844e10;
  *(undefined4 *)(this + 0x214) = 2;
  *(undefined4 *)(this + 0x218) = 0x43480000;
  *(undefined4 *)(this + 0x21c) = 0x42480000;
  return;
}


/* ZombieModernSuperfanImpProps::StaticNew() */

ZombieModernSuperfanImpProps * ZombieModernSuperfanImpProps::StaticNew(void)

{
  ZombieModernSuperfanImpProps *this;
  
  this = ::operator_new(0x220);
  ZombieModernSuperfanImpProps(this);
  return this;
}


/* ZombieModernSuperfanImpProps::~ZombieModernSuperfanImpProps() */

void __thiscall
ZombieModernSuperfanImpProps::~ZombieModernSuperfanImpProps(ZombieModernSuperfanImpProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06844e10;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieModernSuperfanImpProps::~ZombieModernSuperfanImpProps() */

void __thiscall
ZombieModernSuperfanImpProps::~ZombieModernSuperfanImpProps(ZombieModernSuperfanImpProps *this)

{
  ~ZombieModernSuperfanImpProps(this);
  AK::FreeHook(this);
  return;
}

