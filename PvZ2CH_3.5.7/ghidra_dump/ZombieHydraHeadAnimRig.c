// Class: ZombieHydraHeadAnimRig


/* ZombieHydraHeadAnimRig::~ZombieHydraHeadAnimRig() */

void __thiscall ZombieHydraHeadAnimRig::~ZombieHydraHeadAnimRig(ZombieHydraHeadAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_06a1fb60;
  *(undefined ***)(this + 0x10) = &PTR__ZombieHydraHeadAnimRig_06a1fdd8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieHydraHeadAnimRig::~ZombieHydraHeadAnimRig() */

void __thiscall ZombieHydraHeadAnimRig::~ZombieHydraHeadAnimRig(ZombieHydraHeadAnimRig *this)

{
  ~ZombieHydraHeadAnimRig(this + -0x10);
  return;
}


/* ZombieHydraHeadAnimRig::~ZombieHydraHeadAnimRig() */

void __thiscall ZombieHydraHeadAnimRig::~ZombieHydraHeadAnimRig(ZombieHydraHeadAnimRig *this)

{
  ~ZombieHydraHeadAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieHydraHeadAnimRig::~ZombieHydraHeadAnimRig() */

void __thiscall ZombieHydraHeadAnimRig::~ZombieHydraHeadAnimRig(ZombieHydraHeadAnimRig *this)

{
  ~ZombieHydraHeadAnimRig(this + -0x10);
  return;
}


/* ZombieHydraHeadAnimRig::ZombieHydraHeadAnimRig() */

void __thiscall ZombieHydraHeadAnimRig::ZombieHydraHeadAnimRig(ZombieHydraHeadAnimRig *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06a1fb60;
  *(undefined ***)(this + 0x10) = &PTR__ZombieHydraHeadAnimRig_06a1fdd8;
  return;
}


/* ZombieHydraHeadAnimRig::StaticNew() */

ZombieHydraHeadAnimRig * ZombieHydraHeadAnimRig::StaticNew(void)

{
  ZombieHydraHeadAnimRig *this;
  
  this = ::operator_new(0x240);
  ZombieHydraHeadAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHydraHeadAnimRig::StaticClassInit() */

void ZombieHydraHeadAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieHydraHeadAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_04f53520,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieHydraHeadAnimRig::StaticGetClass() */

long * ZombieHydraHeadAnimRig::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieHydraHeadAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieHydraHeadAnimRig::GetClass() const */

long * ZombieHydraHeadAnimRig::GetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieHydraHeadAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHydraHeadAnimRig::PlayIdleAnim(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieHydraHeadAnimRig::PlayIdleAnim(ZombieHydraHeadAnimRig *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  (**(code **)(*(long *)this + 0x1e0))(asStack_58);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
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
/* ZombieHydraHeadAnimRig::getIdleAnimationName() */

void __thiscall ZombieHydraHeadAnimRig::getIdleAnimationName(ZombieHydraHeadAnimRig *this)

{
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  std::string::string(asStack_58,"idle");
  nop();
  std::string::string(asStack_50,"idle_2");
  nop();
  std::string::string(asStack_48,"idle_3");
  nop();
  FUN_05475d88(asStack_40,asStack_58);
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,0x32);
  std::string::~string(asStack_40);
  FUN_05475d88(asStack_40,asStack_50);
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,0x32);
  std::string::~string(asStack_40);
  FUN_05475d88(asStack_40,asStack_48);
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,0x32);
  std::string::~string(asStack_40);
  ProbabilitySet<std::string>::PickItem();
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  std::string::~string(asStack_58);
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

