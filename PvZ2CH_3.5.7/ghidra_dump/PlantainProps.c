// Class: PlantainProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantainProps::StaticClassInit() */

void PlantainProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantainProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03906af8,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantainProps::StaticGetClass() */

long * PlantainProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantainProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantainProps::GetClass() const */

long * PlantainProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantainProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantainProps::PlantainProps() */

void __thiscall PlantainProps::PlantainProps(PlantainProps *this)

{
  StarRateProps::StarRateProps((StarRateProps *)this);
  *(undefined4 *)(this + 0x2c4) = 5;
  *(undefined ***)this = &PTR_GetClass_066c1c80;
  *(undefined4 *)(this + 0x2cc) = 0x40a00000;
  *(undefined4 *)(this + 0x2c0) = 0x3e99999a;
  *(undefined4 *)(this + 0x2c8) = 0x443b8000;
  *(undefined4 *)(this + 0x2d0) = 0x3e4ccccd;
  return;
}


/* PlantainProps::StaticNew() */

PlantainProps * PlantainProps::StaticNew(void)

{
  PlantainProps *this;
  
  this = ::operator_new(0x2d8);
  PlantainProps(this);
  return this;
}


/* PlantainProps::~PlantainProps() */

void __thiscall PlantainProps::~PlantainProps(PlantainProps *this)

{
  *(undefined ***)this = &PTR_GetClass_066c1c80;
  StarRateProps::~StarRateProps((StarRateProps *)this);
  return;
}


/* PlantainProps::~PlantainProps() */

void __thiscall PlantainProps::~PlantainProps(PlantainProps *this)

{
  ~PlantainProps(this);
  AK::FreeHook(this);
  return;
}

