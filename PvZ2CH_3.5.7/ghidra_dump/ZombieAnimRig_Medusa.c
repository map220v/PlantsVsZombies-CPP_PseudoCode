// Class: ZombieAnimRig_Medusa


/* ZombieAnimRig_Medusa::~ZombieAnimRig_Medusa() */

void __thiscall ZombieAnimRig_Medusa::~ZombieAnimRig_Medusa(ZombieAnimRig_Medusa *this)

{
  *(undefined ***)this = &PTR_GetClass_06a094a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Medusa_06a09728;
  ZombieAnimRig_Troglobite::~ZombieAnimRig_Troglobite((ZombieAnimRig_Troglobite *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Medusa::~ZombieAnimRig_Medusa() */

void __thiscall ZombieAnimRig_Medusa::~ZombieAnimRig_Medusa(ZombieAnimRig_Medusa *this)

{
  ~ZombieAnimRig_Medusa(this + -0x10);
  return;
}


/* ZombieAnimRig_Medusa::~ZombieAnimRig_Medusa() */

void __thiscall ZombieAnimRig_Medusa::~ZombieAnimRig_Medusa(ZombieAnimRig_Medusa *this)

{
  ~ZombieAnimRig_Medusa(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Medusa::~ZombieAnimRig_Medusa() */

void __thiscall ZombieAnimRig_Medusa::~ZombieAnimRig_Medusa(ZombieAnimRig_Medusa *this)

{
  ~ZombieAnimRig_Medusa(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Medusa::StaticClassInit() */

void ZombieAnimRig_Medusa::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Medusa");
    (*pcVar2)(plVar1,asStack_10,FUN_04efac7c,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Medusa::StaticGetClass() */

long * ZombieAnimRig_Medusa::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Troglobite::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Medusa",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Medusa::GetClass() const */

long * ZombieAnimRig_Medusa::GetClass(void)

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
  uVar2 = ZombieAnimRig_Troglobite::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Medusa",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Medusa::PlayPetrify(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_Medusa::PlayPetrify(ZombieAnimRig_Medusa *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"petrification");
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


/* ZombieAnimRig_Medusa::ZombieAnimRig_Medusa() */

void __thiscall ZombieAnimRig_Medusa::ZombieAnimRig_Medusa(ZombieAnimRig_Medusa *this)

{
  ZombieAnimRig_Troglobite::ZombieAnimRig_Troglobite((ZombieAnimRig_Troglobite *)this);
  *(undefined ***)this = &PTR_GetClass_06a094a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Medusa_06a09728;
  return;
}


/* ZombieAnimRig_Medusa::StaticNew() */

ZombieAnimRig_Medusa * ZombieAnimRig_Medusa::StaticNew(void)

{
  ZombieAnimRig_Medusa *this;
  
  this = ::operator_new(0x2d8);
  ZombieAnimRig_Medusa(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Medusa::getArmReplacementPairNames() */

void ZombieAnimRig_Medusa::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba49b0 & 1;
  if (((DAT_06ba49b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba49b0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba4a48,"zombie_medusa_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06ba4a50,"zombie_medusa_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06ba49b0);
    __cxa_atexit(FUN_04efa230,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba4a28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba4a28), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba4a30,(string *)&DAT_06ba4a48,
               (allocator *)&ZombieRomanMedusaPetrifyActionHandler::sClass);
    __cxa_guard_release(&DAT_06ba4a28);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba4a30,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba4a30);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Medusa::getHeadLayerNames() */

void ZombieAnimRig_Medusa::getHeadLayerNames(void)

{
  int iVar1;
  undefined1 auStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06ba49c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06ba49c0), iVar1 != 0)) {
    std::string::string(asStack_28,"_zombie_head_idle");
    std::string::string(asStack_20,"zombie_medusa_jaw");
    std::string::string(asStack_18,"zombie_medusa_skull");
    std::string::string(asStack_10,"zombie_medusa_snake_head");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&DAT_06ba49c8,asStack_28,4,
               auStack_30);
    __cxa_guard_release(&DAT_06ba49c0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba49c8,
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
  __stack_chk_fail(&DAT_06ba49c8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Medusa::getArmLayerNames() */

void ZombieAnimRig_Medusa::getArmLayerNames(void)

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
  if (((DAT_06ba4ad0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06ba4ad0), iVar1 != 0)) {
    std::string::string(asStack_30,"zombie_medusa_arm_outer_lower");
    this = (string *)&local_8;
    std::string::string(asStack_28,"zombie_medusa_hand_oute_push");
    std::string::string(asStack_20,"zombie_medusa_hand_outer");
    std::string::string(asStack_18,"zombie_medusa_hand_outer_01");
    std::string::string(asStack_10,"zombie_medusa_hand_outer_02");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&DAT_06ba49f8,asStack_30,5,
               auStack_38);
    __cxa_guard_release(&DAT_06ba4ad0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba49f8,
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
  __stack_chk_fail(&DAT_06ba49f8);
}

