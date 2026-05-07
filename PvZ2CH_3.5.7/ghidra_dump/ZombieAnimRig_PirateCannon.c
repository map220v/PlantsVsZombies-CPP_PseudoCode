// Class: ZombieAnimRig_PirateCannon


/* ZombieAnimRig_PirateCannon::StaticGetClass() */

long * ZombieAnimRig_PirateCannon::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_PirateCannon",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_PirateCannon::GetClass() const */

long * ZombieAnimRig_PirateCannon::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_PirateCannon",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_PirateCannon::~ZombieAnimRig_PirateCannon() */

void __thiscall
ZombieAnimRig_PirateCannon::~ZombieAnimRig_PirateCannon(ZombieAnimRig_PirateCannon *this)

{
  *(undefined ***)this = &PTR_GetClass_06872420;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PirateCannon_06872698;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PirateCannon::~ZombieAnimRig_PirateCannon() */

void __thiscall
ZombieAnimRig_PirateCannon::~ZombieAnimRig_PirateCannon(ZombieAnimRig_PirateCannon *this)

{
  ~ZombieAnimRig_PirateCannon(this + -0x10);
  return;
}


/* ZombieAnimRig_PirateCannon::~ZombieAnimRig_PirateCannon() */

void __thiscall
ZombieAnimRig_PirateCannon::~ZombieAnimRig_PirateCannon(ZombieAnimRig_PirateCannon *this)

{
  ~ZombieAnimRig_PirateCannon(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PirateCannon::~ZombieAnimRig_PirateCannon() */

void __thiscall
ZombieAnimRig_PirateCannon::~ZombieAnimRig_PirateCannon(ZombieAnimRig_PirateCannon *this)

{
  ~ZombieAnimRig_PirateCannon(this + -0x10);
  return;
}


/* ZombieAnimRig_PirateCannon::ZombieAnimRig_PirateCannon() */

void __thiscall
ZombieAnimRig_PirateCannon::ZombieAnimRig_PirateCannon(ZombieAnimRig_PirateCannon *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06872420;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PirateCannon_06872698;
  return;
}


/* ZombieAnimRig_PirateCannon::StaticNew() */

ZombieAnimRig_PirateCannon * ZombieAnimRig_PirateCannon::StaticNew(void)

{
  ZombieAnimRig_PirateCannon *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_PirateCannon(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateCannon::getHeadLayerNames() */

void ZombieAnimRig_PirateCannon::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18778 & 1;
  if (((DAT_06b18778 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18778), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b187c8,"zombie_imp_skull");
    nop();
    std::string::string((string *)&DAT_06b187d0,"zombie_imp_jaw");
    nop();
    __cxa_guard_release(&DAT_06b18778);
    __cxa_atexit(FUN_04608a0c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b187a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b187a8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18790,(string *)&DAT_06b187c8,(allocator *)&DAT_06b187d8);
    __cxa_guard_release(&DAT_06b187a8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18790,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18790);
}

