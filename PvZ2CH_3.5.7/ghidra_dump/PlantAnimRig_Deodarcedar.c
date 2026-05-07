// Class: PlantAnimRig_Deodarcedar


/* PlantAnimRig_Deodarcedar::~PlantAnimRig_Deodarcedar() */

void __thiscall PlantAnimRig_Deodarcedar::~PlantAnimRig_Deodarcedar(PlantAnimRig_Deodarcedar *this)

{
  *(undefined ***)this = &PTR_GetClass_0666ea20;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Deodarcedar_0666ec88;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Deodarcedar::~PlantAnimRig_Deodarcedar() */

void __thiscall PlantAnimRig_Deodarcedar::~PlantAnimRig_Deodarcedar(PlantAnimRig_Deodarcedar *this)

{
  ~PlantAnimRig_Deodarcedar(this + -0x10);
  return;
}


/* PlantAnimRig_Deodarcedar::~PlantAnimRig_Deodarcedar() */

void __thiscall PlantAnimRig_Deodarcedar::~PlantAnimRig_Deodarcedar(PlantAnimRig_Deodarcedar *this)

{
  ~PlantAnimRig_Deodarcedar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Deodarcedar::~PlantAnimRig_Deodarcedar() */

void __thiscall PlantAnimRig_Deodarcedar::~PlantAnimRig_Deodarcedar(PlantAnimRig_Deodarcedar *this)

{
  ~PlantAnimRig_Deodarcedar(this + -0x10);
  return;
}


/* PlantAnimRig_Deodarcedar::PlantAnimRig_Deodarcedar() */

void __thiscall PlantAnimRig_Deodarcedar::PlantAnimRig_Deodarcedar(PlantAnimRig_Deodarcedar *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 1;
  *(undefined4 *)(this + 0x3bc) = 0;
  *(undefined ***)this = &PTR_GetClass_0666ea20;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Deodarcedar_0666ec88;
  return;
}


/* PlantAnimRig_Deodarcedar::StaticNew() */

PlantAnimRig_Deodarcedar * PlantAnimRig_Deodarcedar::StaticNew(void)

{
  PlantAnimRig_Deodarcedar *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Deodarcedar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Deodarcedar::StaticClassInit() */

void PlantAnimRig_Deodarcedar::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Deodarcedar");
    (*pcVar2)(plVar1,asStack_10,FUN_0363d684,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Deodarcedar::StaticGetClass() */

long * PlantAnimRig_Deodarcedar::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Deodarcedar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Deodarcedar::GetClass() const */

long * PlantAnimRig_Deodarcedar::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Deodarcedar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Deodarcedar::getEnergySaveSelfAnimation() */

void PlantAnimRig_Deodarcedar::getEnergySaveSelfAnimation(void)

{
  long in_x0;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::to_string<ActivityTypeID>((ActivityTypeID *)(in_x0 + 0x3b8));
  std::operator+("energy_save_",asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Deodarcedar::getUpgradeAnimation() */

void PlantAnimRig_Deodarcedar::getUpgradeAnimation(void)

{
  long in_x0;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::to_string<ActivityTypeID>((ActivityTypeID *)(in_x0 + 0x3b8));
  std::operator+("upgrade_",asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Deodarcedar::getAttackNormalAnimation() */

void PlantAnimRig_Deodarcedar::getAttackNormalAnimation(void)

{
  long in_x0;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::to_string<ActivityTypeID>((ActivityTypeID *)(in_x0 + 0x3b8));
  std::operator+("fire_",asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Deodarcedar::getIdleAnimationName() */

void PlantAnimRig_Deodarcedar::getIdleAnimationName(void)

{
  long in_x0;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::to_string<ActivityTypeID>((ActivityTypeID *)(in_x0 + 0x3b8));
  std::operator+("idle_",asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Deodarcedar::getWaterAnimName() */

void PlantAnimRig_Deodarcedar::getWaterAnimName(void)

{
  long in_x0;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::to_string<ActivityTypeID>((ActivityTypeID *)(in_x0 + 0x3b8));
  std::operator+("water_",asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Deodarcedar::getPlantFoodMainAnimName() */

void PlantAnimRig_Deodarcedar::getPlantFoodMainAnimName(void)

{
  long in_x0;
  string *__n;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = asStack_10;
  std::string::string(asStack_18,"plantfood02_");
  nop();
  if (*(int *)(in_x0 + 0x3bc) == 1) {
    std::string::append(asStack_18,"plantfood_",(size_t)__n);
  }
  std::to_string<ActivityTypeID>((ActivityTypeID *)(in_x0 + 0x3b8));
  std::operator+(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

