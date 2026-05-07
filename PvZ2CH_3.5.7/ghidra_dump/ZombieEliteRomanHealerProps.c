// Class: ZombieEliteRomanHealerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEliteRomanHealerProps::StaticClassInit() */

void ZombieEliteRomanHealerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieEliteRomanHealerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04ef5e58,0x268,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEliteRomanHealerProps::StaticGetClass() */

long * ZombieEliteRomanHealerProps::StaticGetClass(void)

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
  uVar2 = ZombieRomanHealerProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEliteRomanHealerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEliteRomanHealerProps::GetClass() const */

long * ZombieEliteRomanHealerProps::GetClass(void)

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
  uVar2 = ZombieRomanHealerProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEliteRomanHealerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEliteRomanHealerProps::ZombieEliteRomanHealerProps() */

void __thiscall
ZombieEliteRomanHealerProps::ZombieEliteRomanHealerProps(ZombieEliteRomanHealerProps *this)

{
  ZombieRomanHealerProps::ZombieRomanHealerProps((ZombieRomanHealerProps *)this);
  *(undefined4 *)(this + 0x25c) = 0x41f00000;
  *(undefined ***)this = &PTR_GetClass_06a06560;
  *(undefined4 *)(this + 600) = 0x43160000;
  *(undefined4 *)(this + 0x260) = 0x41200000;
  return;
}


/* ZombieEliteRomanHealerProps::StaticNew() */

ZombieEliteRomanHealerProps * ZombieEliteRomanHealerProps::StaticNew(void)

{
  ZombieEliteRomanHealerProps *this;
  
  this = ::operator_new(0x268);
  ZombieEliteRomanHealerProps(this);
  return this;
}


/* ZombieEliteRomanHealerProps::~ZombieEliteRomanHealerProps() */

void __thiscall
ZombieEliteRomanHealerProps::~ZombieEliteRomanHealerProps(ZombieEliteRomanHealerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06a06560;
  ZombieRomanHealerProps::~ZombieRomanHealerProps((ZombieRomanHealerProps *)this);
  return;
}


/* ZombieEliteRomanHealerProps::~ZombieEliteRomanHealerProps() */

void __thiscall
ZombieEliteRomanHealerProps::~ZombieEliteRomanHealerProps(ZombieEliteRomanHealerProps *this)

{
  ~ZombieEliteRomanHealerProps(this);
  AK::FreeHook(this);
  return;
}

