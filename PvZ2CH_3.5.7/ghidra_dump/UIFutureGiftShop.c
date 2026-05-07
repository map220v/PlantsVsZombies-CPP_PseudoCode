// Class: UIFutureGiftShop


/* UIFutureGiftShop::Update() */

void __thiscall UIFutureGiftShop::Update(UIFutureGiftShop *this)

{
  *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
  return;
}


/* UIFutureGiftShop::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIFutureGiftShop::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIFutureGiftShop::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UIFutureGiftShop::ScrollTargetReached(UIFutureGiftShop *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIFutureGiftShop::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIFutureGiftShop::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIFutureGiftShop::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIFutureGiftShop::ScrollTargetInterrupted(UIFutureGiftShop *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFutureGiftShop::GetLayoutName() */

void __thiscall UIFutureGiftShop::GetLayoutName(UIFutureGiftShop *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIFutureGiftShop");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIFutureGiftShop::closeDescriptionWidget() */

void __thiscall UIFutureGiftShop::closeDescriptionWidget(UIFutureGiftShop *this)

{
  if (*(long *)(this + 400) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 400));
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 400));
    *(undefined8 *)(this + 400) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFutureGiftShop::showDescriptionWidget() */

void __thiscall UIFutureGiftShop::showDescriptionWidget(UIFutureGiftShop *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 400) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 400) = this_00;
    TodStringTranslate(L"[FUTURE_GIFT_DESCRIPTION]");
    TodStringTranslate(L"[FUTURE_GIFT_DESCRIPTION_TITLE]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 400);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeDescriptionWidget);
    Sexy::Delegate0::Delegate0<UIFutureGiftShop,void(UIFutureGiftShop::*)()>(aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 400));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 400));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 400));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 400));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIFutureGiftShop::ButtonDepress(int) */

void __thiscall UIFutureGiftShop::ButtonDepress(UIFutureGiftShop *this,int param_1)

{
  if (param_1 == 0xb) {
    showDescriptionWidget(this);
    return;
  }
  if (param_1 == 0x58) {
    UISingletonDialog<UIFutureGiftShop>::CloseDialog();
    return;
  }
  return;
}


/* non-virtual thunk to UIFutureGiftShop::ButtonDepress(int) */

void __thiscall UIFutureGiftShop::ButtonDepress(UIFutureGiftShop *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UIFutureGiftShop::UIFutureGiftShop() */

void __thiscall UIFutureGiftShop::UIFutureGiftShop(UIFutureGiftShop *this)

{
  UISingletonDialog<UIFutureGiftShop>::UISingletonDialog
            ((UISingletonDialog<UIFutureGiftShop> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_069e59c0;
  *(undefined **)(this + 0xd8) = &DAT_069e5d20;
  *(undefined ***)(this + 0x138) = &PTR__UIFutureGiftShop_069e5d68;
  FutureGiftBoxData::FutureGiftBoxData((FutureGiftBoxData *)(this + 0x140));
  *(undefined8 *)(this + 400) = 0;
  return;
}


/* UIFutureGiftShop::~UIFutureGiftShop() */

void __thiscall UIFutureGiftShop::~UIFutureGiftShop(UIFutureGiftShop *this)

{
  *(undefined ***)this = &PTR_GetClass_069e59c0;
  *(undefined **)(this + 0xd8) = &DAT_069e5d20;
  *(undefined ***)(this + 0x138) = &PTR__UIFutureGiftShop_069e5d68;
  FutureGiftBoxData::~FutureGiftBoxData((FutureGiftBoxData *)(this + 0x140));
  UISingletonDialog<UIFutureGiftShop>::~UISingletonDialog
            ((UISingletonDialog<UIFutureGiftShop> *)this);
  return;
}


/* non-virtual thunk to UIFutureGiftShop::~UIFutureGiftShop() */

void __thiscall UIFutureGiftShop::~UIFutureGiftShop(UIFutureGiftShop *this)

{
  ~UIFutureGiftShop(this + -0x138);
  return;
}


/* UIFutureGiftShop::~UIFutureGiftShop() */

void __thiscall UIFutureGiftShop::~UIFutureGiftShop(UIFutureGiftShop *this)

{
  ~UIFutureGiftShop(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIFutureGiftShop::~UIFutureGiftShop() */

void __thiscall UIFutureGiftShop::~UIFutureGiftShop(UIFutureGiftShop *this)

{
  ~UIFutureGiftShop(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFutureGiftShop::InitView() */

void __thiscall UIFutureGiftShop::InitView(UIFutureGiftShop *this)

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
  FutureGiftBoxBundle *this_02;
  vector *pvVar9;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  string asStack_98 [16];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_04e72bb0(local_80);
  if (((cVar1 != '\0') && (local_70 != '\0')) &&
     (cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x140)), cVar1 != '\0'))
  {
    std::string::string(asStack_98,"UIImage_Background");
    pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_98);
    std::string::~string(asStack_98);
    nop();
    (**(code **)(*(long *)pUVar8 + 0x80))(pUVar8,1,1);
    this_00 = ::operator_new(0x248);
    PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
    this_01 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_01);
    iVar2 = FUN_04e73064(10);
    iVar3 = FUN_04e73064(0);
    iVar4 = FUN_04e73064(0x14);
    Sexy::Insets::Insets
              ((Insets *)asStack_98,iVar2,iVar3,*(int *)(pUVar8 + 0x50) - iVar4,
               *(int *)(pUVar8 + 0x54));
    (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_98);
    Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
    (**(code **)(*(long *)this_01 + 0x198))
              (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
    iVar3 = FUN_04e73064(4);
    uVar5 = FUN_04e73064(0xe);
    iVar4 = FUN_04e73064(0xf);
    iVar6 = FUN_04e73064(0xba);
    uVar7 = FUN_04e73064(0x161);
    iVar2 = iVar3;
    for (uVar12 = 0;
        uVar10 = FUN_04e72bc8(*(undefined8 *)(this + 0x178),*(undefined8 *)(this + 0x180)),
        uVar12 < uVar10; uVar12 = uVar12 + 1) {
      this_02 = ::operator_new(0x130);
      FutureGiftBoxBundle::FutureGiftBoxBundle(this_02);
      (**(code **)(*(long *)this_02 + 0x198))(this_02,iVar2,uVar5,iVar6,uVar7);
      pvVar9 = (vector *)FUN_04e72bf0(*(undefined8 *)(this + 0x178),uVar12);
      FutureGiftBoxBundle::SetData(this_02,*(int *)(pvVar9 + 0x18),pvVar9);
      (**(code **)(*(long *)this_02 + 0x318))(this_02,uVar12 & 0xffffffff);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
      iVar2 = iVar2 + iVar4 + iVar6;
    }
    pcVar11 = *(code **)(*(long *)pUVar8 + 0x60);
    *(int *)(this_01 + 0x50) = (iVar3 * 2 - iVar4) + (iVar4 + iVar6) * (int)uVar10;
    (*pcVar11)(pUVar8,this_00);
    (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFutureGiftShop::OnCreate() */

void __thiscall UIFutureGiftShop::OnCreate(UIFutureGiftShop *this)

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

