// Class: CustomLevelView


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelView::~CustomLevelView() */

void __thiscall CustomLevelView::~CustomLevelView(CustomLevelView *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066618e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06661c08;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_MainMenu");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_CustomLevel");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelView::~CustomLevelView() */

void __thiscall CustomLevelView::~CustomLevelView(CustomLevelView *this)

{
  ~CustomLevelView(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelView::onMsgError(int, std::string const&) */

void __thiscall CustomLevelView::onMsgError(CustomLevelView *this,int param_1,string *param_2)

{
  char cVar1;
  _PacketId a_Stack_ce8 [2368];
  string asStack_3a8 [928];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _PacketId::_PacketId(a_Stack_ce8);
  cVar1 = std::operator==(param_2,asStack_3a8);
  if (cVar1 != '\0') {
    this[0x115] = (CustomLevelView)0x1;
  }
  _PacketId::~_PacketId(a_Stack_ce8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelView::CheckUploadedLevels() */

void CustomLevelView::CheckUploadedLevels(void)

{
  CustomLevelMgr *this;
  long lVar1;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::RequestGetFilterPreviewList(this,0,0);
  lVar1 = UISingletonDialog<UIUnchartedEntry>::GetSingletonPtr();
  if (lVar1 != 0) {
    UISingletonDialog<UIUnchartedEntry>::CloseDialog();
  }
  lVar1 = UISingletonDialog<ActivityLevelsChoose>::GetSingletonPtr();
  if (lVar1 != 0) {
    UISingletonDialog<ActivityLevelsChoose>::CloseDialog();
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelView::CustomLevelView() */

void __thiscall CustomLevelView::CustomLevelView(CustomLevelView *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066618e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06661c08;
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_MainMenu");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_CustomLevel");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  this[0x114] = (CustomLevelView)0x0;
  this[0x115] = (CustomLevelView)0x0;
  *(undefined4 *)(this + 0x110) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CustomLevelNetworkResponseReceived);
  local_50 = local_28;
  local_60 = local_38;
  uStack_58 = uStack_30;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<CustomLevelView,void(CustomLevelView::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::CustomLevelNetworkResponseReceived,&local_60);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMsgError);
  local_80 = local_20;
  uStack_78 = uStack_18;
  local_70 = local_10;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<CustomLevelView,void(CustomLevelView::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelView::InitView() */

void __thiscall CustomLevelView::InitView(CustomLevelView *this)

{
  undefined8 uVar1;
  
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa7db0);
  *(undefined8 *)(this + 0x108) = uVar1;
  return;
}


/* CustomLevelView::SwitchToMainMenu(bool) */

void __thiscall CustomLevelView::SwitchToMainMenu(CustomLevelView *this,bool param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = !param_1;
  (**(code **)(**(long **)(this + 0xe8) + 0x158))(*(long **)(this + 0xe8),bVar1);
  (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),bVar1);
  (**(code **)(**(long **)(this + 0xf8) + 0x158))(*(long **)(this + 0xf8),bVar1);
  (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),bVar1);
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa7db0);
  *(undefined8 *)(this + 0x108) = uVar2;
  return;
}


/* CustomLevelView::ButtonDepress(int) */

void __thiscall CustomLevelView::ButtonDepress(CustomLevelView *this,int param_1)

{
  long lVar1;
  
  if (param_1 == 0x7d2) {
    lVar1 = UISingletonDialog<UICustomLevelMainMenu>::ShowDialog();
    FUN_035e5d10(lVar1 + 0x1d0,1);
    return;
  }
  if (param_1 < 0x7d3) {
    if (param_1 == 1000) {
      GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
      return;
    }
    if (param_1 == 0x7d1) {
      lVar1 = UISingletonDialog<UICustomLevelMainMenu>::ShowDialog();
      FUN_035e5d10(lVar1 + 0x1d0,0);
      return;
    }
  }
  else {
    if (param_1 == 0x7d3) {
      lVar1 = UISingletonDialog<UICustomLevelMainMenu>::ShowDialog();
      FUN_035e5d10(lVar1 + 0x1d0,2);
      return;
    }
    if (param_1 == 0x7d4) {
      lVar1 = UISingletonDialog<UICustomLevelMainMenu>::ShowDialog();
      FUN_035e5d10(lVar1 + 0x1d0,3);
      return;
    }
  }
  return;
}


/* non-virtual thunk to CustomLevelView::ButtonDepress(int) */

void __thiscall CustomLevelView::ButtonDepress(CustomLevelView *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelView::TryDownloadUploadedLevels() */

void CustomLevelView::TryDownloadUploadedLevels(void)

{
  bool bVar1;
  char cVar2;
  CustomLevelMgr *pCVar3;
  CustomNetworkListData *pCVar4;
  CustomNetworkPreviewData *pCVar5;
  string asStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  CustomNetworkListData aCStack_40 [24];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"");
  nop();
  pCVar3 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  pCVar4 = (CustomNetworkListData *)CustomLevelMgr::GetNetworkUploadedListData(pCVar3);
  CustomNetworkListData::CustomNetworkListData(aCStack_40,pCVar4);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_28);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_28);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
    if (!bVar1) {
LAB_035f3714:
      cVar2 = FUN_0547419c(asStack_58);
      if (cVar2 == '\0') {
        CustomLevelUtils::TryDownloadLevelData(asStack_58,0,true,true);
        cVar2 = FUN_0547419c(asStack_58);
      }
      CustomNetworkListData::~CustomNetworkListData(aCStack_40);
      std::string::~string(asStack_58);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar2);
    }
    pCVar5 = (CustomNetworkPreviewData *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    pCVar3 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    cVar2 = CustomLevelMgr::IsLevelDownloaded(pCVar3,(string *)(pCVar5 + 0x40));
    if (cVar2 == '\0') {
      thunk_FUN_05475e00(asStack_58,pCVar5 + 0x38);
      pCVar3 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
      CustomLevelMgr::SetCurrentSelfDownloadData(pCVar3,pCVar5);
      goto LAB_035f3714;
    }
    std::move_iterator<RappellingZombieInfo*>::operator++
              ((move_iterator<RappellingZombieInfo*> *)&local_50);
  } while( true );
}


/* CustomLevelView::CustomLevelNetworkResponseReceived(int, int) */

void __thiscall
CustomLevelView::CustomLevelNetworkResponseReceived(CustomLevelView *this,int param_1,int param_2)

{
  char cVar1;
  
  if (param_2 == 2) {
    if (1 < param_1 - 0xdU) {
      return;
    }
    cVar1 = TryDownloadUploadedLevels();
    if (cVar1 == '\0') {
      return;
    }
  }
  else if (param_2 == 4) {
    if (param_1 != 0xe) {
      return;
    }
  }
  else {
    if (param_2 != 3) {
      return;
    }
    if (param_1 != 0xd) {
      return;
    }
  }
  this[0x115] = (CustomLevelView)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelView::Draw(Sexy::Graphics*) */

void __thiscall CustomLevelView::Draw(CustomLevelView *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  Image *pIVar8;
  LotteryResultProgressBar *pLVar9;
  SalesProgressBar *pSVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float local_20 [2];
  float local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (this[0x114] == (CustomLevelView)0x0) {
    fVar12 = *(float *)(this + 0x110);
    fVar13 = (float)PVZ_Dt();
    *(float *)(this + 0x110) = fVar12 + fVar13 * 0.7;
  }
  if (*(LotteryResultProgressBar **)(this + 0x108) != (LotteryResultProgressBar *)0x0) {
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x108));
    local_20[0] = 1.0;
    local_18[0] = (float)*(int *)(this + 0x50) / (float)iVar1;
    pfVar7 = eastl::max_alt<float>(local_20,local_18);
    fVar13 = *pfVar7;
    fVar12 = fVar13 * (float)iVar1;
    iVar1 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x108));
    fVar13 = (float)iVar1 * fVar13;
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x108),
               (int)(((float)*(int *)(this + 0x50) - fVar12) * 0.5),
               (int)(((float)*(int *)(this + 0x54) - fVar13) * 0.5),(int)fVar12,(int)fVar13);
  }
  if (this[0x114] == (CustomLevelView)0x0) {
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa8330);
    iVar1 = *(int *)(this + 0x50);
    pLVar9 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa8330);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
    iVar3 = FUN_035e74e0(0x1ff);
    Sexy::Graphics::DrawImage(param_1,pIVar8,(iVar1 - iVar2) / 2,iVar3);
    iVar1 = *(int *)(this + 0x50);
    pLVar9 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa8330);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
    pLVar9 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa8330);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
    pLVar9 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa7f80);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
    iVar1 = (iVar3 - iVar4) / 2 + (iVar1 - iVar2) / 2;
    iVar2 = FUN_035e74e0(0x1ff);
    iVar3 = FUN_035e74e0(1);
    pSVar10 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa8330);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar10);
    pSVar10 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa7f80);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar10);
    Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)local_20,param_1);
    pLVar9 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa7f80);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
    Sexy::Insets::Insets
              ((Insets *)local_18,iVar1,0,(int)((float)iVar6 * *(float *)(this + 0x110)),
               *(int *)(this + 0x54));
    Sexy::Graphics::SetClipRect(param_1,(TRect *)local_18);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa7f80);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar1,iVar2 + iVar3 + (iVar4 - iVar5) / 2);
    Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)local_20);
    if (((1.0 < *(float *)(this + 0x110)) && (this[0x114] == (CustomLevelView)0x0)) &&
       (this[0x115] != (CustomLevelView)0x0)) {
      this[0x114] = (CustomLevelView)0x1;
      lVar11 = UISingletonDialog<UICustomLevelMainMenu>::ShowDialog();
      FUN_035e5d10(lVar11 + 0x1d0,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

