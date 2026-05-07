// Class: BowlingJackfruitProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingJackfruitProjectile::StaticClassInit() */

void BowlingJackfruitProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BowlingJackfruitProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04e0bb90,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BowlingJackfruitProjectile::StaticGetClass() */

long * BowlingJackfruitProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BowlingJackfruitProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BowlingJackfruitProjectile::GetClass() const */

long * BowlingJackfruitProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"BowlingJackfruitProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BowlingJackfruitProjectile::BowlingJackfruitProjectile() */

void __thiscall
BowlingJackfruitProjectile::BowlingJackfruitProjectile(BowlingJackfruitProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069d40e0;
  *(undefined ***)(this + 0x10) = &PTR__BowlingJackfruitProjectile_069d42d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  return;
}


/* BowlingJackfruitProjectile::StaticNew() */

BowlingJackfruitProjectile * BowlingJackfruitProjectile::StaticNew(void)

{
  BowlingJackfruitProjectile *this;
  
  this = ::operator_new(0x1c0);
  BowlingJackfruitProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingJackfruitProjectile::onDrawShadow(Sexy::Graphics*) */

void __thiscall
BowlingJackfruitProjectile::onDrawShadow(BowlingJackfruitProjectile *this,Graphics *param_1)

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
      goto LAB_04e0c714;
    }
    else {
      fVar6 = 2.0;
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
LAB_04e0c714:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BowlingJackfruitProjectile::~BowlingJackfruitProjectile() */

void __thiscall
BowlingJackfruitProjectile::~BowlingJackfruitProjectile(BowlingJackfruitProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069d40e0;
  *(undefined ***)(this + 0x10) = &PTR__BowlingJackfruitProjectile_069d42d0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to BowlingJackfruitProjectile::~BowlingJackfruitProjectile() */

void __thiscall
BowlingJackfruitProjectile::~BowlingJackfruitProjectile(BowlingJackfruitProjectile *this)

{
  ~BowlingJackfruitProjectile(this + -0x10);
  return;
}


/* BowlingJackfruitProjectile::~BowlingJackfruitProjectile() */

void __thiscall
BowlingJackfruitProjectile::~BowlingJackfruitProjectile(BowlingJackfruitProjectile *this)

{
  ~BowlingJackfruitProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BowlingJackfruitProjectile::~BowlingJackfruitProjectile() */

void __thiscall
BowlingJackfruitProjectile::~BowlingJackfruitProjectile(BowlingJackfruitProjectile *this)

{
  ~BowlingJackfruitProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingJackfruitProjectile::onProjectileInitialized() */

void __thiscall
BowlingJackfruitProjectile::onProjectileInitialized(BowlingJackfruitProjectile *this)

{
  char *pcVar1;
  PopAnimRig *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Bowling_bowling");
  this_00 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_10,"custom_01");
  PopAnimRig::SetLayerVisibility(this_00,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingJackfruitProjectile::OnCollideEntity(BoardEntity*) */

void BowlingJackfruitProjectile::OnCollideEntity(BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  GridItem *this_00;
  Board *this_01;
  float fVar9;
  float fVar10;
  undefined8 local_20;
  undefined4 local_18 [2];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(param_1 + 0x1a8);
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar5);
  iVar3 = BoardTransforms::BoardSpaceToGridYUnbounded(pfVar5[1]);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this);
  ToolPacketData::GetProps();
  local_20 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                       (uVar6,uVar7,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
  if (bVar1) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)local_18);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              this,(RtWeakPtr *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    if (((DAT_06b9d678 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_06b9d678), iVar4 != 0)) {
      std::map<float,int,std::less<float>,std::allocator<std::pair<float_const,int>>>::map
                ((map<float,int,std::less<float>,std::allocator<std::pair<float_const,int>>> *)
                 &DAT_06b9d6d0,&DAT_05755c70,5,(RtWeakPtr<Sexy::ResourceInfo> *)local_18,
                 (RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      __cxa_guard_release(&DAT_06b9d678);
      __cxa_atexit(std::map<float,int,std::less<float>,std::allocator<std::pair<float_const,int>>>::
                   ~map,&DAT_06b9d6d0,&DAT_06a88000);
    }
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)&local_10,"bowling_jackfruit");
    local_18[0] = FUN_04e0abd0(*(undefined4 *)(param_1 + 0x170));
    piVar8 = (int *)std::map<float,int,std::less<float>,std::allocator<std::pair<float_const,int>>>
                    ::operator[]((map<float,int,std::less<float>,std::allocator<std::pair<float_const,int>>>
                                  *)&DAT_06b9d6d0,(float *)local_18);
    this_00 = (GridItem *)Board::AddGridItem(this_01,(string *)&local_10,iVar2,iVar3,*piVar8);
    std::string::~string((string *)&local_10);
    nop();
    if (*(code **)(*(long *)this_00 + 0x1d8) == GridItem::GetHitpoints) {
      fVar9 = (float)GridItem::GetHitpoints(this_00);
    }
    else {
      fVar9 = (float)(**(code **)(*(long *)this_00 + 0x1d8))();
    }
    fVar10 = (float)GridItem::GetExtraHitPointsmodifier(this_00);
    FUN_04e0abd4(fVar10 * fVar9,this_00 + 300);
    FUN_04e0abdc(fVar10 * fVar9,this_00 + 0x128);
  }
  Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),3,-4,0.0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}

