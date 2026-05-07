// Class: PlantAnimRig_HypnoShroom


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HypnoShroom::playPlantFoodOn() */

void __thiscall PlantAnimRig_HypnoShroom::playPlantFoodOn(PlantAnimRig_HypnoShroom *this)

{
  PlantAnimRig_HypnoShroom PVar1;
  int iVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  PVar1 = this[0x220];
  local_8 = ___stack_chk_guard;
  if (PVar1 == (PlantAnimRig_HypnoShroom)0x0) {
    PVar1 = (PlantAnimRig_HypnoShroom)PlantAnimRig::playPlantFoodOn((PlantAnimRig *)this);
  }
  else {
    std::string::string(asStack_40,"plantfood_on2");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    if (iVar2 == -1) {
      PVar1 = (PlantAnimRig_HypnoShroom)(**(code **)(*(long *)this + 400))(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(PVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HypnoShroom::playPlantFoodMain() */

void __thiscall PlantAnimRig_HypnoShroom::playPlantFoodMain(PlantAnimRig_HypnoShroom *this)

{
  undefined1 uVar1;
  int iVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x220] == (PlantAnimRig_HypnoShroom)0x0) {
    uVar1 = PlantAnimRig::playPlantFoodMain((PlantAnimRig *)this);
  }
  else {
    std::string::string(asStack_40,"plantfood2");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    uVar1 = iVar2 != -1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HypnoShroom::playPlantFoodOff() */

void __thiscall PlantAnimRig_HypnoShroom::playPlantFoodOff(PlantAnimRig_HypnoShroom *this)

{
  undefined1 uVar1;
  int iVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x220] == (PlantAnimRig_HypnoShroom)0x0) {
    uVar1 = PlantAnimRig::playPlantFoodOff((PlantAnimRig *)this);
  }
  else {
    std::string::string(asStack_40,"plantfood_off2");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    if (iVar2 == -1) {
      (**(code **)(*(long *)this + 0x118))(this);
    }
    uVar1 = iVar2 != -1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PlantAnimRig_HypnoShroom::~PlantAnimRig_HypnoShroom() */

void __thiscall PlantAnimRig_HypnoShroom::~PlantAnimRig_HypnoShroom(PlantAnimRig_HypnoShroom *this)

{
  *(undefined ***)this = &PTR_GetClass_06809d80;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_HypnoShroom_06809fe8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_HypnoShroom::~PlantAnimRig_HypnoShroom() */

void __thiscall PlantAnimRig_HypnoShroom::~PlantAnimRig_HypnoShroom(PlantAnimRig_HypnoShroom *this)

{
  ~PlantAnimRig_HypnoShroom(this + -0x10);
  return;
}


/* PlantAnimRig_HypnoShroom::~PlantAnimRig_HypnoShroom() */

void __thiscall PlantAnimRig_HypnoShroom::~PlantAnimRig_HypnoShroom(PlantAnimRig_HypnoShroom *this)

{
  ~PlantAnimRig_HypnoShroom(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_HypnoShroom::~PlantAnimRig_HypnoShroom() */

void __thiscall PlantAnimRig_HypnoShroom::~PlantAnimRig_HypnoShroom(PlantAnimRig_HypnoShroom *this)

{
  ~PlantAnimRig_HypnoShroom(this + -0x10);
  return;
}


/* PlantAnimRig_HypnoShroom::PlantAnimRig_HypnoShroom() */

void __thiscall PlantAnimRig_HypnoShroom::PlantAnimRig_HypnoShroom(PlantAnimRig_HypnoShroom *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06809d80;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_HypnoShroom_06809fe8;
  return;
}


/* PlantAnimRig_HypnoShroom::StaticNew() */

PlantAnimRig_HypnoShroom * PlantAnimRig_HypnoShroom::StaticNew(void)

{
  PlantAnimRig_HypnoShroom *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_HypnoShroom(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HypnoShroom::StaticClassInit() */

void PlantAnimRig_HypnoShroom::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_HypnoShroom");
    (*pcVar2)(plVar1,asStack_10,FUN_04209fc8,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_HypnoShroom::StaticGetClass() */

long * PlantAnimRig_HypnoShroom::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_HypnoShroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_HypnoShroom::GetClass() const */

long * PlantAnimRig_HypnoShroom::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_HypnoShroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HypnoShroom::PlayPlantFoodEnd() */

void __thiscall PlantAnimRig_HypnoShroom::PlayPlantFoodEnd(PlantAnimRig_HypnoShroom *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x220] == (PlantAnimRig_HypnoShroom)0x0) {
    std::string::string(asStack_40,"plantfood");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  else {
    std::string::string(asStack_40,"plantfood2");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}

