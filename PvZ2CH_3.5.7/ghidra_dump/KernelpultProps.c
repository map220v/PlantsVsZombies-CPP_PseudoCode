// Class: KernelpultProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* KernelpultProps::StaticClassInit() */

void KernelpultProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"KernelpultProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f90370,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* KernelpultProps::KernelpultProps() */

void __thiscall KernelpultProps::KernelpultProps(KernelpultProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x3f000000;
  *(undefined4 *)(this + 0x2c0) = 5;
  *(undefined ***)this = &PTR_GetClass_067a38e0;
  *(undefined4 *)(this + 700) = 0x40600000;
  *(undefined4 *)(this + 0x2c8) = 0x442f0000;
  *(undefined4 *)(this + 0x2c4) = 0x40400000;
  *(undefined4 *)(this + 0x2cc) = 0x3f99999a;
  *(undefined4 *)(this + 0x2d0) = 0x43af0000;
  return;
}


/* KernelpultProps::StaticNew() */

KernelpultProps * KernelpultProps::StaticNew(void)

{
  KernelpultProps *this;
  
  this = ::operator_new(0x2d8);
  KernelpultProps(this);
  return this;
}


/* KernelpultProps::~KernelpultProps() */

void __thiscall KernelpultProps::~KernelpultProps(KernelpultProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a38e0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* KernelpultProps::~KernelpultProps() */

void __thiscall KernelpultProps::~KernelpultProps(KernelpultProps *this)

{
  ~KernelpultProps(this);
  AK::FreeHook(this);
  return;
}


/* KernelpultProps::StaticGetClass() */

long * KernelpultProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"KernelpultProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* KernelpultProps::GetClass() const */

long * KernelpultProps::GetClass(void)

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
  (*pcVar3)(plVar1,"KernelpultProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

