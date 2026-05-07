// Class: SunflowerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunflowerProps::StaticClassInit() */

void SunflowerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SunflowerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f8f328,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SunflowerProps::SunflowerProps() */

void __thiscall SunflowerProps::SunflowerProps(SunflowerProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a3210;
  Set8BytesTo0(this + 0x2c0);
  *(undefined4 *)(this + 0x2b8) = 6;
  *(undefined4 *)(this + 700) = 0;
  return;
}


/* SunflowerProps::StaticNew() */

SunflowerProps * SunflowerProps::StaticNew(void)

{
  SunflowerProps *this;
  
  this = ::operator_new(0x2c8);
  SunflowerProps(this);
  return this;
}


/* SunflowerProps::~SunflowerProps() */

void __thiscall SunflowerProps::~SunflowerProps(SunflowerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a3210;
  std::string::~string((string *)(this + 0x2c0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* SunflowerProps::~SunflowerProps() */

void __thiscall SunflowerProps::~SunflowerProps(SunflowerProps *this)

{
  ~SunflowerProps(this);
  AK::FreeHook(this);
  return;
}


/* SunflowerProps::StaticGetClass() */

long * SunflowerProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"SunflowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SunflowerProps::GetClass() const */

long * SunflowerProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"SunflowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

