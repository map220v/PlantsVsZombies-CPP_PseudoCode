// Class: HunterSnowballEliteProjectile


/* HunterSnowballEliteProjectile::~HunterSnowballEliteProjectile() */

void __thiscall
HunterSnowballEliteProjectile::~HunterSnowballEliteProjectile(HunterSnowballEliteProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_068d1790;
  *(undefined ***)(this + 0x10) = &PTR__HunterSnowballEliteProjectile_068d1980;
  HunterSnowballProjectile::~HunterSnowballProjectile((HunterSnowballProjectile *)this);
  return;
}


/* non-virtual thunk to HunterSnowballEliteProjectile::~HunterSnowballEliteProjectile() */

void __thiscall
HunterSnowballEliteProjectile::~HunterSnowballEliteProjectile(HunterSnowballEliteProjectile *this)

{
  ~HunterSnowballEliteProjectile(this + -0x10);
  return;
}


/* HunterSnowballEliteProjectile::~HunterSnowballEliteProjectile() */

void __thiscall
HunterSnowballEliteProjectile::~HunterSnowballEliteProjectile(HunterSnowballEliteProjectile *this)

{
  ~HunterSnowballEliteProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to HunterSnowballEliteProjectile::~HunterSnowballEliteProjectile() */

void __thiscall
HunterSnowballEliteProjectile::~HunterSnowballEliteProjectile(HunterSnowballEliteProjectile *this)

{
  ~HunterSnowballEliteProjectile(this + -0x10);
  return;
}


/* HunterSnowballEliteProjectile::StaticGetClass() */

long * HunterSnowballEliteProjectile::StaticGetClass(void)

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
  uVar2 = HunterSnowballProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"HunterSnowballEliteProjectile",uVar2,StaticNew);
  return sClass;
}


/* HunterSnowballEliteProjectile::GetClass() const */

long * HunterSnowballEliteProjectile::GetClass(void)

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
  uVar2 = HunterSnowballProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"HunterSnowballEliteProjectile",uVar2,StaticNew);
  return sClass;
}


/* HunterSnowballEliteProjectile::HunterSnowballEliteProjectile() */

void __thiscall
HunterSnowballEliteProjectile::HunterSnowballEliteProjectile(HunterSnowballEliteProjectile *this)

{
  HunterSnowballProjectile::HunterSnowballProjectile((HunterSnowballProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_068d1790;
  *(undefined ***)(this + 0x10) = &PTR__HunterSnowballEliteProjectile_068d1980;
  return;
}


/* HunterSnowballEliteProjectile::StaticNew() */

HunterSnowballEliteProjectile * HunterSnowballEliteProjectile::StaticNew(void)

{
  HunterSnowballEliteProjectile *this;
  
  this = ::operator_new(0x1a8);
  HunterSnowballEliteProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HunterSnowballEliteProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
HunterSnowballEliteProjectile::OnCollideEntity
          (HunterSnowballEliteProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  undefined1 uVar2;
  GridItem *pGVar3;
  string *psVar4;
  GridItemPlantConditionTarget *this_00;
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
    if ((cVar1 != '\0') &&
       (this_00 = Sexy::RtObject::Cast<GridItemPlantConditionTarget>((RtObject *)param_1),
       this_00 != (GridItemPlantConditionTarget *)0x0)) {
      cVar1 = GridItemBreakableTarget::IsHealthFull((GridItemBreakableTarget *)this_00);
      uVar2 = 0;
      if (cVar1 == '\0') {
        (**(code **)(*(long *)this + 0x1b8))(this,param_1);
        uVar2 = (**(code **)(*(long *)this + 0x168))(this,param_1);
        Projectile::playSound((Projectile *)this,param_1);
      }
      goto LAB_04767ce8;
    }
  }
  uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
LAB_04767ce8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

