// Class: UINewYearGoods


/* UINewYearGoods::ScrollTargetReached(Sexy::ScrollWidget*) */

void UINewYearGoods::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINewYearGoods::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UINewYearGoods::ScrollTargetReached(UINewYearGoods *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UINewYearGoods::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UINewYearGoods::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINewYearGoods::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UINewYearGoods::ScrollTargetInterrupted(UINewYearGoods *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewYearGoods::GetLayoutName() */

void __thiscall UINewYearGoods::GetLayoutName(UINewYearGoods *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINewYearGoods");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UINewYearGoods::closeDescriptionWidget() */

void __thiscall UINewYearGoods::closeDescriptionWidget(UINewYearGoods *this)

{
  if (*(long *)(this + 0x170) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x170))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x170));
    *(undefined8 *)(this + 0x170) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewYearGoods::showDescriptionWidget() */

void __thiscall UINewYearGoods::showDescriptionWidget(UINewYearGoods *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x170) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0x170) = this_00;
    TodStringTranslate(L"[NEWYEAR_GOODS_DESCRIPTION]");
    TodStringTranslate(L"[NEWYEAR_GOODS_DESCRIPTION_TITLE]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x170);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeDescriptionWidget);
    Sexy::Delegate0::Delegate0<UINewYearGoods,void(UINewYearGoods::*)()>(aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x170));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x170));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x170));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x170));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewYearGoods::ButtonDepress(int) */

void __thiscall UINewYearGoods::ButtonDepress(UINewYearGoods *this,int param_1)

{
  if (param_1 == 0xb) {
    showDescriptionWidget(this);
    return;
  }
  if (param_1 == 0x58) {
    UISingletonDialog<UINewYearGoods>::CloseDialog();
    return;
  }
  return;
}


/* non-virtual thunk to UINewYearGoods::ButtonDepress(int) */

void __thiscall UINewYearGoods::ButtonDepress(UINewYearGoods *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UINewYearGoods::UINewYearGoods() */

void __thiscall UINewYearGoods::UINewYearGoods(UINewYearGoods *this)

{
  UISingletonDialog<UINewYearGoods>::UISingletonDialog((UISingletonDialog<UINewYearGoods> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_066e4bc0;
  *(undefined **)(this + 0xd8) = &DAT_066e4f20;
  *(undefined ***)(this + 0x138) = &PTR__UINewYearGoods_066e4f68;
  NewYearGoodsData::NewYearGoodsData((NewYearGoodsData *)(this + 0x140));
  *(undefined8 *)(this + 0x170) = 0;
  return;
}


/* UINewYearGoods::~UINewYearGoods() */

void __thiscall UINewYearGoods::~UINewYearGoods(UINewYearGoods *this)

{
  *(undefined ***)this = &PTR_GetClass_066e4bc0;
  *(undefined **)(this + 0xd8) = &DAT_066e4f20;
  *(undefined ***)(this + 0x138) = &PTR__UINewYearGoods_066e4f68;
  NewYearGoodsData::~NewYearGoodsData((NewYearGoodsData *)(this + 0x140));
  UISingletonDialog<UINewYearGoods>::~UISingletonDialog((UISingletonDialog<UINewYearGoods> *)this);
  return;
}


/* non-virtual thunk to UINewYearGoods::~UINewYearGoods() */

void __thiscall UINewYearGoods::~UINewYearGoods(UINewYearGoods *this)

{
  ~UINewYearGoods(this + -0x138);
  return;
}


/* UINewYearGoods::~UINewYearGoods() */

void __thiscall UINewYearGoods::~UINewYearGoods(UINewYearGoods *this)

{
  ~UINewYearGoods(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINewYearGoods::~UINewYearGoods() */

void __thiscall UINewYearGoods::~UINewYearGoods(UINewYearGoods *this)

{
  ~UINewYearGoods(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewYearGoods::InitView() */

void __thiscall UINewYearGoods::InitView(UINewYearGoods *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  UIWidgetImage *pUVar8;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  NewYearGoodsBundle *this_02;
  ulong uVar9;
  TGALogMgr *this_03;
  code *pcVar10;
  ulong uVar11;
  Insets aIStack_b0 [16];
  string asStack_a0 [24];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_039a549c(local_80);
  if (((cVar1 != '\0') && (local_70 != '\0')) &&
     (cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x140)), cVar1 != '\0'))
  {
    std::string::string(asStack_a0,"UIImage_Background");
    pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_a0);
    std::string::~string(asStack_a0);
    nop();
    (**(code **)(*(long *)pUVar8 + 0x80))(pUVar8,1,1);
    this_00 = ::operator_new(0x248);
    PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
    this_01 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_01);
    iVar2 = FUN_039a5cb0(10);
    iVar3 = FUN_039a5cb0(0);
    iVar4 = FUN_039a5cb0(0x14);
    Sexy::Insets::Insets
              (aIStack_b0,iVar2,iVar3,*(int *)(pUVar8 + 0x50) - iVar4,*(int *)(pUVar8 + 0x54));
    (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_b0);
    Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
    (**(code **)(*(long *)this_01 + 0x198))
              (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
    iVar3 = FUN_039a5cb0(4);
    uVar5 = FUN_039a5cb0(0xe);
    iVar4 = FUN_039a5cb0(0xf);
    iVar6 = FUN_039a5cb0(0xba);
    uVar7 = FUN_039a5cb0(0x161);
    iVar2 = iVar3;
    for (uVar11 = 0;
        uVar9 = FUN_039a54c8(*(undefined8 *)(this + 0x158),*(undefined8 *)(this + 0x160)),
        uVar11 < uVar9; uVar11 = uVar11 + 1) {
      this_02 = ::operator_new(0x100);
      NewYearGoodsBundle::NewYearGoodsBundle(this_02);
      (**(code **)(*(long *)this_02 + 0x198))(this_02,iVar2,uVar5,iVar6,uVar7);
      NewYearGoodsBundle::InitView(this_02,(int)uVar11);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
      iVar2 = iVar2 + iVar4 + iVar6;
    }
    pcVar10 = *(code **)(*(long *)pUVar8 + 0x60);
    *(int *)(this_01 + 0x50) = (iVar3 * 2 - iVar4) + (iVar4 + iVar6) * (int)uVar9;
    (*pcVar10)(pUVar8,this_00);
    pcVar10 = *(code **)(*(long *)this_00 + 0x60);
    (*pcVar10)(this_00,this_01);
    TGATenYearsData::TGATenYearsData((TGATenYearsData *)asStack_a0);
    std::string::append(asStack_a0,"1",(size_t)pcVar10);
    this_03 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogNewYearGoodsData(this_03,(TGANewYearGoodsData *)asStack_a0);
    Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)asStack_a0);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewYearGoods::OnCreate() */

void __thiscall UINewYearGoods::OnCreate(UINewYearGoods *this)

{
  UIWidgetBackground *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewYearGoods::Update() */

void __thiscall UINewYearGoods::Update(UINewYearGoods *this)

{
  UIWidgetText *pUVar1;
  string asStack_18 [8];
  TimeUtil aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::Update((WidgetContainer *)this);
  std::string::string(asStack_18,"UIText_Timer");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  TimeUtil::GetTimeCountdown(3,0x2a6c);
  TimeUtil::GetTimeCountdownFormat(aTStack_10,0);
  PuzzleTip::SetTip(pUVar1,aTStack_10);
  FUN_05476c50(aTStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

