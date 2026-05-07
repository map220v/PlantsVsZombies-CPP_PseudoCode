// Class: PlantAnimRig_GeraniiFencer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GeraniiFencer::getPlantFoodMainAnimName() */

void PlantAnimRig_GeraniiFencer::getPlantFoodMainAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x220) == '\0') {
    __s = "pf";
  }
  else {
    __s = "pf2";
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
/* PlantAnimRig_GeraniiFencer::getAttackAnimationName() */

void PlantAnimRig_GeraniiFencer::getAttackAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3b8) == '\0') {
    if (*(char *)(in_x0 + 0x3b9) == '\0') {
      __s = "attack";
    }
    else {
      *(undefined1 *)(in_x0 + 0x3b9) = 0;
      __s = "attack_lv2";
    }
  }
  else {
    *(undefined1 *)(in_x0 + 0x3b8) = 0;
    *(undefined1 *)(in_x0 + 0x3b9) = 0;
    __s = "attack_lv5";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_GeraniiFencer::~PlantAnimRig_GeraniiFencer() */

void __thiscall
PlantAnimRig_GeraniiFencer::~PlantAnimRig_GeraniiFencer(PlantAnimRig_GeraniiFencer *this)

{
  *(undefined ***)this = &PTR_GetClass_069a84b0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_GeraniiFencer_069a8718;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_GeraniiFencer::~PlantAnimRig_GeraniiFencer() */

void __thiscall
PlantAnimRig_GeraniiFencer::~PlantAnimRig_GeraniiFencer(PlantAnimRig_GeraniiFencer *this)

{
  ~PlantAnimRig_GeraniiFencer(this + -0x10);
  return;
}


/* PlantAnimRig_GeraniiFencer::~PlantAnimRig_GeraniiFencer() */

void __thiscall
PlantAnimRig_GeraniiFencer::~PlantAnimRig_GeraniiFencer(PlantAnimRig_GeraniiFencer *this)

{
  ~PlantAnimRig_GeraniiFencer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_GeraniiFencer::~PlantAnimRig_GeraniiFencer() */

void __thiscall
PlantAnimRig_GeraniiFencer::~PlantAnimRig_GeraniiFencer(PlantAnimRig_GeraniiFencer *this)

{
  ~PlantAnimRig_GeraniiFencer(this + -0x10);
  return;
}


/* PlantAnimRig_GeraniiFencer::PlantAnimRig_GeraniiFencer() */

void __thiscall
PlantAnimRig_GeraniiFencer::PlantAnimRig_GeraniiFencer(PlantAnimRig_GeraniiFencer *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_GeraniiFencer)0x0;
  this[0x3b9] = (PlantAnimRig_GeraniiFencer)0x0;
  *(undefined ***)this = &PTR_GetClass_069a84b0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_GeraniiFencer_069a8718;
  return;
}


/* PlantAnimRig_GeraniiFencer::StaticNew() */

PlantAnimRig_GeraniiFencer * PlantAnimRig_GeraniiFencer::StaticNew(void)

{
  PlantAnimRig_GeraniiFencer *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_GeraniiFencer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GeraniiFencer::StaticClassInit() */

void PlantAnimRig_GeraniiFencer::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_GeraniiFencer");
    (*pcVar2)(plVar1,asStack_10,FUN_04d1254c,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_GeraniiFencer::StaticGetClass() */

long * PlantAnimRig_GeraniiFencer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_GeraniiFencer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_GeraniiFencer::GetClass() const */

long * PlantAnimRig_GeraniiFencer::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_GeraniiFencer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GeraniiFencer::PlayNormalAttack(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_GeraniiFencer::PlayNormalAttack
          (PlantAnimRig_GeraniiFencer *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack2");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GeraniiFencer::PlayIdleLooped() */

void __thiscall PlantAnimRig_GeraniiFencer::PlayIdleLooped(PlantAnimRig_GeraniiFencer *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig::GetIdleAnimName();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}

