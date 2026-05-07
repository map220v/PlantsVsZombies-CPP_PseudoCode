// Class: PlantAnimRig_Parsnip


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Parsnip::getPlantFoodMainAnimName() */

void PlantAnimRig_Parsnip::getPlantFoodMainAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if ((*(char *)(in_x0 + 0x220) == '\0') || (*(int *)(in_x0 + 0x228) != 1)) {
    __s = "plantfood_pop";
  }
  else {
    __s = "plantfood_pop2";
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
/* PlantAnimRig_Parsnip::getPlantFoodOnAnimName() */

void __thiscall PlantAnimRig_Parsnip::getPlantFoodOnAnimName(PlantAnimRig_Parsnip *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"drop");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Parsnip::~PlantAnimRig_Parsnip() */

void __thiscall PlantAnimRig_Parsnip::~PlantAnimRig_Parsnip(PlantAnimRig_Parsnip *this)

{
  *(undefined ***)this = &PTR_GetClass_067404a0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Parsnip_06740708;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Parsnip::~PlantAnimRig_Parsnip() */

void __thiscall PlantAnimRig_Parsnip::~PlantAnimRig_Parsnip(PlantAnimRig_Parsnip *this)

{
  ~PlantAnimRig_Parsnip(this + -0x10);
  return;
}


/* PlantAnimRig_Parsnip::~PlantAnimRig_Parsnip() */

void __thiscall PlantAnimRig_Parsnip::~PlantAnimRig_Parsnip(PlantAnimRig_Parsnip *this)

{
  ~PlantAnimRig_Parsnip(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Parsnip::~PlantAnimRig_Parsnip() */

void __thiscall PlantAnimRig_Parsnip::~PlantAnimRig_Parsnip(PlantAnimRig_Parsnip *this)

{
  ~PlantAnimRig_Parsnip(this + -0x10);
  return;
}


/* PlantAnimRig_Parsnip::PlantAnimRig_Parsnip() */

void __thiscall PlantAnimRig_Parsnip::PlantAnimRig_Parsnip(PlantAnimRig_Parsnip *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067404a0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Parsnip_06740708;
  return;
}


/* PlantAnimRig_Parsnip::StaticNew() */

PlantAnimRig_Parsnip * PlantAnimRig_Parsnip::StaticNew(void)

{
  PlantAnimRig_Parsnip *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Parsnip(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Parsnip::StaticClassInit() */

void PlantAnimRig_Parsnip::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Parsnip");
    (*pcVar2)(plVar1,asStack_10,FUN_03bed574,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Parsnip::StaticGetClass() */

long * PlantAnimRig_Parsnip::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Parsnip",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Parsnip::GetClass() const */

long * PlantAnimRig_Parsnip::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Parsnip",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Parsnip::PlayPunchAttack(bool, MeleePlantTargeter::TargetDirection,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Parsnip::PlayPunchAttack
          (PlantAnimRig_Parsnip *this,char param_1,undefined8 param_3,RtReflectionDelegate *param_4)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == '\0') {
    std::string::string(asStack_58,"attack");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,param_4);
  }
  else {
    std::string::string(asStack_58,"attack2");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,param_4);
  }
  iVar1 = PopAnimRig::PlayAndStop
                    ((PopAnimRig *)this,asStack_58,0,
                     (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Parsnip::PlayAnimation(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >,
   ParsnipAnimation) */

void __thiscall
PlantAnimRig_Parsnip::PlayAnimation
          (PlantAnimRig_Parsnip *this,RtReflectionDelegate *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == 0) {
    std::string::string(asStack_58,"drop");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,param_2);
LAB_03bed810:
    iVar1 = PopAnimRig::PlayAndStop
                      ((PopAnimRig *)this,asStack_58,0,
                       (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                        *)aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    if (iVar1 != -1) {
      PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
      uVar2 = 1;
      goto LAB_03bed7ac;
    }
  }
  else if (param_3 == 1) {
    std::string::string(asStack_58,"attack_pop");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,param_2);
    goto LAB_03bed810;
  }
  uVar2 = 0;
LAB_03bed7ac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Parsnip::PlayUltraAttack() */

void __thiscall PlantAnimRig_Parsnip::PlayUltraAttack(PlantAnimRig_Parsnip *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack5_1");
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


/* PlantAnimRig_Parsnip::PlayIdleLooped() */

char __thiscall PlantAnimRig_Parsnip::PlayIdleLooped(PlantAnimRig_Parsnip *this)

{
  char cVar1;
  
  cVar1 = PlantAnimRig::PlayIdleLooped((PlantAnimRig *)this);
  if (cVar1 != '\0') {
    PlantAnimRig::SetState((PlantAnimRig *)this,1);
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Parsnip::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Parsnip::PlayAttack(PlantAnimRig_Parsnip *this,RtReflectionDelegate *param_2)

{
  undefined1 uVar1;
  int iVar2;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  uVar1 = 0;
  local_8 = ___stack_chk_guard;
  iVar2 = Effect_AngerFlame::GetFlameCol((Effect_AngerFlame *)this);
  if (iVar2 != 0xe) {
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,param_2);
    uVar1 = PlantAnimRig::PlayAttack((PlantAnimRig *)this,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

