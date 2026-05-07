// Class: PlantAnimRig_IcyCurrant


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_IcyCurrant::getPlantFoodOffAnimName() */

void PlantAnimRig_IcyCurrant::getPlantFoodOffAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3b8) == '\0') {
    __s = "";
  }
  else {
    __s = "plantfood_off";
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
/* PlantAnimRig_IcyCurrant::getAttackAnimationName() */

void __thiscall PlantAnimRig_IcyCurrant::getAttackAnimationName(PlantAnimRig_IcyCurrant *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"attack_start");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_IcyCurrant::~PlantAnimRig_IcyCurrant() */

void __thiscall PlantAnimRig_IcyCurrant::~PlantAnimRig_IcyCurrant(PlantAnimRig_IcyCurrant *this)

{
  *(undefined ***)this = &PTR_GetClass_0674a100;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_IcyCurrant_0674a368;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_IcyCurrant::~PlantAnimRig_IcyCurrant() */

void __thiscall PlantAnimRig_IcyCurrant::~PlantAnimRig_IcyCurrant(PlantAnimRig_IcyCurrant *this)

{
  ~PlantAnimRig_IcyCurrant(this + -0x10);
  return;
}


/* PlantAnimRig_IcyCurrant::~PlantAnimRig_IcyCurrant() */

void __thiscall PlantAnimRig_IcyCurrant::~PlantAnimRig_IcyCurrant(PlantAnimRig_IcyCurrant *this)

{
  ~PlantAnimRig_IcyCurrant(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_IcyCurrant::~PlantAnimRig_IcyCurrant() */

void __thiscall PlantAnimRig_IcyCurrant::~PlantAnimRig_IcyCurrant(PlantAnimRig_IcyCurrant *this)

{
  ~PlantAnimRig_IcyCurrant(this + -0x10);
  return;
}


/* PlantAnimRig_IcyCurrant::PlantAnimRig_IcyCurrant() */

void __thiscall PlantAnimRig_IcyCurrant::PlantAnimRig_IcyCurrant(PlantAnimRig_IcyCurrant *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_IcyCurrant)0x0;
  *(undefined ***)this = &PTR_GetClass_0674a100;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_IcyCurrant_0674a368;
  return;
}


/* PlantAnimRig_IcyCurrant::StaticNew() */

PlantAnimRig_IcyCurrant * PlantAnimRig_IcyCurrant::StaticNew(void)

{
  PlantAnimRig_IcyCurrant *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_IcyCurrant(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_IcyCurrant::StaticClassInit() */

void PlantAnimRig_IcyCurrant::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_IcyCurrant");
    (*pcVar2)(plVar1,asStack_10,FUN_03c23498,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_IcyCurrant::StaticGetClass() */

long * PlantAnimRig_IcyCurrant::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_IcyCurrant",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_IcyCurrant::GetClass() const */

long * PlantAnimRig_IcyCurrant::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_IcyCurrant",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_IcyCurrant::StartAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_IcyCurrant::StartAttack(PlantAnimRig_IcyCurrant *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x1f0))(asStack_58);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_IcyCurrant::getAttackStopAnimationName() */

void __thiscall PlantAnimRig_IcyCurrant::getAttackStopAnimationName(PlantAnimRig_IcyCurrant *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"attack_end");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_IcyCurrant::StopAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_IcyCurrant::StopAttack(PlantAnimRig_IcyCurrant *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getAttackStopAnimationName(this);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

