// Class: PlantAnimRig_RoseSwordman


/* PlantAnimRig_RoseSwordman::~PlantAnimRig_RoseSwordman() */

void __thiscall
PlantAnimRig_RoseSwordman::~PlantAnimRig_RoseSwordman(PlantAnimRig_RoseSwordman *this)

{
  *(undefined ***)this = &PTR_GetClass_067dad30;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_RoseSwordman_067daf98;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_RoseSwordman::~PlantAnimRig_RoseSwordman() */

void __thiscall
PlantAnimRig_RoseSwordman::~PlantAnimRig_RoseSwordman(PlantAnimRig_RoseSwordman *this)

{
  ~PlantAnimRig_RoseSwordman(this + -0x10);
  return;
}


/* PlantAnimRig_RoseSwordman::~PlantAnimRig_RoseSwordman() */

void __thiscall
PlantAnimRig_RoseSwordman::~PlantAnimRig_RoseSwordman(PlantAnimRig_RoseSwordman *this)

{
  ~PlantAnimRig_RoseSwordman(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_RoseSwordman::~PlantAnimRig_RoseSwordman() */

void __thiscall
PlantAnimRig_RoseSwordman::~PlantAnimRig_RoseSwordman(PlantAnimRig_RoseSwordman *this)

{
  ~PlantAnimRig_RoseSwordman(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_RoseSwordman::StaticClassInit() */

void PlantAnimRig_RoseSwordman::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_RoseSwordman");
    (*pcVar2)(plVar1,asStack_10,FUN_040ce150,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_RoseSwordman::StaticGetClass() */

long * PlantAnimRig_RoseSwordman::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_RoseSwordman",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_RoseSwordman::GetClass() const */

long * PlantAnimRig_RoseSwordman::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_RoseSwordman",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_RoseSwordman::PlantAnimRig_RoseSwordman() */

void __thiscall
PlantAnimRig_RoseSwordman::PlantAnimRig_RoseSwordman(PlantAnimRig_RoseSwordman *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_RoseSwordman)0x0;
  *(undefined ***)this = &PTR_GetClass_067dad30;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_RoseSwordman_067daf98;
  return;
}


/* PlantAnimRig_RoseSwordman::StaticNew() */

PlantAnimRig_RoseSwordman * PlantAnimRig_RoseSwordman::StaticNew(void)

{
  PlantAnimRig_RoseSwordman *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_RoseSwordman(this);
  return this;
}


/* PlantAnimRig_RoseSwordman::SwordIsShow() */

PlantAnimRig_RoseSwordman __thiscall
PlantAnimRig_RoseSwordman::SwordIsShow(PlantAnimRig_RoseSwordman *this)

{
  return this[0x3b8];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_RoseSwordman::PlaySlashAttack(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_RoseSwordman::PlaySlashAttack
          (PlantAnimRig_RoseSwordman *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"plantfood_5");
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
    *(undefined4 *)(this + 0x218) = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_RoseSwordman::PlayShowSword(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_RoseSwordman::PlayShowSword
          (PlantAnimRig_RoseSwordman *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"ready");
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
    this[0x3b8] = (PlantAnimRig_RoseSwordman)0x1;
    *(undefined4 *)(this + 0x218) = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_RoseSwordman::PlayIdleLooped() */

void __thiscall PlantAnimRig_RoseSwordman::PlayIdleLooped(PlantAnimRig_RoseSwordman *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3b8] == (PlantAnimRig_RoseSwordman)0x0) {
    std::string::string(asStack_40,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  else {
    std::string::string(asStack_40,"idle2");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  *(undefined4 *)(this + 0x218) = 1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_RoseSwordman::playPlantFoodMain() */

void __thiscall PlantAnimRig_RoseSwordman::playPlantFoodMain(PlantAnimRig_RoseSwordman *this)

{
  this[0x3b8] = (PlantAnimRig_RoseSwordman)0x1;
  PlantAnimRig::playPlantFoodMain((PlantAnimRig *)this);
  return;
}

