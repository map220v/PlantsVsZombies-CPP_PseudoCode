// Class: PrimalSunflowerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalSunflowerProps::StaticClassInit() */

void PrimalSunflowerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PrimalSunflowerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04187c68,0x2e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PrimalSunflowerProps::StaticGetClass() */

long * PrimalSunflowerProps::StaticGetClass(void)

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
  uVar2 = SunflowerProps::StaticGetClass();
  (*pcVar3)(plVar1,"PrimalSunflowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PrimalSunflowerProps::GetClass() const */

long * PrimalSunflowerProps::GetClass(void)

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
  uVar2 = SunflowerProps::StaticGetClass();
  (*pcVar3)(plVar1,"PrimalSunflowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PrimalSunflowerProps::PrimalSunflowerProps() */

void __thiscall PrimalSunflowerProps::PrimalSunflowerProps(PrimalSunflowerProps *this)

{
  size_t in_x2;
  
  SunflowerProps::SunflowerProps((SunflowerProps *)this);
  *(undefined ***)this = &PTR_GetClass_067f9e70;
  Set8BytesTo0((string *)(this + 0x2d8));
  *(undefined4 *)(this + 0x2c8) = 5;
  *(undefined4 *)(this + 0x2cc) = 0x3f000000;
  *(undefined4 *)(this + 0x2d0) = 0x3f800000;
  std::string::append((string *)(this + 0x2d8),"sun_medium",in_x2);
  return;
}


/* PrimalSunflowerProps::StaticNew() */

PrimalSunflowerProps * PrimalSunflowerProps::StaticNew(void)

{
  PrimalSunflowerProps *this;
  
  this = ::operator_new(0x2e8);
  PrimalSunflowerProps(this);
  return this;
}


/* PrimalSunflowerProps::~PrimalSunflowerProps() */

void __thiscall PrimalSunflowerProps::~PrimalSunflowerProps(PrimalSunflowerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067f9e70;
  std::string::~string((string *)(this + 0x2d8));
  SunflowerProps::~SunflowerProps((SunflowerProps *)this);
  return;
}


/* PrimalSunflowerProps::~PrimalSunflowerProps() */

void __thiscall PrimalSunflowerProps::~PrimalSunflowerProps(PrimalSunflowerProps *this)

{
  ~PrimalSunflowerProps(this);
  AK::FreeHook(this);
  return;
}

