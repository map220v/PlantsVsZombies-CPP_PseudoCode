// Class: UltomatoProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UltomatoProps::StaticClassInit() */

void UltomatoProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"UltomatoProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04152048,0x2f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UltomatoProps::StaticGetClass() */

long * UltomatoProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UltomatoProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UltomatoProps::GetClass() const */

long * UltomatoProps::GetClass(void)

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
  (*pcVar3)(plVar1,"UltomatoProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UltomatoProps::UltomatoProps() */

void __thiscall UltomatoProps::UltomatoProps(UltomatoProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067efdf0;
  Sexy::Point::Point((Point *)(this + 0x2d4));
  Sexy::Point::Point((Point *)(this + 0x2dc));
  Sexy::Point::Point((Point *)(this + 0x2e4));
  *(undefined4 *)(this + 0x2cc) = 0;
  *(undefined4 *)(this + 0x2b8) = 100;
  *(undefined4 *)(this + 0x2ec) = 0x3f800000;
  *(undefined4 *)(this + 700) = 100;
  *(undefined4 *)(this + 0x2f0) = 0x3f800000;
  *(undefined4 *)(this + 0x2c0) = 100;
  *(undefined4 *)(this + 0x2c4) = 100;
  *(undefined4 *)(this + 0x2c8) = 100;
  *(undefined4 *)(this + 0x2d0) = 0x3f000000;
  *(undefined4 *)(this + 0x2f4) = 0;
  return;
}


/* UltomatoProps::StaticNew() */

UltomatoProps * UltomatoProps::StaticNew(void)

{
  UltomatoProps *this;
  
  this = ::operator_new(0x2f8);
  UltomatoProps(this);
  return this;
}


/* UltomatoProps::~UltomatoProps() */

void __thiscall UltomatoProps::~UltomatoProps(UltomatoProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067efdf0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* UltomatoProps::~UltomatoProps() */

void __thiscall UltomatoProps::~UltomatoProps(UltomatoProps *this)

{
  ~UltomatoProps(this);
  AK::FreeHook(this);
  return;
}

