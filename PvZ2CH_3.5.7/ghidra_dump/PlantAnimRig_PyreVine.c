// Class: PlantAnimRig_PyreVine


/* PlantAnimRig_PyreVine::onPopAnimInitialized() */

void __thiscall PlantAnimRig_PyreVine::onPopAnimInitialized(PlantAnimRig_PyreVine *this)

{
  *(undefined4 *)(this + 0x218) = 0;
  *(undefined4 *)(this + 0x228) = 0;
  *(undefined4 *)(this + 0x22c) = 0;
  PlantAnimRig::ClearPlantDelegates((PlantAnimRig *)this);
  PopAnimRig::onPopAnimInitialized((PopAnimRig *)this);
  PlantAnimRig::prepForCustomizableLayers((PlantAnimRig *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PyreVine::PlayLv5AttackStart(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_PyreVine::PlayLv5AttackStart(PlantAnimRig_PyreVine *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack_lv5");
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


/* PlantAnimRig_PyreVine::~PlantAnimRig_PyreVine() */

void __thiscall PlantAnimRig_PyreVine::~PlantAnimRig_PyreVine(PlantAnimRig_PyreVine *this)

{
  *(undefined ***)this = &PTR_GetClass_069abc20;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_PyreVine_069abe88;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_PyreVine::~PlantAnimRig_PyreVine() */

void __thiscall PlantAnimRig_PyreVine::~PlantAnimRig_PyreVine(PlantAnimRig_PyreVine *this)

{
  ~PlantAnimRig_PyreVine(this + -0x10);
  return;
}


/* PlantAnimRig_PyreVine::~PlantAnimRig_PyreVine() */

void __thiscall PlantAnimRig_PyreVine::~PlantAnimRig_PyreVine(PlantAnimRig_PyreVine *this)

{
  ~PlantAnimRig_PyreVine(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_PyreVine::~PlantAnimRig_PyreVine() */

void __thiscall PlantAnimRig_PyreVine::~PlantAnimRig_PyreVine(PlantAnimRig_PyreVine *this)

{
  ~PlantAnimRig_PyreVine(this + -0x10);
  return;
}


/* PlantAnimRig_PyreVine::PlantAnimRig_PyreVine() */

void __thiscall PlantAnimRig_PyreVine::PlantAnimRig_PyreVine(PlantAnimRig_PyreVine *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069abc20;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_PyreVine_069abe88;
  return;
}


/* PlantAnimRig_PyreVine::StaticNew() */

PlantAnimRig_PyreVine * PlantAnimRig_PyreVine::StaticNew(void)

{
  PlantAnimRig_PyreVine *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_PyreVine(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PyreVine::StaticClassInit() */

void PlantAnimRig_PyreVine::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_PyreVine");
    (*pcVar2)(plVar1,asStack_10,FUN_04d28cdc,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_PyreVine::StaticGetClass() */

long * PlantAnimRig_PyreVine::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_PyreVine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_PyreVine::GetClass() const */

long * PlantAnimRig_PyreVine::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_PyreVine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PyreVine::PlayAttackStart(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_PyreVine::PlayAttackStart(PlantAnimRig_PyreVine *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack");
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
/* PlantAnimRig_PyreVine::PlayAttackEnd(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_PyreVine::PlayAttackEnd(PlantAnimRig_PyreVine *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attackend");
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
/* PlantAnimRig_PyreVine::PlayPlantFood(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_PyreVine::PlayPlantFood(PlantAnimRig_PyreVine *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"plantfood");
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
/* PlantAnimRig_PyreVine::PlayPFLoop(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_PyreVine::PlayPFLoop(PlantAnimRig_PyreVine *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"plantfoodloop");
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
/* PlantAnimRig_PyreVine::PlayPFEnd(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_PyreVine::PlayPFEnd(PlantAnimRig_PyreVine *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"plantfoodend");
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
/* PlantAnimRig_PyreVine::PlayAttackLoop() */

void __thiscall PlantAnimRig_PyreVine::PlayAttackLoop(PlantAnimRig_PyreVine *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attackloop");
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
/* PlantAnimRig_PyreVine::getPreviewAnimName() */

void __thiscall PlantAnimRig_PyreVine::getPreviewAnimName(PlantAnimRig_PyreVine *this)

{
  string asStack_40 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  std::string::string(asStack_40,"idle");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,1);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"idle2");
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
/* PlantAnimRig_PyreVine::PlayPreviewAnim(bool) */

void PlantAnimRig_PyreVine::PlayPreviewAnim(bool param_1)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getPreviewAnimName((PlantAnimRig_PyreVine *)(ulong)param_1);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)(ulong)param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != 0);
}

