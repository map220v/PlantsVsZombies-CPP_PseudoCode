// Class: ZombieMonkBladeProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkBladeProps::StaticClassInit() */

void ZombieMonkBladeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieMonkBladeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046c1d84,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMonkBladeProps::ZombieMonkBladeProps() */

void __thiscall ZombieMonkBladeProps::ZombieMonkBladeProps(ZombieMonkBladeProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x210) = 2;
  *(undefined4 *)(this + 0x214) = 3;
  *(undefined ***)this = &PTR_GetClass_068b11e0;
  return;
}


/* ZombieMonkBladeProps::StaticNew() */

ZombieMonkBladeProps * ZombieMonkBladeProps::StaticNew(void)

{
  ZombieMonkBladeProps *this;
  
  this = ::operator_new(0x218);
  ZombieMonkBladeProps(this);
  return this;
}


/* ZombieMonkBladeProps::~ZombieMonkBladeProps() */

void __thiscall ZombieMonkBladeProps::~ZombieMonkBladeProps(ZombieMonkBladeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b11e0;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieMonkBladeProps::~ZombieMonkBladeProps() */

void __thiscall ZombieMonkBladeProps::~ZombieMonkBladeProps(ZombieMonkBladeProps *this)

{
  ~ZombieMonkBladeProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieMonkBladeProps::StaticGetClass() */

long * ZombieMonkBladeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMonkBladeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMonkBladeProps::GetClass() const */

long * ZombieMonkBladeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMonkBladeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

