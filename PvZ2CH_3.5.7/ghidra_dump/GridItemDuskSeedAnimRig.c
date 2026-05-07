// Class: GridItemDuskSeedAnimRig


/* GridItemDuskSeedAnimRig::~GridItemDuskSeedAnimRig() */

void __thiscall GridItemDuskSeedAnimRig::~GridItemDuskSeedAnimRig(GridItemDuskSeedAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_0673d530;
  *(undefined ***)(this + 0x10) = &PTR__GridItemDuskSeedAnimRig_0673d650;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemDuskSeedAnimRig::~GridItemDuskSeedAnimRig() */

void __thiscall GridItemDuskSeedAnimRig::~GridItemDuskSeedAnimRig(GridItemDuskSeedAnimRig *this)

{
  ~GridItemDuskSeedAnimRig(this + -0x10);
  return;
}


/* GridItemDuskSeedAnimRig::~GridItemDuskSeedAnimRig() */

void __thiscall GridItemDuskSeedAnimRig::~GridItemDuskSeedAnimRig(GridItemDuskSeedAnimRig *this)

{
  ~GridItemDuskSeedAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemDuskSeedAnimRig::~GridItemDuskSeedAnimRig() */

void __thiscall GridItemDuskSeedAnimRig::~GridItemDuskSeedAnimRig(GridItemDuskSeedAnimRig *this)

{
  ~GridItemDuskSeedAnimRig(this + -0x10);
  return;
}


/* GridItemDuskSeedAnimRig::StaticGetClass() */

long * GridItemDuskSeedAnimRig::StaticGetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemDuskSeedAnimRig",uVar2,StaticNew);
  return sClass;
}


/* GridItemDuskSeedAnimRig::GetClass() const */

long * GridItemDuskSeedAnimRig::GetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemDuskSeedAnimRig",uVar2,StaticNew);
  return sClass;
}


/* GridItemDuskSeedAnimRig::GridItemDuskSeedAnimRig() */

void __thiscall GridItemDuskSeedAnimRig::GridItemDuskSeedAnimRig(GridItemDuskSeedAnimRig *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0673d530;
  *(undefined ***)(this + 0x10) = &PTR__GridItemDuskSeedAnimRig_0673d650;
  return;
}


/* GridItemDuskSeedAnimRig::StaticNew() */

GridItemDuskSeedAnimRig * GridItemDuskSeedAnimRig::StaticNew(void)

{
  GridItemDuskSeedAnimRig *this;
  
  this = ::operator_new(0x210);
  GridItemDuskSeedAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemDuskSeedAnimRig::CalcDamageStateCount() */

void __thiscall GridItemDuskSeedAnimRig::CalcDamageStateCount(GridItemDuskSeedAnimRig *this)

{
  undefined4 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"damage");
  uVar1 = PopAnimRig::CalcAnimVariationCount((PopAnimRig *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemDuskSeedAnimRig::PlayIdle(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
GridItemDuskSeedAnimRig::PlayIdle(GridItemDuskSeedAnimRig *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"biirth");
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
/* GridItemDuskSeedAnimRig::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
GridItemDuskSeedAnimRig::PlayAttack(GridItemDuskSeedAnimRig *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"bind");
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
/* GridItemDuskSeedAnimRig::PlayBinded() */

void __thiscall GridItemDuskSeedAnimRig::PlayBinded(GridItemDuskSeedAnimRig *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"bind");
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

