// Class: PlantRapeflowerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRapeflowerProps::StaticClassInit() */

void PlantRapeflowerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantRapeflowerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04e357ec,0x2e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantRapeflowerProps::StaticGetClass() */

long * PlantRapeflowerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantRapeflowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantRapeflowerProps::GetClass() const */

long * PlantRapeflowerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantRapeflowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantRapeflowerProps::PlantRapeflowerProps() */

void __thiscall PlantRapeflowerProps::PlantRapeflowerProps(PlantRapeflowerProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069dbbe0;
  *(undefined4 *)(this + 0x2c4) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x2c8) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x2c0) = 0x3ecccccd;
  *(undefined4 *)(this + 0x2b8) = 0x3f99999a;
  *(undefined4 *)(this + 700) = 0x43af0000;
  *(undefined4 *)(this + 0x2cc) = 0x43160000;
  *(undefined4 *)(this + 0x2d0) = 0x43960000;
  *(undefined4 *)(this + 0x2d4) = 0x42480000;
  *(undefined4 *)(this + 0x2d8) = 0x43340000;
  return;
}


/* PlantRapeflowerProps::StaticNew() */

PlantRapeflowerProps * PlantRapeflowerProps::StaticNew(void)

{
  PlantRapeflowerProps *this;
  
  this = ::operator_new(0x2e0);
  PlantRapeflowerProps(this);
  return this;
}


/* PlantRapeflowerProps::~PlantRapeflowerProps() */

void __thiscall PlantRapeflowerProps::~PlantRapeflowerProps(PlantRapeflowerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069dbbe0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PlantRapeflowerProps::~PlantRapeflowerProps() */

void __thiscall PlantRapeflowerProps::~PlantRapeflowerProps(PlantRapeflowerProps *this)

{
  ~PlantRapeflowerProps(this);
  AK::FreeHook(this);
  return;
}

