// Class: PlantAnimRig_TupistraStalker


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_TupistraStalker::getPlantFoodOffAnimName() */

void __thiscall
PlantAnimRig_TupistraStalker::getPlantFoodOffAnimName(PlantAnimRig_TupistraStalker *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"plantfood_off");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_TupistraStalker::getPlantFoodOnAnimName() */

void __thiscall
PlantAnimRig_TupistraStalker::getPlantFoodOnAnimName(PlantAnimRig_TupistraStalker *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"plantfood_on");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_TupistraStalker::~PlantAnimRig_TupistraStalker() */

void __thiscall
PlantAnimRig_TupistraStalker::~PlantAnimRig_TupistraStalker(PlantAnimRig_TupistraStalker *this)

{
  *(undefined ***)this = &PTR_GetClass_067f0d70;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_TupistraStalker_067f0fd8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_TupistraStalker::~PlantAnimRig_TupistraStalker() */

void __thiscall
PlantAnimRig_TupistraStalker::~PlantAnimRig_TupistraStalker(PlantAnimRig_TupistraStalker *this)

{
  ~PlantAnimRig_TupistraStalker(this + -0x10);
  return;
}


/* PlantAnimRig_TupistraStalker::~PlantAnimRig_TupistraStalker() */

void __thiscall
PlantAnimRig_TupistraStalker::~PlantAnimRig_TupistraStalker(PlantAnimRig_TupistraStalker *this)

{
  ~PlantAnimRig_TupistraStalker(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_TupistraStalker::~PlantAnimRig_TupistraStalker() */

void __thiscall
PlantAnimRig_TupistraStalker::~PlantAnimRig_TupistraStalker(PlantAnimRig_TupistraStalker *this)

{
  ~PlantAnimRig_TupistraStalker(this + -0x10);
  return;
}


/* PlantAnimRig_TupistraStalker::PlantAnimRig_TupistraStalker() */

void __thiscall
PlantAnimRig_TupistraStalker::PlantAnimRig_TupistraStalker(PlantAnimRig_TupistraStalker *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_TupistraStalker)0x1;
  *(undefined ***)this = &PTR_GetClass_067f0d70;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_TupistraStalker_067f0fd8;
  return;
}


/* PlantAnimRig_TupistraStalker::StaticNew() */

PlantAnimRig_TupistraStalker * PlantAnimRig_TupistraStalker::StaticNew(void)

{
  PlantAnimRig_TupistraStalker *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_TupistraStalker(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_TupistraStalker::StaticClassInit() */

void PlantAnimRig_TupistraStalker::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_TupistraStalker");
    (*pcVar2)(plVar1,asStack_10,FUN_04155434,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_TupistraStalker::StaticGetClass() */

long * PlantAnimRig_TupistraStalker::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_TupistraStalker",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_TupistraStalker::GetClass() const */

long * PlantAnimRig_TupistraStalker::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_TupistraStalker",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_TupistraStalker::Jumping(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >,
   bool) */

void PlantAnimRig_TupistraStalker::Jumping(PopAnimRig *param_1,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack");
  nop();
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop(param_1,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  PlantAnimRig::SetState((PlantAnimRig *)param_1,0xe);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_TupistraStalker::Submerging(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_TupistraStalker::Submerging
          (PlantAnimRig_TupistraStalker *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"down");
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
/* PlantAnimRig_TupistraStalker::LoopAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >, bool) */

void __thiscall
PlantAnimRig_TupistraStalker::LoopAttack
          (PlantAnimRig_TupistraStalker *this,RtReflectionDelegate *param_2,char param_3)

{
  char *__s;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == '\0') {
    __s = "attack_loop";
  }
  else {
    __s = "attack5";
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
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

