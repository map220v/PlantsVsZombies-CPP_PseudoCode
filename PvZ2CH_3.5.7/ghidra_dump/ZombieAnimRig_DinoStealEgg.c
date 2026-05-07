// Class: ZombieAnimRig_DinoStealEgg


/* ZombieAnimRig_DinoStealEgg::SetHasEgg(bool) */

void __thiscall ZombieAnimRig_DinoStealEgg::SetHasEgg(ZombieAnimRig_DinoStealEgg *this,bool param_1)

{
  this[0x250] = (ZombieAnimRig_DinoStealEgg)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DinoStealEgg::getIdleAnimationName() */

void ZombieAnimRig_DinoStealEgg::getIdleAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x250) == '\0') {
    __s = "idle";
  }
  else {
    __s = "idle2";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DinoStealEgg::getWalkAnimationName() */

void ZombieAnimRig_DinoStealEgg::getWalkAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x250) == '\0') {
    __s = "walk";
  }
  else {
    __s = "walk2";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DinoStealEgg::getDieAnimationName() */

void ZombieAnimRig_DinoStealEgg::getDieAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x250) == '\0') {
    __s = "die";
  }
  else {
    __s = "die2";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DinoStealEgg::StaticClassInit() */

void ZombieAnimRig_DinoStealEgg::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_DinoStealEgg");
    (*pcVar2)(plVar1,asStack_10,FUN_047fe704,600,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_DinoStealEgg::StaticGetClass() */

long * ZombieAnimRig_DinoStealEgg::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_DinoStealEgg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_DinoStealEgg::GetClass() const */

long * ZombieAnimRig_DinoStealEgg::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_DinoStealEgg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_DinoStealEgg::~ZombieAnimRig_DinoStealEgg() */

void __thiscall
ZombieAnimRig_DinoStealEgg::~ZombieAnimRig_DinoStealEgg(ZombieAnimRig_DinoStealEgg *this)

{
  *(undefined ***)this = &PTR_GetClass_068fc250;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_DinoStealEgg_068fc568;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_DinoStealEgg::~ZombieAnimRig_DinoStealEgg() */

void __thiscall
ZombieAnimRig_DinoStealEgg::~ZombieAnimRig_DinoStealEgg(ZombieAnimRig_DinoStealEgg *this)

{
  ~ZombieAnimRig_DinoStealEgg(this + -0x10);
  return;
}


/* ZombieAnimRig_DinoStealEgg::~ZombieAnimRig_DinoStealEgg() */

void __thiscall
ZombieAnimRig_DinoStealEgg::~ZombieAnimRig_DinoStealEgg(ZombieAnimRig_DinoStealEgg *this)

{
  ~ZombieAnimRig_DinoStealEgg(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_DinoStealEgg::~ZombieAnimRig_DinoStealEgg() */

void __thiscall
ZombieAnimRig_DinoStealEgg::~ZombieAnimRig_DinoStealEgg(ZombieAnimRig_DinoStealEgg *this)

{
  ~ZombieAnimRig_DinoStealEgg(this + -0x10);
  return;
}


/* ZombieAnimRig_DinoStealEgg::ZombieAnimRig_DinoStealEgg() */

void __thiscall
ZombieAnimRig_DinoStealEgg::ZombieAnimRig_DinoStealEgg(ZombieAnimRig_DinoStealEgg *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  this[0x250] = (ZombieAnimRig_DinoStealEgg)0x1;
  *(undefined ***)this = &PTR_GetClass_068fc250;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_DinoStealEgg_068fc568;
  return;
}


/* ZombieAnimRig_DinoStealEgg::StaticNew() */

ZombieAnimRig_DinoStealEgg * ZombieAnimRig_DinoStealEgg::StaticNew(void)

{
  ZombieAnimRig_DinoStealEgg *this;
  
  this = ::operator_new(600);
  ZombieAnimRig_DinoStealEgg(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DinoStealEgg::PlayThrowEgg(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_DinoStealEgg::PlayThrowEgg
          (ZombieAnimRig_DinoStealEgg *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"fell");
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
/* ZombieAnimRig_DinoStealEgg::PlayFallGetUp(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_DinoStealEgg::PlayFallGetUp
          (ZombieAnimRig_DinoStealEgg *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"up");
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
/* ZombieAnimRig_DinoStealEgg::getHeadLayerNames() */

void ZombieAnimRig_DinoStealEgg::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b28e28 & 1;
  if (((DAT_06b28e28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28e28), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b28e10,"zombie_imp_skull");
    nop();
    std::string::string((string *)&DAT_06b28e18,"zombie_imp_jaw");
    nop();
    __cxa_guard_release(&DAT_06b28e28);
    __cxa_atexit(FUN_047fde40,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b28f70 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28f70), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b28f58,(string *)&DAT_06b28e10,(allocator *)&DAT_06b28e20);
    __cxa_guard_release(&DAT_06b28f70);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b28f58,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b28f58);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DinoStealEgg::getArmLayerNames() */

void ZombieAnimRig_DinoStealEgg::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b28e08 & 1;
  if (((DAT_06b28e08 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28e08), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b28e38,"zombie_imp_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b28e40,"zombie_imp_hand_outer");
    nop();
    __cxa_guard_release(&DAT_06b28e08);
    __cxa_atexit(FUN_047fde6c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b28f40 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28f40), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b28e58,(string *)&DAT_06b28e38,(allocator *)&DAT_06b28e48);
    __cxa_guard_release(&DAT_06b28f40);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b28e58,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b28e58);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DinoStealEgg::getArmReplacementPairNames() */

void ZombieAnimRig_DinoStealEgg::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b28e20 & 1;
  if (((DAT_06b28e20 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28e20), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b28e48,"zombie_imp_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b28e50,"zombie_imp_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b28e20);
    __cxa_atexit(FUN_047fde98,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b28f30 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28f30), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b28f08,(string *)&DAT_06b28e48,(allocator *)&DAT_06b28e58);
    __cxa_guard_release(&DAT_06b28f30);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b28f08,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b28f08);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DinoStealEgg::HideAllEggs() */

void __thiscall ZombieAnimRig_DinoStealEgg::HideAllEggs(ZombieAnimRig_DinoStealEgg *this)

{
  bool bVar1;
  string *psVar2;
  undefined8 local_50;
  undefined8 local_48;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_40 [24];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_28,"dan1");
  std::string::string(asStack_20,"dan2");
  std::string::string(asStack_18,"dan3");
  std::string::string(asStack_10,"dan4");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_40,asStack_28,4,
             (__normal_iterator *)&local_48);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  nop();
  nop();
  nop();
  nop();
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_40);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_40);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1) {
    psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar2,false);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_DinoStealEgg::SetCarriedEgg(std::string const&) */

void __thiscall
ZombieAnimRig_DinoStealEgg::SetCarriedEgg(ZombieAnimRig_DinoStealEgg *this,string *param_1)

{
  HideAllEggs(this);
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,param_1,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DinoStealEgg::onPopAnimInitialized() */

void __thiscall ZombieAnimRig_DinoStealEgg::onPopAnimInitialized(ZombieAnimRig_DinoStealEgg *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieAnimRig_PirateBarrel::onPopAnimInitialized((ZombieAnimRig_PirateBarrel *)this);
  std::string::string(asStack_10,"dan1");
  SetCarriedEgg(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

