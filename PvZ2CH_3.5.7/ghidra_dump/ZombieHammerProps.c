// Class: ZombieHammerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHammerProps::StaticClassInit() */

void ZombieHammerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieHammerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046c213c,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieHammerProps::ZombieHammerProps() */

void __thiscall ZombieHammerProps::ZombieHammerProps(ZombieHammerProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068b1300;
  Sexy::Insets::Insets((Insets *)(this + 0x220));
  Sexy::Insets::Insets((Insets *)(this + 0x23c));
  this[0x230] = (ZombieHammerProps)0x0;
  *(undefined4 *)(this + 0x210) = 0x41200000;
  *(undefined4 *)(this + 0x218) = 0x40200000;
  *(undefined4 *)(this + 0x21c) = 0;
  *(undefined4 *)(this + 0x214) = 0x40400000;
  *(undefined4 *)(this + 0x234) = 0;
  *(undefined4 *)(this + 0x238) = 0;
  return;
}


/* ZombieHammerProps::StaticNew() */

ZombieHammerProps * ZombieHammerProps::StaticNew(void)

{
  ZombieHammerProps *this;
  
  this = ::operator_new(0x250);
  ZombieHammerProps(this);
  return this;
}


/* ZombieHammerProps::~ZombieHammerProps() */

void __thiscall ZombieHammerProps::~ZombieHammerProps(ZombieHammerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b1300;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieHammerProps::~ZombieHammerProps() */

void __thiscall ZombieHammerProps::~ZombieHammerProps(ZombieHammerProps *this)

{
  ~ZombieHammerProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieHammerProps::StaticGetClass() */

long * ZombieHammerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieHammerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieHammerProps::GetClass() const */

long * ZombieHammerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieHammerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

