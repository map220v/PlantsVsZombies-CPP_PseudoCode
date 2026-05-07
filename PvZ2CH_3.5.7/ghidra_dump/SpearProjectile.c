// Class: SpearProjectile


/* SpearProjectile::SetPlant(Sexy::RtWeakPtr<Plant>) */

void __thiscall SpearProjectile::SetPlant(SpearProjectile *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1a8),param_2);
  return;
}


/* SpearProjectile::onUpdate(float) */

void SpearProjectile::onUpdate(float param_1)

{
  Projectile *in_x0;
  float *pfVar1;
  
  pfVar1 = (float *)Projectile::GetVelocity(in_x0);
  atan2f(pfVar1[2],*pfVar1);
  FUN_04e43908(in_x0 + 0xc4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpearProjectile::StaticClassInit() */

void SpearProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpearProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04e45348,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpearProjectile::StaticGetClass() */

long * SpearProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SpearProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpearProjectile::GetClass() const */

long * SpearProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"SpearProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpearProjectile::~SpearProjectile() */

void __thiscall SpearProjectile::~SpearProjectile(SpearProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069df7b0;
  *(undefined ***)(this + 0x10) = &PTR__SpearProjectile_069df9a0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to SpearProjectile::~SpearProjectile() */

void __thiscall SpearProjectile::~SpearProjectile(SpearProjectile *this)

{
  ~SpearProjectile(this + -0x10);
  return;
}


/* SpearProjectile::~SpearProjectile() */

void __thiscall SpearProjectile::~SpearProjectile(SpearProjectile *this)

{
  ~SpearProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SpearProjectile::~SpearProjectile() */

void __thiscall SpearProjectile::~SpearProjectile(SpearProjectile *this)

{
  ~SpearProjectile(this + -0x10);
  return;
}


/* SpearProjectile::SpearProjectile() */

void __thiscall SpearProjectile::SpearProjectile(SpearProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069df7b0;
  *(undefined ***)(this + 0x10) = &PTR__SpearProjectile_069df9a0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  return;
}


/* SpearProjectile::StaticNew() */

SpearProjectile * SpearProjectile::StaticNew(void)

{
  SpearProjectile *this;
  
  this = ::operator_new(0x1b0);
  SpearProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpearProjectile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void __thiscall
SpearProjectile::fillDamageInfo(SpearProjectile *this,DamageInfo *param_1,BoardEntity *param_2)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  PlantSpartanBamboo *this_01;
  Zombie *pZVar2;
  undefined8 uVar3;
  DamageInfo *pDVar4;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x1a8);
  local_8 = ___stack_chk_guard;
  Projectile::fillDamageInfo((DamageInfo *)this,(BoardEntity *)param_1);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    if (this_01 != (PlantSpartanBamboo *)0x0) {
      if ((param_2 != (BoardEntity *)0x0) &&
         (pZVar2 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_2), pZVar2 != (Zombie *)0x0)) {
        cVar1 = PlantSpartanBamboo::canKill(this_01,pZVar2);
        if (cVar1 != '\0') {
          pDVar4._0_4_ = (DamageInfo *)FUN_04e439d4(*(undefined4 *)(pZVar2 + 0x280));
          uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
          ;
          Sexy::Point::Point(aPStack_78,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
          DamageInfo::DamageInfo(pDVar4._0_4_,local_70,local_6c,aDStack_68,2,uVar3,aPStack_78,0);
          DamageInfo::operator=(param_1,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
          goto LAB_04e4e510;
        }
      }
      cVar1 = PlantSpartanBamboo::isSpecialTarget(this_01,param_2);
      if (cVar1 != '\0') {
        *(float *)(param_1 + 8) = *(float *)(param_1 + 8) * 44.0;
      }
    }
  }
LAB_04e4e510:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

