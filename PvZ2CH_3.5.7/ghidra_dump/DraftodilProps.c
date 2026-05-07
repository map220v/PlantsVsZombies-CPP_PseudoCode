// Class: DraftodilProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DraftodilProps::StaticClassInit() */

void DraftodilProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"DraftodilProps");
    (*pcVar2)(plVar1,asStack_10,FUN_040157d0,0x2f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DraftodilProps::StaticGetClass() */

long * DraftodilProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DraftodilProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DraftodilProps::GetClass() const */

long * DraftodilProps::GetClass(void)

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
  (*pcVar3)(plVar1,"DraftodilProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DraftodilProps::DraftodilProps() */

void __thiscall DraftodilProps::DraftodilProps(DraftodilProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2cc) = 0;
  *(undefined ***)this = &PTR_GetClass_067b5bc0;
  *(undefined4 *)(this + 0x2d0) = 0;
  *(undefined4 *)(this + 0x2c4) = 0x40400000;
  *(undefined4 *)(this + 0x2d4) = 0;
  *(undefined4 *)(this + 0x2c8) = 0x40400000;
  *(undefined4 *)(this + 0x2b8) = 0x42c80000;
  *(undefined4 *)(this + 700) = 0;
  *(undefined4 *)(this + 0x2c0) = 0x3f000000;
  *(undefined4 *)(this + 0x2d8) = 0x3e800000;
  *(undefined4 *)(this + 0x2dc) = 0x3ecccccd;
  *(undefined4 *)(this + 0x2e0) = 0x3f000000;
  *(undefined4 *)(this + 0x2e8) = 0x3f000000;
  *(undefined4 *)(this + 0x2e4) = 0x3f666666;
  return;
}


/* DraftodilProps::StaticNew() */

DraftodilProps * DraftodilProps::StaticNew(void)

{
  DraftodilProps *this;
  
  this = ::operator_new(0x2f0);
  DraftodilProps(this);
  return this;
}


/* DraftodilProps::~DraftodilProps() */

void __thiscall DraftodilProps::~DraftodilProps(DraftodilProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067b5bc0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* DraftodilProps::~DraftodilProps() */

void __thiscall DraftodilProps::~DraftodilProps(DraftodilProps *this)

{
  ~DraftodilProps(this);
  AK::FreeHook(this);
  return;
}

