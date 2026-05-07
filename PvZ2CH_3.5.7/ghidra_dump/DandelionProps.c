// Class: DandelionProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DandelionProps::StaticClassInit() */

void DandelionProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"DandelionProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f8de48,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DandelionProps::DandelionProps() */

void __thiscall DandelionProps::DandelionProps(DandelionProps *this)

{
  StarRateProps::StarRateProps((StarRateProps *)this);
  *(undefined4 *)(this + 0x2c0) = 0x40000000;
  *(undefined ***)this = &PTR_GetClass_067a37a0;
  *(undefined4 *)(this + 0x2d4) = 0x3fc00000;
  *(undefined4 *)(this + 0x2c4) = 0x42c80000;
  *(undefined4 *)(this + 0x2c8) = 0x43480000;
  *(undefined4 *)(this + 0x2cc) = 0x43fa0000;
  *(undefined4 *)(this + 0x2d0) = 0x3e99999a;
  return;
}


/* DandelionProps::StaticNew() */

DandelionProps * DandelionProps::StaticNew(void)

{
  DandelionProps *this;
  
  this = ::operator_new(0x2d8);
  DandelionProps(this);
  return this;
}


/* DandelionProps::~DandelionProps() */

void __thiscall DandelionProps::~DandelionProps(DandelionProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a37a0;
  StarRateProps::~StarRateProps((StarRateProps *)this);
  return;
}


/* DandelionProps::~DandelionProps() */

void __thiscall DandelionProps::~DandelionProps(DandelionProps *this)

{
  ~DandelionProps(this);
  AK::FreeHook(this);
  return;
}


/* DandelionProps::StaticGetClass() */

long * DandelionProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DandelionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DandelionProps::GetClass() const */

long * DandelionProps::GetClass(void)

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
  (*pcVar3)(plVar1,"DandelionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

