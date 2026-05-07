// Class: DinosaurAnimRig_Younger


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig_Younger::PlayGrabIdle(RtReflectionDelegate<Sexy::Delegate3<std::string const&,
   std::string const&, int> >) */

void __thiscall
DinosaurAnimRig_Younger::PlayGrabIdle(DinosaurAnimRig_Younger *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"grab_idle");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50,param_2);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_58,0,aRStack_50);
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
/* DinosaurAnimRig_Younger::getWakeAnimationName() */

void __thiscall DinosaurAnimRig_Younger::getWakeAnimationName(DinosaurAnimRig_Younger *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"wake");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig_Younger::getCaughtAnimationName() */

void __thiscall DinosaurAnimRig_Younger::getCaughtAnimationName(DinosaurAnimRig_Younger *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"grab");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig_Younger::getCaughtFlyAnimationName() */

void __thiscall DinosaurAnimRig_Younger::getCaughtFlyAnimationName(DinosaurAnimRig_Younger *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"grab_idle");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* DinosaurAnimRig_Younger::~DinosaurAnimRig_Younger() */

void __thiscall DinosaurAnimRig_Younger::~DinosaurAnimRig_Younger(DinosaurAnimRig_Younger *this)

{
  *(undefined ***)this = &PTR_GetClass_06905f10;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurAnimRig_Younger_06906080;
  CreatureAnimRig::~CreatureAnimRig((CreatureAnimRig *)this);
  return;
}


/* non-virtual thunk to DinosaurAnimRig_Younger::~DinosaurAnimRig_Younger() */

void __thiscall DinosaurAnimRig_Younger::~DinosaurAnimRig_Younger(DinosaurAnimRig_Younger *this)

{
  ~DinosaurAnimRig_Younger(this + -0x10);
  return;
}


/* DinosaurAnimRig_Younger::~DinosaurAnimRig_Younger() */

void __thiscall DinosaurAnimRig_Younger::~DinosaurAnimRig_Younger(DinosaurAnimRig_Younger *this)

{
  ~DinosaurAnimRig_Younger(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DinosaurAnimRig_Younger::~DinosaurAnimRig_Younger() */

void __thiscall DinosaurAnimRig_Younger::~DinosaurAnimRig_Younger(DinosaurAnimRig_Younger *this)

{
  ~DinosaurAnimRig_Younger(this + -0x10);
  return;
}


/* DinosaurAnimRig_Younger::DinosaurAnimRig_Younger() */

void __thiscall DinosaurAnimRig_Younger::DinosaurAnimRig_Younger(DinosaurAnimRig_Younger *this)

{
  CreatureAnimRig::CreatureAnimRig((CreatureAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06905f10;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurAnimRig_Younger_06906080;
  return;
}


/* DinosaurAnimRig_Younger::StaticNew() */

DinosaurAnimRig_Younger * DinosaurAnimRig_Younger::StaticNew(void)

{
  DinosaurAnimRig_Younger *this;
  
  this = ::operator_new(0x230);
  DinosaurAnimRig_Younger(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig_Younger::StaticClassInit() */

void DinosaurAnimRig_Younger::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinosaurAnimRig_Younger");
    (*pcVar2)(plVar1,asStack_10,FUN_0482f308,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurAnimRig_Younger::StaticGetClass() */

long * DinosaurAnimRig_Younger::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurAnimRig_Younger",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurAnimRig_Younger::GetClass() const */

long * DinosaurAnimRig_Younger::GetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurAnimRig_Younger",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig_Younger::PlaySleep(RtReflectionDelegate<Sexy::Delegate3<std::string const&,
   std::string const&, int> >) */

void __thiscall
DinosaurAnimRig_Younger::PlaySleep(DinosaurAnimRig_Younger *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x128))(asStack_58);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50,param_2);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_58,0,aRStack_50);
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
/* DinosaurAnimRig_Younger::PlayCaught(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
DinosaurAnimRig_Younger::PlayCaught(DinosaurAnimRig_Younger *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x150))(asStack_58);
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
/* DinosaurAnimRig_Younger::PlayCaughtFly(RtReflectionDelegate<Sexy::Delegate3<std::string const&,
   std::string const&, int> >) */

void __thiscall
DinosaurAnimRig_Younger::PlayCaughtFly(DinosaurAnimRig_Younger *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x158))(asStack_58);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50,param_2);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_58,0,aRStack_50);
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
/* DinosaurAnimRig_Younger::PlayCry(RtReflectionDelegate<Sexy::Delegate3<std::string const&,
   std::string const&, int> >) */

void __thiscall
DinosaurAnimRig_Younger::PlayCry(DinosaurAnimRig_Younger *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x148))(asStack_58);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50,param_2);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_58,0,aRStack_50);
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

