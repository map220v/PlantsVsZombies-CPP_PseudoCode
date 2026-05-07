// Class: ZombiePvpPirateCaptainProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePvpPirateCaptainProps::StaticClassInit() */

void ZombiePvpPirateCaptainProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePvpPirateCaptainProps");
    (*pcVar2)(plVar1,asStack_10,FUN_049a3b18,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePvpPirateCaptainProps::StaticGetClass() */

long * ZombiePvpPirateCaptainProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePvpPirateCaptainProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePvpPirateCaptainProps::GetClass() const */

long * ZombiePvpPirateCaptainProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePvpPirateCaptainProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePvpPirateCaptainProps::ZombiePvpPirateCaptainProps() */

void __thiscall
ZombiePvpPirateCaptainProps::ZombiePvpPirateCaptainProps(ZombiePvpPirateCaptainProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x210) = 0x41000000;
  *(undefined ***)this = &PTR_GetClass_06922300;
  *(undefined4 *)(this + 0x214) = 0x40000000;
  return;
}


/* ZombiePvpPirateCaptainProps::StaticNew() */

ZombiePvpPirateCaptainProps * ZombiePvpPirateCaptainProps::StaticNew(void)

{
  ZombiePvpPirateCaptainProps *this;
  
  this = ::operator_new(0x218);
  ZombiePvpPirateCaptainProps(this);
  return this;
}


/* ZombiePvpPirateCaptainProps::~ZombiePvpPirateCaptainProps() */

void __thiscall
ZombiePvpPirateCaptainProps::~ZombiePvpPirateCaptainProps(ZombiePvpPirateCaptainProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06922300;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombiePvpPirateCaptainProps::~ZombiePvpPirateCaptainProps() */

void __thiscall
ZombiePvpPirateCaptainProps::~ZombiePvpPirateCaptainProps(ZombiePvpPirateCaptainProps *this)

{
  ~ZombiePvpPirateCaptainProps(this);
  AK::FreeHook(this);
  return;
}

