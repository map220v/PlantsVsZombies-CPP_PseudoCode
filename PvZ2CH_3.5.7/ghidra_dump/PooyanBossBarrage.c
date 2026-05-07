// Class: PooyanBossBarrage


/* PooyanBossBarrage::~PooyanBossBarrage() */

void __thiscall PooyanBossBarrage::~PooyanBossBarrage(PooyanBossBarrage *this)

{
  *(undefined ***)this = &PTR_GetClass_068d8c80;
  *(undefined ***)(this + 0x10) = &PTR__PooyanBossBarrage_068d8e70;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PooyanBossBarrage::~PooyanBossBarrage() */

void __thiscall PooyanBossBarrage::~PooyanBossBarrage(PooyanBossBarrage *this)

{
  ~PooyanBossBarrage(this + -0x10);
  return;
}


/* PooyanBossBarrage::~PooyanBossBarrage() */

void __thiscall PooyanBossBarrage::~PooyanBossBarrage(PooyanBossBarrage *this)

{
  ~PooyanBossBarrage(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PooyanBossBarrage::~PooyanBossBarrage() */

void __thiscall PooyanBossBarrage::~PooyanBossBarrage(PooyanBossBarrage *this)

{
  ~PooyanBossBarrage(this + -0x10);
  return;
}


/* PooyanBossBarrage::PooyanBossBarrage() */

void __thiscall PooyanBossBarrage::PooyanBossBarrage(PooyanBossBarrage *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_068d8c80;
  *(undefined ***)(this + 0x10) = &PTR__PooyanBossBarrage_068d8e70;
  return;
}


/* PooyanBossBarrage::StaticNew() */

PooyanBossBarrage * PooyanBossBarrage::StaticNew(void)

{
  PooyanBossBarrage *this;
  
  this = ::operator_new(0x1a8);
  PooyanBossBarrage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanBossBarrage::StaticClassInit() */

void PooyanBossBarrage::StaticClassInit(void)

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
    std::string::string(asStack_10,"PooyanBossBarrage");
    (*pcVar2)(plVar1,asStack_10,FUN_04787ecc,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PooyanBossBarrage::StaticGetClass() */

long * PooyanBossBarrage::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"PooyanBossBarrage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PooyanBossBarrage::GetClass() const */

long * PooyanBossBarrage::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"PooyanBossBarrage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PooyanBossBarrage::handleImpact(BoardEntity*) */

ulong __thiscall PooyanBossBarrage::handleImpact(PooyanBossBarrage *this,BoardEntity *param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_1 != (BoardEntity *)0x0) {
    uVar2 = Projectile::handleImpact((Projectile *)this,param_1);
    return uVar2;
  }
  lVar3 = Projectile::GetProps((Projectile *)this);
  bVar1 = *(byte *)(lVar3 + 0x65);
  if (bVar1 != 0) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return (ulong)(uint)bVar1;
}

