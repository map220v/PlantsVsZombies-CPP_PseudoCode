// Class: PlantMonotropaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMonotropaProps::StaticClassInit() */

void PlantMonotropaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantMonotropaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04cba9b8,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMonotropaProps::StaticGetClass() */

long * PlantMonotropaProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantMonotropaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMonotropaProps::GetClass() const */

long * PlantMonotropaProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantMonotropaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMonotropaProps::PlantMonotropaProps() */

void __thiscall PlantMonotropaProps::PlantMonotropaProps(PlantMonotropaProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2cc) = 3;
  *(undefined4 *)(this + 0x2d0) = 6;
  *(undefined ***)this = &PTR_GetClass_06999f50;
  *(undefined4 *)(this + 700) = 0x3f000000;
  *(undefined4 *)(this + 0x2d4) = 4;
  *(undefined4 *)(this + 0x2b8) = 0x40000000;
  *(undefined4 *)(this + 0x2c0) = 0x40000000;
  *(undefined4 *)(this + 0x2c4) = 0x40400000;
  *(undefined4 *)(this + 0x2c8) = 0x40000000;
  return;
}


/* PlantMonotropaProps::StaticNew() */

PlantMonotropaProps * PlantMonotropaProps::StaticNew(void)

{
  PlantMonotropaProps *this;
  
  this = ::operator_new(0x2d8);
  PlantMonotropaProps(this);
  return this;
}


/* PlantMonotropaProps::~PlantMonotropaProps() */

void __thiscall PlantMonotropaProps::~PlantMonotropaProps(PlantMonotropaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06999f50;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PlantMonotropaProps::~PlantMonotropaProps() */

void __thiscall PlantMonotropaProps::~PlantMonotropaProps(PlantMonotropaProps *this)

{
  ~PlantMonotropaProps(this);
  AK::FreeHook(this);
  return;
}

