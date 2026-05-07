// Class: UISpringFestival2024BoostPanel


/* UISpringFestival2024BoostPanel::ScrollTargetReached(Sexy::ScrollWidget*) */

void UISpringFestival2024BoostPanel::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UISpringFestival2024BoostPanel::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UISpringFestival2024BoostPanel::ScrollTargetReached
          (UISpringFestival2024BoostPanel *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UISpringFestival2024BoostPanel::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UISpringFestival2024BoostPanel::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UISpringFestival2024BoostPanel::ScrollTargetInterrupted(Sexy::ScrollWidget*)
    */

void __thiscall
UISpringFestival2024BoostPanel::ScrollTargetInterrupted
          (UISpringFestival2024BoostPanel *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpringFestival2024BoostPanel::GetLayoutName() */

void __thiscall UISpringFestival2024BoostPanel::GetLayoutName(UISpringFestival2024BoostPanel *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UISpringFestival2024BoostPanel");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UISpringFestival2024BoostPanel::~UISpringFestival2024BoostPanel() */

void __thiscall
UISpringFestival2024BoostPanel::~UISpringFestival2024BoostPanel
          (UISpringFestival2024BoostPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_0685d770;
  *(undefined **)(this + 0xd8) = &DAT_0685dad0;
  *(undefined ***)(this + 0x138) = &PTR__UISpringFestival2024BoostPanel_0685db18;
  UISingletonDialog<UISpringFestival2024BoostPanel>::~UISingletonDialog
            ((UISingletonDialog<UISpringFestival2024BoostPanel> *)this);
  return;
}


/* non-virtual thunk to UISpringFestival2024BoostPanel::~UISpringFestival2024BoostPanel() */

void __thiscall
UISpringFestival2024BoostPanel::~UISpringFestival2024BoostPanel
          (UISpringFestival2024BoostPanel *this)

{
  ~UISpringFestival2024BoostPanel(this + -0x138);
  return;
}


/* UISpringFestival2024BoostPanel::~UISpringFestival2024BoostPanel() */

void __thiscall
UISpringFestival2024BoostPanel::~UISpringFestival2024BoostPanel
          (UISpringFestival2024BoostPanel *this)

{
  ~UISpringFestival2024BoostPanel(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UISpringFestival2024BoostPanel::~UISpringFestival2024BoostPanel() */

void __thiscall
UISpringFestival2024BoostPanel::~UISpringFestival2024BoostPanel
          (UISpringFestival2024BoostPanel *this)

{
  ~UISpringFestival2024BoostPanel(this + -0x138);
  return;
}


/* UISpringFestival2024BoostPanel::UISpringFestival2024BoostPanel() */

void __thiscall
UISpringFestival2024BoostPanel::UISpringFestival2024BoostPanel(UISpringFestival2024BoostPanel *this)

{
  UISingletonDialog<UISpringFestival2024BoostPanel>::UISingletonDialog
            ((UISingletonDialog<UISpringFestival2024BoostPanel> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_0685d770;
  *(undefined **)(this + 0xd8) = &DAT_0685dad0;
  *(undefined ***)(this + 0x138) = &PTR__UISpringFestival2024BoostPanel_0685db18;
  return;
}


/* UISpringFestival2024BoostPanel::ButtonDepress(int) */

void __thiscall
UISpringFestival2024BoostPanel::ButtonDepress(UISpringFestival2024BoostPanel *this,int param_1)

{
  if (param_1 != 1000) {
    return;
  }
  UISingletonDialog<UISpringFestival2024BoostPanel>::CloseDialog();
  return;
}


/* non-virtual thunk to UISpringFestival2024BoostPanel::ButtonDepress(int) */

void __thiscall
UISpringFestival2024BoostPanel::ButtonDepress(UISpringFestival2024BoostPanel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpringFestival2024BoostPanel::InitView() */

void __thiscall UISpringFestival2024BoostPanel::InitView(UISpringFestival2024BoostPanel *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  UIWidgetImage *pUVar9;
  PVZ2UnchartedModeUtils *this_00;
  ulong uVar10;
  PVZ2UIScrollingWidget *this_01;
  Widget *this_02;
  ResourceInfo *pRVar11;
  ulong uVar12;
  undefined4 local_7c;
  RtWeakPtr aRStack_78 [8];
  Insets aIStack_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  string asStack_38 [24];
  vector avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"Background_0");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,(Widget *)pUVar9,true);
  std::string::string(asStack_38,"BoostContainer");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  this_00 = (PVZ2UnchartedModeUtils *)(**(code **)(*(long *)pUVar9 + 0x80))(pUVar9,1,1);
  PVZ2UnchartedModeUtils::GetCurrentBoost(this_00);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)&local_50,avStack_20);
  uVar10 = FUN_0456c1c8(local_50,local_48);
  iVar2 = FUN_0456c164(*(undefined4 *)(pUVar9 + 0x50));
  iVar3 = FUN_0456c168(*(undefined4 *)(pUVar9 + 0x54));
  iVar4 = FUN_0456c8a8(4);
  iVar5 = FUN_0456c8a8(0x14);
  iVar6 = FUN_0456c8a8(10);
  iVar1 = (iVar4 * -2 + iVar2 + iVar5 * -2) / 3;
  iVar2 = FUN_0456c8a8(0x37);
  iVar2 = iVar2 + ((iVar3 + iVar4 * -2) - iVar6) / 2;
  iVar6 = iVar2 + iVar6;
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0x138));
  iVar3 = FUN_0456c164(*(undefined4 *)(pUVar9 + 0x50));
  iVar7 = FUN_0456c168(*(undefined4 *)(pUVar9 + 0x54));
  Sexy::Insets::Insets(aIStack_70,0,0,iVar3,iVar7);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_70);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_01,2);
  (**(code **)(*(long *)pUVar9 + 0x60))(pUVar9,this_01);
  this_02 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_02);
  uVar8 = FUN_0456c164(*(undefined4 *)(pUVar9 + 0x50));
  (**(code **)(*(long *)this_02 + 0x198))
            (this_02,0,0,uVar8,iVar4 + iVar6 * (int)((float)uVar10 * 0.33333334));
  (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
  uVar10 = 0;
  while( true ) {
    uVar12 = FUN_0456c1c8(local_50,local_48);
    if (uVar12 <= uVar10) break;
    Sexy::Insets::Insets
              ((Insets *)&local_60,iVar4 + (iVar1 + iVar5) * ((int)uVar10 % 3),
               iVar4 + iVar6 * ((int)uVar10 / 3),iVar1,iVar2);
    iVar3 = Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
    FUN_0456c210(local_50,uVar10);
    UnchartedBoostMgr::GetBoostImage(iVar3);
    pUVar9 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(pUVar9);
    pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_78);
    UIWidgetImage::SetImage(pUVar9,(Image *)pRVar11);
    local_7c = 2;
    UIWidgetImage::SetImageType(pUVar9,(PVZ2UIImageType *)&local_7c,0.0);
    (**(code **)(*(long *)pUVar9 + 0x198))(pUVar9,local_60,local_5c,local_58,local_54);
    (**(code **)(*(long *)this_02 + 0x60))(this_02,pUVar9);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    uVar10 = uVar10 + 1;
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_50);
  S2C_PlayerGetAvatarInfo::~S2C_PlayerGetAvatarInfo((S2C_PlayerGetAvatarInfo *)asStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UISpringFestival2024BoostPanel::OnCreate() */

undefined4 __thiscall UISpringFestival2024BoostPanel::OnCreate(UISpringFestival2024BoostPanel *this)

{
  undefined4 uVar1;
  
  uVar1 = UI::Dialog::OnCreate((Dialog *)this);
  InitView(this);
  return uVar1;
}

