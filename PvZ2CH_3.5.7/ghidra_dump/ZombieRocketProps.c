// Class: ZombieRocketProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRocketProps::StaticClassInit() */

void ZombieRocketProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieRocketProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046c0cec,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRocketProps::ZombieRocketProps() */

void __thiscall ZombieRocketProps::ZombieRocketProps(ZombieRocketProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068b0e80;
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x214) = 0;
  return;
}


/* ZombieRocketProps::StaticNew() */

ZombieRocketProps * ZombieRocketProps::StaticNew(void)

{
  ZombieRocketProps *this;
  
  this = ::operator_new(0x218);
  ZombieRocketProps(this);
  return this;
}


/* ZombieRocketProps::~ZombieRocketProps() */

void __thiscall ZombieRocketProps::~ZombieRocketProps(ZombieRocketProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b0e80;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieRocketProps::~ZombieRocketProps() */

void __thiscall ZombieRocketProps::~ZombieRocketProps(ZombieRocketProps *this)

{
  ~ZombieRocketProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieRocketProps::StaticGetClass() */

long * ZombieRocketProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRocketProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRocketProps::GetClass() const */

long * ZombieRocketProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRocketProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

