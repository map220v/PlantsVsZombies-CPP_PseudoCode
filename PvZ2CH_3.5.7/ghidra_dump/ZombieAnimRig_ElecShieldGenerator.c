// Class: ZombieAnimRig_ElecShieldGenerator


/* ZombieAnimRig_ElecShieldGenerator::onPopAnimInitialized() */

void __thiscall
ZombieAnimRig_ElecShieldGenerator::onPopAnimInitialized(ZombieAnimRig_ElecShieldGenerator *this)

{
  ZombieAnimRig_Mech::onPopAnimInitialized((ZombieAnimRig_Mech *)this);
  (**(code **)(*(long *)this + 0x268))(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ElecShieldGenerator::SetDamageState(int) */

void __thiscall
ZombieAnimRig_ElecShieldGenerator::SetDamageState
          (ZombieAnimRig_ElecShieldGenerator *this,int param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Damage_State_1_Dome");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,0 < param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Damage_State_2_Dome");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,1 < param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Damage_State_3_Dome");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,2 < param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Damage_State_4_Dome");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,3 < param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Damage_State_5_Dome");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,4 < param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Damage_State_6_Dome");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,5 < param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ElecShieldGenerator::ActivateShield(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ElecShieldGenerator::ActivateShield
          (ZombieAnimRig_ElecShieldGenerator *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"idle");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 9;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ElecShieldGenerator::DeactivateShield(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ElecShieldGenerator::DeactivateShield
          (ZombieAnimRig_ElecShieldGenerator *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"idle");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 0xb;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ElecShieldGenerator::onAnimStopped() */

void __thiscall
ZombieAnimRig_ElecShieldGenerator::onAnimStopped(ZombieAnimRig_ElecShieldGenerator *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x210) == 9) {
    std::string::string(asStack_40,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    if (iVar1 != -1) {
      *(undefined4 *)(this + 0x210) = 10;
    }
  }
  else {
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ElecShieldGenerator::~ZombieAnimRig_ElecShieldGenerator() */

void __thiscall
ZombieAnimRig_ElecShieldGenerator::~ZombieAnimRig_ElecShieldGenerator
          (ZombieAnimRig_ElecShieldGenerator *this)

{
  *(undefined ***)this = &PTR_GetClass_069931b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ElecShieldGenerator_06993440;
  ZombieAnimRig_Mech::~ZombieAnimRig_Mech((ZombieAnimRig_Mech *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ElecShieldGenerator::~ZombieAnimRig_ElecShieldGenerator() */

void __thiscall
ZombieAnimRig_ElecShieldGenerator::~ZombieAnimRig_ElecShieldGenerator
          (ZombieAnimRig_ElecShieldGenerator *this)

{
  ~ZombieAnimRig_ElecShieldGenerator(this + -0x10);
  return;
}


/* ZombieAnimRig_ElecShieldGenerator::~ZombieAnimRig_ElecShieldGenerator() */

void __thiscall
ZombieAnimRig_ElecShieldGenerator::~ZombieAnimRig_ElecShieldGenerator
          (ZombieAnimRig_ElecShieldGenerator *this)

{
  ~ZombieAnimRig_ElecShieldGenerator(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ElecShieldGenerator::~ZombieAnimRig_ElecShieldGenerator() */

void __thiscall
ZombieAnimRig_ElecShieldGenerator::~ZombieAnimRig_ElecShieldGenerator
          (ZombieAnimRig_ElecShieldGenerator *this)

{
  ~ZombieAnimRig_ElecShieldGenerator(this + -0x10);
  return;
}


/* ZombieAnimRig_ElecShieldGenerator::ZombieAnimRig_ElecShieldGenerator() */

void __thiscall
ZombieAnimRig_ElecShieldGenerator::ZombieAnimRig_ElecShieldGenerator
          (ZombieAnimRig_ElecShieldGenerator *this)

{
  ZombieAnimRig_Mech::ZombieAnimRig_Mech((ZombieAnimRig_Mech *)this);
  *(undefined ***)this = &PTR_GetClass_069931b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ElecShieldGenerator_06993440;
  return;
}


/* ZombieAnimRig_ElecShieldGenerator::StaticNew() */

ZombieAnimRig_ElecShieldGenerator * ZombieAnimRig_ElecShieldGenerator::StaticNew(void)

{
  ZombieAnimRig_ElecShieldGenerator *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_ElecShieldGenerator(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ElecShieldGenerator::StaticClassInit() */

void ZombieAnimRig_ElecShieldGenerator::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ElecShieldGenerator");
    (*pcVar2)(plVar1,asStack_10,FUN_04c7dd44,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ElecShieldGenerator::StaticGetClass() */

long * ZombieAnimRig_ElecShieldGenerator::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Mech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ElecShieldGenerator",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ElecShieldGenerator::GetClass() const */

long * ZombieAnimRig_ElecShieldGenerator::GetClass(void)

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
  uVar2 = ZombieAnimRig_Mech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ElecShieldGenerator",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ElecShieldGenerator::getHeadLayerNames() */

void ZombieAnimRig_ElecShieldGenerator::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b947f8 & 1;
  if (((DAT_06b947f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b947f8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b94708,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b94710,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06b94718,"zombie_pupil");
    nop();
    __cxa_guard_release(&DAT_06b947f8);
    __cxa_atexit(FUN_04c7cf18,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b94850 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b94850), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b94830,(string *)&DAT_06b94708,(allocator *)&DAT_06b94720);
    __cxa_guard_release(&DAT_06b94850);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b94830,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b94830);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ElecShieldGenerator::getArmLayerNames() */

void ZombieAnimRig_ElecShieldGenerator::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b94800 & 1;
  if (((DAT_06b94800 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b94800), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b94728,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b94730,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b94738,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b94740,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b94800);
    __cxa_atexit(FUN_04c7cf4c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b94750 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b94750), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b94770,(string *)&DAT_06b94728,(allocator *)&sClass);
    __cxa_guard_release(&DAT_06b94750);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b94770,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b94770);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ElecShieldGenerator::getArmReplacementPairNames() */

void ZombieAnimRig_ElecShieldGenerator::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b947f0 & 1;
  if (((DAT_06b947f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b947f0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b94760,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b94768,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b947f0);
    __cxa_atexit(FUN_04c7cf88,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b94758 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b94758), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b94788,(string *)&DAT_06b94760,(allocator *)&DAT_06b94770);
    __cxa_guard_release(&DAT_06b94758);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b94788,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b94788);
}

