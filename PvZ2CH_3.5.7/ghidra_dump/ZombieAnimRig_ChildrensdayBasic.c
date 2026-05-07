// Class: ZombieAnimRig_ChildrensdayBasic


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ChildrensdayBasic::updateHelmLayerVisibility(HelmType) */

void __thiscall
ZombieAnimRig_ChildrensdayBasic::updateHelmLayerVisibility
          (ZombieAnimRig_ChildrensdayBasic *this,int param_2)

{
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieAnimRig_Basic::updateHelmLayerVisibility();
  if ((param_2 != 0) && (cVar1 = (**(code **)(*(long *)this + 0x300))(this,param_2), cVar1 != '\0'))
  {
    std::string::string(asStack_10,"_zombie_hat");
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


/* ZombieAnimRig_ChildrensdayBasic::~ZombieAnimRig_ChildrensdayBasic() */

void __thiscall
ZombieAnimRig_ChildrensdayBasic::~ZombieAnimRig_ChildrensdayBasic
          (ZombieAnimRig_ChildrensdayBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_06875400;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ChildrensdayBasic_06875718;
  ZombieAnimRig_Tutorial::~ZombieAnimRig_Tutorial((ZombieAnimRig_Tutorial *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ChildrensdayBasic::~ZombieAnimRig_ChildrensdayBasic() */

void __thiscall
ZombieAnimRig_ChildrensdayBasic::~ZombieAnimRig_ChildrensdayBasic
          (ZombieAnimRig_ChildrensdayBasic *this)

{
  ~ZombieAnimRig_ChildrensdayBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_ChildrensdayBasic::~ZombieAnimRig_ChildrensdayBasic() */

void __thiscall
ZombieAnimRig_ChildrensdayBasic::~ZombieAnimRig_ChildrensdayBasic
          (ZombieAnimRig_ChildrensdayBasic *this)

{
  ~ZombieAnimRig_ChildrensdayBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ChildrensdayBasic::~ZombieAnimRig_ChildrensdayBasic() */

void __thiscall
ZombieAnimRig_ChildrensdayBasic::~ZombieAnimRig_ChildrensdayBasic
          (ZombieAnimRig_ChildrensdayBasic *this)

{
  ~ZombieAnimRig_ChildrensdayBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_ChildrensdayBasic::ZombieAnimRig_ChildrensdayBasic() */

void __thiscall
ZombieAnimRig_ChildrensdayBasic::ZombieAnimRig_ChildrensdayBasic
          (ZombieAnimRig_ChildrensdayBasic *this)

{
  ZombieAnimRig_Tutorial::ZombieAnimRig_Tutorial((ZombieAnimRig_Tutorial *)this);
  *(undefined ***)this = &PTR_GetClass_06875400;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ChildrensdayBasic_06875718;
  return;
}


/* ZombieAnimRig_ChildrensdayBasic::StaticNew() */

ZombieAnimRig_ChildrensdayBasic * ZombieAnimRig_ChildrensdayBasic::StaticNew(void)

{
  ZombieAnimRig_ChildrensdayBasic *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_ChildrensdayBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ChildrensdayBasic::StaticClassInit() */

void ZombieAnimRig_ChildrensdayBasic::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ChildrensdayBasic");
    (*pcVar2)(plVar1,asStack_10,FUN_0461177c,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ChildrensdayBasic::StaticGetClass() */

long * ZombieAnimRig_ChildrensdayBasic::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ChildrensdayBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ChildrensdayBasic::GetClass() const */

long * ZombieAnimRig_ChildrensdayBasic::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ChildrensdayBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ChildrensdayBasic::getFlagHandLayerNames() */

void ZombieAnimRig_ChildrensdayBasic::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19418 & 1;
  if (((DAT_06b19418 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19418), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b195f0,"flag_01");
    nop();
    std::string::string((string *)&DAT_06b195f8,"flag_stick_base");
    nop();
    std::string::string((string *)&DAT_06b19600,"sparkler");
    nop();
    __cxa_guard_release(&DAT_06b19418);
    __cxa_atexit(FUN_04610018,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19900 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19900), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19440,(string *)&DAT_06b195f0,(allocator *)&DAT_06b19608);
    __cxa_guard_release(&DAT_06b19900);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19440,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19440);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ChildrensdayBasic::getNoFlagHandLayerNames() */

void ZombieAnimRig_ChildrensdayBasic::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b198e0 & 1;
  if (((DAT_06b198e0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b198e0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b197f0,"sparkler_glow");
    nop();
    std::string::string((string *)&DAT_06b197f8,"sparkle_circle");
    nop();
    __cxa_guard_release(&DAT_06b198e0);
    __cxa_atexit(FUN_0461004c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19678 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19678), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19860,(string *)&DAT_06b197f0,(allocator *)&DAT_06b19800);
    __cxa_guard_release(&DAT_06b19678);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19860,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19860);
}

