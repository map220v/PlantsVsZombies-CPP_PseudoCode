// Class: IceShroomNormalShotProjectile


/* IceShroomNormalShotProjectile::~IceShroomNormalShotProjectile() */

void __thiscall
IceShroomNormalShotProjectile::~IceShroomNormalShotProjectile(IceShroomNormalShotProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0680cee0;
  *(undefined ***)(this + 0x10) = &PTR__IceShroomNormalShotProjectile_0680d0d0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to IceShroomNormalShotProjectile::~IceShroomNormalShotProjectile() */

void __thiscall
IceShroomNormalShotProjectile::~IceShroomNormalShotProjectile(IceShroomNormalShotProjectile *this)

{
  ~IceShroomNormalShotProjectile(this + -0x10);
  return;
}


/* IceShroomNormalShotProjectile::~IceShroomNormalShotProjectile() */

void __thiscall
IceShroomNormalShotProjectile::~IceShroomNormalShotProjectile(IceShroomNormalShotProjectile *this)

{
  ~IceShroomNormalShotProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to IceShroomNormalShotProjectile::~IceShroomNormalShotProjectile() */

void __thiscall
IceShroomNormalShotProjectile::~IceShroomNormalShotProjectile(IceShroomNormalShotProjectile *this)

{
  ~IceShroomNormalShotProjectile(this + -0x10);
  return;
}


/* IceShroomNormalShotProjectile::IceShroomNormalShotProjectile() */

void __thiscall
IceShroomNormalShotProjectile::IceShroomNormalShotProjectile(IceShroomNormalShotProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0680cee0;
  *(undefined ***)(this + 0x10) = &PTR__IceShroomNormalShotProjectile_0680d0d0;
  return;
}


/* IceShroomNormalShotProjectile::StaticNew() */

IceShroomNormalShotProjectile * IceShroomNormalShotProjectile::StaticNew(void)

{
  IceShroomNormalShotProjectile *this;
  
  this = ::operator_new(0x1a8);
  IceShroomNormalShotProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IceShroomNormalShotProjectile::StaticClassInit() */

void IceShroomNormalShotProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"IceShroomNormalShotProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04214248,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IceShroomNormalShotProjectile::StaticGetClass() */

long * IceShroomNormalShotProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"IceShroomNormalShotProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IceShroomNormalShotProjectile::GetClass() const */

long * IceShroomNormalShotProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"IceShroomNormalShotProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IceShroomNormalShotProjectile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void __thiscall
IceShroomNormalShotProjectile::fillDamageInfo
          (IceShroomNormalShotProjectile *this,DamageInfo *param_1,BoardEntity *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  RtObject *this_00;
  Plant *pPVar5;
  PlantIceShroom *this_01;
  float fVar6;
  float fVar7;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = Projectile::GetInstigator((Projectile *)this);
  if (lVar4 != 0) {
    Projectile::GetInstigator((Projectile *)this);
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 != '\0') {
      if ((param_2 != (BoardEntity *)0x0) &&
         (bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_2), bVar2)) {
        this_00 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
        pPVar5 = Sexy::RtObject::Cast<Plant>(this_00);
        if ((pPVar5 != (Plant *)0x0) &&
           ((nop(), this_01 != (PlantIceShroom *)0x0 &&
            (lVar4 = PlantIceShroom::GetIceShroomProps(this_01), lVar4 != 0)))) {
          iVar3 = PlantIceShroom::GetCurLevel(this_01);
          lVar4 = FUN_042136d0(*(undefined8 *)(lVar4 + 0x2d0),(long)(iVar3 + -1));
          fVar7 = *(float *)(lVar4 + 4);
          fVar6 = (float)Sexy::Rand(1.0);
          if (fVar6 < fVar7) {
            DamageInfo::AddCondition((DamageInfo *)0x40a00000,param_1,1);
          }
        }
      }
      Projectile::fillDamageInfo((DamageInfo *)this,(BoardEntity *)param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

