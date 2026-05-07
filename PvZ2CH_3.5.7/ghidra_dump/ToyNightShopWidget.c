// Class: ToyNightShopWidget


/* ToyNightShopWidget::~ToyNightShopWidget() */

void __thiscall ToyNightShopWidget::~ToyNightShopWidget(ToyNightShopWidget *this)

{
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066b7e78;
  *(undefined ***)this = &PTR_GetClass_066b7b50;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ToyNightShopWidget::~ToyNightShopWidget() */

void __thiscall ToyNightShopWidget::~ToyNightShopWidget(ToyNightShopWidget *this)

{
  ~ToyNightShopWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightShopWidget::BuyShopItem() */

void __thiscall ToyNightShopWidget::BuyShopItem(ToyNightShopWidget *this)

{
  undefined4 uVar1;
  NameMapperBase *this_00;
  NetworkMgr *this_01;
  long *plVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NameMapperBase *)MaterialItemMapper::GetInstance();
  std::string::string(asStack_10,"mat_toy_parts");
  uVar1 = NameMapperBase::GetIdForName(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_01 = (NetworkMgr *)NetworkMgr::Instance();
  plVar2 = (long *)NetworkMgr::GetNewNetWorkProcess(this_01);
  (**(code **)(*plVar2 + 0x370))
            (plVar2,0x12,*(undefined4 *)(this + 0xf0),*(undefined4 *)(this + 0xf4),uVar1,
             *(undefined4 *)(this + 0xf8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightShopWidget::ButtonDepress(int) */

void __thiscall ToyNightShopWidget::ButtonDepress(ToyNightShopWidget *this,int param_1)

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
  if (param_1 == 0x6d) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    std::string::string(asStack_10,"mat_toy_parts");
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
        FUN_05478178(asStack_10,L"[MAT_TOY_PARTS]",auStack_38);
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


/* non-virtual thunk to ToyNightShopWidget::ButtonDepress(int) */

void __thiscall ToyNightShopWidget::ButtonDepress(ToyNightShopWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightShopWidget::InitView(int, ToyNightShopData, int) */

void ToyNightShopWidget::InitView
               (long *param_1,undefined4 param_2,long param_3,undefined4 param_4,undefined4 param_5)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  UIWidgetText *pUVar9;
  PVZ2UIButton *pPVar10;
  undefined8 uVar11;
  UIWidgetImage *this;
  NameMapperBase *pNVar12;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  code *pcVar13;
  string asStack_b0 [8];
  GAME_ITEM_INFO aGStack_a8 [40];
  wstring awStack_80 [8];
  wstring awStack_78 [56];
  undefined4 local_40 [14];
  long local_8;
  
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  local_8 = ___stack_chk_guard;
  param_1[0x1e] = param_3;
  *(undefined4 *)(param_1 + 0x1f) = param_4;
  GetGameItemInfo((int)param_3,0x7fffffff,0);
  Sexy::StrFormat("x%d",asStack_b0,(ulong)*(uint *)((long)param_1 + 0xf4));
  Sexy::ToWString(asStack_b0);
  std::operator+(awStack_80,awStack_78);
  FUN_054766c8(param_1 + 0x1d,(wstring *)local_40);
  FUN_05476c50((wstring *)local_40);
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_b0);
  plVar8 = (long *)UIRewardFrameSelect::CreateUIRewardFrame((int)param_1[0x1e],0,false);
  uVar3 = FUN_038c310c(0x1e);
  uVar4 = FUN_038c310c(0x23);
  uVar5 = FUN_038c310c(0x5a);
  (**(code **)(*plVar8 + 0x198))(plVar8,uVar3,uVar4,uVar5,uVar5);
  (**(code **)(*param_1 + 0x60))(param_1,plVar8);
  *(undefined4 *)((long)param_1 + 0xe4) = param_5;
  FUN_05478178(awStack_78,L"[SECRET_BUY_LEFT_STR]",asStack_b0);
  TodReplaceNumberString(awStack_78,L"{NUMBER}",*(int *)((long)param_1 + 0xe4));
  pUVar9 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar9,(wstring *)local_40);
  param_1[0x20] = (long)pUVar9;
  FUN_05476c50((wstring *)local_40);
  FUN_05476c50(awStack_78);
  nop();
  plVar8 = (long *)param_1[0x20];
  uVar3 = FUN_038c310c(0xf);
  uVar4 = FUN_038c310c(0x69);
  iVar6 = FUN_038c310c(0x1e);
  lVar1 = param_1[10];
  uVar5 = FUN_038c310c(0x14);
  (**(code **)(*plVar8 + 0x198))(plVar8,uVar3,uVar4,(int)lVar1 - iVar6,uVar5);
  UIWidgetText::SetFontIndex((UIWidgetText *)param_1[0x20],0xa5);
  plVar8 = (long *)param_1[0x20];
  pcVar13 = *(code **)(*plVar8 + 0x170);
  Sexy::Color::Color((Color *)local_40,2);
  (*pcVar13)(plVar8,0,(wstring *)local_40);
  FUN_038c26dc(param_1[0x20] + 0xe0);
  (**(code **)(*param_1 + 0x60))(param_1,param_1[0x20]);
  FUN_05478178(awStack_78,&DAT_056f11a8,asStack_b0);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar10,0x6d,(ButtonListener *)(param_1 + 0x1b),awStack_78,(Color *)local_40);
  param_1[0x21] = (long)pPVar10;
  FUN_05476c50(awStack_78);
  nop();
  pPVar10 = (PVZ2UIButton *)param_1[0x21];
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ab7418,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ab7610,3);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
  plVar8 = (long *)param_1[0x21];
  uVar3 = FUN_038c310c(0x19);
  uVar4 = FUN_038c310c(0x82);
  uVar5 = FUN_038c310c(100);
  uVar7 = FUN_038c310c(0x2d);
  (**(code **)(*plVar8 + 0x198))(plVar8,uVar3,uVar4,uVar5,uVar7);
  plVar8 = (long *)param_1[0x21];
  pcVar13 = *(code **)(*plVar8 + 800);
  uVar11 = PrimeText_PotentialTypeface::Typeface
                     (PrimeText_Game::Typeface_CafeteriaBlack_24_HardShadow);
  (*pcVar13)(plVar8,uVar11);
  (**(code **)(*param_1 + 0x60))(param_1,param_1[0x21]);
  std::string::string((string *)local_40,"IMAGE_UI_FRAGMENT_MATERIAL_MAT_TOY_PARTS");
  this = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  uVar3 = FUN_038c310c(10);
  uVar4 = FUN_038c310c(6);
  uVar5 = FUN_038c310c(0x1e);
  (**(code **)(*(long *)this + 0x198))(this,uVar3,uVar4,uVar5,uVar5);
  local_40[0] = 2;
  UIWidgetImage::SetImageType(this,(wstring *)local_40,0.0);
  plVar8 = (long *)param_1[0x21];
  this[0x6d] = (UIWidgetImage)0x0;
  (**(code **)(*plVar8 + 0x60))(plVar8,this);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(param_1 + 0x1f));
  Sexy::ToWString((string *)local_40);
  std::string::~string((string *)local_40);
  pNVar12 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar12,(int)param_1[0x1e]);
  if (cVar2 == '\0') {
    pNVar12 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
    cVar2 = NameMapperBase::ContainsId(pNVar12,(int)param_1[0x1e]);
    if (cVar2 != '\0') goto LAB_038c6414;
    iVar6 = (int)param_1[0x1e];
    if (0x3e6 < iVar6 - 0x61a9U) goto LAB_038c6460;
  }
  else {
LAB_038c6414:
    iVar6 = (int)param_1[0x1e];
  }
  cVar2 = NewAvatar::IsAvatarUnlocked(iVar6);
  if (cVar2 == '\0') {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    cVar2 = PlayerInfo::isUnlockHeadshotId(this_01,(int)param_1[0x1e]);
    if (cVar2 == '\0') goto LAB_038c6460;
  }
  TodStringTranslate(L"[PARTY_ASSIST_WISHING_POOL_GOT]");
  FUN_054766c8(awStack_78,(wstring *)local_40);
  FUN_05476c50((wstring *)local_40);
  (**(code **)(*(long *)param_1[0x21] + 0x188))((long *)param_1[0x21],1);
LAB_038c6460:
  pUVar9 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar9,awStack_78);
  uVar3 = FUN_038c310c(0x28);
  uVar4 = FUN_038c310c(3);
  uVar5 = FUN_038c310c(0x32);
  (**(code **)(*(long *)pUVar9 + 0x198))(pUVar9,uVar3,uVar4,uVar5,uVar3);
  UIWidgetText::SetFontIndex(pUVar9,7);
  pcVar13 = *(code **)(*(long *)pUVar9 + 0x170);
  Sexy::Color::Color((Color *)local_40,1);
  (*pcVar13)(pUVar9,0,(wstring *)local_40);
  FUN_038c26dc(pUVar9 + 0xe0);
  plVar8 = (long *)param_1[0x21];
  pUVar9[0x6d] = (UIWidgetText)0x0;
  (**(code **)(*plVar8 + 0x60))(plVar8,pUVar9);
  if (*(int *)((long)param_1 + 0xe4) < 1) {
    (**(code **)(*(long *)param_1[0x21] + 0x188))((long *)param_1[0x21],1);
  }
  FUN_05476c50(awStack_78);
  GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_a8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ToyNightShopWidget::ToyNightShopWidget() */

void __thiscall ToyNightShopWidget::ToyNightShopWidget(ToyNightShopWidget *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066b7b50;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066b7e78;
  FUN_05476574(this + 0xe8);
  *(undefined8 *)(this + 0x100) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnShopBuyFinish);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,S2C_ShopItemPurchaseInfo_const*,Sexy::CBMemberTranslatorX<ToyNightShopWidget,void(ToyNightShopWidget::*)(bool,S2C_ShopItemPurchaseInfo_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyShopBuyFinishDetails,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightShopWidget::Draw(Sexy::Graphics*) */

void __thiscall ToyNightShopWidget::Draw(ToyNightShopWidget *this,Graphics *param_1)

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
  iVar1 = FUN_038c310c(0xf);
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54) - iVar1);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab77f0);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab74f0);
  iVar2 = FUN_038c310c(0xf);
  iVar3 = FUN_038c310c(0x23);
  iVar4 = FUN_038c310c(0x1e);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_038c310c(0x5a);
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar2,iVar3,iVar1 - iVar4,iVar5);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab74c0);
  iVar2 = FUN_038c310c(0xf);
  iVar3 = FUN_038c310c(0x69);
  iVar4 = FUN_038c310c(0x1e);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_038c310c(0x14);
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar2,iVar3,iVar1 - iVar4,iVar5);
  iVar1 = FUN_038c310c(7);
  iVar2 = FUN_038c310c(0x96);
  iVar3 = FUN_038c310c(0x19);
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
/* ToyNightShopWidget::OnShopBuyFinish(bool, S2C_ShopItemPurchaseInfo const*) */

void __thiscall
ToyNightShopWidget::OnShopBuyFinish
          (ToyNightShopWidget *this,bool param_1,S2C_ShopItemPurchaseInfo *param_2)

{
  uint uVar1;
  uint uVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar3;
  ToyNightShopMain *this_02;
  undefined4 *puVar4;
  CommonRewardDisplay *this_03;
  Widget *pWVar5;
  TGALogMgr *this_04;
  size_t __n;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [32];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1) && (*(int *)(param_2 + 0x14) == 0x12)) &&
     (*(long *)(param_2 + 0x18) == *(long *)(this + 0xf0))) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    std::string::string(asStack_50,"mat_toy_parts");
    uVar1 = PlayerInfo::GetMaterialNum(this_01,asStack_50);
    std::string::~string(asStack_50);
    nop();
    ProfileChangeItemAmount(*(int *)(param_2 + 0x20),-*(int *)(param_2 + 0x24),false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_50);
    ProfileChangeItemAmount(*(int *)(param_2 + 0x18),*(int *)(param_2 + 0x1c),false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_50);
    std::string::string(asStack_50,"mat_toy_parts");
    uVar2 = PlayerInfo::GetMaterialNum(this_01,asStack_50);
    std::string::~string(asStack_50);
    nop();
    lVar3 = Sexy::LazySingleton<ToyNightMgr>::GetInstance();
    *(uint *)(lVar3 + 0x118) = uVar2;
    this_02 = (ToyNightShopMain *)UISingletonDialog<ToyNightShopMain>::GetSingletonPtr();
    ToyNightShopMain::RefreshToyNums(this_02);
    *(int *)(this + 0xe4) = *(int *)(this + 0xe4) + -1;
    lVar3 = Sexy::LazySingleton<ToyNightMgr>::GetInstance();
    puVar4 = (undefined4 *)FUN_038c1dd4(*(undefined8 *)(lVar3 + 0x68),(long)*(int *)(this + 0xe0));
    *puVar4 = *(undefined4 *)(this + 0xe4);
    uVar6 = *(undefined8 *)(this + 0x100);
    FUN_05478178(awStack_58,L"[SECRET_BUY_LEFT_STR]",auStack_60);
    TodReplaceNumberString(awStack_58,L"{NUMBER}",*(int *)(this + 0xe4));
    PuzzleTip::SetTip(uVar6,asStack_50);
    FUN_05476c50(asStack_50);
    FUN_05476c50(awStack_58);
    nop();
    if (*(int *)(this + 0xe4) < 1) {
      (**(code **)(**(long **)(this + 0x108) + 0x188))(*(long **)(this + 0x108),1);
    }
    this_03 = (CommonRewardDisplay *)UISingletonDialog<CommonRewardDisplay>::ShowDialog();
    __n = 1;
    pWVar5 = (Widget *)
             UIRewardFrameSelect::CreateUIRewardFrame
                       (*(int *)(this + 0xf0),*(int *)(this + 0xf4),true);
    CommonRewardDisplay::AddItemWidget(this_03,pWVar5);
    TGATourismOctoberData::TGATourismOctoberData((TGATourismOctoberData *)asStack_50);
    std::string::append(asStack_50,"5",__n);
    Sexy::StrFormat("%d, %d, %d",awStack_58,(ulong)uVar1,(ulong)(uVar2 - uVar1),(ulong)uVar2);
    FUN_05474278(auStack_30,awStack_58);
    std::string::~string((string *)awStack_58);
    Sexy::StrFormat("%d, %d;",awStack_58,(ulong)*(uint *)(this + 0xf0),(ulong)*(uint *)(this + 0xf4)
                   );
    FUN_05474278(auStack_20,awStack_58);
    std::string::~string((string *)awStack_58);
    this_04 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogToyNightData(this_04,(TGAToyNightData *)asStack_50);
    TGATourismOctoberData::~TGATourismOctoberData((TGATourismOctoberData *)asStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

