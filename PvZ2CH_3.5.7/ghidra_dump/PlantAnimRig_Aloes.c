// Class: PlantAnimRig_Aloes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Aloes::getPlantFoodMainAnimName() */

void PlantAnimRig_Aloes::getPlantFoodMainAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x220) == '\0') {
    __s = "plantfood";
  }
  else {
    __s = "plantfood2";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Aloes::~PlantAnimRig_Aloes() */

void __thiscall PlantAnimRig_Aloes::~PlantAnimRig_Aloes(PlantAnimRig_Aloes *this)

{
  *(undefined ***)this = &PTR_GetClass_0699b760;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Aloes_0699b9c8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Aloes::~PlantAnimRig_Aloes() */

void __thiscall PlantAnimRig_Aloes::~PlantAnimRig_Aloes(PlantAnimRig_Aloes *this)

{
  ~PlantAnimRig_Aloes(this + -0x10);
  return;
}


/* PlantAnimRig_Aloes::~PlantAnimRig_Aloes() */

void __thiscall PlantAnimRig_Aloes::~PlantAnimRig_Aloes(PlantAnimRig_Aloes *this)

{
  ~PlantAnimRig_Aloes(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Aloes::~PlantAnimRig_Aloes() */

void __thiscall PlantAnimRig_Aloes::~PlantAnimRig_Aloes(PlantAnimRig_Aloes *this)

{
  ~PlantAnimRig_Aloes(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Aloes::StaticClassInit() */

void PlantAnimRig_Aloes::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Aloes");
    (*pcVar2)(plVar1,asStack_10,FUN_04cc0fe8,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Aloes::StaticGetClass() */

long * PlantAnimRig_Aloes::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Aloes",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Aloes::GetClass() const */

long * PlantAnimRig_Aloes::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Aloes",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Aloes::PlantAnimRig_Aloes() */

void __thiscall PlantAnimRig_Aloes::PlantAnimRig_Aloes(PlantAnimRig_Aloes *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0699b760;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Aloes_0699b9c8;
  return;
}


/* PlantAnimRig_Aloes::StaticNew() */

PlantAnimRig_Aloes * PlantAnimRig_Aloes::StaticNew(void)

{
  PlantAnimRig_Aloes *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Aloes(this);
  return this;
}

