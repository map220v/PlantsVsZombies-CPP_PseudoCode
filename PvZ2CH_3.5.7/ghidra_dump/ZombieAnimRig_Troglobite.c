// Class: ZombieAnimRig_Troglobite


/* ZombieAnimRig_Troglobite::~ZombieAnimRig_Troglobite() */

void __thiscall ZombieAnimRig_Troglobite::~ZombieAnimRig_Troglobite(ZombieAnimRig_Troglobite *this)

{
  *(undefined ***)this = &PTR_GetClass_068d24f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Troglobite_068d2778;
  ZombieWithPushingActionAnimRig::~ZombieWithPushingActionAnimRig
            ((ZombieWithPushingActionAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Troglobite::~ZombieAnimRig_Troglobite() */

void __thiscall ZombieAnimRig_Troglobite::~ZombieAnimRig_Troglobite(ZombieAnimRig_Troglobite *this)

{
  ~ZombieAnimRig_Troglobite(this + -0x10);
  return;
}


/* ZombieAnimRig_Troglobite::~ZombieAnimRig_Troglobite() */

void __thiscall ZombieAnimRig_Troglobite::~ZombieAnimRig_Troglobite(ZombieAnimRig_Troglobite *this)

{
  ~ZombieAnimRig_Troglobite(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Troglobite::~ZombieAnimRig_Troglobite() */

void __thiscall ZombieAnimRig_Troglobite::~ZombieAnimRig_Troglobite(ZombieAnimRig_Troglobite *this)

{
  ~ZombieAnimRig_Troglobite(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Troglobite::StaticClassInit() */

void ZombieAnimRig_Troglobite::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Troglobite");
    (*pcVar2)(plVar1,asStack_10,FUN_04768828,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Troglobite::StaticGetClass() */

long * ZombieAnimRig_Troglobite::StaticGetClass(void)

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
  uVar2 = ZombieWithPushingActionAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Troglobite",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Troglobite::GetClass() const */

long * ZombieAnimRig_Troglobite::GetClass(void)

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
  uVar2 = ZombieWithPushingActionAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Troglobite",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Troglobite::ZombieAnimRig_Troglobite() */

void __thiscall ZombieAnimRig_Troglobite::ZombieAnimRig_Troglobite(ZombieAnimRig_Troglobite *this)

{
  ZombieWithPushingActionAnimRig::ZombieWithPushingActionAnimRig
            ((ZombieWithPushingActionAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068d24f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Troglobite_068d2778;
  return;
}


/* ZombieAnimRig_Troglobite::StaticNew() */

ZombieAnimRig_Troglobite * ZombieAnimRig_Troglobite::StaticNew(void)

{
  ZombieAnimRig_Troglobite *this;
  
  this = ::operator_new(0x2d8);
  ZombieAnimRig_Troglobite(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Troglobite::getArmReplacementPairNames() */

void ZombieAnimRig_Troglobite::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b23c20 & 1;
  if (((DAT_06b23c20 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b23c20), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b23b18,"zombie_troglobite_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b23b20,"zombie_troglobite_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b23c20);
    __cxa_atexit(FUN_04767d74,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b23b70 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b23b70), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b23be0,(string *)&DAT_06b23b18,(allocator *)&DAT_06b23b28);
    __cxa_guard_release(&DAT_06b23b70);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b23be0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b23be0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Troglobite::getHeadLayerNames() */

void ZombieAnimRig_Troglobite::getHeadLayerNames(void)

{
  int iVar1;
  undefined1 auStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06b23b50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b23b50), iVar1 != 0)) {
    std::string::string(asStack_28,"_zombie_head_idle");
    std::string::string(asStack_20,"zombie_troglobite_head");
    std::string::string(asStack_18,"zombie_troglobite_jaw");
    std::string::string(asStack_10,"zombie_troglobite_skull");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&DAT_06b23b38,asStack_28,4,
               auStack_30);
    __cxa_guard_release(&DAT_06b23b50);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b23b38,
                 &DAT_06a88000);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    std::string::~string(asStack_28);
    nop();
    nop();
    nop();
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b23b38);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Troglobite::getArmLayerNames() */

void ZombieAnimRig_Troglobite::getArmLayerNames(void)

{
  int iVar1;
  string *this;
  undefined1 auStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06b23b28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b23b28), iVar1 != 0)) {
    std::string::string(asStack_30,"zombie_troglobite_arm_outer_lower");
    this = (string *)&local_8;
    std::string::string(asStack_28,"zombie_troglobite_hand_outer");
    std::string::string(asStack_20,"zombie_troglobite_hand_oute_push");
    std::string::string(asStack_18,"zombie_hand_outer_01");
    std::string::string(asStack_10,"zombie_hand_outer_02");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&DAT_06b23b58,asStack_30,5,
               auStack_38);
    __cxa_guard_release(&DAT_06b23b28);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b23b58,
                 &DAT_06a88000);
    do {
      this = this + -8;
      std::string::~string(this);
    } while (this != asStack_30);
    nop();
    nop();
    nop();
    nop();
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b23b58);
}

