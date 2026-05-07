// Class: PlantAnimRig_Horsebean


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Horsebean::PlayAttackOff(std::string const&, Sexy::Delegate1<std::string const&>) */

void __thiscall
PlantAnimRig_Horsebean::PlayAttackOff
          (PlantAnimRig_Horsebean *this,undefined8 param_1,Delegate1 *param_3)

{
  int iVar1;
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_3);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,param_1,0,aDStack_38);
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
/* PlantAnimRig_Horsebean::PlayAttackLoop() */

void __thiscall PlantAnimRig_Horsebean::PlayAttackLoop(PlantAnimRig_Horsebean *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack_idle");
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


/* PlantAnimRig_Horsebean::~PlantAnimRig_Horsebean() */

void __thiscall PlantAnimRig_Horsebean::~PlantAnimRig_Horsebean(PlantAnimRig_Horsebean *this)

{
  *(undefined ***)this = &PTR_GetClass_0680f560;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Horsebean_0680f7c8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Horsebean::~PlantAnimRig_Horsebean() */

void __thiscall PlantAnimRig_Horsebean::~PlantAnimRig_Horsebean(PlantAnimRig_Horsebean *this)

{
  ~PlantAnimRig_Horsebean(this + -0x10);
  return;
}


/* PlantAnimRig_Horsebean::~PlantAnimRig_Horsebean() */

void __thiscall PlantAnimRig_Horsebean::~PlantAnimRig_Horsebean(PlantAnimRig_Horsebean *this)

{
  ~PlantAnimRig_Horsebean(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Horsebean::~PlantAnimRig_Horsebean() */

void __thiscall PlantAnimRig_Horsebean::~PlantAnimRig_Horsebean(PlantAnimRig_Horsebean *this)

{
  ~PlantAnimRig_Horsebean(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Horsebean::StaticClassInit() */

void PlantAnimRig_Horsebean::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Horsebean");
    (*pcVar2)(plVar1,asStack_10,FUN_04223a24,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Horsebean::StaticGetClass() */

long * PlantAnimRig_Horsebean::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Horsebean",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Horsebean::GetClass() const */

long * PlantAnimRig_Horsebean::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Horsebean",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Horsebean::PlantAnimRig_Horsebean() */

void __thiscall PlantAnimRig_Horsebean::PlantAnimRig_Horsebean(PlantAnimRig_Horsebean *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0680f560;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Horsebean_0680f7c8;
  return;
}


/* PlantAnimRig_Horsebean::StaticNew() */

PlantAnimRig_Horsebean * PlantAnimRig_Horsebean::StaticNew(void)

{
  PlantAnimRig_Horsebean *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Horsebean(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Horsebean::PlayCoolDownLoop() */

void __thiscall PlantAnimRig_Horsebean::PlayCoolDownLoop(PlantAnimRig_Horsebean *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"idle_cd");
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

