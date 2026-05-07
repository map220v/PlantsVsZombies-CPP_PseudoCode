// Class: ZombieAnimRig_HeianAkinndo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianAkinndo::GetHeadOffset() */

void __thiscall ZombieAnimRig_HeianAkinndo::GetHeadOffset(ZombieAnimRig_HeianAkinndo *this)

{
  ResistenceValueInfo local_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(local_18);
  std::string::string(asStack_10,"zombie_heian_akinndo_skull");
  PopAnimRig::CalcLayerTranslation((PopAnimRig *)this,asStack_10,(SexyVector2 *)local_18);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18._0_4_,local_18._4_4_);
}


/* ZombieAnimRig_HeianAkinndo::StaticGetClass() */

long * ZombieAnimRig_HeianAkinndo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_HeianAkinndo",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_HeianAkinndo::GetClass() const */

long * ZombieAnimRig_HeianAkinndo::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_HeianAkinndo",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_HeianAkinndo::~ZombieAnimRig_HeianAkinndo() */

void __thiscall
ZombieAnimRig_HeianAkinndo::~ZombieAnimRig_HeianAkinndo(ZombieAnimRig_HeianAkinndo *this)

{
  *(undefined ***)this = &PTR_GetClass_068893f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_HeianAkinndo_06889678;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_HeianAkinndo::~ZombieAnimRig_HeianAkinndo() */

void __thiscall
ZombieAnimRig_HeianAkinndo::~ZombieAnimRig_HeianAkinndo(ZombieAnimRig_HeianAkinndo *this)

{
  ~ZombieAnimRig_HeianAkinndo(this + -0x10);
  return;
}


/* ZombieAnimRig_HeianAkinndo::~ZombieAnimRig_HeianAkinndo() */

void __thiscall
ZombieAnimRig_HeianAkinndo::~ZombieAnimRig_HeianAkinndo(ZombieAnimRig_HeianAkinndo *this)

{
  ~ZombieAnimRig_HeianAkinndo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_HeianAkinndo::~ZombieAnimRig_HeianAkinndo() */

void __thiscall
ZombieAnimRig_HeianAkinndo::~ZombieAnimRig_HeianAkinndo(ZombieAnimRig_HeianAkinndo *this)

{
  ~ZombieAnimRig_HeianAkinndo(this + -0x10);
  return;
}


/* ZombieAnimRig_HeianAkinndo::ZombieAnimRig_HeianAkinndo() */

void __thiscall
ZombieAnimRig_HeianAkinndo::ZombieAnimRig_HeianAkinndo(ZombieAnimRig_HeianAkinndo *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068893f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_HeianAkinndo_06889678;
  return;
}


/* ZombieAnimRig_HeianAkinndo::StaticNew() */

ZombieAnimRig_HeianAkinndo * ZombieAnimRig_HeianAkinndo::StaticNew(void)

{
  ZombieAnimRig_HeianAkinndo *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_HeianAkinndo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianAkinndo::getHeadLayerNames() */

void ZombieAnimRig_HeianAkinndo::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1cd48 & 1;
  if (((DAT_06b1cd48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1cd48), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1cd18,"zombie_heian_akinndo_skull");
    nop();
    std::string::string((string *)&DAT_06b1cd20,"hat");
    nop();
    std::string::string((string *)&DAT_06b1cd28,"zombie_heian_akinndo_jaw");
    nop();
    __cxa_guard_release(&DAT_06b1cd48);
    __cxa_atexit(FUN_046530c0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1cbe8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1cbe8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1cdc0,(string *)&DAT_06b1cd18,(allocator *)&DAT_06b1cd30);
    __cxa_guard_release(&DAT_06b1cbe8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1cdc0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1cdc0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianAkinndo::getArmLayerNames() */

void ZombieAnimRig_HeianAkinndo::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1cc00 & 1;
  if (((DAT_06b1cc00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1cc00), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1cc20,"zombie_heian_akinndo_hand_outer");
    nop();
    std::string::string((string *)&DAT_06b1cc28,"zombie_heian_akinndo_hand_outer2");
    nop();
    std::string::string((string *)&DAT_06b1cc30,"zombie_heian_akinndo_arm_outer_lower");
    nop();
    __cxa_guard_release(&DAT_06b1cc00);
    __cxa_atexit(FUN_046530f4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1cd50 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1cd50), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1cc08,(string *)&DAT_06b1cc20,(allocator *)&DAT_06b1cc38);
    __cxa_guard_release(&DAT_06b1cd50);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1cc08,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1cc08);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianAkinndo::getArmReplacementPairNames() */

void ZombieAnimRig_HeianAkinndo::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1cd60 & 1;
  if (((DAT_06b1cd60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1cd60), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1cd70,"zombie_heian_akinndo_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b1cd78,"zombie_heian_akinndo_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b1cd60);
    __cxa_atexit(FUN_04653128,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1cd80 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1cd80), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1cd30,(string *)&DAT_06b1cd70,(allocator *)&DAT_06b1cd80);
    __cxa_guard_release(&DAT_06b1cd80);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1cd30,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1cd30);
}

