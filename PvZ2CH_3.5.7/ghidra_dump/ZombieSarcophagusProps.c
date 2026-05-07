// Class: ZombieSarcophagusProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSarcophagusProps::StaticClassInit() */

void ZombieSarcophagusProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSarcophagusProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046be578,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSarcophagusProps::ZombieSarcophagusProps() */

void __thiscall ZombieSarcophagusProps::ZombieSarcophagusProps(ZombieSarcophagusProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x210) = 0x3f400000;
  *(undefined ***)this = &PTR_GetClass_068b0610;
  return;
}


/* ZombieSarcophagusProps::StaticNew() */

ZombieSarcophagusProps * ZombieSarcophagusProps::StaticNew(void)

{
  ZombieSarcophagusProps *this;
  
  this = ::operator_new(0x218);
  ZombieSarcophagusProps(this);
  return this;
}


/* ZombieSarcophagusProps::~ZombieSarcophagusProps() */

void __thiscall ZombieSarcophagusProps::~ZombieSarcophagusProps(ZombieSarcophagusProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b0610;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieSarcophagusProps::~ZombieSarcophagusProps() */

void __thiscall ZombieSarcophagusProps::~ZombieSarcophagusProps(ZombieSarcophagusProps *this)

{
  ~ZombieSarcophagusProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieSarcophagusProps::StaticGetClass() */

long * ZombieSarcophagusProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSarcophagusProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSarcophagusProps::GetClass() const */

long * ZombieSarcophagusProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSarcophagusProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

