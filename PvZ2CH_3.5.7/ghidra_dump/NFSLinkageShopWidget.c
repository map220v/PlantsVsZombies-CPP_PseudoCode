// Class: NFSLinkageShopWidget


/* NFSLinkageShopWidget::~NFSLinkageShopWidget() */

void __thiscall NFSLinkageShopWidget::~NFSLinkageShopWidget(NFSLinkageShopWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069eca20;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069ecd48;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* NFSLinkageShopWidget::~NFSLinkageShopWidget() */

void __thiscall NFSLinkageShopWidget::~NFSLinkageShopWidget(NFSLinkageShopWidget *this)

{
  ~NFSLinkageShopWidget(this);
  AK::FreeHook(this);
  return;
}


/* NFSLinkageShopWidget::NFSLinkageShopWidget() */

void __thiscall NFSLinkageShopWidget::NFSLinkageShopWidget(NFSLinkageShopWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_069eca20;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069ecd48;
  FUN_05476574(this + 0xe8);
  *(undefined8 *)(this + 0x100) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NFSLinkageShopWidget::InitView(int, NFSLinkageShopData const&) */

void __thiscall
NFSLinkageShopWidget::InitView(NFSLinkageShopWidget *this,int param_1,NFSLinkageShopData *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  UIWidgetText *pUVar8;
  PVZ2UIButton *pPVar9;
  undefined8 uVar10;
  UIWidgetImage *this_00;
  code *pcVar11;
  string asStack_b0 [8];
  GAME_ITEM_INFO aGStack_a8 [40];
  wstring awStack_80 [8];
  wstring awStack_78 [56];
  undefined4 local_40 [14];
  long local_8;
  
  uVar10 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0xf0) = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0xf8) = uVar10;
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)param_2;
  *(int *)(this + 0xe0) = param_1;
  GetGameItemInfo(iVar1,0x7fffffff,0);
  Sexy::StrFormat("x%d",asStack_b0,(ulong)*(uint *)(param_2 + 4));
  Sexy::ToWString(asStack_b0);
  std::operator+(awStack_80,awStack_78);
  FUN_054766c8(this + 0xe8,(wstring *)local_40);
  FUN_05476c50((wstring *)local_40);
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_b0);
  plVar7 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*(int *)(this + 0xf0),0,false);
  uVar2 = FUN_04e8e694(0x1e);
  uVar3 = FUN_04e8e694(0x23);
  uVar4 = FUN_04e8e694(0x5a);
  (**(code **)(*plVar7 + 0x198))(plVar7,uVar2,uVar3,uVar4,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,plVar7);
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_2 + 0xc);
  FUN_05478178(awStack_78,L"[SECRET_BUY_LEFT_STR]",asStack_b0);
  TodReplaceNumberString(awStack_78,L"{NUMBER}",*(int *)(this + 0xe4));
  pUVar8 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar8,(wstring *)local_40);
  *(UIWidgetText **)(this + 0x100) = pUVar8;
  FUN_05476c50((wstring *)local_40);
  FUN_05476c50(awStack_78);
  nop();
  plVar7 = *(long **)(this + 0x100);
  uVar2 = FUN_04e8e694(0xf);
  uVar3 = FUN_04e8e694(0x69);
  iVar5 = FUN_04e8e694(0x1e);
  iVar1 = *(int *)(this + 0x50);
  uVar4 = FUN_04e8e694(0x14);
  (**(code **)(*plVar7 + 0x198))(plVar7,uVar2,uVar3,iVar1 - iVar5,uVar4);
  UIWidgetText::SetFontIndex(*(UIWidgetText **)(this + 0x100),0xa5);
  plVar7 = *(long **)(this + 0x100);
  pcVar11 = *(code **)(*plVar7 + 0x170);
  Sexy::Color::Color((Color *)local_40,2);
  (*pcVar11)(plVar7,0,(wstring *)local_40);
  FUN_04e8df88(*(long *)(this + 0x100) + 0xe0);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  FUN_05478178(awStack_78,&DAT_056f11a8,asStack_b0);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar9,0x12d,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0x108) = pPVar9;
  FUN_05476c50(awStack_78);
  nop();
  pPVar9 = *(PVZ2UIButton **)(this + 0x108);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ba0ff0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ba10b8,3);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
  plVar7 = *(long **)(this + 0x108);
  uVar2 = FUN_04e8e694(0x19);
  uVar3 = FUN_04e8e694(0x82);
  uVar4 = FUN_04e8e694(100);
  uVar6 = FUN_04e8e694(0x2d);
  (**(code **)(*plVar7 + 0x198))(plVar7,uVar2,uVar3,uVar4,uVar6);
  plVar7 = *(long **)(this + 0x108);
  pcVar11 = *(code **)(*plVar7 + 800);
  uVar10 = PrimeText_PotentialTypeface::Typeface
                     (PrimeText_Game::Typeface_CafeteriaBlack_24_HardShadow);
  (*pcVar11)(plVar7,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x108));
  std::string::string((string *)local_40,"IMAGE_UI_FRAGMENT_MATERIAL_MAT_NFSLINKAGE_TICKET");
  this_00 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_00,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  uVar2 = FUN_04e8e694(10);
  uVar3 = FUN_04e8e694(6);
  uVar4 = FUN_04e8e694(0x1e);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar2,uVar3,uVar4,uVar4);
  local_40[0] = 2;
  UIWidgetImage::SetImageType(this_00,(wstring *)local_40,0.0);
  plVar7 = *(long **)(this + 0x108);
  this_00[0x6d] = (UIWidgetImage)0x0;
  (**(code **)(*plVar7 + 0x60))(plVar7,this_00);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xf8));
  Sexy::ToWString((string *)awStack_78);
  pUVar8 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar8,(wstring *)local_40);
  FUN_05476c50((wstring *)local_40);
  std::string::~string((string *)awStack_78);
  uVar2 = FUN_04e8e694(0x28);
  uVar3 = FUN_04e8e694(3);
  uVar4 = FUN_04e8e694(0x32);
  (**(code **)(*(long *)pUVar8 + 0x198))(pUVar8,uVar2,uVar3,uVar4,uVar2);
  UIWidgetText::SetFontIndex(pUVar8,7);
  pcVar11 = *(code **)(*(long *)pUVar8 + 0x170);
  Sexy::Color::Color((Color *)local_40,1);
  (*pcVar11)(pUVar8,0,(wstring *)local_40);
  FUN_04e8df88(pUVar8 + 0xe0);
  plVar7 = *(long **)(this + 0x108);
  pUVar8[0x6d] = (UIWidgetText)0x0;
  (**(code **)(*plVar7 + 0x60))(plVar7,pUVar8);
  if (*(int *)(this + 0xe4) < 1) {
    (**(code **)(**(long **)(this + 0x108) + 0x188))(*(long **)(this + 0x108),1);
  }
  GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NFSLinkageShopWidget::Draw(Sexy::Graphics*) */

void __thiscall NFSLinkageShopWidget::Draw(NFSLinkageShopWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Image *pIVar7;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04e8e694(0xf);
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54) - iVar1);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba0ec0);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba1168);
  iVar2 = FUN_04e8e694(0xf);
  iVar3 = FUN_04e8e694(0x23);
  iVar4 = FUN_04e8e694(0x1e);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_04e8e694(0x5a);
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar2,iVar3,iVar1 - iVar4,iVar5);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba0e98);
  iVar2 = FUN_04e8e694(0xf);
  iVar3 = FUN_04e8e694(0x69);
  iVar4 = FUN_04e8e694(0x1e);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_04e8e694(0x14);
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar2,iVar3,iVar1 - iVar4,iVar5);
  iVar1 = FUN_04e8e694(7);
  iVar2 = FUN_04e8e694(0x96);
  iVar3 = FUN_04e8e694(0x19);
  Sexy::Insets::Insets(aIStack_28,0,iVar1,iVar2,iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xe8,aIStack_28,uVar6,aIStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NFSLinkageShopWidget::BuyShopItem() */

void __thiscall NFSLinkageShopWidget::BuyShopItem(NFSLinkageShopWidget *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  string asStack_68 [8];
  string asStack_60 [8];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_68,"key");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_68);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
  FUN_05474278(uVar1,asStack_60);
  std::string::~string(asStack_60);
  std::string::~string(asStack_68);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  std::string::string(asStack_68,"V407");
  FUN_04e8e5dc(afStack_58,this);
  std::string::string(asStack_60,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_68,(map *)amStack_38,30.0,(function *)afStack_58,true,true,asStack_60,0
            );
  std::string::~string(asStack_60);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  std::string::~string(asStack_68);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NFSLinkageShopWidget::ButtonDepress(int) */

void __thiscall NFSLinkageShopWidget::ButtonDepress(NFSLinkageShopWidget *this,int param_1)

{
  int iVar1;
  UINFSLinkage *this_00;
  UIMessageBox *this_01;
  Image *pIVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  wstring awStack_30 [8];
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x12d) {
    this_00 = (UINFSLinkage *)UISingletonDialog<UINFSLinkage>::GetSingletonPtr();
    iVar1 = UINFSLinkage::GetCurrentIntegral(this_00);
    if (iVar1 < *(int *)(this + 0xf8)) {
      this_01 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_01 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_01,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[BUTTON_OK]");
        FUN_05478178(awStack_18,L"[THE_MATERIAL_NOT_ENOUGH]",auStack_40);
        FUN_05478178(asStack_10,L"[MAT_NFSLINKAGE_INTEGRAL]",auStack_38);
        TodReplaceString(awStack_18,L"{NAME}",(wstring *)asStack_10);
        FUN_05476c50(asStack_10);
        nop();
        FUN_05476c50(awStack_18);
        nop();
        UIMessageBox::SetMessage(this_01,awStack_20,awStack_30);
        std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar2 = (Image *)StringHelper::ToImage(asStack_10,false);
        UIMessageBox::SetBackground(this_01,pIVar2);
        std::string::~string(asStack_10);
        nop();
        lVar3 = UIMessageBox::GetButtonCancel(this_01);
        thunk_FUN_05477b9c(lVar3 + 0xd8,auStack_28);
        FUN_05476c50(awStack_20);
        FUN_05476c50(auStack_28);
        FUN_05476c50(awStack_30);
      }
    }
    else {
      BuyShopItem(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to NFSLinkageShopWidget::ButtonDepress(int) */

void __thiscall NFSLinkageShopWidget::ButtonDepress(NFSLinkageShopWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

