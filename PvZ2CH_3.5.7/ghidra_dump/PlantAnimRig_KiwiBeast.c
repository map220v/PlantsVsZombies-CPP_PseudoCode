// Class: PlantAnimRig_KiwiBeast


/* PlantAnimRig_KiwiBeast::onInitialized() */

void __thiscall PlantAnimRig_KiwiBeast::onInitialized(PlantAnimRig_KiwiBeast *this)

{
  *(undefined4 *)(this + 0x3b8) = 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_KiwiBeast::getPlantFoodOnAnimName() */

void __thiscall PlantAnimRig_KiwiBeast::getPlantFoodOnAnimName(PlantAnimRig_KiwiBeast *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"plantfood_stage3");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_KiwiBeast::~PlantAnimRig_KiwiBeast() */

void __thiscall PlantAnimRig_KiwiBeast::~PlantAnimRig_KiwiBeast(PlantAnimRig_KiwiBeast *this)

{
  *(undefined ***)this = &PTR_GetClass_06742640;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_KiwiBeast_067428a8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_KiwiBeast::~PlantAnimRig_KiwiBeast() */

void __thiscall PlantAnimRig_KiwiBeast::~PlantAnimRig_KiwiBeast(PlantAnimRig_KiwiBeast *this)

{
  ~PlantAnimRig_KiwiBeast(this + -0x10);
  return;
}


/* PlantAnimRig_KiwiBeast::~PlantAnimRig_KiwiBeast() */

void __thiscall PlantAnimRig_KiwiBeast::~PlantAnimRig_KiwiBeast(PlantAnimRig_KiwiBeast *this)

{
  ~PlantAnimRig_KiwiBeast(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_KiwiBeast::~PlantAnimRig_KiwiBeast() */

void __thiscall PlantAnimRig_KiwiBeast::~PlantAnimRig_KiwiBeast(PlantAnimRig_KiwiBeast *this)

{
  ~PlantAnimRig_KiwiBeast(this + -0x10);
  return;
}


/* PlantAnimRig_KiwiBeast::PlantAnimRig_KiwiBeast() */

void __thiscall PlantAnimRig_KiwiBeast::PlantAnimRig_KiwiBeast(PlantAnimRig_KiwiBeast *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06742640;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_KiwiBeast_067428a8;
  return;
}


/* PlantAnimRig_KiwiBeast::StaticNew() */

PlantAnimRig_KiwiBeast * PlantAnimRig_KiwiBeast::StaticNew(void)

{
  PlantAnimRig_KiwiBeast *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_KiwiBeast(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_KiwiBeast::StaticClassInit() */

void PlantAnimRig_KiwiBeast::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_KiwiBeast");
    (*pcVar2)(plVar1,asStack_10,FUN_03bfb4d4,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_KiwiBeast::StaticGetClass() */

long * PlantAnimRig_KiwiBeast::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_KiwiBeast",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_KiwiBeast::GetClass() const */

long * PlantAnimRig_KiwiBeast::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_KiwiBeast",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_KiwiBeast::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_KiwiBeast::PlayAttack(PlantAnimRig_KiwiBeast *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x1f0))(asStack_58);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_KiwiBeast::PlaySuperAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_KiwiBeast::PlaySuperAttack(PlantAnimRig_KiwiBeast *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack5");
  nop();
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_KiwiBeast::getIdleAnimationName() */

void PlantAnimRig_KiwiBeast::getIdleAnimationName(void)

{
  long in_x0;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_28,"idle_stage");
  std::to_string<ActivityTypeID>((ActivityTypeID *)(in_x0 + 0x3b8));
  std::operator+(asStack_28,asStack_20);
  std::string::string(asStack_10,"_");
  std::operator+(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_KiwiBeast::getAttackAnimationName() */

void PlantAnimRig_KiwiBeast::getAttackAnimationName(void)

{
  long in_x0;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"attack_stage");
  std::to_string<ActivityTypeID>((ActivityTypeID *)(in_x0 + 0x3b8));
  std::operator+(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_KiwiBeast::getGrowAnimationName(int) */

void PlantAnimRig_KiwiBeast::getGrowAnimationName(int param_1)

{
  ulong uVar1;
  int in_w1;
  int local_24;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  uVar1 = (ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  local_24 = in_w1 + -1;
  std::string::string(asStack_18,"growth_stage");
  std::to_string<ActivityTypeID>((ActivityTypeID *)(uVar1 + 0x3b8));
  std::operator+(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (1 < in_w1 - *(int *)(uVar1 + 0x3b8)) {
    std::string::string(asStack_20,"_");
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_24);
    std::operator+(asStack_20,asStack_18);
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    nop();
  }
  *(int *)(uVar1 + 0x3b8) = in_w1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_KiwiBeast::PlayGrow(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >, int)
    */

void PlantAnimRig_KiwiBeast::PlayGrow(PopAnimRig *param_1,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getGrowAnimationName((int)param_1);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop(param_1,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)param_1,0xe);
  }
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* PlantAnimRig_KiwiBeast::PlayPlantFoodStart(int) */

void __thiscall PlantAnimRig_KiwiBeast::PlayPlantFoodStart(PlantAnimRig_KiwiBeast *this,int param_1)

{
  *(undefined4 *)(this + 0x3b8) = 3;
  PlantAnimRig::PlayPlantFoodStart((PlantAnimRig *)this,param_1);
  return;
}

