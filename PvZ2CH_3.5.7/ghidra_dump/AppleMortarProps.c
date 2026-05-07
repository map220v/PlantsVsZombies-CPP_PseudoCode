// Class: AppleMortarProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AppleMortarProps::StaticClassInit() */

void AppleMortarProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"AppleMortarProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04196858,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AppleMortarProps::StaticGetClass() */

long * AppleMortarProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AppleMortarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AppleMortarProps::GetClass() const */

long * AppleMortarProps::GetClass(void)

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
  (*pcVar3)(plVar1,"AppleMortarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AppleMortarProps::AppleMortarProps() */

void __thiscall AppleMortarProps::AppleMortarProps(AppleMortarProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x40c00000;
  *(undefined ***)this = &PTR_GetClass_067fcaa0;
  *(undefined4 *)(this + 700) = 0x3f800000;
  *(undefined4 *)(this + 0x2c8) = 0x3f99999a;
  *(undefined4 *)(this + 0x2c0) = 0x3e800000;
  *(undefined4 *)(this + 0x2cc) = 0x43af0000;
  *(undefined4 *)(this + 0x2c4) = 0x3f000000;
  return;
}


/* AppleMortarProps::StaticNew() */

AppleMortarProps * AppleMortarProps::StaticNew(void)

{
  AppleMortarProps *this;
  
  this = ::operator_new(0x2d0);
  AppleMortarProps(this);
  return this;
}


/* AppleMortarProps::~AppleMortarProps() */

void __thiscall AppleMortarProps::~AppleMortarProps(AppleMortarProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067fcaa0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* AppleMortarProps::~AppleMortarProps() */

void __thiscall AppleMortarProps::~AppleMortarProps(AppleMortarProps *this)

{
  ~AppleMortarProps(this);
  AK::FreeHook(this);
  return;
}

