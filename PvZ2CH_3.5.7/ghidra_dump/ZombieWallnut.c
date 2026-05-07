// Class: ZombieWallnut


/* ZombieWallnut::~ZombieWallnut() */

void __thiscall ZombieWallnut::~ZombieWallnut(ZombieWallnut *this)

{
  *(undefined ***)this = &PTR_GetClass_066217b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWallnut_066221f0;
  ZombieExplodenut::~ZombieExplodenut((ZombieExplodenut *)this);
  return;
}


/* non-virtual thunk to ZombieWallnut::~ZombieWallnut() */

void __thiscall ZombieWallnut::~ZombieWallnut(ZombieWallnut *this)

{
  ~ZombieWallnut(this + -0x10);
  return;
}


/* ZombieWallnut::~ZombieWallnut() */

void __thiscall ZombieWallnut::~ZombieWallnut(ZombieWallnut *this)

{
  ~ZombieWallnut(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieWallnut::~ZombieWallnut() */

void __thiscall ZombieWallnut::~ZombieWallnut(ZombieWallnut *this)

{
  ~ZombieWallnut(this + -0x10);
  return;
}


/* ZombieWallnut::ZombieWallnut() */

void __thiscall ZombieWallnut::ZombieWallnut(ZombieWallnut *this)

{
  ZombieExplodenut::ZombieExplodenut((ZombieExplodenut *)this);
  *(undefined ***)this = &PTR_GetClass_066217b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWallnut_066221f0;
  return;
}


/* ZombieWallnut::StaticNew() */

ZombieWallnut * ZombieWallnut::StaticNew(void)

{
  ZombieWallnut *this;
  
  this = ::operator_new(0x810);
  ZombieWallnut(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWallnut::StaticClassInit() */

void ZombieWallnut::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieWallnut");
    (*pcVar2)(plVar1,asStack_10,FUN_0341a60c,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWallnut::StaticGetClass() */

long * ZombieWallnut::StaticGetClass(void)

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
  uVar2 = ZombieExplodenut::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWallnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWallnut::GetClass() const */

long * ZombieWallnut::GetClass(void)

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
  uVar2 = ZombieExplodenut::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWallnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWallnut::TakeDamage(DamageInfo const&) */

void __thiscall ZombieWallnut::TakeDamage(ZombieWallnut *this,DamageInfo *param_1)

{
  bool bVar1;
  ZombieWallnutProps *pZVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float local_6c;
  DamageInfo aDStack_68 [8];
  float local_60 [22];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68,param_1);
  bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x200000);
  if (bVar1) {
    fVar4 = (float)FUN_03419288(*(undefined4 *)(this + 0x284));
    fVar5 = (float)FUN_0341928c(*(undefined4 *)(this + 0x2ac));
    pZVar2 = Zombie::GetProps<ZombieWallnutProps>((Zombie *)this);
    local_6c = (fVar5 + fVar4) * *(float *)(pZVar2 + 0x21c);
    pfVar3 = eastl::min_alt<float>(&local_6c,local_60);
    local_60[0] = *pfVar3;
  }
  Zombie::TakeDamage((Zombie *)this,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

