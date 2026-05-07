// Class: GridItemWizardCrucibleAnimRig


/* GridItemWizardCrucibleAnimRig::~GridItemWizardCrucibleAnimRig() */

void __thiscall
GridItemWizardCrucibleAnimRig::~GridItemWizardCrucibleAnimRig(GridItemWizardCrucibleAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_06994590;
  *(undefined ***)(this + 0x10) = &PTR__GridItemWizardCrucibleAnimRig_069946b0;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemWizardCrucibleAnimRig::~GridItemWizardCrucibleAnimRig() */

void __thiscall
GridItemWizardCrucibleAnimRig::~GridItemWizardCrucibleAnimRig(GridItemWizardCrucibleAnimRig *this)

{
  ~GridItemWizardCrucibleAnimRig(this + -0x10);
  return;
}


/* GridItemWizardCrucibleAnimRig::~GridItemWizardCrucibleAnimRig() */

void __thiscall
GridItemWizardCrucibleAnimRig::~GridItemWizardCrucibleAnimRig(GridItemWizardCrucibleAnimRig *this)

{
  ~GridItemWizardCrucibleAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemWizardCrucibleAnimRig::~GridItemWizardCrucibleAnimRig() */

void __thiscall
GridItemWizardCrucibleAnimRig::~GridItemWizardCrucibleAnimRig(GridItemWizardCrucibleAnimRig *this)

{
  ~GridItemWizardCrucibleAnimRig(this + -0x10);
  return;
}


/* GridItemWizardCrucibleAnimRig::GridItemWizardCrucibleAnimRig() */

void __thiscall
GridItemWizardCrucibleAnimRig::GridItemWizardCrucibleAnimRig(GridItemWizardCrucibleAnimRig *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06994590;
  *(undefined ***)(this + 0x10) = &PTR__GridItemWizardCrucibleAnimRig_069946b0;
  return;
}


/* GridItemWizardCrucibleAnimRig::StaticNew() */

GridItemWizardCrucibleAnimRig * GridItemWizardCrucibleAnimRig::StaticNew(void)

{
  GridItemWizardCrucibleAnimRig *this;
  
  this = ::operator_new(0x210);
  GridItemWizardCrucibleAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWizardCrucibleAnimRig::StaticClassInit() */

void GridItemWizardCrucibleAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemWizardCrucibleAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_04c865e4,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemWizardCrucibleAnimRig::StaticGetClass() */

long * GridItemWizardCrucibleAnimRig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemWizardCrucibleAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemWizardCrucibleAnimRig::GetClass() const */

long * GridItemWizardCrucibleAnimRig::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemWizardCrucibleAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWizardCrucibleAnimRig::PlayCrucibleDisabling(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
GridItemWizardCrucibleAnimRig::PlayCrucibleDisabling
          (GridItemWizardCrucibleAnimRig *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig_OlivePit::getPreviewAnimationName((PlantAnimRig_OlivePit *)this);
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
/* GridItemWizardCrucibleAnimRig::getActivatingAnimName() */

void __thiscall
GridItemWizardCrucibleAnimRig::getActivatingAnimName(GridItemWizardCrucibleAnimRig *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"boiling_start");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWizardCrucibleAnimRig::PlayCrucibleActivating(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
GridItemWizardCrucibleAnimRig::PlayCrucibleActivating
          (GridItemWizardCrucibleAnimRig *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getActivatingAnimName(this);
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
/* GridItemWizardCrucibleAnimRig::getActivatedAnimName() */

void __thiscall
GridItemWizardCrucibleAnimRig::getActivatedAnimName(GridItemWizardCrucibleAnimRig *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"boiling");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWizardCrucibleAnimRig::PlayCrucibleActivated() */

void __thiscall
GridItemWizardCrucibleAnimRig::PlayCrucibleActivated(GridItemWizardCrucibleAnimRig *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getActivatedAnimName(this);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

