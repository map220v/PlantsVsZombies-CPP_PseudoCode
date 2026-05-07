// Class: ZombieAnimRig_Neuropathy


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Neuropathy::getWalkAnimationName() */

void ZombieAnimRig_Neuropathy::getWalkAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x250) == '\0') {
    __s = "go02";
  }
  else {
    __s = "go";
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
/* ZombieAnimRig_Neuropathy::getEatAnimationName() */

void ZombieAnimRig_Neuropathy::getEatAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x250) == '\0') {
    __s = "eat02";
  }
  else {
    __s = "eat";
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
/* ZombieAnimRig_Neuropathy::getDieAnimationName() */

void ZombieAnimRig_Neuropathy::getDieAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x250) == '\0') {
    __s = "die02";
  }
  else {
    __s = "die";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieAnimRig_Neuropathy::onPopAnimInitialized() */

void __thiscall ZombieAnimRig_Neuropathy::onPopAnimInitialized(ZombieAnimRig_Neuropathy *this)

{
  this[0x251] = (ZombieAnimRig_Neuropathy)0x0;
  this[0x250] = (ZombieAnimRig_Neuropathy)0x1;
  ZombieAnimRig_PirateBarrel::onPopAnimInitialized((ZombieAnimRig_PirateBarrel *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Neuropathy::DropHead(Zombie*) */

void __thiscall ZombieAnimRig_Neuropathy::DropHead(ZombieAnimRig_Neuropathy *this,Zombie *param_1)

{
  ZombieParticle *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ZombieParticle *)ZombieAnimRig::DropHead((ZombieAnimRig *)this,param_1);
  std::string::string(asStack_10,"box_222");
  ZombieParticle::SetLayerVisibility(this_00,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* ZombieAnimRig_Neuropathy::PlayDie() */

undefined8 __thiscall ZombieAnimRig_Neuropathy::PlayDie(ZombieAnimRig_Neuropathy *this)

{
  undefined8 uVar1;
  
  if (this[0x251] != (ZombieAnimRig_Neuropathy)0x0) {
    *(undefined4 *)(this + 0x210) = 4;
    return 0;
  }
  uVar1 = ZombieAnimRig::PlayDie((ZombieAnimRig *)this);
  return uVar1;
}


/* ZombieAnimRig_Neuropathy::~ZombieAnimRig_Neuropathy() */

void __thiscall ZombieAnimRig_Neuropathy::~ZombieAnimRig_Neuropathy(ZombieAnimRig_Neuropathy *this)

{
  *(undefined ***)this = &PTR_GetClass_0687cef0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Neuropathy_0687d208;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Neuropathy::~ZombieAnimRig_Neuropathy() */

void __thiscall ZombieAnimRig_Neuropathy::~ZombieAnimRig_Neuropathy(ZombieAnimRig_Neuropathy *this)

{
  ~ZombieAnimRig_Neuropathy(this + -0x10);
  return;
}


/* ZombieAnimRig_Neuropathy::~ZombieAnimRig_Neuropathy() */

void __thiscall ZombieAnimRig_Neuropathy::~ZombieAnimRig_Neuropathy(ZombieAnimRig_Neuropathy *this)

{
  ~ZombieAnimRig_Neuropathy(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Neuropathy::~ZombieAnimRig_Neuropathy() */

void __thiscall ZombieAnimRig_Neuropathy::~ZombieAnimRig_Neuropathy(ZombieAnimRig_Neuropathy *this)

{
  ~ZombieAnimRig_Neuropathy(this + -0x10);
  return;
}


/* ZombieAnimRig_Neuropathy::ZombieAnimRig_Neuropathy() */

void __thiscall ZombieAnimRig_Neuropathy::ZombieAnimRig_Neuropathy(ZombieAnimRig_Neuropathy *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_0687cef0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Neuropathy_0687d208;
  return;
}


/* ZombieAnimRig_Neuropathy::StaticNew() */

ZombieAnimRig_Neuropathy * ZombieAnimRig_Neuropathy::StaticNew(void)

{
  ZombieAnimRig_Neuropathy *this;
  
  this = ::operator_new(600);
  ZombieAnimRig_Neuropathy(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Neuropathy::StaticClassInit() */

void ZombieAnimRig_Neuropathy::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Neuropathy");
    (*pcVar2)(plVar1,asStack_10,FUN_046274d4,600,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Neuropathy::StaticGetClass() */

long * ZombieAnimRig_Neuropathy::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Neuropathy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Neuropathy::GetClass() const */

long * ZombieAnimRig_Neuropathy::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Neuropathy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Neuropathy::PlayBigBang(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieAnimRig_Neuropathy::PlayBigBang(ZombieAnimRig_Neuropathy *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  this[0x251] = (ZombieAnimRig_Neuropathy)0x1;
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"eject");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Neuropathy::PlayBoxDiscard(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_Neuropathy::PlayBoxDiscard
          (ZombieAnimRig_Neuropathy *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x250] = (ZombieAnimRig_Neuropathy)0x0;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"attract");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Neuropathy::getBoxLayerNames() */

void ZombieAnimRig_Neuropathy::getBoxLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1b8e8 & 1;
  if (((DAT_06b1b8e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b8e8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1b830,"box_222");
    nop();
    __cxa_guard_release(&DAT_06b1b8e8);
    __cxa_atexit(FUN_04627030,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1b8e0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b8e0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1b870,(string *)&DAT_06b1b830,(allocator *)&DAT_06b1b838);
    __cxa_guard_release(&DAT_06b1b8e0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b870,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1b870);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Neuropathy::getHeadLayerNames() */

void ZombieAnimRig_Neuropathy::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1b858 & 1;
  if (((DAT_06b1b858 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b858), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1b838,"tou01");
    nop();
    std::string::string((string *)&DAT_06b1b840,"tou02");
    nop();
    std::string::string((string *)&DAT_06b1b848,"tou03");
    nop();
    __cxa_guard_release(&DAT_06b1b858);
    __cxa_atexit(FUN_0462703c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1b8f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b8f0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1b8a8,(string *)&DAT_06b1b838,(allocator *)&DAT_06b1b850);
    __cxa_guard_release(&DAT_06b1b8f0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b8a8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1b8a8);
}

