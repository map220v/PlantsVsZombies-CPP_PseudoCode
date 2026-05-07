// Class: HeroPlantCursor


/* HeroPlantCursor::StaticGetClass() */

long * HeroPlantCursor::StaticGetClass(void)

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
  uVar2 = BaseCursor::StaticGetClass();
  (*pcVar3)(plVar1,"HeroPlantCursor",uVar2,StaticNew);
  return sClass;
}


/* HeroPlantCursor::GetClass() const */

long * HeroPlantCursor::GetClass(void)

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
  uVar2 = BaseCursor::StaticGetClass();
  (*pcVar3)(plVar1,"HeroPlantCursor",uVar2,StaticNew);
  return sClass;
}


/* HeroPlantCursor::HeroPlantCursor() */

void __thiscall HeroPlantCursor::HeroPlantCursor(HeroPlantCursor *this)

{
  BaseCursor::BaseCursor((BaseCursor *)this);
  *(undefined ***)this = &PTR_GetClass_0682c4f0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  return;
}


/* HeroPlantCursor::StaticNew() */

HeroPlantCursor * HeroPlantCursor::StaticNew(void)

{
  HeroPlantCursor *this;
  
  this = ::operator_new(0x48);
  HeroPlantCursor(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantCursor::HeroPlantCursor(Sexy::Touch const&, Sexy::TRect<int> const&,
   Sexy::RtWeakPtr<PlantType const>) */

void __thiscall
HeroPlantCursor::HeroPlantCursor
          (HeroPlantCursor *this,Touch *param_1,Insets *param_2,RtWeakPtr *param_4)

{
  PlantAnimRig *this_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_01;
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BaseCursor::BaseCursor((BaseCursor *)this,param_1);
  this_01 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40);
  *(undefined ***)this = &PTR_GetClass_0682c4f0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_01)
  ;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this_01,param_4);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)this_01);
  this_00 = (PlantAnimRig *)
            CreateStandalonePlantAnimRig((RtWeakPtr<Sexy::SoundResource> *)&local_18,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  PlantAnimRig::HideAllAvatarLayers(this_00);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,0);
  BaseCursor::setAnimRig((BaseCursor *)this,(PopAnimRig *)this_00);
  Sexy::Insets::Insets((Insets *)&local_18,param_2);
  Board::TranslateScreenRectToBoardRect(*(Board **)(gLawnApp + 0x9f0),(TRect *)&local_18);
  local_18 = local_18 - *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48);
  local_14 = local_14 - *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c);
  BaseCursor::setCursorBoardOrigin((BaseCursor *)this,(TRect *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeroPlantCursor::~HeroPlantCursor() */

void __thiscall HeroPlantCursor::~HeroPlantCursor(HeroPlantCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_0682c4f0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  BaseCursor::~BaseCursor((BaseCursor *)this);
  return;
}


/* HeroPlantCursor::~HeroPlantCursor() */

void __thiscall HeroPlantCursor::~HeroPlantCursor(HeroPlantCursor *this)

{
  ~HeroPlantCursor(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantCursor::GetCursorGridPosition() */

void HeroPlantCursor::GetCursorGridPosition(void)

{
  int iVar1;
  int iVar2;
  long in_x0;
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
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)(in_x0 + 0x40));
  iVar1 = BoardTransforms::PlantingBoardSpaceToGridX
                    ((float)local_10,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)(in_x0 + 0x40));
  iVar2 = BoardTransforms::PlantingBoardSpaceToGridY
                    (fVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::Point::Point(in_x8,iVar1,iVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeroPlantCursor::getCursorAnimOffset() const */

float __thiscall HeroPlantCursor::getCursorAnimOffset(HeroPlantCursor *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar1;
  PlantType *pPVar2;
  float fVar3;
  float fVar4;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantCursor::tryToUse() */

void __thiscall HeroPlantCursor::tryToUse(HeroPlantCursor *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  BoardHeroPlantManager *pBVar5;
  Board *pBVar6;
  undefined8 uVar7;
  int local_30;
  int local_2c;
  TPoint aTStack_28 [8];
  Point aPStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetCursorGridPosition();
  lVar4 = Board::GetPlantGroupAt(*(Point **)(gLawnApp + 0x9f0));
  if (lVar4 != 0) {
    PlantGroup::GetPlantAtLayer(aRStack_18,lVar4,0);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    if (!bVar1) goto LAB_042bcb88;
LAB_042bcb0c:
    pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(aRStack_18,L"[ADVICE_ABOUT_PLANT_ARMORFLAME_ON_VINE]",aPStack_20);
    Board::DisplayAdvice(pBVar6,aRStack_18,7,2);
    FUN_05476c50(aRStack_18);
    nop();
    goto LAB_042bcb50;
  }
LAB_042bcb88:
  lVar4 = Board::GetPlantGroupAt(*(Board **)(gLawnApp + 0x9f0),local_30 + 1,local_2c);
  if (lVar4 != 0) {
    PlantGroup::GetPlantAtLayer(aRStack_18,lVar4,0);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    if (bVar1) goto LAB_042bcb0c;
  }
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40);
  uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_20,local_30,local_2c);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)this_00);
  iVar3 = Board::GetCanPlantAtReason(uVar7,aPStack_20,aRStack_18,0,0xffffffff);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (iVar3 == 0) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    bVar1 = std::operator==((string *)(lVar4 + 8),"armorflame");
    if (bVar1) {
      uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::Point::Point(aPStack_20,local_30 + 1,local_2c);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)this_00);
      iVar3 = Board::GetCanPlantAtReason(uVar7,aPStack_20,aRStack_18,0,0xffffffff);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      if (iVar3 != 0) goto LAB_042bcc24;
    }
    Board::ClearLowPriorityAdvice(*(Board **)(gLawnApp + 0x9f0));
    pBVar5 = (BoardHeroPlantManager *)Board::GetBoardHeroPlantManager(*(Board **)(gLawnApp + 0x9f0))
    ;
    iVar3 = BoardHeroPlantManager::GetHeroPlantSunCost(pBVar5);
    cVar2 = Board::CanTakeSunMoney(*(Board **)(gLawnApp + 0x9f0),iVar3);
    if (cVar2 != '\0') {
      Board::TakeSunMoney(*(Board **)(gLawnApp + 0x9f0),iVar3,false,false);
      Sexy::LazySingleton<HeroPlantMgr>::GetInstancePtr();
      BaseCursor::GetBoardPosition();
      Board::GetGridBoundingRect();
      cVar2 = Sexy::TRect<int>::Contains((TRect<int> *)aRStack_18,aTStack_28);
      if (cVar2 != '\0') {
        uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)this_00);
        Board::AddPlant((Board *)0x0,uVar7,local_30,local_2c,aRStack_18,1,1,0xffffffff,0,1,1,0,0,0,0
                       );
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        pBVar5 = (BoardHeroPlantManager *)
                 Board::GetBoardHeroPlantManager(*(Board **)(gLawnApp + 0x9f0));
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aPStack_20);
        BoardHeroPlantManager::ActivateHeroPlant(pBVar5,aRStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_20)
        ;
      }
    }
  }
  else {
LAB_042bcc24:
    pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(aRStack_18,L"[ADVICE_ABOUT_PLANT_ARMORFLAME]",aPStack_20);
    Board::DisplayAdvice(pBVar6,aRStack_18,7,2);
    FUN_05476c50(aRStack_18);
    nop();
  }
LAB_042bcb50:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeroPlantCursor::cacheOrDestroyCursor() */

void __thiscall HeroPlantCursor::cacheOrDestroyCursor(HeroPlantCursor *this)

{
  char cVar1;
  Projectile *this_00;
  long lVar2;
  
  cVar1 = FUN_042bc668(this[0x23]);
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)this + 0x48))(this), cVar1 != '\0')) {
    BaseCursor::Destroy((BaseCursor *)this);
    return;
  }
  cVar1 = FUN_042bc664(this[0x22]);
  if (cVar1 == '\0') {
    this_00 = (Projectile *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
    lVar2 = Projectile::GetAnimRig(this_00);
    if (lVar2 == 0) {
      Board::SetCachedCursor(*(Board **)(gLawnApp + 0x9f0),(BaseCursor *)this);
      return;
    }
  }
  BaseCursor::Destroy((BaseCursor *)this);
  return;
}


/* HeroPlantCursor::onTouchEvent(Sexy::Touch const&) */

char __thiscall HeroPlantCursor::onTouchEvent(HeroPlantCursor *this,Touch *param_1)

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
      tryToUse(this);
      BaseCursor::Destroy((BaseCursor *)this);
      return '\x01';
    }
    cacheOrDestroyCursor(this);
  }
  return cVar2;
}


/* HeroPlantCursor::IsInsideOriginRect() const */

undefined8 __thiscall HeroPlantCursor::IsInsideOriginRect(HeroPlantCursor *this)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
    lVar2 = FUN_042bc66c(uVar3);
    if (((lVar2 != 0) && (lVar2 = FUN_042bcf44(uVar3), lVar2 != 0)) &&
       (cVar1 = FUN_042bc668(this[0x23]), cVar1 != '\0')) {
      return 0;
    }
  }
  uVar3 = BaseCursor::IsInsideOriginRect();
  return uVar3;
}

