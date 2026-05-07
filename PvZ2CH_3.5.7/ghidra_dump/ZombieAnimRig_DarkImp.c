// Class: ZombieAnimRig_DarkImp


/* ZombieAnimRig_DarkImp::StaticGetClass() */

long * ZombieAnimRig_DarkImp::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_DarkImp",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_DarkImp::GetClass() const */

long * ZombieAnimRig_DarkImp::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_DarkImp",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_DarkImp::~ZombieAnimRig_DarkImp() */

void __thiscall ZombieAnimRig_DarkImp::~ZombieAnimRig_DarkImp(ZombieAnimRig_DarkImp *this)

{
  *(undefined ***)this = &PTR_GetClass_0687b070;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_DarkImp_0687b328;
  ZombieAnimRig_Imp::~ZombieAnimRig_Imp((ZombieAnimRig_Imp *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_DarkImp::~ZombieAnimRig_DarkImp() */

void __thiscall ZombieAnimRig_DarkImp::~ZombieAnimRig_DarkImp(ZombieAnimRig_DarkImp *this)

{
  ~ZombieAnimRig_DarkImp(this + -0x10);
  return;
}


/* ZombieAnimRig_DarkImp::~ZombieAnimRig_DarkImp() */

void __thiscall ZombieAnimRig_DarkImp::~ZombieAnimRig_DarkImp(ZombieAnimRig_DarkImp *this)

{
  ~ZombieAnimRig_DarkImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_DarkImp::~ZombieAnimRig_DarkImp() */

void __thiscall ZombieAnimRig_DarkImp::~ZombieAnimRig_DarkImp(ZombieAnimRig_DarkImp *this)

{
  ~ZombieAnimRig_DarkImp(this + -0x10);
  return;
}


/* ZombieAnimRig_DarkImp::ZombieAnimRig_DarkImp() */

void __thiscall ZombieAnimRig_DarkImp::ZombieAnimRig_DarkImp(ZombieAnimRig_DarkImp *this)

{
  ZombieAnimRig_Imp::ZombieAnimRig_Imp((ZombieAnimRig_Imp *)this);
  *(undefined ***)this = &PTR_GetClass_0687b070;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_DarkImp_0687b328;
  return;
}


/* ZombieAnimRig_DarkImp::StaticNew() */

ZombieAnimRig_DarkImp * ZombieAnimRig_DarkImp::StaticNew(void)

{
  ZombieAnimRig_DarkImp *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_DarkImp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkImp::getConeLayerNames() */

void ZombieAnimRig_DarkImp::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1aef0 & 1;
  if (((DAT_06b1aef0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1aef0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1aed8,"zombie_armor_cone_norm");
    nop();
    std::string::string((string *)&DAT_06b1aee0,"zombie_armor_cone_damage_01");
    nop();
    std::string::string((string *)&DAT_06b1aee8,"zombie_armor_cone_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b1aef0);
    __cxa_atexit(FUN_046224ec,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1ae50 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1ae50), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1aea8,(string *)&DAT_06b1aed8,(allocator *)&DAT_06b1aef0);
    __cxa_guard_release(&DAT_06b1ae50);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1aea8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1aea8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkImp::getBucketLayerNames() */

void ZombieAnimRig_DarkImp::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1ae90 & 1;
  if (((DAT_06b1ae90 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1ae90), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1af18,"zombie_armor_bucket_norm");
    nop();
    std::string::string((string *)&DAT_06b1af20,"zombie_armor_bucket_damage_01");
    nop();
    std::string::string((string *)&DAT_06b1af28,"zombie_armor_bucket_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b1ae90);
    __cxa_atexit(FUN_04622520,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1af30 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1af30), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1ae70,(string *)&DAT_06b1af18,(allocator *)&DAT_06b1af30);
    __cxa_guard_release(&DAT_06b1af30);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1ae70,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1ae70);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkImp::getCrownLayerNames() */

void ZombieAnimRig_DarkImp::getCrownLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1af10 & 1;
  if (((DAT_06b1af10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1af10), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1aec0,"zombie_armor_crown_norm");
    nop();
    std::string::string((string *)&DAT_06b1aec8,"zombie_armor_crown_damage_01");
    nop();
    std::string::string((string *)&DAT_06b1aed0,"zombie_armor_crown_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b1af10);
    __cxa_atexit(FUN_04622554,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1aef8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1aef8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1ae58,(string *)&DAT_06b1aec0,(allocator *)&DAT_06b1aed8);
    __cxa_guard_release(&DAT_06b1aef8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1ae58,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1ae58);
}

