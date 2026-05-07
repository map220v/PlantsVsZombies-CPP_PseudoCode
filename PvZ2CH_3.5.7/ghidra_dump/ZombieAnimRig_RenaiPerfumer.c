// Class: ZombieAnimRig_RenaiPerfumer


/* ZombieAnimRig_RenaiPerfumer::StaticGetClass() */

long * ZombieAnimRig_RenaiPerfumer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_RenaiPerfumer",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_RenaiPerfumer::GetClass() const */

long * ZombieAnimRig_RenaiPerfumer::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_RenaiPerfumer",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_RenaiPerfumer::~ZombieAnimRig_RenaiPerfumer() */

void __thiscall
ZombieAnimRig_RenaiPerfumer::~ZombieAnimRig_RenaiPerfumer(ZombieAnimRig_RenaiPerfumer *this)

{
  *(undefined ***)this = &PTR_GetClass_069fe960;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_RenaiPerfumer_069fec78;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_RenaiPerfumer::~ZombieAnimRig_RenaiPerfumer() */

void __thiscall
ZombieAnimRig_RenaiPerfumer::~ZombieAnimRig_RenaiPerfumer(ZombieAnimRig_RenaiPerfumer *this)

{
  ~ZombieAnimRig_RenaiPerfumer(this + -0x10);
  return;
}


/* ZombieAnimRig_RenaiPerfumer::~ZombieAnimRig_RenaiPerfumer() */

void __thiscall
ZombieAnimRig_RenaiPerfumer::~ZombieAnimRig_RenaiPerfumer(ZombieAnimRig_RenaiPerfumer *this)

{
  ~ZombieAnimRig_RenaiPerfumer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_RenaiPerfumer::~ZombieAnimRig_RenaiPerfumer() */

void __thiscall
ZombieAnimRig_RenaiPerfumer::~ZombieAnimRig_RenaiPerfumer(ZombieAnimRig_RenaiPerfumer *this)

{
  ~ZombieAnimRig_RenaiPerfumer(this + -0x10);
  return;
}


/* ZombieAnimRig_RenaiPerfumer::ZombieAnimRig_RenaiPerfumer() */

void __thiscall
ZombieAnimRig_RenaiPerfumer::ZombieAnimRig_RenaiPerfumer(ZombieAnimRig_RenaiPerfumer *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_069fe960;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_RenaiPerfumer_069fec78;
  return;
}


/* ZombieAnimRig_RenaiPerfumer::StaticNew() */

ZombieAnimRig_RenaiPerfumer * ZombieAnimRig_RenaiPerfumer::StaticNew(void)

{
  ZombieAnimRig_RenaiPerfumer *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_RenaiPerfumer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiPerfumer::getHeadLayerNames() */

void ZombieAnimRig_RenaiPerfumer::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3428 & 1;
  if (((DAT_06ba3428 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3428), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba3430,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06ba3438,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06ba3440,"maozi1");
    nop();
    std::string::string((string *)&DAT_06ba3448,"toufa2");
    nop();
    std::string::string((string *)&DAT_06ba3450,"toufa3");
    nop();
    std::string::string((string *)&DAT_06ba3458,"toufa4");
    nop();
    std::string::string((string *)&DAT_06ba3460,"toufa5");
    nop();
    __cxa_guard_release(&DAT_06ba3428);
    __cxa_atexit(FUN_04ee30ac,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3470 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3470), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3410,(string *)&DAT_06ba3430,(allocator *)&DAT_06ba3468);
    __cxa_guard_release(&DAT_06ba3470);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3410,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3410);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiPerfumer::getArmLayerNames() */

void ZombieAnimRig_RenaiPerfumer::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3468 & 1;
  if (((DAT_06ba3468 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3468), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba3490,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06ba3498,"zombie_arms_outer_upper");
    nop();
    std::string::string((string *)&DAT_06ba34a0,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06ba34a8,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06ba34b0,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06ba34b8,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06ba3468);
    __cxa_atexit(FUN_04ee30e4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3478 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3478), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba34d0,(string *)&DAT_06ba3490,(allocator *)&DAT_06ba34c0);
    __cxa_guard_release(&DAT_06ba3478);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba34d0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba34d0);
}

