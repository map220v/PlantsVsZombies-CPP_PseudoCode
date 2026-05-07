// Class: BowlingBigWallnutProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingBigWallnutProjectile::StaticClassInit() */

void BowlingBigWallnutProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BowlingBigWallnutProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04e0b278,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BowlingBigWallnutProjectile::StaticGetClass() */

long * BowlingBigWallnutProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BowlingBigWallnutProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BowlingBigWallnutProjectile::GetClass() const */

long * BowlingBigWallnutProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"BowlingBigWallnutProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BowlingBigWallnutProjectile::BowlingBigWallnutProjectile() */

void __thiscall
BowlingBigWallnutProjectile::BowlingBigWallnutProjectile(BowlingBigWallnutProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069d37b0;
  *(undefined ***)(this + 0x10) = &PTR__BowlingBigWallnutProjectile_069d39a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  return;
}


/* BowlingBigWallnutProjectile::StaticNew() */

BowlingBigWallnutProjectile * BowlingBigWallnutProjectile::StaticNew(void)

{
  BowlingBigWallnutProjectile *this;
  
  this = ::operator_new(0x1c0);
  BowlingBigWallnutProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingBigWallnutProjectile::onDrawShadow(Sexy::Graphics*) */

void __thiscall
BowlingBigWallnutProjectile::onDrawShadow(BowlingBigWallnutProjectile *this,Graphics *param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  Image *this_00;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_58;
  undefined4 local_54;
  Insets aIStack_50 [16];
  Color aCStack_40 [16];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  uVar1 = *(undefined4 *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_04e0c14c(uVar1);
  if ((((cVar2 == '\0') && (bVar3 = TestFlag<VaseFlags>(uVar1,1), !bVar3)) &&
      (bVar3 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x100),4), !bVar3)) &&
     (this_00 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                   ((CachedResourcePtr<Sexy::Image> *)&DAT_06b9d688),
     this_00 != (Image *)0x0)) {
    fVar6 = *(float *)(this + 0x20);
    if (200.0 < fVar6) {
      if ((800.0 <= fVar6) || (fVar6 = (200.0 - fVar6) * 0.0016666667 + 1.0, fVar6 <= 0.01))
      goto LAB_04e0c980;
    }
    else {
      fVar6 = 3.0;
    }
    iVar4 = Sexy::Image::GetCelWidth(this_00);
    iVar5 = Sexy::Image::GetCelHeight(this_00);
    Sexy::Insets::Insets(aIStack_50,0,0,iVar4,iVar5);
    (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0xd0))(&local_58,*(long **)(gLawnApp + 0x9f0));
    fVar12 = *(float *)(this + 0x18);
    iVar4 = FUN_04e0ac80(local_58);
    iVar5 = FUN_04e0ac80(local_54);
    fVar11 = (float)iVar5 + *(float *)(this + 0x1c);
    if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
       (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0')) {
      fVar7 = (float)Board::calculateRoofOffsetZ(fVar12);
      fVar11 = fVar11 - fVar7;
    }
    fVar12 = (float)FUN_04e0ac70((float)iVar4 + fVar12);
    fVar10 = *(float *)(param_1 + 0x20);
    fVar8 = *(float *)(param_1 + 0x18);
    fVar11 = (float)FUN_04e0ac70(fVar11);
    fVar9 = *(float *)(param_1 + 0x24);
    fVar7 = *(float *)(param_1 + 0x1c);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    TodScaleRotateTransformMatrix
              ((SexyMatrix3 *)aSStack_30,(float)(int)((fVar12 - fVar10) * fVar8) + fVar10,
               (float)(int)((fVar11 - fVar9) * fVar7) + fVar9,0.0,
               *(float *)(this + 0xc0) * *(float *)(param_1 + 0x18) * fVar6,
               *(float *)(this + 0xc0) * *(float *)(param_1 + 0x1c) * fVar6);
    Sexy::Color::Color(aCStack_40,1);
    TodBltMatrix(param_1,this_00,(SexyMatrix3 *)aSStack_30,(TRect *)(param_1 + 0x28),aCStack_40,
                 *(int *)(param_1 + 0x78),(TRect *)aIStack_50);
  }
LAB_04e0c980:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BowlingBigWallnutProjectile::~BowlingBigWallnutProjectile() */

void __thiscall
BowlingBigWallnutProjectile::~BowlingBigWallnutProjectile(BowlingBigWallnutProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069d37b0;
  *(undefined ***)(this + 0x10) = &PTR__BowlingBigWallnutProjectile_069d39a0;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to BowlingBigWallnutProjectile::~BowlingBigWallnutProjectile() */

void __thiscall
BowlingBigWallnutProjectile::~BowlingBigWallnutProjectile(BowlingBigWallnutProjectile *this)

{
  ~BowlingBigWallnutProjectile(this + -0x10);
  return;
}


/* BowlingBigWallnutProjectile::~BowlingBigWallnutProjectile() */

void __thiscall
BowlingBigWallnutProjectile::~BowlingBigWallnutProjectile(BowlingBigWallnutProjectile *this)

{
  ~BowlingBigWallnutProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BowlingBigWallnutProjectile::~BowlingBigWallnutProjectile() */

void __thiscall
BowlingBigWallnutProjectile::~BowlingBigWallnutProjectile(BowlingBigWallnutProjectile *this)

{
  ~BowlingBigWallnutProjectile(this + -0x10);
  return;
}


/* BowlingBigWallnutProjectile::onProjectileInitialized() */

void BowlingBigWallnutProjectile::onProjectileInitialized(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Bowling_bowling");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingBigWallnutProjectile::damageEntity(BoardEntity*) */

void __thiscall
BowlingBigWallnutProjectile::damageEntity(BowlingBigWallnutProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  BoardEntity *pBVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  BoardEntity *local_88 [2];
  Point aPStack_78 [8];
  undefined8 local_70;
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_88[0] = param_1;
  cVar2 = CustomLevelUtils::IsCustomLevel();
  pBVar1 = local_88[0];
  if (cVar2 == '\0') {
    pcVar6 = *(code **)(*(long *)local_88[0] + 0x120);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)0x0,(undefined4)local_70,local_70._4_4_,(DamageInfo *)local_68,2,
               aPStack_78,0);
    (*pcVar6)(pBVar1,(DamageInfo *)local_68);
    DamageInfo::~DamageInfo((DamageInfo *)local_68);
  }
  else {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x1a8);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_70 = std::
               find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,BoardEntity*>
                         (uVar4,uVar5,local_88);
    local_68[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
    bVar3 = __gnu_cxx::operator==((__normal_iterator *)&local_70,(__normal_iterator *)local_68);
    if (bVar3) {
      Projectile::damageEntity((Projectile *)this,local_88[0]);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)this_00,local_88);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

