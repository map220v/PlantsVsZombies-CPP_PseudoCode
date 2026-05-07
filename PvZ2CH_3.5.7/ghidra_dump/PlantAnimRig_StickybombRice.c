// Class: PlantAnimRig_StickybombRice


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_StickybombRice::getPlantFoodMainAnimName() */

void PlantAnimRig_StickybombRice::getPlantFoodMainAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x220) == '\0') {
    __s = "plantfood_start";
  }
  else {
    __s = "plantfood2_start";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_StickybombRice::~PlantAnimRig_StickybombRice() */

void __thiscall
PlantAnimRig_StickybombRice::~PlantAnimRig_StickybombRice(PlantAnimRig_StickybombRice *this)

{
  *(undefined ***)this = &PTR_GetClass_068228a0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_StickybombRice_06822b08;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_StickybombRice::~PlantAnimRig_StickybombRice() */

void __thiscall
PlantAnimRig_StickybombRice::~PlantAnimRig_StickybombRice(PlantAnimRig_StickybombRice *this)

{
  ~PlantAnimRig_StickybombRice(this + -0x10);
  return;
}


/* PlantAnimRig_StickybombRice::~PlantAnimRig_StickybombRice() */

void __thiscall
PlantAnimRig_StickybombRice::~PlantAnimRig_StickybombRice(PlantAnimRig_StickybombRice *this)

{
  ~PlantAnimRig_StickybombRice(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_StickybombRice::~PlantAnimRig_StickybombRice() */

void __thiscall
PlantAnimRig_StickybombRice::~PlantAnimRig_StickybombRice(PlantAnimRig_StickybombRice *this)

{
  ~PlantAnimRig_StickybombRice(this + -0x10);
  return;
}


/* PlantAnimRig_StickybombRice::PlantAnimRig_StickybombRice() */

void __thiscall
PlantAnimRig_StickybombRice::PlantAnimRig_StickybombRice(PlantAnimRig_StickybombRice *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068228a0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_StickybombRice_06822b08;
  return;
}


/* PlantAnimRig_StickybombRice::StaticNew() */

PlantAnimRig_StickybombRice * PlantAnimRig_StickybombRice::StaticNew(void)

{
  PlantAnimRig_StickybombRice *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_StickybombRice(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_StickybombRice::StaticClassInit() */

void PlantAnimRig_StickybombRice::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_StickybombRice");
    (*pcVar2)(plVar1,asStack_10,FUN_04278dd8,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_StickybombRice::StaticGetClass() */

long * PlantAnimRig_StickybombRice::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_StickybombRice",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_StickybombRice::GetClass() const */

long * PlantAnimRig_StickybombRice::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_StickybombRice",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_StickybombRice::PlayLeftAttack() */

void __thiscall PlantAnimRig_StickybombRice::PlayLeftAttack(PlantAnimRig_StickybombRice *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack2");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

