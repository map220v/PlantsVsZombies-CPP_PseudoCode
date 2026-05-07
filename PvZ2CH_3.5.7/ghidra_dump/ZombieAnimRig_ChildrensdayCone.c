// Class: ZombieAnimRig_ChildrensdayCone


/* ZombieAnimRig_ChildrensdayCone::~ZombieAnimRig_ChildrensdayCone() */

void __thiscall
ZombieAnimRig_ChildrensdayCone::~ZombieAnimRig_ChildrensdayCone
          (ZombieAnimRig_ChildrensdayCone *this)

{
  *(undefined ***)this = &PTR_GetClass_06875e20;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ChildrensdayCone_06876138;
  ZombieAnimRig_ChildrensdayBasic::~ZombieAnimRig_ChildrensdayBasic
            ((ZombieAnimRig_ChildrensdayBasic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ChildrensdayCone::~ZombieAnimRig_ChildrensdayCone() */

void __thiscall
ZombieAnimRig_ChildrensdayCone::~ZombieAnimRig_ChildrensdayCone
          (ZombieAnimRig_ChildrensdayCone *this)

{
  ~ZombieAnimRig_ChildrensdayCone(this + -0x10);
  return;
}


/* ZombieAnimRig_ChildrensdayCone::~ZombieAnimRig_ChildrensdayCone() */

void __thiscall
ZombieAnimRig_ChildrensdayCone::~ZombieAnimRig_ChildrensdayCone
          (ZombieAnimRig_ChildrensdayCone *this)

{
  ~ZombieAnimRig_ChildrensdayCone(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ChildrensdayCone::~ZombieAnimRig_ChildrensdayCone() */

void __thiscall
ZombieAnimRig_ChildrensdayCone::~ZombieAnimRig_ChildrensdayCone
          (ZombieAnimRig_ChildrensdayCone *this)

{
  ~ZombieAnimRig_ChildrensdayCone(this + -0x10);
  return;
}


/* ZombieAnimRig_ChildrensdayCone::ZombieAnimRig_ChildrensdayCone() */

void __thiscall
ZombieAnimRig_ChildrensdayCone::ZombieAnimRig_ChildrensdayCone(ZombieAnimRig_ChildrensdayCone *this)

{
  ZombieAnimRig_ChildrensdayBasic::ZombieAnimRig_ChildrensdayBasic
            ((ZombieAnimRig_ChildrensdayBasic *)this);
  *(undefined ***)this = &PTR_GetClass_06875e20;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ChildrensdayCone_06876138;
  return;
}


/* ZombieAnimRig_ChildrensdayCone::StaticNew() */

ZombieAnimRig_ChildrensdayCone * ZombieAnimRig_ChildrensdayCone::StaticNew(void)

{
  ZombieAnimRig_ChildrensdayCone *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_ChildrensdayCone(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ChildrensdayCone::StaticClassInit() */

void ZombieAnimRig_ChildrensdayCone::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ChildrensdayCone");
    (*pcVar2)(plVar1,asStack_10,FUN_04611ee4,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ChildrensdayCone::StaticGetClass() */

long * ZombieAnimRig_ChildrensdayCone::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_ChildrensdayBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ChildrensdayCone",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ChildrensdayCone::GetClass() const */

long * ZombieAnimRig_ChildrensdayCone::GetClass(void)

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
  uVar2 = ZombieAnimRig_ChildrensdayBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ChildrensdayCone",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ChildrensdayCone::getConeLayerNames() */

void ZombieAnimRig_ChildrensdayCone::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19690 & 1;
  if (((DAT_06b19690 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19690), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b198e8,"zombie_armor_cone_norm");
    nop();
    std::string::string((string *)&DAT_06b198f0,"zombie_armor_cone_damage_01");
    nop();
    std::string::string((string *)&DAT_06b198f8,"zombie_armor_cone_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b19690);
    __cxa_atexit(FUN_046100ac,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19808 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19808), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19898,(string *)&DAT_06b198e8,(allocator *)&DAT_06b19900);
    __cxa_guard_release(&DAT_06b19808);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19898,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19898);
}

