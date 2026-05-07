// Class: ZombieAnimRig_ModernAllStar


/* ZombieAnimRig_ModernAllStar::~ZombieAnimRig_ModernAllStar() */

void __thiscall
ZombieAnimRig_ModernAllStar::~ZombieAnimRig_ModernAllStar(ZombieAnimRig_ModernAllStar *this)

{
  *(undefined ***)this = &PTR_GetClass_0674d740;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ModernAllStar_0674d9b8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ModernAllStar::~ZombieAnimRig_ModernAllStar() */

void __thiscall
ZombieAnimRig_ModernAllStar::~ZombieAnimRig_ModernAllStar(ZombieAnimRig_ModernAllStar *this)

{
  ~ZombieAnimRig_ModernAllStar(this + -0x10);
  return;
}


/* ZombieAnimRig_ModernAllStar::~ZombieAnimRig_ModernAllStar() */

void __thiscall
ZombieAnimRig_ModernAllStar::~ZombieAnimRig_ModernAllStar(ZombieAnimRig_ModernAllStar *this)

{
  ~ZombieAnimRig_ModernAllStar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ModernAllStar::~ZombieAnimRig_ModernAllStar() */

void __thiscall
ZombieAnimRig_ModernAllStar::~ZombieAnimRig_ModernAllStar(ZombieAnimRig_ModernAllStar *this)

{
  ~ZombieAnimRig_ModernAllStar(this + -0x10);
  return;
}


/* ZombieAnimRig_ModernAllStar::ZombieAnimRig_ModernAllStar() */

void __thiscall
ZombieAnimRig_ModernAllStar::ZombieAnimRig_ModernAllStar(ZombieAnimRig_ModernAllStar *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0674d740;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ModernAllStar_0674d9b8;
  return;
}


/* ZombieAnimRig_ModernAllStar::StaticNew() */

ZombieAnimRig_ModernAllStar * ZombieAnimRig_ModernAllStar::StaticNew(void)

{
  ZombieAnimRig_ModernAllStar *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_ModernAllStar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernAllStar::StaticClassInit() */

void ZombieAnimRig_ModernAllStar::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ModernAllStar");
    (*pcVar2)(plVar1,asStack_10,FUN_03c323dc,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ModernAllStar::StaticGetClass() */

long * ZombieAnimRig_ModernAllStar::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ModernAllStar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ModernAllStar::GetClass() const */

long * ZombieAnimRig_ModernAllStar::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ModernAllStar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernAllStar::TacklePlant(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_ModernAllStar::TacklePlant
          (ZombieAnimRig_ModernAllStar *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"tackle");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernAllStar::PuntTheImp(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_ModernAllStar::PuntTheImp
          (ZombieAnimRig_ModernAllStar *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"kick");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernAllStar::getArmReplacementPairNames() */

void ZombieAnimRig_ModernAllStar::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06acf898 & 1;
  if (((DAT_06acf898 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06acf898), iVar2 != 0)) {
    std::string::string((string *)&DAT_06acf880,"zombie_troglobite_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06acf888,"zombie_troglobite_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06acf898);
    __cxa_atexit(FUN_03c318ec,uVar3,&DAT_06a88000);
  }
  if (((DAT_06acf878 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06acf878), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06acf950,(string *)&DAT_06acf880,(allocator *)&DAT_06acf890);
    __cxa_guard_release(&DAT_06acf878);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06acf950,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06acf950);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernAllStar::getHeadLayerNames() */

void ZombieAnimRig_ModernAllStar::getHeadLayerNames(void)

{
  int iVar1;
  string *this;
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06acf8d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06acf8d0), iVar1 != 0)) {
    std::string::string(asStack_48,"allstar_head_helmet_particle");
    std::string::string(asStack_40,"_zombie_head_idle");
    this = (string *)&local_8;
    std::string::string(asStack_38,"_zombie_head_particle");
    std::string::string(asStack_30,"_zombie_head_eat");
    std::string::string(asStack_28,"zombie_jaw");
    std::string::string(asStack_20,"zombie_pupil");
    std::string::string(asStack_18,"zombie_skull");
    std::string::string(asStack_10,"particle_head");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&DAT_06acf8b8,asStack_48,8,
               auStack_50);
    __cxa_guard_release(&DAT_06acf8d0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06acf8b8,
                 &DAT_06a88000);
    do {
      this = this + -8;
      std::string::~string(this);
    } while (this != asStack_48);
    nop();
    nop();
    nop();
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
  __stack_chk_fail(&DAT_06acf8b8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernAllStar::getArmLayerNames() */

void ZombieAnimRig_ModernAllStar::getArmLayerNames(void)

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
  if (((DAT_06acf938 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06acf938), iVar1 != 0)) {
    std::string::string(asStack_30,"zombie_troglobite_arm_outer_lower");
    this = (string *)&local_8;
    std::string::string(asStack_28,"zombie_troglobite_hand_outer");
    std::string::string(asStack_20,"zombie_troglobite_hand_oute_push");
    std::string::string(asStack_18,"zombie_hand_outer_01");
    std::string::string(asStack_10,"zombie_hand_outer_02");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&DAT_06acf860,asStack_30,5,
               auStack_38);
    __cxa_guard_release(&DAT_06acf938);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06acf860,
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
  __stack_chk_fail(&DAT_06acf860);
}

