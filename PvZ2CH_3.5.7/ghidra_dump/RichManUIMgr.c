// Class: RichManUIMgr


/* RichManUIMgr::onNotifyBoardSetup() */

void RichManUIMgr::onNotifyBoardSetup(void)

{
  return;
}


/* RichManUIMgr::GetEventUIEntryConfigByIndex(int) */

void __thiscall RichManUIMgr::GetEventUIEntryConfigByIndex(RichManUIMgr *this,int param_1)

{
  EventUIPropertySheet::GetEventUIEntryConfigByIndex((EventUIPropertySheet *)(this + 8),param_1);
  return;
}


/* RichManUIMgr::GetEventConfigSize() */

void __thiscall RichManUIMgr::GetEventConfigSize(RichManUIMgr *this)

{
  EventUIPropertySheet::GetConfigSize((EventUIPropertySheet *)(this + 8));
  return;
}


/* RichManUIMgr::GetEventBoardConfig() */

void __thiscall RichManUIMgr::GetEventBoardConfig(RichManUIMgr *this)

{
  std::
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  ::_M_rightmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)(this + 8));
  return;
}


/* RichManUIMgr::GetPieceConfig() */

void __thiscall RichManUIMgr::GetPieceConfig(RichManUIMgr *this)

{
  EventUIPropertySheet::GetPieceConfig((EventUIPropertySheet *)(this + 8));
  return;
}


/* RichManUIMgr::SetPrevNode(int) */

void __thiscall RichManUIMgr::SetPrevNode(RichManUIMgr *this,int param_1)

{
  *(int *)(this + 0x88) = param_1;
  return;
}


/* RichManUIMgr::GetBoard() */

void __thiscall RichManUIMgr::GetBoard(RichManUIMgr *this)

{
  if (*(long *)(this + 0x50) != 0) {
    FUN_038d3fd0(*(undefined8 *)(*(long *)(this + 0x50) + 0x128));
    return;
  }
  return;
}


/* RichManUIMgr::ResetPieceLocation(Sexy::Point const&) */

void RichManUIMgr::ResetPieceLocation(Point *param_1)

{
  long lVar1;
  Point *pPVar2;
  
  lVar1 = GetBoard((RichManUIMgr *)param_1);
  if (lVar1 != 0) {
    pPVar2 = (Point *)GetBoard((RichManUIMgr *)param_1);
    AdaptorRichManBoard::SetPieceStartLocation(pPVar2);
    return;
  }
  return;
}


/* RichManUIMgr::onTileEvent_Start_Post() */

void __thiscall RichManUIMgr::onTileEvent_Start_Post(RichManUIMgr *this)

{
  long lVar1;
  AdaptorRichManBoard *pAVar2;
  
  lVar1 = GetBoard(this);
  if (lVar1 != 0) {
    pAVar2 = (AdaptorRichManBoard *)GetBoard(this);
    AdaptorRichManBoard::setState(pAVar2,1);
    return;
  }
  return;
}


/* RichManUIMgr::onTileEvent_Reward_Post() */

void __thiscall RichManUIMgr::onTileEvent_Reward_Post(RichManUIMgr *this)

{
  long lVar1;
  AdaptorRichManBoard *pAVar2;
  
  lVar1 = GetBoard(this);
  if (lVar1 != 0) {
    pAVar2 = (AdaptorRichManBoard *)GetBoard(this);
    AdaptorRichManBoard::setState(pAVar2,1);
    return;
  }
  return;
}


/* RichManUIMgr::onTileEvent_GuessGame_Post(int, int) */

void RichManUIMgr::onTileEvent_GuessGame_Post(int param_1,int param_2)

{
  long lVar1;
  AdaptorRichManBoard *pAVar2;
  
  lVar1 = GetBoard((RichManUIMgr *)(ulong)(uint)param_1);
  if (lVar1 != 0) {
    pAVar2 = (AdaptorRichManBoard *)GetBoard((RichManUIMgr *)(ulong)(uint)param_1);
    AdaptorRichManBoard::setState(pAVar2,1);
    return;
  }
  return;
}


/* RichManUIMgr::onTileEvent_MiniGame_Post() */

void __thiscall RichManUIMgr::onTileEvent_MiniGame_Post(RichManUIMgr *this)

{
  long lVar1;
  AdaptorRichManBoard *pAVar2;
  
  lVar1 = GetBoard(this);
  if (lVar1 != 0) {
    pAVar2 = (AdaptorRichManBoard *)GetBoard(this);
    AdaptorRichManBoard::setState(pAVar2,1);
    return;
  }
  return;
}


/* RichManUIMgr::onTileEvent_BossBattle_Post() */

void __thiscall RichManUIMgr::onTileEvent_BossBattle_Post(RichManUIMgr *this)

{
  long lVar1;
  AdaptorRichManBoard *pAVar2;
  
  lVar1 = GetBoard(this);
  if (lVar1 != 0) {
    pAVar2 = (AdaptorRichManBoard *)GetBoard(this);
    AdaptorRichManBoard::setState(pAVar2,1);
    return;
  }
  return;
}


/* RichManUIMgr::onTileEvent_WorldLevel_Post() */

void __thiscall RichManUIMgr::onTileEvent_WorldLevel_Post(RichManUIMgr *this)

{
  long lVar1;
  AdaptorRichManBoard *pAVar2;
  
  lVar1 = GetBoard(this);
  if (lVar1 != 0) {
    pAVar2 = (AdaptorRichManBoard *)GetBoard(this);
    AdaptorRichManBoard::setState(pAVar2,1);
    return;
  }
  return;
}


/* RichManUIMgr::CheatJumpPiece(Sexy::Point const&) */

void __thiscall RichManUIMgr::CheatJumpPiece(RichManUIMgr *this,Point *param_1)

{
  long lVar1;
  
  lVar1 = GetBoard(this);
  if (lVar1 != 0) {
    GetBoard(this);
    nop();
    return;
  }
  return;
}


/* RichManUIMgr::CheatRoll() */

void __thiscall RichManUIMgr::CheatRoll(RichManUIMgr *this)

{
  long lVar1;
  AdaptorRichManBoard *pAVar2;
  
  lVar1 = GetBoard(this);
  if (lVar1 != 0) {
    pAVar2 = (AdaptorRichManBoard *)GetBoard(this);
    AdaptorRichManBoard::setState(pAVar2,2);
    return;
  }
  return;
}


/* RichManUIMgr::IsCurrentNodeFacingLeft() */

bool __thiscall RichManUIMgr::IsCurrentNodeFacingLeft(RichManUIMgr *this)

{
  int iVar1;
  long lVar2;
  
  lVar2 = GetPieceConfig(this);
  iVar1 = *(int *)(lVar2 + 8);
  if (*(int *)(lVar2 + 0xc) < iVar1) {
    return *(int *)(this + 0x8c) < iVar1;
  }
  return *(int *)(this + 0x8c) < iVar1 || *(int *)(lVar2 + 0xc) <= *(int *)(this + 0x8c);
}


/* RichManUIMgr::GetLeftDice() */

undefined4 __thiscall RichManUIMgr::GetLeftDice(RichManUIMgr *this)

{
  return *(undefined4 *)(this + 0x90);
}


/* RichManUIMgr::SetLeftDice(int) */

void __thiscall RichManUIMgr::SetLeftDice(RichManUIMgr *this,int param_1)

{
  *(int *)(this + 0x90) = param_1;
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* RichManUIMgr::CheatDice() */

void __thiscall RichManUIMgr::CheatDice(RichManUIMgr *this)

{
  SetLeftDice(this,999);
  return;
}


/* RichManUIMgr::handleMoveEvent(bool, int) */

void __thiscall RichManUIMgr::handleMoveEvent(RichManUIMgr *this,bool param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  AdaptorRichManBoard *pAVar3;
  
  lVar2 = GetBoard(this);
  if (lVar2 != 0) {
    SetPrevNode(this,*(int *)(this + 0x8c));
    lVar2 = GetBoard(this);
    FUN_038d3fc8(lVar2 + 0x188,*(undefined4 *)(this + 0x8c));
    EA::Text::OutlineFont::SetSmoothing((OutlineFont *)this,param_2);
    uVar1 = 4;
    if (!param_1) {
      uVar1 = 3;
    }
    pAVar3 = (AdaptorRichManBoard *)GetBoard(this);
    AdaptorRichManBoard::setState(pAVar3,uVar1);
    return;
  }
  return;
}


/* RichManUIMgr::onTileEvent_MoveForward_Index_Post(int) */

void __thiscall RichManUIMgr::onTileEvent_MoveForward_Index_Post(RichManUIMgr *this,int param_1)

{
  handleMoveEvent(this,false,param_1);
  return;
}


/* RichManUIMgr::onTileEvent_MoveBackward_Index_Post(int) */

void __thiscall RichManUIMgr::onTileEvent_MoveBackward_Index_Post(RichManUIMgr *this,int param_1)

{
  handleMoveEvent(this,true,param_1);
  return;
}


/* RichManUIMgr::DecideNextRoll() */

int __thiscall RichManUIMgr::DecideNextRoll(RichManUIMgr *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = Sexy::Rand(6);
  iVar1 = iVar2 + 1 + *(int *)(this + 0x8c);
  *(int *)(this + 0x8c) = iVar1;
  lVar3 = std::map<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
          ::size((map<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
                  *)(this + 0x58));
  if (lVar3 - 1U < (ulong)(long)iVar1) {
    *(undefined4 *)(this + 0x8c) = 0;
  }
  return iVar2 + 1;
}


/* RichManUIMgr::GetNextRoll() */

int __thiscall RichManUIMgr::GetNextRoll(RichManUIMgr *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0x8c);
  iVar2 = *(int *)(this + 0x88);
  iVar3 = iVar1 - iVar2;
  if (iVar3 < 1) {
    iVar3 = std::
            map<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>::
            size((map<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
                  *)(this + 0x58));
    iVar3 = (iVar1 + iVar3) - iVar2;
  }
  return iVar3;
}


/* RichManUIMgr::onNotifyMovingFinish(bool) */

void __thiscall RichManUIMgr::onNotifyMovingFinish(RichManUIMgr *this,bool param_1)

{
  int iVar1;
  long lVar2;
  AdaptorRichManBoard *pAVar3;
  RichmanTileEventManager *pRVar4;
  ZMatchShopDlg *this_00;
  
  lVar2 = GetBoard(this);
  if (lVar2 == 0) {
    return;
  }
  if (*(int *)(this + 0x8c) == 0) {
    this_00 = (ZMatchShopDlg *)GetBoard(this);
    iVar1 = ZMatchShopDlg::getMatchCoin(this_00);
    pAVar3 = (AdaptorRichManBoard *)GetBoard(this);
    AdaptorRichManBoard::Refresh(pAVar3);
    if (param_1) {
      pAVar3 = (AdaptorRichManBoard *)GetBoard(this);
      AdaptorRichManBoard::setState(pAVar3,5);
      pRVar4 = (RichmanTileEventManager *)
               Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
      RichmanTileEventManager::MoveIndexTile(pRVar4,*(int *)(this + 0x8c),iVar1 != 1);
      return;
    }
  }
  else if (param_1) {
    pAVar3 = (AdaptorRichManBoard *)GetBoard(this);
    AdaptorRichManBoard::setState(pAVar3,5);
    pRVar4 = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
    RichmanTileEventManager::MoveIndexTile(pRVar4,*(int *)(this + 0x8c),true);
    return;
  }
  pAVar3 = (AdaptorRichManBoard *)GetBoard(this);
  AdaptorRichManBoard::setState(pAVar3,1);
  return;
}


/* RichManUIMgr::Reset() */

void __thiscall RichManUIMgr::Reset(RichManUIMgr *this)

{
  std::multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>::
  clear((multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>> *
        )(this + 0x58));
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  return;
}


/* RichManUIMgr::GetEventUIEntryConfig(int) */

void __thiscall RichManUIMgr::GetEventUIEntryConfig(RichManUIMgr *this,int param_1)

{
  EventUIPropertySheet::GetEventUIEntryConfig((EventUIPropertySheet *)(this + 8),param_1);
  return;
}


/* RichManUIMgr::~RichManUIMgr() */

void __thiscall RichManUIMgr::~RichManUIMgr(RichManUIMgr *this)

{
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined ***)this = &PTR__RichManUIMgr_066babb0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  NetworkRichManConfig::~NetworkRichManConfig((NetworkRichManConfig *)(this + 0xb0));
  std::vector<EventConfig,std::allocator<EventConfig>>::~vector
            ((vector<EventConfig,std::allocator<EventConfig>> *)(this + 0x98));
  std::multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>::
  ~multimap((multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
             *)(this + 0x58));
  EventUIPropertySheet::~EventUIPropertySheet((EventUIPropertySheet *)(this + 8));
  Sexy::LazySingleton<RichManUIMgr>::~LazySingleton((LazySingleton<RichManUIMgr> *)this);
  return;
}


/* RichManUIMgr::~RichManUIMgr() */

void __thiscall RichManUIMgr::~RichManUIMgr(RichManUIMgr *this)

{
  ~RichManUIMgr(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManUIMgr::Init() */

void __thiscall RichManUIMgr::Init(RichManUIMgr *this)

{
  undefined *puVar1;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined1 local_140 [16];
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  CBMemberTranslatorX aCStack_f8 [24];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EventUIPropertySheet::Init((EventUIPropertySheet *)(this + 8));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyBoardSetup);
  Sexy::Delegate0::Delegate0<RichManUIMgr,void(RichManUIMgr::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyBoardSetup,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyMovingFinish);
  local_120 = local_e0;
  uStack_118 = uStack_d8;
  local_110 = local_d0;
  MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<RichManUIMgr,void(RichManUIMgr::*)(bool)>>
            ((MessageRouter *)puVar1,Message::NotifyMovingFinish,&local_120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_130 = local_b8;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<RichManUIMgr,void(RichManUIMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,local_140);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRichmanDiceShopBuyFinish);
  local_160 = local_b0;
  uStack_158 = uStack_a8;
  local_150 = local_a0;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<RichManUIMgr,void(RichManUIMgr::*)(int)>>
            ((MessageRouter *)puVar1,Message::RichmanDiceShopBuyFinish,&local_160);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTileEvent_MoveForward_Index_Post);
  local_150 = local_88;
  local_160 = local_98;
  uStack_158 = uStack_90;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<RichManUIMgr,void(RichManUIMgr::*)(int)>>
            ((MessageRouter *)puVar1,Message::TileEvent_MoveForward_Index_Post,&local_160);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTileEvent_MoveBackward_Index_Post);
  local_160 = local_80;
  uStack_158 = uStack_78;
  local_150 = local_70;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<RichManUIMgr,void(RichManUIMgr::*)(int)>>
            ((MessageRouter *)puVar1,Message::TileEvent_MoveBackward_Index_Post,&local_160);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTileEvent_Start_Post);
  Sexy::Delegate0::Delegate0<RichManUIMgr,void(RichManUIMgr::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::TileEvent_Start_Post,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTileEvent_Reward_Post);
  Sexy::Delegate0::Delegate0<RichManUIMgr,void(RichManUIMgr::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::TileEvent_Reward_Post,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTileEvent_GuessGame_Post);
  local_170 = local_58;
  local_180 = local_68;
  uStack_178 = uStack_60;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<RichManUIMgr,void(RichManUIMgr::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::TileEvent_GuessGame_Post,&local_180);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTileEvent_ThrowAgain);
  local_180 = local_50;
  uStack_178 = uStack_48;
  local_170 = local_40;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<RichManUIMgr,void(RichManUIMgr::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::TileEvent_ThrowAgain,&local_180);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTileEvent_MiniGame_Post);
  Sexy::Delegate0::Delegate0<RichManUIMgr,void(RichManUIMgr::*)()>(aDStack_38,aCStack_f8);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::TileEvent_MiniGame_Post,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTileEvent_BossBattle_Post);
  Sexy::Delegate0::Delegate0<RichManUIMgr,void(RichManUIMgr::*)()>(aDStack_38,aCStack_f8);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::TileEvent_BossBattle_Post,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTileEvent_WorldLevel_Post);
  Sexy::Delegate0::Delegate0<RichManUIMgr,void(RichManUIMgr::*)()>(aDStack_38,aCStack_f8);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::TileEvent_WorldLevel_Post,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RichManUIMgr::RichManUIMgr() */

void __thiscall RichManUIMgr::RichManUIMgr(RichManUIMgr *this)

{
  Sexy::LazySingleton<RichManUIMgr>::LazySingleton((LazySingleton<RichManUIMgr> *)this);
  *(undefined ***)this = &PTR__RichManUIMgr_066babb0;
  EventUIPropertySheet::EventUIPropertySheet((EventUIPropertySheet *)(this + 8));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  NetworkRichManConfig::NetworkRichManConfig((NetworkRichManConfig *)(this + 0xb0));
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  this[0xf0] = (RichManUIMgr)0x0;
  Init(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManUIMgr::RequestNetwork() */

void __thiscall RichManUIMgr::RequestNetwork(RichManUIMgr *this)

{
  LawnApp *this_00;
  char cVar1;
  NetworkMgr *this_01;
  INetworkMsgProcess *this_02;
  PVZ2UIDialog *pPVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  this_00 = gLawnApp;
  if (cVar1 == '\0') {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178((wstring *)avStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,(wstring *)avStack_50);
    FUN_05476c50((wstring *)avStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(wstring *)avStack_50);
    PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
  }
  else {
    this_01 = (NetworkMgr *)NetworkMgr::Instance();
    this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
              (avStack_50,&DAT_05751ce0,1,awStack_58);
    INetworkMsgProcess::RequestActivityList(this_02,(vector *)avStack_50,0,true);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_50);
    this[0xf0] = (RichManUIMgr)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManUIMgr::GetNode(int) */

void RichManUIMgr::GetNode(int param_1)

{
  bool bVar1;
  long lVar2;
  Point *in_x8;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(in_x8);
  local_18 = std::
             map<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>::
             find((map<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
                   *)((ulong)(uint)param_1 + 0x58),local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)((ulong)(uint)param_1 + 0x58));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    *(undefined8 *)in_x8 = *(undefined8 *)(lVar2 + 4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RichManUIMgr::GetStartLocation() */

void RichManUIMgr::GetStartLocation(void)

{
  int in_w0;
  
  GetNode(in_w0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManUIMgr::AddNode(int, Sexy::Point) */

void __thiscall RichManUIMgr::AddNode(RichManUIMgr *this,int param_1,Point *param_3)

{
  int local_24 [3];
  pair apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  std::make_pair<int&,Sexy::Point&>(local_24,param_3);
  std::map<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>::
  insert<std::pair<int,Sexy::Point>,void>
            ((map<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>> *
             )(this + 0x58),apStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManUIMgr::GetNextLocation(std::vector<Sexy::Point, std::allocator<Sexy::Point> >&, int, bool)
    */

void __thiscall
RichManUIMgr::GetNextLocation(RichManUIMgr *this,vector *param_1,int param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = *(int *)(this + 0x8c);
  if (param_3) {
    while (param_2 = param_2 + -1, iVar2 <= param_2) {
      GetNode((int)this);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_1,aPStack_10);
    }
  }
  else {
    if (iVar2 - param_2 < 0) {
      iVar1 = std::
              map<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>::
              size((map<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
                    *)(this + 0x58));
      iVar2 = iVar2 + iVar1;
      if (iVar2 < param_2 + 1) goto LAB_038d96b0;
    }
    else if (iVar2 < param_2 + 1) goto LAB_038d96b0;
    iVar1 = param_2 + 1;
    do {
      std::map<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>::
      size((map<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>> *)
           (this + 0x58));
      iVar1 = iVar1 + 1;
      GetNode((int)this);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_1,aPStack_10);
    } while (iVar1 <= iVar2);
  }
LAB_038d96b0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManUIMgr::ShowBonusRewards(std::vector<EventReward, std::allocator<EventReward> > const&) */

void __thiscall RichManUIMgr::ShowBonusRewards(RichManUIMgr *this,vector *param_1)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_68 [48];
  GAME_ITEM_INFO aGStack_38 [8];
  int local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_68);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  local_a0 = FUN_038d6108(*(undefined8 *)param_1);
  local_98 = FUN_038d6158(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1) {
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    ProfileChangeItemAmount(*piVar3,piVar3[1],false);
    local_90 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                         ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                          amStack_68,(int *)aGStack_38);
    local_88 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)amStack_68);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_90,(rbtree_iterator *)&local_88);
    if (bVar1) {
      lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_90);
      *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + local_30;
    }
    else {
      piVar3 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                      operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                  *)amStack_68,(int *)aGStack_38);
      *piVar3 = local_30;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_80,(int *)aGStack_38);
    }
    GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  }
  UIRedPacketResult::create((map *)amStack_68,(vector *)avStack_80,true);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_80);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManUIMgr::InitTestData(int) */

void __thiscall RichManUIMgr::InitTestData(RichManUIMgr *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  piVar3 = (int *)std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_rightmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)(this + 8));
  iVar2 = (piVar3[1] + -2 + *piVar3) * 2;
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_10);
      iVar1 = iVar4 + 1;
      local_10 = param_1;
      local_c = iVar4;
      std::vector<EventConfig,std::allocator<EventConfig>>::push_back
                ((vector<EventConfig,std::allocator<EventConfig>> *)(this + 0x98),
                 (EventConfig *)&local_10);
      iVar4 = iVar1;
    } while (iVar1 != iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RichManUIMgr::CheatResetBoard() */

void __thiscall RichManUIMgr::CheatResetBoard(RichManUIMgr *this)

{
  long lVar1;
  AdaptorRichManBoard *this_00;
  
  std::vector<EventConfig,std::allocator<EventConfig>>::clear
            ((vector<EventConfig,std::allocator<EventConfig>> *)(this + 0x98));
  InitTestData(this,2);
  lVar1 = GetBoard(this);
  if (lVar1 != 0) {
    this_00 = (AdaptorRichManBoard *)GetBoard(this);
    AdaptorRichManBoard::Refresh(this_00);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManUIMgr::SetCurrentRewards(std::vector<EventReward, std::allocator<EventReward> > const&) */

void __thiscall RichManUIMgr::SetCurrentRewards(RichManUIMgr *this,vector *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 *puVar4;
  RichmanTileEventManager *pRVar5;
  undefined8 local_48;
  undefined8 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined4 local_20;
  undefined4 local_1c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  local_48 = FUN_038d6108(*(undefined8 *)param_1);
  local_40 = FUN_038d6158(*(undefined8 *)(param_1 + 8));
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar3) {
    puVar4 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_20);
    local_20 = uVar1;
    local_1c = uVar2;
    std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::push_back
              ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)avStack_38,
               (RichmanItemInfo *)&local_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
  pRVar5 = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::vector
            ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)&local_20,
             (vector *)avStack_38);
  RichmanTileEventManager::FillRewardList(pRVar5,(FlagsMod *)&local_20);
  std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::~vector
            ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)&local_20);
  std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::~vector
            ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManUIMgr::SetEvents(std::vector<RichmanTileEventConfig,
   std::allocator<RichmanTileEventConfig> > const&) */

void __thiscall RichManUIMgr::SetEvents(RichManUIMgr *this,vector *param_1)

{
  vector<EventConfig,std::allocator<EventConfig>> *this_00;
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  RichmanTileEventManager *pRVar4;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_01;
  vector *pvVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  vector<RichmanTileEventConfig,std::allocator<RichmanTileEventConfig>> avStack_80 [8];
  undefined4 local_78;
  long local_8;
  
  this_00 = (vector<EventConfig,std::allocator<EventConfig>> *)(this + 0x98);
  local_8 = ___stack_chk_guard;
  pRVar4 = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  std::vector<RichmanTileEventConfig,std::allocator<RichmanTileEventConfig>>::vector
            (avStack_80,param_1);
  cVar2 = RichmanTileEventManager::InitTileEventList(pRVar4,avStack_80);
  std::vector<RichmanTileEventConfig,std::allocator<RichmanTileEventConfig>>::~vector(avStack_80);
  if (cVar2 != '\0') {
    std::vector<EventConfig,std::allocator<EventConfig>>::clear(this_00);
    this_01 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
    pvVar5 = (vector *)
             std::
             _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             ::_M_root(this_01);
    std::vector<RichmanTileEventBase*,std::allocator<RichmanTileEventBase*>>::vector
              ((vector<RichmanTileEventBase*,std::allocator<RichmanTileEventBase*>> *)&local_98,
               pvVar5);
    uVar7 = 0;
    while( true ) {
      uVar1 = local_98;
      uVar6 = FUN_038d4404(local_98,local_90);
      if (uVar6 <= uVar7) break;
      FUN_038d4410(uVar1,uVar7);
      RichmanTileEventBase::GetConfig();
      Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_a0);
      local_a0 = local_78;
      local_9c = (int)uVar7;
      std::vector<EventConfig,std::allocator<EventConfig>>::push_back
                (this_00,(EventConfig *)&local_a0);
      RichmanTileEventConfig::~RichmanTileEventConfig((RichmanTileEventConfig *)avStack_80);
      uVar7 = uVar7 + 1;
    }
    std::vector<RichmanTileEventBase*,std::allocator<RichmanTileEventBase*>>::~vector
              ((vector<RichmanTileEventBase*,std::allocator<RichmanTileEventBase*>> *)&local_98);
  }
  bVar3 = std::vector<EventConfig,std::allocator<EventConfig>>::empty(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3 ^ 1);
}


/* RichManUIMgr::SyncActivityData(NetworkRichManConfig const&) */

void __thiscall RichManUIMgr::SyncActivityData(RichManUIMgr *this,NetworkRichManConfig *param_1)

{
  Reset(this);
  NetworkRichManConfig::operator=((NetworkRichManConfig *)(this + 0xb0),param_1);
  SetLeftDice(this,*(int *)(this + 0xd4));
  EA::Text::OutlineFont::SetSmoothing((OutlineFont *)this,*(undefined4 *)(this + 0xd0));
  SetEvents(this,(vector *)(this + 0xb8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManUIMgr::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>, std::allocator<int>
   > const&) */

void __thiscall
RichManUIMgr::onNotifyRefreshActivityList(RichManUIMgr *this,bool param_1,set *param_2)

{
  LawnApp *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  PVZ2UIDialog *pPVar4;
  undefined1 auStack_e0 [8];
  int local_d8 [2];
  undefined8 local_d0;
  undefined8 local_c8 [8];
  Delegate0 aDStack_88 [24];
  char local_70;
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_d8[0] = 0x2a13;
    local_d0 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,local_d8);
    local_c8[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_d0,(rbtree_iterator *)local_c8);
    if ((bVar1) && (this[0xf0] != (RichManUIMgr)0x0)) {
      this[0xf0] = (RichManUIMgr)0x0;
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      if (local_70 != '\0') {
        NetworkRichManConfig::NetworkRichManConfig((NetworkRichManConfig *)local_c8);
        cVar2 = ActiveItem::GetDataSerialized((ActiveItem *)aDStack_88,(RtObject *)local_c8);
        if ((cVar2 != '\0') &&
           (cVar2 = SyncActivityData(this,(NetworkRichManConfig *)local_c8), cVar2 != '\0')) {
          LawnApp::KillActivityCollection(gLawnApp);
          GameStateMgr::ShowRichManScreen(gGameStateMgr,0,0);
        }
        NetworkRichManConfig::~NetworkRichManConfig((NetworkRichManConfig *)local_c8);
      }
      ActiveItem::~ActiveItem((ActiveItem *)aDStack_88);
    }
  }
  else {
    FUN_05478178((wstring *)&local_d0,&DAT_056f11a8,auStack_e0);
    FUN_05478178((wstring *)local_c8,L"[RECALL_OFFER_NETWORK_ERROR]",local_d8);
    pPVar4 = (PVZ2UIDialog *)
             LawnApp::ShowPVZ2Dialog(this_00,(wstring *)&local_d0,(wstring *)local_c8);
    FUN_05476c50((wstring *)local_c8);
    nop();
    FUN_05476c50((wstring *)&local_d0);
    nop();
    FUN_05478178((wstring *)&local_d0,L"[BUTTON_OK]",local_d8);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_88,(wstring *)local_c8);
    PVZ2UIDialog::AddButton(pPVar4,(wstring *)&local_d0,aDStack_88,1);
    FUN_05476c50((wstring *)&local_d0);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManUIMgr::onRichmanDiceShopBuyFinish(int) */

void __thiscall RichManUIMgr::onRichmanDiceShopBuyFinish(RichManUIMgr *this,int param_1)

{
  int iVar1;
  char *__s;
  TGALogMgr *pTVar2;
  size_t __n;
  string asStack_a0 [8];
  TGATourismOctoberData aTStack_98 [40];
  string asStack_70 [8];
  undefined1 auStack_68 [24];
  DString aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = GetLeftDice(this);
  SetLeftDice(this,iVar1 + param_1);
  iVar1 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
  __n = 0;
  TGALogMgr::GetSegForId(iVar1,0x273e);
  TGATourismOctoberData::TGATourismOctoberData(aTStack_98);
  std::string::append((string *)aTStack_98,"3",__n);
  DString::DString(aDStack_50,param_1);
  __s = (char *)DString::c_str(aDStack_50);
  std::string::append(asStack_70,__s,__n);
  DString::~DString(aDStack_50);
  thunk_FUN_05475e00(auStack_68,asStack_a0);
  pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGARichManData::TGARichManData((TGARichManData *)aDStack_50,(TGARichManData *)aTStack_98);
  TGALogMgr::LogRichMan(pTVar2,aDStack_50);
  TGATourismOctoberData::~TGATourismOctoberData((TGATourismOctoberData *)aDStack_50);
  TGATourismOctoberData::~TGATourismOctoberData(aTStack_98);
  std::string::~string(asStack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManUIMgr::onMoveResult(New_S2C_MoveResult const&) */

void __thiscall RichManUIMgr::onMoveResult(RichManUIMgr *this,New_S2C_MoveResult *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  PlayerInfo *this_00;
  char *pcVar4;
  TGALogMgr *pTVar5;
  long lVar6;
  AdaptorRichManBoard *pAVar7;
  TGATourismOctoberData *__n;
  TGATourismOctoberData aTStack_98 [8];
  string asStack_90 [16];
  string asStack_80 [8];
  string asStack_78 [40];
  string asStack_50 [72];
  long local_8;
  
  iVar3 = *(int *)(param_1 + 0x50);
  local_8 = ___stack_chk_guard;
  SetLeftDice(this,*(int *)(param_1 + 0x14));
  SetPrevNode(this,*(int *)(this + 0x8c));
  EA::Text::OutlineFont::SetSmoothing((OutlineFont *)this,*(undefined4 *)(param_1 + 0x18));
  if (iVar3 == 100 || iVar3 == 10) {
    cVar1 = std::vector<EventReward,std::allocator<EventReward>>::empty
                      ((vector<EventReward,std::allocator<EventReward>> *)(param_1 + 0x20));
    if (cVar1 == '\0') {
      ShowBonusRewards(this,(vector *)(param_1 + 0x20));
      cVar1 = std::vector<RichmanTileEventConfig,std::allocator<RichmanTileEventConfig>>::empty
                        ((vector<RichmanTileEventConfig,std::allocator<RichmanTileEventConfig>> *)
                         (param_1 + 0x38));
    }
    else {
      cVar1 = std::vector<RichmanTileEventConfig,std::allocator<RichmanTileEventConfig>>::empty
                        ((vector<RichmanTileEventConfig,std::allocator<RichmanTileEventConfig>> *)
                         (param_1 + 0x38));
    }
    if ((cVar1 == '\0') && (cVar1 = SetEvents(this,(vector *)(param_1 + 0x38)), cVar1 != '\0')) {
      GetStartLocation();
      ResetPieceLocation((Point *)this);
    }
  }
  else {
    cVar1 = std::vector<EventReward,std::allocator<EventReward>>::empty
                      ((vector<EventReward,std::allocator<EventReward>> *)(param_1 + 0x20));
    if (cVar1 == '\0') {
      SetCurrentRewards(this,(vector *)(param_1 + 0x20));
      cVar1 = std::vector<RichmanTileEventConfig,std::allocator<RichmanTileEventConfig>>::empty
                        ((vector<RichmanTileEventConfig,std::allocator<RichmanTileEventConfig>> *)
                         (param_1 + 0x38));
    }
    else {
      cVar1 = std::vector<RichmanTileEventConfig,std::allocator<RichmanTileEventConfig>>::empty
                        ((vector<RichmanTileEventConfig,std::allocator<RichmanTileEventConfig>> *)
                         (param_1 + 0x38));
    }
    if (((cVar1 != '\0') || (cVar1 = SetEvents(this,(vector *)(param_1 + 0x38)), cVar1 != '\0')) &&
       (lVar6 = GetBoard(this), lVar6 != 0)) {
      pAVar7 = (AdaptorRichManBoard *)GetBoard(this);
      AdaptorRichManBoard::setState(pAVar7,2);
    }
  }
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  __n = aTStack_98;
  std::string::string(asStack_50,"mat_richman_coin");
  iVar2 = PlayerInfo::GetMaterialNum(this_00,asStack_50);
  std::string::~string(asStack_50);
  nop();
  TGATourismOctoberData::TGATourismOctoberData(aTStack_98);
  std::string::append((string *)aTStack_98,"2",(size_t)__n);
  DString::DString((DString *)asStack_50,iVar2);
  pcVar4 = (char *)DString::c_str((DString *)asStack_50);
  std::string::append(asStack_90,pcVar4,(size_t)__n);
  DString::~DString((DString *)asStack_50);
  DString::DString((DString *)asStack_50,iVar3);
  pcVar4 = (char *)DString::c_str((DString *)asStack_50);
  std::string::append(asStack_80,pcVar4,(size_t)__n);
  DString::~DString((DString *)asStack_50);
  iVar3 = GetNextRoll(this);
  DString::DString((DString *)asStack_50,iVar3);
  pcVar4 = (char *)DString::c_str((DString *)asStack_50);
  std::string::append(asStack_78,pcVar4,(size_t)__n);
  DString::~DString((DString *)asStack_50);
  pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGARichManData::TGARichManData((TGARichManData *)asStack_50,(TGARichManData *)aTStack_98);
  TGALogMgr::LogRichMan(pTVar5,asStack_50);
  TGATourismOctoberData::~TGATourismOctoberData((TGATourismOctoberData *)asStack_50);
  TGATourismOctoberData::~TGATourismOctoberData(aTStack_98);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManUIMgr::RequestRollDice(int) */

void __thiscall RichManUIMgr::RequestRollDice(RichManUIMgr *this,int param_1)

{
  string *this_00;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [1784];
  string asStack_5f0 [1512];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"t");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_1);
  __s = (char *)DString::c_str(aDStack_ce8);
  std::string::append(this_00,__s,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_038d4e08(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_5f0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RichManUIMgr::onTileEvent_ThrowAgain(int, int) */

void RichManUIMgr::onTileEvent_ThrowAgain(int param_1,int param_2)

{
  RichManUIMgr *this;
  
  this = (RichManUIMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
  RequestRollDice(this,7);
  return;
}

