// Class: PlantAnimRig_CeleryStalker


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_CeleryStalker::LoopAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_CeleryStalker::LoopAttack
          (PlantAnimRig_CeleryStalker *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack_loop");
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
/* PlantAnimRig_CeleryStalker::getIdleAnimationName() */

void PlantAnimRig_CeleryStalker::getIdleAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3b8) == '\0') {
    __s = "IDLE";
  }
  else {
    __s = "IDLE_DOWN";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_CeleryStalker::~PlantAnimRig_CeleryStalker() */

void __thiscall
PlantAnimRig_CeleryStalker::~PlantAnimRig_CeleryStalker(PlantAnimRig_CeleryStalker *this)

{
  *(undefined ***)this = &PTR_GetClass_067f2880;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_CeleryStalker_067f2ae8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_CeleryStalker::~PlantAnimRig_CeleryStalker() */

void __thiscall
PlantAnimRig_CeleryStalker::~PlantAnimRig_CeleryStalker(PlantAnimRig_CeleryStalker *this)

{
  ~PlantAnimRig_CeleryStalker(this + -0x10);
  return;
}


/* PlantAnimRig_CeleryStalker::~PlantAnimRig_CeleryStalker() */

void __thiscall
PlantAnimRig_CeleryStalker::~PlantAnimRig_CeleryStalker(PlantAnimRig_CeleryStalker *this)

{
  ~PlantAnimRig_CeleryStalker(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_CeleryStalker::~PlantAnimRig_CeleryStalker() */

void __thiscall
PlantAnimRig_CeleryStalker::~PlantAnimRig_CeleryStalker(PlantAnimRig_CeleryStalker *this)

{
  ~PlantAnimRig_CeleryStalker(this + -0x10);
  return;
}


/* PlantAnimRig_CeleryStalker::PlantAnimRig_CeleryStalker() */

void __thiscall
PlantAnimRig_CeleryStalker::PlantAnimRig_CeleryStalker(PlantAnimRig_CeleryStalker *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_CeleryStalker)0x1;
  *(undefined ***)this = &PTR_GetClass_067f2880;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_CeleryStalker_067f2ae8;
  return;
}


/* PlantAnimRig_CeleryStalker::StaticNew() */

PlantAnimRig_CeleryStalker * PlantAnimRig_CeleryStalker::StaticNew(void)

{
  PlantAnimRig_CeleryStalker *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_CeleryStalker(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_CeleryStalker::StaticClassInit() */

void PlantAnimRig_CeleryStalker::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_CeleryStalker");
    (*pcVar2)(plVar1,asStack_10,FUN_0415ee30,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_CeleryStalker::StaticGetClass() */

long * PlantAnimRig_CeleryStalker::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_CeleryStalker",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_CeleryStalker::GetClass() const */

long * PlantAnimRig_CeleryStalker::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_CeleryStalker",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_CeleryStalker::Submerge(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_CeleryStalker::Submerge(PlantAnimRig_CeleryStalker *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"down");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  this[0x3b8] = (PlantAnimRig_CeleryStalker)0x1;
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_CeleryStalker::Emerge(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_CeleryStalker::Emerge(PlantAnimRig_CeleryStalker *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"up");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  this[0x3b8] = (PlantAnimRig_CeleryStalker)0x0;
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_CeleryStalker::StartAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_CeleryStalker::StartAttack
          (PlantAnimRig_CeleryStalker *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,3,aRStack_50);
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
/* PlantAnimRig_CeleryStalker::SpecialAttack(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_CeleryStalker::SpecialAttack
          (PlantAnimRig_CeleryStalker *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack_special");
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
/* PlantAnimRig_CeleryStalker::hideAllDamage() */

void __thiscall PlantAnimRig_CeleryStalker::hideAllDamage(PlantAnimRig_CeleryStalker *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"celery_wally_arm_undamaged");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"celery_wally_arm_lower_undamaged");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"celery_wally_arm_damaged1");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"celery_wally_arm_lower_damaged1");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"celery_wally_arm_damaged2");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"celery_wally_arm_lower_damaged2");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_CeleryStalker::ShowDamaged0() */

void __thiscall PlantAnimRig_CeleryStalker::ShowDamaged0(PlantAnimRig_CeleryStalker *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  hideAllDamage(this);
  std::string::string(asStack_10,"celery_wally_arm_undamaged");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"celery_wally_arm_lower_undamaged");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_CeleryStalker::ShowDamaged1() */

void __thiscall PlantAnimRig_CeleryStalker::ShowDamaged1(PlantAnimRig_CeleryStalker *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  hideAllDamage(this);
  std::string::string(asStack_10,"celery_wally_arm_damaged1");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"celery_wally_arm_lower_damaged1");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_CeleryStalker::ShowDamaged2() */

void __thiscall PlantAnimRig_CeleryStalker::ShowDamaged2(PlantAnimRig_CeleryStalker *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  hideAllDamage(this);
  std::string::string(asStack_10,"celery_wally_arm_damaged2");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"celery_wally_arm_lower_damaged2");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_CeleryStalker::onPopAnimInitialized() */

void __thiscall PlantAnimRig_CeleryStalker::onPopAnimInitialized(PlantAnimRig_CeleryStalker *this)

{
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  ShowDamaged0(this);
  this[0x3b8] = (PlantAnimRig_CeleryStalker)0x1;
  return;
}

