// Class: PlantAnimRig_MagicBeans


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MagicBeans::PlayInitialFrame() */

void __thiscall PlantAnimRig_MagicBeans::PlayInitialFrame(PlantAnimRig_MagicBeans *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"plant");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MagicBeans::PlayEmergeFromGroundFast(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_MagicBeans::PlayEmergeFromGroundFast
          (PlantAnimRig_MagicBeans *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"plantfood2");
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
    this[0x3b8] = (PlantAnimRig_MagicBeans)0x0;
    *(undefined4 *)(this + 0x218) = 0xf;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* PlantAnimRig_MagicBeans::~PlantAnimRig_MagicBeans() */

void __thiscall PlantAnimRig_MagicBeans::~PlantAnimRig_MagicBeans(PlantAnimRig_MagicBeans *this)

{
  *(undefined ***)this = &PTR_GetClass_0679ca90;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_MagicBeans_0679cd18;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_MagicBeans::~PlantAnimRig_MagicBeans() */

void __thiscall PlantAnimRig_MagicBeans::~PlantAnimRig_MagicBeans(PlantAnimRig_MagicBeans *this)

{
  ~PlantAnimRig_MagicBeans(this + -0x10);
  return;
}


/* PlantAnimRig_MagicBeans::~PlantAnimRig_MagicBeans() */

void __thiscall PlantAnimRig_MagicBeans::~PlantAnimRig_MagicBeans(PlantAnimRig_MagicBeans *this)

{
  ~PlantAnimRig_MagicBeans(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_MagicBeans::~PlantAnimRig_MagicBeans() */

void __thiscall PlantAnimRig_MagicBeans::~PlantAnimRig_MagicBeans(PlantAnimRig_MagicBeans *this)

{
  ~PlantAnimRig_MagicBeans(this + -0x10);
  return;
}


/* PlantAnimRig_MagicBeans::PlantAnimRig_MagicBeans() */

void __thiscall PlantAnimRig_MagicBeans::PlantAnimRig_MagicBeans(PlantAnimRig_MagicBeans *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0679ca90;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_MagicBeans_0679cd18;
  return;
}


/* PlantAnimRig_MagicBeans::StaticNew() */

PlantAnimRig_MagicBeans * PlantAnimRig_MagicBeans::StaticNew(void)

{
  PlantAnimRig_MagicBeans *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_MagicBeans(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MagicBeans::StaticClassInit() */

void PlantAnimRig_MagicBeans::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_MagicBeans");
    (*pcVar2)(plVar1,asStack_10,FUN_03f5c8cc,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_MagicBeans::StaticGetClass() */

long * PlantAnimRig_MagicBeans::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_MagicBeans",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_MagicBeans::GetClass() const */

long * PlantAnimRig_MagicBeans::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_MagicBeans",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MagicBeans::PlayEmergeFromGround(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_MagicBeans::PlayEmergeFromGround
          (PlantAnimRig_MagicBeans *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"recover");
  nop();
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    this[0x3b8] = (PlantAnimRig_MagicBeans)0x0;
    *(undefined4 *)(this + 0x218) = 0xf;
  }
  std::string::~string(asStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MagicBeans::PlayShake(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_MagicBeans::PlayShake(PlantAnimRig_MagicBeans *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"shake");
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
    this[0x3b8] = (PlantAnimRig_MagicBeans)0x0;
    *(undefined4 *)(this + 0x218) = 0xf;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MagicBeans::PlayDie(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_MagicBeans::PlayDie(PlantAnimRig_MagicBeans *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"shake");
  nop();
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  std::string::~string(asStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MagicBeans::PlayIdleLooped() */

void __thiscall PlantAnimRig_MagicBeans::PlayIdleLooped(PlantAnimRig_MagicBeans *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,2,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* PlantAnimRig_MagicBeans::onPopAnimInitialized() */

void __thiscall PlantAnimRig_MagicBeans::onPopAnimInitialized(PlantAnimRig_MagicBeans *this)

{
  float fVar1;
  
  this[0x3b8] = (PlantAnimRig_MagicBeans)0x1;
  fVar1 = (float)FUN_03f5c71c();
  PopAnimRig::SetDrawScale((PopAnimRig *)this,fVar1);
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  return;
}

