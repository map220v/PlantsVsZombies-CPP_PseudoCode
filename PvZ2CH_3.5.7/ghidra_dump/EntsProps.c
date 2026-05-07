// Class: EntsProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntsProps::StaticClassInit() */

void EntsProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"EntsProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04007e7c,0x308,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EntsProps::StaticGetClass() */

long * EntsProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EntsProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EntsProps::GetClass() const */

long * EntsProps::GetClass(void)

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
  (*pcVar3)(plVar1,"EntsProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EntsProps::EntsProps() */

void __thiscall EntsProps::EntsProps(EntsProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2e0) = 0;
  *(undefined ***)this = &PTR_GetClass_067b4480;
  *(undefined4 *)(this + 0x2e4) = 3;
  *(undefined4 *)(this + 0x2cc) = 0x45bb8000;
  *(undefined4 *)(this + 0x2d0) = 0x45bb8000;
  *(undefined4 *)(this + 0x2d4) = 0x45bb8000;
  *(undefined4 *)(this + 0x2b8) = 0x43960000;
  *(undefined4 *)(this + 0x2d8) = 0x45bb8000;
  *(undefined4 *)(this + 0x2dc) = 0x45bb8000;
  *(undefined4 *)(this + 0x2e8) = 0;
  *(undefined4 *)(this + 700) = 0x43c80000;
  *(undefined4 *)(this + 0x2ec) = 0;
  *(undefined4 *)(this + 0x2f0) = 0;
  *(undefined4 *)(this + 0x2f4) = 0;
  *(undefined4 *)(this + 0x2c0) = 0x44160000;
  *(undefined4 *)(this + 0x2f8) = 0;
  *(undefined4 *)(this + 0x2fc) = 0;
  *(undefined4 *)(this + 0x300) = 0;
  *(undefined4 *)(this + 0x2c4) = 0x44610000;
  *(undefined4 *)(this + 0x304) = 0;
  *(undefined4 *)(this + 0x2c8) = 0x44bb8000;
  return;
}


/* EntsProps::StaticNew() */

EntsProps * EntsProps::StaticNew(void)

{
  EntsProps *this;
  
  this = ::operator_new(0x308);
  EntsProps(this);
  return this;
}


/* EntsProps::~EntsProps() */

void __thiscall EntsProps::~EntsProps(EntsProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067b4480;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* EntsProps::~EntsProps() */

void __thiscall EntsProps::~EntsProps(EntsProps *this)

{
  ~EntsProps(this);
  AK::FreeHook(this);
  return;
}

