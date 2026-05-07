// Class: ZombieAnimRig_ZombossMech_IceAge


/* ZombieAnimRig_ZombossMech_IceAge::getStunEndAnimName() const */

undefined * ZombieAnimRig_ZombossMech_IceAge::getStunEndAnimName(void)

{
  return &DAT_0560ea88;
}


/* ZombieAnimRig_ZombossMech_IceAge::getIdleAnimName() const */

undefined * __thiscall
ZombieAnimRig_ZombossMech_IceAge::getIdleAnimName(ZombieAnimRig_ZombossMech_IceAge *this)

{
  if (this[0x240] == (ZombieAnimRig_ZombossMech_IceAge)0x0) {
    return &DAT_0560ea88;
  }
  return &DAT_055a6dd0;
}


/* ZombieAnimRig_ZombossMech_IceAge::getRocketLaunchAnimName() const */

char * ZombieAnimRig_ZombossMech_IceAge::getRocketLaunchAnimName(void)

{
  return "slingshot";
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_IceAge::StaticClassInit() */

void ZombieAnimRig_ZombossMech_IceAge::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ZombossMech_IceAge");
    (*pcVar2)(plVar1,asStack_10,FUN_0476b068,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ZombossMech_IceAge::StaticGetClass() */

long * ZombieAnimRig_ZombossMech_IceAge::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_IceAge",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ZombossMech_IceAge::GetClass() const */

long * ZombieAnimRig_ZombossMech_IceAge::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_IceAge",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ZombossMech_IceAge::~ZombieAnimRig_ZombossMech_IceAge() */

void __thiscall
ZombieAnimRig_ZombossMech_IceAge::~ZombieAnimRig_ZombossMech_IceAge
          (ZombieAnimRig_ZombossMech_IceAge *this)

{
  *(undefined ***)this = &PTR_GetClass_068d37a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_IceAge_068d3b10;
  ZombieAnimRig_ZombossMech::~ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech_IceAge::~ZombieAnimRig_ZombossMech_IceAge() */

void __thiscall
ZombieAnimRig_ZombossMech_IceAge::~ZombieAnimRig_ZombossMech_IceAge
          (ZombieAnimRig_ZombossMech_IceAge *this)

{
  ~ZombieAnimRig_ZombossMech_IceAge(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_IceAge::~ZombieAnimRig_ZombossMech_IceAge() */

void __thiscall
ZombieAnimRig_ZombossMech_IceAge::~ZombieAnimRig_ZombossMech_IceAge
          (ZombieAnimRig_ZombossMech_IceAge *this)

{
  ~ZombieAnimRig_ZombossMech_IceAge(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech_IceAge::~ZombieAnimRig_ZombossMech_IceAge() */

void __thiscall
ZombieAnimRig_ZombossMech_IceAge::~ZombieAnimRig_ZombossMech_IceAge
          (ZombieAnimRig_ZombossMech_IceAge *this)

{
  ~ZombieAnimRig_ZombossMech_IceAge(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_IceAge::ZombieAnimRig_ZombossMech_IceAge() */

void __thiscall
ZombieAnimRig_ZombossMech_IceAge::ZombieAnimRig_ZombossMech_IceAge
          (ZombieAnimRig_ZombossMech_IceAge *this)

{
  ZombieAnimRig_ZombossMech::ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  this[0x240] = (ZombieAnimRig_ZombossMech_IceAge)0x0;
  *(undefined ***)this = &PTR_GetClass_068d37a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_IceAge_068d3b10;
  return;
}


/* ZombieAnimRig_ZombossMech_IceAge::StaticNew() */

ZombieAnimRig_ZombossMech_IceAge * ZombieAnimRig_ZombossMech_IceAge::StaticNew(void)

{
  ZombieAnimRig_ZombossMech_IceAge *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_ZombossMech_IceAge(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_IceAge::PlaySpawnGlacier(int,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_IceAge::PlaySpawnGlacier
          (ZombieAnimRig_ZombossMech_IceAge *this,int param_1,RtReflectionDelegate *param_3)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  Sexy::StrFormat("glacier_column_%d",asStack_58,(ulong)(6 - param_1));
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
/* ZombieAnimRig_ZombossMech_IceAge::PlayFreezeRow(int,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_IceAge::PlayFreezeRow
          (ZombieAnimRig_ZombossMech_IceAge *this,int param_1,RtReflectionDelegate *param_3)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  Sexy::StrFormat("wind_%d",asStack_58,(ulong)(param_1 + 1));
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
/* ZombieAnimRig_ZombossMech_IceAge::PlayRegenerateIceCrust(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_IceAge::PlayRegenerateIceCrust
          (ZombieAnimRig_ZombossMech_IceAge *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"cover_up");
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
/* ZombieAnimRig_ZombossMech_IceAge::PlayReveal(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_IceAge::PlayReveal
          (ZombieAnimRig_ZombossMech_IceAge *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"reveal");
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
/* ZombieAnimRig_ZombossMech_IceAge::PlayStun(Sexy::Delegate3<std::string const&, std::string
   const&, int>) */

void __thiscall
ZombieAnimRig_ZombossMech_IceAge::PlayStun
          (ZombieAnimRig_ZombossMech_IceAge *this,Delegate3 *param_2)

{
  string asStack_40 [8];
  Delegate3<std::string_const&,std::string_const&,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"stun");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38,param_2);
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
/* ZombieAnimRig_ZombossMech_IceAge::PlayStreetIdle(RtReflectionDelegate<Sexy::Delegate3<std::string
   const&, std::string const&, int> >) */

void __thiscall
ZombieAnimRig_ZombossMech_IceAge::PlayStreetIdle
          (ZombieAnimRig_ZombossMech_IceAge *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"almanac_idle");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail(iVar1 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_IceAge::PlayRocketStart(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_IceAge::PlayRocketStart
          (undefined8 param_1,RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *param_2)

{
  Delegate1wRet<bool,SexyURL_const&> *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Delegate1wRet<bool,SexyURL_const&> *)
         RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::GetDelegate(param_2);
  std::string::string(asStack_10,"");
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(this,(SexyURL *)asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_IceAge::getDamageLayerList(ZombieAnimRig_ZombossMech::DamagePhase)
   const */

void __thiscall
ZombieAnimRig_ZombossMech_IceAge::getDamageLayerList(undefined8 param_1,undefined4 param_2)

{
  string *psVar1;
  int iVar2;
  string *psVar3;
  string *psVar4;
  string *psVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  psVar1 = ___stack_chk_guard;
  psVar3 = ___stack_chk_guard;
  switch(param_2) {
  case 0:
    uVar6 = DAT_06b24108 & 1;
    if (((DAT_06b24108 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b24108), iVar2 != 0)) {
      __cxa_guard_release(&DAT_06b24108);
      __cxa_atexit(FUN_0476a400,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b24060;
    if (((DAT_06b24060 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b24060), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b240e8;
      goto switchD_0476f070_default;
    }
    psVar4 = (string *)&DAT_06b241f8;
    psVar3 = (string *)&DAT_06b240e8;
    psVar5 = psVar4;
    goto LAB_0476f208;
  case 1:
    uVar6 = DAT_06b24090 & 1;
    if (((DAT_06b24090 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b24090), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b23fc0,"dome_damage1");
      nop();
      std::string::string((string *)&DAT_06b23fc8,"ear_damage1");
      nop();
      std::string::string((string *)&DAT_06b23fd0,"trunk_base_damage1");
      nop();
      std::string::string((string *)&DAT_06b23fd8,"tusk_front_damage1");
      nop();
      std::string::string((string *)&DAT_06b23fe0,"tusk2_front_damage1");
      nop();
      __cxa_guard_release(&DAT_06b24090);
      __cxa_atexit(FUN_0476a51c,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b240e0;
    if (((DAT_06b240e0 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b240e0), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b24018;
      goto switchD_0476f070_default;
    }
    psVar3 = (string *)&DAT_06b24018;
    psVar4 = (string *)&DAT_06b23fc0;
    break;
  case 2:
    uVar6 = DAT_06b24078 & 1;
    if (((DAT_06b24078 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b24078), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b24130,"dome_damage2");
      nop();
      std::string::string((string *)&DAT_06b24138,"ear_damage2");
      nop();
      std::string::string((string *)&DAT_06b24140,"trunk_base_damage2");
      nop();
      std::string::string((string *)&DAT_06b24148,"tusk_front_damage2");
      nop();
      std::string::string((string *)&DAT_06b24150,"tusk2_front_damage2");
      nop();
      __cxa_guard_release(&DAT_06b24078);
      __cxa_atexit(FUN_0476a4e4,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b24088;
    if (((DAT_06b24088 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b24088), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b23f88;
      goto switchD_0476f070_default;
    }
    psVar3 = (string *)&DAT_06b23f88;
    psVar4 = (string *)&DAT_06b24130;
    break;
  case 3:
    uVar6 = DAT_06b24040 & 1;
    if (((DAT_06b24040 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b24040), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b23f60,"dome_damage3");
      nop();
      std::string::string((string *)&DAT_06b23f68,"ear_damage3");
      nop();
      std::string::string((string *)&DAT_06b23f70,"trunk_base_damage3");
      nop();
      std::string::string((string *)&DAT_06b23f78,"tusk_front_damage3");
      nop();
      std::string::string((string *)&DAT_06b23f80,"tusk2_front_damage3");
      nop();
      __cxa_guard_release(&DAT_06b24040);
      __cxa_atexit(FUN_0476a4ac,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b240d8;
    if (((DAT_06b240d8 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b240d8), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b24048;
      goto switchD_0476f070_default;
    }
    psVar3 = (string *)&DAT_06b24048;
    psVar4 = (string *)&DAT_06b23f60;
    break;
  case 4:
    uVar6 = DAT_06b23fb0 & 1;
    if (((DAT_06b23fb0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b23fb0), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b23ee0,"dome_damage4");
      nop();
      std::string::string((string *)&DAT_06b23ee8,"ear_damage4");
      nop();
      std::string::string((string *)&DAT_06b23ef0,"trunk_base_damage4");
      nop();
      std::string::string((string *)&DAT_06b23ef8,"tusk_front_damage4");
      nop();
      std::string::string((string *)&DAT_06b23f00,"tusk2_front_damage4");
      nop();
      __cxa_guard_release(&DAT_06b23fb0);
      __cxa_atexit(FUN_0476a474,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b23f48;
    if (((DAT_06b23f48 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b23f48), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b241f8;
      goto switchD_0476f070_default;
    }
    psVar3 = (string *)&DAT_06b241f8;
    psVar4 = (string *)&DAT_06b23ee0;
    break;
  case 5:
    uVar6 = DAT_06b24080 & 1;
    if (((DAT_06b24080 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b24080), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b23ff0,"dome_damage5");
      nop();
      std::string::string((string *)&DAT_06b23ff8,"ear_damage5");
      nop();
      std::string::string((string *)&DAT_06b24000,"trunk_base_damage5");
      nop();
      std::string::string((string *)&DAT_06b24008,"tusk_front_damage5");
      nop();
      std::string::string((string *)&DAT_06b24010,"tusk2_front_damage5");
      nop();
      __cxa_guard_release(&DAT_06b24080);
      __cxa_atexit(FUN_0476a43c,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b23fb8;
    if (((DAT_06b23fb8 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b23fb8), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b23ec8;
      goto switchD_0476f070_default;
    }
    psVar3 = (string *)&DAT_06b23ec8;
    psVar4 = (string *)&DAT_06b23ff0;
    break;
  case 6:
    uVar6 = DAT_06b24198 & 1;
    if (((DAT_06b24198 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b24198), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b23f08,"dome_damage5");
      nop();
      std::string::string((string *)&DAT_06b23f10,"ear_damage5");
      nop();
      std::string::string((string *)&DAT_06b23f18,"trunk_base_damage5");
      nop();
      std::string::string((string *)&DAT_06b23f20,"tusk_front_damage5");
      nop();
      std::string::string((string *)&DAT_06b23f28,"tusk2_front_damage5");
      nop();
      __cxa_guard_release(&DAT_06b24198);
      __cxa_atexit(FUN_0476a404,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b24210;
    if (((DAT_06b24210 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b24210), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b23ea0;
      goto switchD_0476f070_default;
    }
    psVar3 = (string *)&DAT_06b23ea0;
    psVar4 = (string *)&DAT_06b23f08;
    break;
  default:
    goto switchD_0476f070_default;
  }
  psVar5 = psVar4 + 0x28;
LAB_0476f208:
  std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
            (psVar3,psVar4,(allocator *)psVar5);
  __cxa_guard_release(puVar7);
  __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,psVar3,&DAT_06a88000);
switchD_0476f070_default:
  if (psVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(psVar3);
  }
  return;
}

