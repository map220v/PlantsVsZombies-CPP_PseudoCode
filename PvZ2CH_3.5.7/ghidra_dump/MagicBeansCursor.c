// Class: MagicBeansCursor


/* MagicBeansCursor::StaticGetClass() */

long * MagicBeansCursor::StaticGetClass(void)

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
  uVar2 = PacketCursor::StaticGetClass();
  (*pcVar3)(plVar1,"MagicBeansCursor",uVar2,StaticNew);
  return sClass;
}


/* MagicBeansCursor::GetClass() const */

long * MagicBeansCursor::GetClass(void)

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
  uVar2 = PacketCursor::StaticGetClass();
  (*pcVar3)(plVar1,"MagicBeansCursor",uVar2,StaticNew);
  return sClass;
}


/* MagicBeansCursor::payForPlant(Sexy::RtWeakPtr<PlantType const>) */

int __thiscall
MagicBeansCursor::payForPlant(undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  iVar2 = (**(code **)(*plVar3 + 0x70))(plVar3,0xfffffffe);
  cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if (cVar1 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    iVar2 = (**(code **)(*plVar3 + 0x60))(plVar3,1);
  }
  if (0 < iVar2) {
    Board::TakeSunMoney(*(Board **)(gLawnApp + 0x9f0),iVar2,false,false);
  }
  return iVar2;
}


/* MagicBeansCursor::MagicBeansCursor() */

void __thiscall MagicBeansCursor::MagicBeansCursor(MagicBeansCursor *this)

{
  PacketCursor::PacketCursor((PacketCursor *)this);
  *(undefined ***)this = &PTR_GetClass_067a1d50;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  this[0x50] = (MagicBeansCursor)0x0;
  this[0x51] = (MagicBeansCursor)0x0;
  this[0x52] = (MagicBeansCursor)0x0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x58));
  return;
}


/* MagicBeansCursor::StaticNew() */

MagicBeansCursor * MagicBeansCursor::StaticNew(void)

{
  MagicBeansCursor *this;
  
  this = ::operator_new(0x60);
  MagicBeansCursor(this);
  return this;
}


/* MagicBeansCursor::~MagicBeansCursor() */

void __thiscall MagicBeansCursor::~MagicBeansCursor(MagicBeansCursor *this)

{
  bool bVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR_GetClass_067a1d50;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  bVar1 = std::operator==("cobcannon",(string *)(lVar2 + 8));
  if (bVar1) {
    Board::SetNeedShineKernelpult(*(Board **)(gLawnApp + 0x9f0),false);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  PacketCursor::~PacketCursor((PacketCursor *)this);
  return;
}


/* MagicBeansCursor::~MagicBeansCursor() */

void __thiscall MagicBeansCursor::~MagicBeansCursor(MagicBeansCursor *this)

{
  ~MagicBeansCursor(this);
  AK::FreeHook(this);
  return;
}


/* MagicBeansCursor::cacheOrDestroyCursor() */

void __thiscall MagicBeansCursor::cacheOrDestroyCursor(MagicBeansCursor *this)

{
  char cVar1;
  Projectile *this_00;
  long lVar2;
  
  cVar1 = FUN_03f69308(this[0x23]);
  if (((cVar1 == '\0') || (cVar1 = (**(code **)(*(long *)this + 0x48))(this), cVar1 == '\0')) &&
     (cVar1 = FUN_03f69304(this[0x22]), cVar1 == '\0')) {
    this_00 = (Projectile *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
    lVar2 = Projectile::GetAnimRig(this_00);
    if (lVar2 == 0) {
      Board::SetCachedCursor(*(Board **)(gLawnApp + 0x9f0),(BaseCursor *)this);
      return;
    }
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  BaseCursor::Destroy((BaseCursor *)this);
  return;
}


/* MagicBeansCursor::onTouchEvent(Sexy::Touch const&) */

char __thiscall MagicBeansCursor::onTouchEvent(MagicBeansCursor *this,Touch *param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 4) {
    BaseCursor::Destroy((BaseCursor *)this);
    iVar1 = *(int *)(param_1 + 0x30);
  }
  cVar2 = '\0';
  if (iVar1 == 3) {
    cVar2 = (**(code **)(*(long *)this + 0x48))(this);
    if (cVar2 == '\0') {
      (**(code **)(*(long *)this + 0x88))(this);
      BaseCursor::Destroy((BaseCursor *)this);
      return '\x01';
    }
    Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
    cacheOrDestroyCursor(this);
  }
  return cVar2;
}


/* MagicBeansCursor::IsInsideOriginRect() const */

undefined8 __thiscall MagicBeansCursor::IsInsideOriginRect(MagicBeansCursor *this)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
    lVar2 = FUN_03f69314(uVar3);
    if (((lVar2 != 0) && (lVar2 = FUN_03f697ec(uVar3), lVar2 != 0)) &&
       (cVar1 = FUN_03f69308(this[0x23]), cVar1 != '\0')) {
      return 0;
    }
  }
  uVar3 = BaseCursor::IsInsideOriginRect();
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicBeansCursor::CanUseAtCurrentPosition() */

void __thiscall MagicBeansCursor::CanUseAtCurrentPosition(MagicBeansCursor *this)

{
  int iVar1;
  RtWeakPtrBase *pRVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  Board *pBVar15;
  int local_30;
  int local_2c;
  Point aPStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x80))(&local_30);
  if (-1 < local_30) {
    if ((local_30 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) && -1 < local_2c) &&
       (iVar5 = BoardConstants::NUMBER_OF_ROWS(), local_2c < iVar5)) {
      iVar12 = local_30 + -1;
      iVar8 = local_2c + -1;
      uVar14 = *(undefined8 *)(gLawnApp + 0x9f0);
      pRVar2 = (RtWeakPtrBase *)(this + 0x48);
      iVar5 = local_30 + 1;
      Sexy::Point::Point(aPStack_28,iVar12,iVar8);
      iVar1 = local_2c + 1;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar2);
      iVar6 = Board::GetCanPlantAtReason(uVar14,aPStack_28,aRStack_20,0,0xffffffff);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      uVar14 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::Point::Point(aPStack_28,local_30,iVar8);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar2);
      iVar7 = Board::GetCanPlantAtReason(uVar14,aPStack_28,aRStack_20,0,0xffffffff);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      uVar14 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::Point::Point(aPStack_28,iVar5,iVar8);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar2);
      iVar8 = Board::GetCanPlantAtReason(uVar14,aPStack_28,aRStack_20,0,0xffffffff);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      uVar14 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::Point::Point(aPStack_28,iVar12,local_2c);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar2);
      iVar9 = Board::GetCanPlantAtReason(uVar14,aPStack_28,aRStack_20,0,0xffffffff);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      uVar14 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::Point::Point(aPStack_28,local_30,local_2c);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar2);
      iVar10 = Board::GetCanPlantAtReason(uVar14,aPStack_28,aRStack_20,0,0xffffffff);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      uVar14 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::Point::Point(aPStack_28,iVar5,local_2c);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar2);
      iVar11 = Board::GetCanPlantAtReason(uVar14,aPStack_28,aRStack_20,0,0xffffffff);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      uVar14 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::Point::Point(aPStack_28,iVar12,iVar1);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar2);
      iVar12 = Board::GetCanPlantAtReason(uVar14,aPStack_28,aRStack_20,0,0xffffffff);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      uVar14 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::Point::Point(aPStack_28,local_30,iVar1);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar2);
      iVar13 = Board::GetCanPlantAtReason(uVar14,aPStack_28,aRStack_20,0,0xffffffff);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      uVar14 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::Point::Point(aPStack_28,iVar5,iVar1);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar2);
      iVar5 = Board::GetCanPlantAtReason(uVar14,aPStack_28,aRStack_20,0,0xffffffff);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      bVar3 = 0;
      if (iVar6 == 0x1d || iVar7 == 0x1d) goto LAB_03f69cbc;
      if (iVar8 == 0x1d || iVar9 == 0x1d) {
        bVar3 = 0;
        goto LAB_03f69cbc;
      }
      bVar3 = 0;
      if (iVar10 == 0x1d || iVar11 == 0x1d) goto LAB_03f69cbc;
      if ((iVar5 != 0x1d) && (iVar12 != 0x1d && iVar13 != 0x1d)) {
        pBVar15 = *(Board **)(gLawnApp + 0x9f0);
        Sexy::Point::Point(aPStack_28,local_30,local_2c);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar2);
        bVar3 = Board::CanPlantAt(pBVar15,aPStack_28,aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
        EntityFinder::GetEntitiesAtGridSquare(aRStack_20,1,local_30,local_2c);
        bVar4 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                          ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_20);
        bVar3 = bVar3 | bVar4 ^ 1;
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_20);
        goto LAB_03f69cbc;
      }
    }
  }
  bVar3 = 0;
LAB_03f69cbc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicBeansCursor::tryToUse() */

void __thiscall MagicBeansCursor::tryToUse(MagicBeansCursor *this)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ArtifactMgr *this_00;
  undefined8 uVar13;
  RtWeakPtrBase *pRVar14;
  Board *pBVar15;
  int local_40;
  int local_3c;
  TPoint aTStack_38 [8];
  Point aPStack_30 [16];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [24];
  long local_8;
  
  pRVar14 = (RtWeakPtrBase *)(this + 0x48);
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x80))(&local_40);
  iVar10 = local_40 + -1;
  iVar12 = local_40 + 1;
  iVar6 = local_3c + -1;
  iVar1 = local_3c + 1;
  uVar13 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_30,iVar10,iVar6);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar14);
  iVar4 = Board::GetCanPlantAtReason(uVar13,aPStack_30,aRStack_20,0,0xffffffff);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  uVar13 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_30,local_40,iVar6);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar14);
  iVar5 = Board::GetCanPlantAtReason(uVar13,aPStack_30,aRStack_20,0,0xffffffff);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  uVar13 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_30,iVar12,iVar6);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar14);
  iVar6 = Board::GetCanPlantAtReason(uVar13,aPStack_30,aRStack_20,0,0xffffffff);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  uVar13 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_30,iVar10,local_3c);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar14);
  iVar7 = Board::GetCanPlantAtReason(uVar13,aPStack_30,aRStack_20,0,0xffffffff);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  uVar13 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_30,local_40,local_3c);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar14);
  iVar8 = Board::GetCanPlantAtReason(uVar13,aPStack_30,aRStack_20,0,0xffffffff);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  uVar13 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_30,iVar12,local_3c);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar14);
  iVar9 = Board::GetCanPlantAtReason(uVar13,aPStack_30,aRStack_20,0,0xffffffff);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  uVar13 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_30,iVar10,iVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar14);
  iVar10 = Board::GetCanPlantAtReason(uVar13,aPStack_30,aRStack_20,0,0xffffffff);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  uVar13 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_30,local_40,iVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar14);
  iVar11 = Board::GetCanPlantAtReason(uVar13,aPStack_30,aRStack_20,0,0xffffffff);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  uVar13 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_30,iVar12,iVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar14);
  iVar12 = Board::GetCanPlantAtReason(uVar13,aPStack_30,aRStack_20,0,0xffffffff);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (((((iVar4 == 0x1d) || (iVar5 == 0x1d)) || (iVar6 == 0x1d)) ||
      ((iVar7 == 0x1d || (iVar8 == 0x1d)))) ||
     ((iVar9 == 0x1d || ((iVar10 == 0x1d || iVar11 == 0x1d || (iVar12 == 0x1d)))))) {
    pBVar15 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar14);
    Board::GiveAdvice(pBVar15,local_40,local_3c,aRStack_20,0x21);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
    EntityFinder::GetEntitiesAtGridSquare(aRStack_20,1,local_40,local_3c);
    bVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_20);
    if ((iVar8 == 0) < bVar2) {
      pBVar15 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aPStack_30,pRVar14);
      Board::GiveAdvice(pBVar15,local_40,local_3c,aPStack_30,iVar8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_30);
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
    else {
      this_00 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
      if (this_00 != (ArtifactMgr *)0x0) {
        BaseCursor::GetBoardPosition();
        Board::GetGridBoundingRect();
        cVar3 = Sexy::TRect<int>::Contains((TRect<int> *)aPStack_30,aTStack_38);
        if (cVar3 != '\0') {
          *(int *)(this_00 + 0x18) = local_40;
          *(int *)(this_00 + 0x1c) = local_3c;
          ArtifactMgr::RequestTriggerArtifact(this_00);
        }
      }
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicBeansCursor::shouldInitializeToFreePlanting() const */

void MagicBeansCursor::shouldInitializeToFreePlanting(void)

{
  RtWeakPtr *this;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  long in_x0;
  long lVar5;
  wchar16 *pwVar6;
  SeedPacket *pSVar7;
  RtObject *this_00;
  PVPManager *this_01;
  LineBreakCategory *pLVar8;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  lVar5 = FUN_03f697e0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (lVar5 != 0) goto LAB_03f6a24c;
  pLVar8 = aLStack_18;
  lVar5 = Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  pwVar6 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"FreePlanting");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar6,(wchar16 *)asStack_10,pLVar8,in_x3,in_x4);
  if (((lVar5 == 0) || (cVar1 != '\0')) ||
     (iVar4 = FUN_03f6931c(*(undefined4 *)(lVar5 + 0x19c)), iVar4 != 0)) {
LAB_03f6a2d0:
    uVar3 = 1;
  }
  else {
    this = (RtWeakPtr *)(in_x0 + 0x40);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (bVar2) {
      pSVar7 = (SeedPacket *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar1 = SeedPacket::GetIsPlantTrialForFree(pSVar7);
      if (cVar1 != '\0') goto LAB_03f6a2d0;
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (bVar2) {
      this_00 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      bVar2 = Sexy::RtObject::IsA<SeedPacket_DangerRoomTraining>(this_00);
      if (bVar2) goto LAB_03f6a2d0;
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (bVar2) {
      pSVar7 = (SeedPacket *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar1 = SeedPacket::IsFreePlant(pSVar7);
      if (cVar1 != '\0') goto LAB_03f6a2d0;
    }
    this_01 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    uVar3 = PVPManager::IsInPVPMap(this_01);
  }
  std::string::~string(asStack_10);
  nop();
LAB_03f6a24c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicBeansCursor::MagicBeansCursor(Sexy::Touch const&, Sexy::RtWeakPtr<PlantType const>,
   Sexy::TRect<int>, bool, int) */

void __thiscall
MagicBeansCursor::MagicBeansCursor
          (MagicBeansCursor *this,undefined8 param_1,RtWeakPtr *param_3,TRect *param_4,
          MagicBeansCursor param_5,undefined4 param_6)

{
  MagicBeansCursor MVar1;
  bool bVar2;
  PopAnimRig *pPVar3;
  long lVar4;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  PacketCursor::PacketCursor((PacketCursor *)this,param_1,a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  this_00 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48);
  *(undefined ***)this = &PTR_GetClass_067a1d50;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_00)
  ;
  this[0x50] = (MagicBeansCursor)0x0;
  this[0x51] = (MagicBeansCursor)0x0;
  this[0x52] = (MagicBeansCursor)0x0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x58));
  this[0x50] = (MagicBeansCursor)0x0;
  MVar1 = (MagicBeansCursor)shouldInitializeToFreePlanting();
  this[0x51] = MVar1;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this_00,param_3);
  this[0x52] = param_5;
  *(undefined4 *)(this + 0x54) = param_6;
  BaseCursor::setCursorBoardOrigin((BaseCursor *)this,param_4);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_10,(RtWeakPtrBase *)this_00);
  pPVar3 = (PopAnimRig *)CreateStandalonePlantAnimRig(a_Stack_10,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  (**(code **)(*(long *)pPVar3 + 0x1a0))(pPVar3,0);
  BaseCursor::setAnimRig((BaseCursor *)this,pPVar3);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  bVar2 = std::operator==("cobcannon",(string *)(lVar4 + 8));
  if (bVar2) {
    Board::SetNeedShineKernelpult(*(Board **)(gLawnApp + 0x9f0),true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicBeansCursor::MagicBeansCursor(Sexy::Touch const&, Sexy::RtWeakPtr<SeedPacket>) */

void __thiscall
MagicBeansCursor::MagicBeansCursor(MagicBeansCursor *this,undefined8 param_1,RtWeakPtrBase *param_3)

{
  string *psVar1;
  ResourceInfo *pRVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  undefined4 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_48,param_3);
  PacketCursor::PacketCursor
            ((PacketCursor *)this,param_1,(RtWeakPtr<Sexy::SoundResource> *)&local_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  *(undefined ***)this = &PTR_GetClass_067a1d50;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  this[0x50] = (MagicBeansCursor)0x0;
  this[0x51] = (MagicBeansCursor)0x0;
  this[0x52] = (MagicBeansCursor)0x0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x58));
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string((string *)&local_48,"peashooter");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x48),(RtWeakPtr *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  std::string::~string((string *)&local_48);
  nop();
  std::string::string((string *)&local_48,"POPANIM_EFFECTS_MAGICBEANS_RETICLE");
  GetPAMByName((string *)&local_48);
  std::string::~string((string *)&local_48);
  nop();
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_50);
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar4 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar2,pRVar3);
  std::string::string((string *)&local_48,"beans_lock_recticle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_48,0,aDStack_38);
  std::string::~string((string *)&local_48);
  nop();
  BaseCursor::setAnimRig((BaseCursor *)this,pPVar4);
  Sexy::Insets::Insets((Insets *)&local_48);
  (**(code **)(*(long *)pPVar4 + 0x90))(pPVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_48);
  uVar5 = FUN_03f69320((float)local_48 + (float)local_40 * 0.5);
  *(undefined4 *)(this + 0x58) = uVar5;
  uVar5 = FUN_03f69320((float)local_44 + (float)local_3c * 0.5);
  *(undefined4 *)(this + 0x5c) = uVar5;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicBeansCursor::tryReplaceExistingPlantAt(int, int) */

void __thiscall
MagicBeansCursor::tryReplaceExistingPlantAt(MagicBeansCursor *this,int param_1,int param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  bool bVar2;
  Plant *this_01;
  string *psVar3;
  PlantType *pPVar4;
  long lVar5;
  Plant *pPVar6;
  PlantPeapod *this_02;
  Board *pBVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar7 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  this_01 = (Plant *)Board::GetPlantAt(pBVar7,param_1,param_2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_10,"peapod");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  std::string::~string(asStack_10);
  nop();
  if (this_01 != (Plant *)0x0) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48);
    pPVar4 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    lVar5 = PlantType::GetProps(pPVar4);
    if (*(char *)(lVar5 + 0x248) != '\0') {
      Plant::GetType();
      cVar1 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)asStack_10,(RtWeakPtrBase *)this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      if (cVar1 != '\0') {
        Plant::Heal(this_01);
        goto LAB_03f6aae8;
      }
    }
    pPVar4 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    lVar5 = PlantType::GetProps(pPVar4);
    if (*(char *)(lVar5 + 0x24c) != '\0') {
      Plant::GetType();
      cVar1 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)asStack_10,(RtWeakPtrBase *)this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      if (cVar1 != '\0') {
        if (*(code **)(**(long **)(this_01 + 0xa8) + 0x4c0) != PlantFramework::UpgradePlant) {
          (**(code **)(**(long **)(this_01 + 0xa8) + 0x4c0))();
        }
        goto LAB_03f6aae8;
      }
    }
    cVar1 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)this_00,(RtWeakPtrBase *)aRStack_18);
    if (cVar1 != '\0') {
      Plant::GetType();
      cVar1 = Sexy::RtWeakPtrBase::operator==
                        ((RtWeakPtrBase *)asStack_10,(RtWeakPtrBase *)aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      if (cVar1 != '\0') {
        nop();
        PlantPeapod::Upgrade(this_02);
        goto LAB_03f6aae8;
      }
    }
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    bVar2 = std::operator==("cobcannon",(string *)(lVar5 + 8));
    if (bVar2) {
      Plant::GetType();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      bVar2 = std::operator==("kernelpult",(string *)(lVar5 + 8));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      if (bVar2) {
        Plant::KillPlant(this_01,1,0,0x8000000000);
        pBVar7 = *(Board **)(gLawnApp + 0x9f0);
        *(int *)(pBVar7 + 0x194) = *(int *)(pBVar7 + 0x194) + -1;
      }
      else {
        pBVar7 = *(Board **)(gLawnApp + 0x9f0);
      }
      std::string::string(asStack_10,"");
      pPVar6 = (Plant *)Board::GetPlantAt(pBVar7,param_1 + 1,param_2,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (pPVar6 != (Plant *)0x0) {
        Plant::GetType();
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
        bVar2 = std::operator==("kernelpult",(string *)(lVar5 + 8));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
        if (bVar2) {
          this_01 = (Plant *)0x0;
          Plant::KillPlant(pPVar6,1,0,0x8000000000);
          *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x194) =
               *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x194) + -1;
          goto LAB_03f6aae8;
        }
      }
    }
  }
  this_01 = (Plant *)0x0;
LAB_03f6aae8:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicBeansCursor::tryMakeNewPlantAt(int, int, int) */

void __thiscall
MagicBeansCursor::tryMakeNewPlantAt(MagicBeansCursor *this,int param_1,int param_2,int param_3)

{
  LawnApp *pLVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  string *psVar5;
  PlantImitater *extraout_x0;
  undefined8 uVar6;
  string asStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  cVar2 = LawnApp::IsInModule(gLawnApp,4,___stack_chk_guard,param_3);
  if (cVar2 == '\0') {
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x40));
    if (bVar3) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
      cVar2 = FUN_03f693bc(*(undefined4 *)(lVar4 + 400));
      if (cVar2 != '\0') {
        uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
        psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        std::string::string(asStack_18,"imitater");
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
        uVar6 = Board::AddPlant((Board *)0x0,uVar6,param_1,param_2,
                                (RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10,1,1,param_3,this[0x52],1
                                ,1,0,0,0,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        std::string::~string(asStack_18);
        nop();
        nop();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x48));
        PlantImitater::SetImitatedPlant(extraout_x0,(RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x48));
        PlantImitater::SyncPlantBoost(extraout_x0,0x11,(RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        goto LAB_03f6acd4;
      }
    }
    uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x48));
    uVar6 = Board::AddPlant((Board *)0x0,uVar6,param_1,param_2,aRStack_10,1,1,param_3,this[0x52],1,1
                            ,0,0,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    uVar6 = *(undefined8 *)(pLVar1 + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x48));
    uVar6 = Board::AddPlant((Board *)0x0,uVar6,param_1,param_2,aRStack_10,0,0,0xffffffff,0,1,1,0,0,0
                            ,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
LAB_03f6acd4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicBeansCursor::tryToPlantAt(int, int) */

void __thiscall MagicBeansCursor::tryToPlantAt(MagicBeansCursor *this,int param_1,int param_2)

{
  RtWeakPtr *this_00;
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Plant *this_01;
  RtObject *pRVar7;
  long lVar8;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x50] == (MagicBeansCursor)0x0) {
    iVar4 = 0;
    if (this[0x51] == (MagicBeansCursor)0x0) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x48));
      iVar4 = payForPlant(this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    this_00 = (RtWeakPtr *)(this + 0x40);
    this_01 = (Plant *)tryReplaceExistingPlantAt(this,param_1,param_2);
    if (this_01 == (Plant *)0x0) {
      iVar6 = *(int *)(this + 0x54);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if ((((bVar2) &&
           (pRVar7 = (RtObject *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0)),
           pRVar7 != (RtObject *)0x0)) &&
          ((bVar2 = Sexy::RtObject::IsA<ConveyorSeedBank>(pRVar7), bVar2 ||
           (iVar5 = FUN_03f69318(*(undefined4 *)(pRVar7 + 0x1e8)), iVar5 != -1)))) &&
         (cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar3 != '\0')) {
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        iVar6 = FUN_03f6930c(*(undefined4 *)(lVar8 + 0x1cc));
      }
      this_01 = (Plant *)tryMakeNewPlantAt(this,param_1,param_2,iVar6);
      Plant::PlantReturnSun(this_01,iVar4);
      MessageRouter::Broadcast<Plant*,Plant*>
                ((MessageRouter *)gMessageRouter,Message::PlantPlanted,this_01);
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar2) {
      pRVar7 = (RtObject *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      if ((((pRVar7 != (RtObject *)0x0) && (this_01 != (Plant *)0x0)) &&
          (bVar2 = Sexy::RtObject::IsA<ConveyorSeedBank>(pRVar7), bVar2)) &&
         (cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar3 != '\0')) {
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        iVar4 = FUN_03f69310(*(undefined4 *)(lVar8 + 0x1d0));
        Plant::SetPlantAvatarValue(this_01,iVar4);
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        iVar4 = FUN_03f6930c(*(undefined4 *)(lVar8 + 0x1cc));
        Plant::SetPlantLevelValue(this_01,iVar4);
      }
      puVar1 = gMessageRouter;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this_00);
      MessageRouter::Broadcast<SeedPacket*,Sexy::RtWeakPtr<SeedPacket>>
                ((MessageRouter *)puVar1,Message::SeedPacketPlanted,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      this[0x50] = (MagicBeansCursor)(this_01 != (Plant *)0x0);
    }
    else {
      this[0x50] = (MagicBeansCursor)(this_01 != (Plant *)0x0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

