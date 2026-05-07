// Class: PlantAnimRig_Dracaena


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Dracaena::getPlantFoodOnAnimName() */

void __thiscall PlantAnimRig_Dracaena::getPlantFoodOnAnimName(PlantAnimRig_Dracaena *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"plantfood_start");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Dracaena::~PlantAnimRig_Dracaena() */

void __thiscall PlantAnimRig_Dracaena::~PlantAnimRig_Dracaena(PlantAnimRig_Dracaena *this)

{
  *(undefined ***)this = &PTR_GetClass_069dd9a0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Dracaena_069ddc08;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Dracaena::~PlantAnimRig_Dracaena() */

void __thiscall PlantAnimRig_Dracaena::~PlantAnimRig_Dracaena(PlantAnimRig_Dracaena *this)

{
  ~PlantAnimRig_Dracaena(this + -0x10);
  return;
}


/* PlantAnimRig_Dracaena::~PlantAnimRig_Dracaena() */

void __thiscall PlantAnimRig_Dracaena::~PlantAnimRig_Dracaena(PlantAnimRig_Dracaena *this)

{
  ~PlantAnimRig_Dracaena(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Dracaena::~PlantAnimRig_Dracaena() */

void __thiscall PlantAnimRig_Dracaena::~PlantAnimRig_Dracaena(PlantAnimRig_Dracaena *this)

{
  ~PlantAnimRig_Dracaena(this + -0x10);
  return;
}


/* PlantAnimRig_Dracaena::PlantAnimRig_Dracaena() */

void __thiscall PlantAnimRig_Dracaena::PlantAnimRig_Dracaena(PlantAnimRig_Dracaena *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069dd9a0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Dracaena_069ddc08;
  return;
}


/* PlantAnimRig_Dracaena::StaticNew() */

PlantAnimRig_Dracaena * PlantAnimRig_Dracaena::StaticNew(void)

{
  PlantAnimRig_Dracaena *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Dracaena(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Dracaena::StaticClassInit() */

void PlantAnimRig_Dracaena::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Dracaena");
    (*pcVar2)(plVar1,asStack_10,FUN_04e3acb0,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Dracaena::StaticGetClass() */

long * PlantAnimRig_Dracaena::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Dracaena",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Dracaena::GetClass() const */

long * PlantAnimRig_Dracaena::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Dracaena",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Dracaena::PlayAttack2Loop(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_Dracaena::PlayAttack2Loop(PlantAnimRig_Dracaena *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack2_loop");
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
    PlantAnimRig::SetState((PlantAnimRig *)this,10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Dracaena::PlayAttack2End(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Dracaena::PlayAttack2End(PlantAnimRig_Dracaena *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack2_end");
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
    PlantAnimRig::SetState((PlantAnimRig *)this,10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Dracaena::PlayLv5AttackLoop() */

void __thiscall PlantAnimRig_Dracaena::PlayLv5AttackLoop(PlantAnimRig_Dracaena *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack_loop_lv5");
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
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Dracaena::PlayIdleReady() */

void __thiscall PlantAnimRig_Dracaena::PlayIdleReady(PlantAnimRig_Dracaena *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"idle_ready");
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
  __stack_chk_fail();
}

