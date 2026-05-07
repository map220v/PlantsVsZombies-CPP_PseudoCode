// Class: PlantAnimRig_PrimalWallnut


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PrimalWallnut::getPlantFoodOnAnimName() */

void PlantAnimRig_PrimalWallnut::getPlantFoodOnAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x220) == '\0') {
    __s = "plantfood_on";
  }
  else {
    __s = "platntfood_on2";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_PrimalWallnut::~PlantAnimRig_PrimalWallnut() */

void __thiscall
PlantAnimRig_PrimalWallnut::~PlantAnimRig_PrimalWallnut(PlantAnimRig_PrimalWallnut *this)

{
  *(undefined ***)this = &PTR_GetClass_067f95d0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_PrimalWallnut_067f9850;
  PlantAnimRig_Wallnut::~PlantAnimRig_Wallnut((PlantAnimRig_Wallnut *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_PrimalWallnut::~PlantAnimRig_PrimalWallnut() */

void __thiscall
PlantAnimRig_PrimalWallnut::~PlantAnimRig_PrimalWallnut(PlantAnimRig_PrimalWallnut *this)

{
  ~PlantAnimRig_PrimalWallnut(this + -0x10);
  return;
}


/* PlantAnimRig_PrimalWallnut::~PlantAnimRig_PrimalWallnut() */

void __thiscall
PlantAnimRig_PrimalWallnut::~PlantAnimRig_PrimalWallnut(PlantAnimRig_PrimalWallnut *this)

{
  ~PlantAnimRig_PrimalWallnut(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_PrimalWallnut::~PlantAnimRig_PrimalWallnut() */

void __thiscall
PlantAnimRig_PrimalWallnut::~PlantAnimRig_PrimalWallnut(PlantAnimRig_PrimalWallnut *this)

{
  ~PlantAnimRig_PrimalWallnut(this + -0x10);
  return;
}


/* PlantAnimRig_PrimalWallnut::PlantAnimRig_PrimalWallnut() */

void __thiscall
PlantAnimRig_PrimalWallnut::PlantAnimRig_PrimalWallnut(PlantAnimRig_PrimalWallnut *this)

{
  PlantAnimRig_Wallnut::PlantAnimRig_Wallnut((PlantAnimRig_Wallnut *)this);
  *(undefined ***)this = &PTR_GetClass_067f95d0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_PrimalWallnut_067f9850;
  return;
}


/* PlantAnimRig_PrimalWallnut::StaticNew() */

PlantAnimRig_PrimalWallnut * PlantAnimRig_PrimalWallnut::StaticNew(void)

{
  PlantAnimRig_PrimalWallnut *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_PrimalWallnut(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PrimalWallnut::StaticClassInit() */

void PlantAnimRig_PrimalWallnut::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_PrimalWallnut");
    (*pcVar2)(plVar1,asStack_10,FUN_0418498c,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_PrimalWallnut::StaticGetClass() */

long * PlantAnimRig_PrimalWallnut::StaticGetClass(void)

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
  uVar2 = PlantAnimRig_Wallnut::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_PrimalWallnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_PrimalWallnut::GetClass() const */

long * PlantAnimRig_PrimalWallnut::GetClass(void)

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
  uVar2 = PlantAnimRig_Wallnut::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_PrimalWallnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PrimalWallnut::PlayCure(Sexy::Delegate1<std::string const&>) */

void __thiscall
PlantAnimRig_PrimalWallnut::PlayCure(PlantAnimRig_PrimalWallnut *this,Delegate1 *param_2)

{
  int iVar1;
  string asStack_48 [8];
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_041843a4(*(undefined4 *)(this + 0x22c));
  if (iVar1 == 0) {
    std::string::string(asStack_40,"grow_up");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
    PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  else {
    std::string::string(asStack_48,"growup_damage");
    FUN_041843a4(*(undefined4 *)(this + 0x22c));
    PopAnimRig::CalcVariationLabelName((string *)this,(int)asStack_48);
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
    PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    std::string::~string(asStack_48);
    nop();
  }
  PlantAnimRig::SetState((PlantAnimRig *)this,0x11);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PrimalWallnut::PlayBabyIn() */

void __thiscall PlantAnimRig_PrimalWallnut::PlayBabyIn(PlantAnimRig_PrimalWallnut *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"small_in");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  PlantAnimRig::SetState((PlantAnimRig *)this,0xf);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PrimalWallnut::PlayGrowUp() */

void __thiscall PlantAnimRig_PrimalWallnut::PlayGrowUp(PlantAnimRig_PrimalWallnut *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"big_in");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  PlantAnimRig::SetState((PlantAnimRig *)this,0x12);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PrimalWallnut::PlayMiniIdleLooped() */

void __thiscall PlantAnimRig_PrimalWallnut::PlayMiniIdleLooped(PlantAnimRig_PrimalWallnut *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"small_idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_PrimalWallnut::onAnimStopped() */

void __thiscall PlantAnimRig_PrimalWallnut::onAnimStopped(PlantAnimRig_PrimalWallnut *this)

{
  PlantAnimRig::onAnimStopped((PlantAnimRig *)this);
  switch(*(undefined4 *)(this + 0x218)) {
  case 0xf:
    PlantAnimRig::SetState((PlantAnimRig *)this,0x10);
  case 0x10:
    PlayMiniIdleLooped(this);
    return;
  default:
    return;
  case 0x12:
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  case 0xe:
    (**(code **)(*(long *)this + 0x118))(this);
    return;
  }
}

