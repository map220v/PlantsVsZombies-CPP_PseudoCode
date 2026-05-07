// Class: ZombieAnimRig_SelfExplode


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SelfExplode::GetArmParticleName() */

void __thiscall ZombieAnimRig_SelfExplode::GetArmParticleName(ZombieAnimRig_SelfExplode *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"zombie_pirate_basic_hand_outer_01");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieAnimRig_SelfExplode::StaticGetClass() */

long * ZombieAnimRig_SelfExplode::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_SelfExplode",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_SelfExplode::GetClass() const */

long * ZombieAnimRig_SelfExplode::GetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_SelfExplode",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_SelfExplode::~ZombieAnimRig_SelfExplode() */

void __thiscall
ZombieAnimRig_SelfExplode::~ZombieAnimRig_SelfExplode(ZombieAnimRig_SelfExplode *this)

{
  *(undefined ***)this = &PTR_GetClass_06876e60;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_SelfExplode_068770d8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_SelfExplode::~ZombieAnimRig_SelfExplode() */

void __thiscall
ZombieAnimRig_SelfExplode::~ZombieAnimRig_SelfExplode(ZombieAnimRig_SelfExplode *this)

{
  ~ZombieAnimRig_SelfExplode(this + -0x10);
  return;
}


/* ZombieAnimRig_SelfExplode::~ZombieAnimRig_SelfExplode() */

void __thiscall
ZombieAnimRig_SelfExplode::~ZombieAnimRig_SelfExplode(ZombieAnimRig_SelfExplode *this)

{
  ~ZombieAnimRig_SelfExplode(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_SelfExplode::~ZombieAnimRig_SelfExplode() */

void __thiscall
ZombieAnimRig_SelfExplode::~ZombieAnimRig_SelfExplode(ZombieAnimRig_SelfExplode *this)

{
  ~ZombieAnimRig_SelfExplode(this + -0x10);
  return;
}


/* ZombieAnimRig_SelfExplode::ZombieAnimRig_SelfExplode() */

void __thiscall
ZombieAnimRig_SelfExplode::ZombieAnimRig_SelfExplode(ZombieAnimRig_SelfExplode *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06876e60;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_SelfExplode_068770d8;
  return;
}


/* ZombieAnimRig_SelfExplode::StaticNew() */

ZombieAnimRig_SelfExplode * ZombieAnimRig_SelfExplode::StaticNew(void)

{
  ZombieAnimRig_SelfExplode *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_SelfExplode(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SelfExplode::PlayBigBang(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_SelfExplode::PlayBigBang
          (ZombieAnimRig_SelfExplode *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"bigbang");
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
/* ZombieAnimRig_SelfExplode::SetTorchLayers(bool) */

void __thiscall
ZombieAnimRig_SelfExplode::SetTorchLayers(ZombieAnimRig_SelfExplode *this,bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"zombie_pirate_basic_hand_outer_01");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SelfExplode::getHeadLayerNames() */

void ZombieAnimRig_SelfExplode::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19a10 & 1;
  if (((DAT_06b19a10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19a10), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19a68,"zombie_pirate_basic_skull");
    nop();
    std::string::string((string *)&DAT_06b19a70,"zombie_pirate_basic_jaw");
    nop();
    __cxa_guard_release(&DAT_06b19a10);
    __cxa_atexit(FUN_04614a80,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19a28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19a28), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19aa8,(string *)&DAT_06b19a68,(allocator *)&DAT_06b19a78);
    __cxa_guard_release(&DAT_06b19a28);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19aa8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19aa8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SelfExplode::getArmLayerNames() */

void ZombieAnimRig_SelfExplode::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19a18 & 1;
  if (((DAT_06b19a18 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19a18), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19ac0,"zombie_pirate_basic_hand_outer_01");
    nop();
    __cxa_guard_release(&DAT_06b19a18);
    __cxa_atexit(FUN_04614aac,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19a20 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19a20), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19a78,(string *)&DAT_06b19ac0,(allocator *)&DAT_06b19ac8);
    __cxa_guard_release(&DAT_06b19a20);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19a78,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19a78);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SelfExplode::getArmReplacementPairNames() */

void ZombieAnimRig_SelfExplode::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19a30 & 1;
  if (((DAT_06b19a30 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19a30), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b19a30);
    __cxa_atexit(FUN_04614a7c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19a48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19a48), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19a90,(string *)&DAT_06b19a58,(allocator *)&DAT_06b19a58);
    __cxa_guard_release(&DAT_06b19a48);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19a90,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19a90);
}

