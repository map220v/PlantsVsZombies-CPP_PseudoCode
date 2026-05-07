// Class: ZombieAnimRig_WolfFire


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WolfFire::SetTorchLayers(bool) */

void __thiscall ZombieAnimRig_WolfFire::SetTorchLayers(ZombieAnimRig_WolfFire *this,bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"torch_end_lit");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"torch_fire_animation");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"torch_fire_fire_frame_01");
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
  std::string::string(asStack_10,"torch_fireball");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_WolfFire::~ZombieAnimRig_WolfFire() */

void __thiscall ZombieAnimRig_WolfFire::~ZombieAnimRig_WolfFire(ZombieAnimRig_WolfFire *this)

{
  *(undefined ***)this = &PTR_GetClass_0688e690;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_WolfFire_0688e908;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_WolfFire::~ZombieAnimRig_WolfFire() */

void __thiscall ZombieAnimRig_WolfFire::~ZombieAnimRig_WolfFire(ZombieAnimRig_WolfFire *this)

{
  ~ZombieAnimRig_WolfFire(this + -0x10);
  return;
}


/* ZombieAnimRig_WolfFire::~ZombieAnimRig_WolfFire() */

void __thiscall ZombieAnimRig_WolfFire::~ZombieAnimRig_WolfFire(ZombieAnimRig_WolfFire *this)

{
  ~ZombieAnimRig_WolfFire(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_WolfFire::~ZombieAnimRig_WolfFire() */

void __thiscall ZombieAnimRig_WolfFire::~ZombieAnimRig_WolfFire(ZombieAnimRig_WolfFire *this)

{
  ~ZombieAnimRig_WolfFire(this + -0x10);
  return;
}


/* ZombieAnimRig_WolfFire::ZombieAnimRig_WolfFire() */

void __thiscall ZombieAnimRig_WolfFire::ZombieAnimRig_WolfFire(ZombieAnimRig_WolfFire *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0688e690;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_WolfFire_0688e908;
  return;
}


/* ZombieAnimRig_WolfFire::StaticNew() */

ZombieAnimRig_WolfFire * ZombieAnimRig_WolfFire::StaticNew(void)

{
  ZombieAnimRig_WolfFire *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_WolfFire(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WolfFire::StaticClassInit() */

void ZombieAnimRig_WolfFire::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_WolfFire");
    (*pcVar2)(plVar1,asStack_10,FUN_0465f740,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_WolfFire::StaticGetClass() */

long * ZombieAnimRig_WolfFire::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_WolfFire",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_WolfFire::GetClass() const */

long * ZombieAnimRig_WolfFire::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_WolfFire",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WolfFire::getHeadLayerNames() */

void ZombieAnimRig_WolfFire::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1d1d0 & 1;
  if (((DAT_06b1d1d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d1d0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1d200,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b1d208,"zombie_jaw");
    nop();
    __cxa_guard_release(&DAT_06b1d1d0);
    __cxa_atexit(FUN_0465f1b8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1d260 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d260), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1d228,(string *)&DAT_06b1d200,(allocator *)&DAT_06b1d210);
    __cxa_guard_release(&DAT_06b1d260);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1d228,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1d228);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WolfFire::getArmLayerNames() */

void ZombieAnimRig_WolfFire::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1d1e8 & 1;
  if (((DAT_06b1d1e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d1e8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1d1f0,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b1d1f8,"zombie_hand_outer_01");
    nop();
    __cxa_guard_release(&DAT_06b1d1e8);
    __cxa_atexit(FUN_0465f1e4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1d1c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d1c0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1d2b0,(string *)&DAT_06b1d1f0,(allocator *)&DAT_06b1d200);
    __cxa_guard_release(&DAT_06b1d1c0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1d2b0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1d2b0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WolfFire::getArmReplacementPairNames() */

void ZombieAnimRig_WolfFire::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1d240 & 1;
  if (((DAT_06b1d240 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d240), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1d248,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b1d250,"zombie_arm_outer_upper2");
    nop();
    __cxa_guard_release(&DAT_06b1d240);
    __cxa_atexit(FUN_0465f210,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1d1c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d1c8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1d298,(string *)&DAT_06b1d248,(allocator *)&ZombieWolfFire::sClass)
    ;
    __cxa_guard_release(&DAT_06b1d1c8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1d298,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1d298);
}

