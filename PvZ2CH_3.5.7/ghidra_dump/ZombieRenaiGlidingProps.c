// Class: ZombieRenaiGlidingProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRenaiGlidingProps::StaticClassInit() */

void ZombieRenaiGlidingProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieRenaiGlidingProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04ee4544,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRenaiGlidingProps::StaticGetClass() */

long * ZombieRenaiGlidingProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRenaiGlidingProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRenaiGlidingProps::GetClass() const */

long * ZombieRenaiGlidingProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRenaiGlidingProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRenaiGlidingProps::ZombieRenaiGlidingProps() */

void __thiscall ZombieRenaiGlidingProps::ZombieRenaiGlidingProps(ZombieRenaiGlidingProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069ffc90;
  return;
}


/* ZombieRenaiGlidingProps::StaticNew() */

ZombieRenaiGlidingProps * ZombieRenaiGlidingProps::StaticNew(void)

{
  ZombieRenaiGlidingProps *this;
  
  this = ::operator_new(0x210);
  ZombieRenaiGlidingProps(this);
  return this;
}


/* ZombieRenaiGlidingProps::~ZombieRenaiGlidingProps() */

void __thiscall ZombieRenaiGlidingProps::~ZombieRenaiGlidingProps(ZombieRenaiGlidingProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069ffc90;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieRenaiGlidingProps::~ZombieRenaiGlidingProps() */

void __thiscall ZombieRenaiGlidingProps::~ZombieRenaiGlidingProps(ZombieRenaiGlidingProps *this)

{
  ~ZombieRenaiGlidingProps(this);
  AK::FreeHook(this);
  return;
}

