// Class: ProbabilityDLG


/* ProbabilityDLG::ScrollTargetReached(Sexy::ScrollWidget*) */

void ProbabilityDLG::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ProbabilityDLG::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall ProbabilityDLG::ScrollTargetReached(ProbabilityDLG *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* ProbabilityDLG::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void ProbabilityDLG::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ProbabilityDLG::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall ProbabilityDLG::ScrollTargetInterrupted(ProbabilityDLG *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilityDLG::GetLayoutName() */

void __thiscall ProbabilityDLG::GetLayoutName(ProbabilityDLG *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"ProbabilityDLG");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ProbabilityDLG::ProbabilityDLG() */

void __thiscall ProbabilityDLG::ProbabilityDLG(ProbabilityDLG *this)

{
  UISingletonDialog<ProbabilityDLG>::UISingletonDialog((UISingletonDialog<ProbabilityDLG> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_06985b40;
  *(undefined **)(this + 0xd8) = &DAT_06985ea0;
  *(undefined ***)(this + 0x138) = &PTR__ProbabilityDLG_06985ee8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x140));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilityDLG::~ProbabilityDLG() */

void __thiscall ProbabilityDLG::~ProbabilityDLG(ProbabilityDLG *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_06985ea0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06985b40;
  *(undefined ***)(this + 0x138) = &PTR__ProbabilityDLG_06985ee8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x140),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
  UISingletonDialog<ProbabilityDLG>::~UISingletonDialog((UISingletonDialog<ProbabilityDLG> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ProbabilityDLG::~ProbabilityDLG() */

void __thiscall ProbabilityDLG::~ProbabilityDLG(ProbabilityDLG *this)

{
  ~ProbabilityDLG(this + -0x138);
  return;
}


/* ProbabilityDLG::~ProbabilityDLG() */

void __thiscall ProbabilityDLG::~ProbabilityDLG(ProbabilityDLG *this)

{
  ~ProbabilityDLG(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ProbabilityDLG::~ProbabilityDLG() */

void __thiscall ProbabilityDLG::~ProbabilityDLG(ProbabilityDLG *this)

{
  ~ProbabilityDLG(this + -0x138);
  return;
}


/* ProbabilityDLG::ButtonDepress(int) */

void __thiscall ProbabilityDLG::ButtonDepress(ProbabilityDLG *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<ProbabilityDLG>::CloseDialog();
  return;
}


/* non-virtual thunk to ProbabilityDLG::ButtonDepress(int) */

void __thiscall ProbabilityDLG::ButtonDepress(ProbabilityDLG *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilityDLG::InitView(std::wstring const&) */

void __thiscall ProbabilityDLG::InitView(ProbabilityDLG *this,wstring *param_1)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  UIWidgetImage *this_01;
  PVZ2UIScrollingWidget *this_02;
  Widget *this_03;
  UIWidgetImage *this_04;
  UIWidgetText *pUVar6;
  ProbabilityConfig *pPVar7;
  char *__s;
  string *extraout_x1;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  float local_44;
  string asStack_40 [8];
  string asStack_38 [8];
  wstring awStack_30 [8];
  Insets aIStack_28 [16];
  undefined4 local_18 [4];
  long local_8;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x140);
  local_8 = ___stack_chk_guard;
  std::string::string((string *)local_18,"Dialog");
  lVar5 = UI::Dialog::GetWidget((Dialog *)this,(string *)local_18);
  std::string::~string((string *)local_18);
  nop();
  uVar9 = (*(int *)(this + 0x50) - *(int *)(lVar5 + 0x50)) / 2;
  *(uint *)(lVar5 + 0x48) = uVar9;
  ProbabilityConfig::GetProbabilityConfig((ProbabilityConfig *)param_1,(wstring *)(ulong)uVar9);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  std::string::string((string *)local_18,"Lines");
  this_01 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_18);
  std::string::~string((string *)local_18);
  nop();
  UIWidgetImage::SetImage(this_01,(Image *)0x0);
  (**(code **)(*(long *)this_01 + 0x80))(this_01,1,1);
  this_02 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0x138));
  iVar2 = FUN_04c3fac8(0);
  Sexy::Insets::Insets
            (aIStack_28,iVar2,iVar2,*(int *)(this_01 + 0x50) - iVar2,
             *(int *)(this_01 + 0x54) - iVar2);
  (**(code **)(*(long *)this_02 + 0x1a0))(this_02,aIStack_28);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_02,2);
  this_03 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_03);
  (**(code **)(*(long *)this_03 + 0x198))
            (this_03,0,0,*(undefined4 *)(this_02 + 0x50),*(undefined4 *)(this_02 + 0x54));
  iVar1 = *(int *)(this_03 + 0x50);
  iVar3 = FUN_04c3fac8(0x28);
  Set8BytesTo0(asStack_40);
  iVar2 = iVar1 / 2;
  iVar10 = 0;
  uVar9 = 0;
  while( true ) {
    pPVar7 = (ProbabilityConfig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    uVar4 = ProbabilityConfig::GetSize(pPVar7);
    if (uVar4 <= uVar9) break;
    __s = "IMAGE_UI_DIALOG_ASSET_INFOBACKA";
    if ((uVar9 & 1) != 0) {
      __s = "IMAGE_UI_DIALOG_ASSET_INFOBACKB";
    }
    std::string::string(asStack_38,__s);
    nop();
    this_04 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(this_04,asStack_38);
    (**(code **)(*(long *)this_04 + 0x198))(this_04,0,iVar10,iVar1,iVar3);
    local_18[0] = 3;
    UIWidgetImage::SetImageType(this_04,(string *)local_18,0.0);
    pcVar8 = *(code **)(*(long *)this_03 + 0x60);
    (*pcVar8)(this_03,this_04);
    std::string::append(asStack_40,"",(size_t)pcVar8);
    local_44 = 0.0;
    pPVar7 = (ProbabilityConfig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    ProbabilityConfig::GetKeyValue(pPVar7,uVar9,asStack_40,&local_44);
    Sexy::StringToWString((Sexy *)asStack_40,extraout_x1);
    TodStringTranslate(awStack_30);
    pUVar6 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar6,(wstring *)local_18);
    FUN_05476c50((string *)local_18);
    FUN_05476c50(awStack_30);
    (**(code **)(*(long *)pUVar6 + 0x198))(pUVar6,0,0,iVar2,iVar3);
    UIWidgetText::SetFontIndex(pUVar6,10);
    FUN_04c3fa60(pUVar6 + 0xe0);
    pcVar8 = *(code **)(*(long *)pUVar6 + 0x170);
    Sexy::Color::Color((Color *)local_18,0);
    (*pcVar8)(pUVar6,0,(string *)local_18);
    (**(code **)(*(long *)this_04 + 0x60))(this_04,pUVar6);
    Sexy::StrFormat(L"%.01f%%",(string *)local_18,(double)local_44);
    pUVar6 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar6,(wstring *)local_18);
    FUN_05476c50((string *)local_18);
    (**(code **)(*(long *)pUVar6 + 0x198))(pUVar6,iVar2,0,iVar2,iVar3);
    UIWidgetText::SetFontIndex(pUVar6,10);
    FUN_04c3fa60(pUVar6 + 0xe0);
    pcVar8 = *(code **)(*(long *)pUVar6 + 0x170);
    Sexy::Color::Color((Color *)local_18,0);
    (*pcVar8)(pUVar6,0,(string *)local_18);
    (**(code **)(*(long *)this_04 + 0x60))(this_04,pUVar6);
    std::string::~string(asStack_38);
    iVar10 = iVar10 + iVar3;
    uVar9 = uVar9 + 1;
  }
  pPVar7 = (ProbabilityConfig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  iVar2 = ProbabilityConfig::GetSize(pPVar7);
  pcVar8 = *(code **)(*(long *)this_02 + 0x60);
  *(int *)(this_03 + 0x54) = iVar2 * iVar3;
  (*pcVar8)(this_02,this_03);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

