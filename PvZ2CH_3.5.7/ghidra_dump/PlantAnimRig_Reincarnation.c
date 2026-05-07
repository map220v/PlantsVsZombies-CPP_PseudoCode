// Class: PlantAnimRig_Reincarnation


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Reincarnation::PlayPreviewAnim(bool) */

void PlantAnimRig_Reincarnation::PlayPreviewAnim(bool param_1)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"idle3");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* PlantAnimRig_Reincarnation::onInitialized() */

void __thiscall PlantAnimRig_Reincarnation::onInitialized(PlantAnimRig_Reincarnation *this)

{
  *(undefined4 *)(this + 0x418) = 1;
  return;
}


/* PlantAnimRig_Reincarnation::~PlantAnimRig_Reincarnation() */

void __thiscall
PlantAnimRig_Reincarnation::~PlantAnimRig_Reincarnation(PlantAnimRig_Reincarnation *this)

{
  *(undefined ***)this = &PTR_GetClass_068171f0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Reincarnation_06817458;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Reincarnation::~PlantAnimRig_Reincarnation() */

void __thiscall
PlantAnimRig_Reincarnation::~PlantAnimRig_Reincarnation(PlantAnimRig_Reincarnation *this)

{
  ~PlantAnimRig_Reincarnation(this + -0x10);
  return;
}


/* PlantAnimRig_Reincarnation::~PlantAnimRig_Reincarnation() */

void __thiscall
PlantAnimRig_Reincarnation::~PlantAnimRig_Reincarnation(PlantAnimRig_Reincarnation *this)

{
  ~PlantAnimRig_Reincarnation(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Reincarnation::~PlantAnimRig_Reincarnation() */

void __thiscall
PlantAnimRig_Reincarnation::~PlantAnimRig_Reincarnation(PlantAnimRig_Reincarnation *this)

{
  ~PlantAnimRig_Reincarnation(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Reincarnation::StaticClassInit() */

void PlantAnimRig_Reincarnation::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Reincarnation");
    (*pcVar2)(plVar1,asStack_10,FUN_04249e08,0x420,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Reincarnation::StaticGetClass() */

long * PlantAnimRig_Reincarnation::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Reincarnation",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Reincarnation::GetClass() const */

long * PlantAnimRig_Reincarnation::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Reincarnation",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Reincarnation::SetPlantDelegates(Sexy::Delegate1<float>, Sexy::Delegate1<float>,
   Sexy::Delegate1<float>, Sexy::Delegate1<float>) */

void __thiscall
PlantAnimRig_Reincarnation::SetPlantDelegates
          (PlantAnimRig_Reincarnation *this,Delegate1 *param_2,Delegate1 *param_3,Delegate2 *param_4
          ,Delegate2 *param_5)

{
  Delegate1<float> aDStack_68 [48];
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate1<float>::Delegate1(aDStack_68,param_2);
  Sexy::Delegate1<float>::Delegate1(aDStack_38,param_3);
  PlantAnimRig::SetPlantDelegates((PlantAnimRig *)this,aDStack_68,aDStack_38);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x3b8),param_4);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 1000),param_5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Reincarnation::PlayPlantFoodStart(int) */

void PlantAnimRig_Reincarnation::PlayPlantFoodStart(int param_1)

{
  int iVar1;
  PopAnimRig *pPVar2;
  code *pcVar3;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  pPVar2 = (PopAnimRig *)(ulong)(uint)param_1;
  pcVar3 = *(code **)(*(long *)pPVar2 + 0x200);
  *(undefined4 *)(pPVar2 + 0x418) = 3;
  local_8 = ___stack_chk_guard;
  (*pcVar3)(asStack_40);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop(pPVar2,asStack_40,0,aDStack_38);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)pPVar2,0xe);
  }
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* PlantAnimRig_Reincarnation::PlantAnimRig_Reincarnation() */

void __thiscall
PlantAnimRig_Reincarnation::PlantAnimRig_Reincarnation(PlantAnimRig_Reincarnation *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068171f0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Reincarnation_06817458;
  Sexy::Delegate1<float>::Delegate1((DummyInit *)(this + 0x3b8));
  Sexy::Delegate1<float>::Delegate1((DummyInit *)(this + 1000));
  return;
}


/* PlantAnimRig_Reincarnation::StaticNew() */

PlantAnimRig_Reincarnation * PlantAnimRig_Reincarnation::StaticNew(void)

{
  PlantAnimRig_Reincarnation *this;
  
  this = ::operator_new(0x420);
  PlantAnimRig_Reincarnation(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Reincarnation::getIdleAnimationName() */

void PlantAnimRig_Reincarnation::getIdleAnimationName(void)

{
  long in_x0;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"idle");
  std::to_string<ActivityTypeID>((ActivityTypeID *)(in_x0 + 0x418));
  std::operator+(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Reincarnation::getAttackStartAnimationName() */

void PlantAnimRig_Reincarnation::getAttackStartAnimationName(void)

{
  long in_x0;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"playattack");
  std::to_string<ActivityTypeID>((ActivityTypeID *)(in_x0 + 0x418));
  std::operator+(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Reincarnation::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_Reincarnation::PlayAttack
          (PlantAnimRig_Reincarnation *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getAttackStartAnimationName();
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Reincarnation::getPuffAnimationName(int) */

void PlantAnimRig_Reincarnation::getPuffAnimationName(int param_1)

{
  ActivityTypeID local_24 [12];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"transition");
  std::to_string<ActivityTypeID>(local_24);
  std::operator+(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Reincarnation::PlayPuff(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >,
   int) */

void __thiscall
PlantAnimRig_Reincarnation::PlayPuff
          (PlantAnimRig_Reincarnation *this,RtReflectionDelegate *param_2,undefined4 param_3)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  *(undefined4 *)(this + 0x418) = param_3;
  local_8 = ___stack_chk_guard;
  getPuffAnimationName((int)this);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Reincarnation::PlayInitialFrame() */

void __thiscall PlantAnimRig_Reincarnation::PlayInitialFrame(PlantAnimRig_Reincarnation *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"idle1");
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
/* PlantAnimRig_Reincarnation::onPopAnimCommand(float, std::string const&, std::string const&) */

void PlantAnimRig_Reincarnation::onPopAnimCommand(float param_1,string *param_2,string *param_3)

{
  bool bVar1;
  int iVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10);
  iVar2 = FUN_04249a20(*(undefined8 *)(param_2 + 0x270),*(undefined8 *)(param_2 + 0x280));
  if ((iVar2 == 0) || (bVar1 = std::operator==(asStack_10,"use_action"), !bVar1)) {
    bVar1 = std::operator==(asStack_10,"use_attack");
    if (bVar1) {
      Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn
                ((RtInvokeVariant *)(param_2 + 0x3b8));
    }
    else {
      bVar1 = std::operator==(asStack_10,"use_wind");
      if (bVar1) {
        Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn
                  ((RtInvokeVariant *)(param_2 + 1000));
      }
      else {
        PlantAnimRig::onPopAnimCommand(param_1,param_2,param_3);
      }
    }
  }
  else {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(param_2 + 0x268));
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

