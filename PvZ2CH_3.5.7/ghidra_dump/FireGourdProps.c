// Class: FireGourdProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FireGourdProps::StaticClassInit() */

void FireGourdProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"FireGourdProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f94074,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FireGourdProps::FireGourdProps() */

void __thiscall FireGourdProps::FireGourdProps(FireGourdProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a4600;
  *(undefined4 *)(this + 0x2b8) = 0x42c80000;
  *(undefined4 *)(this + 700) = 0x42c80000;
  *(undefined4 *)(this + 0x2c0) = 0x42c80000;
  *(undefined4 *)(this + 0x2c4) = 0x42c80000;
  *(undefined4 *)(this + 0x2c8) = 0x40400000;
  *(undefined4 *)(this + 0x2cc) = 0x40000000;
  *(undefined4 *)(this + 0x2d0) = 0x40000000;
  *(undefined4 *)(this + 0x2d4) = 0x42c80000;
  return;
}


/* FireGourdProps::StaticNew() */

FireGourdProps * FireGourdProps::StaticNew(void)

{
  FireGourdProps *this;
  
  this = ::operator_new(0x2d8);
  FireGourdProps(this);
  return this;
}


/* FireGourdProps::~FireGourdProps() */

void __thiscall FireGourdProps::~FireGourdProps(FireGourdProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a4600;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* FireGourdProps::~FireGourdProps() */

void __thiscall FireGourdProps::~FireGourdProps(FireGourdProps *this)

{
  ~FireGourdProps(this);
  AK::FreeHook(this);
  return;
}


/* FireGourdProps::StaticGetClass() */

long * FireGourdProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FireGourdProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FireGourdProps::GetClass() const */

long * FireGourdProps::GetClass(void)

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
  (*pcVar3)(plVar1,"FireGourdProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

