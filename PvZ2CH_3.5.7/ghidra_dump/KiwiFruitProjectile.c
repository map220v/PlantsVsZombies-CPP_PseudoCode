// Class: KiwiFruitProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* KiwiFruitProjectile::onDestroy() */

void __thiscall KiwiFruitProjectile::onDestroy(KiwiFruitProjectile *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Stop_Zomb_Kongfu_Monk_Torch_Attack");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* KiwiFruitProjectile::~KiwiFruitProjectile() */

void __thiscall KiwiFruitProjectile::~KiwiFruitProjectile(KiwiFruitProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06910060;
  *(undefined ***)(this + 0x10) = &PTR__KiwiFruitProjectile_06910250;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to KiwiFruitProjectile::~KiwiFruitProjectile() */

void __thiscall KiwiFruitProjectile::~KiwiFruitProjectile(KiwiFruitProjectile *this)

{
  ~KiwiFruitProjectile(this + -0x10);
  return;
}


/* KiwiFruitProjectile::~KiwiFruitProjectile() */

void __thiscall KiwiFruitProjectile::~KiwiFruitProjectile(KiwiFruitProjectile *this)

{
  ~KiwiFruitProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to KiwiFruitProjectile::~KiwiFruitProjectile() */

void __thiscall KiwiFruitProjectile::~KiwiFruitProjectile(KiwiFruitProjectile *this)

{
  ~KiwiFruitProjectile(this + -0x10);
  return;
}


/* KiwiFruitProjectile::onProjectileInitialized() */

void __thiscall KiwiFruitProjectile::onProjectileInitialized(KiwiFruitProjectile *this)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x1bc) = 1;
  *(undefined4 *)(this + 0x1b0) = 0x3f000000;
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0x40400000;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1b4) = uVar1;
  return;
}


/* KiwiFruitProjectile::KiwiFruitProjectile() */

void __thiscall KiwiFruitProjectile::KiwiFruitProjectile(KiwiFruitProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06910060;
  *(undefined ***)(this + 0x10) = &PTR__KiwiFruitProjectile_06910250;
  return;
}


/* KiwiFruitProjectile::StaticNew() */

KiwiFruitProjectile * KiwiFruitProjectile::StaticNew(void)

{
  KiwiFruitProjectile *this;
  
  this = ::operator_new(0x1c0);
  KiwiFruitProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* KiwiFruitProjectile::StaticClassInit() */

void KiwiFruitProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"KiwiFruitProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0491b88c,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* KiwiFruitProjectile::StaticGetClass() */

long * KiwiFruitProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"KiwiFruitProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* KiwiFruitProjectile::GetClass() const */

long * KiwiFruitProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"KiwiFruitProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* KiwiFruitProjectile::SetLevelAttack(float, float, int) */

void __thiscall
KiwiFruitProjectile::SetLevelAttack
          (KiwiFruitProjectile *this,float param_1,float param_2,int param_3)

{
  PopAnimRig *pPVar1;
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(int *)(this + 0x1bc) = param_3;
  *(float *)(this + 0x1b0) = param_1;
  local_8 = ___stack_chk_guard;
  *(float *)(this + 0x1ac) = param_2;
  if (param_3 < 2) {
    pPVar1 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    __s = "attack01";
  }
  else {
    pPVar1 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    __s = "attack03";
  }
  std::string::string(asStack_40,__s);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"Play_Zomb_Kongfu_Monk_Torch_Attack");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_40,0.0);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* KiwiFruitProjectile::OnCollideEntity(BoardEntity*) */

undefined8 __thiscall
KiwiFruitProjectile::OnCollideEntity(KiwiFruitProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  GridItem *pGVar4;
  undefined4 uVar5;
  float fVar6;
  
  if ((param_1 == (BoardEntity *)0x0) ||
     (pGVar4 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1), pGVar4 == (GridItem *)0x0)) {
    iVar1 = *(int *)(this + 0x1a8);
    cVar2 = '\x01';
  }
  else {
    cVar2 = (**(code **)(*(long *)pGVar4 + 0x200))();
    iVar1 = *(int *)(this + 0x1a8);
  }
  if (((iVar1 == 0) &&
      (cVar3 = RealObject::IsOnOpposingTeam((RealObject *)param_1,(RealObject *)this), cVar3 != '\0'
      )) && (cVar2 != '\0')) {
    *(undefined4 *)(this + 0x1a8) = 1;
    uVar5 = PVZ_T();
    *(undefined4 *)(this + 0x1b4) = uVar5;
    fVar6 = (float)PVZ_T();
    *(float *)(this + 0x1b8) = fVar6 + *(float *)(this + 0x1ac);
    Projectile::SetVelocity((Projectile *)this,0.0,0.0,0.0);
    return 0;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* KiwiFruitProjectile::dealAreaDamage() */

void __thiscall KiwiFruitProjectile::dealAreaDamage(KiwiFruitProjectile *this)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  GridItem *pGVar5;
  Zombie *this_00;
  ResourceInfo *pRVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  RtWeakPtr<Sexy::SoundResource> aRStack_b0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  Insets aIStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_68,"Play_Bonk");
  uVar9 = 0;
  RealObject::PlayPositionalSound((RealObject *)this,asStack_68,0.0);
  std::string::~string(asStack_68);
  nop();
  DamageInfo::DamageInfo((DamageInfo *)asStack_68);
  (**(code **)(*(long *)this + 0x178))(this,asStack_68,0);
  lVar3 = Projectile::GetProps((Projectile *)this);
  Sexy::TRect<float>::TRect((TRect<float> *)&local_a0,(TRect *)(lVar3 + 0x120));
  Sexy::Insets::Insets
            (aIStack_90,(int)(local_a0 + *(float *)(this + 0x18)),
             (int)(local_9c + *(float *)(this + 0x1c)),(int)local_98,(int)local_94);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar2 = operator|(2,4);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar2,
             aIStack_90,0xffffffff,0xffffffff);
  uVar10 = local_80;
  lVar3 = FUN_0491b468(local_80,local_78);
  if (lVar3 != 0) {
    do {
      FUN_0491b474(uVar10,uVar9);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_b0,(RtWeakPtrBase *)aRStack_a8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
      puVar4 = (undefined8 *)FUN_0491b474(local_80,uVar9);
      pGVar5 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar4);
      puVar4 = (undefined8 *)FUN_0491b474(local_80,uVar9);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_b0);
      if (cVar1 == '\0') {
LAB_0491d0a4:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0)
        ;
      }
      else {
        pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_b0);
        cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pRVar6);
        if ((cVar1 == '\0') ||
           ((pGVar5 != (GridItem *)0x0 &&
            (cVar1 = (**(code **)(*(long *)pGVar5 + 0x200))(pGVar5), cVar1 == '\0'))))
        goto LAB_0491d0a4;
        if (this_00 != (Zombie *)0x0) {
          cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
          if (((cVar1 == '\0') &&
              (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0')) &&
             (cVar1 = Zombie::IsInvisible(this_00), cVar1 == '\0')) {
            plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
            (**(code **)(*plVar8 + 0x110))(plVar8,asStack_68);
            cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
            if (((cVar1 == '\0') &&
                (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0')) &&
               ((cVar1 = Zombie::IsControlled(this_00), cVar1 == '\0' &&
                ((cVar1 = Zombie::IsInvisible(this_00), cVar1 == '\0' &&
                 (2 < *(int *)(this + 0x1bc))))))) {
              Zombie::ApplyCondition((Zombie *)0x3f19999a,0,this_00,0x33,1);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
              goto LAB_0491d0b0;
            }
          }
          goto LAB_0491d0a4;
        }
        plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
        (**(code **)(*plVar8 + 0x110))(plVar8,asStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0)
        ;
      }
LAB_0491d0b0:
      uVar10 = local_80;
      uVar9 = uVar9 + 1;
      uVar7 = FUN_0491b468(local_80,local_78);
    } while (uVar9 < uVar7);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* KiwiFruitProjectile::onUpdate(float) */

float KiwiFruitProjectile::onUpdate(float param_1)

{
  KiwiFruitProjectile *in_x0;
  float fVar1;
  float fVar2;
  
  if (*(int *)(in_x0 + 0x1a8) == 1) {
    fVar2 = *(float *)(in_x0 + 0x1b8);
    fVar1 = (float)PVZ_T();
    if (fVar2 < fVar1) {
      param_1 = (float)(**(code **)(*(long *)in_x0 + 0x48))();
    }
    else {
      fVar1 = *(float *)(in_x0 + 0x1b4);
      param_1 = (float)PVZ_T();
      if (fVar1 < param_1) {
        dealAreaDamage(in_x0);
        fVar1 = (float)PVZ_T();
        param_1 = fVar1 + *(float *)(in_x0 + 0x1b0);
        *(float *)(in_x0 + 0x1b4) = param_1;
      }
    }
  }
  return param_1;
}

