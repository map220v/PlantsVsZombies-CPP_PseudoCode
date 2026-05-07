// Class: ZombieAnimRig_DinoBully


/* ZombieAnimRig_DinoBully::~ZombieAnimRig_DinoBully() */

void __thiscall ZombieAnimRig_DinoBully::~ZombieAnimRig_DinoBully(ZombieAnimRig_DinoBully *this)

{
  *(undefined ***)this = &PTR_GetClass_068f9810;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_DinoBully_068f9b28;
  ZombieAnimRig_DinoBasic::~ZombieAnimRig_DinoBasic((ZombieAnimRig_DinoBasic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_DinoBully::~ZombieAnimRig_DinoBully() */

void __thiscall ZombieAnimRig_DinoBully::~ZombieAnimRig_DinoBully(ZombieAnimRig_DinoBully *this)

{
  ~ZombieAnimRig_DinoBully(this + -0x10);
  return;
}


/* ZombieAnimRig_DinoBully::~ZombieAnimRig_DinoBully() */

void __thiscall ZombieAnimRig_DinoBully::~ZombieAnimRig_DinoBully(ZombieAnimRig_DinoBully *this)

{
  ~ZombieAnimRig_DinoBully(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_DinoBully::~ZombieAnimRig_DinoBully() */

void __thiscall ZombieAnimRig_DinoBully::~ZombieAnimRig_DinoBully(ZombieAnimRig_DinoBully *this)

{
  ~ZombieAnimRig_DinoBully(this + -0x10);
  return;
}


/* ZombieAnimRig_DinoBully::ZombieAnimRig_DinoBully() */

void __thiscall ZombieAnimRig_DinoBully::ZombieAnimRig_DinoBully(ZombieAnimRig_DinoBully *this)

{
  ZombieAnimRig_DinoBasic::ZombieAnimRig_DinoBasic((ZombieAnimRig_DinoBasic *)this);
  *(undefined ***)this = &PTR_GetClass_068f9810;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_DinoBully_068f9b28;
  return;
}


/* ZombieAnimRig_DinoBully::StaticNew() */

ZombieAnimRig_DinoBully * ZombieAnimRig_DinoBully::StaticNew(void)

{
  ZombieAnimRig_DinoBully *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_DinoBully(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DinoBully::StaticClassInit() */

void ZombieAnimRig_DinoBully::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_DinoBully");
    (*pcVar2)(plVar1,asStack_10,FUN_047fb19c,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_DinoBully::StaticGetClass() */

long * ZombieAnimRig_DinoBully::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_DinoBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_DinoBully",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_DinoBully::GetClass() const */

long * ZombieAnimRig_DinoBully::GetClass(void)

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
  uVar2 = ZombieAnimRig_DinoBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_DinoBully",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DinoBully::getHeadLayerNames() */

void ZombieAnimRig_DinoBully::getHeadLayerNames(void)

{
  int iVar1;
  undefined1 auStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06b28ab0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b28ab0), iVar1 != 0)) {
    std::string::string(asStack_28,"_zombie_head_idle");
    std::string::string(asStack_20,"zombie_troglobite_head");
    std::string::string(asStack_18,"zombie_troglobite_jaw");
    std::string::string(asStack_10,"zombie_troglobite_skull");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&DAT_06b28ac8,asStack_28,4,
               auStack_30);
    __cxa_guard_release(&DAT_06b28ab0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b28ac8,
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
  __stack_chk_fail(&DAT_06b28ac8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DinoBully::getArmLayerNames() */

void ZombieAnimRig_DinoBully::getArmLayerNames(void)

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
  if (((DAT_06b28ae0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b28ae0), iVar1 != 0)) {
    std::string::string(asStack_30,"zombie_troglobite_arm_outer_lower");
    this = (string *)&local_8;
    std::string::string(asStack_28,"zombie_troglobite_hand_outer");
    std::string::string(asStack_20,"zombie_troglobite_hand_oute_push");
    std::string::string(asStack_18,"zombie_hand_outer_01");
    std::string::string(asStack_10,"zombie_hand_outer_02");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&DAT_06b28b20,asStack_30,5,
               auStack_38);
    __cxa_guard_release(&DAT_06b28ae0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b28b20,
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
  __stack_chk_fail(&DAT_06b28b20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DinoBully::getArmReplacementPairNames() */

void ZombieAnimRig_DinoBully::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b28b48 & 1;
  if (((DAT_06b28b48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28b48), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b28ab8,"zombie_troglobite_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b28ac0,"zombie_troglobite_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b28b48);
    __cxa_atexit(FUN_047fad14,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b28b18 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28b18), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b28b00,(string *)&DAT_06b28ab8,(allocator *)&DAT_06b28ac8);
    __cxa_guard_release(&DAT_06b28b18);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b28b00,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b28b00);
}

