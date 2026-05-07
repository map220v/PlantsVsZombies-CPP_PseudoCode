// Class: UINewRecall


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewRecall::GetLayoutName() */

void __thiscall UINewRecall::GetLayoutName(UINewRecall *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINewRecall");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewRecall::~UINewRecall() */

void __thiscall UINewRecall::~UINewRecall(UINewRecall *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_0670c590;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0670c240;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Joust_Reward");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_Plant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Material");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_GachaDetail");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HappyVaseBreaker");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<UINewRecall>::~UISingletonDialog((UISingletonDialog<UINewRecall> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewRecall::~UINewRecall() */

void __thiscall UINewRecall::~UINewRecall(UINewRecall *this)

{
  ~UINewRecall(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewRecall::ButtonDepress(int) */

void __thiscall UINewRecall::ButtonDepress(UINewRecall *this,int param_1)

{
  TGALogMgr *pTVar1;
  PVZ2UIButton *pPVar2;
  TGANFSLinkageData aTStack_a0 [40];
  undefined4 local_78 [14];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 100) {
    TGAScrollbannerData::TGAScrollbannerData((TGAScrollbannerData *)aTStack_a0);
    local_78[0] = 1;
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_78);
    FUN_05474278((TGAScrollbannerData *)aTStack_a0,asStack_40);
    std::string::~string(asStack_40);
    pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    LogCacheInfo::LogCacheInfo((LogCacheInfo *)asStack_40,(LogCacheInfo *)aTStack_a0);
    TGALogMgr::LogNewRecallSign(pTVar1,asStack_40);
    Sexy::PACommand::~PACommand((PACommand *)asStack_40);
    (**(code **)(**(long **)(this + 0x140) + 0x158))(*(long **)(this + 0x140),0);
    (**(code **)(**(long **)(this + 0x148) + 0x158))(*(long **)(this + 0x148),0);
    (**(code **)(**(long **)(this + 0x138) + 0x158))(*(long **)(this + 0x138),1);
    pPVar2 = *(PVZ2UIButton **)(this + 0x150);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06ac5c80,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06ac5c80,2);
    PVZ2UIButton::SetDialogStates(pPVar2,(PVZ2UIImage *)local_78,(PVZ2UIImage *)asStack_40);
    pPVar2 = *(PVZ2UIButton **)(this + 0x158);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06ac5db8,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06ac5db8,2);
    PVZ2UIButton::SetDialogStates(pPVar2,(PVZ2UIImage *)local_78,(PVZ2UIImage *)asStack_40);
    pPVar2 = *(PVZ2UIButton **)(this + 0x160);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06ac5a18,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06ac5a18,2);
    PVZ2UIButton::SetDialogStates(pPVar2,(PVZ2UIImage *)local_78,(PVZ2UIImage *)asStack_40);
    Sexy::PACommand::~PACommand((PACommand *)aTStack_a0);
  }
  else if (param_1 < 0x65) {
    if (param_1 == 0x58) {
      UISingletonDialog<UINewRecall>::CloseDialog();
    }
  }
  else if (param_1 == 200) {
    TGANFSLinkageData::TGANFSLinkageData(aTStack_a0);
    local_78[0] = 1;
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_78);
    FUN_05474278(aTStack_a0,asStack_40);
    std::string::~string(asStack_40);
    pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGAArtifactPresentData::TGAArtifactPresentData
              ((TGAArtifactPresentData *)asStack_40,(TGAArtifactPresentData *)aTStack_a0);
    TGALogMgr::LogNewRecallBank(pTVar1,asStack_40);
    TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)asStack_40);
    (**(code **)(**(long **)(this + 0x138) + 0x158))(*(long **)(this + 0x138),0);
    (**(code **)(**(long **)(this + 0x148) + 0x158))(*(long **)(this + 0x148),0);
    (**(code **)(**(long **)(this + 0x140) + 0x158))(*(long **)(this + 0x140),1);
    pPVar2 = *(PVZ2UIButton **)(this + 0x150);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06ac5fd0,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06ac5fd0,2);
    PVZ2UIButton::SetDialogStates(pPVar2,(PVZ2UIImage *)local_78,(PVZ2UIImage *)asStack_40);
    pPVar2 = *(PVZ2UIButton **)(this + 0x158);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06ac5b80,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06ac5b80,2);
    PVZ2UIButton::SetDialogStates(pPVar2,(PVZ2UIImage *)local_78,(PVZ2UIImage *)asStack_40);
    pPVar2 = *(PVZ2UIButton **)(this + 0x160);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06ac5a18,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06ac5a18,2);
    PVZ2UIButton::SetDialogStates(pPVar2,(PVZ2UIImage *)local_78,(PVZ2UIImage *)asStack_40);
    TGANFSLinkageData::~TGANFSLinkageData(aTStack_a0);
  }
  else if (param_1 == 300) {
    TGANFSLinkageData::TGANFSLinkageData(aTStack_a0);
    local_78[0] = 1;
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_78);
    FUN_05474278(aTStack_a0,asStack_40);
    std::string::~string(asStack_40);
    pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGAArtifactPresentData::TGAArtifactPresentData
              ((TGAArtifactPresentData *)asStack_40,(TGAArtifactPresentData *)aTStack_a0);
    TGALogMgr::LogNewRecallBundle(pTVar1,asStack_40);
    TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)asStack_40);
    (**(code **)(**(long **)(this + 0x138) + 0x158))(*(long **)(this + 0x138),0);
    (**(code **)(**(long **)(this + 0x140) + 0x158))(*(long **)(this + 0x140),0);
    (**(code **)(**(long **)(this + 0x148) + 0x158))(*(long **)(this + 0x148),1);
    pPVar2 = *(PVZ2UIButton **)(this + 0x150);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06ac5fd0,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06ac5fd0,2);
    PVZ2UIButton::SetDialogStates(pPVar2,(PVZ2UIImage *)local_78,(PVZ2UIImage *)asStack_40);
    pPVar2 = *(PVZ2UIButton **)(this + 0x158);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06ac5db8,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06ac5db8,2);
    PVZ2UIButton::SetDialogStates(pPVar2,(PVZ2UIImage *)local_78,(PVZ2UIImage *)asStack_40);
    pPVar2 = *(PVZ2UIButton **)(this + 0x160);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06ac57e0,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06ac57e0,2);
    PVZ2UIButton::SetDialogStates(pPVar2,(PVZ2UIImage *)local_78,(PVZ2UIImage *)asStack_40);
    TGANFSLinkageData::~TGANFSLinkageData(aTStack_a0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINewRecall::ButtonDepress(int) */

void __thiscall UINewRecall::ButtonDepress(UINewRecall *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewRecall::UINewRecall() */

void __thiscall UINewRecall::UINewRecall(UINewRecall *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UINewRecall>::UISingletonDialog((UISingletonDialog<UINewRecall> *)this);
  this[0x131] = (UINewRecall)0x0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_0670c240;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined **)(this + 0xd8) = &DAT_0670c590;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Joust_Reward");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_HeadShot_Plant");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Fragment_Material");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_GachaDetail");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_HappyVaseBreaker");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<UINewRecall,void(UINewRecall::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewRecall::OnCreate() */

void __thiscall UINewRecall::OnCreate(UINewRecall *this)

{
  wchar_t *pwVar1;
  UIWidgetBackground *pUVar2;
  Widget *pWVar3;
  PVZ2UIButton *pPVar4;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  wchar_t local_30 [2];
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pwVar1 = local_30 + 1;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_20,"Background_0");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  *(int *)(pUVar2 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar2 + 0x50)) / 2;
  std::string::string(asStack_20,"Widget_Main1");
  pWVar3 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_20);
  *(Widget **)(this + 0x138) = pWVar3;
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"Widget_Main2");
  pWVar3 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_20);
  *(Widget **)(this + 0x140) = pWVar3;
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"Widget_Main3");
  pWVar3 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_20);
  *(Widget **)(this + 0x148) = pWVar3;
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"UIButton_Btn1");
  pPVar4 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_20);
  *(PVZ2UIButton **)(this + 0x150) = pPVar4;
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"UIButton_Btn2");
  pPVar4 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_20);
  *(PVZ2UIButton **)(this + 0x158) = pPVar4;
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"UIButton_Btn3");
  pPVar4 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_20);
  *(PVZ2UIButton **)(this + 0x160) = pPVar4;
  std::string::~string(asStack_20);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
  local_30[1] = 1;
  local_30[0] = L'⨨';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,pwVar1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)asStack_20,
             (pair *)apStack_28);
  local_30[1] = 1;
  local_30[0] = L'⨩';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,pwVar1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)asStack_20,
             (pair *)apStack_28);
  local_30[1] = 1;
  local_30[0] = L'⨪';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,pwVar1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)asStack_20,
             (pair *)apStack_28);
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestActivityList(this_01,(vector *)asStack_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewRecall::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>, std::allocator<int>
   > const&) */

void __thiscall
UINewRecall::onNotifyRefreshActivityList(UINewRecall *this,bool param_1,set *param_2)

{
  UINewRecall UVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  NewRecallBankWidget *this_00;
  NewRecallSignWidget *this_01;
  NewRecallBundleWidget *this_02;
  long lVar7;
  int local_e4;
  undefined8 local_e0;
  undefined8 local_d8 [10];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (!param_1) goto LAB_03a5d770;
  UVar1 = this[0x131];
  local_e4 = 0x2a28;
  local_e0 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_e4);
  local_d8[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)param_2);
  bVar2 = eastl::operator!=((rbtree_iterator *)&local_e0,(rbtree_iterator *)local_d8);
  if (bVar2) {
    iVar6 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar6);
    cVar4 = FUN_03a53f58(local_80);
    if ((cVar4 == '\0') || (local_70 == '\0')) {
LAB_03a5d944:
      iVar6 = 0;
      cVar4 = '\x01';
      (**(code **)(**(long **)(this + 0x150) + 0x158))(*(long **)(this + 0x150),0);
    }
    else {
      NewRecallSignData::NewRecallSignData((NewRecallSignData *)local_d8);
      cVar4 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)local_d8);
      if (cVar4 == '\0') {
        NewRecallSignData::~NewRecallSignData((NewRecallSignData *)local_d8);
        goto LAB_03a5d944;
      }
      cVar4 = '\0';
      iVar6 = 1;
      (**(code **)(**(long **)(this + 0x138) + 0x80))(*(long **)(this + 0x138),1,1);
      this_01 = ::operator_new(0xe0);
      NewRecallSignWidget::NewRecallSignWidget(this_01);
      (**(code **)(*(long *)this_01 + 0x198))
                (this_01,0,0,*(undefined4 *)(*(long *)(this + 0x138) + 0x50),
                 *(undefined4 *)(*(long *)(this + 0x138) + 0x54));
      NewRecallSignWidget::init(this_01,(NewRecallSignData *)local_d8);
      (**(code **)(**(long **)(this + 0x138) + 0x60))(*(long **)(this + 0x138),this_01);
      NewRecallSignData::~NewRecallSignData((NewRecallSignData *)local_d8);
    }
    this[0x131] = (UINewRecall)0x1;
    ActiveItem::~ActiveItem(aAStack_88);
  }
  else {
    iVar6 = 0;
    cVar4 = '\0';
  }
  local_e4 = 0x2a29;
  local_e0 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_e4);
  local_d8[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)param_2);
  bVar2 = eastl::operator!=((rbtree_iterator *)&local_e0,(rbtree_iterator *)local_d8);
  if (bVar2) {
    iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar5);
    cVar3 = FUN_03a53f58(local_80);
    if ((cVar3 == '\0') || (local_70 == '\0')) {
LAB_03a5d99c:
      cVar4 = cVar4 + '\x01';
      (**(code **)(**(long **)(this + 0x158) + 0x158))(*(long **)(this + 0x158),0);
    }
    else {
      NewRecallBankData::NewRecallBankData((NewRecallBankData *)local_d8);
      cVar3 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)local_d8);
      if (cVar3 == '\0') {
        NewRecallBankData::~NewRecallBankData((NewRecallBankData *)local_d8);
        goto LAB_03a5d99c;
      }
      (**(code **)(**(long **)(this + 0x140) + 0x80))(*(long **)(this + 0x140),1,1);
      this_00 = ::operator_new(0x158);
      NewRecallBankWidget::NewRecallBankWidget(this_00);
      (**(code **)(*(long *)this_00 + 0x198))
                (this_00,0,0,*(undefined4 *)(*(long *)(this + 0x140) + 0x50),
                 *(undefined4 *)(*(long *)(this + 0x140) + 0x54));
      NewRecallBankWidget::init(this_00,(NewRecallBankData *)local_d8);
      (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140),this_00);
      if (UVar1 == (UINewRecall)0x0) {
        lVar7 = *(long *)(this + 0x158);
        iVar5 = FUN_03a55578(100);
        *(int *)(lVar7 + 0x4c) = *(int *)(lVar7 + 0x4c) + iVar5 * iVar6;
      }
      iVar6 = iVar6 + 1;
      NewRecallBankData::~NewRecallBankData((NewRecallBankData *)local_d8);
    }
    this[0x131] = (UINewRecall)0x1;
    ActiveItem::~ActiveItem(aAStack_88);
  }
  local_e4 = 0x2a2a;
  local_e0 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_e4);
  local_d8[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)param_2);
  bVar2 = eastl::operator!=((rbtree_iterator *)&local_e0,(rbtree_iterator *)local_d8);
  if (bVar2) {
    iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar5);
    cVar3 = FUN_03a53f58(local_80);
    if ((cVar3 == '\0') || (local_70 == '\0')) {
LAB_03a5d8ec:
      cVar4 = cVar4 + '\x01';
      (**(code **)(**(long **)(this + 0x160) + 0x158))(*(long **)(this + 0x160),0);
    }
    else {
      NewRecallBundleData::NewRecallBundleData((NewRecallBundleData *)local_d8);
      cVar3 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)local_d8);
      if (cVar3 == '\0') {
        NewRecallBundleData::~NewRecallBundleData((NewRecallBundleData *)local_d8);
        goto LAB_03a5d8ec;
      }
      (**(code **)(**(long **)(this + 0x148) + 0x80))(*(long **)(this + 0x148),1,1);
      this_02 = ::operator_new(0xf0);
      NewRecallBundleWidget::NewRecallBundleWidget(this_02);
      (**(code **)(*(long *)this_02 + 0x198))
                (this_02,0,0,*(undefined4 *)(*(long *)(this + 0x148) + 0x50),
                 *(undefined4 *)(*(long *)(this + 0x148) + 0x54));
      NewRecallBundleWidget::init(this_02,(NewRecallBundleData *)local_d8);
      (**(code **)(**(long **)(this + 0x148) + 0x60))(*(long **)(this + 0x148),this_02);
      if (UVar1 == (UINewRecall)0x0) {
        lVar7 = *(long *)(this + 0x160);
        iVar5 = FUN_03a55578(100);
        *(int *)(lVar7 + 0x4c) = *(int *)(lVar7 + 0x4c) + iVar5 * iVar6;
      }
      NewRecallBundleData::~NewRecallBundleData((NewRecallBundleData *)local_d8);
    }
    this[0x131] = (UINewRecall)0x1;
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (UVar1 == (UINewRecall)0x0) {
    if (*(char *)(*(long *)(this + 0x150) + 0x6c) == '\0') {
      if (*(char *)(*(long *)(this + 0x158) + 0x6c) == '\0') {
        if (*(char *)(*(long *)(this + 0x160) + 0x6c) != '\0') {
          (**(code **)(*(long *)this + 0x338))(this,300);
        }
      }
      else {
        (**(code **)(*(long *)this + 0x338))(this,200);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x338))(this,100);
    }
    if (cVar4 == '\x03') {
      UISingletonDialog<UINewRecall>::CloseDialog();
    }
  }
LAB_03a5d770:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

