// Class: DinosaurAnimRig_Runner


/* DinosaurAnimRig_Runner::~DinosaurAnimRig_Runner() */

void __thiscall DinosaurAnimRig_Runner::~DinosaurAnimRig_Runner(DinosaurAnimRig_Runner *this)

{
  *(undefined ***)this = &PTR_GetClass_069076c0;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurAnimRig_Runner_06907810;
  CreatureAnimRig::~CreatureAnimRig((CreatureAnimRig *)this);
  return;
}


/* non-virtual thunk to DinosaurAnimRig_Runner::~DinosaurAnimRig_Runner() */

void __thiscall DinosaurAnimRig_Runner::~DinosaurAnimRig_Runner(DinosaurAnimRig_Runner *this)

{
  ~DinosaurAnimRig_Runner(this + -0x10);
  return;
}


/* DinosaurAnimRig_Runner::~DinosaurAnimRig_Runner() */

void __thiscall DinosaurAnimRig_Runner::~DinosaurAnimRig_Runner(DinosaurAnimRig_Runner *this)

{
  ~DinosaurAnimRig_Runner(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DinosaurAnimRig_Runner::~DinosaurAnimRig_Runner() */

void __thiscall DinosaurAnimRig_Runner::~DinosaurAnimRig_Runner(DinosaurAnimRig_Runner *this)

{
  ~DinosaurAnimRig_Runner(this + -0x10);
  return;
}


/* DinosaurAnimRig_Runner::DinosaurAnimRig_Runner() */

void __thiscall DinosaurAnimRig_Runner::DinosaurAnimRig_Runner(DinosaurAnimRig_Runner *this)

{
  CreatureAnimRig::CreatureAnimRig((CreatureAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069076c0;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurAnimRig_Runner_06907810;
  return;
}


/* DinosaurAnimRig_Runner::StaticNew() */

DinosaurAnimRig_Runner * DinosaurAnimRig_Runner::StaticNew(void)

{
  DinosaurAnimRig_Runner *this;
  
  this = ::operator_new(0x230);
  DinosaurAnimRig_Runner(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig_Runner::StaticClassInit() */

void DinosaurAnimRig_Runner::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinosaurAnimRig_Runner");
    (*pcVar2)(plVar1,asStack_10,FUN_04833a68,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurAnimRig_Runner::StaticGetClass() */

long * DinosaurAnimRig_Runner::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurAnimRig_Runner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurAnimRig_Runner::GetClass() const */

long * DinosaurAnimRig_Runner::GetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurAnimRig_Runner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig_Runner::PlayRunLeft(RtReflectionDelegate<Sexy::Delegate3<std::string const&,
   std::string const&, int> >) */

void __thiscall
DinosaurAnimRig_Runner::PlayRunLeft(DinosaurAnimRig_Runner *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"run_in");
  nop();
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
/* DinosaurAnimRig_Runner::PlayTurnLeftToRight(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
DinosaurAnimRig_Runner::PlayTurnLeftToRight
          (DinosaurAnimRig_Runner *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"stop");
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
/* DinosaurAnimRig_Runner::PlayRunRight(RtReflectionDelegate<Sexy::Delegate3<std::string const&,
   std::string const&, int> >) */

void __thiscall
DinosaurAnimRig_Runner::PlayRunRight(DinosaurAnimRig_Runner *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"run_out");
  nop();
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

