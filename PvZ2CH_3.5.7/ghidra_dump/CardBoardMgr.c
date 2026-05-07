// Class: CardBoardMgr


/* CardBoardMgr::gatherBoardInfo(Sexy::TRect<int>&) */

void __thiscall CardBoardMgr::gatherBoardInfo(CardBoardMgr *this,TRect *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = *(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x50);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x54);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}


/* CardBoardMgr::ReachMaxHandCards() */

bool __thiscall CardBoardMgr::ReachMaxHandCards(CardBoardMgr *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_03575228(*(undefined4 *)(this + 8));
  iVar2 = Sexy::BaseTaskResource::GetType((BaseTaskResource *)this);
  return iVar2 <= iVar1;
}


/* CardBoardMgr::HasEmptySun() */

bool __thiscall CardBoardMgr::HasEmptySun(CardBoardMgr *this)

{
  int iVar1;
  
  iVar1 = FUN_0357522c(*(undefined4 *)(this + 0x10));
  return iVar1 == 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardBoardMgr::gatherCardInfo(CardUIInfo&, int) */

void __thiscall CardBoardMgr::gatherCardInfo(CardBoardMgr *this,CardUIInfo *param_1,int param_2)

{
  size_t __n;
  string asStack_10 [8];
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  __n = ___stack_chk_guard;
  Sexy::StrFormat("IMAGE_UI_CARD_GAME_CARDS_%d",asStack_10,(ulong)(param_2 + 1));
  FUN_05474278(param_1,asStack_10);
  std::string::~string(asStack_10);
  thunk_FUN_05475e00(param_1 + 0x28,param_1);
  std::string::append((string *)(param_1 + 0x30),"IMAGE_UI_CARD_GAME_CARD_CURSOR",__n);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardBoardMgr::CalcOffsetXByCenterPt(int, float) */

float __thiscall CardBoardMgr::CalcOffsetXByCenterPt(CardBoardMgr *this,int param_1,float param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 8);
  if ((uVar1 & 1) != 0) {
    return ((float)((int)uVar1 / 2 - param_1) + 0.5) * param_2;
  }
  return (float)((int)uVar1 / 2 - param_1) * param_2;
}


/* CardBoardMgr::CalcInitialOffsetXByCenterPt(int, float) */

float __thiscall
CardBoardMgr::CalcInitialOffsetXByCenterPt(CardBoardMgr *this,int param_1,float param_2)

{
  uint uVar1;
  
  uVar1 = Sexy::BaseTaskResource::GetType((BaseTaskResource *)this);
  if ((uVar1 & 1) != 0) {
    return ((float)((int)uVar1 / 2 - param_1) + 0.5) * param_2;
  }
  return (float)((int)uVar1 / 2 - param_1) * param_2;
}


/* CardBoardMgr::CalcRepositionDelta(Sexy::FPoint const&, Card*, float, float) */

float __thiscall
CardBoardMgr::CalcRepositionDelta
          (CardBoardMgr *this,FPoint *param_1,Card *param_2,float param_3,float param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)(**(code **)(*(long *)param_2 + 0x1c0))(param_2);
  fVar4 = *(float *)param_1;
  iVar1 = FUN_03575234(*(undefined4 *)(param_2 + 0x2b0));
  fVar3 = (float)CalcOffsetXByCenterPt(this,iVar1,param_3);
  return (fVar4 - (fVar2 - param_4)) - fVar3;
}


/* CardBoardMgr::OnAppLostFocus() */

void CardBoardMgr::OnAppLostFocus(void)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  
  cVar1 = CardGameUtils::IsPlayingCardGame();
  if ((cVar1 != '\0') && (lVar2 = CardGameBoard::get(), lVar2 != 0)) {
    plVar3 = (long *)CardGameBoard::get();
    (**(code **)(*plVar3 + 0x1d8))();
    return;
  }
  return;
}


/* CardBoardMgr::RemoveBoard() */

void CardBoardMgr::RemoveBoard(void)

{
  long lVar1;
  CardGameBoard *this;
  
  lVar1 = CardGameBoard::get();
  if (lVar1 != 0) {
    this = (CardGameBoard *)CardGameBoard::get();
    CardGameBoard::Remove(this);
    return;
  }
  return;
}


/* CardBoardMgr::ConvertBoardPositionIntoBoardGrid(float, float) */

void __thiscall
CardBoardMgr::ConvertBoardPositionIntoBoardGrid(CardBoardMgr *this,float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  Point *in_x8;
  
  iVar1 = BoardTransforms::BoardSpaceToGridX(param_1);
  iVar2 = BoardTransforms::BoardSpaceToGridY(param_2);
  Sexy::Point::Point(in_x8,iVar1,iVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardBoardMgr::ConvertToBoardTouch(Sexy::Touch&) */

void __thiscall CardBoardMgr::ConvertToBoardTouch(CardBoardMgr *this,Touch *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  int local_10;
  int local_c;
  
  lVar2 = ___stack_chk_guard;
  Board::GetBoardBaseOffset();
  plVar1 = gLawnApp;
  pcVar5 = *(code **)(*gLawnApp + 0x360);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - local_10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - local_c;
  cVar3 = (*pcVar5)(plVar1);
  iVar4 = 0;
  if (cVar3 != '\0') {
    iVar4 = (**(code **)(*gLawnApp + 0x368))(gLawnApp);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar4;
  if (lVar2 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardBoardMgr::ConvertTouchPositionIntoBoardPosition(Sexy::Touch const&) */

void CardBoardMgr::ConvertTouchPositionIntoBoardPosition(Touch *param_1)

{
  int iVar1;
  int iVar2;
  Touch *in_x1;
  DVec2 *in_x8;
  Touch aTStack_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  Point aPStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Touch::Touch(aTStack_40,in_x1);
  ConvertToBoardTouch((CardBoardMgr *)param_1,aTStack_40);
  Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
  Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),aPStack_28);
  iVar1 = FUN_035791bc(local_30);
  iVar2 = FUN_035791bc(local_2c);
  DVec2::DVec2(in_x8,(float)iVar1,(float)iVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardBoardMgr::ConvertTouchPositionIntoBoardGrid(Sexy::Touch const&) */

void __thiscall CardBoardMgr::ConvertTouchPositionIntoBoardGrid(CardBoardMgr *this,Touch *param_1)

{
  long lVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  ConvertTouchPositionIntoBoardPosition((Touch *)this);
  ConvertBoardPositionIntoBoardGrid(this,local_10,local_c);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardBoardMgr::TryAddPlantAt(Sexy::RtWeakPtr<PlantType const>, int, int, int) */

void __thiscall
CardBoardMgr::TryAddPlantAt
          (undefined8 param_1,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar1 = *(undefined8 *)(gLawnApp + 0x9f0);
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  Board::AddPlant((Board *)0x0,uVar1,param_3,param_4,aRStack_10,1,1,param_5,0,1,1,0,0,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardBoardMgr::CreateCardObject(int) */

void CardBoardMgr::CreateCardObject(int param_1)

{
  CardSystemManager *pCVar1;
  
  pCVar1 = Board::GetGameSubSystem<CardSystemManager>(*(Board **)(gLawnApp + 0x9f0));
  CardSystemManager::CreateCardByID((int)pCVar1);
  return;
}


/* CardBoardMgr::GetBoardScale() */

undefined1  [16] CardBoardMgr::GetBoardScale(void)

{
  LevelModuleManager *this;
  CardGameBoardModule *this_00;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  this = (LevelModuleManager *)FUN_0357523c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  this_00 = LevelModuleManager::GetModuleByClass<CardGameBoardModule>(this);
  if (this_00 != (CardGameBoardModule *)0x0) {
    LawnBrainModule::GetEntryAnimDuration((LawnBrainModule *)this_00);
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0x3f800000);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardBoardMgr::CardBoardMgr() */

void __thiscall CardBoardMgr::CardBoardMgr(CardBoardMgr *this)

{
  undefined *this_00;
  SecretGachaMgr *this_01;
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<CardBoardMgr>::LazySingleton((LazySingleton<CardBoardMgr> *)this);
  *(undefined ***)this = &PTR__CardBoardMgr_0665bce0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  Set8BytesTo0(this + 0x30);
  this_01 = (SecretGachaMgr *)
            std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                      ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                       (this + 0x38));
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  SecretGachaMgr::GetScreenType(this_01);
  FUN_05474278(this + 0x30,asStack_50);
  std::string::~string(asStack_50);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnAppLostFocus);
  Sexy::Delegate0::Delegate0<CardBoardMgr,void(CardBoardMgr::*)()>(aDStack_38,asStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::AppLostFocus,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardBoardMgr::VerifyCardDestination(Sexy::RtWeakPtr<CardObject>, CardDestination) */

void __thiscall
CardBoardMgr::VerifyCardDestination(undefined8 param_1,RtWeakPtrBase *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = CardGameBoard::get();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  uVar1 = CardGameBoard::VerifyCardDestination(uVar2,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* CardBoardMgr::TurnPlayerPlayCards() */

void CardBoardMgr::TurnPlayerPlayCards(void)

{
  CardGameBoard *this;
  
  this = (CardGameBoard *)CardGameBoard::get();
  CardGameBoard::TurnPlayerPlayCards(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardBoardMgr::getConfig() const */

void CardBoardMgr::getConfig(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06aa6df0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aa6df0), iVar2 != 0)) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&DAT_06aa6e80);
    __cxa_guard_release(&DAT_06aa6df0);
    __cxa_atexit(Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr,&DAT_06aa6e80,&DAT_06a88000);
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&DAT_06aa6e80);
  if (cVar1 == '\0') {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::RtName::RtName(aRStack_18,L"CardBoardConfig");
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar3,0x8e,aRStack_18);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)&DAT_06aa6e80,(RtWeakPtr *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    Sexy::RtName::~RtName(aRStack_18);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&DAT_06aa6e80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardBoardMgr::GetConfig() const */

void CardBoardMgr::GetConfig(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (((DAT_06aa6df0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aa6df0), iVar2 != 0)) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&DAT_06aa6e80);
    __cxa_guard_release(&DAT_06aa6df0);
    __cxa_atexit(Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr,&DAT_06aa6e80,&DAT_06a88000);
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&DAT_06aa6e80);
  if (cVar1 == '\0') {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::RtName::RtName(aRStack_18,L"CardBoardConfig");
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar3,0x8e,aRStack_18);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)&DAT_06aa6e80,(RtWeakPtr *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    Sexy::RtName::~RtName(aRStack_18);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&DAT_06aa6e80);
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardBoardMgr::GetInitialHandCardsCoverRate() const */

void CardBoardMgr::GetInitialHandCardsCoverRate(void)

{
  CardGameBoardConfig *this;
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CardGameBoardConfig *)GetConfig();
  std::string::string(asStack_10,"InitialHandCardsCoverRate");
  uVar1 = CardGameBoardConfig::GetCommonConfigValue(this,asStack_10,2.5);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardBoardMgr::gatherHandCardsInfo(Sexy::TRect<float>&, Sexy::Widget*) */

void __thiscall CardBoardMgr::gatherHandCardsInfo(CardBoardMgr *this,TRect *param_1,Widget *param_2)

{
  CardGameBoardConfig *pCVar1;
  DTransformNode *this_00;
  long *plVar2;
  code *pcVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  DRefPtr<DSpriteNode> aDStack_20 [8];
  string asStack_18 [4];
  float local_14;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar1 = (CardGameBoardConfig *)GetConfig();
  std::string::string((string *)&local_10,"CardInitialScale");
  fVar4 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar1,(string *)&local_10,1.0);
  std::string::~string((string *)&local_10);
  nop();
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_20);
  this_00 = (DTransformNode *)
            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_20);
  std::string::string(asStack_18,"testNode");
  plVar2 = (long *)DTransformNode::setName(this_00,asStack_18);
  pcVar3 = *(code **)(*plVar2 + 0x2e8);
  std::string::string((string *)&local_10,"IMAGE_UI_CARD_GAME_CARDS_1");
  plVar2 = (long *)(*pcVar3)(plVar2,(string *)&local_10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x110))(0,0);
  (**(code **)(*plVar2 + 0x140))(fVar4);
  std::string::~string((string *)&local_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  pCVar1 = (CardGameBoardConfig *)GetConfig();
  std::string::string((string *)&local_10,"CardFrameOffsetX");
  uVar5 = CardGameBoardConfig::GetCommonConfigValue(pCVar1,(string *)&local_10,0.0);
  *(undefined4 *)param_1 = uVar5;
  std::string::~string((string *)&local_10);
  nop();
  fVar6 = (float)FUN_035791d0((float)*(int *)(param_2 + 0x54));
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_20);
  (**(code **)(*plVar2 + 0x218))(asStack_18);
  pCVar1 = (CardGameBoardConfig *)GetConfig();
  std::string::string((string *)&local_10,"CardFrameOffsetY");
  fVar7 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar1,(string *)&local_10,35.0);
  *(float *)(param_1 + 4) = (fVar6 - local_14 * fVar4) - fVar7;
  std::string::~string((string *)&local_10);
  nop();
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_20);
  (**(code **)(*plVar2 + 0x218))((string *)&local_10);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  fVar6 = (float)GetInitialHandCardsCoverRate();
  *(float *)(param_1 + 8) = (fVar4 * local_10) / fVar6;
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_20);
  (**(code **)(*plVar2 + 0x218))((string *)&local_10);
  *(float *)(param_1 + 0xc) = fVar4 * local_c;
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardBoardMgr::GetSlideOffset(Card*) */

void CardBoardMgr::GetSlideOffset(Card *param_1)

{
  CardGameBoardConfig *pCVar1;
  long *in_x1;
  DVec2 *in_x8;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_28 [4];
  float local_24;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*in_x1 + 0x218))(auStack_28);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  pCVar1 = (CardGameBoardConfig *)GetConfig();
  std::string::string(asStack_20,"CardInitialScale");
  fVar2 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar1,asStack_20,1.0);
  pCVar1 = (CardGameBoardConfig *)GetConfig();
  std::string::string(asStack_18,"SlideCardsByOffsetDenominator");
  fVar3 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar1,asStack_18,3.0);
  pCVar1 = (CardGameBoardConfig *)GetConfig();
  std::string::string(asStack_10,"SlideCardsByOffsetNumerator");
  fVar4 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar1,asStack_10,2.0);
  DVec2::DVec2(in_x8,0.0,((fVar2 * local_24) / fVar3) * fVar4);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardBoardMgr::CalcSlideOffset(Card*, bool, float) */

void CardBoardMgr::CalcSlideOffset(Card *param_1,bool param_2,float param_3)

{
  char in_w2;
  DVec2 *in_x8;
  float fVar1;
  float fVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetSlideOffset(param_1);
  if (in_w2 == '\0') {
    DVec2::operator-((DVec2 *)&local_18);
    local_18 = local_10;
  }
  else {
    Sexy::FPoint::FPoint((FPoint *)&local_10,(TPoint *)&local_18);
    local_18 = local_10;
  }
  fVar2 = param_3 + local_18._4_4_;
  fVar1 = (float)(**(code **)(*(long *)(ulong)param_2 + 0x1c8))((long *)(ulong)param_2);
  DVec2::DVec2(in_x8,0.0,fVar2 - fVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardBoardMgr::TryHideCards(Sexy::Touch const&) */

void __thiscall CardBoardMgr::TryHideCards(CardBoardMgr *this,Touch *param_1)

{
  CardGameBoard *this_00;
  
  this_00 = (CardGameBoard *)CardGameBoard::get();
  CardGameBoard::HideCards(this_00,param_1);
  return;
}


/* CardBoardMgr::~CardBoardMgr() */

void __thiscall CardBoardMgr::~CardBoardMgr(CardBoardMgr *this)

{
  *(undefined ***)this = &PTR__CardBoardMgr_0665bce0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<TutorialCardInfo,std::allocator<TutorialCardInfo>>::~vector
            ((vector<TutorialCardInfo,std::allocator<TutorialCardInfo>> *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  Sexy::LazySingleton<CardBoardMgr>::~LazySingleton((LazySingleton<CardBoardMgr> *)this);
  return;
}


/* CardBoardMgr::~CardBoardMgr() */

void __thiscall CardBoardMgr::~CardBoardMgr(CardBoardMgr *this)

{
  ~CardBoardMgr(this);
  AK::FreeHook(this);
  return;
}


/* CardBoardMgr::CreateBoard() */

CardGameBoard * CardBoardMgr::CreateBoard(void)

{
  CardGameBoard *this;
  
  if (CardGameBoard::s_pWidgetHandler != (CardGameBoard *)0x0) {
    return CardGameBoard::s_pWidgetHandler;
  }
  this = ::operator_new(0x2c8);
  CardGameBoard::CardGameBoard(this);
  CardGameBoard::s_pWidgetHandler = this;
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x338))(this,1);
  return this;
}


/* CardBoardMgr::SetTutorialCards(std::vector<TutorialCardInfo, std::allocator<TutorialCardInfo> >
   const&) */

void __thiscall CardBoardMgr::SetTutorialCards(CardBoardMgr *this,vector *param_1)

{
  std::vector<TutorialCardInfo,std::allocator<TutorialCardInfo>>::operator=
            ((vector<TutorialCardInfo,std::allocator<TutorialCardInfo>> *)(this + 0x38),param_1);
  return;
}


/* CardBoardMgr::TestDiscardAllCards() */

void CardBoardMgr::TestDiscardAllCards(void)

{
  CardGameBoard *this;
  
  this = (CardGameBoard *)CardGameBoard::get();
  CardGameBoard::TryDiscardCards(this,2);
  return;
}


/* CardBoardMgr::DiscardCards(int, int) */

void CardBoardMgr::DiscardCards(int param_1,int param_2)

{
  CardGameBoard *this;
  
  this = (CardGameBoard *)CardGameBoard::get();
  CardGameBoard::TryDiscardCards(this,param_2);
  return;
}


/* CardBoardMgr::TurnPlayerEnd() */

void CardBoardMgr::TurnPlayerEnd(void)

{
  CardGameBoard *this;
  
  this = (CardGameBoard *)CardGameBoard::get();
  CardGameBoard::TurnPlayerEnd(this);
  return;
}


/* CardBoardMgr::CreateCard(int, CardDestination, Sexy::SexyVector2) */

void CardBoardMgr::CreateCard
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined4 uVar1;
  
  uVar1 = CardGameBoard::get();
  CardGameBoard::TryCreateCard(param_1,param_2,uVar1,param_4,param_5);
  return;
}


/* CardBoardMgr::SetInitialPlayerSun(int) */

void __thiscall CardBoardMgr::SetInitialPlayerSun(CardBoardMgr *this,int param_1)

{
  CardGameBoard *this_00;
  
  *(int *)(this + 0x14) = param_1;
  this_00 = (CardGameBoard *)CardGameBoard::get();
  CardGameBoard::SunMaxChanged(this_00);
  return;
}


/* CardBoardMgr::SetCurrentPlayerSun(int) */

void __thiscall CardBoardMgr::SetCurrentPlayerSun(CardBoardMgr *this,int param_1)

{
  CardGameBoard *this_00;
  
  *(int *)(this + 0x10) = param_1;
  this_00 = (CardGameBoard *)CardGameBoard::get();
  CardGameBoard::SunChanged(this_00);
  return;
}


/* CardBoardMgr::SpendCost(int) */

void __thiscall CardBoardMgr::SpendCost(CardBoardMgr *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0357522c(*(undefined4 *)(this + 0x10));
  SetCurrentPlayerSun(this,iVar1 - param_1);
  return;
}


/* CardBoardMgr::FillPlayerSun() */

void __thiscall CardBoardMgr::FillPlayerSun(CardBoardMgr *this)

{
  int iVar1;
  
  iVar1 = FUN_03575230(*(undefined4 *)(this + 0x14));
  SetCurrentPlayerSun(this,iVar1);
  return;
}


/* CardBoardMgr::TurnPlayerBegan(int) */

void CardBoardMgr::TurnPlayerBegan(int param_1)

{
  int iVar1;
  
  iVar1 = CardGameBoard::get();
  CardGameBoard::TurnPlayerBegan(iVar1);
  return;
}


/* CardBoardMgr::TestDrawCard(int) */

void CardBoardMgr::TestDrawCard(int param_1)

{
  CardGameBoard *this;
  
  this = (CardGameBoard *)CardGameBoard::get();
  CardGameBoard::DrawCard(this);
  return;
}


/* CardBoardMgr::SetTurnLeftTime(float) */

void CardBoardMgr::SetTurnLeftTime(float param_1)

{
  CardGameBoard *this;
  
  this = (CardGameBoard *)CardGameBoard::get();
  CardGameBoard::TurnEndTimeChanged(this,param_1);
  return;
}

