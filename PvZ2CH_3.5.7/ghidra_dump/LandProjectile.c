// Class: LandProjectile


/* LandProjectile::~LandProjectile() */

void __thiscall LandProjectile::~LandProjectile(LandProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067d1fd0;
  *(undefined ***)(this + 0x10) = &PTR__LandProjectile_067d21c0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to LandProjectile::~LandProjectile() */

void __thiscall LandProjectile::~LandProjectile(LandProjectile *this)

{
  ~LandProjectile(this + -0x10);
  return;
}


/* LandProjectile::~LandProjectile() */

void __thiscall LandProjectile::~LandProjectile(LandProjectile *this)

{
  ~LandProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LandProjectile::~LandProjectile() */

void __thiscall LandProjectile::~LandProjectile(LandProjectile *this)

{
  ~LandProjectile(this + -0x10);
  return;
}


/* LandProjectile::LandProjectile() */

void __thiscall LandProjectile::LandProjectile(LandProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067d1fd0;
  *(undefined ***)(this + 0x10) = &PTR__LandProjectile_067d21c0;
  return;
}


/* LandProjectile::StaticNew() */

LandProjectile * LandProjectile::StaticNew(void)

{
  LandProjectile *this;
  
  this = ::operator_new(0x1a8);
  LandProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LandProjectile::StaticClassInit() */

void LandProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"LandProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_040a7a6c,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LandProjectile::StaticGetClass() */

long * LandProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LandProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LandProjectile::GetClass() const */

long * LandProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"LandProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LandProjectile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void __thiscall
LandProjectile::fillDamageInfo(LandProjectile *this,DamageInfo *param_1,BoardEntity *param_2)

{
  char cVar1;
  bool bVar2;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::fillDamageInfo((DamageInfo *)this,(BoardEntity *)param_1);
  if (param_2 != (BoardEntity *)0x0) {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if ((cVar1 != '\0') &&
       (((bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_2), bVar2 ||
         (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_2), bVar2)) &&
        (cVar1 = DamageInfo::ObtainZombieCondition(param_1,2), cVar1 != '\0')))) {
      DamageInfo::RemoveZombieCondition(param_1,2);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

