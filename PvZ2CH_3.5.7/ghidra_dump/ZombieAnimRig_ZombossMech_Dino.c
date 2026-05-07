// Class: ZombieAnimRig_ZombossMech_Dino


/* ZombieAnimRig_ZombossMech_Dino::getRocketLaunchAnimName() const */

char * ZombieAnimRig_ZombossMech_Dino::getRocketLaunchAnimName(void)

{
  return "rocket_launch";
}


/* ZombieAnimRig_ZombossMech_Dino::getSummoningAnimName() const */

char * ZombieAnimRig_ZombossMech_Dino::getSummoningAnimName(void)

{
  return "summon_dinosaurs";
}


/* ZombieAnimRig_ZombossMech_Dino::getRocketStartAnimName() const */

char * ZombieAnimRig_ZombossMech_Dino::getRocketStartAnimName(void)

{
  return "rocket_buildup";
}


/* ZombieAnimRig_ZombossMech_Dino::~ZombieAnimRig_ZombossMech_Dino() */

void __thiscall
ZombieAnimRig_ZombossMech_Dino::~ZombieAnimRig_ZombossMech_Dino
          (ZombieAnimRig_ZombossMech_Dino *this)

{
  *(undefined ***)this = &PTR_GetClass_068f7be0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_Dino_068f7f50;
  ZombieAnimRig_ZombossMech::~ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech_Dino::~ZombieAnimRig_ZombossMech_Dino() */

void __thiscall
ZombieAnimRig_ZombossMech_Dino::~ZombieAnimRig_ZombossMech_Dino
          (ZombieAnimRig_ZombossMech_Dino *this)

{
  ~ZombieAnimRig_ZombossMech_Dino(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_Dino::~ZombieAnimRig_ZombossMech_Dino() */

void __thiscall
ZombieAnimRig_ZombossMech_Dino::~ZombieAnimRig_ZombossMech_Dino
          (ZombieAnimRig_ZombossMech_Dino *this)

{
  ~ZombieAnimRig_ZombossMech_Dino(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech_Dino::~ZombieAnimRig_ZombossMech_Dino() */

void __thiscall
ZombieAnimRig_ZombossMech_Dino::~ZombieAnimRig_ZombossMech_Dino
          (ZombieAnimRig_ZombossMech_Dino *this)

{
  ~ZombieAnimRig_ZombossMech_Dino(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_Dino::ZombieAnimRig_ZombossMech_Dino() */

void __thiscall
ZombieAnimRig_ZombossMech_Dino::ZombieAnimRig_ZombossMech_Dino(ZombieAnimRig_ZombossMech_Dino *this)

{
  ZombieAnimRig_ZombossMech::ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  this[0x240] = (ZombieAnimRig_ZombossMech_Dino)0x0;
  *(undefined ***)this = &PTR_GetClass_068f7be0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_Dino_068f7f50;
  return;
}


/* ZombieAnimRig_ZombossMech_Dino::StaticNew() */

ZombieAnimRig_ZombossMech_Dino * ZombieAnimRig_ZombossMech_Dino::StaticNew(void)

{
  ZombieAnimRig_ZombossMech_Dino *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_ZombossMech_Dino(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Dino::StaticClassInit() */

void ZombieAnimRig_ZombossMech_Dino::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ZombossMech_Dino");
    (*pcVar2)(plVar1,asStack_10,FUN_047f4de8,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ZombossMech_Dino::StaticGetClass() */

long * ZombieAnimRig_ZombossMech_Dino::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_Dino",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ZombossMech_Dino::GetClass() const */

long * ZombieAnimRig_ZombossMech_Dino::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_Dino",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Dino::PlayDinosaurSummoning(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Dino::PlayDinosaurSummoning
          (ZombieAnimRig_ZombossMech_Dino *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  char *__s;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  __s = (char *)FUN_047f383c();
  std::string::string(asStack_58,__s);
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
/* ZombieAnimRig_ZombossMech_Dino::PlayLaserStart(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Dino::PlayLaserStart
          (ZombieAnimRig_ZombossMech_Dino *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"lazer_buildup");
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
/* ZombieAnimRig_ZombossMech_Dino::PlayLaserEnd(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Dino::PlayLaserEnd
          (ZombieAnimRig_ZombossMech_Dino *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"lazer_end");
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


/* ZombieAnimRig_ZombossMech_Dino::getTeleportationEffectOffset() const */

DVec2 * __thiscall
ZombieAnimRig_ZombossMech_Dino::getTeleportationEffectOffset(ZombieAnimRig_ZombossMech_Dino *this)

{
  DVec2 *in_x8;
  
  DVec2::DVec2(in_x8,0.0,0.0);
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Dino::PlayLaserLoop() */

void __thiscall ZombieAnimRig_ZombossMech_Dino::PlayLaserLoop(ZombieAnimRig_ZombossMech_Dino *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"lazer_loop");
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
/* ZombieAnimRig_ZombossMech_Dino::getDamageLayerList(ZombieAnimRig_ZombossMech::DamagePhase) const
    */

void __thiscall
ZombieAnimRig_ZombossMech_Dino::getDamageLayerList
          (ZombieAnimRig_ZombossMech_Dino *this,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  string *psVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  lVar1 = ___stack_chk_guard;
  switch(param_2) {
  case 0:
    this = (ZombieAnimRig_ZombossMech_Dino *)ZombieAnimRig::getEmptyLayerNames();
    goto switchD_047f7bd8_default;
  case 1:
    uVar5 = DAT_06b28558 & 1;
    if (((DAT_06b28558 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28558), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b28738,"Zomboss_Damage_State_1_Cockpit");
      nop();
      std::string::string((string *)&DAT_06b28740,"Zomboss_Damage_State_1_Eye");
      nop();
      std::string::string((string *)&DAT_06b28748,"Damage_State_1_Head");
      nop();
      std::string::string((string *)&DAT_06b28750,"Damage_State_1_Jaw");
      nop();
      std::string::string((string *)&DAT_06b28758,"Damage_State_1_Neck");
      nop();
      std::string::string((string *)&DAT_06b28760,"Damage_State_1_Neck1");
      nop();
      __cxa_guard_release(&DAT_06b28558);
      __cxa_atexit(FUN_047f36c4,uVar5,&DAT_06a88000);
    }
    puVar4 = &DAT_06b28470;
    if (((DAT_06b28470 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b28470), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech_Dino *)&DAT_06b284f0;
      goto switchD_047f7bd8_default;
    }
    this = (ZombieAnimRig_ZombossMech_Dino *)&DAT_06b284f0;
    psVar3 = (string *)&DAT_06b28738;
    break;
  case 2:
    uVar5 = DAT_06b28568 & 1;
    if (((DAT_06b28568 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28568), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b285d8,"Zomboss_Damage_State_2_Cockpit");
      nop();
      std::string::string((string *)&DAT_06b285e0,"Zomboss_Damage_State_2_Eye");
      nop();
      std::string::string((string *)&DAT_06b285e8,"Damage_State_2_Head");
      nop();
      std::string::string((string *)&DAT_06b285f0,"Damage_State_2_Jaw");
      nop();
      std::string::string((string *)&DAT_06b285f8,"Damage_State_2_Neck");
      nop();
      std::string::string((string *)&DAT_06b28600,"Damage_State_2_Neck2");
      nop();
      __cxa_guard_release(&DAT_06b28568);
      __cxa_atexit(FUN_047f368c,uVar5,&DAT_06a88000);
    }
    puVar4 = &DAT_06b28478;
    if (((DAT_06b28478 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b28478), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech_Dino *)&DAT_06b286d0;
      goto switchD_047f7bd8_default;
    }
    this = (ZombieAnimRig_ZombossMech_Dino *)&DAT_06b286d0;
    psVar3 = (string *)&DAT_06b285d8;
    break;
  case 3:
    uVar5 = DAT_06b28650 & 1;
    if (((DAT_06b28650 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28650), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b286f0,"Zomboss_Damage_State_3_Cockpit");
      nop();
      std::string::string((string *)&DAT_06b286f8,"Zomboss_Damage_State_3_Eye");
      nop();
      std::string::string((string *)&DAT_06b28700,"Damage_State_3_Head");
      nop();
      std::string::string((string *)&DAT_06b28708,"Damage_State_3_Jaw");
      nop();
      std::string::string((string *)&DAT_06b28710,"Damage_State_3_Neck");
      nop();
      std::string::string((string *)&DAT_06b28718,"Damage_State_3_Neck2");
      nop();
      __cxa_guard_release(&DAT_06b28650);
      __cxa_atexit(FUN_047f3654,uVar5,&DAT_06a88000);
    }
    puVar4 = &DAT_06b28588;
    if (((DAT_06b28588 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b28588), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech_Dino *)&DAT_06b28690;
      goto switchD_047f7bd8_default;
    }
    this = (ZombieAnimRig_ZombossMech_Dino *)&DAT_06b28690;
    psVar3 = (string *)&DAT_06b286f0;
    break;
  case 4:
    uVar5 = DAT_06b284e0 & 1;
    if (((DAT_06b284e0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b284e0), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b28608,"Zomboss_Damage_State_4_Cockpit");
      nop();
      std::string::string((string *)&DAT_06b28610,"Zomboss_Damage_State_4_Eye");
      nop();
      std::string::string((string *)&DAT_06b28618,"Damage_State_4_Head");
      nop();
      std::string::string((string *)&DAT_06b28620,"Damage_State_4_Jaw");
      nop();
      std::string::string((string *)&DAT_06b28628,"Damage_State_4_Neck");
      nop();
      std::string::string((string *)&DAT_06b28630,"Damage_State_4_Neck2");
      nop();
      __cxa_guard_release(&DAT_06b284e0);
      __cxa_atexit(FUN_047f361c,uVar5,&DAT_06a88000);
    }
    puVar4 = &DAT_06b28580;
    if (((DAT_06b28580 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b28580), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech_Dino *)&DAT_06b28678;
      goto switchD_047f7bd8_default;
    }
    this = (ZombieAnimRig_ZombossMech_Dino *)&DAT_06b28678;
    psVar3 = (string *)&DAT_06b28608;
    break;
  case 5:
    uVar5 = DAT_06b28768 & 1;
    if (((DAT_06b28768 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28768), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b28518,"Zomboss_Damage_State_5_Cockpit");
      nop();
      std::string::string((string *)&DAT_06b28520,"Zomboss_Damage_State_5_Eye");
      nop();
      std::string::string((string *)&DAT_06b28528,"Damage_State_5_Head");
      nop();
      std::string::string((string *)&DAT_06b28530,"Damage_State_5_Jaw");
      nop();
      std::string::string((string *)&DAT_06b28538,"Damage_State_5_Neck");
      nop();
      std::string::string((string *)&DAT_06b28540,"Damage_State_5_Neck2");
      nop();
      __cxa_guard_release(&DAT_06b28768);
      __cxa_atexit(FUN_047f35e4,uVar5,&DAT_06a88000);
    }
    puVar4 = &DAT_06b28660;
    if (((DAT_06b28660 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b28660), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech_Dino *)&DAT_06b28720;
      goto switchD_047f7bd8_default;
    }
    this = (ZombieAnimRig_ZombossMech_Dino *)&DAT_06b28720;
    psVar3 = (string *)&DAT_06b28518;
    break;
  case 6:
    uVar5 = DAT_06b285d0 & 1;
    if (((DAT_06b285d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b285d0), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b284b0,"Zomboss_Damage_State_6_Eye");
      nop();
      std::string::string((string *)&DAT_06b284b8,"Damage_State_6_Cockpit");
      nop();
      std::string::string((string *)&DAT_06b284c0,"Damage_State_6_Head");
      nop();
      std::string::string((string *)&DAT_06b284c8,"Damage_State_6_Jaw");
      nop();
      std::string::string((string *)&DAT_06b284d0,"Damage_State_6_Neck");
      nop();
      std::string::string((string *)&DAT_06b284d8,"Damage_State_6_Neck2");
      nop();
      __cxa_guard_release(&DAT_06b285d0);
      __cxa_atexit(FUN_047f35ac,uVar5,&DAT_06a88000);
    }
    puVar4 = &DAT_06b286b0;
    if (((DAT_06b286b0 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b286b0), iVar2 == 0)) {
      this = (ZombieAnimRig_ZombossMech_Dino *)&DAT_06b28638;
      goto switchD_047f7bd8_default;
    }
    this = (ZombieAnimRig_ZombossMech_Dino *)&DAT_06b28638;
    psVar3 = (string *)&DAT_06b284b0;
    break;
  default:
    goto switchD_047f7bd8_default;
  }
  std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
            ((string *)this,psVar3,(allocator *)(psVar3 + 0x30));
  __cxa_guard_release(puVar4);
  __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,this,&DAT_06a88000);
switchD_047f7bd8_default:
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}

