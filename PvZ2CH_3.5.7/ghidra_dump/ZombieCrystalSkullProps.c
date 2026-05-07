// Class: ZombieCrystalSkullProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCrystalSkullProps::StaticClassInit() */

void ZombieCrystalSkullProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieCrystalSkullProps");
    (*pcVar2)(plVar1,asStack_10,FUN_047caa50,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCrystalSkullProps::StaticGetClass() */

long * ZombieCrystalSkullProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieCrystalSkullProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCrystalSkullProps::GetClass() const */

long * ZombieCrystalSkullProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieCrystalSkullProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCrystalSkullProps::ZombieCrystalSkullProps() */

void __thiscall ZombieCrystalSkullProps::ZombieCrystalSkullProps(ZombieCrystalSkullProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x210) = 0x41200000;
  *(undefined ***)this = &PTR_GetClass_068e53c0;
  *(undefined4 *)(this + 0x220) = 0x41700000;
  *(undefined4 *)(this + 0x214) = 0x3dcccccd;
  *(undefined4 *)(this + 0x218) = 0x43960000;
  *(undefined4 *)(this + 0x21c) = 0x43160000;
  return;
}


/* ZombieCrystalSkullProps::StaticNew() */

ZombieCrystalSkullProps * ZombieCrystalSkullProps::StaticNew(void)

{
  ZombieCrystalSkullProps *this;
  
  this = ::operator_new(0x228);
  ZombieCrystalSkullProps(this);
  return this;
}


/* ZombieCrystalSkullProps::~ZombieCrystalSkullProps() */

void __thiscall ZombieCrystalSkullProps::~ZombieCrystalSkullProps(ZombieCrystalSkullProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068e53c0;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieCrystalSkullProps::~ZombieCrystalSkullProps() */

void __thiscall ZombieCrystalSkullProps::~ZombieCrystalSkullProps(ZombieCrystalSkullProps *this)

{
  ~ZombieCrystalSkullProps(this);
  AK::FreeHook(this);
  return;
}

