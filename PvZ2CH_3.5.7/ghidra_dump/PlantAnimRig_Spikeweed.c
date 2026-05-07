// Class: PlantAnimRig_Spikeweed


/* PlantAnimRig_Spikeweed::~PlantAnimRig_Spikeweed() */

void __thiscall PlantAnimRig_Spikeweed::~PlantAnimRig_Spikeweed(PlantAnimRig_Spikeweed *this)

{
  *(undefined ***)this = &PTR_GetClass_0679fb40;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Spikeweed_0679fda8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Spikeweed::~PlantAnimRig_Spikeweed() */

void __thiscall PlantAnimRig_Spikeweed::~PlantAnimRig_Spikeweed(PlantAnimRig_Spikeweed *this)

{
  ~PlantAnimRig_Spikeweed(this + -0x10);
  return;
}


/* PlantAnimRig_Spikeweed::~PlantAnimRig_Spikeweed() */

void __thiscall PlantAnimRig_Spikeweed::~PlantAnimRig_Spikeweed(PlantAnimRig_Spikeweed *this)

{
  ~PlantAnimRig_Spikeweed(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Spikeweed::~PlantAnimRig_Spikeweed() */

void __thiscall PlantAnimRig_Spikeweed::~PlantAnimRig_Spikeweed(PlantAnimRig_Spikeweed *this)

{
  ~PlantAnimRig_Spikeweed(this + -0x10);
  return;
}


/* PlantAnimRig_Spikeweed::PlantAnimRig_Spikeweed() */

void __thiscall PlantAnimRig_Spikeweed::PlantAnimRig_Spikeweed(PlantAnimRig_Spikeweed *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_Spikeweed)0x0;
  *(undefined ***)this = &PTR_GetClass_0679fb40;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Spikeweed_0679fda8;
  return;
}


/* PlantAnimRig_Spikeweed::StaticNew() */

PlantAnimRig_Spikeweed * PlantAnimRig_Spikeweed::StaticNew(void)

{
  PlantAnimRig_Spikeweed *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Spikeweed(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Spikeweed::StaticClassInit() */

void PlantAnimRig_Spikeweed::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Spikeweed");
    (*pcVar2)(plVar1,asStack_10,FUN_03f63884,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Spikeweed::StaticGetClass() */

long * PlantAnimRig_Spikeweed::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Spikeweed",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Spikeweed::GetClass() const */

long * PlantAnimRig_Spikeweed::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Spikeweed",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Spikeweed::playPlantFoodMain() */

void __thiscall PlantAnimRig_Spikeweed::playPlantFoodMain(PlantAnimRig_Spikeweed *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3b8] == (PlantAnimRig_Spikeweed)0x0) {
    std::string::string(asStack_40,"plantfood");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  else {
    std::string::string(asStack_40,"plantfood2");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Spikeweed::PlayIdleLooped() */

void __thiscall PlantAnimRig_Spikeweed::PlayIdleLooped(PlantAnimRig_Spikeweed *this)

{
  char *__s;
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x22c) == 0) {
    if (this[0x3b8] == (PlantAnimRig_Spikeweed)0x0) {
      __s = "idle";
    }
    else {
      __s = "idle_levelup";
    }
    std::string::string(asStack_40,__s);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,3,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  else {
    std::string::string(asStack_48,"damage");
    PopAnimRig::CalcVariationLabelName((string *)this,(int)asStack_48);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    std::string::~string(asStack_48);
    nop();
  }
  *(undefined4 *)(this + 0x218) = 1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

