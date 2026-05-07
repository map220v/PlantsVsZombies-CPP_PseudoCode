// Class: PeanutProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PeanutProps::StaticClassInit() */

void PeanutProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PeanutProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0420af58,0x2e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PeanutProps::StaticGetClass() */

long * PeanutProps::StaticGetClass(void)

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
  uVar2 = PeashooterProps::StaticGetClass();
  (*pcVar3)(plVar1,"PeanutProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PeanutProps::GetClass() const */

long * PeanutProps::GetClass(void)

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
  uVar2 = PeashooterProps::StaticGetClass();
  (*pcVar3)(plVar1,"PeanutProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PeanutProps::PeanutProps() */

void __thiscall PeanutProps::PeanutProps(PeanutProps *this)

{
  PeashooterProps::PeashooterProps((PeashooterProps *)this);
  *(undefined ***)this = &PTR_GetClass_0680a030;
  *(undefined4 *)(this + 0x2d8) = 0;
  return;
}


/* PeanutProps::StaticNew() */

PeanutProps * PeanutProps::StaticNew(void)

{
  PeanutProps *this;
  
  this = ::operator_new(0x2e0);
  PeanutProps(this);
  return this;
}


/* PeanutProps::~PeanutProps() */

void __thiscall PeanutProps::~PeanutProps(PeanutProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0680a030;
  PeashooterProps::~PeashooterProps((PeashooterProps *)this);
  return;
}


/* PeanutProps::~PeanutProps() */

void __thiscall PeanutProps::~PeanutProps(PeanutProps *this)

{
  ~PeanutProps(this);
  AK::FreeHook(this);
  return;
}

