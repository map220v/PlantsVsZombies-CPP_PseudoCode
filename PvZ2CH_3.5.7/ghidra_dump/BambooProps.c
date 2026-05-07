// Class: BambooProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BambooProps::StaticClassInit() */

void BambooProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"BambooProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f8f064,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BambooProps::BambooProps() */

void __thiscall BambooProps::BambooProps(BambooProps *this)

{
  StarRateProps::StarRateProps((StarRateProps *)this);
  *(undefined4 *)(this + 0x2c8) = 4;
  *(undefined4 *)(this + 0x2c0) = 4;
  *(undefined ***)this = &PTR_GetClass_067a46a0;
  *(undefined4 *)(this + 0x2c4) = 6;
  return;
}


/* BambooProps::StaticNew() */

BambooProps * BambooProps::StaticNew(void)

{
  BambooProps *this;
  
  this = ::operator_new(0x2d0);
  BambooProps(this);
  return this;
}


/* BambooProps::~BambooProps() */

void __thiscall BambooProps::~BambooProps(BambooProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a46a0;
  StarRateProps::~StarRateProps((StarRateProps *)this);
  return;
}


/* BambooProps::~BambooProps() */

void __thiscall BambooProps::~BambooProps(BambooProps *this)

{
  ~BambooProps(this);
  AK::FreeHook(this);
  return;
}


/* BambooProps::StaticGetClass() */

long * BambooProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BambooProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BambooProps::GetClass() const */

long * BambooProps::GetClass(void)

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
  (*pcVar3)(plVar1,"BambooProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

