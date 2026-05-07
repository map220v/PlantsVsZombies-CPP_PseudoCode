// Class: PlantAnimRig_HeadbutterLettuce


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HeadbutterLettuce::getPlantFoodMainAnimName() */

void PlantAnimRig_HeadbutterLettuce::getPlantFoodMainAnimName(void)

{
  long lVar1;
  long in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(Plant **)(in_x0 + 0x210) != (Plant *)0x0) {
    Plant::GetAvatarEnable(*(Plant **)(in_x0 + 0x210));
  }
  std::string::string(in_x8,"plantfood_loop");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_HeadbutterLettuce::~PlantAnimRig_HeadbutterLettuce() */

void __thiscall
PlantAnimRig_HeadbutterLettuce::~PlantAnimRig_HeadbutterLettuce
          (PlantAnimRig_HeadbutterLettuce *this)

{
  *(undefined ***)this = &PTR_GetClass_069a49c0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_HeadbutterLettuce_069a4c28;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_HeadbutterLettuce::~PlantAnimRig_HeadbutterLettuce() */

void __thiscall
PlantAnimRig_HeadbutterLettuce::~PlantAnimRig_HeadbutterLettuce
          (PlantAnimRig_HeadbutterLettuce *this)

{
  ~PlantAnimRig_HeadbutterLettuce(this + -0x10);
  return;
}


/* PlantAnimRig_HeadbutterLettuce::~PlantAnimRig_HeadbutterLettuce() */

void __thiscall
PlantAnimRig_HeadbutterLettuce::~PlantAnimRig_HeadbutterLettuce
          (PlantAnimRig_HeadbutterLettuce *this)

{
  ~PlantAnimRig_HeadbutterLettuce(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_HeadbutterLettuce::~PlantAnimRig_HeadbutterLettuce() */

void __thiscall
PlantAnimRig_HeadbutterLettuce::~PlantAnimRig_HeadbutterLettuce
          (PlantAnimRig_HeadbutterLettuce *this)

{
  ~PlantAnimRig_HeadbutterLettuce(this + -0x10);
  return;
}


/* PlantAnimRig_HeadbutterLettuce::PlantAnimRig_HeadbutterLettuce() */

void __thiscall
PlantAnimRig_HeadbutterLettuce::PlantAnimRig_HeadbutterLettuce(PlantAnimRig_HeadbutterLettuce *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069a49c0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_HeadbutterLettuce_069a4c28;
  return;
}


/* PlantAnimRig_HeadbutterLettuce::StaticNew() */

PlantAnimRig_HeadbutterLettuce * PlantAnimRig_HeadbutterLettuce::StaticNew(void)

{
  PlantAnimRig_HeadbutterLettuce *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_HeadbutterLettuce(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HeadbutterLettuce::StaticClassInit() */

void PlantAnimRig_HeadbutterLettuce::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_HeadbutterLettuce");
    (*pcVar2)(plVar1,asStack_10,FUN_04cf6410,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_HeadbutterLettuce::StaticGetClass() */

long * PlantAnimRig_HeadbutterLettuce::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_HeadbutterLettuce",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_HeadbutterLettuce::GetClass() const */

long * PlantAnimRig_HeadbutterLettuce::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_HeadbutterLettuce",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HeadbutterLettuce::PlayRightHeadbutt(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_HeadbutterLettuce::PlayRightHeadbutt
          (PlantAnimRig_HeadbutterLettuce *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack");
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
/* PlantAnimRig_HeadbutterLettuce::PlayLeftHeadbutt(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_HeadbutterLettuce::PlayLeftHeadbutt
          (PlantAnimRig_HeadbutterLettuce *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack2");
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

