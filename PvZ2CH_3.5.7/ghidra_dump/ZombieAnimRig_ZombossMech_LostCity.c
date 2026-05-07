// Class: ZombieAnimRig_ZombossMech_LostCity


/* ZombieAnimRig_ZombossMech_LostCity::getPreIntroAnimName() const */

char * ZombieAnimRig_ZombossMech_LostCity::getPreIntroAnimName(void)

{
  return "Pre_Intro";
}


/* ZombieAnimRig_ZombossMech_LostCity::getIdleAnimName() const */

undefined * ZombieAnimRig_ZombossMech_LostCity::getIdleAnimName(void)

{
  return &DAT_055a6dd0;
}


/* ZombieAnimRig_ZombossMech_LostCity::getStunLoopAnimName() const */

char * ZombieAnimRig_ZombossMech_LostCity::getStunLoopAnimName(void)

{
  return "stun_loop";
}


/* ZombieAnimRig_ZombossMech_LostCity::getStunEndAnimName() const */

char * ZombieAnimRig_ZombossMech_LostCity::getStunEndAnimName(void)

{
  return "stun_end";
}


/* ZombieAnimRig_ZombossMech_LostCity::getJumpStartAnimName() const */

char * ZombieAnimRig_ZombossMech_LostCity::getJumpStartAnimName(void)

{
  return "float_up";
}


/* ZombieAnimRig_ZombossMech_LostCity::getJumpLandAnimName() const */

char * ZombieAnimRig_ZombossMech_LostCity::getJumpLandAnimName(void)

{
  return "float_down";
}


/* ZombieAnimRig_ZombossMech_LostCity::getZombossDieAnimName() const */

char * ZombieAnimRig_ZombossMech_LostCity::getZombossDieAnimName(void)

{
  return "die_idle";
}


/* ZombieAnimRig_ZombossMech_LostCity::~ZombieAnimRig_ZombossMech_LostCity() */

void __thiscall
ZombieAnimRig_ZombossMech_LostCity::~ZombieAnimRig_ZombossMech_LostCity
          (ZombieAnimRig_ZombossMech_LostCity *this)

{
  *(undefined ***)this = &PTR_GetClass_068c5780;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_LostCity_068c5af0;
  ZombieAnimRig_ZombossMech::~ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech_LostCity::~ZombieAnimRig_ZombossMech_LostCity() */

void __thiscall
ZombieAnimRig_ZombossMech_LostCity::~ZombieAnimRig_ZombossMech_LostCity
          (ZombieAnimRig_ZombossMech_LostCity *this)

{
  ~ZombieAnimRig_ZombossMech_LostCity(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_LostCity::~ZombieAnimRig_ZombossMech_LostCity() */

void __thiscall
ZombieAnimRig_ZombossMech_LostCity::~ZombieAnimRig_ZombossMech_LostCity
          (ZombieAnimRig_ZombossMech_LostCity *this)

{
  ~ZombieAnimRig_ZombossMech_LostCity(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech_LostCity::~ZombieAnimRig_ZombossMech_LostCity() */

void __thiscall
ZombieAnimRig_ZombossMech_LostCity::~ZombieAnimRig_ZombossMech_LostCity
          (ZombieAnimRig_ZombossMech_LostCity *this)

{
  ~ZombieAnimRig_ZombossMech_LostCity(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_LostCity::ZombieAnimRig_ZombossMech_LostCity() */

void __thiscall
ZombieAnimRig_ZombossMech_LostCity::ZombieAnimRig_ZombossMech_LostCity
          (ZombieAnimRig_ZombossMech_LostCity *this)

{
  ZombieAnimRig_ZombossMech::ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  *(undefined ***)this = &PTR_GetClass_068c5780;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_LostCity_068c5af0;
  return;
}


/* ZombieAnimRig_ZombossMech_LostCity::StaticNew() */

ZombieAnimRig_ZombossMech_LostCity * ZombieAnimRig_ZombossMech_LostCity::StaticNew(void)

{
  ZombieAnimRig_ZombossMech_LostCity *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_ZombossMech_LostCity(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_LostCity::StaticClassInit() */

void ZombieAnimRig_ZombossMech_LostCity::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ZombossMech_LostCity");
    (*pcVar2)(plVar1,asStack_10,FUN_04731510,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ZombossMech_LostCity::StaticGetClass() */

long * ZombieAnimRig_ZombossMech_LostCity::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_LostCity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ZombossMech_LostCity::GetClass() const */

long * ZombieAnimRig_ZombossMech_LostCity::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_LostCity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_LostCity::PlayStartZombieDrop(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_LostCity::PlayStartZombieDrop
          (ZombieAnimRig_ZombossMech_LostCity *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"zombie_drop");
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
/* ZombieAnimRig_ZombossMech_LostCity::PlayLoopZombieDrop(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_LostCity::PlayLoopZombieDrop
          (ZombieAnimRig_ZombossMech_LostCity *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"zombie_drop_loop");
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
/* ZombieAnimRig_ZombossMech_LostCity::PlayEndZombieDrop(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_LostCity::PlayEndZombieDrop
          (ZombieAnimRig_ZombossMech_LostCity *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"zombie_drop_end");
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
/* ZombieAnimRig_ZombossMech_LostCity::PlaySandBagDrop(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_LostCity::PlaySandBagDrop
          (ZombieAnimRig_ZombossMech_LostCity *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"sandbag_drop");
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
/* ZombieAnimRig_ZombossMech_LostCity::getDamageLayerList(ZombieAnimRig_ZombossMech::DamagePhase)
   const */

void __thiscall
ZombieAnimRig_ZombossMech_LostCity::getDamageLayerList
          (ZombieAnimRig_ZombossMech_LostCity *this,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  string *psVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  lVar1 = ___stack_chk_guard;
  switch(param_2) {
  case 0:
    this = (ZombieAnimRig_ZombossMech_LostCity *)ZombieAnimRig::getEmptyLayerNames();
    goto switchD_04733ac4_default;
  case 1:
    uVar4 = DAT_06b22268 & 1;
    if (((DAT_06b22268 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b22268), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b221b8,"Damage_State_1_basket");
      nop();
      std::string::string((string *)&DAT_06b221c0,"Damage_State_1_basket_head");
      nop();
      std::string::string((string *)&DAT_06b221c8,"Damage_State_1_basket_sack1");
      nop();
      __cxa_guard_release(&DAT_06b22268);
      __cxa_atexit(FUN_04730c74,uVar4,&DAT_06a88000);
    }
    puVar5 = &DAT_06b22328;
    if (((DAT_06b22328 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b22328), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech_LostCity *)&DAT_06b22370;
      goto switchD_04733ac4_default;
    }
    this = (ZombieAnimRig_ZombossMech_LostCity *)&DAT_06b22370;
    psVar3 = (string *)&DAT_06b221b8;
    break;
  case 2:
    uVar4 = DAT_06b223c8 & 1;
    if (((DAT_06b223c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b223c8), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b223f0,"Damage_State_2_basket");
      nop();
      std::string::string((string *)&DAT_06b223f8,"Damage_State_2_basket_head");
      nop();
      std::string::string((string *)&DAT_06b22400,"Damage_State_2_basket_sack1");
      nop();
      __cxa_guard_release(&DAT_06b223c8);
      __cxa_atexit(FUN_04730c40,uVar4,&DAT_06a88000);
    }
    puVar5 = &DAT_06b22320;
    if (((DAT_06b22320 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b22320), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech_LostCity *)&DAT_06b22278;
      goto switchD_04733ac4_default;
    }
    this = (ZombieAnimRig_ZombossMech_LostCity *)&DAT_06b22278;
    psVar3 = (string *)&DAT_06b223f0;
    break;
  case 3:
    uVar4 = DAT_06b22420 & 1;
    if (((DAT_06b22420 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b22420), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b22230,"Damage_State_3_basket");
      nop();
      std::string::string((string *)&DAT_06b22238,"Damage_State_3_basket_head");
      nop();
      std::string::string((string *)&DAT_06b22240,"Damage_State_3_basket_sack1");
      nop();
      __cxa_guard_release(&DAT_06b22420);
      __cxa_atexit(FUN_04730c0c,uVar4,&DAT_06a88000);
    }
    puVar5 = &DAT_06b22248;
    if (((DAT_06b22248 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b22248), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech_LostCity *)&DAT_06b22408;
      goto switchD_04733ac4_default;
    }
    this = (ZombieAnimRig_ZombossMech_LostCity *)&DAT_06b22408;
    psVar3 = (string *)&DAT_06b22230;
    break;
  case 4:
    uVar4 = DAT_06b222c0 & 1;
    if (((DAT_06b222c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b222c0), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b221f0,"Damage_State_4_basket");
      nop();
      std::string::string((string *)&DAT_06b221f8,"Damage_State_4_basket_head");
      nop();
      std::string::string((string *)&DAT_06b22200,"Damage_State_4_basket_sack1");
      nop();
      __cxa_guard_release(&DAT_06b222c0);
      __cxa_atexit(FUN_04730bd8,uVar4,&DAT_06a88000);
    }
    puVar5 = &DAT_06b222c8;
    if (((DAT_06b222c8 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b222c8), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech_LostCity *)&DAT_06b22208;
      goto switchD_04733ac4_default;
    }
    this = (ZombieAnimRig_ZombossMech_LostCity *)&DAT_06b22208;
    psVar3 = (string *)&DAT_06b221f0;
    break;
  case 5:
    uVar4 = DAT_06b223c0 & 1;
    if (((DAT_06b223c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b223c0), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b222a8,"Damage_State_5_basket");
      nop();
      std::string::string((string *)&DAT_06b222b0,"Damage_State_5_basket");
      nop();
      std::string::string((string *)&DAT_06b222b8,"Damage_State_5_basket_sack1");
      nop();
      __cxa_guard_release(&DAT_06b223c0);
      __cxa_atexit(FUN_04730ba4,uVar4,&DAT_06a88000);
    }
    puVar5 = &DAT_06b22228;
    if (((DAT_06b22228 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b22228), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech_LostCity *)&DAT_06b221d8;
      goto switchD_04733ac4_default;
    }
    this = (ZombieAnimRig_ZombossMech_LostCity *)&DAT_06b221d8;
    psVar3 = (string *)&DAT_06b222a8;
    break;
  case 6:
    uVar4 = DAT_06b221d0 & 1;
    if (((DAT_06b221d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b221d0), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b22250,"Damage_State_6_basket");
      nop();
      std::string::string((string *)&DAT_06b22258,"Damage_State_6_basket_head");
      nop();
      std::string::string((string *)&DAT_06b22260,"Damage_State_6_basket_sack1");
      nop();
      __cxa_guard_release(&DAT_06b221d0);
      __cxa_atexit(FUN_04730b70,uVar4,&DAT_06a88000);
    }
    puVar5 = &DAT_06b223e8;
    if (((DAT_06b223e8 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b223e8), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech_LostCity *)&DAT_06b22348;
      goto switchD_04733ac4_default;
    }
    this = (ZombieAnimRig_ZombossMech_LostCity *)&DAT_06b22348;
    psVar3 = (string *)&DAT_06b22250;
    break;
  default:
    goto switchD_04733ac4_default;
  }
  std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
            ((string *)this,psVar3,(allocator *)(psVar3 + 0x18));
  __cxa_guard_release(puVar5);
  __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,this,&DAT_06a88000);
switchD_04733ac4_default:
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}

