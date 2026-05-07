// Class: PinkStarFruitProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinkStarFruitProps::StaticClassInit() */

void PinkStarFruitProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PinkStarFruitProps");
    (*pcVar2)(plVar1,asStack_10,FUN_040ffcfc,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PinkStarFruitProps::StaticGetClass() */

long * PinkStarFruitProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PinkStarFruitProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PinkStarFruitProps::GetClass() const */

long * PinkStarFruitProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PinkStarFruitProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PinkStarFruitProps::PinkStarFruitProps() */

void __thiscall PinkStarFruitProps::PinkStarFruitProps(PinkStarFruitProps *this)

{
  StarRateProps::StarRateProps((StarRateProps *)this);
  *(undefined4 *)(this + 0x2c0) = 1;
  *(undefined ***)this = &PTR_GetClass_067e2a90;
  *(undefined4 *)(this + 0x2c8) = 0x3f800000;
  *(undefined4 *)(this + 0x2c4) = 0x3ea3d70a;
  return;
}


/* PinkStarFruitProps::StaticNew() */

PinkStarFruitProps * PinkStarFruitProps::StaticNew(void)

{
  PinkStarFruitProps *this;
  
  this = ::operator_new(0x2d0);
  PinkStarFruitProps(this);
  return this;
}


/* PinkStarFruitProps::~PinkStarFruitProps() */

void __thiscall PinkStarFruitProps::~PinkStarFruitProps(PinkStarFruitProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067e2a90;
  StarRateProps::~StarRateProps((StarRateProps *)this);
  return;
}


/* PinkStarFruitProps::~PinkStarFruitProps() */

void __thiscall PinkStarFruitProps::~PinkStarFruitProps(PinkStarFruitProps *this)

{
  ~PinkStarFruitProps(this);
  AK::FreeHook(this);
  return;
}

