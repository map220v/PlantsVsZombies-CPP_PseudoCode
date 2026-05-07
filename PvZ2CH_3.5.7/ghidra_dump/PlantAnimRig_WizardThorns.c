// Class: PlantAnimRig_WizardThorns


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_WizardThorns::PlayTapAnimation(std::string,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_WizardThorns::PlayTapAnimation
          (PlantAnimRig_WizardThorns *this,undefined8 param_2,RtReflectionDelegate *param_3)

{
  int iVar1;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,param_2,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* PlantAnimRig_WizardThorns::~PlantAnimRig_WizardThorns() */

void __thiscall
PlantAnimRig_WizardThorns::~PlantAnimRig_WizardThorns(PlantAnimRig_WizardThorns *this)

{
  *(undefined ***)this = &PTR_GetClass_069e0010;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_WizardThorns_069e0278;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_WizardThorns::~PlantAnimRig_WizardThorns() */

void __thiscall
PlantAnimRig_WizardThorns::~PlantAnimRig_WizardThorns(PlantAnimRig_WizardThorns *this)

{
  ~PlantAnimRig_WizardThorns(this + -0x10);
  return;
}


/* PlantAnimRig_WizardThorns::~PlantAnimRig_WizardThorns() */

void __thiscall
PlantAnimRig_WizardThorns::~PlantAnimRig_WizardThorns(PlantAnimRig_WizardThorns *this)

{
  ~PlantAnimRig_WizardThorns(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_WizardThorns::~PlantAnimRig_WizardThorns() */

void __thiscall
PlantAnimRig_WizardThorns::~PlantAnimRig_WizardThorns(PlantAnimRig_WizardThorns *this)

{
  ~PlantAnimRig_WizardThorns(this + -0x10);
  return;
}


/* PlantAnimRig_WizardThorns::PlantAnimRig_WizardThorns() */

void __thiscall
PlantAnimRig_WizardThorns::PlantAnimRig_WizardThorns(PlantAnimRig_WizardThorns *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069e0010;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_WizardThorns_069e0278;
  return;
}


/* PlantAnimRig_WizardThorns::StaticNew() */

PlantAnimRig_WizardThorns * PlantAnimRig_WizardThorns::StaticNew(void)

{
  PlantAnimRig_WizardThorns *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_WizardThorns(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_WizardThorns::StaticClassInit() */

void PlantAnimRig_WizardThorns::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_WizardThorns");
    (*pcVar2)(plVar1,asStack_10,FUN_04e4f680,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_WizardThorns::StaticGetClass() */

long * PlantAnimRig_WizardThorns::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_WizardThorns",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_WizardThorns::GetClass() const */

long * PlantAnimRig_WizardThorns::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_WizardThorns",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

