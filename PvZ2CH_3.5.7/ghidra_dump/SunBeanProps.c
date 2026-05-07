// Class: SunBeanProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunBeanProps::StaticClassInit() */

void SunBeanProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SunBeanProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f9579c,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SunBeanProps::SunBeanProps() */

void __thiscall SunBeanProps::SunBeanProps(SunBeanProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2c0) = 0x3f000000;
  this[0x2c8] = (SunBeanProps)0x0;
  *(undefined ***)this = &PTR_GetClass_067a4ce0;
  *(undefined4 *)(this + 0x2b8) = 0x40000000;
  *(undefined4 *)(this + 700) = 0x44160000;
  *(undefined4 *)(this + 0x2c4) = 0x43c80000;
  return;
}


/* SunBeanProps::StaticNew() */

SunBeanProps * SunBeanProps::StaticNew(void)

{
  SunBeanProps *this;
  
  this = ::operator_new(0x2d0);
  SunBeanProps(this);
  return this;
}


/* SunBeanProps::~SunBeanProps() */

void __thiscall SunBeanProps::~SunBeanProps(SunBeanProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a4ce0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* SunBeanProps::~SunBeanProps() */

void __thiscall SunBeanProps::~SunBeanProps(SunBeanProps *this)

{
  ~SunBeanProps(this);
  AK::FreeHook(this);
  return;
}


/* SunBeanProps::StaticGetClass() */

long * SunBeanProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SunBeanProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SunBeanProps::GetClass() const */

long * SunBeanProps::GetClass(void)

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
  (*pcVar3)(plVar1,"SunBeanProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

