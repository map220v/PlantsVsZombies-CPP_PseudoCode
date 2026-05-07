// Class: GridItemMagicMirrorRig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirrorRig::getDisAppearingAnimLabel() */

void __thiscall GridItemMagicMirrorRig::getDisAppearingAnimLabel(GridItemMagicMirrorRig *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"die");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirrorRig::getAppearingAnimLabel() */

void __thiscall GridItemMagicMirrorRig::getAppearingAnimLabel(GridItemMagicMirrorRig *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"appear");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirrorRig::playDisappearAnim(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
GridItemMagicMirrorRig::playDisappearAnim
          (GridItemMagicMirrorRig *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getDisAppearingAnimLabel(this);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirrorRig::playWorkingAnim() */

void __thiscall GridItemMagicMirrorRig::playWorkingAnim(GridItemMagicMirrorRig *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig_OlivePit::getPreviewAnimationName((PlantAnimRig_OlivePit *)this);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMagicMirrorRig::~GridItemMagicMirrorRig() */

void __thiscall GridItemMagicMirrorRig::~GridItemMagicMirrorRig(GridItemMagicMirrorRig *this)

{
  *(undefined ***)this = &PTR_GetClass_06994cf0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemMagicMirrorRig_06994e10;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemMagicMirrorRig::~GridItemMagicMirrorRig() */

void __thiscall GridItemMagicMirrorRig::~GridItemMagicMirrorRig(GridItemMagicMirrorRig *this)

{
  ~GridItemMagicMirrorRig(this + -0x10);
  return;
}


/* GridItemMagicMirrorRig::~GridItemMagicMirrorRig() */

void __thiscall GridItemMagicMirrorRig::~GridItemMagicMirrorRig(GridItemMagicMirrorRig *this)

{
  ~GridItemMagicMirrorRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemMagicMirrorRig::~GridItemMagicMirrorRig() */

void __thiscall GridItemMagicMirrorRig::~GridItemMagicMirrorRig(GridItemMagicMirrorRig *this)

{
  ~GridItemMagicMirrorRig(this + -0x10);
  return;
}


/* GridItemMagicMirrorRig::GridItemMagicMirrorRig() */

void __thiscall GridItemMagicMirrorRig::GridItemMagicMirrorRig(GridItemMagicMirrorRig *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06994cf0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemMagicMirrorRig_06994e10;
  return;
}


/* GridItemMagicMirrorRig::StaticNew() */

GridItemMagicMirrorRig * GridItemMagicMirrorRig::StaticNew(void)

{
  GridItemMagicMirrorRig *this;
  
  this = ::operator_new(0x210);
  GridItemMagicMirrorRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirrorRig::StaticClassInit() */

void GridItemMagicMirrorRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemMagicMirrorRig");
    (*pcVar2)(plVar1,asStack_10,FUN_04c8ade0,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMagicMirrorRig::StaticGetClass() */

long * GridItemMagicMirrorRig::StaticGetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemMagicMirrorRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMagicMirrorRig::GetClass() const */

long * GridItemMagicMirrorRig::GetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemMagicMirrorRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirrorRig::playAppearAnim(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
GridItemMagicMirrorRig::playAppearAnim(GridItemMagicMirrorRig *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getAppearingAnimLabel(this);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

