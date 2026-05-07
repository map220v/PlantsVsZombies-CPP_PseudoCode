// Class: ZombieAnimRig_ZombossMech_Steam


/* ZombieAnimRig_ZombossMech_Steam::getRushForwardAnimName() const */

char * ZombieAnimRig_ZombossMech_Steam::getRushForwardAnimName(void)

{
  return "dash_process";
}


/* ZombieAnimRig_ZombossMech_Steam::getRocketLaunchAnimName() const */

char * __thiscall
ZombieAnimRig_ZombossMech_Steam::getRocketLaunchAnimName(ZombieAnimRig_ZombossMech_Steam *this)

{
  if (*(int *)(this + 0x240) < 4) {
    return "missile_launch_1";
  }
  if (*(int *)(this + 0x240) == 4) {
    return "missile_launch_2";
  }
  return "missile_launch_3";
}


/* ZombieAnimRig_ZombossMech_Steam::~ZombieAnimRig_ZombossMech_Steam() */

void __thiscall
ZombieAnimRig_ZombossMech_Steam::~ZombieAnimRig_ZombossMech_Steam
          (ZombieAnimRig_ZombossMech_Steam *this)

{
  *(undefined ***)this = &PTR_GetClass_06750cd0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_Steam_06751040;
  ZombieAnimRig_ZombossMech::~ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech_Steam::~ZombieAnimRig_ZombossMech_Steam() */

void __thiscall
ZombieAnimRig_ZombossMech_Steam::~ZombieAnimRig_ZombossMech_Steam
          (ZombieAnimRig_ZombossMech_Steam *this)

{
  ~ZombieAnimRig_ZombossMech_Steam(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_Steam::~ZombieAnimRig_ZombossMech_Steam() */

void __thiscall
ZombieAnimRig_ZombossMech_Steam::~ZombieAnimRig_ZombossMech_Steam
          (ZombieAnimRig_ZombossMech_Steam *this)

{
  ~ZombieAnimRig_ZombossMech_Steam(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech_Steam::~ZombieAnimRig_ZombossMech_Steam() */

void __thiscall
ZombieAnimRig_ZombossMech_Steam::~ZombieAnimRig_ZombossMech_Steam
          (ZombieAnimRig_ZombossMech_Steam *this)

{
  ~ZombieAnimRig_ZombossMech_Steam(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_Steam::ZombieAnimRig_ZombossMech_Steam() */

void __thiscall
ZombieAnimRig_ZombossMech_Steam::ZombieAnimRig_ZombossMech_Steam
          (ZombieAnimRig_ZombossMech_Steam *this)

{
  ZombieAnimRig_ZombossMech::ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined ***)this = &PTR_GetClass_06750cd0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_Steam_06751040;
  return;
}


/* ZombieAnimRig_ZombossMech_Steam::StaticNew() */

ZombieAnimRig_ZombossMech_Steam * ZombieAnimRig_ZombossMech_Steam::StaticNew(void)

{
  ZombieAnimRig_ZombossMech_Steam *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_ZombossMech_Steam(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Steam::StaticClassInit() */

void ZombieAnimRig_ZombossMech_Steam::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ZombossMech_Steam");
    (*pcVar2)(plVar1,asStack_10,FUN_03c3fb98,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ZombossMech_Steam::StaticGetClass() */

long * ZombieAnimRig_ZombossMech_Steam::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_Steam",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ZombossMech_Steam::GetClass() const */

long * ZombieAnimRig_ZombossMech_Steam::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_Steam",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Steam::PlayImpCannonLaunchFire(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Steam::PlayImpCannonLaunchFire
          (ZombieAnimRig_ZombossMech_Steam *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"stun_start");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Steam::PlayImpCannonLaunch(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Steam::PlayImpCannonLaunch
          (ZombieAnimRig_ZombossMech_Steam *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"stun_end");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Steam::PlayPrepareRushStart(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Steam::PlayPrepareRushStart
          (ZombieAnimRig_ZombossMech_Steam *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"dash_start");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Steam::PlayCharge(int, RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Steam::PlayCharge
          (ZombieAnimRig_ZombossMech_Steam *this,int param_1,RtReflectionDelegate *param_3)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("mine_launch_%d",asStack_58,(ulong)(param_1 + 1));
  pcVar1 = *(code **)(*(long *)this + 0x170);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
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
/* ZombieAnimRig_ZombossMech_Steam::PlayChargeFail(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Steam::PlayChargeFail
          (ZombieAnimRig_ZombossMech_Steam *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"mine_fai");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Steam::PlayChargeEnd(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Steam::PlayChargeEnd
          (ZombieAnimRig_ZombossMech_Steam *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"mine_end");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Steam::PlayRushEnd(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Steam::PlayRushEnd
          (ZombieAnimRig_ZombossMech_Steam *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"dash_end");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Steam::PlayRushStart(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Steam::PlayRushStart
          (ZombieAnimRig_ZombossMech_Steam *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"dash_jump");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Steam::PlayThrowCoal(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Steam::PlayThrowCoal
          (ZombieAnimRig_ZombossMech_Steam *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"mine_launch");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Steam::PlayImpCannonLaunchLoop() */

void __thiscall
ZombieAnimRig_ZombossMech_Steam::PlayImpCannonLaunchLoop(ZombieAnimRig_ZombossMech_Steam *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"stun_loop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Steam::getDamageLayerList(ZombieAnimRig_ZombossMech::DamagePhase) const
    */

void __thiscall
ZombieAnimRig_ZombossMech_Steam::getDamageLayerList(undefined8 param_1,undefined4 param_2)

{
  string *psVar1;
  int iVar2;
  string *psVar3;
  string *psVar4;
  allocator *paVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  psVar1 = ___stack_chk_guard;
  psVar3 = ___stack_chk_guard;
  switch(param_2) {
  case 0:
    uVar7 = DAT_06ad0190 & 1;
    if (((DAT_06ad0190 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad0190), iVar2 != 0)) {
      __cxa_guard_release(&DAT_06ad0190);
      __cxa_atexit(FUN_03c3e55c,uVar7,&DAT_06a88000);
    }
    puVar6 = &DAT_06ad0520;
    if (((DAT_06ad0520 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06ad0520), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06ad0750;
      goto switchD_03c4c0d8_default;
    }
    psVar4 = (string *)&ZombossSteamRushActionHandler::sClass;
    psVar3 = (string *)&DAT_06ad0750;
    paVar5 = (allocator *)&ZombossSteamRushActionHandler::sClass;
    break;
  case 1:
    uVar7 = DAT_06ad0958 & 1;
    if (((DAT_06ad0958 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad0958), iVar2 != 0)) {
      std::string::string((string *)&DAT_06ad0198,"_zombie_zomboss_chuang01_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad01a0,"_zombie_zomboss_cockpit_head_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad01a8,"_zombie_zomboss_db02_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad01b0,"_zombie_zomboss_head_idle_hat_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad01b8,"_zombie_zomboss_head_upper_layer_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad01c0,"_zombie_zomboss_jaw_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad01c8,"_zombie_zomboss_jxb01_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad01d0,"_zombie_zomboss_jxb02_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad01d8,"_zombie_zomboss_jxb03_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad01e0,"_zombie_zomboss_jxb06_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad01e8,"_zombie_zomboss_jxb10_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad01f0,"_zombie_zomboss_jxb12_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad01f8,"_zombie_zomboss_leg_front_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad0200,"_zombie_zomboss_leg_front_upper_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad0208,"_zombie_zomboss_wheel_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad0210,"_zombie_zomboss_xz_damage_01");
      nop();
      __cxa_guard_release(&DAT_06ad0958);
      __cxa_atexit(FUN_03c3e6d0,uVar7,&DAT_06a88000);
    }
    puVar6 = &DAT_06ad03f8;
    if (((DAT_06ad03f8 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06ad03f8), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06ad0508;
      goto switchD_03c4c0d8_default;
    }
    psVar4 = (string *)&DAT_06ad0198;
    psVar3 = (string *)&DAT_06ad0508;
    paVar5 = (allocator *)&GridItemSteamTrain::sClass;
    break;
  case 2:
    uVar7 = DAT_06ad0250 & 1;
    if (((DAT_06ad0250 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad0250), iVar2 != 0)) {
      std::string::string((string *)&DAT_06ad0868,"_zombie_zomboss_chuang01_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad0870,"_zombie_zomboss_cockpit_head_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad0878,"_zombie_zomboss_db02_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad0880,"_zombie_zomboss_head_idle_hat_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad0888,"_zombie_zomboss_head_upper_layer_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad0890,"_zombie_zomboss_jaw_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad0898,"_zombie_zomboss_jxb01_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad08a0,"_zombie_zomboss_jxb02_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad08a8,"_zombie_zomboss_jxb03_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad08b0,"_zombie_zomboss_jxb06_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad08b8,"_zombie_zomboss_jxb10_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad08c0,"_zombie_zomboss_jxb12_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad08c8,"_zombie_zomboss_leg_front_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad08d0,"_zombie_zomboss_leg_front_upper_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad08d8,"_zombie_zomboss_wheel_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad08e0,"_zombie_zomboss_xz_damage_01");
      nop();
      __cxa_guard_release(&DAT_06ad0250);
      __cxa_atexit(FUN_03c3e698,uVar7,&DAT_06a88000);
    }
    puVar6 = &DAT_06ad0580;
    if (((DAT_06ad0580 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06ad0580), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06ad0978;
      goto switchD_03c4c0d8_default;
    }
    psVar4 = (string *)&DAT_06ad0868;
    psVar3 = (string *)&DAT_06ad0978;
    paVar5 = (allocator *)&DAT_06ad08e8;
    break;
  case 3:
    uVar7 = DAT_06ad0290 & 1;
    if (((DAT_06ad0290 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad0290), iVar2 != 0)) {
      std::string::string((string *)&DAT_06ad0348,"_zombie_zomboss_chuang01_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad0350,"_zombie_zomboss_cockpit_head_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad0358,"_zombie_zomboss_db02_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad0360,"_zombie_zomboss_head_idle_hat_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad0368,"_zombie_zomboss_head_upper_layer_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad0370,"_zombie_zomboss_jaw_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad0378,"_zombie_zomboss_jxb01_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad0380,"_zombie_zomboss_jxb02_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad0388,"_zombie_zomboss_jxb03_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad0390,"_zombie_zomboss_jxb06_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad0398,"_zombie_zomboss_jxb10_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad03a0,"_zombie_zomboss_jxb12_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad03a8,"_zombie_zomboss_leg_front_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad03b0,"_zombie_zomboss_leg_front_upper_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad03b8,"_zombie_zomboss_wheel_damage_01");
      nop();
      std::string::string((string *)&DAT_06ad03c0,"_zombie_zomboss_xz_damage_01");
      nop();
      __cxa_guard_release(&DAT_06ad0290);
      __cxa_atexit(FUN_03c3e660,uVar7,&DAT_06a88000);
    }
    puVar6 = &DAT_06ad0050;
    if (((DAT_06ad0050 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06ad0050), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06ad0038;
      goto switchD_03c4c0d8_default;
    }
    psVar4 = (string *)&DAT_06ad0348;
    psVar3 = (string *)&DAT_06ad0038;
    paVar5 = (allocator *)&ZombossSteamTrainSpawnActionDefinition::sClass;
    break;
  case 4:
    uVar7 = DAT_06ad07c8 & 1;
    if (((DAT_06ad07c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad07c8), iVar2 != 0)) {
      std::string::string((string *)&DAT_06ad07d0,"_zombie_zomboss_chuang01_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad07d8,"_zombie_zomboss_db02_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad07e0,"_zombie_zomboss_head_idle_hat_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad07e8,"_zombie_zomboss_head_upper_layer_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad07f0,"_zombie_zomboss_jaw_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad07f8,"_zombie_zomboss_jxb02_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad0800,"_zombie_zomboss_jxb03_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad0808,"_zombie_zomboss_jxb05_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad0810,"_zombie_zomboss_jxb09_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad0818,"_zombie_zomboss_jxb12_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad0820,"_zombie_zomboss_leg_front_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad0828,"_zombie_zomboss_wheel_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad0830,"_zombie_zomboss_xz_damage_02");
      nop();
      __cxa_guard_release(&DAT_06ad07c8);
      __cxa_atexit(FUN_03c3e628,uVar7,&DAT_06a88000);
    }
    puVar6 = &DAT_06ad0030;
    if (((DAT_06ad0030 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06ad0030), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06ad0060;
      goto switchD_03c4c0d8_default;
    }
    psVar4 = (string *)&DAT_06ad07d0;
    psVar3 = (string *)&DAT_06ad0060;
    paVar5 = (allocator *)&DAT_06ad0838;
    break;
  case 5:
    uVar7 = DAT_06ad02d0 & 1;
    if (((DAT_06ad02d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad02d0), iVar2 != 0)) {
      std::string::string((string *)&DAT_06ad05e8,"_zombie_zomboss_chuang01_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad05f0,"_zombie_zomboss_db02_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad05f8,"_zombie_zomboss_head_idle_hat_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad0600,"_zombie_zomboss_head_upper_layer_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad0608,"_zombie_zomboss_jaw_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad0610,"_zombie_zomboss_jxb02_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad0618,"_zombie_zomboss_jxb03_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad0620,"_zombie_zomboss_jxb05_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad0628,"_zombie_zomboss_jxb09_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad0630,"_zombie_zomboss_jxb12_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad0638,"_zombie_zomboss_leg_front_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad0640,"_zombie_zomboss_wheel_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad0648,"_zombie_zomboss_xz_damage_02");
      nop();
      __cxa_guard_release(&DAT_06ad02d0);
      __cxa_atexit(FUN_03c3e5f0,uVar7,&DAT_06a88000);
    }
    puVar6 = &DAT_06ad05a8;
    if (((DAT_06ad05a8 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06ad05a8), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06ad05d0;
      goto switchD_03c4c0d8_default;
    }
    psVar4 = (string *)&DAT_06ad05e8;
    psVar3 = (string *)&DAT_06ad05d0;
    paVar5 = (allocator *)&ZombossSteamJumpActionHandler::sClass;
    break;
  case 6:
    uVar7 = DAT_06ad0590 & 1;
    if (((DAT_06ad0590 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad0590), iVar2 != 0)) {
      std::string::string((string *)&DAT_06ad06b0,"_zombie_zomboss_chuang01_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad06b8,"_zombie_zomboss_db02_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad06c0,"_zombie_zomboss_head_idle_hat_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad06c8,"_zombie_zomboss_head_upper_layer_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad06d0,"_zombie_zomboss_jaw_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad06d8,"_zombie_zomboss_jxb02_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad06e0,"_zombie_zomboss_jxb03_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad06e8,"_zombie_zomboss_jxb05_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad06f0,"_zombie_zomboss_jxb09_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad06f8,"_zombie_zomboss_jxb12_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad0700,"_zombie_zomboss_leg_front_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad0708,"_zombie_zomboss_wheel_damage_02");
      nop();
      std::string::string((string *)&DAT_06ad0710,"_zombie_zomboss_xz_damage_02");
      nop();
      __cxa_guard_release(&DAT_06ad0590);
      __cxa_atexit(FUN_03c3e5b8,uVar7,&DAT_06a88000);
    }
    puVar6 = &DAT_06ad0660;
    if (((DAT_06ad0660 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06ad0660), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06ad0568;
      goto switchD_03c4c0d8_default;
    }
    psVar4 = (string *)&DAT_06ad06b0;
    psVar3 = (string *)&DAT_06ad0568;
    paVar5 = (allocator *)&ZombossSteamRestActionDefinition::sClass;
    break;
  default:
    goto switchD_03c4c0d8_default;
  }
  std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
            (psVar3,psVar4,paVar5);
  __cxa_guard_release(puVar6);
  __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,psVar3,&DAT_06a88000);
switchD_03c4c0d8_default:
  if (psVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(psVar3);
  }
  return;
}

