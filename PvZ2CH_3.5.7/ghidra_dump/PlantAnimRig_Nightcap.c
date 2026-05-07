// Class: PlantAnimRig_Nightcap


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Nightcap::getPlantFoodMainAnimName() */

void __thiscall PlantAnimRig_Nightcap::getPlantFoodMainAnimName(PlantAnimRig_Nightcap *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"pf_attack");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Nightcap::~PlantAnimRig_Nightcap() */

void __thiscall PlantAnimRig_Nightcap::~PlantAnimRig_Nightcap(PlantAnimRig_Nightcap *this)

{
  *(undefined ***)this = &PTR_GetClass_069de710;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Nightcap_069de978;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Nightcap::~PlantAnimRig_Nightcap() */

void __thiscall PlantAnimRig_Nightcap::~PlantAnimRig_Nightcap(PlantAnimRig_Nightcap *this)

{
  ~PlantAnimRig_Nightcap(this + -0x10);
  return;
}


/* PlantAnimRig_Nightcap::~PlantAnimRig_Nightcap() */

void __thiscall PlantAnimRig_Nightcap::~PlantAnimRig_Nightcap(PlantAnimRig_Nightcap *this)

{
  ~PlantAnimRig_Nightcap(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Nightcap::~PlantAnimRig_Nightcap() */

void __thiscall PlantAnimRig_Nightcap::~PlantAnimRig_Nightcap(PlantAnimRig_Nightcap *this)

{
  ~PlantAnimRig_Nightcap(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Nightcap::StaticClassInit() */

void PlantAnimRig_Nightcap::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Nightcap");
    (*pcVar2)(plVar1,asStack_10,FUN_04e40534,0x400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Nightcap::StaticGetClass() */

long * PlantAnimRig_Nightcap::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Nightcap",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Nightcap::GetClass() const */

long * PlantAnimRig_Nightcap::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Nightcap",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Nightcap::PlayLandingAnimation(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_Nightcap::PlayLandingAnimation
          (PlantAnimRig_Nightcap *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"plant");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Nightcap::PlantAnimRig_Nightcap() */

void __thiscall PlantAnimRig_Nightcap::PlantAnimRig_Nightcap(PlantAnimRig_Nightcap *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069de710;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Nightcap_069de978;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)(this + 0x3b8));
  return;
}


/* PlantAnimRig_Nightcap::StaticNew() */

PlantAnimRig_Nightcap * PlantAnimRig_Nightcap::StaticNew(void)

{
  PlantAnimRig_Nightcap *this;
  
  this = ::operator_new(0x400);
  PlantAnimRig_Nightcap(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Nightcap::PlayStealth() */

void __thiscall PlantAnimRig_Nightcap::PlayStealth(PlantAnimRig_Nightcap *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"stealth");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Nightcap::getIdleAnimationName() */

void PlantAnimRig_Nightcap::getIdleAnimationName(void)

{
  undefined1 uVar1;
  long lVar2;
  char cVar3;
  long in_x0;
  long extraout_x0;
  string *in_x8;
  
  lVar2 = ___stack_chk_guard;
  if (*(long *)(in_x0 + 0x210) != 0) {
    nop();
    uVar1 = *(undefined1 *)(extraout_x0 + 0x28);
    cVar3 = FUN_04e3e644(uVar1);
    if (cVar3 != '\0') {
      std::string::string(in_x8,"idle_stealth");
      nop();
      goto LAB_04e4071c;
    }
    cVar3 = FUN_04e3ff80(uVar1,extraout_x0 + 0x34);
    if (cVar3 != '\0') {
      std::string::string(in_x8,"idle_ready");
      nop();
      goto LAB_04e4071c;
    }
  }
  std::string::string(in_x8,"idle");
  nop();
LAB_04e4071c:
  if (lVar2 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Nightcap::PlayPlantFoodStart(int) */

void PlantAnimRig_Nightcap::PlayPlantFoodStart(int param_1)

{
  char cVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  long extraout_x0;
  char *__s;
  string *__n;
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  pPVar3 = (PopAnimRig *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  __n = asStack_40;
  std::string::string(asStack_50,"pf_attack");
  nop();
  if (pPVar3[0x220] != (PopAnimRig)0x0) {
    std::string::append(asStack_50,"pf02_attack",(size_t)__n);
  }
  if (*(long *)(pPVar3 + 0x210) != 0) {
    nop();
    cVar1 = FUN_04e3e644(*(undefined1 *)(extraout_x0 + 0x28));
    if (cVar1 != '\0') {
      __s = "_stealth";
      goto LAB_04e40810;
    }
  }
  __s = "";
LAB_04e40810:
  std::string::string(asStack_48,__s);
  nop();
  FUN_031dcc6c(asStack_40,asStack_50,asStack_48);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar2 = PopAnimRig::PlayAndStop(pPVar3,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (iVar2 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)pPVar3,0xe);
  }
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Nightcap::getAttackAnimationName() */

void PlantAnimRig_Nightcap::getAttackAnimationName(void)

{
  undefined1 uVar1;
  char cVar2;
  long in_x0;
  long extraout_x0;
  long extraout_x0_00;
  undefined1 *__n;
  float fVar3;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  __n = auStack_18;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"");
  nop();
  if (*(long *)(in_x0 + 0x210) != 0) {
    nop();
    uVar1 = *(undefined1 *)(extraout_x0 + 0x28);
    cVar2 = FUN_04e3e644(uVar1);
    if (cVar2 == '\0') {
      cVar2 = FUN_04e3ff80(uVar1,extraout_x0 + 0x34);
    }
    else {
      std::string::append(asStack_10,"_stealth",(size_t)__n);
      nop();
      cVar2 = FUN_04e3ff80(*(undefined1 *)(extraout_x0_00 + 0x28),extraout_x0_00 + 0x34);
    }
    if (cVar2 != '\0') {
      std::string::append(asStack_10,"_ready",(size_t)__n);
    }
  }
  fVar3 = (float)Sexy::Rand(1.0);
  if ((0.15 <= fVar3) || (*(int *)(in_x0 + 0x224) != 5)) {
    FUN_031f5e7c("attack",asStack_10);
  }
  else {
    FUN_031f5e7c("attack_lv5",asStack_10);
  }
  std::string::~string(asStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

