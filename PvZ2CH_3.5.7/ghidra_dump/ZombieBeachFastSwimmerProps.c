// Class: ZombieBeachFastSwimmerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachFastSwimmerProps::StaticClassInit() */

void ZombieBeachFastSwimmerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieBeachFastSwimmerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046c445c,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBeachFastSwimmerProps::ZombieBeachFastSwimmerProps() */

void __thiscall
ZombieBeachFastSwimmerProps::ZombieBeachFastSwimmerProps(ZombieBeachFastSwimmerProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x210) = 0x40000000;
  *(undefined ***)this = &PTR_GetClass_068b18a0;
  return;
}


/* ZombieBeachFastSwimmerProps::StaticNew() */

ZombieBeachFastSwimmerProps * ZombieBeachFastSwimmerProps::StaticNew(void)

{
  ZombieBeachFastSwimmerProps *this;
  
  this = ::operator_new(0x218);
  ZombieBeachFastSwimmerProps(this);
  return this;
}


/* ZombieBeachFastSwimmerProps::~ZombieBeachFastSwimmerProps() */

void __thiscall
ZombieBeachFastSwimmerProps::~ZombieBeachFastSwimmerProps(ZombieBeachFastSwimmerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b18a0;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieBeachFastSwimmerProps::~ZombieBeachFastSwimmerProps() */

void __thiscall
ZombieBeachFastSwimmerProps::~ZombieBeachFastSwimmerProps(ZombieBeachFastSwimmerProps *this)

{
  ~ZombieBeachFastSwimmerProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieBeachFastSwimmerProps::StaticGetClass() */

long * ZombieBeachFastSwimmerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBeachFastSwimmerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBeachFastSwimmerProps::GetClass() const */

long * ZombieBeachFastSwimmerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBeachFastSwimmerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

