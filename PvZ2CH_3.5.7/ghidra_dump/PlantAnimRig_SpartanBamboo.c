// Class: PlantAnimRig_SpartanBamboo


/* PlantAnimRig_SpartanBamboo::getPlantFoodMainAnimName() */

void PlantAnimRig_SpartanBamboo::getPlantFoodMainAnimName(void)

{
  long in_x0;
  size_t in_x2;
  string *in_x8;
  
  Set8BytesTo0();
  if ((*(int *)(in_x0 + 0x230) != -1) && (*(int *)(in_x0 + 0x3bc) == 0)) {
    if (*(char *)(in_x0 + 0x3b8) == '\0') {
      std::string::append(in_x8,"pf_attack_zb02",in_x2);
      return;
    }
    std::string::append(in_x8,"pf_attack_zb",in_x2);
    return;
  }
  if (*(char *)(in_x0 + 0x3b8) != '\0') {
    std::string::append(in_x8,"pf_attack",in_x2);
    return;
  }
  std::string::append(in_x8,"battle_trance_pf_attack",in_x2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SpartanBamboo::onPopAnimInitialized() */

void __thiscall PlantAnimRig_SpartanBamboo::onPopAnimInitialized(PlantAnimRig_SpartanBamboo *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  (**(code **)(*(long *)this + 0x260))(this,0xffffffff);
  std::string::string(asStack_10,"hair");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"hair2");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SpartanBamboo::playPlantFoodMain() */

void __thiscall PlantAnimRig_SpartanBamboo::playPlantFoodMain(PlantAnimRig_SpartanBamboo *this)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  this_00 = *(RealObject **)(this + 0x210);
  *(int *)(this + 0x3bc) = *(int *)(this + 0x3bc) + -1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Plant_spartanbamboo2");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  PlantAnimRig::playPlantFoodMain((PlantAnimRig *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_SpartanBamboo::~PlantAnimRig_SpartanBamboo() */

void __thiscall
PlantAnimRig_SpartanBamboo::~PlantAnimRig_SpartanBamboo(PlantAnimRig_SpartanBamboo *this)

{
  *(undefined ***)this = &PTR_GetClass_069df0e0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_SpartanBamboo_069df358;
  PlantAnimRig_Shielded::~PlantAnimRig_Shielded((PlantAnimRig_Shielded *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_SpartanBamboo::~PlantAnimRig_SpartanBamboo() */

void __thiscall
PlantAnimRig_SpartanBamboo::~PlantAnimRig_SpartanBamboo(PlantAnimRig_SpartanBamboo *this)

{
  ~PlantAnimRig_SpartanBamboo(this + -0x10);
  return;
}


/* PlantAnimRig_SpartanBamboo::~PlantAnimRig_SpartanBamboo() */

void __thiscall
PlantAnimRig_SpartanBamboo::~PlantAnimRig_SpartanBamboo(PlantAnimRig_SpartanBamboo *this)

{
  ~PlantAnimRig_SpartanBamboo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_SpartanBamboo::~PlantAnimRig_SpartanBamboo() */

void __thiscall
PlantAnimRig_SpartanBamboo::~PlantAnimRig_SpartanBamboo(PlantAnimRig_SpartanBamboo *this)

{
  ~PlantAnimRig_SpartanBamboo(this + -0x10);
  return;
}


/* PlantAnimRig_SpartanBamboo::PlantAnimRig_SpartanBamboo() */

void __thiscall
PlantAnimRig_SpartanBamboo::PlantAnimRig_SpartanBamboo(PlantAnimRig_SpartanBamboo *this)

{
  PlantAnimRig_Shielded::PlantAnimRig_Shielded((PlantAnimRig_Shielded *)this);
  this[0x3b8] = (PlantAnimRig_SpartanBamboo)0x1;
  this[0x3b9] = (PlantAnimRig_SpartanBamboo)0x0;
  *(undefined ***)this = &PTR_GetClass_069df0e0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_SpartanBamboo_069df358;
  *(undefined4 *)(this + 0x3bc) = 2;
  return;
}


/* PlantAnimRig_SpartanBamboo::StaticNew() */

PlantAnimRig_SpartanBamboo * PlantAnimRig_SpartanBamboo::StaticNew(void)

{
  PlantAnimRig_SpartanBamboo *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_SpartanBamboo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SpartanBamboo::StaticClassInit() */

void PlantAnimRig_SpartanBamboo::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_SpartanBamboo");
    (*pcVar2)(plVar1,asStack_10,FUN_04e44410,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_SpartanBamboo::StaticGetClass() */

long * PlantAnimRig_SpartanBamboo::StaticGetClass(void)

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
  uVar2 = PlantAnimRig_Shielded::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_SpartanBamboo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_SpartanBamboo::GetClass() const */

long * PlantAnimRig_SpartanBamboo::GetClass(void)

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
  uVar2 = PlantAnimRig_Shielded::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_SpartanBamboo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SpartanBamboo::PlayJabAnimation(Sexy::Delegate1<std::string const&>, bool) */

void PlantAnimRig_SpartanBamboo::PlayJabAnimation(PopAnimRig *param_1,Delegate1 *param_2)

{
  undefined4 uVar1;
  char *__s;
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x3b8] == (PopAnimRig)0x0) {
    if (param_1[0x3b9] == (PopAnimRig)0x0) {
      __s = "battle_trance_attack";
    }
    else {
      __s = "battle_trance_attack_rage";
    }
  }
  else if (param_1[0x3b9] == (PopAnimRig)0x0) {
    __s = "attack";
  }
  else {
    __s = "attack_rage";
  }
  std::string::string(asStack_40,__s);
  nop();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
  uVar1 = PopAnimRig::PlayAndStop(param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SpartanBamboo::PlayremoteAnimation(Sexy::Delegate1<std::string const&>, bool) */

void PlantAnimRig_SpartanBamboo::PlayremoteAnimation(PopAnimRig *param_1,Delegate1 *param_2)

{
  undefined4 uVar1;
  char *__s;
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x3b8] == (PopAnimRig)0x0) {
    if (param_1[0x3b9] == (PopAnimRig)0x0) {
      __s = "battle_attack_remote";
    }
    else {
      __s = "battle_attack_remote_rage";
    }
  }
  else if (param_1[0x3b9] == (PopAnimRig)0x0) {
    __s = "attack_remote";
  }
  else {
    __s = "attack_remote_rage";
  }
  std::string::string(asStack_40,__s);
  nop();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
  uVar1 = PopAnimRig::PlayAndStop(param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SpartanBamboo::PlayShieldBreakAnimation(Sexy::Delegate1<std::string const&>, bool)
    */

void __thiscall
PlantAnimRig_SpartanBamboo::PlayShieldBreakAnimation
          (PlantAnimRig_SpartanBamboo *this,Delegate1 *param_2,char param_3)

{
  undefined4 uVar1;
  char *__s;
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == '\0') {
    __s = "battle_trance_shield_break_abandon";
  }
  else {
    __s = "battle_trance_shield_break";
  }
  std::string::string(asStack_40,__s);
  nop();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
  uVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SpartanBamboo::PlayBeginBerserkerAnimation(Sexy::Delegate1<std::string const&>) */

void __thiscall
PlantAnimRig_SpartanBamboo::PlayBeginBerserkerAnimation
          (PlantAnimRig_SpartanBamboo *this,Delegate1 *param_2)

{
  undefined4 uVar1;
  char *__s;
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3b8] == (PlantAnimRig_SpartanBamboo)0x0) {
    __s = "battle_begin_rage";
  }
  else {
    __s = "begin_rage";
  }
  std::string::string(asStack_40,__s);
  nop();
  this[0x3b9] = (PlantAnimRig_SpartanBamboo)0x1;
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
  uVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(*(long *)(this + 0x210) + 200) = 0xe;
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SpartanBamboo::PlayEndBerserkerAnimation(Sexy::Delegate1<std::string const&>) */

void __thiscall
PlantAnimRig_SpartanBamboo::PlayEndBerserkerAnimation
          (PlantAnimRig_SpartanBamboo *this,Delegate1 *param_2)

{
  undefined4 uVar1;
  char *__s;
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3b8] == (PlantAnimRig_SpartanBamboo)0x0) {
    __s = "end_rage_battle";
  }
  else {
    __s = "end_rage";
  }
  std::string::string(asStack_40,__s);
  nop();
  this[0x3b9] = (PlantAnimRig_SpartanBamboo)0x0;
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
  uVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SpartanBamboo::PlayremoteLoopAnimation(std::string, Sexy::Delegate1<std::string
   const&>) */

void __thiscall
PlantAnimRig_SpartanBamboo::PlayremoteLoopAnimation
          (PlantAnimRig_SpartanBamboo *this,undefined8 param_2,Delegate1 *param_3)

{
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_3);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,param_2,0,aDStack_38);
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SpartanBamboo::playSingleAnimation(std::string,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_SpartanBamboo::playSingleAnimation
          (PlantAnimRig_SpartanBamboo *this,undefined8 param_2,RtReflectionDelegate *param_3)

{
  int iVar1;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,param_2,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
    *(undefined4 *)(*(long *)(this + 0x210) + 200) = 0xe;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SpartanBamboo::PlayIdle(bool) */

void PlantAnimRig_SpartanBamboo::PlayIdle(bool param_1)

{
  undefined1 uVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  string *__n;
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_68 [48];
  DummyInit aDStack_38 [48];
  long local_8;
  
  pPVar3 = (PopAnimRig *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  if (pPVar3[0x3b8] == (PopAnimRig)0x0) {
    ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_68);
    std::string::string(asStack_80,"battle_trance_idle1");
    nop();
    __n = asStack_70;
    std::string::string(asStack_78,"battle_trance_idle2");
    nop();
    if (pPVar3[0x3b9] != (PopAnimRig)0x0) {
      std::string::append(asStack_80,"battle_trance_rage_idle1",(size_t)__n);
      std::string::append(asStack_78,"battle_trance_rage_idle2",(size_t)__n);
    }
    FUN_05475d88(asStack_70,asStack_80);
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,0x3c);
    std::string::~string(asStack_70);
    FUN_05475d88(asStack_70,asStack_78);
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,0x28);
    std::string::~string(asStack_70);
    ProbabilitySet<std::string>::PickItem();
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    iVar2 = PopAnimRig::PlayAndContinue(pPVar3,asStack_70,0,aDStack_38);
    uVar1 = iVar2 != -1;
    std::string::~string(asStack_70);
    std::string::~string(asStack_78);
    std::string::~string(asStack_80);
    ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_68);
  }
  else if (pPVar3[0x3b9] == (PopAnimRig)0x0) {
    uVar1 = (**(code **)(*(long *)pPVar3 + 0x118))();
  }
  else {
    ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_68);
    std::string::string(asStack_70,"idle_rage");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,0x50);
    std::string::~string(asStack_70);
    nop();
    std::string::string(asStack_70,"idle2_rage");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_70,0x14);
    std::string::~string(asStack_70);
    nop();
    ProbabilitySet<std::string>::PickItem();
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    iVar2 = PopAnimRig::PlayAndContinue(pPVar3,asStack_78,0,aDStack_38);
    uVar1 = iVar2 != -1;
    std::string::~string(asStack_78);
    ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

