// Class: PlantAnimRig_DragonFruit


/* PlantAnimRig_DragonFruit::onLevelUpdate() */

void __thiscall PlantAnimRig_DragonFruit::onLevelUpdate(PlantAnimRig_DragonFruit *this)

{
  this[0x3b8] = (PlantAnimRig_DragonFruit)(1 < *(int *)(this + 0x224));
  return;
}


/* PlantAnimRig_DragonFruit::~PlantAnimRig_DragonFruit() */

void __thiscall PlantAnimRig_DragonFruit::~PlantAnimRig_DragonFruit(PlantAnimRig_DragonFruit *this)

{
  *(undefined ***)this = &PTR_GetClass_067e2240;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_DragonFruit_067e24a8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_DragonFruit::~PlantAnimRig_DragonFruit() */

void __thiscall PlantAnimRig_DragonFruit::~PlantAnimRig_DragonFruit(PlantAnimRig_DragonFruit *this)

{
  ~PlantAnimRig_DragonFruit(this + -0x10);
  return;
}


/* PlantAnimRig_DragonFruit::~PlantAnimRig_DragonFruit() */

void __thiscall PlantAnimRig_DragonFruit::~PlantAnimRig_DragonFruit(PlantAnimRig_DragonFruit *this)

{
  ~PlantAnimRig_DragonFruit(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_DragonFruit::~PlantAnimRig_DragonFruit() */

void __thiscall PlantAnimRig_DragonFruit::~PlantAnimRig_DragonFruit(PlantAnimRig_DragonFruit *this)

{
  ~PlantAnimRig_DragonFruit(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonFruit::StaticClassInit() */

void PlantAnimRig_DragonFruit::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_DragonFruit");
    (*pcVar2)(plVar1,asStack_10,FUN_040fce80,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_DragonFruit::StaticGetClass() */

long * PlantAnimRig_DragonFruit::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_DragonFruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_DragonFruit::GetClass() const */

long * PlantAnimRig_DragonFruit::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_DragonFruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonFruit::getAnimationName(bool) */

void PlantAnimRig_DragonFruit::getAnimationName(bool param_1)

{
  ulong uVar1;
  char in_w1;
  undefined1 *__n;
  string *in_x8;
  undefined1 auStack_10 [8];
  long local_8;
  
  uVar1 = (ulong)param_1;
  __n = auStack_10;
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"");
  nop();
  if (in_w1 == '\0') {
    if (*(char *)(uVar1 + 0x3b8) == '\0') {
      std::string::append(in_x8,"attack",(size_t)__n);
    }
    else if (*(int *)(uVar1 + 0x224) < 5) {
      std::string::append(in_x8,"attack02",(size_t)__n);
    }
    else {
      std::string::append(in_x8,"attack03",(size_t)__n);
    }
  }
  else if (*(char *)(uVar1 + 0x3b8) == '\0') {
    std::string::append(in_x8,"plantfood",(size_t)__n);
  }
  else if (*(int *)(uVar1 + 0x224) < 5) {
    std::string::append(in_x8,"plantfood02",(size_t)__n);
  }
  else {
    std::string::append(in_x8,"plantfood03",(size_t)__n);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_DragonFruit::getAttackAnimationName() */

void PlantAnimRig_DragonFruit::getAttackAnimationName(void)

{
  bool in_w0;
  
  getAnimationName(in_w0);
  return;
}


/* PlantAnimRig_DragonFruit::getPlantFoodMainAnimName() */

void PlantAnimRig_DragonFruit::getPlantFoodMainAnimName(void)

{
  bool in_w0;
  
  getAnimationName(in_w0);
  return;
}


/* PlantAnimRig_DragonFruit::PlantAnimRig_DragonFruit() */

void __thiscall PlantAnimRig_DragonFruit::PlantAnimRig_DragonFruit(PlantAnimRig_DragonFruit *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_DragonFruit)0x0;
  *(undefined ***)this = &PTR_GetClass_067e2240;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_DragonFruit_067e24a8;
  return;
}


/* PlantAnimRig_DragonFruit::StaticNew() */

PlantAnimRig_DragonFruit * PlantAnimRig_DragonFruit::StaticNew(void)

{
  PlantAnimRig_DragonFruit *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_DragonFruit(this);
  return this;
}

