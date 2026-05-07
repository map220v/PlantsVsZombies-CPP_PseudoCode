// Class: PlantAnimRig_JackOLantern


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_JackOLantern::PlayAttackStart(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_JackOLantern::PlayAttackStart
          (PlantAnimRig_JackOLantern *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack_start");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_JackOLantern::PlayAttackEnd(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_JackOLantern::PlayAttackEnd
          (PlantAnimRig_JackOLantern *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack_end");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_JackOLantern::~PlantAnimRig_JackOLantern() */

void __thiscall
PlantAnimRig_JackOLantern::~PlantAnimRig_JackOLantern(PlantAnimRig_JackOLantern *this)

{
  *(undefined ***)this = &PTR_GetClass_069a5a50;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_JackOLantern_069a5cb8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_JackOLantern::~PlantAnimRig_JackOLantern() */

void __thiscall
PlantAnimRig_JackOLantern::~PlantAnimRig_JackOLantern(PlantAnimRig_JackOLantern *this)

{
  ~PlantAnimRig_JackOLantern(this + -0x10);
  return;
}


/* PlantAnimRig_JackOLantern::~PlantAnimRig_JackOLantern() */

void __thiscall
PlantAnimRig_JackOLantern::~PlantAnimRig_JackOLantern(PlantAnimRig_JackOLantern *this)

{
  ~PlantAnimRig_JackOLantern(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_JackOLantern::~PlantAnimRig_JackOLantern() */

void __thiscall
PlantAnimRig_JackOLantern::~PlantAnimRig_JackOLantern(PlantAnimRig_JackOLantern *this)

{
  ~PlantAnimRig_JackOLantern(this + -0x10);
  return;
}


/* PlantAnimRig_JackOLantern::PlantAnimRig_JackOLantern() */

void __thiscall
PlantAnimRig_JackOLantern::PlantAnimRig_JackOLantern(PlantAnimRig_JackOLantern *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069a5a50;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_JackOLantern_069a5cb8;
  return;
}


/* PlantAnimRig_JackOLantern::StaticNew() */

PlantAnimRig_JackOLantern * PlantAnimRig_JackOLantern::StaticNew(void)

{
  PlantAnimRig_JackOLantern *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_JackOLantern(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_JackOLantern::StaticClassInit() */

void PlantAnimRig_JackOLantern::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_JackOLantern");
    (*pcVar2)(plVar1,asStack_10,FUN_04cfbaac,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_JackOLantern::StaticGetClass() */

long * PlantAnimRig_JackOLantern::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_JackOLantern",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_JackOLantern::GetClass() const */

long * PlantAnimRig_JackOLantern::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_JackOLantern",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_JackOLantern::PlayEmptyStart(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_JackOLantern::PlayEmptyStart
          (PlantAnimRig_JackOLantern *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"empty_state_start");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_JackOLantern::PlayEmptyEnd(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_JackOLantern::PlayEmptyEnd
          (PlantAnimRig_JackOLantern *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"empty_state_end");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_JackOLantern::PlayAttackLoop() */

void __thiscall PlantAnimRig_JackOLantern::PlayAttackLoop(PlantAnimRig_JackOLantern *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack_loop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_JackOLantern::PlayEmptyLoop() */

void __thiscall PlantAnimRig_JackOLantern::PlayEmptyLoop(PlantAnimRig_JackOLantern *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"empty_state_loop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_JackOLantern::getPreviewAnimName() */

void __thiscall PlantAnimRig_JackOLantern::getPreviewAnimName(PlantAnimRig_JackOLantern *this)

{
  string asStack_40 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  std::string::string(asStack_40,"idle_zen");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,1);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"idle2_zen");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,1);
  std::string::~string(asStack_40);
  nop();
  ProbabilitySet<std::string>::PickItem();
  FUN_05475d88();
  std::string::~string(asStack_40);
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_JackOLantern::PlayPreviewAnim(bool) */

void PlantAnimRig_JackOLantern::PlayPreviewAnim(bool param_1)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getPreviewAnimName((PlantAnimRig_JackOLantern *)(ulong)param_1);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)(ulong)param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_JackOLantern::onPopAnimInitialized() */

void __thiscall PlantAnimRig_JackOLantern::onPopAnimInitialized(PlantAnimRig_JackOLantern *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  std::string::string(asStack_10,"jack_flame_tag");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

