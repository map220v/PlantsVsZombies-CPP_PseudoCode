// Class: ZombieMonkNunchakuProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkNunchakuProps::StaticClassInit() */

void ZombieMonkNunchakuProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieMonkNunchakuProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046c2058,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMonkNunchakuProps::ZombieMonkNunchakuProps() */

void __thiscall ZombieMonkNunchakuProps::ZombieMonkNunchakuProps(ZombieMonkNunchakuProps *this)

{
  ZombieHammerProps::ZombieHammerProps((ZombieHammerProps *)this);
  *(undefined ***)this = &PTR_GetClass_068b1270;
  return;
}


/* ZombieMonkNunchakuProps::StaticNew() */

ZombieMonkNunchakuProps * ZombieMonkNunchakuProps::StaticNew(void)

{
  ZombieMonkNunchakuProps *this;
  
  this = ::operator_new(0x250);
  ZombieMonkNunchakuProps(this);
  return this;
}


/* ZombieMonkNunchakuProps::~ZombieMonkNunchakuProps() */

void __thiscall ZombieMonkNunchakuProps::~ZombieMonkNunchakuProps(ZombieMonkNunchakuProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b1270;
  ZombieHammerProps::~ZombieHammerProps((ZombieHammerProps *)this);
  return;
}


/* ZombieMonkNunchakuProps::~ZombieMonkNunchakuProps() */

void __thiscall ZombieMonkNunchakuProps::~ZombieMonkNunchakuProps(ZombieMonkNunchakuProps *this)

{
  ~ZombieMonkNunchakuProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieMonkNunchakuProps::StaticGetClass() */

long * ZombieMonkNunchakuProps::StaticGetClass(void)

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
  uVar2 = ZombieHammerProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMonkNunchakuProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMonkNunchakuProps::GetClass() const */

long * ZombieMonkNunchakuProps::GetClass(void)

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
  uVar2 = ZombieHammerProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMonkNunchakuProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

