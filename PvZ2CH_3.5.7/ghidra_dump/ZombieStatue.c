// Class: ZombieStatue


/* ZombieStatue::~ZombieStatue() */

void __thiscall ZombieStatue::~ZombieStatue(ZombieStatue *this)

{
  *(undefined ***)this = &PTR_GetClass_06a098d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieStatue_06a0a2e8;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieStatue::~ZombieStatue() */

void __thiscall ZombieStatue::~ZombieStatue(ZombieStatue *this)

{
  ~ZombieStatue(this + -0x10);
  return;
}


/* ZombieStatue::~ZombieStatue() */

void __thiscall ZombieStatue::~ZombieStatue(ZombieStatue *this)

{
  ~ZombieStatue(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieStatue::~ZombieStatue() */

void __thiscall ZombieStatue::~ZombieStatue(ZombieStatue *this)

{
  ~ZombieStatue(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieStatue::StaticClassInit() */

void ZombieStatue::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieStatue");
    (*pcVar2)(plVar1,asStack_10,FUN_04efce30,0x808,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieStatue::StaticGetClass() */

long * ZombieStatue::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieStatue",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieStatue::GetClass() const */

long * ZombieStatue::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieStatue",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieStatue::ZombieStatue() */

void __thiscall ZombieStatue::ZombieStatue(ZombieStatue *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined4 *)(this + 0x800) = 0xffffffff;
  this[0x804] = (ZombieStatue)0x0;
  *(undefined ***)this = &PTR_GetClass_06a098d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieStatue_06a0a2e8;
  return;
}


/* ZombieStatue::StaticNew() */

ZombieStatue * ZombieStatue::StaticNew(void)

{
  ZombieStatue *this;
  
  this = ::operator_new(0x808);
  ZombieStatue(this);
  return this;
}


/* ZombieStatue::InitializeStatue(float) */

void __thiscall ZombieStatue::InitializeStatue(ZombieStatue *this,float param_1)

{
  RealObject::JoinTeam((RealObject *)this,2);
  Zombie::SetHitpoints((Zombie *)this,param_1);
  FUN_04efcc2c(param_1,this + 0x284);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieStatue::spawnBreakEffect(int) */

void __thiscall ZombieStatue::spawnBreakEffect(ZombieStatue *this,int param_1)

{
  char cVar1;
  int iVar2;
  ZombieStatueProps *pZVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = Zombie::GetProps<ZombieStatueProps>((Zombie *)this);
  cVar1 = FUN_0547419c(pZVar3 + 0x230);
  if (cVar1 == '\0') {
    if (((DAT_06ba4af0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba4af0), iVar2 != 0)) {
      Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ba4af8,0.0,-20.0);
      __cxa_guard_release(&DAT_06ba4af0);
    }
    std::string::string(asStack_18,"animation");
    nop();
    if (0 < param_1) {
      Sexy::StrFormat("%d",asStack_10,(ulong)(param_1 + 1));
      thunk_FUN_054757c0(asStack_18,asStack_10);
      std::string::~string(asStack_10);
    }
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieStatue::TakeDamage(DamageInfo const&) */

void __thiscall ZombieStatue::TakeDamage(ZombieStatue *this,DamageInfo *param_1)

{
  int iVar1;
  ZombieStatueProps *pZVar2;
  PopAnimRig *pPVar3;
  float fVar4;
  float fVar5;
  DamageInfo aDStack_68 [16];
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68,param_1);
  operator|=(auStack_58,0x200000000000);
  Zombie::TakeDamage((Zombie *)this,aDStack_68);
  pZVar2 = Zombie::GetProps<ZombieStatueProps>((Zombie *)this);
  if (this[0x804] == (ZombieStatue)0x0) {
    fVar4 = (float)FUN_04efcc28(*(undefined4 *)(this + 0x280));
    fVar5 = (float)FUN_04efcc34(*(undefined4 *)(this + 0x284));
    pPVar3 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
    iVar1 = DamageLifetime::OnHealthChanged
                      ((DamageLifetime *)(pZVar2 + 0x210),fVar4,fVar5,pPVar3,*(int *)(this + 0x800))
    ;
    if (*(int *)(this + 0x800) != iVar1) {
      spawnBreakEffect(this,*(int *)(this + 0x800));
      *(int *)(this + 0x800) = iVar1;
      fVar4 = (float)FUN_04efcc28(*(undefined4 *)(this + 0x280));
      goto joined_r0x04efd8f0;
    }
  }
  fVar4 = (float)FUN_04efcc28(*(undefined4 *)(this + 0x280));
joined_r0x04efd8f0:
  if (fVar4 <= 0.0) {
    iVar1 = FUN_04efcc3c(*(undefined8 *)(pZVar2 + 0x218),*(undefined8 *)(pZVar2 + 0x220));
    spawnBreakEffect(this,iVar1 + -1);
  }
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieStatue::onPlaceOnBoard() */

void __thiscall ZombieStatue::onPlaceOnBoard(ZombieStatue *this)

{
  Zombie::onPlaceOnBoard((Zombie *)this);
  Zombie::setZombieState((Zombie *)this,0,0);
  PVZ_EOT();
  (**(code **)(*(long *)this + 0x298))(this);
  Zombie::SetIsControlled((Zombie *)this,true);
  return;
}

