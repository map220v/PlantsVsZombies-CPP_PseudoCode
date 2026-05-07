// Class: PlantAnimRig_Maybee


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Maybee::getPlantFoodMainAnimName() */

void PlantAnimRig_Maybee::getPlantFoodMainAnimName(void)

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
    __s = "pf02";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Maybee::~PlantAnimRig_Maybee() */

void __thiscall PlantAnimRig_Maybee::~PlantAnimRig_Maybee(PlantAnimRig_Maybee *this)

{
  *(undefined ***)this = &PTR_GetClass_069db640;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Maybee_069db8a8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Maybee::~PlantAnimRig_Maybee() */

void __thiscall PlantAnimRig_Maybee::~PlantAnimRig_Maybee(PlantAnimRig_Maybee *this)

{
  ~PlantAnimRig_Maybee(this + -0x10);
  return;
}


/* PlantAnimRig_Maybee::~PlantAnimRig_Maybee() */

void __thiscall PlantAnimRig_Maybee::~PlantAnimRig_Maybee(PlantAnimRig_Maybee *this)

{
  ~PlantAnimRig_Maybee(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Maybee::~PlantAnimRig_Maybee() */

void __thiscall PlantAnimRig_Maybee::~PlantAnimRig_Maybee(PlantAnimRig_Maybee *this)

{
  ~PlantAnimRig_Maybee(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Maybee::StaticClassInit() */

void PlantAnimRig_Maybee::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Maybee");
    (*pcVar2)(plVar1,asStack_10,FUN_04e2e2a0,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Maybee::StaticGetClass() */

long * PlantAnimRig_Maybee::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Maybee",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Maybee::GetClass() const */

long * PlantAnimRig_Maybee::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Maybee",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Maybee::PlantAnimRig_Maybee() */

void __thiscall PlantAnimRig_Maybee::PlantAnimRig_Maybee(PlantAnimRig_Maybee *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069db640;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Maybee_069db8a8;
  return;
}


/* PlantAnimRig_Maybee::StaticNew() */

PlantAnimRig_Maybee * PlantAnimRig_Maybee::StaticNew(void)

{
  PlantAnimRig_Maybee *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Maybee(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Maybee::PlayCooldownStart(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_Maybee::PlayCooldownStart(PlantAnimRig_Maybee *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"cooldown");
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
    PlantAnimRig::SetState((PlantAnimRig *)this,10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Maybee::PlayCooldownEnd(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Maybee::PlayCooldownEnd(PlantAnimRig_Maybee *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"recharge");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Maybee::PlayCooldownLooped() */

void __thiscall PlantAnimRig_Maybee::PlayCooldownLooped(PlantAnimRig_Maybee *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"cooldown_idle");
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

