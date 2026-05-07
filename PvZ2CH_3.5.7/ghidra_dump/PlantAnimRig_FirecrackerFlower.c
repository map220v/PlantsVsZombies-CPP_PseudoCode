// Class: PlantAnimRig_FirecrackerFlower


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_FirecrackerFlower::getAttackAnimationName() */

void PlantAnimRig_FirecrackerFlower::getAttackAnimationName(void)

{
  int iVar1;
  long lVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar2 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x3b8) == 5) {
    __s = "attack_lv5";
  }
  else {
    iVar1 = *(int *)(in_x0 + 0x3bc);
    if (iVar1 == 3) {
      __s = "attack03";
    }
    else if (iVar1 == 2) {
      __s = "attack02";
    }
    else if (iVar1 == 1) {
      __s = "attack";
    }
    else {
      __s = "";
    }
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar2 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_FirecrackerFlower::getPlantFoodMainAnimName() */

void PlantAnimRig_FirecrackerFlower::getPlantFoodMainAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3c0) == '\0') {
    __s = "plant food";
  }
  else {
    __s = "plant food02";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_FirecrackerFlower::~PlantAnimRig_FirecrackerFlower() */

void __thiscall
PlantAnimRig_FirecrackerFlower::~PlantAnimRig_FirecrackerFlower
          (PlantAnimRig_FirecrackerFlower *this)

{
  *(undefined ***)this = &PTR_GetClass_06798350;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_FirecrackerFlower_067985b8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_FirecrackerFlower::~PlantAnimRig_FirecrackerFlower() */

void __thiscall
PlantAnimRig_FirecrackerFlower::~PlantAnimRig_FirecrackerFlower
          (PlantAnimRig_FirecrackerFlower *this)

{
  ~PlantAnimRig_FirecrackerFlower(this + -0x10);
  return;
}


/* PlantAnimRig_FirecrackerFlower::~PlantAnimRig_FirecrackerFlower() */

void __thiscall
PlantAnimRig_FirecrackerFlower::~PlantAnimRig_FirecrackerFlower
          (PlantAnimRig_FirecrackerFlower *this)

{
  ~PlantAnimRig_FirecrackerFlower(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_FirecrackerFlower::~PlantAnimRig_FirecrackerFlower() */

void __thiscall
PlantAnimRig_FirecrackerFlower::~PlantAnimRig_FirecrackerFlower
          (PlantAnimRig_FirecrackerFlower *this)

{
  ~PlantAnimRig_FirecrackerFlower(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_FirecrackerFlower::StaticClassInit() */

void PlantAnimRig_FirecrackerFlower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_FirecrackerFlower");
    (*pcVar2)(plVar1,asStack_10,FUN_03f47724,0x3c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_FirecrackerFlower::StaticGetClass() */

long * PlantAnimRig_FirecrackerFlower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_FirecrackerFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_FirecrackerFlower::GetClass() const */

long * PlantAnimRig_FirecrackerFlower::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_FirecrackerFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_FirecrackerFlower::PlantAnimRig_FirecrackerFlower() */

void __thiscall
PlantAnimRig_FirecrackerFlower::PlantAnimRig_FirecrackerFlower(PlantAnimRig_FirecrackerFlower *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 1;
  *(undefined4 *)(this + 0x3bc) = 0;
  *(undefined ***)this = &PTR_GetClass_06798350;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_FirecrackerFlower_067985b8;
  return;
}


/* PlantAnimRig_FirecrackerFlower::StaticNew() */

PlantAnimRig_FirecrackerFlower * PlantAnimRig_FirecrackerFlower::StaticNew(void)

{
  PlantAnimRig_FirecrackerFlower *this;
  
  this = ::operator_new(0x3c8);
  PlantAnimRig_FirecrackerFlower(this);
  return this;
}


/* PlantAnimRig_FirecrackerFlower::setAttackState(int, int, bool) */

void __thiscall
PlantAnimRig_FirecrackerFlower::setAttackState
          (PlantAnimRig_FirecrackerFlower *this,int param_1,int param_2,bool param_3)

{
  *(int *)(this + 0x3b8) = param_1;
  *(int *)(this + 0x3bc) = param_2;
  this[0x3c0] = (PlantAnimRig_FirecrackerFlower)param_3;
  return;
}

