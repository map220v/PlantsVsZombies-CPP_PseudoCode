// Class: PlantAnimRig_Flamelady


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Flamelady::getAttackAnimationName() */

void PlantAnimRig_Flamelady::getAttackAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x3b8) == 0) {
    __s = "attack";
  }
  else if (*(int *)(in_x0 + 0x3b8) == 1) {
    __s = "attack2";
  }
  else {
    __s = "attack5";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Flamelady::getPlantFoodOnAnimName() */

void PlantAnimRig_Flamelady::getPlantFoodOnAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x3b8) == 0) {
    __s = "plantfood_on";
  }
  else if (*(int *)(in_x0 + 0x3b8) == 1) {
    __s = "plantfood2_on";
  }
  else {
    __s = "plantfood3_on";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Flamelady::getPlantFoodMainAnimName() */

void PlantAnimRig_Flamelady::getPlantFoodMainAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x3b8) == 0) {
    __s = "plantfood";
  }
  else if (*(int *)(in_x0 + 0x3b8) == 1) {
    __s = "plantfood2";
  }
  else {
    __s = "plantfood3";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Flamelady::getPlantFoodOffAnimName() */

void PlantAnimRig_Flamelady::getPlantFoodOffAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x3b8) == 0) {
    __s = "plantfood_off";
  }
  else if (*(int *)(in_x0 + 0x3b8) == 1) {
    __s = "plantfood2_off";
  }
  else {
    __s = "plantfood3_off";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Flamelady::getWaterAnimName() */

void PlantAnimRig_Flamelady::getWaterAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x3b8) == 0) {
    __s = "water1";
  }
  else if (*(int *)(in_x0 + 0x3b8) == 1) {
    __s = "water2";
  }
  else {
    __s = "water3";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Flamelady::getIdleAnimationName() */

void PlantAnimRig_Flamelady::getIdleAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x3b8) == 0) {
    __s = "idle";
  }
  else if (*(int *)(in_x0 + 0x3b8) == 1) {
    __s = "idle_bluefire";
  }
  else {
    __s = "idle_purplefire";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Flamelady::~PlantAnimRig_Flamelady() */

void __thiscall PlantAnimRig_Flamelady::~PlantAnimRig_Flamelady(PlantAnimRig_Flamelady *this)

{
  *(undefined ***)this = &PTR_GetClass_067ebae0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Flamelady_067ebd48;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Flamelady::~PlantAnimRig_Flamelady() */

void __thiscall PlantAnimRig_Flamelady::~PlantAnimRig_Flamelady(PlantAnimRig_Flamelady *this)

{
  ~PlantAnimRig_Flamelady(this + -0x10);
  return;
}


/* PlantAnimRig_Flamelady::~PlantAnimRig_Flamelady() */

void __thiscall PlantAnimRig_Flamelady::~PlantAnimRig_Flamelady(PlantAnimRig_Flamelady *this)

{
  ~PlantAnimRig_Flamelady(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Flamelady::~PlantAnimRig_Flamelady() */

void __thiscall PlantAnimRig_Flamelady::~PlantAnimRig_Flamelady(PlantAnimRig_Flamelady *this)

{
  ~PlantAnimRig_Flamelady(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Flamelady::StaticClassInit() */

void PlantAnimRig_Flamelady::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Flamelady");
    (*pcVar2)(plVar1,asStack_10,FUN_0412fca0,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Flamelady::StaticGetClass() */

long * PlantAnimRig_Flamelady::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Flamelady",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Flamelady::GetClass() const */

long * PlantAnimRig_Flamelady::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Flamelady",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Flamelady::PlantAnimRig_Flamelady() */

void __thiscall PlantAnimRig_Flamelady::PlantAnimRig_Flamelady(PlantAnimRig_Flamelady *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 0;
  *(undefined ***)this = &PTR_GetClass_067ebae0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Flamelady_067ebd48;
  return;
}


/* PlantAnimRig_Flamelady::StaticNew() */

PlantAnimRig_Flamelady * PlantAnimRig_Flamelady::StaticNew(void)

{
  PlantAnimRig_Flamelady *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Flamelady(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Flamelady::getPowerAttackOnAnimation() */

void PlantAnimRig_Flamelady::getPowerAttackOnAnimation(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x3b8) == 0) {
    __s = "attack1_on";
  }
  else if (*(int *)(in_x0 + 0x3b8) == 1) {
    __s = "attack3_on";
  }
  else {
    __s = "attack6_on";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Flamelady::getPowerAttackLoopAnimation() */

void PlantAnimRig_Flamelady::getPowerAttackLoopAnimation(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x3b8) == 0) {
    __s = "attack1";
  }
  else if (*(int *)(in_x0 + 0x3b8) == 1) {
    __s = "attack3";
  }
  else {
    __s = "attack6";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Flamelady::getPowerAttackOffAnimation() */

void PlantAnimRig_Flamelady::getPowerAttackOffAnimation(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x3b8) == 0) {
    __s = "attack1_off";
  }
  else if (*(int *)(in_x0 + 0x3b8) == 1) {
    __s = "attack3_off";
  }
  else {
    __s = "attack6_off";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Flamelady::PlayPowerAttack(Sexy::Delegate1<std::string const&>) */

void __thiscall
PlantAnimRig_Flamelady::PlayPowerAttack(PlantAnimRig_Flamelady *this,Delegate1 *param_2)

{
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x218) = 0xe;
  local_8 = ___stack_chk_guard;
  getPowerAttackOnAnimation();
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
/* PlantAnimRig_Flamelady::StopPowerAttack(Sexy::Delegate1<std::string const&>) */

void __thiscall
PlantAnimRig_Flamelady::StopPowerAttack(PlantAnimRig_Flamelady *this,Delegate1 *param_2)

{
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getPowerAttackOffAnimation();
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
/* PlantAnimRig_Flamelady::getLevel5AttackOnAnimation() */

void __thiscall PlantAnimRig_Flamelady::getLevel5AttackOnAnimation(PlantAnimRig_Flamelady *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"attack4_on");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Flamelady::getLevel5AttackOffAnimation() */

void __thiscall PlantAnimRig_Flamelady::getLevel5AttackOffAnimation(PlantAnimRig_Flamelady *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"attack4_off");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Flamelady::PlayLevel5Attack(Sexy::Delegate1<std::string const&>) */

void __thiscall
PlantAnimRig_Flamelady::PlayLevel5Attack(PlantAnimRig_Flamelady *this,Delegate1 *param_2)

{
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x218) = 0xe;
  local_8 = ___stack_chk_guard;
  getLevel5AttackOnAnimation(this);
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
/* PlantAnimRig_Flamelady::StopLevel5Attack(Sexy::Delegate1<std::string const&>) */

void __thiscall
PlantAnimRig_Flamelady::StopLevel5Attack(PlantAnimRig_Flamelady *this,Delegate1 *param_2)

{
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getLevel5AttackOffAnimation(this);
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
/* PlantAnimRig_Flamelady::LoopPowerAttack() */

void __thiscall PlantAnimRig_Flamelady::LoopPowerAttack(PlantAnimRig_Flamelady *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getPowerAttackLoopAnimation();
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Flamelady::LoopLevel5Attack() */

void __thiscall PlantAnimRig_Flamelady::LoopLevel5Attack(PlantAnimRig_Flamelady *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig_PrimalSunflower::getLevel5Sun2((PlantAnimRig_PrimalSunflower *)this);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

