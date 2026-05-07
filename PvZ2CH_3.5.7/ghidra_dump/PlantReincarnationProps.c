// Class: PlantReincarnationProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantReincarnationProps::StaticClassInit() */

void PlantReincarnationProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantReincarnationProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0424a658,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantReincarnationProps::StaticGetClass() */

long * PlantReincarnationProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantReincarnationProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantReincarnationProps::GetClass() const */

long * PlantReincarnationProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantReincarnationProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantReincarnationProps::PlantReincarnationProps() */

void __thiscall PlantReincarnationProps::PlantReincarnationProps(PlantReincarnationProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06817750;
  return;
}


/* PlantReincarnationProps::StaticNew() */

PlantReincarnationProps * PlantReincarnationProps::StaticNew(void)

{
  PlantReincarnationProps *this;
  
  this = ::operator_new(0x2d8);
  PlantReincarnationProps(this);
  return this;
}


/* PlantReincarnationProps::~PlantReincarnationProps() */

void __thiscall PlantReincarnationProps::~PlantReincarnationProps(PlantReincarnationProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06817750;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PlantReincarnationProps::~PlantReincarnationProps() */

void __thiscall PlantReincarnationProps::~PlantReincarnationProps(PlantReincarnationProps *this)

{
  ~PlantReincarnationProps(this);
  AK::FreeHook(this);
  return;
}

