// Class: ZombieAnimRig_ParkourBucket


/* ZombieAnimRig_ParkourBucket::~ZombieAnimRig_ParkourBucket() */

void __thiscall
ZombieAnimRig_ParkourBucket::~ZombieAnimRig_ParkourBucket(ZombieAnimRig_ParkourBucket *this)

{
  *(undefined ***)this = &PTR_GetClass_068764e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ParkourBucket_06876800;
  ZombieAnimRig_ParkourBasic::~ZombieAnimRig_ParkourBasic((ZombieAnimRig_ParkourBasic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ParkourBucket::~ZombieAnimRig_ParkourBucket() */

void __thiscall
ZombieAnimRig_ParkourBucket::~ZombieAnimRig_ParkourBucket(ZombieAnimRig_ParkourBucket *this)

{
  ~ZombieAnimRig_ParkourBucket(this + -0x10);
  return;
}


/* ZombieAnimRig_ParkourBucket::~ZombieAnimRig_ParkourBucket() */

void __thiscall
ZombieAnimRig_ParkourBucket::~ZombieAnimRig_ParkourBucket(ZombieAnimRig_ParkourBucket *this)

{
  ~ZombieAnimRig_ParkourBucket(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ParkourBucket::~ZombieAnimRig_ParkourBucket() */

void __thiscall
ZombieAnimRig_ParkourBucket::~ZombieAnimRig_ParkourBucket(ZombieAnimRig_ParkourBucket *this)

{
  ~ZombieAnimRig_ParkourBucket(this + -0x10);
  return;
}


/* ZombieAnimRig_ParkourBucket::ZombieAnimRig_ParkourBucket() */

void __thiscall
ZombieAnimRig_ParkourBucket::ZombieAnimRig_ParkourBucket(ZombieAnimRig_ParkourBucket *this)

{
  ZombieAnimRig_ParkourBasic::ZombieAnimRig_ParkourBasic((ZombieAnimRig_ParkourBasic *)this);
  *(undefined ***)this = &PTR_GetClass_068764e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ParkourBucket_06876800;
  return;
}


/* ZombieAnimRig_ParkourBucket::StaticNew() */

ZombieAnimRig_ParkourBucket * ZombieAnimRig_ParkourBucket::StaticNew(void)

{
  ZombieAnimRig_ParkourBucket *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_ParkourBucket(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ParkourBucket::StaticClassInit() */

void ZombieAnimRig_ParkourBucket::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ParkourBucket");
    (*pcVar2)(plVar1,asStack_10,FUN_046123d4,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ParkourBucket::StaticGetClass() */

long * ZombieAnimRig_ParkourBucket::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ParkourBucket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ParkourBucket::GetClass() const */

long * ZombieAnimRig_ParkourBucket::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ParkourBucket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ParkourBucket::getBucketLayerNames() */

void ZombieAnimRig_ParkourBucket::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b194c0 & 1;
  if (((DAT_06b194c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b194c0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19500,"zombie_armor_bucket_norm");
    nop();
    std::string::string((string *)&DAT_06b19508,"zombie_armor_bucket_damage_01");
    nop();
    std::string::string((string *)&DAT_06b19510,"zombie_armor_bucket_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b194c0);
    __cxa_atexit(FUN_046100e0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b197d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b197d8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19718,(string *)&DAT_06b19500,(allocator *)&DAT_06b19518);
    __cxa_guard_release(&DAT_06b197d8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19718,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19718);
}

