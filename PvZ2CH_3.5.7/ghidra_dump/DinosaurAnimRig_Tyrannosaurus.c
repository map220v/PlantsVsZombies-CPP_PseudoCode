// Class: DinosaurAnimRig_Tyrannosaurus


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig_Tyrannosaurus::getIdleAnimationName() */

void DinosaurAnimRig_Tyrannosaurus::getIdleAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x22c) == '\0') {
    __s = "idle";
  }
  else {
    __s = "idle_charmed";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* DinosaurAnimRig_Tyrannosaurus::StaticGetClass() */

long * DinosaurAnimRig_Tyrannosaurus::StaticGetClass(void)

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
  uVar2 = DinosaurAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurAnimRig_Tyrannosaurus",uVar2,StaticNew);
  return sClass;
}


/* DinosaurAnimRig_Tyrannosaurus::GetClass() const */

long * DinosaurAnimRig_Tyrannosaurus::GetClass(void)

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
  uVar2 = DinosaurAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurAnimRig_Tyrannosaurus",uVar2,StaticNew);
  return sClass;
}


/* DinosaurAnimRig_Tyrannosaurus::~DinosaurAnimRig_Tyrannosaurus() */

void __thiscall
DinosaurAnimRig_Tyrannosaurus::~DinosaurAnimRig_Tyrannosaurus(DinosaurAnimRig_Tyrannosaurus *this)

{
  *(undefined ***)this = &PTR_GetClass_06905870;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurAnimRig_Tyrannosaurus_069059f0;
  DinosaurAnimRig::~DinosaurAnimRig((DinosaurAnimRig *)this);
  return;
}


/* non-virtual thunk to DinosaurAnimRig_Tyrannosaurus::~DinosaurAnimRig_Tyrannosaurus() */

void __thiscall
DinosaurAnimRig_Tyrannosaurus::~DinosaurAnimRig_Tyrannosaurus(DinosaurAnimRig_Tyrannosaurus *this)

{
  ~DinosaurAnimRig_Tyrannosaurus(this + -0x10);
  return;
}


/* DinosaurAnimRig_Tyrannosaurus::~DinosaurAnimRig_Tyrannosaurus() */

void __thiscall
DinosaurAnimRig_Tyrannosaurus::~DinosaurAnimRig_Tyrannosaurus(DinosaurAnimRig_Tyrannosaurus *this)

{
  ~DinosaurAnimRig_Tyrannosaurus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DinosaurAnimRig_Tyrannosaurus::~DinosaurAnimRig_Tyrannosaurus() */

void __thiscall
DinosaurAnimRig_Tyrannosaurus::~DinosaurAnimRig_Tyrannosaurus(DinosaurAnimRig_Tyrannosaurus *this)

{
  ~DinosaurAnimRig_Tyrannosaurus(this + -0x10);
  return;
}


/* DinosaurAnimRig_Tyrannosaurus::DinosaurAnimRig_Tyrannosaurus() */

void __thiscall
DinosaurAnimRig_Tyrannosaurus::DinosaurAnimRig_Tyrannosaurus(DinosaurAnimRig_Tyrannosaurus *this)

{
  DinosaurAnimRig::DinosaurAnimRig((DinosaurAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06905870;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurAnimRig_Tyrannosaurus_069059f0;
  return;
}


/* DinosaurAnimRig_Tyrannosaurus::StaticNew() */

DinosaurAnimRig_Tyrannosaurus * DinosaurAnimRig_Tyrannosaurus::StaticNew(void)

{
  DinosaurAnimRig_Tyrannosaurus *this;
  
  this = ::operator_new(0x230);
  DinosaurAnimRig_Tyrannosaurus(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig_Tyrannosaurus::PlayEnterAnimation(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
DinosaurAnimRig_Tyrannosaurus::PlayEnterAnimation
          (DinosaurAnimRig_Tyrannosaurus *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"enter");
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
/* DinosaurAnimRig_Tyrannosaurus::PlayExitAnimation(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
DinosaurAnimRig_Tyrannosaurus::PlayExitAnimation
          (DinosaurAnimRig_Tyrannosaurus *this,RtReflectionDelegate *param_2)

{
  undefined1 *__n;
  undefined1 auStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  __n = auStack_60;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"");
  nop();
  if (this[0x22c] == (DinosaurAnimRig_Tyrannosaurus)0x0) {
    std::string::append(asStack_58,"exit",(size_t)__n);
  }
  else {
    std::string::append(asStack_58,"exit_charmed",(size_t)__n);
  }
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig_Tyrannosaurus::PlayRoarAnimation(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
DinosaurAnimRig_Tyrannosaurus::PlayRoarAnimation
          (DinosaurAnimRig_Tyrannosaurus *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"roar");
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
/* DinosaurAnimRig_Tyrannosaurus::PlayEatAnimation(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
DinosaurAnimRig_Tyrannosaurus::PlayEatAnimation
          (DinosaurAnimRig_Tyrannosaurus *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"eat_charmed");
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
/* DinosaurAnimRig_Tyrannosaurus::PlayCharmAnimation(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
DinosaurAnimRig_Tyrannosaurus::PlayCharmAnimation
          (DinosaurAnimRig_Tyrannosaurus *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_0482a710(this + 0x22c);
  std::string::string(asStack_58,"charmed_activate");
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
/* DinosaurAnimRig_Tyrannosaurus::PlayIdleAnimation(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void DinosaurAnimRig_Tyrannosaurus::PlayIdleAnimation(PopAnimRig *param_1)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x128))(asStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(param_1,asStack_40,3,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

