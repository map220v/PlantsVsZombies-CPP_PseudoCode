// Class: PlantAnimRig_SnapPea


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SnapPea::getPlantFoodOffAnimName() */

void __thiscall PlantAnimRig_SnapPea::getPlantFoodOffAnimName(PlantAnimRig_SnapPea *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"head_fire_pf_end");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SnapPea::getPlantFoodMainAnimName() */

void __thiscall PlantAnimRig_SnapPea::getPlantFoodMainAnimName(PlantAnimRig_SnapPea *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"head_fire_pf_loop");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SnapPea::getPlantFoodOnAnimName() */

void __thiscall PlantAnimRig_SnapPea::getPlantFoodOnAnimName(PlantAnimRig_SnapPea *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"head_fire_pf_start");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_SnapPea::~PlantAnimRig_SnapPea() */

void __thiscall PlantAnimRig_SnapPea::~PlantAnimRig_SnapPea(PlantAnimRig_SnapPea *this)

{
  *(undefined ***)this = &PTR_GetClass_06826e90;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_SnapPea_068270f8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_SnapPea::~PlantAnimRig_SnapPea() */

void __thiscall PlantAnimRig_SnapPea::~PlantAnimRig_SnapPea(PlantAnimRig_SnapPea *this)

{
  ~PlantAnimRig_SnapPea(this + -0x10);
  return;
}


/* PlantAnimRig_SnapPea::~PlantAnimRig_SnapPea() */

void __thiscall PlantAnimRig_SnapPea::~PlantAnimRig_SnapPea(PlantAnimRig_SnapPea *this)

{
  ~PlantAnimRig_SnapPea(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_SnapPea::~PlantAnimRig_SnapPea() */

void __thiscall PlantAnimRig_SnapPea::~PlantAnimRig_SnapPea(PlantAnimRig_SnapPea *this)

{
  ~PlantAnimRig_SnapPea(this + -0x10);
  return;
}


/* PlantAnimRig_SnapPea::PlantAnimRig_SnapPea() */

void __thiscall PlantAnimRig_SnapPea::PlantAnimRig_SnapPea(PlantAnimRig_SnapPea *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06826e90;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_SnapPea_068270f8;
  return;
}


/* PlantAnimRig_SnapPea::StaticNew() */

PlantAnimRig_SnapPea * PlantAnimRig_SnapPea::StaticNew(void)

{
  PlantAnimRig_SnapPea *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_SnapPea(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SnapPea::StaticClassInit() */

void PlantAnimRig_SnapPea::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_SnapPea");
    (*pcVar2)(plVar1,asStack_10,FUN_0428f87c,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_SnapPea::StaticGetClass() */

long * PlantAnimRig_SnapPea::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_SnapPea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_SnapPea::GetClass() const */

long * PlantAnimRig_SnapPea::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_SnapPea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SnapPea::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_SnapPea::PlayAttack(PlantAnimRig_SnapPea *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"head_fire");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SnapPea::PlayBurrowStart(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_SnapPea::PlayBurrowStart(PlantAnimRig_SnapPea *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"burrow_start");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SnapPea::PlayBurrowReturnChewing(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_SnapPea::PlayBurrowReturnChewing
          (PlantAnimRig_SnapPea *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"burrow_return_chewing");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SnapPea::PlayBurrowReturnIdle(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_SnapPea::PlayBurrowReturnIdle(PlantAnimRig_SnapPea *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"burrow_return_idle");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SnapPea::PlayBurrowIdle() */

void __thiscall PlantAnimRig_SnapPea::PlayBurrowIdle(PlantAnimRig_SnapPea *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"burrow_idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_SnapPea::PlayChewingIdle() */

void __thiscall PlantAnimRig_SnapPea::PlayChewingIdle(PlantAnimRig_SnapPea *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"chewing_loop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* PlantAnimRig_SnapPea::onPopAnimCommand(float, std::string const&, std::string const&) */

void PlantAnimRig_SnapPea::onPopAnimCommand(float param_1,string *param_2,string *param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_0428f05c(*(undefined8 *)(param_2 + 0x270),*(undefined8 *)(param_2 + 0x280));
  if (iVar2 != 0) {
    bVar1 = std::operator==(param_3,"fire_action");
    if (bVar1) {
      Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn
                ((RtInvokeVariant *)(param_2 + 0x268));
      return;
    }
  }
  PlantAnimRig::onPopAnimCommand(param_1,param_2,param_3);
  return;
}

