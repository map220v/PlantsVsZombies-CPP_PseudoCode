// Class: PlantAnimRig_PrimalSunflower


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PrimalSunflower::getLevel5Sun1() */

void __thiscall PlantAnimRig_PrimalSunflower::getLevel5Sun1(PlantAnimRig_PrimalSunflower *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"attack3");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PrimalSunflower::getLevel5Sun2() */

void __thiscall PlantAnimRig_PrimalSunflower::getLevel5Sun2(PlantAnimRig_PrimalSunflower *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"attack4");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_PrimalSunflower::onAnimStopped() */

void __thiscall PlantAnimRig_PrimalSunflower::onAnimStopped(PlantAnimRig_PrimalSunflower *this)

{
  if (*(int *)(this + 0x218) != 2) {
    PlantAnimRig_Sunflower::onAnimStopped((PlantAnimRig_Sunflower *)this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PrimalSunflower::StaticClassInit() */

void PlantAnimRig_PrimalSunflower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_PrimalSunflower");
    (*pcVar2)(plVar1,asStack_10,FUN_04188254,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_PrimalSunflower::StaticGetClass() */

long * PlantAnimRig_PrimalSunflower::StaticGetClass(void)

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
  uVar2 = PlantAnimRig_Sunflower::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_PrimalSunflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_PrimalSunflower::GetClass() const */

long * PlantAnimRig_PrimalSunflower::GetClass(void)

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
  uVar2 = PlantAnimRig_Sunflower::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_PrimalSunflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_PrimalSunflower::~PlantAnimRig_PrimalSunflower() */

void __thiscall
PlantAnimRig_PrimalSunflower::~PlantAnimRig_PrimalSunflower(PlantAnimRig_PrimalSunflower *this)

{
  *(undefined ***)this = &PTR_GetClass_067fa470;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_PrimalSunflower_067fa6f0;
  PlantAnimRig_Sunflower::~PlantAnimRig_Sunflower((PlantAnimRig_Sunflower *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_PrimalSunflower::~PlantAnimRig_PrimalSunflower() */

void __thiscall
PlantAnimRig_PrimalSunflower::~PlantAnimRig_PrimalSunflower(PlantAnimRig_PrimalSunflower *this)

{
  ~PlantAnimRig_PrimalSunflower(this + -0x10);
  return;
}


/* PlantAnimRig_PrimalSunflower::~PlantAnimRig_PrimalSunflower() */

void __thiscall
PlantAnimRig_PrimalSunflower::~PlantAnimRig_PrimalSunflower(PlantAnimRig_PrimalSunflower *this)

{
  ~PlantAnimRig_PrimalSunflower(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_PrimalSunflower::~PlantAnimRig_PrimalSunflower() */

void __thiscall
PlantAnimRig_PrimalSunflower::~PlantAnimRig_PrimalSunflower(PlantAnimRig_PrimalSunflower *this)

{
  ~PlantAnimRig_PrimalSunflower(this + -0x10);
  return;
}


/* PlantAnimRig_PrimalSunflower::PlantAnimRig_PrimalSunflower() */

void __thiscall
PlantAnimRig_PrimalSunflower::PlantAnimRig_PrimalSunflower(PlantAnimRig_PrimalSunflower *this)

{
  PlantAnimRig_Sunflower::PlantAnimRig_Sunflower((PlantAnimRig_Sunflower *)this);
  *(undefined4 *)(this + 0x3b8) = 0;
  *(undefined ***)this = &PTR_GetClass_067fa470;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_PrimalSunflower_067fa6f0;
  return;
}


/* PlantAnimRig_PrimalSunflower::StaticNew() */

PlantAnimRig_PrimalSunflower * PlantAnimRig_PrimalSunflower::StaticNew(void)

{
  PlantAnimRig_PrimalSunflower *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_PrimalSunflower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PrimalSunflower::getLevel5Sun3() */

void __thiscall PlantAnimRig_PrimalSunflower::getLevel5Sun3(PlantAnimRig_PrimalSunflower *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"attack5");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PrimalSunflower::getLevel5CoolDown() */

void __thiscall PlantAnimRig_PrimalSunflower::getLevel5CoolDown(PlantAnimRig_PrimalSunflower *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"coolingtime");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PrimalSunflower::PlayLevel5Sun(int, Sexy::Delegate1<std::string const&>) */

void __thiscall
PlantAnimRig_PrimalSunflower::PlayLevel5Sun
          (PlantAnimRig_PrimalSunflower *this,int param_1,Delegate1 *param_3)

{
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x218) = 2;
  *(int *)(this + 0x3b8) = param_1;
  local_8 = ___stack_chk_guard;
  if (param_1 == 1) {
    getLevel5Sun1(this);
  }
  else if (param_1 == 2) {
    getLevel5Sun2(this);
  }
  else {
    if (param_1 != 3) goto LAB_04188584;
    getLevel5Sun3(this);
  }
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_3);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
LAB_04188584:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PrimalSunflower::PlayLevel5CoolDown(Sexy::Delegate1<std::string const&>) */

void __thiscall
PlantAnimRig_PrimalSunflower::PlayLevel5CoolDown
          (PlantAnimRig_PrimalSunflower *this,Delegate1 *param_2)

{
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x218) = 2;
  *(undefined4 *)(this + 0x3b8) = 0;
  local_8 = ___stack_chk_guard;
  getLevel5CoolDown(this);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PrimalSunflower::PlayIdleLooped() */

void __thiscall PlantAnimRig_PrimalSunflower::PlayIdleLooped(PlantAnimRig_PrimalSunflower *this)

{
  undefined1 uVar1;
  char *__s;
  undefined8 uVar2;
  DummyInit *local_58;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x224) != 5) {
    uVar1 = PlantAnimRig::PlayIdleLooped((PlantAnimRig *)this);
    goto LAB_0418872c;
  }
  if (*(int *)(this + 0x3b8) == 1) {
    __s = "cool3";
LAB_041887d4:
    std::string::string(asStack_40,__s);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    uVar2 = 0;
  }
  else {
    if (*(int *)(this + 0x3b8) == 2) {
      __s = "cool4";
      goto LAB_041887d4;
    }
    std::string::string(asStack_40,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    uVar2 = 3;
  }
  local_58 = aDStack_38;
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,uVar2,local_58);
  std::string::~string(asStack_40);
  nop();
  *(undefined4 *)(this + 0x218) = 1;
  uVar1 = 1;
LAB_0418872c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

