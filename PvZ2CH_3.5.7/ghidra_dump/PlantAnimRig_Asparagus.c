// Class: PlantAnimRig_Asparagus


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Asparagus::getAttackAnimationName() */

void PlantAnimRig_Asparagus::getAttackAnimationName(void)

{
  int iVar1;
  long lVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar2 = ___stack_chk_guard;
  iVar1 = *(int *)(in_x0 + 0x3b8);
  if (iVar1 == 0) {
    __s = "attack2";
  }
  else if ((iVar1 == 1) || (iVar1 != 2)) {
    __s = "attack";
  }
  else {
    __s = "attack3";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar2 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Asparagus::getPlantFoodMainAnimName() */

void PlantAnimRig_Asparagus::getPlantFoodMainAnimName(void)

{
  long in_x0;
  string *in_x8;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_28,"plantfood_up");
  nop();
  std::string::string(asStack_20,"plantfood_mid");
  nop();
  std::string::string(asStack_18,"plantfood_down");
  nop();
  std::string::string(asStack_10,"plantfood_up");
  nop();
  if (*(int *)(in_x0 + 0x3c0) == 0) {
    FUN_05475d88();
  }
  else if (*(int *)(in_x0 + 0x3c0) - 1U < 2) {
    FUN_05475d88();
  }
  else {
    std::string::string(in_x8,"plantfood_up");
    nop();
  }
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Asparagus::~PlantAnimRig_Asparagus() */

void __thiscall PlantAnimRig_Asparagus::~PlantAnimRig_Asparagus(PlantAnimRig_Asparagus *this)

{
  *(undefined ***)this = &PTR_GetClass_067e3900;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Asparagus_067e3b68;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Asparagus::~PlantAnimRig_Asparagus() */

void __thiscall PlantAnimRig_Asparagus::~PlantAnimRig_Asparagus(PlantAnimRig_Asparagus *this)

{
  ~PlantAnimRig_Asparagus(this + -0x10);
  return;
}


/* PlantAnimRig_Asparagus::~PlantAnimRig_Asparagus() */

void __thiscall PlantAnimRig_Asparagus::~PlantAnimRig_Asparagus(PlantAnimRig_Asparagus *this)

{
  ~PlantAnimRig_Asparagus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Asparagus::~PlantAnimRig_Asparagus() */

void __thiscall PlantAnimRig_Asparagus::~PlantAnimRig_Asparagus(PlantAnimRig_Asparagus *this)

{
  ~PlantAnimRig_Asparagus(this + -0x10);
  return;
}


/* PlantAnimRig_Asparagus::PlantAnimRig_Asparagus() */

void __thiscall PlantAnimRig_Asparagus::PlantAnimRig_Asparagus(PlantAnimRig_Asparagus *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 1;
  this[0x3bc] = (PlantAnimRig_Asparagus)0x0;
  *(undefined ***)this = &PTR_GetClass_067e3900;
  *(undefined4 *)(this + 0x3c0) = 1;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Asparagus_067e3b68;
  return;
}


/* PlantAnimRig_Asparagus::StaticNew() */

PlantAnimRig_Asparagus * PlantAnimRig_Asparagus::StaticNew(void)

{
  PlantAnimRig_Asparagus *this;
  
  this = ::operator_new(0x3c8);
  PlantAnimRig_Asparagus(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Asparagus::StaticClassInit() */

void PlantAnimRig_Asparagus::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Asparagus");
    (*pcVar2)(plVar1,asStack_10,FUN_04102ae4,0x3c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Asparagus::StaticGetClass() */

long * PlantAnimRig_Asparagus::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Asparagus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Asparagus::GetClass() const */

long * PlantAnimRig_Asparagus::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Asparagus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Asparagus::PlaySleepReady(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_Asparagus::PlaySleepReady(PlantAnimRig_Asparagus *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"sleep_ready");
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
    *(undefined4 *)(this + 0x218) = 0xf;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Asparagus::PlaySleepEnd(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Asparagus::PlaySleepEnd(PlantAnimRig_Asparagus *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"sleep_over");
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
    *(undefined4 *)(this + 0x218) = 0x11;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Asparagus::onAnimStopped() */

void __thiscall PlantAnimRig_Asparagus::onAnimStopped(PlantAnimRig_Asparagus *this)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  iVar1 = *(int *)(this + 0x218);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 0xf) {
    std::string::string(asStack_58,"sleep_keep");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_58,0,(DummyInit *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    *(undefined4 *)(this + 0x218) = 0x10;
  }
  else if (iVar1 == 0x11) {
    (**(code **)(*(long *)this + 0x118))();
  }
  else if ((iVar1 == 2) && (this[0x3bc] != (PlantAnimRig_Asparagus)0x0)) {
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
    PlaySleepReady(this,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  PlantAnimRig::onAnimStopped((PlantAnimRig *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

