// Class: CarGridItemProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarGridItemProps::StaticClassInit() */

void CarGridItemProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"CarGridItemProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03fd33f4,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CarGridItemProps::StaticGetClass() */

long * CarGridItemProps::StaticGetClass(void)

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
  uVar2 = GridItemAnimationProps::StaticGetClass();
  (*pcVar3)(plVar1,"CarGridItemProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CarGridItemProps::GetClass() const */

long * CarGridItemProps::GetClass(void)

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
  uVar2 = GridItemAnimationProps::StaticGetClass();
  (*pcVar3)(plVar1,"CarGridItemProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CarGridItemProps::CarGridItemProps() */

void __thiscall CarGridItemProps::CarGridItemProps(CarGridItemProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined ***)this = &PTR_GetClass_067ae180;
  return;
}


/* CarGridItemProps::StaticNew() */

CarGridItemProps * CarGridItemProps::StaticNew(void)

{
  CarGridItemProps *this;
  
  this = ::operator_new(0xd0);
  CarGridItemProps(this);
  return this;
}


/* CarGridItemProps::~CarGridItemProps() */

void __thiscall CarGridItemProps::~CarGridItemProps(CarGridItemProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067ae180;
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* CarGridItemProps::~CarGridItemProps() */

void __thiscall CarGridItemProps::~CarGridItemProps(CarGridItemProps *this)

{
  ~CarGridItemProps(this);
  AK::FreeHook(this);
  return;
}

