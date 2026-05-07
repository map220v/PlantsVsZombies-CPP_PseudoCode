// Class: ZombieAnimRig_Gong


/* ZombieAnimRig_Gong::StaticGetClass() */

long * ZombieAnimRig_Gong::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Gong",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_Gong::GetClass() const */

long * ZombieAnimRig_Gong::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Gong",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_Gong::~ZombieAnimRig_Gong() */

void __thiscall ZombieAnimRig_Gong::~ZombieAnimRig_Gong(ZombieAnimRig_Gong *this)

{
  *(undefined ***)this = &PTR_GetClass_068773e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Gong_06877658;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Gong::~ZombieAnimRig_Gong() */

void __thiscall ZombieAnimRig_Gong::~ZombieAnimRig_Gong(ZombieAnimRig_Gong *this)

{
  ~ZombieAnimRig_Gong(this + -0x10);
  return;
}


/* ZombieAnimRig_Gong::~ZombieAnimRig_Gong() */

void __thiscall ZombieAnimRig_Gong::~ZombieAnimRig_Gong(ZombieAnimRig_Gong *this)

{
  ~ZombieAnimRig_Gong(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Gong::~ZombieAnimRig_Gong() */

void __thiscall ZombieAnimRig_Gong::~ZombieAnimRig_Gong(ZombieAnimRig_Gong *this)

{
  ~ZombieAnimRig_Gong(this + -0x10);
  return;
}


/* ZombieAnimRig_Gong::ZombieAnimRig_Gong() */

void __thiscall ZombieAnimRig_Gong::ZombieAnimRig_Gong(ZombieAnimRig_Gong *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068773e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Gong_06877658;
  return;
}


/* ZombieAnimRig_Gong::StaticNew() */

ZombieAnimRig_Gong * ZombieAnimRig_Gong::StaticNew(void)

{
  ZombieAnimRig_Gong *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_Gong(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Gong::StartGongging() */

void __thiscall ZombieAnimRig_Gong::StartGongging(ZombieAnimRig_Gong *this)

{
  int iVar1;
  code *pcVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x168);
  std::string::string(asStack_40,"knock");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = (*pcVar2)(this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Gong::getHeadLayerNames() */

void ZombieAnimRig_Gong::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19cc8 & 1;
  if (((DAT_06b19cc8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19cc8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19ce0,"zombie_pirate_basic_skull");
    nop();
    std::string::string((string *)&DAT_06b19ce8,"zombie_pirate_basic_jaw");
    nop();
    __cxa_guard_release(&DAT_06b19cc8);
    __cxa_atexit(FUN_04615e6c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19cb0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19cb0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19c18,(string *)&DAT_06b19ce0,(allocator *)&DAT_06b19cf0);
    __cxa_guard_release(&DAT_06b19cb0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19c18,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19c18);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Gong::getArmLayerNames() */

void ZombieAnimRig_Gong::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19c38 & 1;
  if (((DAT_06b19c38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19c38), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19cb8,"zombie_pirate_basic_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b19cc0,"zombie_pirate_basic_arm_outer_lower");
    nop();
    __cxa_guard_release(&DAT_06b19c38);
    __cxa_atexit(FUN_04615e98,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19c48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19c48), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19cf0,(string *)&DAT_06b19cb8,(allocator *)&DAT_06b19cc8);
    __cxa_guard_release(&DAT_06b19c48);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19cf0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19cf0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Gong::getArmReplacementPairNames() */

void ZombieAnimRig_Gong::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19c30 & 1;
  if (((DAT_06b19c30 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19c30), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19c78,"zombie_pirate_basic_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b19c80,"zombie_pirate_basic_arm_outer_upper_02");
    nop();
    std::string::string((string *)&DAT_06b19c88,"zombie_pirate_basic_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b19c90,"zombie_pirate_basic_arm_outer_upper_02");
    nop();
    std::string::string((string *)&DAT_06b19c98,"zombie_pirate_basic_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b19ca0,"zombie_pirate_basic_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b19c30);
    __cxa_atexit(FUN_04615ec4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19c40 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19c40), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19c50,(string *)&DAT_06b19c78,(allocator *)&sClass);
    __cxa_guard_release(&DAT_06b19c40);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19c50,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19c50);
}

