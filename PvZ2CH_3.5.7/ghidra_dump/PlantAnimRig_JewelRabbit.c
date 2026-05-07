// Class: PlantAnimRig_JewelRabbit


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_JewelRabbit::getPlantFoodOffAnimName() */

void __thiscall PlantAnimRig_JewelRabbit::getPlantFoodOffAnimName(PlantAnimRig_JewelRabbit *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"plantfood_over");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_JewelRabbit::~PlantAnimRig_JewelRabbit() */

void __thiscall PlantAnimRig_JewelRabbit::~PlantAnimRig_JewelRabbit(PlantAnimRig_JewelRabbit *this)

{
  *(undefined ***)this = &PTR_GetClass_0666d140;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_JewelRabbit_0666d3a8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_JewelRabbit::~PlantAnimRig_JewelRabbit() */

void __thiscall PlantAnimRig_JewelRabbit::~PlantAnimRig_JewelRabbit(PlantAnimRig_JewelRabbit *this)

{
  ~PlantAnimRig_JewelRabbit(this + -0x10);
  return;
}


/* PlantAnimRig_JewelRabbit::~PlantAnimRig_JewelRabbit() */

void __thiscall PlantAnimRig_JewelRabbit::~PlantAnimRig_JewelRabbit(PlantAnimRig_JewelRabbit *this)

{
  ~PlantAnimRig_JewelRabbit(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_JewelRabbit::~PlantAnimRig_JewelRabbit() */

void __thiscall PlantAnimRig_JewelRabbit::~PlantAnimRig_JewelRabbit(PlantAnimRig_JewelRabbit *this)

{
  ~PlantAnimRig_JewelRabbit(this + -0x10);
  return;
}


/* PlantAnimRig_JewelRabbit::PlantAnimRig_JewelRabbit() */

void __thiscall PlantAnimRig_JewelRabbit::PlantAnimRig_JewelRabbit(PlantAnimRig_JewelRabbit *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0666d140;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_JewelRabbit_0666d3a8;
  return;
}


/* PlantAnimRig_JewelRabbit::StaticNew() */

PlantAnimRig_JewelRabbit * PlantAnimRig_JewelRabbit::StaticNew(void)

{
  PlantAnimRig_JewelRabbit *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_JewelRabbit(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_JewelRabbit::StaticClassInit() */

void PlantAnimRig_JewelRabbit::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_JewelRabbit");
    (*pcVar2)(plVar1,asStack_10,FUN_0362cb5c,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_JewelRabbit::StaticGetClass() */

long * PlantAnimRig_JewelRabbit::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_JewelRabbit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_JewelRabbit::GetClass() const */

long * PlantAnimRig_JewelRabbit::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_JewelRabbit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

