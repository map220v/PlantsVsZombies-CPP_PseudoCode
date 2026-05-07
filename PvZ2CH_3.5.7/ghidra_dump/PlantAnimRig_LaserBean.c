// Class: PlantAnimRig_LaserBean


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_LaserBean::getIdleAnimationName() */

void PlantAnimRig_LaserBean::getIdleAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x224) < 5) {
    __s = "idle";
  }
  else if (*(char *)(in_x0 + 0x3b8) == '\0') {
    __s = "idle_3";
  }
  else {
    __s = "idle_4";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(in_x8);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_LaserBean::getAttackAnimationName() */

void PlantAnimRig_LaserBean::getAttackAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x224) < 5) {
    __s = "attack";
  }
  else if (*(char *)(in_x0 + 0x3b8) == '\0') {
    __s = "attack_2";
  }
  else {
    __s = "attack_3";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(in_x8);
  }
  return;
}


/* PlantAnimRig_LaserBean::~PlantAnimRig_LaserBean() */

void __thiscall PlantAnimRig_LaserBean::~PlantAnimRig_LaserBean(PlantAnimRig_LaserBean *this)

{
  *(undefined ***)this = &PTR_GetClass_067bcea0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_LaserBean_067bd108;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_LaserBean::~PlantAnimRig_LaserBean() */

void __thiscall PlantAnimRig_LaserBean::~PlantAnimRig_LaserBean(PlantAnimRig_LaserBean *this)

{
  ~PlantAnimRig_LaserBean(this + -0x10);
  return;
}


/* PlantAnimRig_LaserBean::~PlantAnimRig_LaserBean() */

void __thiscall PlantAnimRig_LaserBean::~PlantAnimRig_LaserBean(PlantAnimRig_LaserBean *this)

{
  ~PlantAnimRig_LaserBean(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_LaserBean::~PlantAnimRig_LaserBean() */

void __thiscall PlantAnimRig_LaserBean::~PlantAnimRig_LaserBean(PlantAnimRig_LaserBean *this)

{
  ~PlantAnimRig_LaserBean(this + -0x10);
  return;
}


/* PlantAnimRig_LaserBean::PlantAnimRig_LaserBean() */

void __thiscall PlantAnimRig_LaserBean::PlantAnimRig_LaserBean(PlantAnimRig_LaserBean *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_LaserBean)0x0;
  *(undefined ***)this = &PTR_GetClass_067bcea0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_LaserBean_067bd108;
  return;
}


/* PlantAnimRig_LaserBean::StaticNew() */

PlantAnimRig_LaserBean * PlantAnimRig_LaserBean::StaticNew(void)

{
  PlantAnimRig_LaserBean *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_LaserBean(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_LaserBean::StaticClassInit() */

void PlantAnimRig_LaserBean::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_LaserBean");
    (*pcVar2)(plVar1,asStack_10,FUN_0403d2f8,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_LaserBean::StaticGetClass() */

long * PlantAnimRig_LaserBean::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_LaserBean",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_LaserBean::GetClass() const */

long * PlantAnimRig_LaserBean::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_LaserBean",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_LaserBean::playPlantFoodOn() */

void __thiscall PlantAnimRig_LaserBean::playPlantFoodOn(PlantAnimRig_LaserBean *this)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x220] == (PlantAnimRig_LaserBean)0x0) {
    if (this[0x3b8] == (PlantAnimRig_LaserBean)0x0) {
      std::string::string(asStack_40,"plantfood_on");
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
      iVar3 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
    }
    else {
      std::string::string(asStack_40,"plantfood_on_3");
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
      iVar3 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
    }
  }
  else {
    uVar2 = 4;
    if (this[0x3b8] == (PlantAnimRig_LaserBean)0x0) {
      uVar2 = 2;
    }
    Sexy::StrFormat("plantfood_on_%d",asStack_40,(ulong)uVar2);
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    iVar3 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
  }
  uVar1 = 1;
  if (iVar3 == -1) {
    uVar1 = (**(code **)(*(long *)this + 400))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_LaserBean::playPlantFoodMain() */

void __thiscall PlantAnimRig_LaserBean::playPlantFoodMain(PlantAnimRig_LaserBean *this)

{
  uint uVar1;
  int iVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x220] == (PlantAnimRig_LaserBean)0x0) {
    if (this[0x3b8] == (PlantAnimRig_LaserBean)0x0) {
      std::string::string(asStack_40,"plantfood");
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
      iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
    }
    else {
      std::string::string(asStack_40,"plantfood_3");
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
      iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
    }
  }
  else {
    uVar1 = 4;
    if (this[0x3b8] == (PlantAnimRig_LaserBean)0x0) {
      uVar1 = 2;
    }
    Sexy::StrFormat("plantfood_%d",asStack_40,(ulong)uVar1);
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_LaserBean::playPlantFoodOff() */

void __thiscall PlantAnimRig_LaserBean::playPlantFoodOff(PlantAnimRig_LaserBean *this)

{
  uint uVar1;
  int iVar2;
  DummyInit *local_58;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x220] == (PlantAnimRig_LaserBean)0x0) {
    if (this[0x3b8] == (PlantAnimRig_LaserBean)0x0) {
      std::string::string(asStack_40,"plantfood_off");
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    }
    else {
      std::string::string(asStack_40,"plantfood_off_3");
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    }
    local_58 = aDStack_38;
    iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,local_58);
    std::string::~string(asStack_40);
    nop();
  }
  else {
    uVar1 = 4;
    if (this[0x3b8] == (PlantAnimRig_LaserBean)0x0) {
      uVar1 = 2;
    }
    Sexy::StrFormat("plantfood_off_%d",asStack_40,(ulong)uVar1);
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
  }
  if (iVar2 == -1) {
    (**(code **)(*(long *)this + 0x118))(this);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2 != -1);
  }
  return;
}

