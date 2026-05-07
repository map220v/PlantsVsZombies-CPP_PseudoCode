// Class: EffectAnimRig_CoconutCannonball


/* EffectAnimRig_CoconutCannonball::~EffectAnimRig_CoconutCannonball() */

void __thiscall
EffectAnimRig_CoconutCannonball::~EffectAnimRig_CoconutCannonball
          (EffectAnimRig_CoconutCannonball *this)

{
  *(undefined ***)this = &PTR_GetClass_0675d220;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_CoconutCannonball_0675d340;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_CoconutCannonball::~EffectAnimRig_CoconutCannonball() */

void __thiscall
EffectAnimRig_CoconutCannonball::~EffectAnimRig_CoconutCannonball
          (EffectAnimRig_CoconutCannonball *this)

{
  ~EffectAnimRig_CoconutCannonball(this + -0x10);
  return;
}


/* EffectAnimRig_CoconutCannonball::~EffectAnimRig_CoconutCannonball() */

void __thiscall
EffectAnimRig_CoconutCannonball::~EffectAnimRig_CoconutCannonball
          (EffectAnimRig_CoconutCannonball *this)

{
  ~EffectAnimRig_CoconutCannonball(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_CoconutCannonball::~EffectAnimRig_CoconutCannonball() */

void __thiscall
EffectAnimRig_CoconutCannonball::~EffectAnimRig_CoconutCannonball
          (EffectAnimRig_CoconutCannonball *this)

{
  ~EffectAnimRig_CoconutCannonball(this + -0x10);
  return;
}


/* EffectAnimRig_CoconutCannonball::StaticGetClass() */

long * EffectAnimRig_CoconutCannonball::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_CoconutCannonball",uVar2,StaticNew);
  return sClass;
}


/* EffectAnimRig_CoconutCannonball::GetClass() const */

long * EffectAnimRig_CoconutCannonball::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_CoconutCannonball",uVar2,StaticNew);
  return sClass;
}


/* EffectAnimRig_CoconutCannonball::EffectAnimRig_CoconutCannonball() */

void __thiscall
EffectAnimRig_CoconutCannonball::EffectAnimRig_CoconutCannonball
          (EffectAnimRig_CoconutCannonball *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0675d220;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_CoconutCannonball_0675d340;
  return;
}


/* EffectAnimRig_CoconutCannonball::StaticNew() */

EffectAnimRig_CoconutCannonball * EffectAnimRig_CoconutCannonball::StaticNew(void)

{
  EffectAnimRig_CoconutCannonball *this;
  
  this = ::operator_new(0x210);
  EffectAnimRig_CoconutCannonball(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_CoconutCannonball::PlayPlantFoodFlightFuse(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
EffectAnimRig_CoconutCannonball::PlayPlantFoodFlightFuse
          (EffectAnimRig_CoconutCannonball *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"coconut_projectile_plantfood_fuse");
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
/* EffectAnimRig_CoconutCannonball::PlayStarExplosion(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
EffectAnimRig_CoconutCannonball::PlayStarExplosion
          (EffectAnimRig_CoconutCannonball *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"coconut_explosion");
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
/* EffectAnimRig_CoconutCannonball::PlayStarPlantFoodFlightFuse(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
EffectAnimRig_CoconutCannonball::PlayStarPlantFoodFlightFuse
          (EffectAnimRig_CoconutCannonball *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"coconut_projectile_plantfood_fuse2");
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
/* EffectAnimRig_CoconutCannonball::CalcFuseAnimLength() */

void __thiscall
EffectAnimRig_CoconutCannonball::CalcFuseAnimLength(EffectAnimRig_CoconutCannonball *this)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"coconut_projectile_plantfood_fuse");
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
/* EffectAnimRig_CoconutCannonball::PlayNormalFlightLooped() */

void __thiscall
EffectAnimRig_CoconutCannonball::PlayNormalFlightLooped(EffectAnimRig_CoconutCannonball *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"coconut_projectile");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_CoconutCannonball::PlayPlantFoodFlightLooped() */

void __thiscall
EffectAnimRig_CoconutCannonball::PlayPlantFoodFlightLooped(EffectAnimRig_CoconutCannonball *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"coconut_projectile_plantfood");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_CoconutCannonball::PlayStarPlantFoodFlightLooped() */

void __thiscall
EffectAnimRig_CoconutCannonball::PlayStarPlantFoodFlightLooped
          (EffectAnimRig_CoconutCannonball *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"coconut_projectile_plantfood2");
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

