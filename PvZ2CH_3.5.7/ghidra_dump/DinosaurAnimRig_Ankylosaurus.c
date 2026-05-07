// Class: DinosaurAnimRig_Ankylosaurus


/* DinosaurAnimRig_Ankylosaurus::~DinosaurAnimRig_Ankylosaurus() */

void __thiscall
DinosaurAnimRig_Ankylosaurus::~DinosaurAnimRig_Ankylosaurus(DinosaurAnimRig_Ankylosaurus *this)

{
  *(undefined ***)this = &PTR_GetClass_06904550;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurAnimRig_Ankylosaurus_069046a0;
  CreatureAnimRig::~CreatureAnimRig((CreatureAnimRig *)this);
  return;
}


/* non-virtual thunk to DinosaurAnimRig_Ankylosaurus::~DinosaurAnimRig_Ankylosaurus() */

void __thiscall
DinosaurAnimRig_Ankylosaurus::~DinosaurAnimRig_Ankylosaurus(DinosaurAnimRig_Ankylosaurus *this)

{
  ~DinosaurAnimRig_Ankylosaurus(this + -0x10);
  return;
}


/* DinosaurAnimRig_Ankylosaurus::~DinosaurAnimRig_Ankylosaurus() */

void __thiscall
DinosaurAnimRig_Ankylosaurus::~DinosaurAnimRig_Ankylosaurus(DinosaurAnimRig_Ankylosaurus *this)

{
  ~DinosaurAnimRig_Ankylosaurus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DinosaurAnimRig_Ankylosaurus::~DinosaurAnimRig_Ankylosaurus() */

void __thiscall
DinosaurAnimRig_Ankylosaurus::~DinosaurAnimRig_Ankylosaurus(DinosaurAnimRig_Ankylosaurus *this)

{
  ~DinosaurAnimRig_Ankylosaurus(this + -0x10);
  return;
}


/* DinosaurAnimRig_Ankylosaurus::DinosaurAnimRig_Ankylosaurus() */

void __thiscall
DinosaurAnimRig_Ankylosaurus::DinosaurAnimRig_Ankylosaurus(DinosaurAnimRig_Ankylosaurus *this)

{
  CreatureAnimRig::CreatureAnimRig((CreatureAnimRig *)this);
  this[0x22c] = (DinosaurAnimRig_Ankylosaurus)0x0;
  *(undefined ***)this = &PTR_GetClass_06904550;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurAnimRig_Ankylosaurus_069046a0;
  return;
}


/* DinosaurAnimRig_Ankylosaurus::StaticNew() */

DinosaurAnimRig_Ankylosaurus * DinosaurAnimRig_Ankylosaurus::StaticNew(void)

{
  DinosaurAnimRig_Ankylosaurus *this;
  
  this = ::operator_new(0x230);
  DinosaurAnimRig_Ankylosaurus(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig_Ankylosaurus::StaticClassInit() */

void DinosaurAnimRig_Ankylosaurus::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinosaurAnimRig_Ankylosaurus");
    (*pcVar2)(plVar1,asStack_10,FUN_0481f4f0,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurAnimRig_Ankylosaurus::StaticGetClass() */

long * DinosaurAnimRig_Ankylosaurus::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurAnimRig_Ankylosaurus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurAnimRig_Ankylosaurus::GetClass() const */

long * DinosaurAnimRig_Ankylosaurus::GetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurAnimRig_Ankylosaurus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig_Ankylosaurus::PlayEnterAnimation(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
DinosaurAnimRig_Ankylosaurus::PlayEnterAnimation
          (DinosaurAnimRig_Ankylosaurus *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"enter");
  nop();
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
/* DinosaurAnimRig_Ankylosaurus::DoCharmAnimation(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
DinosaurAnimRig_Ankylosaurus::DoCharmAnimation
          (DinosaurAnimRig_Ankylosaurus *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  this[0x22c] = (DinosaurAnimRig_Ankylosaurus)0x1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"idle_1_charmed_activate");
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
/* DinosaurAnimRig_Ankylosaurus::PlayIdleAnimation(RtReflectionDelegate<Sexy::Delegate3<std::string
   const&, std::string const&, int> >) */

void __thiscall
DinosaurAnimRig_Ankylosaurus::PlayIdleAnimation
          (DinosaurAnimRig_Ankylosaurus *this,RtReflectionDelegate *param_2)

{
  char *__s;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x22c] == (DinosaurAnimRig_Ankylosaurus)0x0) {
    __s = "idle_";
  }
  else {
    __s = "idle_1_charmed";
  }
  std::string::string(asStack_58,__s);
  nop();
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
/* DinosaurAnimRig_Ankylosaurus::PlayExitAnimation(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
DinosaurAnimRig_Ankylosaurus::PlayExitAnimation
          (DinosaurAnimRig_Ankylosaurus *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"exit");
  nop();
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
/* DinosaurAnimRig_Ankylosaurus::PlayAttackAnimation(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
DinosaurAnimRig_Ankylosaurus::PlayAttackAnimation
          (DinosaurAnimRig_Ankylosaurus *this,RtReflectionDelegate *param_2)

{
  char *__s;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x22c] == (DinosaurAnimRig_Ankylosaurus)0x0) {
    __s = "attack";
  }
  else {
    __s = "attack_charmed";
  }
  std::string::string(asStack_58,__s);
  nop();
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

