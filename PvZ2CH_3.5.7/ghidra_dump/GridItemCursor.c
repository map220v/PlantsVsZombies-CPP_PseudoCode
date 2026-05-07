// Class: GridItemCursor


/* GridItemCursor::getCursorAnimOffset() const */

undefined1  [16] __thiscall GridItemCursor::getCursorAnimOffset(GridItemCursor *this)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *(ulong *)(this + 0x54) & 0xffffffff;
  return auVar1;
}


/* GridItemCursor::StaticGetClass() */

long * GridItemCursor::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCursor",uVar2,StaticNew);
  return sClass;
}


/* GridItemCursor::GetClass() const */

long * GridItemCursor::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCursor",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCursor::GetCurrentGridPosition() */

void __thiscall GridItemCursor::GetCurrentGridPosition(GridItemCursor *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Point *in_x8;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  BaseCursor::GetBoardPosition();
  BaseCursor::GetBoardPosition();
  iVar2 = BoardTransforms::BoardSpaceToGridX((float)local_10);
  iVar3 = BoardTransforms::BoardSpaceToGridY((float)local_c);
  Sexy::Point::Point(in_x8,iVar2,iVar3);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCursor::GridItemCursor() */

void __thiscall GridItemCursor::GridItemCursor(GridItemCursor *this)

{
  PacketCursor::PacketCursor((PacketCursor *)this);
  *(undefined ***)this = &PTR_GetClass_068d99b0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  this[0x50] = (GridItemCursor)0x0;
  this[0x51] = (GridItemCursor)0x0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x54));
  return;
}


/* GridItemCursor::StaticNew() */

GridItemCursor * GridItemCursor::StaticNew(void)

{
  GridItemCursor *this;
  
  this = ::operator_new(0x60);
  GridItemCursor(this);
  return this;
}


/* GridItemCursor::~GridItemCursor() */

void __thiscall GridItemCursor::~GridItemCursor(GridItemCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_068d99b0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  PacketCursor::~PacketCursor((PacketCursor *)this);
  return;
}


/* GridItemCursor::~GridItemCursor() */

void __thiscall GridItemCursor::~GridItemCursor(GridItemCursor *this)

{
  ~GridItemCursor(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCursor::CanUseAtCurrentPosition() */

void __thiscall GridItemCursor::CanUseAtCurrentPosition(GridItemCursor *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  Board *this_00;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x80))(&local_10);
  iVar1 = local_c;
  if ((((local_10 < 0) || (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) <= local_10)) ||
      (local_c < 0)) || (iVar3 = BoardConstants::NUMBER_OF_ROWS(), iVar3 <= iVar1)) {
    bVar2 = false;
  }
  else {
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48))
    ;
    lVar4 = Board::GetGridItemAt(this_00,(string *)(lVar4 + 8),local_10,local_c);
    bVar2 = lVar4 == 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* GridItemCursor::canAffordPlant(Sexy::RtWeakPtr<GridItemType const>) const */

undefined8 __thiscall
GridItemCursor::canAffordPlant(GridItemCursor *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (this[0x51] == (GridItemCursor)0x0) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    bVar1 = std::operator==((string *)(lVar3 + 8),"BesiegeBox");
    if (bVar1) {
      cVar2 = Board::CanTakeSunMoney(*(Board **)(gLawnApp + 0x9f0),100);
      if (cVar2 == '\0') {
        return 0;
      }
      uVar4 = Board::TakeSunMoney(*(Board **)(gLawnApp + 0x9f0),100,false,false);
      return uVar4;
    }
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCursor::CanPlantBesiegeBox(int, int) const */

void __thiscall GridItemCursor::CanPlantBesiegeBox(GridItemCursor *this,int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  LevelModuleManager *this_00;
  BesiegeModule *this_01;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LevelModuleManager *)FUN_04793bbc(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_01 = LevelModuleManager::GetModuleByClass<BesiegeModule>(this_00);
  if (this_01 != (BesiegeModule *)0x0) {
    Sexy::Point::Point(aPStack_10,param_1,param_2);
    cVar1 = BesiegeModule::IsStartPoint(this_01,aPStack_10);
    if (cVar1 == '\0') {
      uVar2 = BesiegeModule::TestIfCanPlantBesiegeBoxOn(this_01,param_1,param_2);
      goto LAB_04793fa0;
    }
  }
  uVar2 = 0;
LAB_04793fa0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* GridItemCursor::IsRightTutorialBesiegeBox(int, int) const */

bool __thiscall
GridItemCursor::IsRightTutorialBesiegeBox(GridItemCursor *this,int param_1,int param_2)

{
  char cVar1;
  LevelModuleManager *this_00;
  BesiegeModule *this_01;
  
  this_00 = (LevelModuleManager *)FUN_04793bbc(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_01 = LevelModuleManager::GetModuleByClass<BesiegeModule>(this_00);
  if (this_01 != (BesiegeModule *)0x0) {
    cVar1 = BesiegeModule::IsInTutorial(this_01);
    return cVar1 == '\0' || param_1 == 2 && param_2 == 4;
  }
  return false;
}


/* GridItemCursor::onDraw(Sexy::Graphics*) */

void __thiscall GridItemCursor::onDraw(GridItemCursor *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  Image *pIVar4;
  
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  bVar1 = std::operator==((string *)(lVar3 + 8),"BesiegeBox");
  if (bVar1) {
    pIVar4 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                ((CachedResourcePtr<Sexy::Image> *)&DAT_06b25248);
    if (pIVar4 != (Image *)0x0) {
      iVar2 = FUN_04793bc4();
      Sexy::Graphics::DrawImage
                (param_1,pIVar4,iVar2,iVar2,
                 (int)((float)*(int *)(pIVar4 + 0x38) * *(float *)(param_1 + 0x18)),
                 (int)((float)*(int *)(pIVar4 + 0x3c) * *(float *)(param_1 + 0x1c)));
      return;
    }
  }
  return;
}


/* GridItemCursor::IsInsideOriginRect() const */

undefined8 __thiscall GridItemCursor::IsInsideOriginRect(GridItemCursor *this)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
    lVar2 = FUN_04793bbc(uVar3);
    if (((lVar2 != 0) && (lVar2 = FUN_047940ec(uVar3), lVar2 != 0)) &&
       (cVar1 = FUN_04793bb8(this[0x23]), cVar1 != '\0')) {
      return 0;
    }
  }
  uVar3 = BaseCursor::IsInsideOriginRect();
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCursor::shouldInitializeToFreePlanting() const */

void GridItemCursor::shouldInitializeToFreePlanting(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  wchar16 *pwVar4;
  LineBreakCategory *pLVar5;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pLVar5 = aLStack_18;
  local_8 = ___stack_chk_guard;
  lVar3 = Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"FreePlanting");
  bVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar4,(wchar16 *)asStack_10,pLVar5,in_x3,in_x4);
  bVar1 = bVar1 | lVar3 == 0;
  if (bVar1 == 0) {
    iVar2 = FUN_04793bc0(*(undefined4 *)(lVar3 + 0x19c));
    bVar1 = iVar2 != 0;
  }
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCursor::GridItemCursor(Sexy::Touch const&, Sexy::RtWeakPtr<SeedPacket>) */

void __thiscall
GridItemCursor::GridItemCursor
          (GridItemCursor *this,undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  LawnApp *this_00;
  GridItemCursor GVar1;
  bool bVar2;
  long lVar3;
  EffectObjectType *this_01;
  RtObject *this_02;
  GridItemAnimationProps *pGVar4;
  char *pcVar5;
  RtClass *pRVar6;
  ResourceInfo *pRVar7;
  PopAnimRig *this_03;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_04;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)param_3);
  PacketCursor::PacketCursor((PacketCursor *)this,param_1,aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  this_04 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48);
  *(undefined ***)this = &PTR_GetClass_068d99b0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_04)
  ;
  this[0x50] = (GridItemCursor)0x0;
  this[0x51] = (GridItemCursor)0x0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x54));
  this[0x50] = (GridItemCursor)0x0;
  GVar1 = (GridItemCursor)shouldInitializeToFreePlanting();
  this[0x51] = GVar1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  PlantWarsLevelSelectUI::GetLevelDefinitionPtr();
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this_04,(RtWeakPtr *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_04);
  if (bVar2) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_04);
    bVar2 = std::operator==((string *)(lVar3 + 8),"FrozenChillyPepper");
    if (!bVar2) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_04);
      bVar2 = std::operator==((string *)(lVar3 + 8),"FrozenIcebloom");
      if (!bVar2) goto LAB_04794304;
    }
    this_00 = gLawnApp;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_04);
    LawnApp::LoadGroups(this_00,(vector *)(lVar3 + 0x18));
    this_01 = (EffectObjectType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_04);
    this_02 = (RtObject *)EffectObjectType::GetProps(this_01);
    if ((this_02 != (RtObject *)0x0) &&
       (bVar2 = Sexy::RtObject::IsA<GridItemAnimationProps>(this_02), bVar2)) {
      pGVar4 = Sexy::RtObject::Cast<GridItemAnimationProps>(this_02);
      pcVar5 = (char *)FUN_0547429c(pGVar4 + 0xa0);
      pRVar6 = (RtClass *)Sexy::RtClass::StaticGetClassNamed(pcVar5);
      GetPAMByName((string *)(pGVar4 + 0x98));
      pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_40);
      this_03 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar7,pRVar6);
      *(undefined8 *)(this + 0x54) = *(undefined8 *)(pGVar4 + 0xa8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      if (this_03 != (PopAnimRig *)0x0) {
        std::string::string((string *)aRStack_40,"idle");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
        PopAnimRig::PlayAndContinue(this_03,aRStack_40,0,aDStack_38);
        std::string::~string((string *)aRStack_40);
        nop();
        std::string::string((string *)aRStack_40,"custom_01");
        PopAnimRig::SetLayerVisibility(this_03,(string *)aRStack_40,false);
        std::string::~string((string *)aRStack_40);
        nop();
        BaseCursor::setAnimRig((BaseCursor *)this,this_03);
      }
    }
  }
LAB_04794304:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCursor::GridItemCursor(Sexy::Touch const&, Sexy::RtWeakPtr<GridItemType const>,
   Sexy::TRect<int>) */

void __thiscall
GridItemCursor::GridItemCursor
          (GridItemCursor *this,undefined8 param_1,RtWeakPtr *param_3,TRect *param_4)

{
  GridItemCursor GVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  PacketCursor::PacketCursor((PacketCursor *)this,param_1,a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  *(undefined ***)this = &PTR_GetClass_068d99b0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  this[0x50] = (GridItemCursor)0x0;
  this[0x51] = (GridItemCursor)0x0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x54));
  this[0x50] = (GridItemCursor)0x0;
  GVar1 = (GridItemCursor)shouldInitializeToFreePlanting();
  this[0x51] = GVar1;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x48),param_3);
  BaseCursor::setCursorBoardOrigin((BaseCursor *)this,param_4);
  DComponent::setEnabled((DComponent *)this,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCursor::tryToUse() */

void __thiscall GridItemCursor::tryToUse(GridItemCursor *this)

{
  RtMixedPtrBase *this_00;
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  GridItem *pGVar6;
  undefined8 uVar7;
  LawnApp *pLVar8;
  Board *pBVar9;
  int local_20;
  int local_1c;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x80))(&local_20);
  cVar2 = BoardTransforms::IsGridCoordinateOnBoard(local_20,local_1c);
  pLVar8 = gLawnApp;
  if (cVar2 == '\0') {
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_drop");
    goto LAB_0479466c;
  }
  cVar2 = LawnApp::IsInModule(gLawnApp,4);
  if (cVar2 == '\0') {
LAB_04794600:
    this_00 = (RtMixedPtrBase *)(this + 0x40);
    Board::ClearAdviceImmediately(*(Board **)(pLVar8 + 0x9f0));
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar2 != '\0') {
      Board::ClearLowPriorityAdvice(*(Board **)(gLawnApp + 0x9f0));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x48));
      cVar2 = canAffordPlant(this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if (cVar2 != '\0') {
        pBVar9 = *(Board **)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x48));
        pGVar6 = (GridItem *)Board::AddGridItem(pBVar9,aRStack_10,local_20,local_1c,1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        MessageRouter::Broadcast<GridItem*,GridItem*>
                  ((MessageRouter *)gMessageRouter,Message::GridItemPlanted,pGVar6);
      }
    }
    this[0x50] = (GridItemCursor)0x1;
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
    puVar1 = gMessageRouter;
    if (bVar3) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this_00);
      MessageRouter::Broadcast<SeedPacket*,Sexy::RtWeakPtr<SeedPacket>>
                ((MessageRouter *)puVar1,Message::SeedPacketPlanted,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
  }
  else {
    pBVar9 = *(Board **)(pLVar8 + 0x9f0);
    std::string::string((string *)aRStack_10,"BesiegeBox");
    lVar4 = Board::GetGridItemAt(pBVar9,(string *)aRStack_10,local_20,local_1c);
    std::string::~string((string *)aRStack_10);
    nop();
    if (lVar4 == 0) {
      lVar4 = Board::GetZombieAt(*(Board **)(gLawnApp + 0x9f0),local_20,local_1c);
      if (lVar4 == 0) {
        cVar2 = CanPlantBesiegeBox(this,local_20,local_1c);
        if (cVar2 == '\0') {
          pBVar9 = *(Board **)(gLawnApp + 0x9f0);
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    (a_Stack_18);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)a_Stack_18);
          uVar7 = 0x45;
        }
        else {
          cVar2 = IsRightTutorialBesiegeBox(this,local_20,local_1c);
          pLVar8 = gLawnApp;
          if (cVar2 != '\0') goto LAB_04794600;
          pBVar9 = *(Board **)(gLawnApp + 0x9f0);
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    (a_Stack_18);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)a_Stack_18);
          uVar7 = 0x47;
        }
      }
      else {
        pBVar9 = *(Board **)(gLawnApp + 0x9f0);
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (a_Stack_18);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)a_Stack_18);
        uVar7 = 0x46;
      }
    }
    else {
      pBVar9 = *(Board **)(gLawnApp + 0x9f0);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_18);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)a_Stack_18);
      uVar7 = 0x44;
    }
    Board::GiveAdvice(pBVar9,local_20,local_1c,(string *)aRStack_10,uVar7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
  }
LAB_0479466c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

