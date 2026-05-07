// Class: BowlingPrimevalWallnutProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingPrimevalWallnutProjectile::StaticClassInit() */

void BowlingPrimevalWallnutProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BowlingPrimevalWallnutProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04e0b704,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BowlingPrimevalWallnutProjectile::StaticGetClass() */

long * BowlingPrimevalWallnutProjectile::StaticGetClass(void)

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
  uVar2 = BowlingBulbSuperProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"BowlingPrimevalWallnutProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BowlingPrimevalWallnutProjectile::GetClass() const */

long * BowlingPrimevalWallnutProjectile::GetClass(void)

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
  uVar2 = BowlingBulbSuperProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"BowlingPrimevalWallnutProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BowlingPrimevalWallnutProjectile::BowlingPrimevalWallnutProjectile() */

void __thiscall
BowlingPrimevalWallnutProjectile::BowlingPrimevalWallnutProjectile
          (BowlingPrimevalWallnutProjectile *this)

{
  BowlingBulbSuperProjectile::BowlingBulbSuperProjectile((BowlingBulbSuperProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_069d3bf0;
  *(undefined ***)(this + 0x10) = &PTR__BowlingPrimevalWallnutProjectile_069d3de0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  return;
}


/* BowlingPrimevalWallnutProjectile::StaticNew() */

BowlingPrimevalWallnutProjectile * BowlingPrimevalWallnutProjectile::StaticNew(void)

{
  BowlingPrimevalWallnutProjectile *this;
  
  this = ::operator_new(0x1c0);
  BowlingPrimevalWallnutProjectile(this);
  return this;
}


/* BowlingPrimevalWallnutProjectile::~BowlingPrimevalWallnutProjectile() */

void __thiscall
BowlingPrimevalWallnutProjectile::~BowlingPrimevalWallnutProjectile
          (BowlingPrimevalWallnutProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069d3bf0;
  *(undefined ***)(this + 0x10) = &PTR__BowlingPrimevalWallnutProjectile_069d3de0;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x1a8));
  BowlingBulbSuperProjectile::~BowlingBulbSuperProjectile((BowlingBulbSuperProjectile *)this);
  return;
}


/* non-virtual thunk to BowlingPrimevalWallnutProjectile::~BowlingPrimevalWallnutProjectile() */

void __thiscall
BowlingPrimevalWallnutProjectile::~BowlingPrimevalWallnutProjectile
          (BowlingPrimevalWallnutProjectile *this)

{
  ~BowlingPrimevalWallnutProjectile(this + -0x10);
  return;
}


/* BowlingPrimevalWallnutProjectile::~BowlingPrimevalWallnutProjectile() */

void __thiscall
BowlingPrimevalWallnutProjectile::~BowlingPrimevalWallnutProjectile
          (BowlingPrimevalWallnutProjectile *this)

{
  ~BowlingPrimevalWallnutProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BowlingPrimevalWallnutProjectile::~BowlingPrimevalWallnutProjectile() */

void __thiscall
BowlingPrimevalWallnutProjectile::~BowlingPrimevalWallnutProjectile
          (BowlingPrimevalWallnutProjectile *this)

{
  ~BowlingPrimevalWallnutProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingPrimevalWallnutProjectile::damageEntity(BoardEntity*) */

void __thiscall
BowlingPrimevalWallnutProjectile::damageEntity
          (BowlingPrimevalWallnutProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  Zombie *this_00;
  undefined8 uVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  string asStack_80 [8];
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (BoardEntity *)0x0) ||
     (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 == (Zombie *)0x0))
  goto LAB_04e0d040;
  cVar1 = CustomLevelUtils::IsCustomLevel();
  if (cVar1 == '\0') {
    uVar3 = Zombie::GetTypeName(this_00);
    FUN_05475d88(asStack_80,uVar3);
    bVar2 = std::operator==(asStack_80,"bowling_modern_allstar");
    if (bVar2) {
      (**(code **)(*(long *)this_00 + 0x260))(this_00);
      fVar5 = (float)FUN_04e0abe8(*(undefined4 *)(this_00 + 0x284));
      fVar6 = (float)FUN_04e0abec(*(undefined4 *)(this_00 + 0x2a8));
      pcVar4 = *(code **)(*(long *)this_00 + 0x110);
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      fVar6 = fVar6 + fVar5;
      fVar5 = 0.5;
LAB_04e0d11c:
      DamageInfo::DamageInfo
                ((DamageInfo *)(fVar5 * fVar6 + 10.0),local_70,local_6c,aDStack_68,aPStack_78,0);
      (*pcVar4)(this_00,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
    else {
      bVar2 = std::operator==(asStack_80,"bowling_tutorial_armor2");
      if (bVar2) {
        fVar5 = (float)FUN_04e0abe8(*(undefined4 *)(this_00 + 0x284));
        fVar6 = (float)FUN_04e0abec(*(undefined4 *)(this_00 + 0x2a8));
        pcVar4 = *(code **)(*(long *)this_00 + 0x110);
        Sexy::Point::Point(aPStack_78,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
        fVar6 = fVar6 + fVar5;
        fVar5 = 0.6666667;
        goto LAB_04e0d11c;
      }
      Zombie::TakeFatalDamage(this_00,(BoardEntity *)0x0);
    }
    std::string::~string(asStack_80);
  }
  else {
    Projectile::damageEntity((Projectile *)this,param_1);
  }
  Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),3,-4,0.0);
LAB_04e0d040:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingPrimevalWallnutProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
BowlingPrimevalWallnutProjectile::OnCollideEntity
          (BowlingPrimevalWallnutProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  RtObject *pRVar5;
  BowlingBulbSuperProjectileProps *pBVar6;
  RtWeakPtrBase *pRVar7;
  BowlingWallnutProjectile *this_01;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  Board *pBVar14;
  undefined4 uVar13;
  BoardEntity *local_88 [2];
  undefined8 local_78;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  int local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_88[0] = param_1;
  if (this[0x1a5] == (BowlingPrimevalWallnutProjectile)0x0) {
    this[0x1a5] = (BowlingPrimevalWallnutProjectile)0x1;
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x1a8),local_88);
    Projectile::OnCollideEntity((Projectile *)this,local_88[0]);
    uVar2 = 1;
  }
  else {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x1a8);
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_78 = std::
               find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,BoardEntity*>
                         (uVar2,uVar3,local_88);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_78,(__normal_iterator *)&local_40);
    if (bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)this_00,local_88);
      Projectile::SetVelocity((Projectile *)this,0.0,0.0,0.0);
      puVar4 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this);
                    /* WARNING: Load size is inaccurate */
      pBVar14._0_4_ = *puVar4;
      uVar13 = *(undefined4 *)((long)puVar4 + 4);
      pRVar5 = (RtObject *)Projectile::GetProps((Projectile *)this);
      pBVar6 = Sexy::RtObject::Cast<BowlingBulbSuperProjectileProps>(pRVar5);
      if (pBVar6 != (BowlingBulbSuperProjectileProps *)0x0) {
        iVar8 = 0;
        local_68 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(pBVar6 + 0x1e0));
        local_60 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(pBVar6 + 0x1e0));
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60),
              bVar1) {
          pRVar7 = (RtWeakPtrBase *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_70,pRVar7);
          uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_70);
          uVar2 = Projectile::GetInstigator((Projectile *)this);
          uVar12 = 0;
          uVar11 = uVar13;
          pRVar5 = (RtObject *)
                   Board::AddProjectile
                             (pBVar14._0_4_,uVar3,(RtWeakPtr<Sexy::SoundResource> *)&local_40,uVar2,
                              0);
          this_01 = Sexy::RtObject::Cast<BowlingWallnutProjectile>(pRVar5);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          RealObject::JoinTeam((RealObject *)this_01,1);
          FUN_04e0abf0(this_01 + 0x1b8);
          BoardEntity::CalcGridPosition();
          puVar4 = (undefined8 *)Projectile::GetVelocity((Projectile *)this_01);
          local_50 = *puVar4;
          local_48 = *(undefined4 *)(puVar4 + 1);
          Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
          if (iVar8 == 0) {
            fVar10 = (float)Sexy::SexyMath::DegToRad(45.0);
            fVar10 = -fVar10;
          }
          else {
            fVar10 = (float)Sexy::SexyMath::DegToRad(45.0);
          }
          Sexy::SexyTransform2D::RotateRad(aSStack_30,fVar10);
          uVar9 = Sexy::SexyMatrix3::operator*((SexyMatrix3 *)aSStack_30,(SexyVector3 *)&local_50);
          local_40 = CONCAT44(uVar11,uVar9);
          local_38 = uVar12;
          Sexy::SexyVector3::operator=((SexyVector3 *)&local_50,(SexyVector3 *)&local_40);
          if ((local_54 == 0) || ((fVar10 = -1.0, local_54 != 4 && (local_50._4_4_ <= 0.0)))) {
            fVar10 = 1.0;
          }
          iVar8 = iVar8 + 1;
          local_50 = CONCAT44(ABS(local_50._4_4_) * fVar10,(undefined4)local_50);
          Projectile::SetVelocity((Projectile *)this_01,(SexyVector3 *)&local_50);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
        }
      }
      Projectile::OnCollideEntity((Projectile *)this,local_88[0]);
      (**(code **)(*(long *)this + 0x48))(this);
    }
    uVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

