// Class: ZombieAnimRig_ZombossMech_Future


/* ZombieAnimRig_ZombossMech_Future::SetRocketStartAnimFromTileType(PowerTileClass) */

void __thiscall
ZombieAnimRig_ZombossMech_Future::SetRocketStartAnimFromTileType
          (ZombieAnimRig_ZombossMech_Future *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x240) = param_2;
  return;
}


/* ZombieAnimRig_ZombossMech_Future::getRocketStartAnimName() const */

char * __thiscall
ZombieAnimRig_ZombossMech_Future::getRocketStartAnimName(ZombieAnimRig_ZombossMech_Future *this)

{
  char *pcVar1;
  
  switch(*(undefined4 *)(this + 0x240)) {
  case 0:
    return "linktile1_start";
  case 1:
    return "linktile2_start";
  case 2:
    return "linktile3_start";
  case 3:
    return "linktile4_start";
  case 4:
    return "linktile5_start";
  case 0xffffffff:
    pcVar1 = (char *)ZombieAnimRig_ZombossQigong::getSummonAnimName();
    return pcVar1;
  default:
    pcVar1 = (char *)ZombieAnimRig_ZombossQigong::getSummonAnimName();
    return pcVar1;
  }
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Future::StaticClassInit() */

void ZombieAnimRig_ZombossMech_Future::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ZombossMech_Future");
    (*pcVar2)(plVar1,asStack_10,FUN_0461ff7c,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ZombossMech_Future::StaticGetClass() */

long * ZombieAnimRig_ZombossMech_Future::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_Future",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ZombossMech_Future::GetClass() const */

long * ZombieAnimRig_ZombossMech_Future::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_Future",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ZombossMech_Future::~ZombieAnimRig_ZombossMech_Future() */

void __thiscall
ZombieAnimRig_ZombossMech_Future::~ZombieAnimRig_ZombossMech_Future
          (ZombieAnimRig_ZombossMech_Future *this)

{
  *(undefined ***)this = &PTR_GetClass_0687a3d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_Future_0687a740;
  ZombieAnimRig_ZombossMech::~ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech_Future::~ZombieAnimRig_ZombossMech_Future() */

void __thiscall
ZombieAnimRig_ZombossMech_Future::~ZombieAnimRig_ZombossMech_Future
          (ZombieAnimRig_ZombossMech_Future *this)

{
  ~ZombieAnimRig_ZombossMech_Future(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_Future::~ZombieAnimRig_ZombossMech_Future() */

void __thiscall
ZombieAnimRig_ZombossMech_Future::~ZombieAnimRig_ZombossMech_Future
          (ZombieAnimRig_ZombossMech_Future *this)

{
  ~ZombieAnimRig_ZombossMech_Future(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech_Future::~ZombieAnimRig_ZombossMech_Future() */

void __thiscall
ZombieAnimRig_ZombossMech_Future::~ZombieAnimRig_ZombossMech_Future
          (ZombieAnimRig_ZombossMech_Future *this)

{
  ~ZombieAnimRig_ZombossMech_Future(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_Future::ZombieAnimRig_ZombossMech_Future() */

void __thiscall
ZombieAnimRig_ZombossMech_Future::ZombieAnimRig_ZombossMech_Future
          (ZombieAnimRig_ZombossMech_Future *this)

{
  ZombieAnimRig_ZombossMech::ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  *(undefined4 *)(this + 0x240) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_0687a3d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_Future_0687a740;
  return;
}


/* ZombieAnimRig_ZombossMech_Future::StaticNew() */

ZombieAnimRig_ZombossMech_Future * ZombieAnimRig_ZombossMech_Future::StaticNew(void)

{
  ZombieAnimRig_ZombossMech_Future *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_ZombossMech_Future(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Future::getDamageLayerList(ZombieAnimRig_ZombossMech::DamagePhase)
   const */

void __thiscall
ZombieAnimRig_ZombossMech_Future::getDamageLayerList(undefined8 param_1,undefined4 param_2)

{
  string *psVar1;
  int iVar2;
  string *psVar3;
  string *psVar4;
  string *psVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  psVar1 = ___stack_chk_guard;
  psVar3 = ___stack_chk_guard;
  switch(param_2) {
  case 0:
    uVar7 = DAT_06b1a920 & 1;
    if (((DAT_06b1a920 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a920), iVar2 != 0)) {
      __cxa_guard_release(&DAT_06b1a920);
      __cxa_atexit(FUN_0461fc48,uVar7,&DAT_06a88000);
    }
    puVar6 = &DAT_06b1aa80;
    if (((DAT_06b1aa80 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1aa80), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b1aa88;
      goto switchD_046201d8_default;
    }
    psVar4 = (string *)&DAT_06b1a8f8;
    psVar3 = (string *)&DAT_06b1aa88;
    psVar5 = psVar4;
    goto LAB_04620370;
  case 1:
    uVar7 = DAT_06b1a878 & 1;
    if (((DAT_06b1a878 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a878), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1a988,"Zomboss_Damage_State_1_Dome");
      nop();
      std::string::string((string *)&DAT_06b1a990,"Zomboss_Damage_State_1_foot");
      nop();
      std::string::string((string *)&DAT_06b1a998,"Zomboss_Damage_State_1_Foot_Back");
      nop();
      std::string::string((string *)&DAT_06b1a9a0,"Zomboss_Damage_State_1_Head");
      nop();
      std::string::string((string *)&DAT_06b1a9a8,"Zomboss_Damage_State_1_Head_Layer");
      nop();
      std::string::string((string *)&DAT_06b1a9b0,"Zomboss_Damage_State_1_Jaw");
      nop();
      __cxa_guard_release(&DAT_06b1a878);
      __cxa_atexit(FUN_0461fd64,uVar7,&DAT_06a88000);
    }
    puVar6 = &DAT_06b1aa78;
    if (((DAT_06b1aa78 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1aa78), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b1a9b8;
      goto switchD_046201d8_default;
    }
    psVar3 = (string *)&DAT_06b1a9b8;
    psVar4 = (string *)&DAT_06b1a988;
    break;
  case 2:
    uVar7 = DAT_06b1aad0 & 1;
    if (((DAT_06b1aad0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1aad0), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1a9f0,"Zomboss_Damage_State_2_Dome");
      nop();
      std::string::string((string *)&DAT_06b1a9f8,"Zomboss_Damage_State_2_foot");
      nop();
      std::string::string((string *)&DAT_06b1aa00,"Zomboss_Damage_State_2_Foot_Back");
      nop();
      std::string::string((string *)&DAT_06b1aa08,"Zomboss_Damage_State_2_Head");
      nop();
      std::string::string((string *)&DAT_06b1aa10,"Zomboss_Damage_State_2_Head_Layer");
      nop();
      std::string::string((string *)&DAT_06b1aa18,"Zomboss_Damage_State_2_Jaw");
      nop();
      __cxa_guard_release(&DAT_06b1aad0);
      __cxa_atexit(FUN_0461fd2c,uVar7,&DAT_06a88000);
    }
    puVar6 = &DAT_06b1a968;
    if (((DAT_06b1a968 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1a968), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b1a9d0;
      goto switchD_046201d8_default;
    }
    psVar3 = (string *)&DAT_06b1a9d0;
    psVar4 = (string *)&DAT_06b1a9f0;
    break;
  case 3:
    uVar7 = DAT_06b1aa70 & 1;
    if (((DAT_06b1aa70 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1aa70), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1aa20,"Zomboss_Damage_State_3_Dome");
      nop();
      std::string::string((string *)&DAT_06b1aa28,"Zomboss_Damage_State_3_foot");
      nop();
      std::string::string((string *)&DAT_06b1aa30,"Zomboss_Damage_State_3_Foot_Back");
      nop();
      std::string::string((string *)&DAT_06b1aa38,"Zomboss_Damage_State_3_Head");
      nop();
      std::string::string((string *)&DAT_06b1aa40,"Zomboss_Damage_State_3_Head_Layer");
      nop();
      std::string::string((string *)&DAT_06b1aa48,"Zomboss_Damage_State_3_Jaw");
      nop();
      __cxa_guard_release(&DAT_06b1aa70);
      __cxa_atexit(FUN_0461fcf4,uVar7,&DAT_06a88000);
    }
    puVar6 = &DAT_06b1a9e8;
    if (((DAT_06b1a9e8 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1a9e8), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b1a970;
      goto switchD_046201d8_default;
    }
    psVar3 = (string *)&DAT_06b1a970;
    psVar4 = (string *)&DAT_06b1aa20;
    break;
  case 4:
    uVar7 = DAT_06b1a8f0 & 1;
    if (((DAT_06b1a8f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a8f0), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1a938,"Zomboss_Damage_State_4_Dome");
      nop();
      std::string::string((string *)&DAT_06b1a940,"Zomboss_Damage_State_4_foot");
      nop();
      std::string::string((string *)&DAT_06b1a948,"Zomboss_Damage_State_4_Foot_Back");
      nop();
      std::string::string((string *)&DAT_06b1a950,"Zomboss_Damage_State_4_Head");
      nop();
      std::string::string((string *)&DAT_06b1a958,"Zomboss_Damage_State_4_Head_Layer");
      nop();
      std::string::string((string *)&DAT_06b1a960,"Zomboss_Damage_State_4_Jaw");
      nop();
      __cxa_guard_release(&DAT_06b1a8f0);
      __cxa_atexit(FUN_0461fcbc,uVar7,&DAT_06a88000);
    }
    puVar6 = &DAT_06b1a8f8;
    if (((DAT_06b1a8f8 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1a8f8), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b1a8b8;
      goto switchD_046201d8_default;
    }
    psVar3 = (string *)&DAT_06b1a8b8;
    psVar4 = (string *)&DAT_06b1a938;
    break;
  case 5:
    uVar7 = DAT_06b1a880 & 1;
    if (((DAT_06b1a880 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a880), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1aaa0,"Zomboss_Damage_State_5_Dome");
      nop();
      std::string::string((string *)&DAT_06b1aaa8,"Zomboss_Damage_State_5_foot");
      nop();
      std::string::string((string *)&DAT_06b1aab0,"Zomboss_Damage_State_5_Foot_Back");
      nop();
      std::string::string((string *)&DAT_06b1aab8,"Zomboss_Damage_State_5_Head");
      nop();
      std::string::string((string *)&DAT_06b1aac0,"Zomboss_Damage_State_5_Head_Layer");
      nop();
      std::string::string((string *)&DAT_06b1aac8,"Zomboss_Damage_State_5_Jaw");
      nop();
      __cxa_guard_release(&DAT_06b1a880);
      __cxa_atexit(FUN_0461fc84,uVar7,&DAT_06a88000);
    }
    puVar6 = &DAT_06b1a8d0;
    if (((DAT_06b1a8d0 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1a8d0), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b1aa50;
      goto switchD_046201d8_default;
    }
    psVar3 = (string *)&DAT_06b1aa50;
    psVar4 = (string *)&DAT_06b1aaa0;
    break;
  case 6:
    uVar7 = DAT_06b1a900 & 1;
    if (((DAT_06b1a900 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1a900), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1a888,"Zomboss_Damage_State_6_Dome");
      nop();
      std::string::string((string *)&DAT_06b1a890,"Zomboss_Damage_State_6_foot");
      nop();
      std::string::string((string *)&DAT_06b1a898,"Zomboss_Damage_State_6_Foot_Back");
      nop();
      std::string::string((string *)&DAT_06b1a8a0,"Zomboss_Damage_State_6_Head");
      nop();
      std::string::string((string *)&DAT_06b1a8a8,"Zomboss_Damage_State_6_Head_Layer");
      nop();
      std::string::string((string *)&DAT_06b1a8b0,"Zomboss_Damage_State_6_Jaw");
      nop();
      __cxa_guard_release(&DAT_06b1a900);
      __cxa_atexit(FUN_0461fc4c,uVar7,&DAT_06a88000);
    }
    puVar6 = &DAT_06b1a918;
    if (((DAT_06b1a918 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b1a918), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b1a8d8;
      goto switchD_046201d8_default;
    }
    psVar3 = (string *)&DAT_06b1a8d8;
    psVar4 = (string *)&DAT_06b1a888;
    break;
  default:
    goto switchD_046201d8_default;
  }
  psVar5 = psVar4 + 0x30;
LAB_04620370:
  std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
            (psVar3,psVar4,(allocator *)psVar5);
  __cxa_guard_release(puVar6);
  __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,psVar3,&DAT_06a88000);
switchD_046201d8_default:
  if (psVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(psVar3);
  }
  return;
}

