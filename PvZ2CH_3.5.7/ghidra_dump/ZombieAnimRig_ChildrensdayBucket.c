// Class: ZombieAnimRig_ChildrensdayBucket


/* ZombieAnimRig_ChildrensdayBucket::~ZombieAnimRig_ChildrensdayBucket() */

void __thiscall
ZombieAnimRig_ChildrensdayBucket::~ZombieAnimRig_ChildrensdayBucket
          (ZombieAnimRig_ChildrensdayBucket *this)

{
  *(undefined ***)this = &PTR_GetClass_06875ac0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ChildrensdayBucket_06875dd8;
  ZombieAnimRig_ChildrensdayBasic::~ZombieAnimRig_ChildrensdayBasic
            ((ZombieAnimRig_ChildrensdayBasic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ChildrensdayBucket::~ZombieAnimRig_ChildrensdayBucket() */

void __thiscall
ZombieAnimRig_ChildrensdayBucket::~ZombieAnimRig_ChildrensdayBucket
          (ZombieAnimRig_ChildrensdayBucket *this)

{
  ~ZombieAnimRig_ChildrensdayBucket(this + -0x10);
  return;
}


/* ZombieAnimRig_ChildrensdayBucket::~ZombieAnimRig_ChildrensdayBucket() */

void __thiscall
ZombieAnimRig_ChildrensdayBucket::~ZombieAnimRig_ChildrensdayBucket
          (ZombieAnimRig_ChildrensdayBucket *this)

{
  ~ZombieAnimRig_ChildrensdayBucket(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ChildrensdayBucket::~ZombieAnimRig_ChildrensdayBucket() */

void __thiscall
ZombieAnimRig_ChildrensdayBucket::~ZombieAnimRig_ChildrensdayBucket
          (ZombieAnimRig_ChildrensdayBucket *this)

{
  ~ZombieAnimRig_ChildrensdayBucket(this + -0x10);
  return;
}


/* ZombieAnimRig_ChildrensdayBucket::ZombieAnimRig_ChildrensdayBucket() */

void __thiscall
ZombieAnimRig_ChildrensdayBucket::ZombieAnimRig_ChildrensdayBucket
          (ZombieAnimRig_ChildrensdayBucket *this)

{
  ZombieAnimRig_ChildrensdayBasic::ZombieAnimRig_ChildrensdayBasic
            ((ZombieAnimRig_ChildrensdayBasic *)this);
  *(undefined ***)this = &PTR_GetClass_06875ac0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ChildrensdayBucket_06875dd8;
  return;
}


/* ZombieAnimRig_ChildrensdayBucket::StaticNew() */

ZombieAnimRig_ChildrensdayBucket * ZombieAnimRig_ChildrensdayBucket::StaticNew(void)

{
  ZombieAnimRig_ChildrensdayBucket *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_ChildrensdayBucket(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ChildrensdayBucket::StaticClassInit() */

void ZombieAnimRig_ChildrensdayBucket::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ChildrensdayBucket");
    (*pcVar2)(plVar1,asStack_10,FUN_04611c6c,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ChildrensdayBucket::StaticGetClass() */

long * ZombieAnimRig_ChildrensdayBucket::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ChildrensdayBucket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ChildrensdayBucket::GetClass() const */

long * ZombieAnimRig_ChildrensdayBucket::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ChildrensdayBucket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ChildrensdayBucket::getBucketLayerNames() */

void ZombieAnimRig_ChildrensdayBucket::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19908 & 1;
  if (((DAT_06b19908 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19908), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b194c8,"zombie_armor_bucket_norm");
    nop();
    std::string::string((string *)&DAT_06b194d0,"zombie_armor_bucket_damage_01");
    nop();
    std::string::string((string *)&DAT_06b194d8,"zombie_armor_bucket_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b19908);
    __cxa_atexit(FUN_04610078,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19798 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19798), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b193f0,(string *)&DAT_06b194c8,(allocator *)&DAT_06b194e0);
    __cxa_guard_release(&DAT_06b19798);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b193f0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b193f0);
}

