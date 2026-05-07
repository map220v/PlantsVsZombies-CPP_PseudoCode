// Class: ZombieAnimRig_Swashbuckler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Swashbuckler::GetLocationOffset() */

void __thiscall ZombieAnimRig_Swashbuckler::GetLocationOffset(ZombieAnimRig_Swashbuckler *this)

{
  ResistenceValueInfo local_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(local_18);
  std::string::string(asStack_10,"zombie_swash_waist");
  PopAnimRig::CalcLayerTranslation((PopAnimRig *)this,asStack_10,(SexyVector2 *)local_18);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18._0_4_,local_18._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Swashbuckler::GetSwingFootOffset() */

void __thiscall ZombieAnimRig_Swashbuckler::GetSwingFootOffset(ZombieAnimRig_Swashbuckler *this)

{
  ResistenceValueInfo local_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(local_18);
  std::string::string(asStack_10,"zombie_swash_foot_outer_toe");
  PopAnimRig::CalcLayerTranslation((PopAnimRig *)this,asStack_10,(SexyVector2 *)local_18);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18._0_4_,local_18._4_4_);
}


/* ZombieAnimRig_Swashbuckler::~ZombieAnimRig_Swashbuckler() */

void __thiscall
ZombieAnimRig_Swashbuckler::~ZombieAnimRig_Swashbuckler(ZombieAnimRig_Swashbuckler *this)

{
  *(undefined ***)this = &PTR_GetClass_068b5180;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Swashbuckler_068b5408;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Swashbuckler::~ZombieAnimRig_Swashbuckler() */

void __thiscall
ZombieAnimRig_Swashbuckler::~ZombieAnimRig_Swashbuckler(ZombieAnimRig_Swashbuckler *this)

{
  ~ZombieAnimRig_Swashbuckler(this + -0x10);
  return;
}


/* ZombieAnimRig_Swashbuckler::~ZombieAnimRig_Swashbuckler() */

void __thiscall
ZombieAnimRig_Swashbuckler::~ZombieAnimRig_Swashbuckler(ZombieAnimRig_Swashbuckler *this)

{
  ~ZombieAnimRig_Swashbuckler(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Swashbuckler::~ZombieAnimRig_Swashbuckler() */

void __thiscall
ZombieAnimRig_Swashbuckler::~ZombieAnimRig_Swashbuckler(ZombieAnimRig_Swashbuckler *this)

{
  ~ZombieAnimRig_Swashbuckler(this + -0x10);
  return;
}


/* ZombieAnimRig_Swashbuckler::ZombieAnimRig_Swashbuckler() */

void __thiscall
ZombieAnimRig_Swashbuckler::ZombieAnimRig_Swashbuckler(ZombieAnimRig_Swashbuckler *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068b5180;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Swashbuckler_068b5408;
  return;
}


/* ZombieAnimRig_Swashbuckler::StaticNew() */

ZombieAnimRig_Swashbuckler * ZombieAnimRig_Swashbuckler::StaticNew(void)

{
  ZombieAnimRig_Swashbuckler *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_Swashbuckler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Swashbuckler::StaticClassInit() */

void ZombieAnimRig_Swashbuckler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Swashbuckler");
    (*pcVar2)(plVar1,asStack_10,FUN_046d4834,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Swashbuckler::StaticGetClass() */

long * ZombieAnimRig_Swashbuckler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Swashbuckler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Swashbuckler::GetClass() const */

long * ZombieAnimRig_Swashbuckler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Swashbuckler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Swashbuckler::PlaySwingBack(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_Swashbuckler::PlaySwingBack
          (ZombieAnimRig_Swashbuckler *this,RtReflectionDelegate *param_2)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar3 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"swing back");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar2 = (*pcVar3)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x210) = 8;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Swashbuckler::PlaySwingSuccess(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_Swashbuckler::PlaySwingSuccess
          (ZombieAnimRig_Swashbuckler *this,RtReflectionDelegate *param_2)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar3 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"swing success");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar2 = (*pcVar3)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x210) = 8;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Swashbuckler::PlaySwingFail(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_Swashbuckler::PlaySwingFail
          (ZombieAnimRig_Swashbuckler *this,RtReflectionDelegate *param_2)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar3 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"swing failure");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar2 = (*pcVar3)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x210) = 8;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Swashbuckler::getHeadLayerNames() */

void ZombieAnimRig_Swashbuckler::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b200b0 & 1;
  if (((DAT_06b200b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b200b0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b20188,"zombie_swash_skull");
    nop();
    std::string::string((string *)&DAT_06b20190,"zombie_swash_jaw");
    nop();
    __cxa_guard_release(&DAT_06b200b0);
    __cxa_atexit(FUN_046d3ca8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b20130 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b20130), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b20090,(string *)&DAT_06b20188,(allocator *)&DAT_06b20198);
    __cxa_guard_release(&DAT_06b20130);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b20090,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b20090);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Swashbuckler::getArmLayerNames() */

void ZombieAnimRig_Swashbuckler::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b20138 & 1;
  if (((DAT_06b20138 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b20138), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b20068,"zombie_swash_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b20070,"zombie_swash_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b20078,"zombie_swash_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b20080,"zombie_swash_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b20138);
    __cxa_atexit(FUN_046d3cd4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b200b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b200b8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b20170,(string *)&DAT_06b20068,
               (allocator *)&ZombieSwashbucklerProps::sClass);
    __cxa_guard_release(&DAT_06b200b8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b20170,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b20170);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Swashbuckler::getArmReplacementPairNames() */

void ZombieAnimRig_Swashbuckler::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b20210 & 1;
  if (((DAT_06b20210 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b20210), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b20048,"zombie_swash_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b20050,"zombie_swash_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b20210);
    __cxa_atexit(FUN_046d3d10,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b20158 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b20158), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b20140,(string *)&DAT_06b20048,(allocator *)&DAT_06b20058);
    __cxa_guard_release(&DAT_06b20158);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b20140,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b20140);
}

