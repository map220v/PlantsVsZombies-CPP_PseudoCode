// Class: ZombieAnimRig_ParkourCone


/* ZombieAnimRig_ParkourCone::~ZombieAnimRig_ParkourCone() */

void __thiscall
ZombieAnimRig_ParkourCone::~ZombieAnimRig_ParkourCone(ZombieAnimRig_ParkourCone *this)

{
  *(undefined ***)this = &PTR_GetClass_06876840;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ParkourCone_06876b60;
  ZombieAnimRig_ParkourBasic::~ZombieAnimRig_ParkourBasic((ZombieAnimRig_ParkourBasic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ParkourCone::~ZombieAnimRig_ParkourCone() */

void __thiscall
ZombieAnimRig_ParkourCone::~ZombieAnimRig_ParkourCone(ZombieAnimRig_ParkourCone *this)

{
  ~ZombieAnimRig_ParkourCone(this + -0x10);
  return;
}


/* ZombieAnimRig_ParkourCone::~ZombieAnimRig_ParkourCone() */

void __thiscall
ZombieAnimRig_ParkourCone::~ZombieAnimRig_ParkourCone(ZombieAnimRig_ParkourCone *this)

{
  ~ZombieAnimRig_ParkourCone(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ParkourCone::~ZombieAnimRig_ParkourCone() */

void __thiscall
ZombieAnimRig_ParkourCone::~ZombieAnimRig_ParkourCone(ZombieAnimRig_ParkourCone *this)

{
  ~ZombieAnimRig_ParkourCone(this + -0x10);
  return;
}


/* ZombieAnimRig_ParkourCone::ZombieAnimRig_ParkourCone() */

void __thiscall
ZombieAnimRig_ParkourCone::ZombieAnimRig_ParkourCone(ZombieAnimRig_ParkourCone *this)

{
  ZombieAnimRig_ParkourBasic::ZombieAnimRig_ParkourBasic((ZombieAnimRig_ParkourBasic *)this);
  *(undefined ***)this = &PTR_GetClass_06876840;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ParkourCone_06876b60;
  return;
}


/* ZombieAnimRig_ParkourCone::StaticNew() */

ZombieAnimRig_ParkourCone * ZombieAnimRig_ParkourCone::StaticNew(void)

{
  ZombieAnimRig_ParkourCone *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_ParkourCone(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ParkourCone::StaticClassInit() */

void ZombieAnimRig_ParkourCone::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ParkourCone");
    (*pcVar2)(plVar1,asStack_10,FUN_0461264c,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ParkourCone::StaticGetClass() */

long * ZombieAnimRig_ParkourCone::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_ParkourBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ParkourCone",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ParkourCone::GetClass() const */

long * ZombieAnimRig_ParkourCone::GetClass(void)

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
  uVar2 = ZombieAnimRig_ParkourBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ParkourCone",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ParkourCone::getConeLayerNames() */

void ZombieAnimRig_ParkourCone::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19888 & 1;
  if (((DAT_06b19888 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19888), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b197b8,"zombie_armor_cone_norm");
    nop();
    std::string::string((string *)&DAT_06b197c0,"zombie_armor_cone_damage_01");
    nop();
    std::string::string((string *)&DAT_06b197c8,"zombie_armor_cone_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b19888);
    __cxa_atexit(FUN_04610114,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b193e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b193e8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b194a8,(string *)&DAT_06b197b8,
               (allocator *)&ZombieAnimRig_ChildrensdayBucket::sClass);
    __cxa_guard_release(&DAT_06b193e8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b194a8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b194a8);
}

