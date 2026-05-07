// Class: PlantAnimRig_ConvallariaChemist


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ConvallariaChemist::getAttackAnimationName() */

void PlantAnimRig_ConvallariaChemist::getAttackAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3b8) == '\0') {
    __s = "attack1";
  }
  else {
    __s = "attack2";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_ConvallariaChemist::~PlantAnimRig_ConvallariaChemist() */

void __thiscall
PlantAnimRig_ConvallariaChemist::~PlantAnimRig_ConvallariaChemist
          (PlantAnimRig_ConvallariaChemist *this)

{
  *(undefined ***)this = &PTR_GetClass_06744e90;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ConvallariaChemist_067450f8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ConvallariaChemist::~PlantAnimRig_ConvallariaChemist() */

void __thiscall
PlantAnimRig_ConvallariaChemist::~PlantAnimRig_ConvallariaChemist
          (PlantAnimRig_ConvallariaChemist *this)

{
  ~PlantAnimRig_ConvallariaChemist(this + -0x10);
  return;
}


/* PlantAnimRig_ConvallariaChemist::~PlantAnimRig_ConvallariaChemist() */

void __thiscall
PlantAnimRig_ConvallariaChemist::~PlantAnimRig_ConvallariaChemist
          (PlantAnimRig_ConvallariaChemist *this)

{
  ~PlantAnimRig_ConvallariaChemist(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ConvallariaChemist::~PlantAnimRig_ConvallariaChemist() */

void __thiscall
PlantAnimRig_ConvallariaChemist::~PlantAnimRig_ConvallariaChemist
          (PlantAnimRig_ConvallariaChemist *this)

{
  ~PlantAnimRig_ConvallariaChemist(this + -0x10);
  return;
}


/* PlantAnimRig_ConvallariaChemist::PlantAnimRig_ConvallariaChemist() */

void __thiscall
PlantAnimRig_ConvallariaChemist::PlantAnimRig_ConvallariaChemist
          (PlantAnimRig_ConvallariaChemist *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06744e90;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ConvallariaChemist_067450f8;
  return;
}


/* PlantAnimRig_ConvallariaChemist::StaticNew() */

PlantAnimRig_ConvallariaChemist * PlantAnimRig_ConvallariaChemist::StaticNew(void)

{
  PlantAnimRig_ConvallariaChemist *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_ConvallariaChemist(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ConvallariaChemist::StaticClassInit() */

void PlantAnimRig_ConvallariaChemist::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_ConvallariaChemist");
    (*pcVar2)(plVar1,asStack_10,FUN_03c06230,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_ConvallariaChemist::StaticGetClass() */

long * PlantAnimRig_ConvallariaChemist::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_ConvallariaChemist",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_ConvallariaChemist::GetClass() const */

long * PlantAnimRig_ConvallariaChemist::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_ConvallariaChemist",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

