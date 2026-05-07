// Class: LaserBeanStarRateProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LaserBeanStarRateProps::StaticClassInit() */

void LaserBeanStarRateProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LaserBeanStarRateProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0403cd78,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LaserBeanStarRateProps::StaticGetClass() */

long * LaserBeanStarRateProps::StaticGetClass(void)

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
  uVar2 = StarRateProps::StaticGetClass();
  (*pcVar3)(plVar1,"LaserBeanStarRateProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LaserBeanStarRateProps::GetClass() const */

long * LaserBeanStarRateProps::GetClass(void)

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
  uVar2 = StarRateProps::StaticGetClass();
  (*pcVar3)(plVar1,"LaserBeanStarRateProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LaserBeanStarRateProps::LaserBeanStarRateProps() */

void __thiscall LaserBeanStarRateProps::LaserBeanStarRateProps(LaserBeanStarRateProps *this)

{
  StarRateProps::StarRateProps((StarRateProps *)this);
  *(undefined ***)this = &PTR_GetClass_067bc8c0;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2c4) = 0;
  *(undefined4 *)(this + 0x2c8) = 0x42c80000;
  *(undefined4 *)(this + 0x2cc) = 0x40a00000;
  return;
}


/* LaserBeanStarRateProps::StaticNew() */

LaserBeanStarRateProps * LaserBeanStarRateProps::StaticNew(void)

{
  LaserBeanStarRateProps *this;
  
  this = ::operator_new(0x2d0);
  LaserBeanStarRateProps(this);
  return this;
}


/* LaserBeanStarRateProps::~LaserBeanStarRateProps() */

void __thiscall LaserBeanStarRateProps::~LaserBeanStarRateProps(LaserBeanStarRateProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067bc8c0;
  StarRateProps::~StarRateProps((StarRateProps *)this);
  return;
}


/* LaserBeanStarRateProps::~LaserBeanStarRateProps() */

void __thiscall LaserBeanStarRateProps::~LaserBeanStarRateProps(LaserBeanStarRateProps *this)

{
  ~LaserBeanStarRateProps(this);
  AK::FreeHook(this);
  return;
}

