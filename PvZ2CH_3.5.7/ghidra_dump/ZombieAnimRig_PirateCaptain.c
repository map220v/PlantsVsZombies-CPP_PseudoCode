// Class: ZombieAnimRig_PirateCaptain


/* ZombieAnimRig_PirateCaptain::~ZombieAnimRig_PirateCaptain() */

void __thiscall
ZombieAnimRig_PirateCaptain::~ZombieAnimRig_PirateCaptain(ZombieAnimRig_PirateCaptain *this)

{
  *(undefined ***)this = &PTR_GetClass_068726e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PirateCaptain_06872958;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PirateCaptain::~ZombieAnimRig_PirateCaptain() */

void __thiscall
ZombieAnimRig_PirateCaptain::~ZombieAnimRig_PirateCaptain(ZombieAnimRig_PirateCaptain *this)

{
  ~ZombieAnimRig_PirateCaptain(this + -0x10);
  return;
}


/* ZombieAnimRig_PirateCaptain::~ZombieAnimRig_PirateCaptain() */

void __thiscall
ZombieAnimRig_PirateCaptain::~ZombieAnimRig_PirateCaptain(ZombieAnimRig_PirateCaptain *this)

{
  ~ZombieAnimRig_PirateCaptain(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PirateCaptain::~ZombieAnimRig_PirateCaptain() */

void __thiscall
ZombieAnimRig_PirateCaptain::~ZombieAnimRig_PirateCaptain(ZombieAnimRig_PirateCaptain *this)

{
  ~ZombieAnimRig_PirateCaptain(this + -0x10);
  return;
}


/* ZombieAnimRig_PirateCaptain::ZombieAnimRig_PirateCaptain() */

void __thiscall
ZombieAnimRig_PirateCaptain::ZombieAnimRig_PirateCaptain(ZombieAnimRig_PirateCaptain *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068726e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PirateCaptain_06872958;
  return;
}


/* ZombieAnimRig_PirateCaptain::StaticNew() */

ZombieAnimRig_PirateCaptain * ZombieAnimRig_PirateCaptain::StaticNew(void)

{
  ZombieAnimRig_PirateCaptain *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_PirateCaptain(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateCaptain::StaticClassInit() */

void ZombieAnimRig_PirateCaptain::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_PirateCaptain");
    (*pcVar2)(plVar1,asStack_10,FUN_04608f38,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_PirateCaptain::StaticGetClass() */

long * ZombieAnimRig_PirateCaptain::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_PirateCaptain",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_PirateCaptain::GetClass() const */

long * ZombieAnimRig_PirateCaptain::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_PirateCaptain",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateCaptain::StartBigCasting(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_PirateCaptain::StartBigCasting
          (ZombieAnimRig_PirateCaptain *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"plantfood01");
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
/* ZombieAnimRig_PirateCaptain::ShowParrotLayers(bool) */

void __thiscall
ZombieAnimRig_PirateCaptain::ShowParrotLayers(ZombieAnimRig_PirateCaptain *this,bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"parrot_foot");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"parrot_wing_01");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"parrot_tail");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"parrot_body");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"parrot_neck");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"parrot_head");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_PirateCaptain::HideHead() */

void __thiscall ZombieAnimRig_PirateCaptain::HideHead(ZombieAnimRig_PirateCaptain *this)

{
  ZombieAnimRig::HideHead((ZombieAnimRig *)this);
  ShowParrotLayers(this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateCaptain::getHeadLayerNames() */

void ZombieAnimRig_PirateCaptain::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b187e8 & 1;
  if (((DAT_06b187e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b187e8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b188a8,"zombie_capt_skull");
    nop();
    std::string::string((string *)&DAT_06b188b0,"pirate_hat_back");
    nop();
    std::string::string((string *)&DAT_06b188b8,"pirate_hat_front");
    nop();
    std::string::string((string *)&DAT_06b188c0,"zombie_capt_beard");
    nop();
    std::string::string((string *)&DAT_06b188c8,"zombie_capt_jaw");
    nop();
    __cxa_guard_release(&DAT_06b187e8);
    __cxa_atexit(FUN_04608ca8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18808 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18808), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b187f0,(string *)&DAT_06b188a8,(allocator *)&DAT_06b188d0);
    __cxa_guard_release(&DAT_06b18808);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b187f0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b187f0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateCaptain::getArmLayerNames() */

void ZombieAnimRig_PirateCaptain::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b188a0 & 1;
  if (((DAT_06b188a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b188a0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18830,"zombie_capt_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b18838,"zombie_capt_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b18840,"zombie_capt_hand_outer");
    nop();
    __cxa_guard_release(&DAT_06b188a0);
    __cxa_atexit(FUN_04608ce0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18828 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18828), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18810,(string *)&DAT_06b18830,(allocator *)&DAT_06b18848);
    __cxa_guard_release(&DAT_06b18828);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18810,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18810);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateCaptain::getArmReplacementPairNames() */

void ZombieAnimRig_PirateCaptain::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18898 & 1;
  if (((DAT_06b18898 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18898), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18848,"zombie_capt_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b18850,"zombie_capt_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b18898);
    __cxa_atexit(FUN_04608d14,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b188d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b188d0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18870,(string *)&DAT_06b18848,(allocator *)&sClass);
    __cxa_guard_release(&DAT_06b188d0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18870,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18870);
}

