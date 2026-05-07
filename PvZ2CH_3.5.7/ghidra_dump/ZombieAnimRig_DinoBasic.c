// Class: ZombieAnimRig_DinoBasic


/* ZombieAnimRig_DinoBasic::~ZombieAnimRig_DinoBasic() */

void __thiscall ZombieAnimRig_DinoBasic::~ZombieAnimRig_DinoBasic(ZombieAnimRig_DinoBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_068f8a20;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_DinoBasic_068f8d38;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_DinoBasic::~ZombieAnimRig_DinoBasic() */

void __thiscall ZombieAnimRig_DinoBasic::~ZombieAnimRig_DinoBasic(ZombieAnimRig_DinoBasic *this)

{
  ~ZombieAnimRig_DinoBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_DinoBasic::~ZombieAnimRig_DinoBasic() */

void __thiscall ZombieAnimRig_DinoBasic::~ZombieAnimRig_DinoBasic(ZombieAnimRig_DinoBasic *this)

{
  ~ZombieAnimRig_DinoBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_DinoBasic::~ZombieAnimRig_DinoBasic() */

void __thiscall ZombieAnimRig_DinoBasic::~ZombieAnimRig_DinoBasic(ZombieAnimRig_DinoBasic *this)

{
  ~ZombieAnimRig_DinoBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_DinoBasic::ZombieAnimRig_DinoBasic() */

void __thiscall ZombieAnimRig_DinoBasic::ZombieAnimRig_DinoBasic(ZombieAnimRig_DinoBasic *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_068f8a20;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_DinoBasic_068f8d38;
  return;
}


/* ZombieAnimRig_DinoBasic::StaticNew() */

ZombieAnimRig_DinoBasic * ZombieAnimRig_DinoBasic::StaticNew(void)

{
  ZombieAnimRig_DinoBasic *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_DinoBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DinoBasic::StaticClassInit() */

void ZombieAnimRig_DinoBasic::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_DinoBasic");
    (*pcVar2)(plVar1,asStack_10,FUN_047f9198,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_DinoBasic::StaticGetClass() */

long * ZombieAnimRig_DinoBasic::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Basic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_DinoBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_DinoBasic::GetClass() const */

long * ZombieAnimRig_DinoBasic::GetClass(void)

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
  uVar2 = ZombieAnimRig_Basic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_DinoBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DinoBasic::PlayDropping(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieAnimRig_DinoBasic::PlayDropping(ZombieAnimRig_DinoBasic *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"drop");
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
/* ZombieAnimRig_DinoBasic::PlayGrabbed(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieAnimRig_DinoBasic::PlayGrabbed(ZombieAnimRig_DinoBasic *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"grab");
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
/* ZombieAnimRig_DinoBasic::getHeadLayerNames() */

void ZombieAnimRig_DinoBasic::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b288c0 & 1;
  if (((DAT_06b288c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b288c0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b289b8,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b289c0,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06b289c8,"zombie_pupil");
    nop();
    __cxa_guard_release(&DAT_06b288c0);
    __cxa_atexit(FUN_047f8b78,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b28910 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28910), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b28920,(string *)&DAT_06b289b8,(allocator *)&DAT_06b289d0);
    __cxa_guard_release(&DAT_06b28910);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b28920,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b28920);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DinoBasic::getArmLayerNames() */

void ZombieAnimRig_DinoBasic::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b28958 & 1;
  if (((DAT_06b28958 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28958), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b28960,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b28968,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b28970,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b28978,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b28958);
    __cxa_atexit(FUN_047f8bac,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b28a00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28a00), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b28810,(string *)&DAT_06b28960,(allocator *)&DAT_06b28980);
    __cxa_guard_release(&DAT_06b28a00);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b28810,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b28810);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DinoBasic::getArmReplacementPairNames() */

void ZombieAnimRig_DinoBasic::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b287e8 & 1;
  if (((DAT_06b287e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b287e8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b289d0,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b289d8,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b287e8);
    __cxa_atexit(FUN_047f8be8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b28a70 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28a70), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b28a88,(string *)&DAT_06b289d0,(allocator *)&DAT_06b289e0);
    __cxa_guard_release(&DAT_06b28a70);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b28a88,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b28a88);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DinoBasic::getFlagHandLayerNames() */

void ZombieAnimRig_DinoBasic::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b287f8 & 1;
  if (((DAT_06b287f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b287f8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b28828,"flag_01");
    nop();
    std::string::string((string *)&DAT_06b28830,"flag_stick");
    nop();
    std::string::string((string *)&DAT_06b28838,"zombie_hand_inner_01_flag");
    nop();
    std::string::string((string *)&DAT_06b28840,"zombie_hand_inner_02_flag");
    nop();
    std::string::string((string *)&DAT_06b28848,"zombie_hand_inner_03_flag");
    nop();
    std::string::string((string *)&DAT_06b28850,"zombie_hand_inner3b_flag");
    nop();
    std::string::string((string *)&DAT_06b28858,"zombie_hand_inner4b_flag");
    nop();
    std::string::string((string *)&DAT_06b28860,"zombie_hand_inner_05_flag");
    nop();
    std::string::string((string *)&DAT_06b28868,"zombie_arm_inner_upper_flag");
    nop();
    std::string::string((string *)&DAT_06b28870,"zombie_arm_inner_lower_flag");
    nop();
    __cxa_guard_release(&DAT_06b287f8);
    __cxa_atexit(FUN_047f8c14,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b28988 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28988), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b288c8,(string *)&DAT_06b28828,(allocator *)&DAT_06b28878);
    __cxa_guard_release(&DAT_06b28988);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b288c8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b288c8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DinoBasic::getNoFlagHandLayerNames() */

void ZombieAnimRig_DinoBasic::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b28938 & 1;
  if (((DAT_06b28938 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28938), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b28a08,"zombie_arm_inner_lower");
    nop();
    std::string::string((string *)&DAT_06b28a10,"zombie_arm_inner_upper");
    nop();
    std::string::string((string *)&DAT_06b28a18,"zombie_hand_inner4b");
    nop();
    std::string::string((string *)&DAT_06b28a20,"zombie_hand_inner_01");
    nop();
    std::string::string((string *)&DAT_06b28a28,"zombie_hand_inner_02");
    nop();
    std::string::string((string *)&DAT_06b28a30,"zombie_hand_inner_05");
    nop();
    __cxa_guard_release(&DAT_06b28938);
    __cxa_atexit(FUN_047f8c4c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b287c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b287c8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b287d0,(string *)&DAT_06b28a08,(allocator *)&sClass);
    __cxa_guard_release(&DAT_06b287c8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b287d0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b287d0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DinoBasic::getConeLayerNames() */

void ZombieAnimRig_DinoBasic::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b289f8 & 1;
  if (((DAT_06b289f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b289f8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b28998,"zombie_armor_cone_norm");
    nop();
    std::string::string((string *)&DAT_06b289a0,"zombie_armor_cone_damage_01");
    nop();
    std::string::string((string *)&DAT_06b289a8,"zombie_armor_cone_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b289f8);
    __cxa_atexit(FUN_047f8c84,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b289b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b289b0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b289e0,(string *)&DAT_06b28998,(allocator *)&DAT_06b289b0);
    __cxa_guard_release(&DAT_06b289b0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b289e0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b289e0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DinoBasic::getBucketLayerNames() */

void ZombieAnimRig_DinoBasic::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b287f0 & 1;
  if (((DAT_06b287f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b287f0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b288f0,"zombie_armor_bucket_norm");
    nop();
    std::string::string((string *)&DAT_06b288f8,"zombie_armor_bucket_damage_01");
    nop();
    std::string::string((string *)&DAT_06b28900,"zombie_armor_bucket_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b287f0);
    __cxa_atexit(FUN_047f8cb8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b28980 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28980), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b28940,(string *)&DAT_06b288f0,(allocator *)&ZombieDinoBasic::sClass
              );
    __cxa_guard_release(&DAT_06b28980);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b28940,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b28940);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DinoBasic::getCrownLayerNames() */

void ZombieAnimRig_DinoBasic::getCrownLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b287c0 & 1;
  if (((DAT_06b287c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b287c0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b287a8,"zombie_armor_skull_norm");
    nop();
    std::string::string((string *)&DAT_06b287b0,"zombie_armor_skull_damage_01");
    nop();
    std::string::string((string *)&DAT_06b287b8,"zombie_armor_skull_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b287c0);
    __cxa_atexit(FUN_047f8cec,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b28918 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28918), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b28878,(string *)&DAT_06b287a8,(allocator *)&DAT_06b287c0);
    __cxa_guard_release(&DAT_06b28918);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b28878,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b28878);
}

