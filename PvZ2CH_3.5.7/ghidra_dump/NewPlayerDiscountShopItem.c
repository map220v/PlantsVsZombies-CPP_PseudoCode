// Class: NewPlayerDiscountShopItem


/* NewPlayerDiscountShopItem::~NewPlayerDiscountShopItem() */

void __thiscall
NewPlayerDiscountShopItem::~NewPlayerDiscountShopItem(NewPlayerDiscountShopItem *this)

{
  *(undefined ***)this = &PTR_GetClass_06632ca0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06632fc8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0xf0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* NewPlayerDiscountShopItem::~NewPlayerDiscountShopItem() */

void __thiscall
NewPlayerDiscountShopItem::~NewPlayerDiscountShopItem(NewPlayerDiscountShopItem *this)

{
  ~NewPlayerDiscountShopItem(this);
  AK::FreeHook(this);
  return;
}


/* NewPlayerDiscountShopItem::Refresh() */

void __thiscall NewPlayerDiscountShopItem::Refresh(NewPlayerDiscountShopItem *this)

{
  if (0 < *(int *)(this + 0xe8)) {
    return;
  }
  (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),1);
  return;
}


/* NewPlayerDiscountShopItem::NewPlayerDiscountShopItem() */

void __thiscall
NewPlayerDiscountShopItem::NewPlayerDiscountShopItem(NewPlayerDiscountShopItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06632ca0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06632fc8;
  FUN_05476574(this + 0xf0);
  *(undefined8 *)(this + 0xf8) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x100));
  this[0x59] = (NewPlayerDiscountShopItem)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlayerDiscountShopItem::ButtonDepress(int) */

void __thiscall
NewPlayerDiscountShopItem::ButtonDepress(NewPlayerDiscountShopItem *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIMessageBox *pUVar2;
  Image *pIVar3;
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xe0) + 0x458 == param_1) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar1 = PlayerInfo::GetNumGems(this_01,false);
    if (iVar1 < *(int *)(this + 0xe4)) {
      pUVar2 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (pUVar2 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(pUVar2,2);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[GEM_NOT_ENOUGH_DIALOG_TITLE]");
        UIMessageBox::SetMessage(pUVar2,awStack_58,awStack_60);
        std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
        pIVar3 = (Image *)StringHelper::ToImage(asStack_50,false);
        UIMessageBox::SetBackground(pUVar2,pIVar3);
        std::string::~string(asStack_50);
        nop();
        FUN_05476c50(awStack_58);
        FUN_05476c50(awStack_60);
      }
    }
    else {
      pUVar2 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (pUVar2 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(pUVar2,6);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[NEWPLAYER_COLLECTION_DISCOUNTSOHP_BUY_CONFIRM]");
        UIMessageBox::SetMessage(pUVar2,awStack_58,awStack_60);
        std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
        pIVar3 = (Image *)StringHelper::ToImage(asStack_50,false);
        UIMessageBox::SetBackground(pUVar2,pIVar3);
        std::string::~string(asStack_50);
        nop();
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,BuyConfirm);
        Sexy::Delegate2<UIMessageBox*,int>::
        Delegate2<NewPlayerDiscountShopItem,void(NewPlayerDiscountShopItem::*)(UIMessageBox*,int)>
                  (aDStack_38,asStack_50);
        UIMessageBox::SetCallback(pUVar2,aDStack_38);
        FUN_05476c50(awStack_58);
        FUN_05476c50(awStack_60);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to NewPlayerDiscountShopItem::ButtonDepress(int) */

void __thiscall
NewPlayerDiscountShopItem::ButtonDepress(NewPlayerDiscountShopItem *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* NewPlayerDiscountShopItem::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
NewPlayerDiscountShopItem::DrawAll
          (NewPlayerDiscountShopItem *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (0 < *(int *)(this + 0xe8)) {
    return;
  }
  iVar2 = FUN_03447a18(0x50);
  iVar1 = *(int *)(this + 0x50);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa0ed0);
  iVar3 = FUN_03447a18(0x28);
  iVar4 = FUN_03447a18(0x50);
  iVar5 = FUN_03447a18(0x30);
  Sexy::Graphics::DrawImage(param_2,pIVar6,(iVar1 - iVar2) / 2,iVar3,iVar4,iVar5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlayerDiscountShopItem::Init(int, int, int, std::vector<S2C_BonusInfo,
   std::allocator<S2C_BonusInfo> > const&) */

void __thiscall
NewPlayerDiscountShopItem::Init
          (NewPlayerDiscountShopItem *this,int param_1,int param_2,int param_3,vector *param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  long *plVar9;
  PVZ2UIButton *pPVar10;
  UIWidgetImage *this_00;
  UIWidgetText *this_01;
  undefined8 uVar11;
  int iVar12;
  code *pcVar13;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x59] = (NewPlayerDiscountShopItem)0x0;
  *(int *)(this + 0xe0) = param_1;
  *(int *)(this + 0xe4) = param_2;
  *(int *)(this + 0xe8) = param_3;
  cVar3 = std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::empty
                    ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)param_4);
  if (cVar3 == '\0') {
    piVar8 = (int *)FUN_034469cc(*(undefined8 *)param_4,0);
    GetGameItemInfo(*piVar8,0x7fffffff,0);
    thunk_FUN_05477b9c(this + 0xf0,auStack_18);
    piVar8 = (int *)FUN_034469cc(*(undefined8 *)param_4,0);
    plVar9 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar8,piVar8[1],false);
    (**(code **)(*plVar9 + 0x198))
              (plVar9,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x50));
    (**(code **)(*(long *)this + 0x60))(this,plVar9);
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_40);
  }
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar10,param_1 + 0x458,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0xf8) = pPVar10;
  FUN_05476c50(awStack_78);
  nop();
  pPVar10 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06aa0c40,5);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06aa0e28,5);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  iVar1 = *(int *)(this + 0x50);
  (**(code **)(**(long **)(this + 0xf8) + 0x198))(*(long **)(this + 0xf8),0,iVar1,iVar1,iVar1 / 2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
  this_00 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_00);
  iVar2 = *(int *)(this + 0x50);
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar4 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar4 = iVar2;
  }
  iVar1 = iVar1 >> 2;
  iVar4 = iVar4 >> 3;
  (**(code **)(*(long *)this_00 + 0x198))(this_00,iVar4,iVar4,iVar1,iVar1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06aa0f48,2);
  UIWidgetImage::SetImage(this_00,(PVZ2UIImage *)&local_40);
  (**(code **)(*(long *)this_00 + 0x90))(this_00,1);
  (**(code **)(**(long **)(this + 0xf8) + 0x60))(*(long **)(this + 0xf8),this_00);
  FUN_05478178(awStack_78,L"[NEWPLAYER_COLLECTION_DISCOUNT_GEM]",auStack_80);
  TodReplaceNumberString(awStack_78,L"{NUMS}",param_2);
  this_01 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(this_01,(wstring *)&local_40);
  FUN_05476c50((wstring *)&local_40);
  FUN_05476c50(awStack_78);
  nop();
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,iVar1 + iVar4,0,(*(int *)(*(long *)(this + 0xf8) + 0x50) + iVar4 * -2) - iVar1,
             *(undefined4 *)(*(long *)(this + 0xf8) + 0x54));
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
  FUN_03446754(this_01 + 0xe8,uVar11);
  pcVar13 = *(code **)(*(long *)this_01 + 0x170);
  Sexy::Color::Color((Color *)&local_40,1);
  (*pcVar13)(this_01,0,(wstring *)&local_40);
  FUN_03446f20(this_01 + 0xe0);
  (**(code **)(*(long *)this_01 + 0x90))(this_01,1);
  (**(code **)(**(long **)(this + 0xf8) + 0x60))(*(long **)(this + 0xf8),this_01);
  iVar1 = *(int *)(this + 0x50);
  iVar12 = (int)((float)iVar1 * 0.5952381);
  iVar4 = FUN_03447a18(0xf);
  iVar2 = *(int *)(this + 0x54);
  iVar5 = FUN_03447a18(10);
  iVar6 = FUN_03447a18(0x1e);
  iVar7 = FUN_03447a18(0x14);
  Sexy::Insets::Insets
            ((Insets *)&local_40,-iVar4,(iVar2 - iVar12) - iVar5,iVar1 + iVar6,iVar7 + iVar12);
  *(undefined8 *)(this + 0x100) = local_40;
  *(undefined8 *)(this + 0x108) = uStack_38;
  Refresh(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlayerDiscountShopItem::BuyConfirm(UIMessageBox*, int) */

void __thiscall
NewPlayerDiscountShopItem::BuyConfirm
          (NewPlayerDiscountShopItem *this,UIMessageBox *param_1,int param_2)

{
  string *this_00;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [3048];
  string asStack_100 [248];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    __n = auStack_d48;
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    std::string::string(asStack_d40,"id");
    this_00 = (string *)
              std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,asStack_d40);
    DString::DString(aDStack_ce8,*(int *)(this + 0xe0));
    __s = (char *)DString::c_str(aDStack_ce8);
    std::string::append(this_00,__s,(size_t)__n);
    DString::~DString(aDStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)aDStack_ce8);
    FUN_03447904(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_01,asStack_100,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPlayerDiscountShopItem::Draw(Sexy::Graphics*) */

void __thiscall NewPlayerDiscountShopItem::Draw(NewPlayerDiscountShopItem *this,Graphics *param_1)

{
  Image *pIVar1;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  nop();
  if (*(uint *)(this + 0xe0) < 4) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa0ca0;
  }
  else if (*(uint *)(this + 0xe0) - 4 < 3) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa0e80;
  }
  else {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa0a60;
  }
  pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  Sexy::Graphics::DrawImage
            (param_1,pIVar1,*(int *)(this + 0x100),*(int *)(this + 0x104),*(int *)(this + 0x108),
             *(int *)(this + 0x10c));
  return;
}

