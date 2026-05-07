// Class: UILimitedGacha


/* UILimitedGacha::CancelBuy() */

void UILimitedGacha::CancelBuy(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* UILimitedGacha::UILimitedGacha() */

void __thiscall UILimitedGacha::UILimitedGacha(UILimitedGacha *this)

{
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined4 *)(this + 0x13c) = 0;
  this[0x140] = (UILimitedGacha)0x0;
  this[0x141] = (UILimitedGacha)0x0;
  *(undefined ***)this = &PTR_GetClass_067772c0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  return;
}


/* UILimitedGacha::create(bool) */

UILimitedGacha * UILimitedGacha::create(bool param_1)

{
  UILimitedGacha *this;
  
  if (s_pWidgetHandler != (UILimitedGacha *)0x0) {
    return s_pWidgetHandler;
  }
  this = ::operator_new(0x150);
  memset(this,0,0x150);
  UILimitedGacha(this);
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 0x338))(this,param_1);
  s_pWidgetHandler = this;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitedGacha::Initialize() */

void __thiscall UILimitedGacha::Initialize(UILimitedGacha *this)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  DRefPtr<DLayer> aDStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DLayer>::DRefPtr(aDStack_18);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
  pcVar3 = *(code **)(*plVar1 + 0x210);
  (**(code **)(*(long *)this + 800))(asStack_10,this);
  plVar1 = (long *)(*pcVar3)(plVar1,asStack_10);
  (**(code **)(*plVar1 + 0x270))(plVar1,0,0,0,0x80);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
  (**(code **)(*(long *)this + 0x370))(this,uVar2);
  std::string::string(asStack_10,"UILimitedGacha");
  DNodeWidget::load((DNodeWidget *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitedGacha::showGacha1Flag(bool) */

void __thiscall UILimitedGacha::showGacha1Flag(UILimitedGacha *this,bool param_1)

{
  string *psVar1;
  DTouchLayer *pDVar2;
  string asStack_10 [8];
  long local_8;
  
  this[0x140] = (UILimitedGacha)param_1;
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_10,"root/menu/btnGreenBtn_Gacha_1/imgFlag");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_10);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar2 + 0xd8))(pDVar2,this[0x140]);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitedGacha::showGacha10Flag(bool) */

void __thiscall UILimitedGacha::showGacha10Flag(UILimitedGacha *this,bool param_1)

{
  string *psVar1;
  DTouchLayer *pDVar2;
  string asStack_10 [8];
  long local_8;
  
  this[0x141] = (UILimitedGacha)param_1;
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_10,"root/menu/btnGreenBtn_Gacha_10/imgFlag");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_10);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar2 + 0xd8))(pDVar2,this[0x141]);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitedGacha::UserInit() */

void __thiscall UILimitedGacha::UserInit(UILimitedGacha *this)

{
  exception_ptr *this_00;
  string *psVar1;
  DTouchLayer *pDVar2;
  code *pcVar3;
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  this_00 = (exception_ptr *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_30,"root/menu/btnClose");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_30);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    pcVar3 = *(code **)(*(long *)pDVar2 + 0x350);
    FUN_03dba79c(afStack_28,this);
    (*pcVar3)(pDVar2,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_30,"root/menu/btnLotteryProbability");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_30);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    pcVar3 = *(code **)(*(long *)pDVar2 + 0x350);
    FUN_03dba7f8(afStack_28,this,pDVar2);
    (*pcVar3)(pDVar2,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_30,"root/menu/btnGreenBtn_Gacha_1");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_30);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    pcVar3 = *(code **)(*(long *)pDVar2 + 0x350);
    FUN_03dba854(afStack_28,this,pDVar2);
    (*pcVar3)(pDVar2,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_30,"root/menu/btnGreenBtn_Gacha_10");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_30);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    pcVar3 = *(code **)(*(long *)pDVar2 + 0x350);
    FUN_03dba8b0(afStack_28,this,pDVar2);
    (*pcVar3)(pDVar2,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitedGacha::DoConfirmDialog(float) */

void __thiscall UILimitedGacha::DoConfirmDialog(UILimitedGacha *this,float param_1)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  int iVar2;
  undefined1 auStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574(awStack_60);
  if (param_1 == 50.0) {
    TodStringTranslate(L"[LIMITED_GACHA_CONFIRM_TEXT_NEW_ONE]");
    iVar2 = 0x32;
  }
  else {
    if (param_1 != 400.0) goto LAB_03dbb554;
    TodStringTranslate(L"[LIMITED_GACHA_CONFIRM_TEXT_NEW_TEN]");
    iVar2 = 400;
  }
  TodReplaceNumberString(awStack_58,L"{NUMBER}",iVar2);
  FUN_054766c8(awStack_60,awStack_50);
  FUN_05476c50(awStack_50);
  FUN_05476c50(awStack_58);
LAB_03dbb554:
  this_00 = gLawnApp;
  FUN_05478178(awStack_50,L"[LIMITED_GACHA_CONFIRM_TITLE_NEW]",awStack_58);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_50,awStack_60);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_58,L"[LIMITED_GACHA_CONFIRM_BUY]",auStack_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ConfirmBuyGacha);
  Sexy::Delegate0::Delegate0<UILimitedGacha,void(UILimitedGacha::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[LIMITED_GACHA_CONFIRM_BUY_CANCEL]",auStack_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,1);
  FUN_05476c50(awStack_58);
  nop();
  FUN_05476c50(awStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitedGacha::gachaAgain() */

void __thiscall UILimitedGacha::gachaAgain(UILimitedGacha *this)

{
  undefined4 uVar1;
  LawnApp *this_00;
  char cVar2;
  int iVar3;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  PVZ2UIDialog *pPVar4;
  NetworkMgr *this_03;
  INetworkMsgProcess *this_04;
  ICloudRequestSTDCallbackFunction *this_05;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  if (this_02 == (PlayerInfo *)0x0) {
    cVar2 = '\0';
  }
  else {
    iVar3 = PlayerInfo::GetNumGems(this_02,true);
    if (*(float *)(this + 0x138) <= (float)iVar3) {
      cVar2 = LawnApp::IsNetworkModuleOK();
      this_00 = gLawnApp;
      if (cVar2 == '\0') {
        FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
        FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
        pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
        FUN_05476c50(awStack_50);
        nop();
        FUN_05476c50(awStack_58);
        nop();
        FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,CancelBuy);
        Sexy::Delegate0::Delegate0<UILimitedGacha,void(UILimitedGacha::*)()>(aDStack_38,awStack_50);
        PVZ2UIDialog::AddButton(pPVar4,awStack_58,aDStack_38,1);
        FUN_05476c50(awStack_58);
        nop();
      }
      else {
        uVar1 = *(undefined4 *)(this + 0x13c);
        FUN_03db9b80(this_02 + 0x10f1,0);
        this_03 = (NetworkMgr *)NetworkMgr::Instance();
        this_04 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_03);
        iVar3 = *(int *)(this + 0x13c);
        FUN_03dba90c((function *)aDStack_38,uVar1);
        this_05 = ::operator_new(0x30);
        ICloudRequestSTDCallbackFunction::ICloudRequestSTDCallbackFunction
                  (this_05,(function *)aDStack_38);
        DRefPtr<DTouchLayer>::DRefPtr((DRefPtr<DTouchLayer> *)awStack_50,(DTouchLayer *)this_05);
        INetworkMsgProcess::RequestDoGacha(this_04,iVar3,(DRefPtr *)awStack_50);
        DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)awStack_50)
        ;
        std::function<bool(Sexy::Touch_const&)>::~function
                  ((function<bool(Sexy::Touch_const&)> *)aDStack_38);
        FUN_03db9b80(this_02 + 0x10f1,1);
      }
    }
    else {
      cVar2 = '\0';
      LawnApp::KillPVZ2Dialog(gLawnApp);
      LawnApp::ShowGemStoreConfirm(gLawnApp,2,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitedGacha::ConfirmBuyGacha() */

void __thiscall UILimitedGacha::ConfirmBuyGacha(UILimitedGacha *this)

{
  UILimitedGacha *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  local_10 = this;
  FUN_03dbbb18(*(undefined4 *)(this + 0x144),&local_10,*(undefined4 *)(this + 0x148));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitedGacha::setUnactive() */

void UILimitedGacha::setUnactive(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  DTimerManager *this;
  string asStack_10 [8];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)onNotifyRefreshActivityList);
  MessageRouter::
  Unsubscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBFunctionTranslatorX<void(*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,uVar2);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)onMsgErrorRequest);
  MessageRouter::
  Unsubscribe<int,std::string_const&,Sexy::CBFunctionTranslatorX<void(*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,uVar2);
  this = (DTimerManager *)DTimerManager::getInstane();
  std::string::string(asStack_10,"UILimitedGacha");
  DTimerManager::removeTimer(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  s_isActive = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitedGacha::~UILimitedGacha() */

void __thiscall UILimitedGacha::~UILimitedGacha(UILimitedGacha *this)

{
  DTimerManager *this_00;
  WorldMapActivityBtnTurnChangeManager *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_067772c0;
  setUnactive();
  this_00 = (DTimerManager *)DTimerManager::getInstane();
  std::string::string(asStack_10,"UILimitedGachaCountDown");
  DTimerManager::removeTimer(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  s_pWidgetHandler = 0;
  this_01 = (WorldMapActivityBtnTurnChangeManager *)
            Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstance();
  WorldMapActivityBtnTurnChangeManager::setIsPause(this_01,false);
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UILimitedGacha::~UILimitedGacha() */

void __thiscall UILimitedGacha::~UILimitedGacha(UILimitedGacha *this)

{
  ~UILimitedGacha(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UILimitedGacha::setUnactive(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  DTimerManager *this;
  string asStack_10 [8];
  long lStack_8;
  
  puVar1 = gMessageRouter;
  lStack_8 = ___stack_chk_guard;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)onNotifyRefreshActivityList);
  MessageRouter::
  Unsubscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBFunctionTranslatorX<void(*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,uVar2);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)onMsgErrorRequest);
  MessageRouter::
  Unsubscribe<int,std::string_const&,Sexy::CBFunctionTranslatorX<void(*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,uVar2);
  this = (DTimerManager *)DTimerManager::getInstane();
  std::string::string(asStack_10,"UILimitedGacha");
  DTimerManager::removeTimer(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  s_isActive = 0;
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UILimitedGacha::setUnactive(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  DTimerManager *this;
  string asStack_10 [8];
  long lStack_8;
  
  puVar1 = gMessageRouter;
  lStack_8 = ___stack_chk_guard;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)onNotifyRefreshActivityList);
  MessageRouter::
  Unsubscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBFunctionTranslatorX<void(*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,uVar2);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)onMsgErrorRequest);
  MessageRouter::
  Unsubscribe<int,std::string_const&,Sexy::CBFunctionTranslatorX<void(*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,uVar2);
  this = (DTimerManager *)DTimerManager::getInstane();
  std::string::string(asStack_10,"UILimitedGacha");
  DTimerManager::removeTimer(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  s_isActive = 0;
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitedGacha::onMsgErrorRequest(int, std::string const&) */

void UILimitedGacha::onMsgErrorRequest(int param_1,string *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  DTimerManager *this;
  string asStack_10 [8];
  long lStack_8;
  
  puVar1 = gMessageRouter;
  lStack_8 = ___stack_chk_guard;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)onNotifyRefreshActivityList);
  MessageRouter::
  Unsubscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBFunctionTranslatorX<void(*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,uVar2);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)onMsgErrorRequest);
  MessageRouter::
  Unsubscribe<int,std::string_const&,Sexy::CBFunctionTranslatorX<void(*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,uVar2);
  this = (DTimerManager *)DTimerManager::getInstane();
  std::string::string(asStack_10,"UILimitedGacha");
  DTimerManager::removeTimer(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  s_isActive = 0;
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitedGacha::createWithNetwork() */

void UILimitedGacha::createWithNetwork(void)

{
  undefined *puVar1;
  LawnApp *this;
  char cVar2;
  DTimerManager *this_00;
  undefined8 uVar3;
  NetworkMgr *this_01;
  INetworkMsgProcess *this_02;
  PVZ2UIDialog *pPVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  function<bool(Sexy::Touch_const&)> afStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = LawnApp::IsNetworkModuleOK();
  this = gLawnApp;
  if (cVar2 == '\0') {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178((wstring *)asStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
    pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,(wstring *)asStack_50);
    FUN_05476c50((wstring *)asStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
              ((Delegate0 *)afStack_38,(wstring *)asStack_50);
    PVZ2UIDialog::AddButton(pPVar4,awStack_58,(Delegate0 *)afStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
  }
  else {
    s_isActive = 1;
    this_00 = (DTimerManager *)DTimerManager::getInstane();
    std::string::string(asStack_50,"UILimitedGacha");
    FUN_03dba6f4(afStack_38);
    DTimerManager::addTimer(this_00,asStack_50,(function *)afStack_38,5.0,1);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
    std::string::~string(asStack_50);
    nop();
    puVar1 = gMessageRouter;
    uVar3 = std::
            __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                      ((TaskResource **)onNotifyRefreshActivityList);
    MessageRouter::
    Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBFunctionTranslatorX<void(*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
              ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,uVar3);
    puVar1 = gMessageRouter;
    uVar3 = std::
            __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                      ((TaskResource **)onMsgErrorRequest);
    MessageRouter::
    Subscribe<int,std::string_const&,Sexy::CBFunctionTranslatorX<void(*)(int,std::string_const&)>>
              ((MessageRouter *)puVar1,Message::MsgErrorRequest,uVar3);
    this_01 = (NetworkMgr *)NetworkMgr::Instance();
    this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)asStack_50,
               &DAT_05752860,1,awStack_58);
    INetworkMsgProcess::RequestActivityList(this_02,(vector *)asStack_50,0,true);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)asStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitedGacha::GetGachaMainPlantName() */

void __thiscall UILimitedGacha::GetGachaMainPlantName(UILimitedGacha *this)

{
  char cVar1;
  int iVar2;
  string *in_x8;
  LimitedGachaData aLStack_b8 [48];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  LimitedGachaData::LimitedGachaData(aLStack_b8);
  cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aLStack_b8);
  if (cVar1 == '\0') {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    iVar2 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
  }
  LimitedGachaData::~LimitedGachaData(aLStack_b8);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitedGacha::updatePlantShowFromNetwork(std::vector<int, std::allocator<int> > const&, bool,
   bool) */

void __thiscall
UILimitedGacha::updatePlantShowFromNetwork
          (UILimitedGacha *this,vector *param_1,bool param_2,bool param_3)

{
  exception_ptr *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  string *psVar5;
  DTouchLayer *pDVar6;
  float *pfVar7;
  DNodeLoaderConfig *this_01;
  long lVar8;
  long *plVar9;
  long *plVar10;
  DTouchLayer *pDVar11;
  code *pcVar12;
  float fVar13;
  undefined4 uVar14;
  undefined8 local_60;
  undefined8 local_58;
  string asStack_50 [8];
  RtWeakPtr aRStack_48 [8];
  exception_ptr aeStack_40 [8];
  float local_38 [2];
  undefined4 local_30 [2];
  float local_28;
  float local_24;
  undefined4 local_18 [4];
  long local_8;
  
  this_00 = (exception_ptr *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  showGacha1Flag(this,param_2);
  showGacha10Flag(this,param_3);
  psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)local_18,"root/imgBottom/scrollView");
  pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
  std::string::~string((string *)local_18);
  nop();
  if (pDVar6 != (DTouchLayer *)0x0) {
    std::string::string((string *)local_18,"scrollViewContainer");
    pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar6);
    std::string::~string((string *)local_18);
    nop();
    cVar1 = std::vector<int,std::allocator<int>>::empty((vector<int,std::allocator<int>> *)param_1);
    if (cVar1 == '\0') {
      iVar4 = PlantNameMapperServerID::GetInstance();
      FUN_03db9c18(*(undefined8 *)param_1);
      NameMapperBase::GetNameForId(iVar4);
      cVar1 = FUN_0547419c((string *)local_38);
      if (cVar1 == '\0') {
        psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
        std::string::string((string *)local_18,"imgPlantEventsLimitedBg");
        pDVar11 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
        std::string::~string((string *)local_18);
        nop();
        DString::DString((DString *)&local_28,"IMAGE_UI_LIMITEDGACHA_");
        DString::operator+=((DString *)&local_28,(string *)local_38);
        if (pDVar11 != (DTouchLayer *)0x0) {
          pcVar12 = *(code **)(*(long *)pDVar11 + 0x2e8);
          ::operator+((DString *)&local_28,"_show");
          DString::operator_cast_to_string((DString *)local_18);
          (*pcVar12)(pDVar11,(string *)local_30);
          std::string::~string((string *)local_30);
          DString::~DString((DString *)local_18);
        }
        psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
        std::string::string((string *)local_18,"imgPlantEvents");
        pDVar11 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
        std::string::~string((string *)local_18);
        nop();
        if (pDVar11 != (DTouchLayer *)0x0) {
          pcVar12 = *(code **)(*(long *)pDVar11 + 0x2e8);
          DString::operator_cast_to_string((DString *)&local_28);
          (*pcVar12)(pDVar11,(string *)local_18);
          std::string::~string((string *)local_18);
        }
        DString::~DString((DString *)&local_28);
      }
      std::string::~string((string *)local_38);
    }
    if ((pDVar6 != (DTouchLayer *)0x0) &&
       (cVar1 = std::vector<int,std::allocator<int>>::empty
                          ((vector<int,std::allocator<int>> *)param_1), cVar1 == '\0')) {
      (**(code **)(*(long *)pDVar6 + 0x68))(pDVar6,1);
      local_60 = FUN_03dbb774(*(undefined8 *)param_1);
      local_58 = FUN_03dbb7c4(*(undefined8 *)(param_1 + 8));
      iVar4 = 0;
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58),
            bVar2) {
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
        iVar3 = PlantNameMapperServerID::GetInstance();
        NameMapperBase::GetNameForId(iVar3);
        cVar1 = FUN_0547419c(asStack_50);
        if (cVar1 == '\0') {
          psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
          bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_48);
          if (bVar2) {
            this_01 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
            std::string::string((string *)local_18,"imgHeadshotFrame");
            DNodeLoaderConfig::loadNode<DTouchLayer>
                      (this_01,(string *)local_18,(DTransformNode *)pDVar6);
            std::string::~string((string *)local_18);
            nop();
            DString::DString((DString *)&local_28);
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
            DString::format((char *)&local_28,"UI/Headshot/plant/rare_%d",
                            (ulong)*(uint *)(lVar8 + 0xd0));
            plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_40);
            pcVar12 = *(code **)(*plVar9 + 0x338);
            DString::operator_cast_to_string((DString *)&local_28);
            plVar9 = (long *)(*pcVar12)(plVar9,(string *)local_18,0);
            pcVar12 = *(code **)(*plVar9 + 0x110);
            plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_40);
            fVar13 = (float)(**(code **)(*plVar10 + 0x1c0))();
            plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_40);
            uVar14 = (**(code **)(*plVar10 + 0x1c8))();
            (*pcVar12)(fVar13 + (float)(iVar4 * 0x50),uVar14,plVar9);
            std::string::~string((string *)local_18);
            psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get(aeStack_40);
            std::string::string((string *)local_18,"imgHeadshot");
            pDVar11 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
            std::string::~string((string *)local_18);
            nop();
            DString::DString((DString *)local_18,"UI/Headshot/plant/");
            DString::operator+=((DString *)local_18,asStack_50);
            pcVar12 = *(code **)(*(long *)pDVar11 + 0x338);
            DString::operator_cast_to_string((DString *)local_18);
            (*pcVar12)(pDVar11,(string *)local_30,0);
            std::string::~string((string *)local_30);
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
            if (*(int *)(lVar8 + 0xd0) == 4) {
              psVar5 = (string *)DNodeWidget::getLoader((DNodeWidget *)this);
              std::string::string((string *)local_38,"imgHeadshotFrame_rate4");
              std::__exception_ptr::exception_ptr::_M_get(aeStack_40);
              DNodeLoaderConfig::loadNode(psVar5,(DTransformNode *)local_38);
              DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                        ((DRefPtr<UIAccumulatedLoginButton> *)local_30);
              std::string::~string((string *)local_38);
              nop();
            }
            if (iVar4 == 0) {
              psVar5 = (string *)DNodeWidget::getLoader((DNodeWidget *)this);
              std::string::string((string *)local_38,"imgEventsLimitedText");
              std::__exception_ptr::exception_ptr::_M_get(aeStack_40);
              DNodeLoaderConfig::loadNode(psVar5,(DTransformNode *)local_38);
              DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                        ((DRefPtr<UIAccumulatedLoginButton> *)local_30);
              std::string::~string((string *)local_38);
              nop();
              psVar5 = (string *)DNodeWidget::getLoader((DNodeWidget *)this);
              std::string::string((string *)local_38,"animHeadshot");
              std::__exception_ptr::exception_ptr::_M_get(aeStack_40);
              DNodeLoaderConfig::loadNode(psVar5,(DTransformNode *)local_38);
              DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                        ((DRefPtr<UIAccumulatedLoginButton> *)local_30);
              std::string::~string((string *)local_38);
              nop();
            }
            DString::~DString((DString *)local_18);
            DString::~DString((DString *)&local_28);
            DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                      ((DRefPtr<UIAccumulatedLoginButton> *)aeStack_40);
          }
          iVar4 = iVar4 + 1;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
        }
        std::string::~string(asStack_50);
        eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                  ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_60);
      }
      DScrollView::getViewSize();
      local_38[0] = local_28 * 0.125 * (float)iVar4;
      DScrollView::getViewSize();
      local_30[0] = local_18[0];
      pfVar7 = eastl::max_alt<float>(local_38,(float *)local_30);
      fVar13 = *pfVar7;
      pcVar12 = *(code **)(*(long *)pDVar6 + 0x210);
      (**(code **)(*(long *)pDVar6 + 0x218))((DString *)&local_28,pDVar6);
      DVec2::DVec2((DVec2 *)local_18,fVar13,local_24);
      (*pcVar12)(pDVar6,(string *)local_18);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitedGacha::loadWithNetMessage() */

void UILimitedGacha::loadWithNetMessage(void)

{
  char cVar1;
  int iVar2;
  UILimitedGacha *in_x0;
  WorldMapActivityBtnTurnChangeManager *this;
  TGALogMgr *pTVar3;
  float *pfVar4;
  string *psVar5;
  DTouchLayer *pDVar6;
  char *pcVar7;
  DTimerManager *this_00;
  wstring *extraout_x1;
  code *pcVar8;
  uint in_w3;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118 [6];
  function<bool(Sexy::Touch_const&)> afStack_100 [32];
  TGANFSLinkageData aTStack_e0 [40];
  TGAArtifactPresentData aTStack_b8 [8];
  int local_b0;
  int local_ac;
  undefined1 auStack_a8 [8];
  vector avStack_a0 [24];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (WorldMapActivityBtnTurnChangeManager *)
         Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstance();
  WorldMapActivityBtnTurnChangeManager::setIsPause(this,true);
  pcVar7 = "TimeLimited_Gacha";
  MessageRouter::Post<std::string_const&,char_const*>
            ((MessageRouter *)gMessageRouter,Message::SummerActivity,"TimeLimited_Gacha");
  TGANFSLinkageData::TGANFSLinkageData(aTStack_e0);
  std::string::append((string *)aTStack_e0,"1",(size_t)pcVar7);
  pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAArtifactPresentData::TGAArtifactPresentData(aTStack_b8,(TGAArtifactPresentData *)aTStack_e0);
  TGALogMgr::LogLimitedGacha(pTVar3,aTStack_b8);
  TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)aTStack_b8);
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  ActiveItem::RefreshDate(aAStack_88);
  LimitedGachaData::LimitedGachaData((LimitedGachaData *)aTStack_b8);
  cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aTStack_b8);
  if (cVar1 != '\0') {
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)local_118,avStack_a0);
    local_128 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)local_118);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_120,(__normal_iterator *)&local_128);
    std::vector<int,std::allocator<int>>::insert
              ((vector<int,std::allocator<int>> *)local_118,local_120,auStack_a8);
    in_w3 = (uint)(local_ac == 0);
    updatePlantShowFromNetwork(in_x0,(vector *)local_118,local_b0 == 0,local_ac == 0);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_118);
  }
  iVar2 = ActiveItem::GetLeftTimes(aAStack_88);
  local_118[0] = 0;
  *(float *)(in_x0 + 0x134) = (float)iVar2;
  pfVar4 = eastl::max_alt<float>((float *)(in_x0 + 0x134),(float *)local_118);
  *(float *)(in_x0 + 0x134) = *pfVar4;
  psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(in_x0 + 0xd8));
  std::string::string((string *)local_118,"root/imgPlantEventsLimited/textCountDownTime");
  pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
  std::string::~string((string *)local_118);
  nop();
  if (pDVar6 != (DTouchLayer *)0x0) {
    DString::DString((DString *)local_118);
    if (86400.0 < *(float *)(in_x0 + 0x134)) {
      std::string::string((string *)&local_120,"[DAY_INFO]");
      StringHelper::ReplaceNumberString
                ((StringHelper *)&local_120,(string *)L"{NUMBER}",
                 (wchar_t *)(ulong)(uint)(int)(*(float *)(in_x0 + 0x134) * 1.1574074e-05),in_w3);
      std::string::~string((string *)&local_120);
      nop();
      Sexy::SexyStringToUTF8String((Sexy *)&local_128,extraout_x1);
      DString::operator=((DString *)local_118,(string *)&local_120);
      std::string::~string((string *)&local_120);
      FUN_05476c50((Sexy *)&local_128);
    }
    else {
      DString::setWithTime((DString *)local_118,(long)*(float *)(in_x0 + 0x134),0);
    }
    pcVar8 = *(code **)(*(long *)pDVar6 + 0x338);
    pcVar7 = DString::operator_cast_to_char_((DString *)local_118);
    (*pcVar8)(pDVar6,pcVar7);
    this_00 = (DTimerManager *)DTimerManager::getInstane();
    std::string::string((string *)&local_120,"UILimitedGachaCountDown");
    FUN_03dba740(afStack_100);
    DTimerManager::addTimer(this_00,(string *)&local_120,(function *)afStack_100,1.0,0);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_100);
    std::string::~string((string *)&local_120);
    nop();
    DString::~DString((DString *)local_118);
  }
  LimitedGachaData::~LimitedGachaData((LimitedGachaData *)aTStack_b8);
  ActiveItem::~ActiveItem(aAStack_88);
  TGANFSLinkageData::~TGANFSLinkageData(aTStack_e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitedGacha::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void UILimitedGacha::onNotifyRefreshActivityList(bool param_1,set *param_2)

{
  LawnApp *this;
  DTimerManager *this_00;
  long lVar1;
  PVZ2UIDialog *pPVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this_00 = (DTimerManager *)DTimerManager::getInstane();
    std::string::string(asStack_50,"UILimitedGacha");
    DTimerManager::removeTimer(this_00,asStack_50);
    std::string::~string(asStack_50);
    nop();
    lVar1 = create(true);
    if (lVar1 != 0) {
      loadWithNetMessage();
    }
  }
  else {
    FUN_05478178(awStack_58,&DAT_056f11a8,auStack_68);
    FUN_05478178((wstring *)asStack_50,L"[REWARD_GET_TIP_FAILED]",auStack_60);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,(wstring *)asStack_50);
    FUN_05476c50((wstring *)asStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(wstring *)asStack_50);
    PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
    setUnactive();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UILimitedGacha::isActive() */

undefined1 UILimitedGacha::isActive(void)

{
  return s_isActive;
}

