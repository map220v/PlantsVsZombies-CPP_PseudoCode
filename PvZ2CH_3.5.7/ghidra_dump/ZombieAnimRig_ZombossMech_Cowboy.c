// Class: ZombieAnimRig_ZombossMech_Cowboy


/* ZombieAnimRig_ZombossMech_Cowboy::~ZombieAnimRig_ZombossMech_Cowboy() */

void __thiscall
ZombieAnimRig_ZombossMech_Cowboy::~ZombieAnimRig_ZombossMech_Cowboy
          (ZombieAnimRig_ZombossMech_Cowboy *this)

{
  *(undefined ***)this = &PTR_GetClass_06879c60;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_Cowboy_06879fd0;
  ZombieAnimRig_ZombossMech::~ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech_Cowboy::~ZombieAnimRig_ZombossMech_Cowboy() */

void __thiscall
ZombieAnimRig_ZombossMech_Cowboy::~ZombieAnimRig_ZombossMech_Cowboy
          (ZombieAnimRig_ZombossMech_Cowboy *this)

{
  ~ZombieAnimRig_ZombossMech_Cowboy(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_Cowboy::~ZombieAnimRig_ZombossMech_Cowboy() */

void __thiscall
ZombieAnimRig_ZombossMech_Cowboy::~ZombieAnimRig_ZombossMech_Cowboy
          (ZombieAnimRig_ZombossMech_Cowboy *this)

{
  ~ZombieAnimRig_ZombossMech_Cowboy(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech_Cowboy::~ZombieAnimRig_ZombossMech_Cowboy() */

void __thiscall
ZombieAnimRig_ZombossMech_Cowboy::~ZombieAnimRig_ZombossMech_Cowboy
          (ZombieAnimRig_ZombossMech_Cowboy *this)

{
  ~ZombieAnimRig_ZombossMech_Cowboy(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_Cowboy::ZombieAnimRig_ZombossMech_Cowboy() */

void __thiscall
ZombieAnimRig_ZombossMech_Cowboy::ZombieAnimRig_ZombossMech_Cowboy
          (ZombieAnimRig_ZombossMech_Cowboy *this)

{
  ZombieAnimRig_ZombossMech::ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  *(undefined ***)this = &PTR_GetClass_06879c60;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_Cowboy_06879fd0;
  return;
}


/* ZombieAnimRig_ZombossMech_Cowboy::StaticNew() */

ZombieAnimRig_ZombossMech_Cowboy * ZombieAnimRig_ZombossMech_Cowboy::StaticNew(void)

{
  ZombieAnimRig_ZombossMech_Cowboy *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_ZombossMech_Cowboy(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Cowboy::StaticClassInit() */

void ZombieAnimRig_ZombossMech_Cowboy::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ZombossMech_Cowboy");
    (*pcVar2)(plVar1,asStack_10,FUN_0461e854,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ZombossMech_Cowboy::StaticGetClass() */

long * ZombieAnimRig_ZombossMech_Cowboy::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_Cowboy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ZombossMech_Cowboy::GetClass() const */

long * ZombieAnimRig_ZombossMech_Cowboy::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_Cowboy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Cowboy::getDamageLayerList(ZombieAnimRig_ZombossMech::DamagePhase)
   const */

void __thiscall
ZombieAnimRig_ZombossMech_Cowboy::getDamageLayerList(undefined8 param_1,undefined4 param_2)

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
    uVar6 = DAT_06b1a4d0 & 1;
    if (((DAT_06b1a4d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a4d0), iVar2 != 0)) {
      __cxa_guard_release(&DAT_06b1a4d0);
      __cxa_atexit(FUN_0461e4f0,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b1a680;
    if (((DAT_06b1a680 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1a680), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b1a5f8;
      goto switchD_0461e974_default;
    }
    psVar4 = (string *)&DAT_06b1a688;
    psVar3 = (string *)&DAT_06b1a5f8;
    psVar5 = psVar4;
    goto LAB_0461eb0c;
  case 1:
    uVar6 = DAT_06b1a618 & 1;
    if (((DAT_06b1a618 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a618), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1a4d8,"Zomboss_Damage_State_1_Foot");
      nop();
      std::string::string((string *)&DAT_06b1a4e0,"Zomboss_Damage_State_1_Foot_Back");
      nop();
      std::string::string((string *)&DAT_06b1a4e8,"Zomboss_Damage_State_1_Head_Layer");
      nop();
      std::string::string((string *)&DAT_06b1a4f0,"Zomboss_Damage_State_1_Jaw");
      nop();
      __cxa_guard_release(&DAT_06b1a618);
      __cxa_atexit(FUN_0461e620,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b1a610;
    if (((DAT_06b1a610 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1a610), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b1a620;
      goto switchD_0461e974_default;
    }
    psVar3 = (string *)&DAT_06b1a620;
    psVar4 = (string *)&DAT_06b1a4d8;
    break;
  case 2:
    uVar6 = DAT_06b1a4c0 & 1;
    if (((DAT_06b1a4c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a4c0), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1a658,"Zomboss_Damage_State_2_Foot");
      nop();
      std::string::string((string *)&DAT_06b1a660,"Zomboss_Damage_State_2_Foot_Back");
      nop();
      std::string::string((string *)&DAT_06b1a668,"Zomboss_Damage_State_2_Head_Layer");
      nop();
      std::string::string((string *)&DAT_06b1a670,"Zomboss_Damage_State_2_Jaw");
      nop();
      __cxa_guard_release(&DAT_06b1a4c0);
      __cxa_atexit(FUN_0461e5e4,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b1a4a0;
    if (((DAT_06b1a4a0 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1a4a0), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b1a638;
      goto switchD_0461e974_default;
    }
    psVar3 = (string *)&DAT_06b1a638;
    psVar4 = (string *)&DAT_06b1a658;
    break;
  case 3:
    uVar6 = DAT_06b1a650 & 1;
    if (((DAT_06b1a650 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a650), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1a5a8,"Zomboss_Damage_State_3_Foot");
      nop();
      std::string::string((string *)&DAT_06b1a5b0,"Zomboss_Damage_State_3_Foot_Back");
      nop();
      std::string::string((string *)&DAT_06b1a5b8,"Zomboss_Damage_State_3_Head_Layer");
      nop();
      std::string::string((string *)&DAT_06b1a5c0,"Zomboss_Damage_State_3_Jaw");
      nop();
      __cxa_guard_release(&DAT_06b1a650);
      __cxa_atexit(FUN_0461e5a8,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b1a578;
    if (((DAT_06b1a578 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1a578), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b1a518;
      goto switchD_0461e974_default;
    }
    psVar3 = (string *)&DAT_06b1a518;
    psVar4 = (string *)&DAT_06b1a5a8;
    break;
  case 4:
    uVar6 = DAT_06b1a678 & 1;
    if (((DAT_06b1a678 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a678), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1a530,"Zomboss_Damage_State_4_Foot");
      nop();
      std::string::string((string *)&DAT_06b1a538,"Zomboss_Damage_State_4_Foot_Back");
      nop();
      std::string::string((string *)&DAT_06b1a540,"Zomboss_Damage_State_4_Head_Layer");
      nop();
      std::string::string((string *)&DAT_06b1a548,"Zomboss_Damage_State_4_Jaw");
      nop();
      __cxa_guard_release(&DAT_06b1a678);
      __cxa_atexit(FUN_0461e56c,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b1a580;
    if (((DAT_06b1a580 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1a580), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b1a4a8;
      goto switchD_0461e974_default;
    }
    psVar3 = (string *)&DAT_06b1a4a8;
    psVar4 = (string *)&DAT_06b1a530;
    break;
  case 5:
    uVar6 = DAT_06b1a4c8 & 1;
    if (((DAT_06b1a4c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a4c8), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1a5d8,"Zomboss_Damage_State_5_Foot");
      nop();
      std::string::string((string *)&DAT_06b1a5e0,"Zomboss_Damage_State_5_Foot_Back");
      nop();
      std::string::string((string *)&DAT_06b1a5e8,"Zomboss_Damage_State_5_Head_Layer");
      nop();
      std::string::string((string *)&DAT_06b1a5f0,"Zomboss_Damage_State_5_Jaw");
      nop();
      __cxa_guard_release(&DAT_06b1a4c8);
      __cxa_atexit(FUN_0461e530,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b1a590;
    if (((DAT_06b1a590 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1a590), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b1a488;
      goto switchD_0461e974_default;
    }
    psVar3 = (string *)&DAT_06b1a488;
    psVar4 = (string *)&DAT_06b1a5d8;
    break;
  case 6:
    uVar6 = DAT_06b1a588 & 1;
    if (((DAT_06b1a588 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a588), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1a4f8,"Zomboss_Damage_State_6_Foot");
      nop();
      std::string::string((string *)&DAT_06b1a500,"Zomboss_Damage_State_6_Foot_Back");
      nop();
      std::string::string((string *)&DAT_06b1a508,"Zomboss_Damage_State_6_Head_Layer");
      nop();
      std::string::string((string *)&DAT_06b1a510,"Zomboss_Damage_State_6_Jaw");
      nop();
      __cxa_guard_release(&DAT_06b1a588);
      __cxa_atexit(FUN_0461e4f4,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b1a5c8;
    if (((DAT_06b1a5c8 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1a5c8), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b1a550;
      goto switchD_0461e974_default;
    }
    psVar3 = (string *)&DAT_06b1a550;
    psVar4 = (string *)&DAT_06b1a4f8;
    break;
  default:
    goto switchD_0461e974_default;
  }
  psVar5 = psVar4 + 0x20;
LAB_0461eb0c:
  std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
            (psVar3,psVar4,(allocator *)psVar5);
  __cxa_guard_release(puVar7);
  __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,psVar3,&DAT_06a88000);
switchD_0461e974_default:
  if (psVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(psVar3);
  }
  return;
}

