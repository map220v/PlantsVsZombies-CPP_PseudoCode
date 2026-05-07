// Class: CypripediumProjectile


/* CypripediumProjectile::~CypripediumProjectile() */

void __thiscall CypripediumProjectile::~CypripediumProjectile(CypripediumProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06820670;
  *(undefined ***)(this + 0x10) = &PTR__CypripediumProjectile_06820860;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to CypripediumProjectile::~CypripediumProjectile() */

void __thiscall CypripediumProjectile::~CypripediumProjectile(CypripediumProjectile *this)

{
  ~CypripediumProjectile(this + -0x10);
  return;
}


/* CypripediumProjectile::~CypripediumProjectile() */

void __thiscall CypripediumProjectile::~CypripediumProjectile(CypripediumProjectile *this)

{
  ~CypripediumProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CypripediumProjectile::~CypripediumProjectile() */

void __thiscall CypripediumProjectile::~CypripediumProjectile(CypripediumProjectile *this)

{
  ~CypripediumProjectile(this + -0x10);
  return;
}


/* CypripediumProjectile::CypripediumProjectile() */

void __thiscall CypripediumProjectile::CypripediumProjectile(CypripediumProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06820670;
  *(undefined ***)(this + 0x10) = &PTR__CypripediumProjectile_06820860;
  return;
}


/* CypripediumProjectile::StaticNew() */

CypripediumProjectile * CypripediumProjectile::StaticNew(void)

{
  CypripediumProjectile *this;
  
  this = ::operator_new(0x1a8);
  CypripediumProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CypripediumProjectile::StaticClassInit() */

void CypripediumProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"CypripediumProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_042723b0,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CypripediumProjectile::StaticGetClass() */

long * CypripediumProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CypripediumProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CypripediumProjectile::GetClass() const */

long * CypripediumProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"CypripediumProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CypripediumProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
CypripediumProjectile::OnCollideEntity(CypripediumProjectile *this,BoardEntity *param_1)

{
  Zombie *pZVar1;
  
  if ((param_1 != (BoardEntity *)0x0) &&
     (pZVar1 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar1 != (Zombie *)0x0)) {
    Zombie::ApplyCondition((Zombie *)0x40400000,0,pZVar1,0x53,1);
  }
  Projectile::OnCollideEntity((Projectile *)this,param_1);
  return;
}

