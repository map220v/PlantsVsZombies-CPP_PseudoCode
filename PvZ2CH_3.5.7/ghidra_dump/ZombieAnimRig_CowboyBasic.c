// Class: ZombieAnimRig_CowboyBasic


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CowboyBasic::getWalkAnimationName() */

void ZombieAnimRig_CowboyBasic::getWalkAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  __s = k_danceStartLabel;
  if (*(char *)(in_x0 + 0x250) == '\0') {
    __s = "walk";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(in_x8);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CowboyBasic::SetLayerVisibilityForCurrentState() */

void __thiscall
ZombieAnimRig_CowboyBasic::SetLayerVisibilityForCurrentState(ZombieAnimRig_CowboyBasic *this)

{
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x300))(this,1);
  if ((cVar1 != '\0') || (cVar1 = (**(code **)(*(long *)this + 0x300))(this,2), cVar1 != '\0')) {
    std::string::string(asStack_10,"cowboy_hat");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
  }
  ZombieAnimRig_Basic::SetLayerVisibilityForCurrentState((ZombieAnimRig_Basic *)this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieAnimRig_CowboyBasic::StaticGetClass() */

long * ZombieAnimRig_CowboyBasic::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_CowboyBasic",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_CowboyBasic::GetClass() const */

long * ZombieAnimRig_CowboyBasic::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_CowboyBasic",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_CowboyBasic::~ZombieAnimRig_CowboyBasic() */

void __thiscall
ZombieAnimRig_CowboyBasic::~ZombieAnimRig_CowboyBasic(ZombieAnimRig_CowboyBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_0686e880;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_CowboyBasic_0686eb98;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_CowboyBasic::~ZombieAnimRig_CowboyBasic() */

void __thiscall
ZombieAnimRig_CowboyBasic::~ZombieAnimRig_CowboyBasic(ZombieAnimRig_CowboyBasic *this)

{
  ~ZombieAnimRig_CowboyBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_CowboyBasic::~ZombieAnimRig_CowboyBasic() */

void __thiscall
ZombieAnimRig_CowboyBasic::~ZombieAnimRig_CowboyBasic(ZombieAnimRig_CowboyBasic *this)

{
  ~ZombieAnimRig_CowboyBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_CowboyBasic::~ZombieAnimRig_CowboyBasic() */

void __thiscall
ZombieAnimRig_CowboyBasic::~ZombieAnimRig_CowboyBasic(ZombieAnimRig_CowboyBasic *this)

{
  ~ZombieAnimRig_CowboyBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_CowboyBasic::ZombieAnimRig_CowboyBasic() */

void __thiscall
ZombieAnimRig_CowboyBasic::ZombieAnimRig_CowboyBasic(ZombieAnimRig_CowboyBasic *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  this[0x250] = (ZombieAnimRig_CowboyBasic)0x0;
  *(undefined ***)this = &PTR_GetClass_0686e880;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_CowboyBasic_0686eb98;
  return;
}


/* ZombieAnimRig_CowboyBasic::StaticNew() */

ZombieAnimRig_CowboyBasic * ZombieAnimRig_CowboyBasic::StaticNew(void)

{
  ZombieAnimRig_CowboyBasic *this;
  
  this = ::operator_new(600);
  ZombieAnimRig_CowboyBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CowboyBasic::SetDancing(bool) */

void __thiscall ZombieAnimRig_CowboyBasic::SetDancing(ZombieAnimRig_CowboyBasic *this,bool param_1)

{
  char cVar1;
  code *pcVar2;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((this[0x250] != (ZombieAnimRig_CowboyBasic)param_1) &&
      (this[0x250] = (ZombieAnimRig_CowboyBasic)param_1, param_1)) &&
     (cVar1 = CreatureAnimRig::IsPlaying((CreatureAnimRig *)this,2), cVar1 != '\0')) {
    pcVar2 = *(code **)(*(long *)this + 0x118);
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate(aRStack_50);
    (*pcVar2)(this,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CowboyBasic::onAnimStopped() */

void __thiscall ZombieAnimRig_CowboyBasic::onAnimStopped(ZombieAnimRig_CowboyBasic *this)

{
  bool bVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  PopAnimRig::CalcPlayingAnimLabelName();
  bVar1 = std::operator==(asStack_58,k_danceStopLabel);
  if (bVar1) {
    pcVar2 = *(code **)(*(long *)this + 0x118);
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate(aRStack_50);
    (*pcVar2)(this,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    ZombieAnimRig::setReadyToDie((ZombieAnimRig *)this);
  }
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CowboyBasic::onAnimSequenceContinued() */

void __thiscall ZombieAnimRig_CowboyBasic::onAnimSequenceContinued(ZombieAnimRig_CowboyBasic *this)

{
  bool bVar1;
  code *pcVar2;
  string asStack_60 [8];
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopAnimRig::CalcPlayingAnimLabelName();
  bVar1 = std::operator==(asStack_60,k_danceStartLabel);
  if (bVar1) {
    if (this[0x250] == (ZombieAnimRig_CowboyBasic)0x0) {
      pcVar2 = *(code **)(*(long *)this + 0x168);
      std::string::string(asStack_58,k_danceStopLabel);
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_50);
      (*pcVar2)(this,asStack_58,0,aDStack_50);
      std::string::~string(asStack_58);
      nop();
    }
    else {
      std::string::string(asStack_58,k_danceLoopLabel);
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_50);
      PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_58,0,aDStack_50);
      std::string::~string(asStack_58);
      nop();
    }
  }
  else {
    bVar1 = std::operator==(asStack_60,k_danceLoopLabel);
    if (bVar1) {
      if (this[0x250] == (ZombieAnimRig_CowboyBasic)0x0) {
        pcVar2 = *(code **)(*(long *)this + 0x168);
        std::string::string(asStack_58,k_danceStopLabel);
        Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_50);
        (*pcVar2)(this,asStack_58,0,aDStack_50);
        std::string::~string(asStack_58);
        nop();
      }
    }
    else {
      bVar1 = std::operator==(asStack_60,"walk");
      if ((bVar1) && (this[0x250] != (ZombieAnimRig_CowboyBasic)0x0)) {
        pcVar2 = *(code **)(*(long *)this + 0x118);
        RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
        RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>
                    *)aDStack_50);
        (*pcVar2)(this,(RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>
                        *)aDStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aDStack_50);
        ZombieAnimRig::setReadyToDie((ZombieAnimRig *)this);
      }
      else {
        ZombieAnimRig::onAnimSequenceContinued((ZombieAnimRig *)this);
      }
    }
  }
  std::string::~string(asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CowboyBasic::getHeadLayerNames() */

void ZombieAnimRig_CowboyBasic::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b171e8 & 1;
  if (((DAT_06b171e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b171e8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17290,"zombie_west_skull");
    nop();
    std::string::string((string *)&DAT_06b17298,"zombie_west_jaw");
    nop();
    __cxa_guard_release(&DAT_06b171e8);
    __cxa_atexit(FUN_045facd8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b171f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b171f0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b171a0,(string *)&DAT_06b17290,(allocator *)&sClass);
    __cxa_guard_release(&DAT_06b171f0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b171a0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b171a0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CowboyBasic::getArmLayerNames() */

void ZombieAnimRig_CowboyBasic::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b172d8 & 1;
  if (((DAT_06b172d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b172d8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17360,"zombie_west_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b17368,"zombie_west_hand_outer");
    nop();
    std::string::string((string *)&DAT_06b17370,"zombie_west_hand_outer_upper");
    nop();
    __cxa_guard_release(&DAT_06b172d8);
    __cxa_atexit(FUN_045fad04,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b172f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b172f8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b171b8,(string *)&DAT_06b17360,(allocator *)&DAT_06b17378);
    __cxa_guard_release(&DAT_06b172f8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b171b8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b171b8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CowboyBasic::getArmReplacementPairNames() */

void ZombieAnimRig_CowboyBasic::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17270 & 1;
  if (((DAT_06b17270 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17270), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17278,"zombie_west_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b17280,"zombie_west_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b17270);
    __cxa_atexit(FUN_045fad38,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17220 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17220), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17248,(string *)&DAT_06b17278,(allocator *)&DAT_06b17288);
    __cxa_guard_release(&DAT_06b17220);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17248,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17248);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CowboyBasic::getFlagHandLayerNames() */

void ZombieAnimRig_CowboyBasic::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17200 & 1;
  if (((DAT_06b17200 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17200), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17288,"FIXME, 0 size array");
    nop();
    __cxa_guard_release(&DAT_06b17200);
    __cxa_atexit(FUN_045fad64,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17328 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17328), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17330,(string *)&DAT_06b17288,(allocator *)&DAT_06b17290);
    __cxa_guard_release(&DAT_06b17328);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17330,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17330);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CowboyBasic::getNoFlagHandLayerNames() */

void ZombieAnimRig_CowboyBasic::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17310 & 1;
  if (((DAT_06b17310 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17310), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17380,"FIXME, 0 size array");
    nop();
    __cxa_guard_release(&DAT_06b17310);
    __cxa_atexit(FUN_045fad70,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17378 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17378), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b172a8,(string *)&DAT_06b17380,(allocator *)&DAT_06b17388);
    __cxa_guard_release(&DAT_06b17378);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b172a8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b172a8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CowboyBasic::getConeLayerNames() */

void ZombieAnimRig_CowboyBasic::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17300 & 1;
  if (((DAT_06b17300 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17300), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17228,"zombie_west_armor_cone_norm");
    nop();
    std::string::string((string *)&DAT_06b17230,"zombie_west_armor_cone_damage_01");
    nop();
    std::string::string((string *)&DAT_06b17238,"zombie_west_armor_cone_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b17300);
    __cxa_atexit(FUN_045fad7c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17318 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17318), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b171d0,(string *)&DAT_06b17228,(allocator *)&DAT_06b17240);
    __cxa_guard_release(&DAT_06b17318);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b171d0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b171d0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CowboyBasic::getBucketLayerNames() */

void ZombieAnimRig_CowboyBasic::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17320 & 1;
  if (((DAT_06b17320 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17320), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b172c0,"zombie_west_armor_bucket_norm");
    nop();
    std::string::string((string *)&DAT_06b172c8,"zombie_west_armor_bucket_damage_01");
    nop();
    std::string::string((string *)&DAT_06b172d0,"zombie_west_armor_bucket_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b17320);
    __cxa_atexit(FUN_045fadb0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b171f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b171f8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17208,(string *)&DAT_06b172c0,(allocator *)&DAT_06b172d8);
    __cxa_guard_release(&DAT_06b171f8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17208,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17208);
}

