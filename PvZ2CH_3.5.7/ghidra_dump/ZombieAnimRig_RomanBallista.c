// Class: ZombieAnimRig_RomanBallista


/* ZombieAnimRig_RomanBallista::StaticGetClass() */

long * ZombieAnimRig_RomanBallista::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_RomanBallista",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_RomanBallista::GetClass() const */

long * ZombieAnimRig_RomanBallista::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_RomanBallista",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_RomanBallista::~ZombieAnimRig_RomanBallista() */

void __thiscall
ZombieAnimRig_RomanBallista::~ZombieAnimRig_RomanBallista(ZombieAnimRig_RomanBallista *this)

{
  *(undefined ***)this = &PTR_GetClass_0688cc30;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_RomanBallista_0688cea8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_RomanBallista::~ZombieAnimRig_RomanBallista() */

void __thiscall
ZombieAnimRig_RomanBallista::~ZombieAnimRig_RomanBallista(ZombieAnimRig_RomanBallista *this)

{
  ~ZombieAnimRig_RomanBallista(this + -0x10);
  return;
}


/* ZombieAnimRig_RomanBallista::~ZombieAnimRig_RomanBallista() */

void __thiscall
ZombieAnimRig_RomanBallista::~ZombieAnimRig_RomanBallista(ZombieAnimRig_RomanBallista *this)

{
  ~ZombieAnimRig_RomanBallista(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_RomanBallista::~ZombieAnimRig_RomanBallista() */

void __thiscall
ZombieAnimRig_RomanBallista::~ZombieAnimRig_RomanBallista(ZombieAnimRig_RomanBallista *this)

{
  ~ZombieAnimRig_RomanBallista(this + -0x10);
  return;
}


/* ZombieAnimRig_RomanBallista::ZombieAnimRig_RomanBallista() */

void __thiscall
ZombieAnimRig_RomanBallista::ZombieAnimRig_RomanBallista(ZombieAnimRig_RomanBallista *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0688cc30;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_RomanBallista_0688cea8;
  return;
}


/* ZombieAnimRig_RomanBallista::StaticNew() */

ZombieAnimRig_RomanBallista * ZombieAnimRig_RomanBallista::StaticNew(void)

{
  ZombieAnimRig_RomanBallista *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_RomanBallista(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RomanBallista::getHeadLayerNames() */

void ZombieAnimRig_RomanBallista::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1d070 & 1;
  if (((DAT_06b1d070 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d070), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1d078,"zombie_imp_skull");
    nop();
    std::string::string((string *)&DAT_06b1d080,"zombie_imp_jaw");
    nop();
    __cxa_guard_release(&DAT_06b1d070);
    __cxa_atexit(FUN_0465a71c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1d110 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d110), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1d090,(string *)&DAT_06b1d078,(allocator *)&DAT_06b1d088);
    __cxa_guard_release(&DAT_06b1d110);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1d090,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1d090);
}

