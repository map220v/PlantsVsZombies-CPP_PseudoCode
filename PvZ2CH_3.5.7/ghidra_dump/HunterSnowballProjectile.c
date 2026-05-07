// Class: HunterSnowballProjectile


/* HunterSnowballProjectile::~HunterSnowballProjectile() */

void __thiscall HunterSnowballProjectile::~HunterSnowballProjectile(HunterSnowballProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_068d1570;
  *(undefined ***)(this + 0x10) = &PTR__HunterSnowballProjectile_068d1760;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to HunterSnowballProjectile::~HunterSnowballProjectile() */

void __thiscall HunterSnowballProjectile::~HunterSnowballProjectile(HunterSnowballProjectile *this)

{
  ~HunterSnowballProjectile(this + -0x10);
  return;
}


/* HunterSnowballProjectile::~HunterSnowballProjectile() */

void __thiscall HunterSnowballProjectile::~HunterSnowballProjectile(HunterSnowballProjectile *this)

{
  ~HunterSnowballProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to HunterSnowballProjectile::~HunterSnowballProjectile() */

void __thiscall HunterSnowballProjectile::~HunterSnowballProjectile(HunterSnowballProjectile *this)

{
  ~HunterSnowballProjectile(this + -0x10);
  return;
}


/* HunterSnowballProjectile::StaticGetClass() */

long * HunterSnowballProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HunterSnowballProjectile",uVar2,StaticNew);
  return sClass;
}


/* HunterSnowballProjectile::GetClass() const */

long * HunterSnowballProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"HunterSnowballProjectile",uVar2,StaticNew);
  return sClass;
}


/* HunterSnowballProjectile::HunterSnowballProjectile() */

void __thiscall HunterSnowballProjectile::HunterSnowballProjectile(HunterSnowballProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_068d1570;
  *(undefined ***)(this + 0x10) = &PTR__HunterSnowballProjectile_068d1760;
  return;
}


/* HunterSnowballProjectile::StaticNew() */

HunterSnowballProjectile * HunterSnowballProjectile::StaticNew(void)

{
  HunterSnowballProjectile *this;
  
  this = ::operator_new(0x1a8);
  HunterSnowballProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HunterSnowballProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
HunterSnowballProjectile::OnCollideEntity(HunterSnowballProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  undefined1 uVar2;
  GridItem *pGVar3;
  string *psVar4;
  RtWeakPtrBase aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) &&
     (pGVar3 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1), pGVar3 != (GridItem *)0x0)) {
    nop();
    GridItem::GetType();
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
    std::string::string(asStack_18,"planttarget_iceblock");
    ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar4);
    cVar1 = Sexy::RtWeakPtrBase::operator==(aRStack_20,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)this + 0x1b8))(this,param_1);
      uVar2 = (**(code **)(*(long *)this + 0x168))(this,param_1);
      Projectile::playSound((Projectile *)this,param_1);
      goto LAB_04767ba8;
    }
  }
  uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
LAB_04767ba8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

