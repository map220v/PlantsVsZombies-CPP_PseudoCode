// Class: StarFruitProjectile


/* StarFruitProjectile::~StarFruitProjectile() */

void __thiscall StarFruitProjectile::~StarFruitProjectile(StarFruitProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067c62d0;
  *(undefined ***)(this + 0x10) = &PTR__StarFruitProjectile_067c64c0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to StarFruitProjectile::~StarFruitProjectile() */

void __thiscall StarFruitProjectile::~StarFruitProjectile(StarFruitProjectile *this)

{
  ~StarFruitProjectile(this + -0x10);
  return;
}


/* StarFruitProjectile::~StarFruitProjectile() */

void __thiscall StarFruitProjectile::~StarFruitProjectile(StarFruitProjectile *this)

{
  ~StarFruitProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to StarFruitProjectile::~StarFruitProjectile() */

void __thiscall StarFruitProjectile::~StarFruitProjectile(StarFruitProjectile *this)

{
  ~StarFruitProjectile(this + -0x10);
  return;
}


/* StarFruitProjectile::StarFruitProjectile() */

void __thiscall StarFruitProjectile::StarFruitProjectile(StarFruitProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067c62d0;
  *(undefined ***)(this + 0x10) = &PTR__StarFruitProjectile_067c64c0;
  return;
}


/* StarFruitProjectile::StaticNew() */

StarFruitProjectile * StarFruitProjectile::StaticNew(void)

{
  StarFruitProjectile *this;
  
  this = ::operator_new(0x1a8);
  StarFruitProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarFruitProjectile::StaticClassInit() */

void StarFruitProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarFruitProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0406e020,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarFruitProjectile::StaticGetClass() */

long * StarFruitProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarFruitProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarFruitProjectile::GetClass() const */

long * StarFruitProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"StarFruitProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarFruitProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall StarFruitProjectile::OnCollideEntity(StarFruitProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  RtWeakPtr aRStack_18 [8];
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    ToolPacketData::GetProps();
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    uVar3 = 1;
    if (cVar2 != '\0') {
      uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
    }
  }
  else {
    uVar3 = 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

