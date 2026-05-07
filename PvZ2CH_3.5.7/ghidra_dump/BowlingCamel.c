// Class: BowlingCamel


/* BowlingCamel::~BowlingCamel() */

void __thiscall BowlingCamel::~BowlingCamel(BowlingCamel *this)

{
  *(undefined ***)this = &PTR_GetClass_069d4da0;
  *(undefined ***)(this + 0x10) = &PTR__BowlingCamel_069d5830;
  ZombieCamel::~ZombieCamel((ZombieCamel *)this);
  return;
}


/* non-virtual thunk to BowlingCamel::~BowlingCamel() */

void __thiscall BowlingCamel::~BowlingCamel(BowlingCamel *this)

{
  ~BowlingCamel(this + -0x10);
  return;
}


/* BowlingCamel::~BowlingCamel() */

void __thiscall BowlingCamel::~BowlingCamel(BowlingCamel *this)

{
  ~BowlingCamel(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BowlingCamel::~BowlingCamel() */

void __thiscall BowlingCamel::~BowlingCamel(BowlingCamel *this)

{
  ~BowlingCamel(this + -0x10);
  return;
}


/* BowlingCamel::BowlingCamel() */

void __thiscall BowlingCamel::BowlingCamel(BowlingCamel *this)

{
  ZombieCamel::ZombieCamel((ZombieCamel *)this);
  *(undefined ***)this = &PTR_GetClass_069d4da0;
  *(undefined ***)(this + 0x10) = &PTR__BowlingCamel_069d5830;
  return;
}


/* BowlingCamel::StaticNew() */

BowlingCamel * BowlingCamel::StaticNew(void)

{
  BowlingCamel *this;
  
  this = ::operator_new(0x810);
  BowlingCamel(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingCamel::StaticClassInit() */

void BowlingCamel::StaticClassInit(void)

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
    std::string::string(asStack_10,"BowlingCamel");
    (*pcVar2)(plVar1,asStack_10,FUN_04e0c06c,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BowlingCamel::StaticGetClass() */

long * BowlingCamel::StaticGetClass(void)

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
  uVar2 = ZombieCamel::StaticGetClass();
  (*pcVar3)(plVar1,"BowlingCamel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BowlingCamel::GetClass() const */

long * BowlingCamel::GetClass(void)

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
  uVar2 = ZombieCamel::StaticGetClass();
  (*pcVar3)(plVar1,"BowlingCamel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

