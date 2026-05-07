// Class: PlantAnimRig_Turnip


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Turnip::PlaySpinningTurnip() */

void __thiscall PlantAnimRig_Turnip::PlaySpinningTurnip(PlantAnimRig_Turnip *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"plantfood3");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* PlantAnimRig_Turnip::~PlantAnimRig_Turnip() */

void __thiscall PlantAnimRig_Turnip::~PlantAnimRig_Turnip(PlantAnimRig_Turnip *this)

{
  *(undefined ***)this = &PTR_GetClass_0679e5b0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Turnip_0679e818;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Turnip::~PlantAnimRig_Turnip() */

void __thiscall PlantAnimRig_Turnip::~PlantAnimRig_Turnip(PlantAnimRig_Turnip *this)

{
  ~PlantAnimRig_Turnip(this + -0x10);
  return;
}


/* PlantAnimRig_Turnip::~PlantAnimRig_Turnip() */

void __thiscall PlantAnimRig_Turnip::~PlantAnimRig_Turnip(PlantAnimRig_Turnip *this)

{
  ~PlantAnimRig_Turnip(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Turnip::~PlantAnimRig_Turnip() */

void __thiscall PlantAnimRig_Turnip::~PlantAnimRig_Turnip(PlantAnimRig_Turnip *this)

{
  ~PlantAnimRig_Turnip(this + -0x10);
  return;
}


/* PlantAnimRig_Turnip::StaticGetClass() */

long * PlantAnimRig_Turnip::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Turnip",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_Turnip::GetClass() const */

long * PlantAnimRig_Turnip::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Turnip",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_Turnip::PlantAnimRig_Turnip() */

void __thiscall PlantAnimRig_Turnip::PlantAnimRig_Turnip(PlantAnimRig_Turnip *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0679e5b0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Turnip_0679e818;
  return;
}


/* PlantAnimRig_Turnip::StaticNew() */

PlantAnimRig_Turnip * PlantAnimRig_Turnip::StaticNew(void)

{
  PlantAnimRig_Turnip *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Turnip(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Turnip::PlayDefendBladeKee(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_Turnip::PlayDefendBladeKee(PlantAnimRig_Turnip *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"idle3");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Turnip::PlayLevelAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Turnip::PlayLevelAttack(PlantAnimRig_Turnip *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Turnip::PlayPrepareAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_Turnip::PlayPrepareAttack(PlantAnimRig_Turnip *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"idle_to_attack");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Turnip::PlayResumeIdle(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Turnip::PlayResumeIdle(PlantAnimRig_Turnip *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack_to_idle");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Turnip::PlayEmergeFromGround() */

void __thiscall PlantAnimRig_Turnip::PlayEmergeFromGround(PlantAnimRig_Turnip *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x218) = 0xf;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"plantfood2");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* PlantAnimRig_Turnip::PlayPlantFoodEnd() */

void __thiscall PlantAnimRig_Turnip::PlayPlantFoodEnd(PlantAnimRig_Turnip *this)

{
  *(undefined4 *)(this + 0x218) = 1;
  PlantAnimRig::PlayPlantFoodEnd((PlantAnimRig *)this);
  return;
}

