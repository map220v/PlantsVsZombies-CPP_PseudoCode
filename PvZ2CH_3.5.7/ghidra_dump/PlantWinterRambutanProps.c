// Class: PlantWinterRambutanProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWinterRambutanProps::StaticClassInit() */

void PlantWinterRambutanProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWinterRambutanProps");
    (*pcVar2)(plVar1,asStack_10,FUN_038a28d0,0x2e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWinterRambutanProps::StaticGetClass() */

long * PlantWinterRambutanProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantWinterRambutanProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWinterRambutanProps::GetClass() const */

long * PlantWinterRambutanProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantWinterRambutanProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWinterRambutanProps::PlantWinterRambutanProps() */

void __thiscall PlantWinterRambutanProps::PlantWinterRambutanProps(PlantWinterRambutanProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2e0) = 7;
  *(undefined ***)this = &PTR_GetClass_066b16f0;
  *(undefined4 *)(this + 0x2c4) = 0x3e19999a;
  *(undefined4 *)(this + 0x2cc) = 0x3e99999a;
  *(undefined4 *)(this + 0x2d0) = 0x3e99999a;
  *(undefined4 *)(this + 0x2c0) = 0x3dcccccd;
  *(undefined4 *)(this + 0x2d8) = 0x3e19999a;
  *(undefined4 *)(this + 0x2dc) = 0x40a00000;
  *(undefined4 *)(this + 0x2c8) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x2d4) = 0x3ecccccd;
  *(undefined4 *)(this + 0x2b8) = 0x3f99999a;
  *(undefined4 *)(this + 700) = 0x437a0000;
  return;
}


/* PlantWinterRambutanProps::StaticNew() */

PlantWinterRambutanProps * PlantWinterRambutanProps::StaticNew(void)

{
  PlantWinterRambutanProps *this;
  
  this = ::operator_new(0x2e8);
  PlantWinterRambutanProps(this);
  return this;
}


/* PlantWinterRambutanProps::~PlantWinterRambutanProps() */

void __thiscall PlantWinterRambutanProps::~PlantWinterRambutanProps(PlantWinterRambutanProps *this)

{
  *(undefined ***)this = &PTR_GetClass_066b16f0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PlantWinterRambutanProps::~PlantWinterRambutanProps() */

void __thiscall PlantWinterRambutanProps::~PlantWinterRambutanProps(PlantWinterRambutanProps *this)

{
  ~PlantWinterRambutanProps(this);
  AK::FreeHook(this);
  return;
}

