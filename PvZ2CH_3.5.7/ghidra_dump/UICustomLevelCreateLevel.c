// Class: UICustomLevelCreateLevel


/* UICustomLevelCreateLevel::ScrollTargetReached(Sexy::ScrollWidget*) */

void UICustomLevelCreateLevel::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UICustomLevelCreateLevel::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UICustomLevelCreateLevel::ScrollTargetReached(UICustomLevelCreateLevel *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UICustomLevelCreateLevel::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UICustomLevelCreateLevel::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UICustomLevelCreateLevel::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UICustomLevelCreateLevel::ScrollTargetInterrupted
          (UICustomLevelCreateLevel *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* UICustomLevelCreateLevel::ButtonDepress(int) */

int UICustomLevelCreateLevel::ButtonDepress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to UICustomLevelCreateLevel::ButtonDepress(int) */

void __thiscall UICustomLevelCreateLevel::ButtonDepress(UICustomLevelCreateLevel *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelCreateLevel::GetLayoutName() */

void __thiscall UICustomLevelCreateLevel::GetLayoutName(UICustomLevelCreateLevel *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UICustomLevelCreateLevel");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelCreateLevel::TriggerTutorial() */

void __thiscall UICustomLevelCreateLevel::TriggerTutorial(UICustomLevelCreateLevel *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  char *__s;
  long lVar3;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  lVar3 = *(long *)(this + 0x160);
  local_8 = ___stack_chk_guard;
  if (lVar3 == 0) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar1 = FUN_035e5ca8(*(undefined4 *)(pPVar2 + 0x40));
    if (iVar1 == 0x3c) {
      PlayerInfo::SetActiveTutorial(pPVar2,0);
    }
  }
  else {
    if (*(int *)(this + 0x168) == 0) {
      __s = "[CUSTOM_LEVEL_TUTORIAL_1]";
    }
    else {
      __s = "[CUSTOM_LEVEL_TUTORIAL_19]";
    }
    std::string::string(asStack_20,__s);
    Sexy::Insets::Insets(aIStack_18);
    GameMaskUI::ShowMask(lVar3,1,asStack_20,aIStack_18);
    std::string::~string(asStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICustomLevelCreateLevel::UICustomLevelCreateLevel() */

void __thiscall UICustomLevelCreateLevel::UICustomLevelCreateLevel(UICustomLevelCreateLevel *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UICustomLevelCreateLevel>::UISingletonDialog
            ((UISingletonDialog<UICustomLevelCreateLevel> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_06664020;
  *(undefined **)(this + 0xd8) = &DAT_06664380;
  *(undefined ***)(this + 0x138) = &PTR__UICustomLevelCreateLevel_066643c8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CustomLevelNetworkResponseReceived);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<UICustomLevelCreateLevel,void(UICustomLevelCreateLevel::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::CustomLevelNetworkResponseReceived,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRefresh);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<UICustomLevelCreateLevel,void(UICustomLevelCreateLevel::*)(bool)>>
            ((MessageRouter *)puVar1,Message::CustomLevelCreateLevelRefresh,&local_70);
  return;
}


/* UICustomLevelCreateLevel::~UICustomLevelCreateLevel() */

void __thiscall UICustomLevelCreateLevel::~UICustomLevelCreateLevel(UICustomLevelCreateLevel *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06664380;
  *(undefined ***)this = &PTR_GetClass_06664020;
  *(undefined ***)(this + 0x138) = &PTR__UICustomLevelCreateLevel_066643c8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<CustomPreviewData,std::allocator<CustomPreviewData>>::~vector
            ((vector<CustomPreviewData,std::allocator<CustomPreviewData>> *)(this + 0x148));
  UISingletonDialog<UICustomLevelCreateLevel>::~UISingletonDialog
            ((UISingletonDialog<UICustomLevelCreateLevel> *)this);
  return;
}


/* non-virtual thunk to UICustomLevelCreateLevel::~UICustomLevelCreateLevel() */

void __thiscall UICustomLevelCreateLevel::~UICustomLevelCreateLevel(UICustomLevelCreateLevel *this)

{
  ~UICustomLevelCreateLevel(this + -0x138);
  return;
}


/* UICustomLevelCreateLevel::~UICustomLevelCreateLevel() */

void __thiscall UICustomLevelCreateLevel::~UICustomLevelCreateLevel(UICustomLevelCreateLevel *this)

{
  ~UICustomLevelCreateLevel(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UICustomLevelCreateLevel::~UICustomLevelCreateLevel() */

void __thiscall UICustomLevelCreateLevel::~UICustomLevelCreateLevel(UICustomLevelCreateLevel *this)

{
  ~UICustomLevelCreateLevel(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelCreateLevel::InitView() */

void __thiscall UICustomLevelCreateLevel::InitView(UICustomLevelCreateLevel *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  PVZ2UIScrollingWidget *this_00;
  Image *pIVar10;
  Image *pIVar11;
  Widget *this_01;
  ProfileMgr *this_02;
  long lVar12;
  long lVar13;
  CustomLevelMgr *this_03;
  CustomLevelCreateLevelItemWidget *this_04;
  CustomLevelCreateLevelAddItemWidget *this_05;
  uint uVar14;
  Insets aIStack_d8 [16];
  Insets aIStack_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  Insets aIStack_a0 [24];
  Delegate2<CustomNetworkPreviewData_const&,int_const&> aDStack_88 [48];
  undefined4 local_58 [2];
  undefined1 auStack_50 [8];
  undefined4 local_48;
  undefined4 local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)local_58,"UIImage_0");
  plVar7 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)local_58);
  std::string::~string((string *)local_58);
  nop();
  *(long **)(this + 0x140) = plVar7;
  iVar3 = FUN_035e74e0(5);
  iVar4 = FUN_035e5c60((int)plVar7[10]);
  iVar5 = FUN_035e5c64(*(undefined4 *)((long)plVar7 + 0x54));
  uVar6 = iVar4 + iVar3 * -2;
  iVar1 = uVar6 + iVar3 * -3;
  iVar2 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  iVar2 = iVar2 >> 2;
  CustomLevelUtils::TryLoadLevels((CustomLevelUtils *)(ulong)uVar6);
  iVar1 = iVar3 + iVar2;
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_b8);
  uVar9 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_b8);
  std::vector<CustomPreviewData,std::allocator<CustomPreviewData>>::
  assign<__gnu_cxx::__normal_iterator<CustomPreviewData*,std::vector<CustomPreviewData,std::allocator<CustomPreviewData>>>,void>
            ((vector<CustomPreviewData,std::allocator<CustomPreviewData>> *)(this + 0x148),uVar8,
             uVar9);
  uVar6 = FUN_035e5ebc(local_b8,local_b0);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  Sexy::Insets::Insets(aIStack_d8,0,0,iVar4,iVar5);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_d8);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa7d20);
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa7e10);
  Sexy::ScrollWidget::EnableIndicators((ScrollWidget *)this_00,pIVar10,pIVar11);
  (**(code **)(*plVar7 + 0x60))(plVar7,this_00);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,iVar4,iVar3 + iVar1 * (int)((float)(int)(uVar6 + 1) * 0.25));
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar12 = ProfileMgr::GetCurrentProfile(this_02);
  iVar4 = FUN_035e5ca8(*(undefined4 *)(lVar12 + 0x40));
  if ((int)uVar6 < 1) {
    uVar6 = 0;
  }
  else {
    lVar12 = 0;
    do {
      uVar14 = (uint)lVar12;
      Sexy::Insets::Insets
                (aIStack_c8,iVar3 + iVar1 * (uVar14 & 3),iVar3 + iVar1 * ((int)uVar14 >> 2),iVar2,
                 iVar2);
      CustomNetworkPreviewData::CustomNetworkPreviewData((CustomNetworkPreviewData *)local_58);
      uVar8 = FUN_035e5ec8(local_b8,lVar12);
      thunk_FUN_05475e00(auStack_50,uVar8);
      lVar13 = FUN_035e5ec8(local_b8,lVar12);
      local_58[0] = *(undefined4 *)(lVar13 + 0x18);
      this_03 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
      lVar13 = FUN_035e5ec8(local_b8,lVar12);
      local_48 = CustomLevelMgr::GetWorldTypeByWorld(this_03,(string *)(lVar13 + 8));
      lVar13 = FUN_035e5ec8(local_b8,lVar12);
      local_28 = *(undefined4 *)(lVar13 + 0x14);
      this_04 = ::operator_new(0x2e0);
      CustomLevelCreateLevelItemWidget::CustomLevelCreateLevelItemWidget(this_04,uVar14);
      (**(code **)(*(long *)this_04 + 0x318))(this_04,(string *)local_58);
      lVar13 = FUN_035e5ec8(local_b8,lVar12);
      FUN_035e5cdc(this_04 + 0x2a9,*(undefined1 *)(lVar13 + 0x10));
      lVar13 = FUN_035e5ec8(local_b8,lVar12);
      FUN_035e5ce4(this_04 + 0x2ac,*(undefined4 *)(lVar13 + 0x14));
      (**(code **)(*(long *)this_04 + 0x1a0))(this_04,aIStack_c8);
      (**(code **)(*(long *)this_04 + 0x310))(this_04,0);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onClick);
      Sexy::Delegate2<CustomNetworkPreviewData_const&,int_const&>::
      Delegate2<UICustomLevelCreateLevel,void(UICustomLevelCreateLevel::*)(CustomNetworkPreviewData_const&,int)>
                (aDStack_88,aIStack_a0);
      CustomLevelItemWidget::RegisterTouchCallBackFunc((CustomLevelItemWidget *)this_04,aDStack_88);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,this_04);
      if ((uVar14 == 0) && (iVar4 == 0x3c)) {
        *(CustomLevelCreateLevelItemWidget **)(this + 0x160) = this_04;
      }
      lVar12 = lVar12 + 1;
      CustomNetworkPreviewData::~CustomNetworkPreviewData((CustomNetworkPreviewData *)local_58);
    } while ((int)lVar12 < (int)uVar6);
    if (100 < (int)uVar6) goto LAB_035f0e6c;
  }
  Sexy::Insets::Insets
            (aIStack_a0,iVar3 + iVar1 * (uVar6 & 3),iVar3 + iVar1 * ((int)uVar6 >> 2),iVar2,iVar2);
  this_05 = ::operator_new(0x120);
  CustomLevelCreateLevelAddItemWidget::CustomLevelCreateLevelAddItemWidget(this_05);
  (**(code **)(*(long *)this_05 + 0x1a0))(this_05,aIStack_a0);
  (**(code **)(*(long *)this_05 + 0x310))(this_05);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCreateLevelChoose);
  Sexy::Delegate0::Delegate0<UICustomLevelCreateLevel,void(UICustomLevelCreateLevel::*)()>
            ((Delegate0 *)aDStack_88,(string *)local_58);
  CustomLevelCreateLevelAddItemWidget::RegisterTouchCallBackFunc(this_05,(Delegate0 *)aDStack_88);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,this_05);
LAB_035f0e6c:
  std::vector<CustomPreviewData,std::allocator<CustomPreviewData>>::~vector
            ((vector<CustomPreviewData,std::allocator<CustomPreviewData>> *)&local_b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICustomLevelCreateLevel::OnCreate() */

undefined4 __thiscall UICustomLevelCreateLevel::OnCreate(UICustomLevelCreateLevel *this)

{
  char cVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  
  uVar2 = UI::Dialog::OnCreate((Dialog *)this);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if ((pPVar3 != (PlayerInfo *)0x0) &&
     (cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar3,0x3c), cVar1 == '\0')) {
    PlayerInfo::SetActiveTutorial(pPVar3,0x3c);
  }
  InitView(this);
  return uVar2;
}


/* UICustomLevelCreateLevel::OnRefresh(bool) */

void __thiscall UICustomLevelCreateLevel::OnRefresh(UICustomLevelCreateLevel *this,bool param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  long lVar2;
  
  (**(code **)(**(long **)(this + 0x140) + 0x80))(*(long **)(this + 0x140),1,1);
  InitView(this);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_035e5ca8(*(undefined4 *)(lVar2 + 0x40));
  if (iVar1 != 0x3c) {
    return;
  }
  if (param_1) {
    TriggerTutorial(this);
    return;
  }
  FUN_035e644c(this + 0x168);
  TriggerTutorial(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelCreateLevel::onClick(CustomNetworkPreviewData const&, int) */

void __thiscall
UICustomLevelCreateLevel::onClick
          (UICustomLevelCreateLevel *this,CustomNetworkPreviewData *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  CustomNetworkUploadData *pCVar4;
  ProfileMgr *this_00;
  UICustomLevelLevelDetailShare *this_01;
  CustomLevelMgr *this_02;
  CustomNetworkUploadData aCStack_d8 [208];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_035e5ec8(*(undefined8 *)(this + 0x148),(long)param_2);
  cVar1 = *(char *)(lVar3 + 0x10);
  *(int *)(this + 0x16c) = param_2;
  pCVar4 = (CustomNetworkUploadData *)CustomLevelUtils::TryLoadLevel(param_2);
  CustomNetworkUploadData::CustomNetworkUploadData(aCStack_d8,pCVar4);
  if (cVar1 == '\0') {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar3 = ProfileMgr::GetCurrentProfile(this_00);
    iVar2 = FUN_035e5ca8(*(undefined4 *)(lVar3 + 0x40));
    if (iVar2 == 0x3c) {
      LawnApp::KillGameMaskUI(gLawnApp);
    }
    this_01 = (UICustomLevelLevelDetailShare *)
              UISingletonDialog<UICustomLevelLevelDetail>::ShowDialog();
    UICustomLevelLevelDetailShare::LoadData(this_01,aCStack_d8);
    FUN_035e5d1c(this_01 + 0x20c,1);
    FUN_035e5d24(this_01 + 0x20d,0);
    UICustomLevelLevelDetail::InitView((UICustomLevelLevelDetail *)this_01,1);
    UICustomLevelLevelDetail::TriggerTutorial
              ((UICustomLevelLevelDetail *)this_01,*(int *)(this + 0x168));
  }
  else {
    this_02 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::RequestGetNetworkLevelDetails(this_02,*(int *)param_1);
  }
  CustomNetworkUploadData::~CustomNetworkUploadData(aCStack_d8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelCreateLevel::CustomLevelNetworkResponseReceived(int, int) */

void __thiscall
UICustomLevelCreateLevel::CustomLevelNetworkResponseReceived
          (UICustomLevelCreateLevel *this,int param_1,int param_2)

{
  int iVar1;
  long lVar2;
  ProfileMgr *this_00;
  CustomLevelMgr *this_01;
  CustomNetworkUploadData *pCVar3;
  UICustomLevelLevelDetailShare *this_02;
  CustomNetworkUploadData aCStack_d8 [208];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = UISingletonDialog<UICustomLevelMainMenu>::GetSingletonPtr();
  iVar1 = FUN_035e5d18(*(undefined4 *)(lVar2 + 0x1d4));
  if (iVar1 == 1) {
    if (param_2 == 2) {
      if (param_1 == 3) {
        this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        lVar2 = ProfileMgr::GetCurrentProfile(this_00);
        iVar1 = FUN_035e5ca8(*(undefined4 *)(lVar2 + 0x40));
        if (iVar1 == 0x3c) {
          LawnApp::KillGameMaskUI(gLawnApp);
        }
        this_01 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
        pCVar3 = (CustomNetworkUploadData *)CustomLevelMgr::GetNetworkLevelDetails(this_01);
        CustomNetworkUploadData::CustomNetworkUploadData(aCStack_d8,pCVar3);
        this_02 = (UICustomLevelLevelDetailShare *)
                  UISingletonDialog<UICustomLevelLevelDetail>::ShowDialog();
        UICustomLevelLevelDetailShare::LoadData(this_02,aCStack_d8);
        FUN_035e5d1c(this_02 + 0x20c,1);
        FUN_035e5d24(this_02 + 0x20d,1);
        UICustomLevelLevelDetail::InitView((UICustomLevelLevelDetail *)this_02,1);
        UICustomLevelLevelDetail::TriggerTutorial
                  ((UICustomLevelLevelDetail *)this_02,*(int *)(this + 0x168));
        CustomNetworkUploadData::~CustomNetworkUploadData(aCStack_d8);
      }
    }
    else if (param_2 == 3) {
      Sexy::OutputDebugStrF
                ((wchar_t *)
                 "UICustomLevelCreateLevel::CustomLevelNetworkResponseReceived ResponseFailNetwork context=%d"
                );
    }
    else if (param_2 == 4) {
      Sexy::OutputDebugStrF
                ((wchar_t *)
                 "UICustomLevelCreateLevel::CustomLevelNetworkResponseReceived ResponseFailInvalidData context=%d"
                );
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelCreateLevel::onCreateLevelChoose() */

void __thiscall UICustomLevelCreateLevel::onCreateLevelChoose(UICustomLevelCreateLevel *this)

{
  undefined4 uVar1;
  long lVar2;
  char *__s;
  TGALogMgr *this_00;
  size_t in_x2;
  DString aDStack_a0 [16];
  TGACustomLevelData aTStack_90 [136];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = UISingletonDialog<UICustomLevelCreateLevelChooseMode>::ShowDialog();
  uVar1 = FUN_035e5ebc(*(undefined8 *)(this + 0x148),*(undefined8 *)(this + 0x150));
  FUN_035e5d38(lVar2 + 0x134,uVar1);
  TGACustomLevelData::TGACustomLevelData(aTStack_90);
  DString::DString(aDStack_a0,0x10);
  __s = (char *)DString::c_str(aDStack_a0);
  std::string::append((string *)aTStack_90,__s,in_x2);
  DString::~DString(aDStack_a0);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogCustomLevel(this_00,aTStack_90);
  TGACustomLevelData::~TGACustomLevelData(aTStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

