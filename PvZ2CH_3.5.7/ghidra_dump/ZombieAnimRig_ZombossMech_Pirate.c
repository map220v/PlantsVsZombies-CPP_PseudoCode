// Class: ZombieAnimRig_ZombossMech_Pirate


/* ZombieAnimRig_ZombossMech_Pirate::getRocketLaunchAnimName() const */

char * ZombieAnimRig_ZombossMech_Pirate::getRocketLaunchAnimName(void)

{
  return "rocket_launch_start";
}


/* ZombieAnimRig_ZombossMech_Pirate::getRocketLaunchLoopAnimName() const */

char * ZombieAnimRig_ZombossMech_Pirate::getRocketLaunchLoopAnimName(void)

{
  return "rocket_launch_loop";
}


/* ZombieAnimRig_ZombossMech_Pirate::getRocketLaunchFireName() const */

char * ZombieAnimRig_ZombossMech_Pirate::getRocketLaunchFireName(void)

{
  return "rocket_launch_fire";
}


/* ZombieAnimRig_ZombossMech_Pirate::~ZombieAnimRig_ZombossMech_Pirate() */

void __thiscall
ZombieAnimRig_ZombossMech_Pirate::~ZombieAnimRig_ZombossMech_Pirate
          (ZombieAnimRig_ZombossMech_Pirate *this)

{
  *(undefined ***)this = &PTR_GetClass_0687a010;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_Pirate_0687a390;
  ZombieAnimRig_ZombossMech::~ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech_Pirate::~ZombieAnimRig_ZombossMech_Pirate() */

void __thiscall
ZombieAnimRig_ZombossMech_Pirate::~ZombieAnimRig_ZombossMech_Pirate
          (ZombieAnimRig_ZombossMech_Pirate *this)

{
  ~ZombieAnimRig_ZombossMech_Pirate(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_Pirate::~ZombieAnimRig_ZombossMech_Pirate() */

void __thiscall
ZombieAnimRig_ZombossMech_Pirate::~ZombieAnimRig_ZombossMech_Pirate
          (ZombieAnimRig_ZombossMech_Pirate *this)

{
  ~ZombieAnimRig_ZombossMech_Pirate(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech_Pirate::~ZombieAnimRig_ZombossMech_Pirate() */

void __thiscall
ZombieAnimRig_ZombossMech_Pirate::~ZombieAnimRig_ZombossMech_Pirate
          (ZombieAnimRig_ZombossMech_Pirate *this)

{
  ~ZombieAnimRig_ZombossMech_Pirate(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_Pirate::ZombieAnimRig_ZombossMech_Pirate() */

void __thiscall
ZombieAnimRig_ZombossMech_Pirate::ZombieAnimRig_ZombossMech_Pirate
          (ZombieAnimRig_ZombossMech_Pirate *this)

{
  ZombieAnimRig_ZombossMech::ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  *(undefined ***)this = &PTR_GetClass_0687a010;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_Pirate_0687a390;
  return;
}


/* ZombieAnimRig_ZombossMech_Pirate::StaticNew() */

ZombieAnimRig_ZombossMech_Pirate * ZombieAnimRig_ZombossMech_Pirate::StaticNew(void)

{
  ZombieAnimRig_ZombossMech_Pirate *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_ZombossMech_Pirate(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Pirate::StaticClassInit() */

void ZombieAnimRig_ZombossMech_Pirate::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ZombossMech_Pirate");
    (*pcVar2)(plVar1,asStack_10,FUN_0461f398,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ZombossMech_Pirate::StaticGetClass() */

long * ZombieAnimRig_ZombossMech_Pirate::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_Pirate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ZombossMech_Pirate::GetClass() const */

long * ZombieAnimRig_ZombossMech_Pirate::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_Pirate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Pirate::PlayRocketLaunchFire(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Pirate::PlayRocketLaunchFire
          (ZombieAnimRig_ZombossMech_Pirate *this,RtReflectionDelegate *param_2)

{
  char *__s;
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  __s = (char *)(**(code **)(*(long *)this + 0x368))();
  std::string::string(asStack_58,__s);
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
/* ZombieAnimRig_ZombossMech_Pirate::PlayRocketLaunchLoop() */

void __thiscall
ZombieAnimRig_ZombossMech_Pirate::PlayRocketLaunchLoop(ZombieAnimRig_ZombossMech_Pirate *this)

{
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = (char *)(**(code **)(*(long *)this + 0x360))();
  std::string::string(asStack_40,__s);
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
/* ZombieAnimRig_ZombossMech_Pirate::getDamageLayerList(ZombieAnimRig_ZombossMech::DamagePhase)
   const */

void __thiscall
ZombieAnimRig_ZombossMech_Pirate::getDamageLayerList(undefined8 param_1,undefined4 param_2)

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
    uVar6 = DAT_06b1a6d0 & 1;
    if (((DAT_06b1a6d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a6d0), iVar2 != 0)) {
      __cxa_guard_release(&DAT_06b1a6d0);
      __cxa_atexit(FUN_0461f064,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b1a6d8;
    if (((DAT_06b1a6d8 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1a6d8), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b1a6a0;
      goto switchD_0461f624_default;
    }
    psVar4 = (string *)&DAT_06b1a700;
    psVar3 = (string *)&DAT_06b1a6a0;
    psVar5 = psVar4;
    goto LAB_0461f7bc;
  case 1:
    uVar6 = DAT_06b1a860 & 1;
    if (((DAT_06b1a860 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a860), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1a738,"Zomboss_Cockpit_Head_Damage_1");
      nop();
      std::string::string((string *)&DAT_06b1a740,"Zomboss_Jaw_Damage_1");
      nop();
      std::string::string((string *)&DAT_06b1a748,"Zomboss_Leg_Front_Damage_1");
      nop();
      __cxa_guard_release(&DAT_06b1a860);
      __cxa_atexit(FUN_0461f16c,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b1a808;
    if (((DAT_06b1a808 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1a808), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b1a700;
      goto switchD_0461f624_default;
    }
    psVar3 = (string *)&DAT_06b1a700;
    psVar4 = (string *)&DAT_06b1a738;
    break;
  case 2:
    uVar6 = DAT_06b1a800 & 1;
    if (((DAT_06b1a800 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a800), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1a6e0,"Zomboss_Cockpit_Head_Damage_2");
      nop();
      std::string::string((string *)&DAT_06b1a6e8,"Zomboss_Jaw_Damage_2");
      nop();
      std::string::string((string *)&DAT_06b1a6f0,"Zomboss_Leg_Front_Damage_2");
      nop();
      __cxa_guard_release(&DAT_06b1a800);
      __cxa_atexit(FUN_0461f138,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b1a718;
    if (((DAT_06b1a718 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1a718), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b1a750;
      goto switchD_0461f624_default;
    }
    psVar3 = (string *)&DAT_06b1a750;
    psVar4 = (string *)&DAT_06b1a6e0;
    break;
  case 3:
    uVar6 = DAT_06b1a768 & 1;
    if (((DAT_06b1a768 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a768), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1a788,"Zomboss_Cockpit_Head_Damage_3");
      nop();
      std::string::string((string *)&DAT_06b1a790,"Zomboss_Jaw_Damage_3");
      nop();
      std::string::string((string *)&DAT_06b1a798,"Zomboss_Leg_Front_Damage_3");
      nop();
      __cxa_guard_release(&DAT_06b1a768);
      __cxa_atexit(FUN_0461f104,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b1a858;
    if (((DAT_06b1a858 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1a858), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b1a7c8;
      goto switchD_0461f624_default;
    }
    psVar3 = (string *)&DAT_06b1a7c8;
    psVar4 = (string *)&DAT_06b1a788;
    break;
  case 4:
    uVar6 = DAT_06b1a698 & 1;
    if (((DAT_06b1a698 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a698), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1a770,"Zomboss_Cockpit_Head_Damage_4");
      nop();
      std::string::string((string *)&DAT_06b1a778,"Zomboss_Jaw_Damage_4");
      nop();
      std::string::string((string *)&DAT_06b1a780,"Zomboss_Leg_Front_Damage_4");
      nop();
      __cxa_guard_release(&DAT_06b1a698);
      __cxa_atexit(FUN_0461f0d0,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b1a810;
    if (((DAT_06b1a810 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1a810), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b1a7e0;
      goto switchD_0461f624_default;
    }
    psVar3 = (string *)&DAT_06b1a7e0;
    psVar4 = (string *)&DAT_06b1a770;
    break;
  case 5:
    uVar6 = DAT_06b1a7f8 & 1;
    if (((DAT_06b1a7f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a7f8), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1a838,"Zomboss_Cockpit_Head_Damage_5");
      nop();
      std::string::string((string *)&DAT_06b1a840,"Zomboss_Jaw_Damage_5");
      nop();
      std::string::string((string *)&DAT_06b1a848,"Zomboss_Leg_Front_Damage_5");
      nop();
      __cxa_guard_release(&DAT_06b1a7f8);
      __cxa_atexit(FUN_0461f09c,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b1a6f8;
    if (((DAT_06b1a6f8 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1a6f8), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b1a7b0;
      goto switchD_0461f624_default;
    }
    psVar3 = (string *)&DAT_06b1a7b0;
    psVar4 = (string *)&DAT_06b1a838;
    break;
  case 6:
    uVar6 = DAT_06b1a720 & 1;
    if (((DAT_06b1a720 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a720), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1a6b8,"Zomboss_Cockpit_Head_Damage_6");
      nop();
      std::string::string((string *)&DAT_06b1a6c0,"Zomboss_Jaw_Damage_6");
      nop();
      std::string::string((string *)&DAT_06b1a6c8,"Zomboss_Leg_Front_Damage_6");
      nop();
      __cxa_guard_release(&DAT_06b1a720);
      __cxa_atexit(FUN_0461f068,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b1a850;
    if (((DAT_06b1a850 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1a850), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b1a818;
      goto switchD_0461f624_default;
    }
    psVar3 = (string *)&DAT_06b1a818;
    psVar4 = (string *)&DAT_06b1a6b8;
    break;
  default:
    goto switchD_0461f624_default;
  }
  psVar5 = psVar4 + 0x18;
LAB_0461f7bc:
  std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
            (psVar3,psVar4,(allocator *)psVar5);
  __cxa_guard_release(puVar7);
  __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,psVar3,&DAT_06a88000);
switchD_0461f624_default:
  if (psVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(psVar3);
  }
  return;
}

