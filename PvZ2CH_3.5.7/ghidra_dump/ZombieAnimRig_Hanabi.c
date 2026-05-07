// Class: ZombieAnimRig_Hanabi


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Hanabi::StaticClassInit() */

void ZombieAnimRig_Hanabi::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Hanabi");
    (*pcVar2)(plVar1,asStack_10,FUN_04ef1164,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Hanabi::StaticGetClass() */

long * ZombieAnimRig_Hanabi::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Hanabi",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Hanabi::GetClass() const */

long * ZombieAnimRig_Hanabi::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Hanabi",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Hanabi::~ZombieAnimRig_Hanabi() */

void __thiscall ZombieAnimRig_Hanabi::~ZombieAnimRig_Hanabi(ZombieAnimRig_Hanabi *this)

{
  *(undefined ***)this = &PTR_GetClass_06a048d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Hanabi_06a04be8;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Hanabi::~ZombieAnimRig_Hanabi() */

void __thiscall ZombieAnimRig_Hanabi::~ZombieAnimRig_Hanabi(ZombieAnimRig_Hanabi *this)

{
  ~ZombieAnimRig_Hanabi(this + -0x10);
  return;
}


/* ZombieAnimRig_Hanabi::~ZombieAnimRig_Hanabi() */

void __thiscall ZombieAnimRig_Hanabi::~ZombieAnimRig_Hanabi(ZombieAnimRig_Hanabi *this)

{
  ~ZombieAnimRig_Hanabi(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Hanabi::~ZombieAnimRig_Hanabi() */

void __thiscall ZombieAnimRig_Hanabi::~ZombieAnimRig_Hanabi(ZombieAnimRig_Hanabi *this)

{
  ~ZombieAnimRig_Hanabi(this + -0x10);
  return;
}


/* ZombieAnimRig_Hanabi::ZombieAnimRig_Hanabi() */

void __thiscall ZombieAnimRig_Hanabi::ZombieAnimRig_Hanabi(ZombieAnimRig_Hanabi *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_06a048d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Hanabi_06a04be8;
  return;
}


/* ZombieAnimRig_Hanabi::StaticNew() */

ZombieAnimRig_Hanabi * ZombieAnimRig_Hanabi::StaticNew(void)

{
  ZombieAnimRig_Hanabi *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_Hanabi(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Hanabi::SetHanabiLayer(bool) */

void __thiscall ZombieAnimRig_Hanabi::SetHanabiLayer(ZombieAnimRig_Hanabi *this,bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"torch_fire_fire_frame_01");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"torch_fire_frame_04");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"torchwood_pea_flames_white");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"torchwood_pea_fireball");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"torchwood_pea_flames_main");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"torch_fire_frame_01");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"torch_fire_frame_02");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"torch_fire_frame_03");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"torch_fire_frame_04");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_explorer_flames_white");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_explorer_fireball");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_explorer_flames_main");
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
/* ZombieAnimRig_Hanabi::getHeadLayerNames() */

void ZombieAnimRig_Hanabi::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3dd8 & 1;
  if (((DAT_06ba3dd8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3dd8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba3e88,"zombie_egypt_ra_skull");
    nop();
    std::string::string((string *)&DAT_06ba3e90,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06ba3e98,"zombie_egypt_ra_jaw");
    nop();
    __cxa_guard_release(&DAT_06ba3dd8);
    __cxa_atexit(FUN_04ef0730,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3f00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3f00), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3f08,(string *)&DAT_06ba3e88,(allocator *)&DAT_06ba3ea0);
    __cxa_guard_release(&DAT_06ba3f00);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3f08,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3f08);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Hanabi::getArmLayerNames() */

void ZombieAnimRig_Hanabi::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3ed8 & 1;
  if (((DAT_06ba3ed8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3ed8), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06ba3ed8);
    __cxa_atexit(FUN_04ef0728,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3f60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3f60), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3df8,(string *)&DAT_06ba3f00,(allocator *)&DAT_06ba3f00);
    __cxa_guard_release(&DAT_06ba3f60);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3df8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3df8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Hanabi::getArmReplacementPairNames() */

void ZombieAnimRig_Hanabi::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3ee0 & 1;
  if (((DAT_06ba3ee0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3ee0), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06ba3ee0);
    __cxa_atexit(FUN_04ef072c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3d50 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3d50), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3d58,(string *)&HanabiProjectile::sClass,
               (allocator *)&HanabiProjectile::sClass);
    __cxa_guard_release(&DAT_06ba3d50);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3d58,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3d58);
}

