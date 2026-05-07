// Class: ButtercupProjectile


/* ButtercupProjectile::SetOnGridButterCreatedDelegate(Sexy::Delegate0) */

void __thiscall
ButtercupProjectile::SetOnGridButterCreatedDelegate(ButtercupProjectile *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x1c8),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ButtercupProjectile::StaticClassInit() */

void ButtercupProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ButtercupProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03b37970,0x208,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ButtercupProjectile::StaticGetClass() */

long * ButtercupProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ButtercupProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ButtercupProjectile::GetClass() const */

long * ButtercupProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ButtercupProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ButtercupProjectile::~ButtercupProjectile() */

void __thiscall ButtercupProjectile::~ButtercupProjectile(ButtercupProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0672fb00;
  *(undefined ***)(this + 0x10) = &PTR__ButtercupProjectile_0672fcf0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ButtercupProjectile::~ButtercupProjectile() */

void __thiscall ButtercupProjectile::~ButtercupProjectile(ButtercupProjectile *this)

{
  ~ButtercupProjectile(this + -0x10);
  return;
}


/* ButtercupProjectile::~ButtercupProjectile() */

void __thiscall ButtercupProjectile::~ButtercupProjectile(ButtercupProjectile *this)

{
  ~ButtercupProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ButtercupProjectile::~ButtercupProjectile() */

void __thiscall ButtercupProjectile::~ButtercupProjectile(ButtercupProjectile *this)

{
  ~ButtercupProjectile(this + -0x10);
  return;
}


/* ButtercupProjectile::ButtercupProjectile() */

void __thiscall ButtercupProjectile::ButtercupProjectile(ButtercupProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0672fb00;
  *(undefined ***)(this + 0x10) = &PTR__ButtercupProjectile_0672fcf0;
  DVec3::DVec3((DVec3 *)(this + 0x1a8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1c0));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x1c8),(DummyInit *)0x0);
  *(undefined4 *)(this + 0x200) = 0x3f800000;
  return;
}


/* ButtercupProjectile::StaticNew() */

ButtercupProjectile * ButtercupProjectile::StaticNew(void)

{
  ButtercupProjectile *this;
  
  this = ::operator_new(0x208);
  ButtercupProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ButtercupProjectile::SetButterProjectileType(ButtercupProjectileType) */

void __thiscall ButtercupProjectile::SetButterProjectileType(ButtercupProjectile *this,int param_2)

{
  char cVar1;
  RtObject *this_00;
  ButtercupProjectileProps *pBVar2;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1fc) == param_2) goto LAB_03b35d40;
  *(int *)(this + 0x1fc) = param_2;
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pBVar2 = Sexy::RtObject::Cast<ButtercupProjectileProps>(this_00);
  FUN_05475d88(asStack_20,pBVar2 + 0x108);
  if (*(int *)(this + 0x1fc) == 3) {
    pBVar2 = pBVar2 + 0x1e8;
    cVar1 = FUN_0547419c(pBVar2);
joined_r0x03b35d78:
    if (cVar1 == '\0') {
      thunk_FUN_05475e00(asStack_20,pBVar2);
    }
  }
  else if (*(int *)(this + 0x1fc) == 5) {
    pBVar2 = pBVar2 + 0x1f0;
    cVar1 = FUN_0547419c(pBVar2);
    goto joined_r0x03b35d78;
  }
  GetImageByName(asStack_20);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  CloudBase::SetOwner((CloudBase *)this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_20);
LAB_03b35d40:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ButtercupProjectile::AutoSetAppropriateButterType(GridItemButter*) */

void __thiscall
ButtercupProjectile::AutoSetAppropriateButterType(ButtercupProjectile *this,GridItemButter *param_1)

{
  if (param_1 == (GridItemButter *)0x0) {
    return;
  }
  if (4 < *(int *)(this + 0x1fc) - 1U) {
    GridItemButter::SetButterType(param_1,0);
    return;
  }
  GridItemButter::SetButterType
            (param_1,*(undefined4 *)(&DAT_05752230 + (ulong)(*(int *)(this + 0x1fc) - 1U) * 4));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ButtercupProjectile::OnCollideGround() */

void __thiscall ButtercupProjectile::OnCollideGround(ButtercupProjectile *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  RtObject *pRVar6;
  Plant *this_01;
  GridItemButter *pGVar7;
  Zombie *pZVar8;
  string *psVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ButtercupProjectileProps *pBVar12;
  long *plVar13;
  GridItemButter *pGVar15;
  DamageInfo *pDVar16;
  undefined4 uVar14;
  int local_a0;
  int local_9c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [96];
  BoardTransforms *local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::BoardSpaceToGrid
            (___stack_chk_guard,*(float *)(this + 0x1a8),*(float *)(this + 0x1ac));
  if ((local_a0 == -1) || (local_9c == -1)) goto LAB_03b39704;
  lVar5 = FUN_03b377a8();
  cVar1 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_a0);
  if (cVar1 == '\0') {
    cVar1 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_a0);
    if ((cVar1 != '\0') || (lVar5 != 0)) goto LAB_03b396c4;
    pGVar7 = (GridItemButter *)FUN_03b3788c(local_a0,local_9c);
    if (pGVar7 == (GridItemButter *)0x0) {
      pRVar6 = (RtObject *)Projectile::GetProps((Projectile *)this);
      pBVar12 = Sexy::RtObject::Cast<ButtercupProjectileProps>(pRVar6);
      pRVar6 = (RtObject *)
               Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),(string *)(pBVar12 + 0x1e0),local_a0
                                  ,local_9c,1);
      if (pRVar6 != (RtObject *)0x0) {
        uVar14 = FUN_03b335f0(*(undefined4 *)(this + 0x24));
        FUN_03b335f4(pRVar6 + 0x24,uVar14);
        pGVar7 = Sexy::RtObject::Cast<GridItemButter>(pRVar6);
        if (pGVar7 != (GridItemButter *)0x0) {
          uVar10 = FUN_03b336b8(*(undefined8 *)(this + 0xe0));
          FUN_03b33714(pGVar7 + 0x1c0,uVar10);
          AutoSetAppropriateButterType(this,pGVar7);
          FUN_03b33724(*(undefined4 *)(this + 0x200),pGVar7 + 0x1d0);
                    /* WARNING: Load size is inaccurate */
          pGVar15._0_4_ = *(GridItemButter **)(this + 0x1b4);
          uVar14 = *(undefined4 *)(this + 0x1b8);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    (aRStack_68,(RtWeakPtrBase *)(this + 0x1c0));
          GridItemButter::InitButter(pGVar15._0_4_,0,uVar14,pGVar7,aRStack_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
          FUN_03b3371c(pGVar7 + 0x1c8,*(undefined4 *)(this + 0x1f8));
        }
      }
    }
    else {
      AutoSetAppropriateButterType(this,pGVar7);
      FUN_03b33724(*(undefined4 *)(this + 0x200),pGVar7 + 0x1d0);
                    /* WARNING: Load size is inaccurate */
      pGVar15._0_4_ = *(GridItemButter **)(this + 0x1b4);
      uVar14 = *(undefined4 *)(this + 0x1b8);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)(this + 0x1c0));
      GridItemButter::ReinitButter(pGVar15._0_4_,0,uVar14,pGVar7,aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      FUN_03b3371c(pGVar7 + 0x1c8,*(undefined4 *)(this + 0x1f8));
    }
  }
  else {
    Board::IsSky(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_a0);
LAB_03b396c4:
    this_00 = (RtMixedPtrBase *)(this + 0x1c0);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 != '\0') {
      pZVar8 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar1 = GridItemButter::canTargetZombie((GridItemButter *)this,pZVar8);
      if (cVar1 != '\0') {
        psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        std::string::string((string *)aRStack_68,"buttercup");
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
        std::string::~string((string *)aRStack_68);
        nop();
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
        pDVar16._0_4_ = (DamageInfo *)Projectile::GetDamageAmount((Projectile *)this);
        uVar10 = FUN_03b336b8(*(undefined8 *)(this + 0xe0));
        uVar11 = Projectile::GetInstigator((Projectile *)this);
        Sexy::Point::Point(aPStack_90,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
        DamageInfo::DamageInfo
                  (pDVar16._0_4_,local_88,local_84,(string *)aRStack_68,uVar10,uVar11,aPStack_90,0);
        uVar14 = 4;
        if (*(int *)(this + 0x1fc) != 3) {
          uVar14 = 3;
        }
        Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
        cVar1 = FUN_03b38348();
        if (cVar1 != '\0') {
          uVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
                    /* WARNING: Load size is inaccurate */
          Zombie::ApplyCondition(*(Zombie **)(this + 0x1b8),0,uVar10,uVar14,1);
        }
        bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
        if (bVar3) {
          plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          (**(code **)(*plVar13 + 0x110))(plVar13,(string *)aRStack_68);
        }
        DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
        std::vector<std::string,std::allocator<std::string>>::~vector
                  ((vector<std::string,std::allocator<std::string>> *)avStack_80);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
      }
    }
  }
  lVar5 = Projectile::GetInstigator((Projectile *)this);
  if (lVar5 != 0) {
    pRVar6 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
    this_01 = Sexy::RtObject::Cast<Plant>(pRVar6);
    if ((((this_01 != (Plant *)0x0) && (iVar4 = FUN_03b336d0(this_01[0x299]), iVar4 == 0)) &&
        (cVar1 = GameObject::IsDestroyed((GameObject *)this_01), cVar1 == '\0')) &&
       (iVar4 = FUN_03b335d4(*(undefined8 *)(this + 0x1d0),*(undefined8 *)(this + 0x1e0)),
       iVar4 != 0)) {
      Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x1c8));
    }
  }
LAB_03b39704:
  uVar2 = Projectile::OnCollideGround((Projectile *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

