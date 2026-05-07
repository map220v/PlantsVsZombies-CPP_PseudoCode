// Class: TulipTrumpeterProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TulipTrumpeterProps::StaticClassInit() */

void TulipTrumpeterProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"TulipTrumpeterProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0423e7a4,0x2f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TulipTrumpeterProps::StaticGetClass() */

long * TulipTrumpeterProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TulipTrumpeterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TulipTrumpeterProps::GetClass() const */

long * TulipTrumpeterProps::GetClass(void)

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
  (*pcVar3)(plVar1,"TulipTrumpeterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TulipTrumpeterProps::TulipTrumpeterProps() */

void __thiscall TulipTrumpeterProps::TulipTrumpeterProps(TulipTrumpeterProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 700) = 0;
  *(undefined4 *)(this + 0x2b8) = 0;
  *(undefined ***)this = &PTR_GetClass_06814920;
  *(undefined4 *)(this + 0x2c4) = 0x41200000;
  *(undefined4 *)(this + 0x2c0) = 4;
  *(undefined4 *)(this + 0x2c8) = 0x3f800000;
  *(undefined4 *)(this + 0x2d0) = 0x40400000;
  *(undefined4 *)(this + 0x2cc) = 0x3f800000;
  *(undefined4 *)(this + 0x2d4) = 0x40a00000;
  *(undefined4 *)(this + 0x2d8) = 0x3f800000;
  *(undefined4 *)(this + 0x2dc) = 0x42c80000;
  *(undefined4 *)(this + 0x2e0) = 0x43480000;
  *(undefined4 *)(this + 0x2e4) = 0x42c80000;
  *(undefined4 *)(this + 0x2e8) = 0x43480000;
  return;
}


/* TulipTrumpeterProps::StaticNew() */

TulipTrumpeterProps * TulipTrumpeterProps::StaticNew(void)

{
  TulipTrumpeterProps *this;
  
  this = ::operator_new(0x2f0);
  TulipTrumpeterProps(this);
  return this;
}


/* TulipTrumpeterProps::~TulipTrumpeterProps() */

void __thiscall TulipTrumpeterProps::~TulipTrumpeterProps(TulipTrumpeterProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06814920;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* TulipTrumpeterProps::~TulipTrumpeterProps() */

void __thiscall TulipTrumpeterProps::~TulipTrumpeterProps(TulipTrumpeterProps *this)

{
  ~TulipTrumpeterProps(this);
  AK::FreeHook(this);
  return;
}

