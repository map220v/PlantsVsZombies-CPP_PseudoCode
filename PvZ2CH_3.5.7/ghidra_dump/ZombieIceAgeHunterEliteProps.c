// Class: ZombieIceAgeHunterEliteProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeHunterEliteProps::StaticClassInit() */

void ZombieIceAgeHunterEliteProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieIceAgeHunterEliteProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04765800,0x238,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceAgeHunterEliteProps::StaticGetClass() */

long * ZombieIceAgeHunterEliteProps::StaticGetClass(void)

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
  uVar2 = ZombieIceAgeHunterProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieIceAgeHunterEliteProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeHunterEliteProps::GetClass() const */

long * ZombieIceAgeHunterEliteProps::GetClass(void)

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
  uVar2 = ZombieIceAgeHunterProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieIceAgeHunterEliteProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeHunterEliteProps::ZombieIceAgeHunterEliteProps() */

void __thiscall
ZombieIceAgeHunterEliteProps::ZombieIceAgeHunterEliteProps(ZombieIceAgeHunterEliteProps *this)

{
  ZombieIceAgeHunterProps::ZombieIceAgeHunterProps((ZombieIceAgeHunterProps *)this);
  *(undefined4 *)(this + 0x234) = 3;
  *(undefined ***)this = &PTR_GetClass_068cfca0;
  return;
}


/* ZombieIceAgeHunterEliteProps::StaticNew() */

ZombieIceAgeHunterEliteProps * ZombieIceAgeHunterEliteProps::StaticNew(void)

{
  ZombieIceAgeHunterEliteProps *this;
  
  this = ::operator_new(0x238);
  ZombieIceAgeHunterEliteProps(this);
  return this;
}


/* ZombieIceAgeHunterEliteProps::~ZombieIceAgeHunterEliteProps() */

void __thiscall
ZombieIceAgeHunterEliteProps::~ZombieIceAgeHunterEliteProps(ZombieIceAgeHunterEliteProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068cfca0;
  ZombieIceAgeHunterProps::~ZombieIceAgeHunterProps((ZombieIceAgeHunterProps *)this);
  return;
}


/* ZombieIceAgeHunterEliteProps::~ZombieIceAgeHunterEliteProps() */

void __thiscall
ZombieIceAgeHunterEliteProps::~ZombieIceAgeHunterEliteProps(ZombieIceAgeHunterEliteProps *this)

{
  ~ZombieIceAgeHunterEliteProps(this);
  AK::FreeHook(this);
  return;
}

