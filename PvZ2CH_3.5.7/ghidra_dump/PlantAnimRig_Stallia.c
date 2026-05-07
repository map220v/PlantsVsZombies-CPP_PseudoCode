// Class: PlantAnimRig_Stallia


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Stallia::getDamageIdleAnimationName() */

void __thiscall PlantAnimRig_Stallia::getDamageIdleAnimationName(PlantAnimRig_Stallia *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"damage");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Stallia::onFirstIdleCompleted(std::string const&) */

void PlantAnimRig_Stallia::onFirstIdleCompleted(string *param_1)

{
  param_1[0x3b8] = (string)0x1;
  (**(code **)(*(long *)param_1 + 0x118))();
  return;
}


/* PlantAnimRig_Stallia::~PlantAnimRig_Stallia() */

void __thiscall PlantAnimRig_Stallia::~PlantAnimRig_Stallia(PlantAnimRig_Stallia *this)

{
  *(undefined ***)this = &PTR_GetClass_067e8490;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Stallia_067e86f8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Stallia::~PlantAnimRig_Stallia() */

void __thiscall PlantAnimRig_Stallia::~PlantAnimRig_Stallia(PlantAnimRig_Stallia *this)

{
  ~PlantAnimRig_Stallia(this + -0x10);
  return;
}


/* PlantAnimRig_Stallia::~PlantAnimRig_Stallia() */

void __thiscall PlantAnimRig_Stallia::~PlantAnimRig_Stallia(PlantAnimRig_Stallia *this)

{
  ~PlantAnimRig_Stallia(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Stallia::~PlantAnimRig_Stallia() */

void __thiscall PlantAnimRig_Stallia::~PlantAnimRig_Stallia(PlantAnimRig_Stallia *this)

{
  ~PlantAnimRig_Stallia(this + -0x10);
  return;
}


/* PlantAnimRig_Stallia::PlantAnimRig_Stallia() */

void __thiscall PlantAnimRig_Stallia::PlantAnimRig_Stallia(PlantAnimRig_Stallia *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_Stallia)0x0;
  *(undefined ***)this = &PTR_GetClass_067e8490;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Stallia_067e86f8;
  return;
}


/* PlantAnimRig_Stallia::StaticNew() */

PlantAnimRig_Stallia * PlantAnimRig_Stallia::StaticNew(void)

{
  PlantAnimRig_Stallia *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Stallia(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Stallia::StaticClassInit() */

void PlantAnimRig_Stallia::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Stallia");
    (*pcVar2)(plVar1,asStack_10,FUN_0411de6c,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Stallia::StaticGetClass() */

long * PlantAnimRig_Stallia::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Stallia",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Stallia::GetClass() const */

long * PlantAnimRig_Stallia::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Stallia",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Stallia::PlayIdleLooped() */

void __thiscall PlantAnimRig_Stallia::PlayIdleLooped(PlantAnimRig_Stallia *this)

{
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x22c) == 0) {
    if (this[0x3b8] == (PlantAnimRig_Stallia)0x0) {
      (**(code **)(*(long *)this + 0x1e8))(asStack_58);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onFirstIdleCompleted);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<PlantAnimRig_Stallia,void(PlantAnimRig_Stallia::*)(std::string_const&)>
                (aDStack_38,asStack_50);
      PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aDStack_38);
      std::string::~string(asStack_58);
    }
    else {
      (**(code **)(*(long *)this + 0x1e8))(asStack_50);
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aDStack_38)
      ;
      PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_50,3,(DummyInit *)aDStack_38);
      std::string::~string(asStack_50);
    }
  }
  else {
    (**(code **)(*(long *)this + 0x1f8))(asStack_58);
    PopAnimRig::CalcVariationLabelName((string *)this,(int)asStack_58);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_50,0,(DummyInit *)aDStack_38);
    std::string::~string(asStack_50);
    std::string::~string(asStack_58);
  }
  PlantAnimRig::SetState((PlantAnimRig *)this,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

