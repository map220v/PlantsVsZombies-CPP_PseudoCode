// Class: DinosaurAnimRig_Stegosaurus


/* DinosaurAnimRig_Stegosaurus::~DinosaurAnimRig_Stegosaurus() */

void __thiscall
DinosaurAnimRig_Stegosaurus::~DinosaurAnimRig_Stegosaurus(DinosaurAnimRig_Stegosaurus *this)

{
  *(undefined ***)this = &PTR_GetClass_069051e0;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurAnimRig_Stegosaurus_06905330;
  CreatureAnimRig::~CreatureAnimRig((CreatureAnimRig *)this);
  return;
}


/* non-virtual thunk to DinosaurAnimRig_Stegosaurus::~DinosaurAnimRig_Stegosaurus() */

void __thiscall
DinosaurAnimRig_Stegosaurus::~DinosaurAnimRig_Stegosaurus(DinosaurAnimRig_Stegosaurus *this)

{
  ~DinosaurAnimRig_Stegosaurus(this + -0x10);
  return;
}


/* DinosaurAnimRig_Stegosaurus::~DinosaurAnimRig_Stegosaurus() */

void __thiscall
DinosaurAnimRig_Stegosaurus::~DinosaurAnimRig_Stegosaurus(DinosaurAnimRig_Stegosaurus *this)

{
  ~DinosaurAnimRig_Stegosaurus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DinosaurAnimRig_Stegosaurus::~DinosaurAnimRig_Stegosaurus() */

void __thiscall
DinosaurAnimRig_Stegosaurus::~DinosaurAnimRig_Stegosaurus(DinosaurAnimRig_Stegosaurus *this)

{
  ~DinosaurAnimRig_Stegosaurus(this + -0x10);
  return;
}


/* DinosaurAnimRig_Stegosaurus::DinosaurAnimRig_Stegosaurus() */

void __thiscall
DinosaurAnimRig_Stegosaurus::DinosaurAnimRig_Stegosaurus(DinosaurAnimRig_Stegosaurus *this)

{
  CreatureAnimRig::CreatureAnimRig((CreatureAnimRig *)this);
  this[0x22c] = (DinosaurAnimRig_Stegosaurus)0x0;
  *(undefined ***)this = &PTR_GetClass_069051e0;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurAnimRig_Stegosaurus_06905330;
  this[0x22d] = (DinosaurAnimRig_Stegosaurus)0x1;
  return;
}


/* DinosaurAnimRig_Stegosaurus::StaticNew() */

DinosaurAnimRig_Stegosaurus * DinosaurAnimRig_Stegosaurus::StaticNew(void)

{
  DinosaurAnimRig_Stegosaurus *this;
  
  this = ::operator_new(0x230);
  DinosaurAnimRig_Stegosaurus(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig_Stegosaurus::StaticClassInit() */

void DinosaurAnimRig_Stegosaurus::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinosaurAnimRig_Stegosaurus");
    (*pcVar2)(plVar1,asStack_10,FUN_048260a0,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurAnimRig_Stegosaurus::StaticGetClass() */

long * DinosaurAnimRig_Stegosaurus::StaticGetClass(void)

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
  uVar2 = CreatureAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurAnimRig_Stegosaurus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurAnimRig_Stegosaurus::GetClass() const */

long * DinosaurAnimRig_Stegosaurus::GetClass(void)

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
  uVar2 = CreatureAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurAnimRig_Stegosaurus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig_Stegosaurus::PlayEnterAnimation(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
DinosaurAnimRig_Stegosaurus::PlayEnterAnimation
          (DinosaurAnimRig_Stegosaurus *this,RtReflectionDelegate *param_2)

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
  if (this[0x22d] == (DinosaurAnimRig_Stegosaurus)0x0) {
    if (this[0x22c] == (DinosaurAnimRig_Stegosaurus)0x0) {
      std::string::append(asStack_58,"tail_enter",(size_t)__n);
    }
    else {
      std::string::append(asStack_58,"tail_charmed_enter",(size_t)__n);
    }
  }
  else {
    std::string::append(asStack_58,"head_enter",(size_t)__n);
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
/* DinosaurAnimRig_Stegosaurus::DoCharmAnimation(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
DinosaurAnimRig_Stegosaurus::DoCharmAnimation
          (DinosaurAnimRig_Stegosaurus *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_0482515c(this + 0x22c);
  std::string::string(asStack_58,"head_charmed_activate");
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
/* DinosaurAnimRig_Stegosaurus::PlayIdleAnimation(RtReflectionDelegate<Sexy::Delegate3<std::string
   const&, std::string const&, int> >) */

void __thiscall
DinosaurAnimRig_Stegosaurus::PlayIdleAnimation
          (DinosaurAnimRig_Stegosaurus *this,RtReflectionDelegate *param_2)

{
  char *__s;
  undefined1 *__n;
  undefined1 auStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  __n = auStack_60;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"");
  nop();
  if (this[0x22d] == (DinosaurAnimRig_Stegosaurus)0x0) {
    if (this[0x22c] == (DinosaurAnimRig_Stegosaurus)0x0) {
      __s = "tail_idle";
    }
    else {
      __s = "tail_idle_charmed";
    }
  }
  else if (this[0x22c] == (DinosaurAnimRig_Stegosaurus)0x0) {
    __s = "idle_head";
  }
  else {
    __s = "head_idle_charmed";
  }
  std::string::append(asStack_58,__s,(size_t)__n);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50,param_2);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_58,3,aRStack_50);
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
/* DinosaurAnimRig_Stegosaurus::PlayAnnoyedAnimation(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
DinosaurAnimRig_Stegosaurus::PlayAnnoyedAnimation
          (DinosaurAnimRig_Stegosaurus *this,RtReflectionDelegate *param_2)

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
  if (this[0x22c] == (DinosaurAnimRig_Stegosaurus)0x0) {
    std::string::append(asStack_58,"annoyed",(size_t)__n);
  }
  else {
    std::string::append(asStack_58,"annoyed_charmed",(size_t)__n);
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
/* DinosaurAnimRig_Stegosaurus::PlayExitAnimation(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
DinosaurAnimRig_Stegosaurus::PlayExitAnimation
          (DinosaurAnimRig_Stegosaurus *this,RtReflectionDelegate *param_2)

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
  if (this[0x22d] == (DinosaurAnimRig_Stegosaurus)0x0) {
    if (this[0x22c] == (DinosaurAnimRig_Stegosaurus)0x0) {
      std::string::append(asStack_58,"tail_exit",(size_t)__n);
    }
    else {
      std::string::append(asStack_58,"tail_exit_charmed",(size_t)__n);
    }
  }
  else if (this[0x22c] == (DinosaurAnimRig_Stegosaurus)0x0) {
    std::string::append(asStack_58,"head_exit",(size_t)__n);
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
/* DinosaurAnimRig_Stegosaurus::PlayAttackAnimation(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
DinosaurAnimRig_Stegosaurus::PlayAttackAnimation
          (DinosaurAnimRig_Stegosaurus *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x22c] == (DinosaurAnimRig_Stegosaurus)0x0) {
    std::string::string(asStack_58,"tail_flip");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,param_2);
  }
  else {
    std::string::string(asStack_58,"tail_smash_charmed");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,param_2);
  }
  PopAnimRig::PlayAndStop
            ((PopAnimRig *)this,asStack_58,0,
             (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
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

