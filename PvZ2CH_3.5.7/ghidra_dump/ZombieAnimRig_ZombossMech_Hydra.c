// Class: ZombieAnimRig_ZombossMech_Hydra


/* ZombieAnimRig_ZombossMech_Hydra::getSummoningAnimName() const */

char * ZombieAnimRig_ZombossMech_Hydra::getSummoningAnimName(void)

{
  return "summoning";
}


/* ZombieAnimRig_ZombossMech_Hydra::onPostPlayCalled() */

void __thiscall
ZombieAnimRig_ZombossMech_Hydra::onPostPlayCalled(ZombieAnimRig_ZombossMech_Hydra *this)

{
  this[0x240] = (ZombieAnimRig_ZombossMech_Hydra)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Hydra::PlayFireBreathStart(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Hydra::PlayFireBreathStart
          (ZombieAnimRig_ZombossMech_Hydra *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"fire_attack");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Hydra::PlayFireBreathEnd(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Hydra::PlayFireBreathEnd
          (ZombieAnimRig_ZombossMech_Hydra *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"fire_attack_end");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Hydra::PlayLobbedFireStart(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Hydra::PlayLobbedFireStart
          (ZombieAnimRig_ZombossMech_Hydra *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"fire_bomb");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Hydra::PlayLobbedFireAttack(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Hydra::PlayLobbedFireAttack
          (ZombieAnimRig_ZombossMech_Hydra *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"fire_bomb_loop");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Hydra::PlayLobbedFireEnd(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Hydra::PlayLobbedFireEnd
          (ZombieAnimRig_ZombossMech_Hydra *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"fire_bomb_end");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Hydra::PlayMagnettedStart(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Hydra::PlayMagnettedStart
          (ZombieAnimRig_ZombossMech_Hydra *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"vulnerable");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Hydra::PlayMagnettedEnd(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Hydra::PlayMagnettedEnd
          (ZombieAnimRig_ZombossMech_Hydra *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"vulnerable_end");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Hydra::PlayIdle(RtReflectionDelegate<Sexy::Delegate3<std::string
   const&, std::string const&, int> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Hydra::PlayIdle
          (ZombieAnimRig_ZombossMech_Hydra *this,RtReflectionDelegate *param_2)

{
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x240] == (ZombieAnimRig_ZombossMech_Hydra)0x0) {
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate(aRStack_50,param_2);
    ZombieAnimRig_ZombossMech::PlayIdle((ZombieAnimRig_ZombossMech *)this,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    this[0x240] = (ZombieAnimRig_ZombossMech_Hydra)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ZombossMech_Hydra::getTeleportationEffectOffset() const */

DVec2 * __thiscall
ZombieAnimRig_ZombossMech_Hydra::getTeleportationEffectOffset(ZombieAnimRig_ZombossMech_Hydra *this)

{
  DVec2 *in_x8;
  
  DVec2::DVec2(in_x8,-25.0,-125.0);
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Hydra::PlayFireBreathLoop() */

void __thiscall
ZombieAnimRig_ZombossMech_Hydra::PlayFireBreathLoop(ZombieAnimRig_ZombossMech_Hydra *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"fire_attack_idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Hydra::PlayMagnettedLoop() */

void __thiscall
ZombieAnimRig_ZombossMech_Hydra::PlayMagnettedLoop(ZombieAnimRig_ZombossMech_Hydra *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"vulnerable_loop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Hydra::PlayWalkForDirection(ZombossWalkDirection,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void ZombieAnimRig_ZombossMech_Hydra::PlayWalkForDirection(long *param_1)

{
  code *pcVar1;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*param_1 + 0x268);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar1)(param_1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Hydra::PlayFanPullStart(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Hydra::PlayFanPullStart
          (ZombieAnimRig_ZombossMech_Hydra *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"suction_on");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Hydra::PlayFanPullEnd(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Hydra::PlayFanPullEnd
          (ZombieAnimRig_ZombossMech_Hydra *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"suction_off");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Hydra::PlayFanPullLoop(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void ZombieAnimRig_ZombossMech_Hydra::PlayFanPullLoop(PopAnimRig *param_1)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"suction_loop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue(param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* ZombieAnimRig_ZombossMech_Hydra::~ZombieAnimRig_ZombossMech_Hydra() */

void __thiscall
ZombieAnimRig_ZombossMech_Hydra::~ZombieAnimRig_ZombossMech_Hydra
          (ZombieAnimRig_ZombossMech_Hydra *this)

{
  *(undefined ***)this = &PTR_GetClass_06a20d30;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_Hydra_06a210a0;
  ZombieAnimRig_ZombossMech::~ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech_Hydra::~ZombieAnimRig_ZombossMech_Hydra() */

void __thiscall
ZombieAnimRig_ZombossMech_Hydra::~ZombieAnimRig_ZombossMech_Hydra
          (ZombieAnimRig_ZombossMech_Hydra *this)

{
  ~ZombieAnimRig_ZombossMech_Hydra(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_Hydra::~ZombieAnimRig_ZombossMech_Hydra() */

void __thiscall
ZombieAnimRig_ZombossMech_Hydra::~ZombieAnimRig_ZombossMech_Hydra
          (ZombieAnimRig_ZombossMech_Hydra *this)

{
  ~ZombieAnimRig_ZombossMech_Hydra(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech_Hydra::~ZombieAnimRig_ZombossMech_Hydra() */

void __thiscall
ZombieAnimRig_ZombossMech_Hydra::~ZombieAnimRig_ZombossMech_Hydra
          (ZombieAnimRig_ZombossMech_Hydra *this)

{
  ~ZombieAnimRig_ZombossMech_Hydra(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_Hydra::ZombieAnimRig_ZombossMech_Hydra() */

void __thiscall
ZombieAnimRig_ZombossMech_Hydra::ZombieAnimRig_ZombossMech_Hydra
          (ZombieAnimRig_ZombossMech_Hydra *this)

{
  ZombieAnimRig_ZombossMech::ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  this[0x240] = (ZombieAnimRig_ZombossMech_Hydra)0x0;
  *(undefined ***)this = &PTR_GetClass_06a20d30;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_Hydra_06a210a0;
  return;
}


/* ZombieAnimRig_ZombossMech_Hydra::StaticNew() */

ZombieAnimRig_ZombossMech_Hydra * ZombieAnimRig_ZombossMech_Hydra::StaticNew(void)

{
  ZombieAnimRig_ZombossMech_Hydra *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_ZombossMech_Hydra(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Hydra::StaticClassInit() */

void ZombieAnimRig_ZombossMech_Hydra::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ZombossMech_Hydra");
    (*pcVar2)(plVar1,asStack_10,FUN_04f53908,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ZombossMech_Hydra::StaticGetClass() */

long * ZombieAnimRig_ZombossMech_Hydra::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_ZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_Hydra",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ZombossMech_Hydra::GetClass() const */

long * ZombieAnimRig_ZombossMech_Hydra::GetClass(void)

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
  uVar2 = ZombieAnimRig_ZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_Hydra",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Hydra::visibleDeathLayers(bool) */

void __thiscall
ZombieAnimRig_ZombossMech_Hydra::visibleDeathLayers
          (ZombieAnimRig_ZombossMech_Hydra *this,bool param_1)

{
  bool bVar1;
  int iVar2;
  string *psVar3;
  ulong uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar4 = DAT_06ba6490 & 1;
  local_8 = ___stack_chk_guard;
  if (((DAT_06ba6490 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba6490), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba66b0,"dragon_head_damage_03");
    nop();
    std::string::string((string *)&DAT_06ba66b8,"dragon_head_horn_damage_03");
    nop();
    std::string::string((string *)&DAT_06ba66c0,"mz_damage_03");
    nop();
    std::string::string((string *)&DAT_06ba66c8,"sg_damage_3");
    nop();
    std::string::string((string *)&DAT_06ba66d0,"sj01_damage_03");
    nop();
    std::string::string((string *)&DAT_06ba66d8,"sz__damage_3");
    nop();
    std::string::string((string *)&DAT_06ba66e0,"xb_damage_03");
    nop();
    std::string::string((string *)&DAT_06ba66e8,"y_damage_03");
    nop();
    std::string::string((string *)&DAT_06ba66f0,"yyp_damage_03");
    nop();
    std::string::string((string *)&DAT_06ba66f8,"yyp02_damage_03");
    nop();
    std::string::string((string *)&DAT_06ba6700,"yyq_damage_03");
    nop();
    std::string::string((string *)&DAT_06ba6708,"zui_damage_03");
    nop();
    std::string::string((string *)&DAT_06ba6710,"zyp_damage_03");
    nop();
    std::string::string((string *)&DAT_06ba6718,"zyp02_damage_03");
    nop();
    std::string::string((string *)&DAT_06ba6720,"zyq_damage_03");
    nop();
    std::string::string((string *)&DAT_06ba6728,"sz_damage_3");
    nop();
    __cxa_guard_release(&DAT_06ba6490);
    __cxa_atexit(FUN_04f50bf0,uVar4,&DAT_06a88000);
  }
  if (((DAT_06ba62a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba62a8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba6390,(string *)&DAT_06ba66b0,(allocator *)&DAT_06ba6730);
    __cxa_guard_release(&DAT_06ba62a8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba6390,
                 &DAT_06a88000);
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&DAT_06ba6390);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&DAT_06ba6390);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,param_1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieAnimRig_ZombossMech_Hydra::onPopAnimInitialized() */

void __thiscall
ZombieAnimRig_ZombossMech_Hydra::onPopAnimInitialized(ZombieAnimRig_ZombossMech_Hydra *this)

{
  ZombieAnimRig_ZombossMech::onPopAnimInitialized((ZombieAnimRig_ZombossMech *)this);
  visibleDeathLayers(this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Hydra::PlayZombossDie(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Hydra::PlayZombossDie
          (ZombieAnimRig_ZombossMech_Hydra *this,RtReflectionDelegate *param_2)

{
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  visibleDeathLayers(this,true);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  ZombieAnimRig_ZombossMech::PlayZombossDie((ZombieAnimRig_ZombossMech *)this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ZombossMech_Hydra::PlayDie() */

undefined8 __thiscall
ZombieAnimRig_ZombossMech_Hydra::PlayDie(ZombieAnimRig_ZombossMech_Hydra *this)

{
  visibleDeathLayers(this,true);
  ZombieAnimRig::PlayDie((ZombieAnimRig *)this);
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Hydra::getDamageLayerList(ZombieAnimRig_ZombossMech::DamagePhase) const
    */

void __thiscall
ZombieAnimRig_ZombossMech_Hydra::getDamageLayerList
          (ZombieAnimRig_ZombossMech_Hydra *this,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  string *psVar3;
  string *psVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  lVar1 = ___stack_chk_guard;
  switch(param_2) {
  case 0:
    uVar6 = DAT_06ba6840 & 1;
    if (((DAT_06ba6840 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba6840), iVar2 != 0)) {
      std::string::string((string *)&DAT_06ba6688,"sz_damage_1");
      nop();
      std::string::string((string *)&DAT_06ba6690,"sz_damage");
      nop();
      std::string::string((string *)&DAT_06ba6698,"sj01_damage_00");
      nop();
      __cxa_guard_release(&DAT_06ba6840);
      __cxa_atexit(FUN_04f50c98,uVar6,&DAT_06a88000);
    }
    puVar5 = &DAT_06ba68d8;
    if (((DAT_06ba68d8 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06ba68d8), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech_Hydra *)&DAT_06ba67e0;
      goto switchD_04f5a330_default;
    }
    psVar3 = (string *)&DAT_06ba6688;
    this = (ZombieAnimRig_ZombossMech_Hydra *)&DAT_06ba67e0;
    psVar4 = (string *)&DAT_06ba66a0;
    goto LAB_04f5a410;
  case 1:
  case 2:
  case 4:
  case 5:
    this = (ZombieAnimRig_ZombossMech_Hydra *)ZombieAnimRig::getEmptyLayerNames();
    goto switchD_04f5a330_default;
  case 3:
    uVar6 = DAT_06ba6810 & 1;
    if (((DAT_06ba6810 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba6810), iVar2 != 0)) {
      std::string::string((string *)&DAT_06ba62b0,"dragon_head_damage_01");
      nop();
      std::string::string((string *)&DAT_06ba62b8,"dragon_head_horn_damage_01");
      nop();
      std::string::string((string *)&DAT_06ba62c0,"sg_damage_1");
      nop();
      std::string::string((string *)&DAT_06ba62c8,"mz_damage_02");
      nop();
      std::string::string((string *)&DAT_06ba62d0,"sj01_damage_01");
      nop();
      std::string::string((string *)&DAT_06ba62d8,"sz__damage_1");
      nop();
      std::string::string((string *)&DAT_06ba62e0,"xb_damage_01");
      nop();
      std::string::string((string *)&DAT_06ba62e8,"y_damage_01");
      nop();
      std::string::string((string *)&DAT_06ba62f0,"yyp_damage_01");
      nop();
      std::string::string((string *)&DAT_06ba62f8,"yyp02_damage_01");
      nop();
      std::string::string((string *)&DAT_06ba6300,"yyq_damage_01");
      nop();
      std::string::string((string *)&DAT_06ba6308,"zui_damage_01");
      nop();
      std::string::string((string *)&DAT_06ba6310,"zyp_damage_01");
      nop();
      std::string::string((string *)&DAT_06ba6318,"zyp02_damage_01");
      nop();
      std::string::string((string *)&DAT_06ba6320,"zyq_damage_01");
      nop();
      std::string::string((string *)&DAT_06ba6328,"sz_damage_2");
      nop();
      __cxa_guard_release(&DAT_06ba6810);
      __cxa_atexit(FUN_04f50c60,uVar6,&DAT_06a88000);
    }
    puVar5 = &DAT_06ba6610;
    if (((DAT_06ba6610 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06ba6610), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech_Hydra *)&DAT_06ba6818;
      goto switchD_04f5a330_default;
    }
    this = (ZombieAnimRig_ZombossMech_Hydra *)&DAT_06ba6818;
    psVar3 = (string *)&DAT_06ba62b0;
    break;
  case 6:
    uVar6 = DAT_06ba6598 & 1;
    if (((DAT_06ba6598 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba6598), iVar2 != 0)) {
      std::string::string((string *)&DAT_06ba6848,"dragon_head_damage_02");
      nop();
      std::string::string((string *)&DAT_06ba6850,"dragon_head_horn_damage_02");
      nop();
      std::string::string((string *)&DAT_06ba6858,"sg_damage_2");
      nop();
      std::string::string((string *)&DAT_06ba6860,"mz_damage_03");
      nop();
      std::string::string((string *)&DAT_06ba6868,"sj01_damage_02");
      nop();
      std::string::string((string *)&DAT_06ba6870,"sz__damage_2");
      nop();
      std::string::string((string *)&DAT_06ba6878,"xb_damage_02");
      nop();
      std::string::string((string *)&DAT_06ba6880,"y_damage_02");
      nop();
      std::string::string((string *)&DAT_06ba6888,"yyp_damage_02");
      nop();
      std::string::string((string *)&DAT_06ba6890,"yyp02_damage_02");
      nop();
      std::string::string((string *)&DAT_06ba6898,"yyq_damage_02");
      nop();
      std::string::string((string *)&DAT_06ba68a0,"zui_damage_02");
      nop();
      std::string::string((string *)&DAT_06ba68a8,"zyp_damage_02");
      nop();
      std::string::string((string *)&DAT_06ba68b0,"zyp02_damage_02");
      nop();
      std::string::string((string *)&DAT_06ba68b8,"zyq_damage_02");
      nop();
      std::string::string((string *)&DAT_06ba68c0,"sz_damage_3");
      nop();
      __cxa_guard_release(&DAT_06ba6598);
      __cxa_atexit(FUN_04f50c28,uVar6,&DAT_06a88000);
    }
    puVar5 = &DAT_06ba6580;
    if (((DAT_06ba6580 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06ba6580), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech_Hydra *)&DAT_06ba6770;
      goto switchD_04f5a330_default;
    }
    this = (ZombieAnimRig_ZombossMech_Hydra *)&DAT_06ba6770;
    psVar3 = (string *)&DAT_06ba6848;
    break;
  default:
    goto switchD_04f5a330_default;
  }
  psVar4 = psVar3 + 0x80;
LAB_04f5a410:
  std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
            ((string *)this,psVar3,(allocator *)psVar4);
  __cxa_guard_release(puVar5);
  __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,this,&DAT_06a88000);
switchD_04f5a330_default:
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}

