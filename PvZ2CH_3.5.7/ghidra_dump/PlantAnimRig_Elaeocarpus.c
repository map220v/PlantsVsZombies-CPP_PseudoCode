// Class: PlantAnimRig_Elaeocarpus


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Elaeocarpus::getAttackAnimationName() */

void PlantAnimRig_Elaeocarpus::getAttackAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x3b8) == 2) {
    __s = "attack2";
  }
  else if (*(int *)(in_x0 + 0x3b8) == 3) {
    __s = "attack3";
  }
  else {
    __s = "attack1";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Elaeocarpus::~PlantAnimRig_Elaeocarpus() */

void __thiscall PlantAnimRig_Elaeocarpus::~PlantAnimRig_Elaeocarpus(PlantAnimRig_Elaeocarpus *this)

{
  *(undefined ***)this = &PTR_GetClass_0681b580;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Elaeocarpus_0681b7e8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Elaeocarpus::~PlantAnimRig_Elaeocarpus() */

void __thiscall PlantAnimRig_Elaeocarpus::~PlantAnimRig_Elaeocarpus(PlantAnimRig_Elaeocarpus *this)

{
  ~PlantAnimRig_Elaeocarpus(this + -0x10);
  return;
}


/* PlantAnimRig_Elaeocarpus::~PlantAnimRig_Elaeocarpus() */

void __thiscall PlantAnimRig_Elaeocarpus::~PlantAnimRig_Elaeocarpus(PlantAnimRig_Elaeocarpus *this)

{
  ~PlantAnimRig_Elaeocarpus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Elaeocarpus::~PlantAnimRig_Elaeocarpus() */

void __thiscall PlantAnimRig_Elaeocarpus::~PlantAnimRig_Elaeocarpus(PlantAnimRig_Elaeocarpus *this)

{
  ~PlantAnimRig_Elaeocarpus(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Elaeocarpus::StaticClassInit() */

void PlantAnimRig_Elaeocarpus::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Elaeocarpus");
    (*pcVar2)(plVar1,asStack_10,FUN_042599f4,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Elaeocarpus::StaticGetClass() */

long * PlantAnimRig_Elaeocarpus::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Elaeocarpus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Elaeocarpus::GetClass() const */

long * PlantAnimRig_Elaeocarpus::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Elaeocarpus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Elaeocarpus::PlantAnimRig_Elaeocarpus() */

void __thiscall PlantAnimRig_Elaeocarpus::PlantAnimRig_Elaeocarpus(PlantAnimRig_Elaeocarpus *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 1;
  *(undefined ***)this = &PTR_GetClass_0681b580;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Elaeocarpus_0681b7e8;
  return;
}


/* PlantAnimRig_Elaeocarpus::StaticNew() */

PlantAnimRig_Elaeocarpus * PlantAnimRig_Elaeocarpus::StaticNew(void)

{
  PlantAnimRig_Elaeocarpus *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Elaeocarpus(this);
  return this;
}

