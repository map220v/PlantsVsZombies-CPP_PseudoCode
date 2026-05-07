// Class: BloomingHeartsProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BloomingHeartsProps::StaticClassInit() */

void BloomingHeartsProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"BloomingHeartsProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03afb7dc,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BloomingHeartsProps::StaticGetClass() */

long * BloomingHeartsProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BloomingHeartsProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BloomingHeartsProps::GetClass() const */

long * BloomingHeartsProps::GetClass(void)

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
  (*pcVar3)(plVar1,"BloomingHeartsProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BloomingHeartsProps::BloomingHeartsProps() */

void __thiscall BloomingHeartsProps::BloomingHeartsProps(BloomingHeartsProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2c0) = 4;
  *(undefined ***)this = &PTR_GetClass_067278b0;
  *(undefined4 *)(this + 0x2b8) = 0x3f99999a;
  *(undefined4 *)(this + 700) = 0x43af0000;
  return;
}


/* BloomingHeartsProps::StaticNew() */

BloomingHeartsProps * BloomingHeartsProps::StaticNew(void)

{
  BloomingHeartsProps *this;
  
  this = ::operator_new(0x2c8);
  BloomingHeartsProps(this);
  return this;
}


/* BloomingHeartsProps::~BloomingHeartsProps() */

void __thiscall BloomingHeartsProps::~BloomingHeartsProps(BloomingHeartsProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067278b0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* BloomingHeartsProps::~BloomingHeartsProps() */

void __thiscall BloomingHeartsProps::~BloomingHeartsProps(BloomingHeartsProps *this)

{
  ~BloomingHeartsProps(this);
  AK::FreeHook(this);
  return;
}

