// Class: PlantAnimRig_Eagleclaw


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Eagleclaw::PlayRecoverLooped() */

void __thiscall PlantAnimRig_Eagleclaw::PlayRecoverLooped(PlantAnimRig_Eagleclaw *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"recover_loop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Eagleclaw::PlayRecoverEnd() */

void __thiscall PlantAnimRig_Eagleclaw::PlayRecoverEnd(PlantAnimRig_Eagleclaw *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"recover_end");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Eagleclaw::getPlantFoodMainAnimName() */

void PlantAnimRig_Eagleclaw::getPlantFoodMainAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3b8) == '\0') {
    __s = "plantfood";
  }
  else {
    __s = "plantfood02";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Eagleclaw::~PlantAnimRig_Eagleclaw() */

void __thiscall PlantAnimRig_Eagleclaw::~PlantAnimRig_Eagleclaw(PlantAnimRig_Eagleclaw *this)

{
  *(undefined ***)this = &PTR_GetClass_0682b300;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Eagleclaw_0682b568;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Eagleclaw::~PlantAnimRig_Eagleclaw() */

void __thiscall PlantAnimRig_Eagleclaw::~PlantAnimRig_Eagleclaw(PlantAnimRig_Eagleclaw *this)

{
  ~PlantAnimRig_Eagleclaw(this + -0x10);
  return;
}


/* PlantAnimRig_Eagleclaw::~PlantAnimRig_Eagleclaw() */

void __thiscall PlantAnimRig_Eagleclaw::~PlantAnimRig_Eagleclaw(PlantAnimRig_Eagleclaw *this)

{
  ~PlantAnimRig_Eagleclaw(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Eagleclaw::~PlantAnimRig_Eagleclaw() */

void __thiscall PlantAnimRig_Eagleclaw::~PlantAnimRig_Eagleclaw(PlantAnimRig_Eagleclaw *this)

{
  ~PlantAnimRig_Eagleclaw(this + -0x10);
  return;
}


/* PlantAnimRig_Eagleclaw::PlantAnimRig_Eagleclaw() */

void __thiscall PlantAnimRig_Eagleclaw::PlantAnimRig_Eagleclaw(PlantAnimRig_Eagleclaw *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0682b300;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Eagleclaw_0682b568;
  return;
}


/* PlantAnimRig_Eagleclaw::StaticNew() */

PlantAnimRig_Eagleclaw * PlantAnimRig_Eagleclaw::StaticNew(void)

{
  PlantAnimRig_Eagleclaw *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Eagleclaw(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Eagleclaw::StaticClassInit() */

void PlantAnimRig_Eagleclaw::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Eagleclaw");
    (*pcVar2)(plVar1,asStack_10,FUN_042ac274,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Eagleclaw::StaticGetClass() */

long * PlantAnimRig_Eagleclaw::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Eagleclaw",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Eagleclaw::GetClass() const */

long * PlantAnimRig_Eagleclaw::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Eagleclaw",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

