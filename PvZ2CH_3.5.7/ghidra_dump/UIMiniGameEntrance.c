// Class: UIMiniGameEntrance


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameEntrance::GetLayoutName() */

void __thiscall UIMiniGameEntrance::GetLayoutName(UIMiniGameEntrance *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIMiniGameEntrance");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIMiniGameEntrance::~UIMiniGameEntrance() */

void __thiscall UIMiniGameEntrance::~UIMiniGameEntrance(UIMiniGameEntrance *this)

{
  *(undefined ***)this = &PTR_GetClass_066c7110;
  *(undefined **)(this + 0xd8) = &DAT_066c7460;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<UIMiniGameEntrance>::~UISingletonDialog
            ((UISingletonDialog<UIMiniGameEntrance> *)this);
  return;
}


/* UIMiniGameEntrance::~UIMiniGameEntrance() */

void __thiscall UIMiniGameEntrance::~UIMiniGameEntrance(UIMiniGameEntrance *this)

{
  ~UIMiniGameEntrance(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameEntrance::refrashCC(int) */

void __thiscall UIMiniGameEntrance::refrashCC(UIMiniGameEntrance *this,int param_1)

{
  UIWidgetText *pUVar1;
  PVZ2UIButton *pPVar2;
  int iVar3;
  long lVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_2");
  iVar3 = (int)lVar4;
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_18,"[ACTIVITY_SUMMERY_CHALLENGE_NUM]");
  StringHelper::ReplaceNumberString
            ((StringHelper *)asStack_18,(string *)L"{NUMBER}",(wchar_t *)(ulong)(uint)param_1,iVar3)
  ;
  PuzzleTip::SetTip(pUVar1,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (0 < param_1) {
    std::string::string(asStack_10,"UIButton_1");
    pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*(long *)pPVar2 + 0x188))(pPVar2,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameEntrance::showOpenErrorDialog() */

void UIMiniGameEntrance::showOpenErrorDialog(void)

{
  LawnApp *this;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this = gLawnApp;
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_58,L"[REVIVE_TIP]",auStack_68);
  FUN_05478178(awStack_50,L"[MINIGAME_RANK_NOTOPEN]",auStack_60);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIMiniGameEntrance::onFinishBuyChallengeCount(bool const&) */

void __thiscall
UIMiniGameEntrance::onFinishBuyChallengeCount(UIMiniGameEntrance *this,bool *param_1)

{
  uint uVar1;
  StreamBuffer *this_00;
  MiniGameManager *this_01;
  BaseResStreamsDriver *this_02;
  
  if (*param_1 == false) {
    LawnApp::ShowGemStoreConfirm(gLawnApp,2);
    return;
  }
  this_00 = (StreamBuffer *)Sexy::LazySingleton<MiniGameManager>::GetInstancePtr();
  StreamBuffer::SetBuffReadPos(this_00,1);
  this_01 = (MiniGameManager *)Sexy::LazySingleton<MiniGameManager>::GetInstancePtr();
  MiniGameManager::subtractLeftBuyChance(this_01,1);
  this_02 = (BaseResStreamsDriver *)Sexy::LazySingleton<MiniGameManager>::GetInstancePtr();
  uVar1 = Sexy::BaseResStreamsDriver::IsDecompressionFullyComplete(this_02);
  Sexy::OutputDebugStrF
            ((wchar_t *)"UIMiniGameEntrance::onFinishBuyChallengeCount leftChance = %d",(ulong)uVar1
            );
  refrashCC(this,uVar1);
  return;
}


/* UIMiniGameEntrance::UIMiniGameEntrance() */

void __thiscall UIMiniGameEntrance::UIMiniGameEntrance(UIMiniGameEntrance *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UIMiniGameEntrance>::UISingletonDialog
            ((UISingletonDialog<UIMiniGameEntrance> *)this);
  *(undefined ***)this = &PTR_GetClass_066c7110;
  *(undefined **)(this + 0xd8) = &DAT_066c7460;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<UIMiniGameEntrance,void(UIMiniGameEntrance::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameEntrance::OnCreate() */

void UIMiniGameEntrance::OnCreate(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  Dialog *in_x0;
  Widget *pWVar5;
  DangerRoomManager *this;
  TGALogMgr *pTVar6;
  BaseResStreamsDriver *this_00;
  UIWidgetText *pUVar7;
  ulong uVar8;
  PVZ2UIButton *pPVar9;
  int in_w3;
  string asStack_120 [8];
  TGAPlantWarsData aTStack_118 [64];
  string asStack_d8 [80];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate(in_x0);
  std::string::string(asStack_d8,"Background_0");
  pWVar5 = (Widget *)UI::Dialog::GetWidget(in_x0,asStack_d8);
  std::string::~string(asStack_d8);
  nop();
  UI::Dialog::SetCenter(in_x0,pWVar5,false);
  *(int *)(pWVar5 + 0x4c) = *(int *)(pWVar5 + 0x4c) + -0x14;
  this = (DangerRoomManager *)Sexy::LazySingleton<MiniGameManager>::GetInstancePtr();
  uVar2 = DangerRoomManager::GetMaxLastWeekLevel(this);
  *(undefined4 *)(in_x0 + 0x134) = uVar2;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  if (local_70 != '\0') {
    MiniGameConfig::MiniGameConfig((MiniGameConfig *)asStack_d8);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)asStack_d8);
    if (cVar1 != '\0') {
      this_00 = (BaseResStreamsDriver *)Sexy::LazySingleton<MiniGameManager>::GetInstancePtr();
      uVar4 = Sexy::BaseResStreamsDriver::IsDecompressionFullyComplete(this_00);
      std::string::string((string *)aTStack_118,"UIText_2");
      pUVar7 = UI::Dialog::GetWidget<UIWidgetText>(in_x0,(string *)aTStack_118);
      std::string::~string((string *)aTStack_118);
      nop();
      std::string::string(asStack_120,"[ACTIVITY_SUMMERY_CHALLENGE_NUM]");
      StringHelper::ReplaceNumberString
                ((StringHelper *)asStack_120,(string *)L"{NUMBER}",(wchar_t *)(ulong)uVar4,in_w3);
      PuzzleTip::SetTip(pUVar7,aTStack_118);
      FUN_05476c50(aTStack_118);
      std::string::~string(asStack_120);
      nop();
      std::string::string((string *)aTStack_118,"Tab0_EndTips");
      pUVar7 = UI::Dialog::GetWidget<UIWidgetText>(in_x0,(string *)aTStack_118);
      std::string::~string((string *)aTStack_118);
      nop();
      std::string::string(asStack_120,"[ACTIVITY_SUMMERY_END_TIPS]");
      uVar8 = ActiveItem::GetLeftDays(aAStack_88);
      StringHelper::ReplaceNumberString
                ((StringHelper *)asStack_120,(string *)L"{NUMBER}",(wchar_t *)(uVar8 & 0xffffffff),
                 in_w3);
      PuzzleTip::SetTip(pUVar7,aTStack_118);
      FUN_05476c50(aTStack_118);
      std::string::~string(asStack_120);
      nop();
      if ((int)uVar4 < 1) {
        std::string::string((string *)aTStack_118,"UIButton_1");
        pPVar9 = UI::Dialog::GetWidget<PVZ2UIButton>(in_x0,(string *)aTStack_118);
        std::string::~string((string *)aTStack_118);
        nop();
        (**(code **)(*(long *)pPVar9 + 0x188))(pPVar9,1);
      }
    }
    MiniGameConfig::~MiniGameConfig((MiniGameConfig *)asStack_d8);
  }
  TGAPlantWarsData::TGAPlantWarsData(aTStack_118);
  pTVar6 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogPurchaseData::TGALogPurchaseData
            ((TGALogPurchaseData *)asStack_d8,(TGALogPurchaseData *)aTStack_118);
  TGALogMgr::LogMinigame(pTVar6,1,asStack_d8);
  TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)asStack_d8);
  *(undefined4 *)(in_x0 + 0x138) = 0;
  TGAPlantWarsData::~TGAPlantWarsData(aTStack_118);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameEntrance::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
UIMiniGameEntrance::onNotifyRefreshActivityList(UIMiniGameEntrance *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_9c = 0x29b0;
    local_98 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_9c);
    local_90 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
    if (bVar1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_03920640(local_80);
      if ((cVar2 == '\0') || (local_70 == '\0')) {
        showOpenErrorDialog();
        ActiveItem::~ActiveItem(aAStack_88);
      }
      else {
        UISingletonDialog<UIMiniGameRank>::ShowDialog();
        ActiveItem::~ActiveItem(aAStack_88);
      }
    }
  }
  else {
    showOpenErrorDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameEntrance::ButtonDepress(int) */

void UIMiniGameEntrance::ButtonDepress(int param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ReceivedDataCallback *pRVar6;
  UIMessageBox *this;
  BaseTaskResource *pBVar7;
  ActivityManager *this_00;
  ulong uVar8;
  uint *puVar9;
  undefined4 in_w1;
  int in_w3;
  uint uVar10;
  StringHelper aSStack_118 [8];
  wstring awStack_110 [8];
  Delegate2<UIMessageBox*,int> aDStack_108 [48];
  string asStack_d8 [8];
  uint local_d0;
  undefined8 local_a8;
  undefined8 local_a0;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  pRVar6 = (ReceivedDataCallback *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  switch(in_w1) {
  case 0:
    UISingletonDialog<UIMiniGameEntrance>::CloseDialog();
    break;
  case 1:
    UISingletonDialog<UIMiniGameEntrance>::CloseDialog();
    iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar4);
    if (local_70 != '\0') {
      MiniGameConfig::MiniGameConfig((MiniGameConfig *)asStack_d8);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)asStack_d8);
      if (cVar2 != '\0') {
        Sexy::StrFormat("MiniGameActivity%d",(string *)awStack_110,(ulong)local_d0);
        GameStateMgr::StartLevel(gGameStateMgr,&DAT_06abaf40,(string *)awStack_110,0xffffffff,1,1,0)
        ;
        std::string::~string((string *)awStack_110);
      }
      MiniGameConfig::~MiniGameConfig((MiniGameConfig *)asStack_d8);
    }
    goto LAB_03924100;
  case 2:
    std::string::string(asStack_d8,"DaveShop/active");
    bVar1 = GetLuaSharedData<bool>(asStack_d8,false);
    std::string::~string(asStack_d8);
    nop();
    if (bVar1) {
      MessageRouter::Post<int,int,int,int>((MessageRouter *)gMessageRouter,Message::Jump,1,2);
      std::string::string(asStack_d8,"OpenMiniGameShopUI");
      Cpp2Lua(asStack_d8);
      std::string::~string(asStack_d8);
      nop();
    }
    break;
  case 3:
    this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::Request(this_00,0x29b0,true,0);
    break;
  case 4:
    UISingletonDialog<UIMiniGameRule>::ShowDialog();
    break;
  case 5:
    this = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this == (UIMessageBox *)0x0) break;
    pBVar7 = (BaseTaskResource *)Sexy::LazySingleton<MiniGameManager>::GetInstancePtr();
    uVar3 = Sexy::BaseTaskResource::GetType(pBVar7);
    iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar4);
    if (local_70 == '\0') {
      uVar10 = 0;
    }
    else {
      MiniGameConfig::MiniGameConfig((MiniGameConfig *)asStack_d8);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)asStack_d8);
      if (cVar2 == '\0') {
LAB_039242b0:
        uVar10 = 0;
      }
      else {
        iVar4 = *(int *)(pRVar6 + 0x134);
        pBVar7 = (BaseTaskResource *)Sexy::LazySingleton<MiniGameManager>::GetInstancePtr();
        iVar5 = Sexy::BaseTaskResource::GetType(pBVar7);
        uVar8 = FUN_0392064c(local_a8,local_a0);
        if (uVar8 <= (ulong)(long)(iVar4 - iVar5)) goto LAB_039242b0;
        puVar9 = (uint *)FUN_03920658(local_a8,(long)(iVar4 - iVar5));
        uVar10 = *puVar9;
        *(uint *)(pRVar6 + 0x138) = uVar10;
      }
      MiniGameConfig::~MiniGameConfig((MiniGameConfig *)asStack_d8);
    }
    std::string::string(asStack_d8,"[BOSSCHALLENGE_BUYCHALLENGE_TIPS1]");
    StringHelper::ReplaceNumberString
              ((StringHelper *)asStack_d8,(string *)&DAT_0570cd50,(wchar_t *)(ulong)uVar10,in_w3);
    std::string::~string(asStack_d8);
    nop();
    StringHelper::ReplaceNumberString
              (aSStack_118,(wstring *)L"{NUMBER}",(wchar_t *)(ulong)uVar3,in_w3);
    FUN_054766c8(aSStack_118,asStack_d8);
    FUN_05476c50(asStack_d8);
    TodStringTranslate(L"[REVIVE_TIP]");
    UIMessageBox::SetMessage(this,(wstring *)aSStack_118,awStack_110);
    UIMessageBox::SetShowType(this,6);
    std::string::string(asStack_d8,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    UIMessageBox::SetBackground(this,asStack_d8);
    std::string::~string(asStack_d8);
    nop();
    UIMessageBox::SetBackgroundDarken(this,true,0.5);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (pRVar6,OnMessageCallback);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<UIMiniGameEntrance,void(UIMiniGameEntrance::*)(UIMessageBox*,int)>
              (aDStack_108,asStack_d8);
    UIMessageBox::SetCallback(this,aDStack_108);
    FUN_05476c50(awStack_110);
    FUN_05476c50(aSStack_118);
LAB_03924100:
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to UIMiniGameEntrance::ButtonDepress(int) */

void __thiscall UIMiniGameEntrance::ButtonDepress(UIMiniGameEntrance *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameEntrance::OnMessageCallback(UIMessageBox*, int) */

void __thiscall
UIMiniGameEntrance::OnMessageCallback(UIMiniGameEntrance *this,UIMessageBox *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  BaseTaskResource *this_00;
  ulong uVar6;
  NetworkMgr *this_01;
  INetworkMsgProcess *this_02;
  uint *puVar7;
  UIMiniGameEntrance *pUVar8;
  char *__s;
  TGALogMgr *pTVar9;
  size_t __n;
  TGAPlantWarsData aTStack_158 [16];
  string asStack_148 [48];
  DRefPtr<DTouchLayer> aDStack_118 [64];
  MiniGameConfig aMStack_d8 [48];
  undefined8 local_a8;
  undefined8 local_a0;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    ProfileUtils::Profile();
    iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar4);
    if (local_70 != '\0') {
      MiniGameConfig::MiniGameConfig(aMStack_d8);
      cVar3 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aMStack_d8);
      if (cVar3 != '\0') {
        iVar4 = *(int *)(this + 0x134);
        this_00 = (BaseTaskResource *)Sexy::LazySingleton<MiniGameManager>::GetInstancePtr();
        iVar5 = Sexy::BaseTaskResource::GetType(this_00);
        iVar1 = *(int *)(this + 0x134);
        iVar4 = iVar4 - iVar5;
        if ((iVar4 < iVar1) &&
           (uVar6 = FUN_0392064c(local_a8,local_a0), (ulong)(long)iVar1 <= uVar6)) {
          this_01 = (NetworkMgr *)NetworkMgr::Instance();
          this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
          puVar7 = (uint *)FUN_03920658(local_a8,(long)iVar4);
          uVar2 = *puVar7;
          pUVar8 = ::operator_new(0x28);
          ICloudRequestCallbackFunction<UIMiniGameEntrance,bool>::ICloudRequestCallbackFunction
                    (pUVar8,(_func_void_bool_ptr *)this);
          DRefPtr<DTouchLayer>::DRefPtr(aDStack_118,(DTouchLayer *)pUVar8);
          __n = (size_t)uVar2;
          INetworkMsgProcess::ICloudRequestUseGem
                    (this_02,0xcc38,uVar2,(DRefPtr *)aDStack_118,0xf,false);
          DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                    ((DRefPtr<UIAccumulatedLoginButton> *)aDStack_118);
          TGAPlantWarsData::TGAPlantWarsData(aTStack_158);
          DString::DString((DString *)aDStack_118,*(int *)(this + 0x138));
          __s = (char *)DString::c_str((DString *)aDStack_118);
          std::string::append(asStack_148,__s,__n);
          DString::~DString((DString *)aDStack_118);
          pTVar9 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
          TGALogPurchaseData::TGALogPurchaseData
                    ((TGALogPurchaseData *)aDStack_118,(TGALogPurchaseData *)aTStack_158);
          TGALogMgr::LogMinigame(pTVar9,3,aDStack_118);
          TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)aDStack_118);
          puVar7 = (uint *)FUN_03920658(local_a8,(long)iVar4);
          Sexy::OutputDebugStrF
                    ((wchar_t *)"UIMiniGameEntrance buy time data.m_vecChanceCost[buyIndex] %d",
                     (ulong)*puVar7);
          TGAPlantWarsData::~TGAPlantWarsData(aTStack_158);
        }
      }
      MiniGameConfig::~MiniGameConfig(aMStack_d8);
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

