// Class: GridItemMagicMirrorRig2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirrorRig2::getWorkingAnimLabel() */

void __thiscall GridItemMagicMirrorRig2::getWorkingAnimLabel(GridItemMagicMirrorRig2 *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"idle2");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* GridItemMagicMirrorRig2::~GridItemMagicMirrorRig2() */

void __thiscall GridItemMagicMirrorRig2::~GridItemMagicMirrorRig2(GridItemMagicMirrorRig2 *this)

{
  *(undefined ***)this = &PTR_GetClass_06995270;
  *(undefined ***)(this + 0x10) = &PTR__GridItemMagicMirrorRig2_06995390;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemMagicMirrorRig2::~GridItemMagicMirrorRig2() */

void __thiscall GridItemMagicMirrorRig2::~GridItemMagicMirrorRig2(GridItemMagicMirrorRig2 *this)

{
  ~GridItemMagicMirrorRig2(this + -0x10);
  return;
}


/* GridItemMagicMirrorRig2::~GridItemMagicMirrorRig2() */

void __thiscall GridItemMagicMirrorRig2::~GridItemMagicMirrorRig2(GridItemMagicMirrorRig2 *this)

{
  ~GridItemMagicMirrorRig2(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemMagicMirrorRig2::~GridItemMagicMirrorRig2() */

void __thiscall GridItemMagicMirrorRig2::~GridItemMagicMirrorRig2(GridItemMagicMirrorRig2 *this)

{
  ~GridItemMagicMirrorRig2(this + -0x10);
  return;
}


/* GridItemMagicMirrorRig2::GridItemMagicMirrorRig2() */

void __thiscall GridItemMagicMirrorRig2::GridItemMagicMirrorRig2(GridItemMagicMirrorRig2 *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06995270;
  *(undefined ***)(this + 0x10) = &PTR__GridItemMagicMirrorRig2_06995390;
  return;
}


/* GridItemMagicMirrorRig2::StaticNew() */

GridItemMagicMirrorRig2 * GridItemMagicMirrorRig2::StaticNew(void)

{
  GridItemMagicMirrorRig2 *this;
  
  this = ::operator_new(0x210);
  GridItemMagicMirrorRig2(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirrorRig2::StaticClassInit() */

void GridItemMagicMirrorRig2::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemMagicMirrorRig2");
    (*pcVar2)(plVar1,asStack_10,FUN_04c8ec3c,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMagicMirrorRig2::StaticGetClass() */

long * GridItemMagicMirrorRig2::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemMagicMirrorRig2",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMagicMirrorRig2::GetClass() const */

long * GridItemMagicMirrorRig2::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemMagicMirrorRig2",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirrorRig2::playAppearAnim(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
GridItemMagicMirrorRig2::playAppearAnim(GridItemMagicMirrorRig2 *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig_Pumpkin::getIdleAnimationName((PlantAnimRig_Pumpkin *)this);
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
/* GridItemMagicMirrorRig2::getWorkingBlingAnimLabel() */

void __thiscall GridItemMagicMirrorRig2::getWorkingBlingAnimLabel(GridItemMagicMirrorRig2 *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"idle3");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirrorRig2::playWorkingBlingAnim(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
GridItemMagicMirrorRig2::playWorkingBlingAnim
          (GridItemMagicMirrorRig2 *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getWorkingBlingAnimLabel(this);
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
/* GridItemMagicMirrorRig2::getDisAppearingAnimLabel() */

void __thiscall GridItemMagicMirrorRig2::getDisAppearingAnimLabel(GridItemMagicMirrorRig2 *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"idle4");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirrorRig2::playDisappearAnim(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
GridItemMagicMirrorRig2::playDisappearAnim
          (GridItemMagicMirrorRig2 *this,RtReflectionDelegate *param_2)

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
/* GridItemMagicMirrorRig2::playWorkingAnim() */

void __thiscall GridItemMagicMirrorRig2::playWorkingAnim(GridItemMagicMirrorRig2 *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getWorkingAnimLabel(this);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

