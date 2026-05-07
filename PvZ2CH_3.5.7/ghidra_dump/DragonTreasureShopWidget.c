// Class: DragonTreasureShopWidget


/* DragonTreasureShopWidget::~DragonTreasureShopWidget() */

void __thiscall DragonTreasureShopWidget::~DragonTreasureShopWidget(DragonTreasureShopWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06643ae0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06643e08;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* DragonTreasureShopWidget::~DragonTreasureShopWidget() */

void __thiscall DragonTreasureShopWidget::~DragonTreasureShopWidget(DragonTreasureShopWidget *this)

{
  ~DragonTreasureShopWidget(this);
  AK::FreeHook(this);
  return;
}


/* DragonTreasureShopWidget::DragonTreasureShopWidget() */

void __thiscall DragonTreasureShopWidget::DragonTreasureShopWidget(DragonTreasureShopWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06643ae0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06643e08;
  FUN_05476574(this + 0xe8);
  *(undefined8 *)(this + 0x100) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonTreasureShopWidget::InitView(int, DragonTreasureShopData const&) */

void __thiscall
DragonTreasureShopWidget::InitView
          (DragonTreasureShopWidget *this,int param_1,DragonTreasureShopData *param_2)

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
  uVar2 = FUN_0349abdc(0x1e);
  uVar3 = FUN_0349abdc(0x23);
  uVar4 = FUN_0349abdc(0x5a);
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
  uVar2 = FUN_0349abdc(0xf);
  uVar3 = FUN_0349abdc(0x69);
  iVar5 = FUN_0349abdc(0x1e);
  iVar1 = *(int *)(this + 0x50);
  uVar4 = FUN_0349abdc(0x14);
  (**(code **)(*plVar7 + 0x198))(plVar7,uVar2,uVar3,iVar1 - iVar5,uVar4);
  UIWidgetText::SetFontIndex(*(UIWidgetText **)(this + 0x100),0xa5);
  plVar7 = *(long **)(this + 0x100);
  pcVar11 = *(code **)(*plVar7 + 0x170);
  Sexy::Color::Color((Color *)local_40,2);
  (*pcVar11)(plVar7,0,(wstring *)local_40);
  FUN_0349a228(*(long *)(this + 0x100) + 0xe0);
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
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06aa2ff0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06aa2f00,3);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
  plVar7 = *(long **)(this + 0x108);
  uVar2 = FUN_0349abdc(0x19);
  uVar3 = FUN_0349abdc(0x82);
  uVar4 = FUN_0349abdc(100);
  uVar6 = FUN_0349abdc(0x2d);
  (**(code **)(*plVar7 + 0x198))(plVar7,uVar2,uVar3,uVar4,uVar6);
  plVar7 = *(long **)(this + 0x108);
  pcVar11 = *(code **)(*plVar7 + 800);
  uVar10 = PrimeText_PotentialTypeface::Typeface
                     (PrimeText_Game::Typeface_CafeteriaBlack_24_HardShadow);
  (*pcVar11)(plVar7,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x108));
  std::string::string((string *)local_40,"IMAGE_UI_FRAGMENT_MATERIAL_MAT_DRAGON_TREASURE_INTEGRAL");
  this_00 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_00,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  uVar2 = FUN_0349abdc(10);
  uVar3 = FUN_0349abdc(6);
  uVar4 = FUN_0349abdc(0x1e);
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
  uVar2 = FUN_0349abdc(0x28);
  uVar3 = FUN_0349abdc(3);
  uVar4 = FUN_0349abdc(0x32);
  (**(code **)(*(long *)pUVar8 + 0x198))(pUVar8,uVar2,uVar3,uVar4,uVar2);
  UIWidgetText::SetFontIndex(pUVar8,7);
  pcVar11 = *(code **)(*(long *)pUVar8 + 0x170);
  Sexy::Color::Color((Color *)local_40,1);
  (*pcVar11)(pUVar8,0,(wstring *)local_40);
  FUN_0349a228(pUVar8 + 0xe0);
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
/* DragonTreasureShopWidget::Draw(Sexy::Graphics*) */

void __thiscall DragonTreasureShopWidget::Draw(DragonTreasureShopWidget *this,Graphics *param_1)

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
  iVar1 = FUN_0349abdc(0xf);
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54) - iVar1);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2d08);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2f50);
  iVar2 = FUN_0349abdc(0xf);
  iVar3 = FUN_0349abdc(0x23);
  iVar4 = FUN_0349abdc(0x1e);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_0349abdc(0x5a);
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar2,iVar3,iVar1 - iVar4,iVar5);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2ce0);
  iVar2 = FUN_0349abdc(0xf);
  iVar3 = FUN_0349abdc(0x69);
  iVar4 = FUN_0349abdc(0x1e);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_0349abdc(0x14);
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar2,iVar3,iVar1 - iVar4,iVar5);
  iVar1 = FUN_0349abdc(7);
  iVar2 = FUN_0349abdc(0x96);
  iVar3 = FUN_0349abdc(0x19);
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
/* DragonTreasureShopWidget::BuyShopItem() */

void __thiscall DragonTreasureShopWidget::BuyShopItem(DragonTreasureShopWidget *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [3104];
  string asStack_c8 [192];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"key");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_0349aa6c(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_c8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonTreasureShopWidget::ButtonDepress(int) */

void __thiscall DragonTreasureShopWidget::ButtonDepress(DragonTreasureShopWidget *this,int param_1)

{
  int iVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIMessageBox *this_02;
  Image *pIVar3;
  long lVar4;
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
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    std::string::string(asStack_10,"mat_dragon_treasure_integral");
    iVar2 = PlayerInfo::GetMaterialNum(this_01,asStack_10);
    iVar1 = *(int *)(this + 0xf8);
    std::string::~string(asStack_10);
    nop();
    if (iVar2 < iVar1) {
      this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_02 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_02,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[BUTTON_OK]");
        FUN_05478178(awStack_18,L"[THE_MATERIAL_NOT_ENOUGH]",auStack_40);
        FUN_05478178(asStack_10,L"[MAT_DRAGON_TREASURE_INTEGRAL]",auStack_38);
        TodReplaceString(awStack_18,L"{NAME}",(wstring *)asStack_10);
        FUN_05476c50(asStack_10);
        nop();
        FUN_05476c50(awStack_18);
        nop();
        UIMessageBox::SetMessage(this_02,awStack_20,awStack_30);
        std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar3 = (Image *)StringHelper::ToImage(asStack_10,false);
        UIMessageBox::SetBackground(this_02,pIVar3);
        std::string::~string(asStack_10);
        nop();
        lVar4 = UIMessageBox::GetButtonCancel(this_02);
        thunk_FUN_05477b9c(lVar4 + 0xd8,auStack_28);
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


/* non-virtual thunk to DragonTreasureShopWidget::ButtonDepress(int) */

void __thiscall DragonTreasureShopWidget::ButtonDepress(DragonTreasureShopWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

