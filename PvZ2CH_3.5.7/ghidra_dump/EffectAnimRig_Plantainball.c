// Class: EffectAnimRig_Plantainball


/* EffectAnimRig_Plantainball::~EffectAnimRig_Plantainball() */

void __thiscall
EffectAnimRig_Plantainball::~EffectAnimRig_Plantainball(EffectAnimRig_Plantainball *this)

{
  *(undefined ***)this = &PTR_GetClass_066c11a0;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_Plantainball_066c12c0;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_Plantainball::~EffectAnimRig_Plantainball() */

void __thiscall
EffectAnimRig_Plantainball::~EffectAnimRig_Plantainball(EffectAnimRig_Plantainball *this)

{
  ~EffectAnimRig_Plantainball(this + -0x10);
  return;
}


/* EffectAnimRig_Plantainball::~EffectAnimRig_Plantainball() */

void __thiscall
EffectAnimRig_Plantainball::~EffectAnimRig_Plantainball(EffectAnimRig_Plantainball *this)

{
  ~EffectAnimRig_Plantainball(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_Plantainball::~EffectAnimRig_Plantainball() */

void __thiscall
EffectAnimRig_Plantainball::~EffectAnimRig_Plantainball(EffectAnimRig_Plantainball *this)

{
  ~EffectAnimRig_Plantainball(this + -0x10);
  return;
}


/* EffectAnimRig_Plantainball::StaticGetClass() */

long * EffectAnimRig_Plantainball::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_Plantainball",uVar2,StaticNew);
  return sClass;
}


/* EffectAnimRig_Plantainball::GetClass() const */

long * EffectAnimRig_Plantainball::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_Plantainball",uVar2,StaticNew);
  return sClass;
}


/* EffectAnimRig_Plantainball::EffectAnimRig_Plantainball() */

void __thiscall
EffectAnimRig_Plantainball::EffectAnimRig_Plantainball(EffectAnimRig_Plantainball *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_066c11a0;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_Plantainball_066c12c0;
  return;
}


/* EffectAnimRig_Plantainball::StaticNew() */

EffectAnimRig_Plantainball * EffectAnimRig_Plantainball::StaticNew(void)

{
  EffectAnimRig_Plantainball *this;
  
  this = ::operator_new(0x210);
  EffectAnimRig_Plantainball(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_Plantainball::PlayStarExplosion(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
EffectAnimRig_Plantainball::PlayStarExplosion
          (EffectAnimRig_Plantainball *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"animation");
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
/* EffectAnimRig_Plantainball::CalcFuseAnimLength() */

void __thiscall EffectAnimRig_Plantainball::CalcFuseAnimLength(EffectAnimRig_Plantainball *this)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"animation");
  uVar1 = PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_Plantainball::PlayStarPlantFoodFlightLooped() */

void __thiscall
EffectAnimRig_Plantainball::PlayStarPlantFoodFlightLooped(EffectAnimRig_Plantainball *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"animation");
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

