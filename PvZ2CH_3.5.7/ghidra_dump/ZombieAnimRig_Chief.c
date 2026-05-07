// Class: ZombieAnimRig_Chief


/* ZombieAnimRig_Chief::~ZombieAnimRig_Chief() */

void __thiscall ZombieAnimRig_Chief::~ZombieAnimRig_Chief(ZombieAnimRig_Chief *this)

{
  *(undefined ***)this = &PTR_GetClass_068d5b40;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Chief_068d5db8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Chief::~ZombieAnimRig_Chief() */

void __thiscall ZombieAnimRig_Chief::~ZombieAnimRig_Chief(ZombieAnimRig_Chief *this)

{
  ~ZombieAnimRig_Chief(this + -0x10);
  return;
}


/* ZombieAnimRig_Chief::~ZombieAnimRig_Chief() */

void __thiscall ZombieAnimRig_Chief::~ZombieAnimRig_Chief(ZombieAnimRig_Chief *this)

{
  ~ZombieAnimRig_Chief(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Chief::~ZombieAnimRig_Chief() */

void __thiscall ZombieAnimRig_Chief::~ZombieAnimRig_Chief(ZombieAnimRig_Chief *this)

{
  ~ZombieAnimRig_Chief(this + -0x10);
  return;
}


/* ZombieAnimRig_Chief::ZombieAnimRig_Chief() */

void __thiscall ZombieAnimRig_Chief::ZombieAnimRig_Chief(ZombieAnimRig_Chief *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068d5b40;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Chief_068d5db8;
  return;
}


/* ZombieAnimRig_Chief::StaticNew() */

ZombieAnimRig_Chief * ZombieAnimRig_Chief::StaticNew(void)

{
  ZombieAnimRig_Chief *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_Chief(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Chief::StaticClassInit() */

void ZombieAnimRig_Chief::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Chief");
    (*pcVar2)(plVar1,asStack_10,FUN_04771208,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Chief::StaticGetClass() */

long * ZombieAnimRig_Chief::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Chief",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Chief::GetClass() const */

long * ZombieAnimRig_Chief::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Chief",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Chief::PlaySpawnWind(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_Chief::PlaySpawnWind(ZombieAnimRig_Chief *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"freezing");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 8;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Chief::getArmReplacementPairNames() */

void ZombieAnimRig_Chief::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b242f8 & 1;
  if (((DAT_06b242f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b242f8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b242c0,"zombie_troglobite_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b242c8,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b242f8);
    __cxa_atexit(FUN_04770724,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b24248 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b24248), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b24280,(string *)&DAT_06b242c0,(allocator *)&DAT_06b242d0);
    __cxa_guard_release(&DAT_06b24248);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b24280,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b24280);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Chief::getHeadLayerNames() */

void ZombieAnimRig_Chief::getHeadLayerNames(void)

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
  if (((DAT_06b242d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b242d0), iVar1 != 0)) {
    std::string::string(asStack_30,"zombie_troglobite_head_walk");
    this = (string *)&local_8;
    std::string::string(asStack_28,"zombie_troglobite_head");
    std::string::string(asStack_20,"zombie_troglobite_eat");
    std::string::string(asStack_18,"zombie_troglobite_walk_jaw");
    std::string::string(asStack_10,"zombie_troglobite_skull");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&DAT_06b24350,asStack_30,5,
               auStack_38);
    __cxa_guard_release(&DAT_06b242d0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b24350,
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
  __stack_chk_fail(&DAT_06b24350);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Chief::getArmLayerNames() */

void ZombieAnimRig_Chief::getArmLayerNames(void)

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
  if (((DAT_06b242b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b242b0), iVar1 != 0)) {
    std::string::string(asStack_30,"zombie_troglobite_arm_outer_lower");
    this = (string *)&local_8;
    std::string::string(asStack_28,"zombie_troglobite_hand_outer");
    std::string::string(asStack_20,"zombie_troglobite_hand_oute_push");
    std::string::string(asStack_18,"zombie_hand_outer_01");
    std::string::string(asStack_10,"zombie_hand_outer_02");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&DAT_06b24298,asStack_30,5,
               auStack_38);
    __cxa_guard_release(&DAT_06b242b0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b24298,
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
  __stack_chk_fail(&DAT_06b24298);
}

