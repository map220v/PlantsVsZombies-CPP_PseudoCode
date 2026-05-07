// Class: ZombieAnimRig_BullRider


/* ZombieAnimRig_BullRider::StaticGetClass() */

long * ZombieAnimRig_BullRider::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Imp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_BullRider",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_BullRider::GetClass() const */

long * ZombieAnimRig_BullRider::GetClass(void)

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
  uVar2 = ZombieAnimRig_Imp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_BullRider",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_BullRider::~ZombieAnimRig_BullRider() */

void __thiscall ZombieAnimRig_BullRider::~ZombieAnimRig_BullRider(ZombieAnimRig_BullRider *this)

{
  *(undefined ***)this = &PTR_GetClass_0686d520;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_BullRider_0686d7c0;
  ZombieAnimRig_Imp::~ZombieAnimRig_Imp((ZombieAnimRig_Imp *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_BullRider::~ZombieAnimRig_BullRider() */

void __thiscall ZombieAnimRig_BullRider::~ZombieAnimRig_BullRider(ZombieAnimRig_BullRider *this)

{
  ~ZombieAnimRig_BullRider(this + -0x10);
  return;
}


/* ZombieAnimRig_BullRider::~ZombieAnimRig_BullRider() */

void __thiscall ZombieAnimRig_BullRider::~ZombieAnimRig_BullRider(ZombieAnimRig_BullRider *this)

{
  ~ZombieAnimRig_BullRider(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_BullRider::~ZombieAnimRig_BullRider() */

void __thiscall ZombieAnimRig_BullRider::~ZombieAnimRig_BullRider(ZombieAnimRig_BullRider *this)

{
  ~ZombieAnimRig_BullRider(this + -0x10);
  return;
}


/* ZombieAnimRig_BullRider::ZombieAnimRig_BullRider() */

void __thiscall ZombieAnimRig_BullRider::ZombieAnimRig_BullRider(ZombieAnimRig_BullRider *this)

{
  ZombieAnimRig_Imp::ZombieAnimRig_Imp((ZombieAnimRig_Imp *)this);
  *(undefined ***)this = &PTR_GetClass_0686d520;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_BullRider_0686d7c0;
  return;
}


/* ZombieAnimRig_BullRider::StaticNew() */

ZombieAnimRig_BullRider * ZombieAnimRig_BullRider::StaticNew(void)

{
  ZombieAnimRig_BullRider *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_BullRider(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BullRider::PlayLand(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_BullRider::PlayLand(ZombieAnimRig_BullRider *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"imp land");
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
/* ZombieAnimRig_BullRider::PlayBonk(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_BullRider::PlayBonk(ZombieAnimRig_BullRider *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"imp bonk");
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
/* ZombieAnimRig_BullRider::PlayGetUp(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_BullRider::PlayGetUp(ZombieAnimRig_BullRider *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"imp get up");
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
/* ZombieAnimRig_BullRider::PlayFlying() */

void __thiscall ZombieAnimRig_BullRider::PlayFlying(ZombieAnimRig_BullRider *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"imp fly");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 8;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BullRider::PlayFalling() */

void __thiscall ZombieAnimRig_BullRider::PlayFalling(ZombieAnimRig_BullRider *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"imp fall");
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
/* ZombieAnimRig_BullRider::getHeadLayerNames() */

void ZombieAnimRig_BullRider::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b16e98 & 1;
  if (((DAT_06b16e98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16e98), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b16e50,"zombie_imp_skull");
    nop();
    std::string::string((string *)&DAT_06b16e58,"zombie_imp_jaw");
    nop();
    std::string::string((string *)&DAT_06b16e60,"zombie_cowboy_hat_back");
    nop();
    std::string::string((string *)&DAT_06b16e68,"zombie_cowboy_hat_front");
    nop();
    __cxa_guard_release(&DAT_06b16e98);
    __cxa_atexit(FUN_045f7024,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b16df8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16df8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b16e20,(string *)&DAT_06b16e50,(allocator *)&DAT_06b16e70);
    __cxa_guard_release(&DAT_06b16df8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b16e20,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b16e20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BullRider::getArmLayerNames() */

void ZombieAnimRig_BullRider::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b16ec0 & 1;
  if (((DAT_06b16ec0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16ec0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b16eb0,"zombie_imp_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b16eb8,"zombie_imp_hand_outer");
    nop();
    __cxa_guard_release(&DAT_06b16ec0);
    __cxa_atexit(FUN_045f7060,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b16e18 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16e18), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b16e00,(string *)&DAT_06b16eb0,(allocator *)&DAT_06b16ec0);
    __cxa_guard_release(&DAT_06b16e18);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b16e00,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b16e00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BullRider::getArmReplacementPairNames() */

void ZombieAnimRig_BullRider::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b16e48 & 1;
  if (((DAT_06b16e48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16e48), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b16e88,"zombie_imp_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b16e90,"zombie_imp_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b16e48);
    __cxa_atexit(FUN_045f708c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b16ec8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16ec8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b16e70,(string *)&DAT_06b16e88,(allocator *)&DAT_06b16e98);
    __cxa_guard_release(&DAT_06b16ec8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b16e70,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b16e70);
}

