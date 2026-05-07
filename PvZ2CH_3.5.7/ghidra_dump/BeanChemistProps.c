// Class: BeanChemistProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeanChemistProps::StaticClassInit() */

void BeanChemistProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"BeanChemistProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04251080,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeanChemistProps::StaticGetClass() */

long * BeanChemistProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BeanChemistProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeanChemistProps::GetClass() const */

long * BeanChemistProps::GetClass(void)

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
  (*pcVar3)(plVar1,"BeanChemistProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeanChemistProps::BeanChemistProps() */

void __thiscall BeanChemistProps::BeanChemistProps(BeanChemistProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2c4) = 0x41400000;
  *(undefined ***)this = &PTR_GetClass_068187c0;
  *(undefined4 *)(this + 0x2b8) = 0x43af0000;
  *(undefined4 *)(this + 700) = 0x3f99999a;
  *(undefined4 *)(this + 0x2c0) = 0x418c0000;
  return;
}


/* BeanChemistProps::StaticNew() */

BeanChemistProps * BeanChemistProps::StaticNew(void)

{
  BeanChemistProps *this;
  
  this = ::operator_new(0x2c8);
  BeanChemistProps(this);
  return this;
}


/* BeanChemistProps::~BeanChemistProps() */

void __thiscall BeanChemistProps::~BeanChemistProps(BeanChemistProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068187c0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* BeanChemistProps::~BeanChemistProps() */

void __thiscall BeanChemistProps::~BeanChemistProps(BeanChemistProps *this)

{
  ~BeanChemistProps(this);
  AK::FreeHook(this);
  return;
}

