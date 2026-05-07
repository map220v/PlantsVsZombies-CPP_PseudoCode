// Class: ArtifactEvolutionCursor


/* ArtifactEvolutionCursor::GetPlantType() const */

RtWeakPtr<Sexy::SoundResource> * ArtifactEvolutionCursor::GetPlantType(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x48));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactEvolutionCursor::CanUseAtCurrentPosition() */

void __thiscall ArtifactEvolutionCursor::CanUseAtCurrentPosition(ArtifactEvolutionCursor *this)

{
  int iVar1;
  undefined8 uVar2;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x80))(&local_10);
  if ((((local_10 < 0) || (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) <= local_10)) ||
      (local_c < 0)) || (iVar1 = BoardConstants::NUMBER_OF_ROWS(), iVar1 <= local_c)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactEvolutionCursor::GetCurrentGridPosition() */

void __thiscall ArtifactEvolutionCursor::GetCurrentGridPosition(ArtifactEvolutionCursor *this)

{
  int iVar1;
  int iVar2;
  Point *in_x8;
  float fVar3;
  float fVar4;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BaseCursor::GetBoardPosition();
  BaseCursor::GetBoardPosition();
  fVar4 = (float)local_c;
  if ((*(long *)(gLawnApp + 0x9f0) != 0) && (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0')
     ) {
    fVar3 = (float)Board::calculateRoofOffsetZ((float)local_10);
    fVar4 = fVar4 + fVar3;
  }
  GetPlantType();
  iVar1 = BoardTransforms::PlantingBoardSpaceToGridX
                    ((float)local_10,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  GetPlantType();
  iVar2 = BoardTransforms::PlantingBoardSpaceToGridY
                    (fVar4,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::Point::Point(in_x8,iVar1,iVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactEvolutionCursor::getCursorAnimOffset() const */

float __thiscall ArtifactEvolutionCursor::getCursorAnimOffset(ArtifactEvolutionCursor *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar1;
  PlantType *pPVar2;
  float fVar3;
  float fVar4;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar1 + 0x28));
  fVar4 = *(float *)(lVar1 + 0x94);
  pPVar2 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar1 = PlantType::GetProps(pPVar2);
  fVar3 = *(float *)(lVar1 + 0x9c);
  pPVar2 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PlantType::GetProps(pPVar2);
  return fVar4 + fVar3;
}


/* ArtifactEvolutionCursor::StaticGetClass() */

long * ArtifactEvolutionCursor::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactEvolutionCursor",uVar2,StaticNew);
  return sClass;
}


/* ArtifactEvolutionCursor::GetClass() const */

long * ArtifactEvolutionCursor::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactEvolutionCursor",uVar2,StaticNew);
  return sClass;
}


/* ArtifactEvolutionCursor::~ArtifactEvolutionCursor() */

void __thiscall ArtifactEvolutionCursor::~ArtifactEvolutionCursor(ArtifactEvolutionCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_0698c640;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  PacketCursor::~PacketCursor((PacketCursor *)this);
  return;
}


/* ArtifactEvolutionCursor::~ArtifactEvolutionCursor() */

void __thiscall ArtifactEvolutionCursor::~ArtifactEvolutionCursor(ArtifactEvolutionCursor *this)

{
  ~ArtifactEvolutionCursor(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactEvolutionCursor::ArtifactEvolutionCursor() */

void __thiscall ArtifactEvolutionCursor::ArtifactEvolutionCursor(ArtifactEvolutionCursor *this)

{
  PacketCursor::PacketCursor((PacketCursor *)this);
  *(undefined ***)this = &PTR_GetClass_0698c640;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  return;
}


/* ArtifactEvolutionCursor::StaticNew() */

ArtifactEvolutionCursor * ArtifactEvolutionCursor::StaticNew(void)

{
  ArtifactEvolutionCursor *this;
  
  this = ::operator_new(0x50);
  ArtifactEvolutionCursor(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactEvolutionCursor::tryToUse() */

void __thiscall ArtifactEvolutionCursor::tryToUse(ArtifactEvolutionCursor *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ArtifactMgr *this_00;
  undefined8 uVar12;
  RtWeakPtrBase *pRVar13;
  Board *pBVar14;
  int local_28;
  int local_24;
  Point aPStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  pRVar13 = (RtWeakPtrBase *)(this + 0x48);
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x80))(&local_28);
  iVar9 = local_28 + -1;
  iVar11 = local_28 + 1;
  iVar5 = local_24 + -1;
  iVar1 = local_24 + 1;
  uVar12 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_20,iVar9,iVar5);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar13);
  iVar3 = Board::GetCanPlantAtReason(uVar12,aPStack_20,aRStack_18,0,0xffffffff);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  uVar12 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_20,local_28,iVar5);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar13);
  iVar4 = Board::GetCanPlantAtReason(uVar12,aPStack_20,aRStack_18,0,0xffffffff);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  uVar12 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_20,iVar11,iVar5);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar13);
  iVar5 = Board::GetCanPlantAtReason(uVar12,aPStack_20,aRStack_18,0,0xffffffff);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  uVar12 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_20,iVar9,local_24);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar13);
  iVar6 = Board::GetCanPlantAtReason(uVar12,aPStack_20,aRStack_18,0,0xffffffff);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  uVar12 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_20,local_28,local_24);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar13);
  iVar7 = Board::GetCanPlantAtReason(uVar12,aPStack_20,aRStack_18,0,0xffffffff);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  uVar12 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_20,iVar11,local_24);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar13);
  iVar8 = Board::GetCanPlantAtReason(uVar12,aPStack_20,aRStack_18,0,0xffffffff);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  uVar12 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_20,iVar9,iVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar13);
  iVar9 = Board::GetCanPlantAtReason(uVar12,aPStack_20,aRStack_18,0,0xffffffff);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  uVar12 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_20,local_28,iVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar13);
  iVar10 = Board::GetCanPlantAtReason(uVar12,aPStack_20,aRStack_18,0,0xffffffff);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  uVar12 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_20,iVar11,iVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar13);
  iVar11 = Board::GetCanPlantAtReason(uVar12,aPStack_20,aRStack_18,0,0xffffffff);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if ((((iVar3 == 0x1d) || (iVar4 == 0x1d)) || (iVar5 == 0x1d)) ||
     (((iVar6 == 0x1d || (iVar7 == 0x1d)) ||
      ((iVar8 == 0x1d || ((iVar9 == 0x1d || iVar10 == 0x1d || (iVar11 == 0x1d)))))))) {
    pBVar14 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar13);
    Board::GiveAdvice(pBVar14,local_28,local_24,aRStack_18,0x77);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  else if ((iVar7 == 0x4d) || (iVar7 == 0)) {
    pBVar14 = *(Board **)(gLawnApp + 0x9f0);
    if (((-1 < local_28) && (local_28 < *(int *)(pBVar14 + 0xf8))) && (-1 < local_24)) {
      iVar11 = BoardConstants::NUMBER_OF_ROWS();
      if (local_24 < iVar11) {
        this_00 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
        if (this_00 != (ArtifactMgr *)0x0) {
          BaseCursor::GetBoardPosition();
          Board::GetGridBoundingRect();
          cVar2 = Sexy::TRect<int>::Contains((TRect<int> *)aRStack_18,(TPoint *)aPStack_20);
          if (cVar2 != '\0') {
            *(int *)(this_00 + 0x18) = local_28;
            *(int *)(this_00 + 0x1c) = local_24;
            ArtifactMgr::RequestTriggerArtifact(this_00);
          }
        }
        goto LAB_04c58a10;
      }
      pBVar14 = *(Board **)(gLawnApp + 0x9f0);
    }
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aPStack_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aPStack_20);
    Board::GiveAdvice(pBVar14,local_28,local_24,aRStack_18,0x77);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_20);
  }
  else {
    pBVar14 = *(Board **)(gLawnApp + 0x9f0);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aPStack_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aPStack_20);
    Board::GiveAdvice(pBVar14,local_28,local_24,aRStack_18,0x77);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_20);
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
LAB_04c58a10:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactEvolutionCursor::cacheOrDestroyCursor() */

void __thiscall ArtifactEvolutionCursor::cacheOrDestroyCursor(ArtifactEvolutionCursor *this)

{
  char cVar1;
  Projectile *this_00;
  long lVar2;
  
  cVar1 = FUN_04c58354(this[0x23]);
  if (((cVar1 == '\0') || (cVar1 = (**(code **)(*(long *)this + 0x48))(this), cVar1 == '\0')) &&
     (cVar1 = FUN_04c58350(this[0x22]), cVar1 == '\0')) {
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


/* ArtifactEvolutionCursor::onTouchEvent(Sexy::Touch const&) */

char __thiscall ArtifactEvolutionCursor::onTouchEvent(ArtifactEvolutionCursor *this,Touch *param_1)

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


/* ArtifactEvolutionCursor::IsInsideOriginRect() const */

undefined8 __thiscall ArtifactEvolutionCursor::IsInsideOriginRect(ArtifactEvolutionCursor *this)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
    lVar2 = FUN_04c58358(uVar3);
    if (((lVar2 != 0) && (lVar2 = FUN_04c58e48(uVar3), lVar2 != 0)) &&
       (cVar1 = FUN_04c58354(this[0x23]), cVar1 != '\0')) {
      return 0;
    }
  }
  uVar3 = BaseCursor::IsInsideOriginRect();
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactEvolutionCursor::ArtifactEvolutionCursor(Sexy::Touch const&, Sexy::RtWeakPtr<SeedPacket>)
    */

void __thiscall
ArtifactEvolutionCursor::ArtifactEvolutionCursor
          (ArtifactEvolutionCursor *this,undefined8 param_1,RtWeakPtrBase *param_3)

{
  string *psVar1;
  ResourceInfo *pRVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [16];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,param_3);
  PacketCursor::PacketCursor((PacketCursor *)this,param_1,aRStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  *(undefined ***)this = &PTR_GetClass_0698c640;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string((string *)aRStack_48,"peashooter");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x48),(RtWeakPtr *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  std::string::~string((string *)aRStack_48);
  nop();
  std::string::string((string *)aRStack_48,"POPANIM_EFFECTS_ARTIFACT_STANDARD_RETICLE");
  GetPAMByName((string *)aRStack_48);
  std::string::~string((string *)aRStack_48);
  nop();
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_50);
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar4 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar2,pRVar3);
  std::string::string((string *)aRStack_48,"beans_lock_recticle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar4,aRStack_48,0,aDStack_38);
  std::string::~string((string *)aRStack_48);
  nop();
  BaseCursor::setAnimRig((BaseCursor *)this,pPVar4);
  Sexy::Insets::Insets((Insets *)aRStack_48);
  (**(code **)(*(long *)pPVar4 + 0x90))(pPVar4,aRStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

