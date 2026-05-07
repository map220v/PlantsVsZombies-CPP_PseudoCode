// Class: ExplosionProofProjectile


/* ExplosionProofProjectile::CollidesWithType(CollisionTypeFlags) const */

bool __thiscall ExplosionProofProjectile::CollidesWithType(undefined8 param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = true;
  if (((param_2 - 0x10U & 0xffffffef) != 0) && (param_2 != 0x100)) {
    bVar1 = param_2 == 0xf0 || param_2 == 0x80;
  }
  return bVar1;
}


/* ExplosionProofProjectile::~ExplosionProofProjectile() */

void __thiscall ExplosionProofProjectile::~ExplosionProofProjectile(ExplosionProofProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06726bf0;
  *(undefined ***)(this + 0x10) = &PTR__ExplosionProofProjectile_06726de0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ExplosionProofProjectile::~ExplosionProofProjectile() */

void __thiscall ExplosionProofProjectile::~ExplosionProofProjectile(ExplosionProofProjectile *this)

{
  ~ExplosionProofProjectile(this + -0x10);
  return;
}


/* ExplosionProofProjectile::~ExplosionProofProjectile() */

void __thiscall ExplosionProofProjectile::~ExplosionProofProjectile(ExplosionProofProjectile *this)

{
  ~ExplosionProofProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ExplosionProofProjectile::~ExplosionProofProjectile() */

void __thiscall ExplosionProofProjectile::~ExplosionProofProjectile(ExplosionProofProjectile *this)

{
  ~ExplosionProofProjectile(this + -0x10);
  return;
}


/* ExplosionProofProjectile::StaticGetClass() */

long * ExplosionProofProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ExplosionProofProjectile",uVar2,StaticNew);
  return sClass;
}


/* ExplosionProofProjectile::GetClass() const */

long * ExplosionProofProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ExplosionProofProjectile",uVar2,StaticNew);
  return sClass;
}


/* ExplosionProofProjectile::ExplosionProofProjectile() */

void __thiscall ExplosionProofProjectile::ExplosionProofProjectile(ExplosionProofProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06726bf0;
  *(undefined ***)(this + 0x10) = &PTR__ExplosionProofProjectile_06726de0;
  return;
}


/* ExplosionProofProjectile::StaticNew() */

ExplosionProofProjectile * ExplosionProofProjectile::StaticNew(void)

{
  ExplosionProofProjectile *this;
  
  this = ::operator_new(0x1a8);
  ExplosionProofProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ExplosionProofProjectile::isCanTargetFireGourd(Plant*) */

void __thiscall
ExplosionProofProjectile::isCanTargetFireGourd(ExplosionProofProjectile *this,Plant *param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  bVar1 = true;
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  FUN_05475d88(asStack_18,lVar3 + 8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  bVar2 = std::operator==(asStack_18,"firegourd");
  if (bVar2) {
    bVar1 = (*(uint *)(param_1 + 200) & 0xfffffffb) != 10;
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ExplosionProofProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
ExplosionProofProjectile::OnCollideEntity(ExplosionProofProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  Plant *pPVar3;
  PlantGroup *pPVar4;
  long lVar5;
  undefined8 *puVar6;
  RtMixedPtrBase *this_00;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 local_28;
  undefined8 local_20;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    pPVar3 = Sexy::RtObject::Cast<Plant>((RtObject *)param_1);
    pPVar4 = Sexy::RtObject::Cast<PlantGroup>((RtObject *)param_1);
    if (pPVar3 == (Plant *)0x0) {
      if (pPVar4 != (PlantGroup *)0x0) {
        puVar6 = (undefined8 *)PlantGroup::Plants();
        local_28 = FUN_03af7b8c(*puVar6);
        local_20 = FUN_03af7bdc(puVar6[1]);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20),
              bVar2) {
          this_00 = (RtMixedPtrBase *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
          cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
          if (cVar1 != '\0') {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            Plant::GetType();
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
            FUN_05475d88(asStack_18,lVar5 + 8);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
            pPVar3 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            cVar1 = Plant::CanBeRangeTargeted(pPVar3);
            if (cVar1 != '\0') {
              uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
              cVar1 = Plant::HasCondition(uVar7,0x17);
              if (cVar1 == '\0') {
                lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
                cVar1 = FUN_03af6d00(*(undefined1 *)(lVar5 + 0x208));
                if (((cVar1 == '\0') &&
                    (bVar2 = std::operator!=(asStack_18,"shrinkingviolet"), bVar2)) &&
                   (bVar2 = std::operator!=(asStack_18,"torchwood"), bVar2)) {
                  pPVar3 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
                  cVar1 = isCanTargetFireGourd(this,pPVar3);
                  if (cVar1 != '\0') {
                    uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
                    auVar8 = PVZ_EOT();
                    Plant::ApplyCondition(auVar8,0x3f000000,uVar7,0x17);
                  }
                }
              }
            }
            std::string::~string(asStack_18);
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
        }
      }
    }
    else {
      Plant::GetType();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      FUN_05475d88(asStack_18,lVar5 + 8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      cVar1 = Plant::CanBeRangeTargeted(pPVar3);
      if ((((cVar1 != '\0') && (cVar1 = Plant::HasCondition(pPVar3,0x17), cVar1 == '\0')) &&
          ((cVar1 = FUN_03af6d00(pPVar3[0x208]), cVar1 == '\0' &&
           ((bVar2 = std::operator!=(asStack_18,"shrinkingviolet"), bVar2 &&
            (bVar2 = std::operator!=(asStack_18,"torchwood"), bVar2)))))) &&
         (cVar1 = isCanTargetFireGourd(this,pPVar3), cVar1 != '\0')) {
        auVar8 = PVZ_EOT();
        Plant::ApplyCondition(auVar8,0x3f000000,pPVar3,0x17);
      }
      std::string::~string(asStack_18);
    }
    (**(code **)(*(long *)this + 0x168))(this,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

