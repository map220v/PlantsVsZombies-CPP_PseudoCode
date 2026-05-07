// Class: IZombieZombiePVPNurse


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IZombieZombiePVPNurse::StaticClassInit() */

void IZombieZombiePVPNurse::StaticClassInit(void)

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
    std::string::string(asStack_10,"IZombieZombiePVPNurse");
    (*pcVar2)(plVar1,asStack_10,FUN_0341bbf4,0x820,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IZombieZombiePVPNurse::StaticGetClass() */

long * IZombieZombiePVPNurse::StaticGetClass(void)

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
  uVar2 = ZombiePVPNurse::StaticGetClass();
  (*pcVar3)(plVar1,"IZombieZombiePVPNurse",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IZombieZombiePVPNurse::GetClass() const */

long * IZombieZombiePVPNurse::GetClass(void)

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
  uVar2 = ZombiePVPNurse::StaticGetClass();
  (*pcVar3)(plVar1,"IZombieZombiePVPNurse",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IZombieZombiePVPNurse::IZombieZombiePVPNurse() */

void __thiscall IZombieZombiePVPNurse::IZombieZombiePVPNurse(IZombieZombiePVPNurse *this)

{
  ZombiePVPNurse::ZombiePVPNurse((ZombiePVPNurse *)this);
  *(undefined ***)this = &PTR_GetClass_06624b50;
  *(undefined ***)(this + 0x10) = &PTR__IZombieZombiePVPNurse_06625588;
  return;
}


/* IZombieZombiePVPNurse::StaticNew() */

IZombieZombiePVPNurse * IZombieZombiePVPNurse::StaticNew(void)

{
  IZombieZombiePVPNurse *this;
  
  this = ::operator_new(0x820);
  IZombieZombiePVPNurse(this);
  return this;
}


/* IZombieZombiePVPNurse::~IZombieZombiePVPNurse() */

void __thiscall IZombieZombiePVPNurse::~IZombieZombiePVPNurse(IZombieZombiePVPNurse *this)

{
  *(undefined ***)this = &PTR_GetClass_06624b50;
  *(undefined ***)(this + 0x10) = &PTR__IZombieZombiePVPNurse_06625588;
  ZombiePVPNurse::~ZombiePVPNurse((ZombiePVPNurse *)this);
  return;
}


/* non-virtual thunk to IZombieZombiePVPNurse::~IZombieZombiePVPNurse() */

void __thiscall IZombieZombiePVPNurse::~IZombieZombiePVPNurse(IZombieZombiePVPNurse *this)

{
  ~IZombieZombiePVPNurse(this + -0x10);
  return;
}


/* IZombieZombiePVPNurse::~IZombieZombiePVPNurse() */

void __thiscall IZombieZombiePVPNurse::~IZombieZombiePVPNurse(IZombieZombiePVPNurse *this)

{
  ~IZombieZombiePVPNurse(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to IZombieZombiePVPNurse::~IZombieZombiePVPNurse() */

void __thiscall IZombieZombiePVPNurse::~IZombieZombiePVPNurse(IZombieZombiePVPNurse *this)

{
  ~IZombieZombiePVPNurse(this + -0x10);
  return;
}

