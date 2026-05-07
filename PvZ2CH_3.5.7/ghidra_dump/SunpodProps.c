// Class: SunpodProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunpodProps::StaticClassInit() */

void SunpodProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SunpodProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f97f3c,0x2c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SunpodProps::SunpodProps() */

void __thiscall SunpodProps::SunpodProps(SunpodProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 1000;
  *(undefined ***)this = &PTR_GetClass_067a53c0;
  return;
}


/* SunpodProps::StaticNew() */

SunpodProps * SunpodProps::StaticNew(void)

{
  SunpodProps *this;
  
  this = ::operator_new(0x2c0);
  SunpodProps(this);
  return this;
}


/* SunpodProps::~SunpodProps() */

void __thiscall SunpodProps::~SunpodProps(SunpodProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a53c0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* SunpodProps::~SunpodProps() */

void __thiscall SunpodProps::~SunpodProps(SunpodProps *this)

{
  ~SunpodProps(this);
  AK::FreeHook(this);
  return;
}


/* SunpodProps::StaticGetClass() */

long * SunpodProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SunpodProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SunpodProps::GetClass() const */

long * SunpodProps::GetClass(void)

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
  (*pcVar3)(plVar1,"SunpodProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

