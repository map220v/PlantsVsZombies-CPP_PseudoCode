// Class: ZombieAnimRig_TutorialSpring


/* ZombieAnimRig_TutorialSpring::SetHasHelm(HelmType) */

void __thiscall
ZombieAnimRig_TutorialSpring::SetHasHelm(ZombieAnimRig_TutorialSpring *this,int param_2)

{
  if (param_2 != 0) {
    this[0x250] = (ZombieAnimRig_TutorialSpring)0x1;
  }
  ZombieAnimRig_Basic::SetHasHelm();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TutorialSpring::updateHelmLayerVisibility(HelmType) */

void __thiscall
ZombieAnimRig_TutorialSpring::updateHelmLayerVisibility
          (ZombieAnimRig_TutorialSpring *this,int param_2)

{
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieAnimRig_Basic::updateHelmLayerVisibility();
  if ((param_2 != 0) && (cVar1 = (**(code **)(*(long *)this + 0x300))(this,param_2), cVar1 != '\0'))
  {
    std::string::string(asStack_10,"bunny_ears");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_TutorialSpring::~ZombieAnimRig_TutorialSpring() */

void __thiscall
ZombieAnimRig_TutorialSpring::~ZombieAnimRig_TutorialSpring(ZombieAnimRig_TutorialSpring *this)

{
  *(undefined ***)this = &PTR_GetClass_068749e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_TutorialSpring_06874cf8;
  ZombieAnimRig_Tutorial::~ZombieAnimRig_Tutorial((ZombieAnimRig_Tutorial *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_TutorialSpring::~ZombieAnimRig_TutorialSpring() */

void __thiscall
ZombieAnimRig_TutorialSpring::~ZombieAnimRig_TutorialSpring(ZombieAnimRig_TutorialSpring *this)

{
  ~ZombieAnimRig_TutorialSpring(this + -0x10);
  return;
}


/* ZombieAnimRig_TutorialSpring::~ZombieAnimRig_TutorialSpring() */

void __thiscall
ZombieAnimRig_TutorialSpring::~ZombieAnimRig_TutorialSpring(ZombieAnimRig_TutorialSpring *this)

{
  ~ZombieAnimRig_TutorialSpring(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_TutorialSpring::~ZombieAnimRig_TutorialSpring() */

void __thiscall
ZombieAnimRig_TutorialSpring::~ZombieAnimRig_TutorialSpring(ZombieAnimRig_TutorialSpring *this)

{
  ~ZombieAnimRig_TutorialSpring(this + -0x10);
  return;
}


/* ZombieAnimRig_TutorialSpring::ZombieAnimRig_TutorialSpring() */

void __thiscall
ZombieAnimRig_TutorialSpring::ZombieAnimRig_TutorialSpring(ZombieAnimRig_TutorialSpring *this)

{
  ZombieAnimRig_Tutorial::ZombieAnimRig_Tutorial((ZombieAnimRig_Tutorial *)this);
  this[0x250] = (ZombieAnimRig_TutorialSpring)0x0;
  *(undefined ***)this = &PTR_GetClass_068749e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_TutorialSpring_06874cf8;
  return;
}


/* ZombieAnimRig_TutorialSpring::StaticNew() */

ZombieAnimRig_TutorialSpring * ZombieAnimRig_TutorialSpring::StaticNew(void)

{
  ZombieAnimRig_TutorialSpring *this;
  
  this = ::operator_new(600);
  ZombieAnimRig_TutorialSpring(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TutorialSpring::DropHead(Zombie*) */

void __thiscall
ZombieAnimRig_TutorialSpring::DropHead(ZombieAnimRig_TutorialSpring *this,Zombie *param_1)

{
  int iVar1;
  ZombieParticle *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ZombieParticle *)ZombieAnimRig::DropHead((ZombieAnimRig *)this,param_1);
  iVar1 = Zombie::GetArmorCount(param_1);
  if (0 < iVar1) {
    std::string::string(asStack_10,"bunny_ears");
    ZombieParticle::SetLayerVisibility(this_00,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TutorialSpring::StaticClassInit() */

void ZombieAnimRig_TutorialSpring::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_TutorialSpring");
    (*pcVar2)(plVar1,asStack_10,FUN_04610f94,600,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_TutorialSpring::StaticGetClass() */

long * ZombieAnimRig_TutorialSpring::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Tutorial::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_TutorialSpring",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_TutorialSpring::GetClass() const */

long * ZombieAnimRig_TutorialSpring::GetClass(void)

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
  uVar2 = ZombieAnimRig_Tutorial::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_TutorialSpring",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TutorialSpring::getHeadLayerNames() */

void ZombieAnimRig_TutorialSpring::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19530 & 1;
  if (((DAT_06b19530 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19530), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b196b0,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b196b8,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06b196c0,"bunny_ears");
    nop();
    __cxa_guard_release(&DAT_06b19530);
    __cxa_atexit(FUN_0460ff1c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b196a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b196a8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19610,(string *)&DAT_06b196b0,(allocator *)&DAT_06b196c8);
    __cxa_guard_release(&DAT_06b196a8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19610,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19610);
}

