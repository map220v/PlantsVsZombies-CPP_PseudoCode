// Class: ZombieAnimRig_EightiesGlitter


/* ZombieAnimRig_EightiesGlitter::~ZombieAnimRig_EightiesGlitter() */

void __thiscall
ZombieAnimRig_EightiesGlitter::~ZombieAnimRig_EightiesGlitter(ZombieAnimRig_EightiesGlitter *this)

{
  *(undefined ***)this = &PTR_GetClass_068f38a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_EightiesGlitter_068f3b18;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_EightiesGlitter::~ZombieAnimRig_EightiesGlitter() */

void __thiscall
ZombieAnimRig_EightiesGlitter::~ZombieAnimRig_EightiesGlitter(ZombieAnimRig_EightiesGlitter *this)

{
  ~ZombieAnimRig_EightiesGlitter(this + -0x10);
  return;
}


/* ZombieAnimRig_EightiesGlitter::~ZombieAnimRig_EightiesGlitter() */

void __thiscall
ZombieAnimRig_EightiesGlitter::~ZombieAnimRig_EightiesGlitter(ZombieAnimRig_EightiesGlitter *this)

{
  ~ZombieAnimRig_EightiesGlitter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_EightiesGlitter::~ZombieAnimRig_EightiesGlitter() */

void __thiscall
ZombieAnimRig_EightiesGlitter::~ZombieAnimRig_EightiesGlitter(ZombieAnimRig_EightiesGlitter *this)

{
  ~ZombieAnimRig_EightiesGlitter(this + -0x10);
  return;
}


/* ZombieAnimRig_EightiesGlitter::ZombieAnimRig_EightiesGlitter() */

void __thiscall
ZombieAnimRig_EightiesGlitter::ZombieAnimRig_EightiesGlitter(ZombieAnimRig_EightiesGlitter *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068f38a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_EightiesGlitter_068f3b18;
  return;
}


/* ZombieAnimRig_EightiesGlitter::StaticNew() */

ZombieAnimRig_EightiesGlitter * ZombieAnimRig_EightiesGlitter::StaticNew(void)

{
  ZombieAnimRig_EightiesGlitter *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_EightiesGlitter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesGlitter::StaticClassInit() */

void ZombieAnimRig_EightiesGlitter::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_EightiesGlitter");
    (*pcVar2)(plVar1,asStack_10,FUN_047e9290,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_EightiesGlitter::StaticGetClass() */

long * ZombieAnimRig_EightiesGlitter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_EightiesGlitter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_EightiesGlitter::GetClass() const */

long * ZombieAnimRig_EightiesGlitter::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_EightiesGlitter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesGlitter::getHeadLayerNames() */

void ZombieAnimRig_EightiesGlitter::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b280e8 & 1;
  if (((DAT_06b280e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b280e8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b27fc0,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b27fc8,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06b27fd0,"zombie_hair");
    nop();
    std::string::string((string *)&DAT_06b27fd8,"zombadu_hair_back");
    nop();
    __cxa_guard_release(&DAT_06b280e8);
    __cxa_atexit(FUN_047e85bc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b280b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b280b8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b280f0,(string *)&DAT_06b27fc0,(allocator *)&DAT_06b27fe0);
    __cxa_guard_release(&DAT_06b280b8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b280f0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b280f0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesGlitter::getArmLayerNames() */

void ZombieAnimRig_EightiesGlitter::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b28090 & 1;
  if (((DAT_06b28090 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28090), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b28018,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b28020,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b28028,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b28030,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b28090);
    __cxa_atexit(FUN_047e85f8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b280a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b280a0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b280d0,(string *)&DAT_06b28018,(allocator *)&DAT_06b28038);
    __cxa_guard_release(&DAT_06b280a0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b280d0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b280d0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesGlitter::getArmReplacementPairNames() */

void ZombieAnimRig_EightiesGlitter::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b280a8 & 1;
  if (((DAT_06b280a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b280a8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b28058,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b28060,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b280a8);
    __cxa_atexit(FUN_047e8634,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b28000 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28000), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b27fe8,(string *)&DAT_06b28058,(allocator *)&DAT_06b28068);
    __cxa_guard_release(&DAT_06b28000);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b27fe8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b27fe8);
}

