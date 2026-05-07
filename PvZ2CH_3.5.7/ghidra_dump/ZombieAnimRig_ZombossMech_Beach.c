// Class: ZombieAnimRig_ZombossMech_Beach


/* ZombieAnimRig_ZombossMech_Beach::getSummoningAnimName() const */

char * ZombieAnimRig_ZombossMech_Beach::getSummoningAnimName(void)

{
  return "spawn";
}


/* ZombieAnimRig_ZombossMech_Beach::~ZombieAnimRig_ZombossMech_Beach() */

void __thiscall
ZombieAnimRig_ZombossMech_Beach::~ZombieAnimRig_ZombossMech_Beach
          (ZombieAnimRig_ZombossMech_Beach *this)

{
  *(undefined ***)this = &PTR_GetClass_0690a290;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_Beach_0690a600;
  ZombieAnimRig_ZombossMech::~ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech_Beach::~ZombieAnimRig_ZombossMech_Beach() */

void __thiscall
ZombieAnimRig_ZombossMech_Beach::~ZombieAnimRig_ZombossMech_Beach
          (ZombieAnimRig_ZombossMech_Beach *this)

{
  ~ZombieAnimRig_ZombossMech_Beach(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_Beach::~ZombieAnimRig_ZombossMech_Beach() */

void __thiscall
ZombieAnimRig_ZombossMech_Beach::~ZombieAnimRig_ZombossMech_Beach
          (ZombieAnimRig_ZombossMech_Beach *this)

{
  ~ZombieAnimRig_ZombossMech_Beach(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech_Beach::~ZombieAnimRig_ZombossMech_Beach() */

void __thiscall
ZombieAnimRig_ZombossMech_Beach::~ZombieAnimRig_ZombossMech_Beach
          (ZombieAnimRig_ZombossMech_Beach *this)

{
  ~ZombieAnimRig_ZombossMech_Beach(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_Beach::ZombieAnimRig_ZombossMech_Beach() */

void __thiscall
ZombieAnimRig_ZombossMech_Beach::ZombieAnimRig_ZombossMech_Beach
          (ZombieAnimRig_ZombossMech_Beach *this)

{
  ZombieAnimRig_ZombossMech::ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  this[0x240] = (ZombieAnimRig_ZombossMech_Beach)0x0;
  *(undefined ***)this = &PTR_GetClass_0690a290;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_Beach_0690a600;
  return;
}


/* ZombieAnimRig_ZombossMech_Beach::StaticNew() */

ZombieAnimRig_ZombossMech_Beach * ZombieAnimRig_ZombossMech_Beach::StaticNew(void)

{
  ZombieAnimRig_ZombossMech_Beach *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_ZombossMech_Beach(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Beach::StaticClassInit() */

void ZombieAnimRig_ZombossMech_Beach::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ZombossMech_Beach");
    (*pcVar2)(plVar1,asStack_10,FUN_04840868,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ZombossMech_Beach::StaticGetClass() */

long * ZombieAnimRig_ZombossMech_Beach::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_Beach",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ZombossMech_Beach::GetClass() const */

long * ZombieAnimRig_ZombossMech_Beach::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_Beach",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Beach::PlaySubmerge(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Beach::PlaySubmerge
          (ZombieAnimRig_ZombossMech_Beach *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"submerge");
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
/* ZombieAnimRig_ZombossMech_Beach::PlayEmerge(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Beach::PlayEmerge
          (ZombieAnimRig_ZombossMech_Beach *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"emerge");
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
/* ZombieAnimRig_ZombossMech_Beach::PlayTangleKelpStunStart(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Beach::PlayTangleKelpStunStart
          (ZombieAnimRig_ZombossMech_Beach *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"tangled_on");
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
/* ZombieAnimRig_ZombossMech_Beach::PlayTangleKelpStunEnd(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Beach::PlayTangleKelpStunEnd
          (ZombieAnimRig_ZombossMech_Beach *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"tangled_off");
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


/* ZombieAnimRig_ZombossMech_Beach::getTeleportationEffectOffset() const */

DVec2 * __thiscall
ZombieAnimRig_ZombossMech_Beach::getTeleportationEffectOffset(ZombieAnimRig_ZombossMech_Beach *this)

{
  DVec2 *in_x8;
  
  DVec2::DVec2(in_x8,0.0,-70.0);
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Beach::PlayTangleKelpStunLoop() */

void __thiscall
ZombieAnimRig_ZombossMech_Beach::PlayTangleKelpStunLoop(ZombieAnimRig_ZombossMech_Beach *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"tangled_loop");
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
/* ZombieAnimRig_ZombossMech_Beach::getDamageLayerList(ZombieAnimRig_ZombossMech::DamagePhase) const
    */

void __thiscall
ZombieAnimRig_ZombossMech_Beach::getDamageLayerList
          (ZombieAnimRig_ZombossMech_Beach *this,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  string *psVar3;
  allocator *paVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  lVar1 = ___stack_chk_guard;
  switch(param_2) {
  case 0:
    this = (ZombieAnimRig_ZombossMech_Beach *)ZombieAnimRig::getEmptyLayerNames();
    goto switchD_04843f60_default;
  case 1:
    uVar5 = DAT_06b2ae88 & 1;
    if (((DAT_06b2ae88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b2ae88), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b2af20,"Zomboss_Damage_State_1_Cockpit");
      nop();
      std::string::string((string *)&DAT_06b2af28,"Zomboss_Damage_State_1_Eye");
      nop();
      std::string::string((string *)&DAT_06b2af30,"Zomboss_Damage_State_1_Fin");
      nop();
      std::string::string((string *)&DAT_06b2af38,"Zomboss_Damage_State_1_Head");
      nop();
      std::string::string((string *)&DAT_06b2af40,"Zomboss_Damage_State_1_Jaw");
      nop();
      __cxa_guard_release(&DAT_06b2ae88);
      __cxa_atexit(FUN_0483f148,uVar5,&DAT_06a88000);
    }
    puVar6 = &DAT_06b2add8;
    if (((DAT_06b2add8 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b2add8), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech_Beach *)&DAT_06b2aee8;
      goto switchD_04843f60_default;
    }
    this = (ZombieAnimRig_ZombossMech_Beach *)&DAT_06b2aee8;
    psVar3 = (string *)&DAT_06b2af20;
    break;
  case 2:
    uVar5 = DAT_06b2ae48 & 1;
    if (((DAT_06b2ae48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b2ae48), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b2afe0,"Zomboss_Damage_State_2_Cockpit");
      nop();
      std::string::string((string *)&DAT_06b2afe8,"Zomboss_Damage_State_2_Eye");
      nop();
      std::string::string((string *)&DAT_06b2aff0,"Zomboss_Damage_State_2_Fin");
      nop();
      std::string::string((string *)&DAT_06b2aff8,"Zomboss_Damage_State_2_Head");
      nop();
      std::string::string((string *)&DAT_06b2b000,"Zomboss_Damage_State_2_Jaw");
      nop();
      __cxa_guard_release(&DAT_06b2ae48);
      __cxa_atexit(FUN_0483f110,uVar5,&DAT_06a88000);
    }
    puVar6 = &DAT_06b2b0c8;
    if (((DAT_06b2b0c8 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b2b0c8), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech_Beach *)&DAT_06b2af08;
      goto switchD_04843f60_default;
    }
    this = (ZombieAnimRig_ZombossMech_Beach *)&DAT_06b2af08;
    psVar3 = (string *)&DAT_06b2afe0;
    break;
  case 3:
    uVar5 = DAT_06b2b070 & 1;
    if (((DAT_06b2b070 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b2b070), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b2ad68,"Zomboss_Damage_State_3_Cockpit");
      nop();
      std::string::string((string *)&DAT_06b2ad70,"Zomboss_Damage_State_3_Eye");
      nop();
      std::string::string((string *)&DAT_06b2ad78,"Zomboss_Damage_State_3_Fin");
      nop();
      std::string::string((string *)&DAT_06b2ad80,"Zomboss_Damage_State_3_Head");
      nop();
      std::string::string((string *)&DAT_06b2ad88,"Zomboss_Damage_State_3_Jaw");
      nop();
      __cxa_guard_release(&DAT_06b2b070);
      __cxa_atexit(FUN_0483f0d8,uVar5,&DAT_06a88000);
    }
    puVar6 = &DAT_06b2ae90;
    if (((DAT_06b2ae90 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b2ae90), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech_Beach *)&DAT_06b2b0b0;
      goto switchD_04843f60_default;
    }
    this = (ZombieAnimRig_ZombossMech_Beach *)&DAT_06b2b0b0;
    psVar3 = (string *)&DAT_06b2ad68;
    break;
  case 4:
    uVar5 = DAT_06b2b138 & 1;
    if (((DAT_06b2b138 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b2b138), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b2ade8,"Zomboss_Damage_State_4_Cockpit");
      nop();
      std::string::string((string *)&DAT_06b2adf0,"Zomboss_Damage_State_4_Eye");
      nop();
      std::string::string((string *)&DAT_06b2adf8,"Zomboss_Damage_State_4_Fin");
      nop();
      std::string::string((string *)&DAT_06b2ae00,"Zomboss_Damage_State_4_Head");
      nop();
      std::string::string((string *)&DAT_06b2ae08,"Zomboss_Damage_State_4_Jaw");
      nop();
      __cxa_guard_release(&DAT_06b2b138);
      __cxa_atexit(FUN_0483f0a0,uVar5,&DAT_06a88000);
    }
    puVar6 = &DAT_06b2b008;
    if (((DAT_06b2b008 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b2b008), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech_Beach *)&DAT_06b2b0d0;
      goto switchD_04843f60_default;
    }
    this = (ZombieAnimRig_ZombossMech_Beach *)&DAT_06b2b0d0;
    psVar3 = (string *)&DAT_06b2ade8;
    break;
  case 5:
    uVar5 = DAT_06b2b050 & 1;
    if (((DAT_06b2b050 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b2b050), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b2b110,"Zomboss_Damage_State_5_Cockpit");
      nop();
      std::string::string((string *)&DAT_06b2b118,"Zomboss_Damage_State_5_Eye");
      nop();
      std::string::string((string *)&DAT_06b2b120,"Zomboss_Damage_State_5_Fin");
      nop();
      std::string::string((string *)&DAT_06b2b128,"Zomboss_Damage_State_5_Head");
      nop();
      std::string::string((string *)&DAT_06b2b130,"Zomboss_Damage_State_5_Jaw");
      nop();
      __cxa_guard_release(&DAT_06b2b050);
      __cxa_atexit(FUN_0483f068,uVar5,&DAT_06a88000);
    }
    puVar6 = &DAT_06b2b108;
    if (((DAT_06b2b108 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b2b108), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech_Beach *)&DAT_06b2b0f0;
      goto switchD_04843f60_default;
    }
    this = (ZombieAnimRig_ZombossMech_Beach *)&DAT_06b2b0f0;
    psVar3 = (string *)&DAT_06b2b110;
    break;
  case 6:
    uVar5 = DAT_06b2afc8 & 1;
    if (((DAT_06b2afc8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b2afc8), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b2ae50,"Zomboss_Damage_State_6_Eye");
      nop();
      std::string::string((string *)&DAT_06b2ae58,"Zomboss_Damage_State_6_Fin");
      nop();
      std::string::string((string *)&DAT_06b2ae60,"Zomboss_Damage_State_6_Head");
      nop();
      std::string::string((string *)&DAT_06b2ae68,"Zomboss_Damage_State_6_Jaw");
      nop();
      __cxa_guard_release(&DAT_06b2afc8);
      __cxa_atexit(FUN_0483f02c,uVar5,&DAT_06a88000);
    }
    puVar6 = &DAT_06b2add0;
    if (((DAT_06b2add0 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b2add0), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech_Beach *)&DAT_06b2ae70;
      goto switchD_04843f60_default;
    }
    psVar3 = (string *)&DAT_06b2ae50;
    this = (ZombieAnimRig_ZombossMech_Beach *)&DAT_06b2ae70;
    paVar4 = (allocator *)&DAT_06b2ae70;
    goto LAB_048440d0;
  default:
    goto switchD_04843f60_default;
  }
  paVar4 = (allocator *)(psVar3 + 0x28);
LAB_048440d0:
  std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
            ((string *)this,psVar3,paVar4);
  __cxa_guard_release(puVar6);
  __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,this,&DAT_06a88000);
switchD_04843f60_default:
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}

