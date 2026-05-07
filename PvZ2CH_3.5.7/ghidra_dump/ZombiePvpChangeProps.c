// Class: ZombiePvpChangeProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePvpChangeProps::StaticClassInit() */

void ZombiePvpChangeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePvpChangeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0499a61c,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePvpChangeProps::StaticGetClass() */

long * ZombiePvpChangeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePvpChangeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePvpChangeProps::GetClass() const */

long * ZombiePvpChangeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePvpChangeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePvpChangeProps::ZombiePvpChangeProps() */

void __thiscall ZombiePvpChangeProps::ZombiePvpChangeProps(ZombiePvpChangeProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x210) = 0x41a00000;
  *(undefined ***)this = &PTR_GetClass_0691d6c0;
  *(undefined4 *)(this + 0x214) = 0x44898000;
  return;
}


/* ZombiePvpChangeProps::StaticNew() */

ZombiePvpChangeProps * ZombiePvpChangeProps::StaticNew(void)

{
  ZombiePvpChangeProps *this;
  
  this = ::operator_new(0x218);
  ZombiePvpChangeProps(this);
  return this;
}


/* ZombiePvpChangeProps::~ZombiePvpChangeProps() */

void __thiscall ZombiePvpChangeProps::~ZombiePvpChangeProps(ZombiePvpChangeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0691d6c0;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombiePvpChangeProps::~ZombiePvpChangeProps() */

void __thiscall ZombiePvpChangeProps::~ZombiePvpChangeProps(ZombiePvpChangeProps *this)

{
  ~ZombiePvpChangeProps(this);
  AK::FreeHook(this);
  return;
}

