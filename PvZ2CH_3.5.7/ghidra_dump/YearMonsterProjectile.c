// Class: YearMonsterProjectile


/* YearMonsterProjectile::~YearMonsterProjectile() */

void __thiscall YearMonsterProjectile::~YearMonsterProjectile(YearMonsterProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0663e1e0;
  *(undefined ***)(this + 0x10) = &PTR__YearMonsterProjectile_0663e3d0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to YearMonsterProjectile::~YearMonsterProjectile() */

void __thiscall YearMonsterProjectile::~YearMonsterProjectile(YearMonsterProjectile *this)

{
  ~YearMonsterProjectile(this + -0x10);
  return;
}


/* YearMonsterProjectile::~YearMonsterProjectile() */

void __thiscall YearMonsterProjectile::~YearMonsterProjectile(YearMonsterProjectile *this)

{
  ~YearMonsterProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to YearMonsterProjectile::~YearMonsterProjectile() */

void __thiscall YearMonsterProjectile::~YearMonsterProjectile(YearMonsterProjectile *this)

{
  ~YearMonsterProjectile(this + -0x10);
  return;
}


/* YearMonsterProjectile::YearMonsterProjectile() */

void __thiscall YearMonsterProjectile::YearMonsterProjectile(YearMonsterProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0663e1e0;
  *(undefined ***)(this + 0x10) = &PTR__YearMonsterProjectile_0663e3d0;
  return;
}


/* YearMonsterProjectile::StaticNew() */

YearMonsterProjectile * YearMonsterProjectile::StaticNew(void)

{
  YearMonsterProjectile *this;
  
  this = ::operator_new(0x1a8);
  YearMonsterProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YearMonsterProjectile::StaticClassInit() */

void YearMonsterProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"YearMonsterProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0347c614,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* YearMonsterProjectile::StaticGetClass() */

long * YearMonsterProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"YearMonsterProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* YearMonsterProjectile::GetClass() const */

long * YearMonsterProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"YearMonsterProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YearMonsterProjectile::onProjectileInitialized() */

void __thiscall YearMonsterProjectile::onProjectileInitialized(YearMonsterProjectile *this)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RealObject::JoinTeam((RealObject *)this,2);
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  std::string::string(asStack_40,"jump_up");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

