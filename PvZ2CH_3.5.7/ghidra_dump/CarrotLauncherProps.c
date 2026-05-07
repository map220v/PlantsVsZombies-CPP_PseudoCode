// Class: CarrotLauncherProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarrotLauncherProps::StaticClassInit() */

void CarrotLauncherProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"CarrotLauncherProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f8dbf0,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CarrotLauncherProps::CarrotLauncherProps() */

void __thiscall CarrotLauncherProps::CarrotLauncherProps(CarrotLauncherProps *this)

{
  StarRateProps::StarRateProps((StarRateProps *)this);
  *(undefined4 *)(this + 0x2c0) = 0x3f19999a;
  *(undefined ***)this = &PTR_GetClass_067a3700;
  *(undefined4 *)(this + 0x2c4) = 0x43960000;
  return;
}


/* CarrotLauncherProps::StaticNew() */

CarrotLauncherProps * CarrotLauncherProps::StaticNew(void)

{
  CarrotLauncherProps *this;
  
  this = ::operator_new(0x2c8);
  CarrotLauncherProps(this);
  return this;
}


/* CarrotLauncherProps::~CarrotLauncherProps() */

void __thiscall CarrotLauncherProps::~CarrotLauncherProps(CarrotLauncherProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a3700;
  StarRateProps::~StarRateProps((StarRateProps *)this);
  return;
}


/* CarrotLauncherProps::~CarrotLauncherProps() */

void __thiscall CarrotLauncherProps::~CarrotLauncherProps(CarrotLauncherProps *this)

{
  ~CarrotLauncherProps(this);
  AK::FreeHook(this);
  return;
}


/* CarrotLauncherProps::StaticGetClass() */

long * CarrotLauncherProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CarrotLauncherProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CarrotLauncherProps::GetClass() const */

long * CarrotLauncherProps::GetClass(void)

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
  (*pcVar3)(plVar1,"CarrotLauncherProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

