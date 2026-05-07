// Class: CoconutCannonProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoconutCannonProps::StaticClassInit() */

void CoconutCannonProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"CoconutCannonProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f8e4a8,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CoconutCannonProps::CoconutCannonProps() */

void __thiscall CoconutCannonProps::CoconutCannonProps(CoconutCannonProps *this)

{
  StarRateProps::StarRateProps((StarRateProps *)this);
  *(undefined4 *)(this + 0x2c4) = 5;
  *(undefined ***)this = &PTR_GetClass_067a3a20;
  *(undefined4 *)(this + 0x2cc) = 0x40a00000;
  *(undefined4 *)(this + 0x2c0) = 0x3e99999a;
  *(undefined4 *)(this + 0x2c8) = 0x443b8000;
  return;
}


/* CoconutCannonProps::StaticNew() */

CoconutCannonProps * CoconutCannonProps::StaticNew(void)

{
  CoconutCannonProps *this;
  
  this = ::operator_new(0x2d0);
  CoconutCannonProps(this);
  return this;
}


/* CoconutCannonProps::~CoconutCannonProps() */

void __thiscall CoconutCannonProps::~CoconutCannonProps(CoconutCannonProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a3a20;
  StarRateProps::~StarRateProps((StarRateProps *)this);
  return;
}


/* CoconutCannonProps::~CoconutCannonProps() */

void __thiscall CoconutCannonProps::~CoconutCannonProps(CoconutCannonProps *this)

{
  ~CoconutCannonProps(this);
  AK::FreeHook(this);
  return;
}


/* CoconutCannonProps::StaticGetClass() */

long * CoconutCannonProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CoconutCannonProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CoconutCannonProps::GetClass() const */

long * CoconutCannonProps::GetClass(void)

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
  (*pcVar3)(plVar1,"CoconutCannonProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

