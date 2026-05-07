// Class: ZombieAnimRig_ZombossMech_Dark


/* ZombieAnimRig_ZombossMech_Dark::~ZombieAnimRig_ZombossMech_Dark() */

void __thiscall
ZombieAnimRig_ZombossMech_Dark::~ZombieAnimRig_ZombossMech_Dark
          (ZombieAnimRig_ZombossMech_Dark *this)

{
  *(undefined ***)this = &PTR_GetClass_068c2730;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_Dark_068c2aa0;
  ZombieAnimRig_ZombossMech::~ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech_Dark::~ZombieAnimRig_ZombossMech_Dark() */

void __thiscall
ZombieAnimRig_ZombossMech_Dark::~ZombieAnimRig_ZombossMech_Dark
          (ZombieAnimRig_ZombossMech_Dark *this)

{
  ~ZombieAnimRig_ZombossMech_Dark(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_Dark::~ZombieAnimRig_ZombossMech_Dark() */

void __thiscall
ZombieAnimRig_ZombossMech_Dark::~ZombieAnimRig_ZombossMech_Dark
          (ZombieAnimRig_ZombossMech_Dark *this)

{
  ~ZombieAnimRig_ZombossMech_Dark(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech_Dark::~ZombieAnimRig_ZombossMech_Dark() */

void __thiscall
ZombieAnimRig_ZombossMech_Dark::~ZombieAnimRig_ZombossMech_Dark
          (ZombieAnimRig_ZombossMech_Dark *this)

{
  ~ZombieAnimRig_ZombossMech_Dark(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_Dark::ZombieAnimRig_ZombossMech_Dark() */

void __thiscall
ZombieAnimRig_ZombossMech_Dark::ZombieAnimRig_ZombossMech_Dark(ZombieAnimRig_ZombossMech_Dark *this)

{
  ZombieAnimRig_ZombossMech::ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  this[0x240] = (ZombieAnimRig_ZombossMech_Dark)0x0;
  *(undefined ***)this = &PTR_GetClass_068c2730;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_Dark_068c2aa0;
  return;
}


/* ZombieAnimRig_ZombossMech_Dark::StaticNew() */

ZombieAnimRig_ZombossMech_Dark * ZombieAnimRig_ZombossMech_Dark::StaticNew(void)

{
  ZombieAnimRig_ZombossMech_Dark *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_ZombossMech_Dark(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Dark::StaticClassInit() */

void ZombieAnimRig_ZombossMech_Dark::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ZombossMech_Dark");
    (*pcVar2)(plVar1,asStack_10,FUN_0471f8f4,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ZombossMech_Dark::StaticGetClass() */

long * ZombieAnimRig_ZombossMech_Dark::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_Dark",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ZombossMech_Dark::GetClass() const */

long * ZombieAnimRig_ZombossMech_Dark::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_Dark",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Dark::getDamageLayerList(ZombieAnimRig_ZombossMech::DamagePhase) const
    */

void __thiscall
ZombieAnimRig_ZombossMech_Dark::getDamageLayerList(undefined8 param_1,undefined4 param_2)

{
  string *psVar1;
  int iVar2;
  string *psVar3;
  string *psVar4;
  allocator *paVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  psVar1 = ___stack_chk_guard;
  psVar3 = ___stack_chk_guard;
  switch(param_2) {
  case 0:
    uVar6 = DAT_06b21a70 & 1;
    if (((DAT_06b21a70 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b21a70), iVar2 != 0)) {
      __cxa_guard_release(&DAT_06b21a70);
      __cxa_atexit(FUN_0471dfcc,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b219f0;
    if (((DAT_06b219f0 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b219f0), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b21a50;
      goto switchD_04722fd8_default;
    }
    psVar4 = (string *)&DAT_06b21bf8;
    psVar3 = (string *)&DAT_06b21a50;
    paVar5 = (allocator *)psVar4;
    goto LAB_04723170;
  case 1:
    uVar6 = DAT_06b21978 & 1;
    if (((DAT_06b21978 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b21978), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b21a38,"dragon_damage_nose");
      nop();
      __cxa_guard_release(&DAT_06b21978);
      __cxa_atexit(FUN_0471e02c,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b219c8;
    if (((DAT_06b219c8 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b219c8), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b21ae8;
      goto switchD_04722fd8_default;
    }
    psVar3 = (string *)&DAT_06b21ae8;
    psVar4 = (string *)&DAT_06b21a38;
    break;
  case 2:
    uVar6 = DAT_06b21cf0 & 1;
    if (((DAT_06b21cf0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b21cf0), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b219a0,"dragon_damage_snout");
      nop();
      __cxa_guard_release(&DAT_06b21cf0);
      __cxa_atexit(FUN_0471e020,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b21d50;
    if (((DAT_06b21d50 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b21d50), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b21b68;
      goto switchD_04722fd8_default;
    }
    psVar3 = (string *)&DAT_06b21b68;
    psVar4 = (string *)&DAT_06b219a0;
    break;
  case 3:
    uVar6 = DAT_06b219b8 & 1;
    if (((DAT_06b219b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b219b8), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b21a40,"dragon_damage_jaw");
      nop();
      __cxa_guard_release(&DAT_06b219b8);
      __cxa_atexit(FUN_0471e014,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b21c38;
    if (((DAT_06b21c38 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b21c38), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b21cb8;
      goto switchD_04722fd8_default;
    }
    psVar3 = (string *)&DAT_06b21cb8;
    psVar4 = (string *)&DAT_06b21a40;
    break;
  case 4:
    uVar6 = DAT_06b21c48 & 1;
    if (((DAT_06b21c48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b21c48), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b219d0,"dragon_damage_cheek");
      nop();
      __cxa_guard_release(&DAT_06b21c48);
      __cxa_atexit(FUN_0471e008,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b21c40;
    if (((DAT_06b21c40 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b21c40), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b21ca0;
      goto switchD_04722fd8_default;
    }
    psVar3 = (string *)&DAT_06b21ca0;
    psVar4 = (string *)&DAT_06b219d0;
    break;
  case 5:
    uVar6 = DAT_06b21a48 & 1;
    if (((DAT_06b21a48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b21a48), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b21cd8,"dragon_damage_beak");
      nop();
      __cxa_guard_release(&DAT_06b21a48);
      __cxa_atexit(FUN_0471dffc,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b21c50;
    if (((DAT_06b21c50 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b21c50), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b21d38;
      goto switchD_04722fd8_default;
    }
    psVar3 = (string *)&DAT_06b21d38;
    psVar4 = (string *)&DAT_06b21cd8;
    break;
  case 6:
    uVar6 = DAT_06b21ad8 & 1;
    if (((DAT_06b21ad8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b21ad8), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b21bf8,"dragon_damage_eyeball");
      nop();
      std::string::string((string *)&DAT_06b21c00,"dragon_damage_eye");
      nop();
      __cxa_guard_release(&DAT_06b21ad8);
      __cxa_atexit(FUN_0471dfd0,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06b21cd0;
    if (((DAT_06b21cd0 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b21cd0), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b21c08;
      goto switchD_04722fd8_default;
    }
    psVar4 = (string *)&DAT_06b21bf8;
    psVar3 = (string *)&DAT_06b21c08;
    paVar5 = (allocator *)&DAT_06b21c08;
    goto LAB_04723170;
  default:
    goto switchD_04722fd8_default;
  }
  paVar5 = (allocator *)(psVar4 + 8);
LAB_04723170:
  std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
            (psVar3,psVar4,paVar5);
  __cxa_guard_release(puVar7);
  __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,psVar3,&DAT_06a88000);
switchD_04722fd8_default:
  if (psVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(psVar3);
  }
  return;
}

