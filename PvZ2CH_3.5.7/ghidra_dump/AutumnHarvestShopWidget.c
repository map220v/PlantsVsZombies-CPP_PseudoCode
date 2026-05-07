// Class: AutumnHarvestShopWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestShopWidget::Update() */

void __thiscall AutumnHarvestShopWidget::Update(AutumnHarvestShopWidget *this)

{
  long lVar1;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  lVar1 = *(long *)(this + 0x100);
  if (lVar1 != 0) {
    FUN_05478178(awStack_18,L"[SECRET_BUY_LEFT_STR]",auStack_20);
    TodReplaceNumberString(awStack_18,L"{NUMBER}",*(int *)(this + 0xe4));
    PuzzleTip::SetTip(lVar1,auStack_10);
    FUN_05476c50(auStack_10);
    FUN_05476c50(awStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AutumnHarvestShopWidget::~AutumnHarvestShopWidget() */

void __thiscall AutumnHarvestShopWidget::~AutumnHarvestShopWidget(AutumnHarvestShopWidget *this)

{
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069f6ab8;
  *(undefined ***)this = &PTR_GetClass_069f6790;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* AutumnHarvestShopWidget::~AutumnHarvestShopWidget() */

void __thiscall AutumnHarvestShopWidget::~AutumnHarvestShopWidget(AutumnHarvestShopWidget *this)

{
  ~AutumnHarvestShopWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestShopWidget::BuyShopItem() */

void __thiscall AutumnHarvestShopWidget::BuyShopItem(AutumnHarvestShopWidget *this)

{
  undefined4 uVar1;
  NameMapperBase *this_00;
  NetworkMgr *this_01;
  long *plVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NameMapperBase *)MaterialItemMapper::GetInstance();
  std::string::string(asStack_10,"mat_autumn_harvest_supercorn");
  uVar1 = NameMapperBase::GetIdForName(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_01 = (NetworkMgr *)NetworkMgr::Instance();
  plVar2 = (long *)NetworkMgr::GetNewNetWorkProcess(this_01);
  (**(code **)(*plVar2 + 0x370))
            (plVar2,0x10,*(undefined4 *)(this + 0xf0),*(undefined4 *)(this + 0xf4),uVar1,
             *(undefined4 *)(this + 0xf8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestShopWidget::InitView(int, AutumnHarvestShopData, int) */

void AutumnHarvestShopWidget::InitView
               (long *param_1,undefined4 param_2,long param_3,undefined4 param_4,undefined4 param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  UIWidgetText *pUVar8;
  PVZ2UIButton *pPVar9;
  undefined8 uVar10;
  UIWidgetImage *this;
  code *pcVar11;
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
  plVar7 = (long *)UIRewardFrameSelect::CreateUIRewardFrame((int)param_1[0x1e],0,false);
  uVar2 = FUN_04ebda84(0x1e);
  uVar3 = FUN_04ebda84(0x23);
  uVar4 = FUN_04ebda84(0x5a);
  (**(code **)(*plVar7 + 0x198))(plVar7,uVar2,uVar3,uVar4,uVar4);
  (**(code **)(*param_1 + 0x60))(param_1,plVar7);
  *(undefined4 *)((long)param_1 + 0xe4) = param_5;
  FUN_05478178(awStack_78,L"[SECRET_BUY_LEFT_STR]",asStack_b0);
  TodReplaceNumberString(awStack_78,L"{NUMBER}",*(int *)((long)param_1 + 0xe4));
  pUVar8 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar8,(wstring *)local_40);
  param_1[0x20] = (long)pUVar8;
  FUN_05476c50((wstring *)local_40);
  FUN_05476c50(awStack_78);
  nop();
  plVar7 = (long *)param_1[0x20];
  uVar2 = FUN_04ebda84(0xf);
  uVar3 = FUN_04ebda84(0x69);
  iVar5 = FUN_04ebda84(0x1e);
  lVar1 = param_1[10];
  uVar4 = FUN_04ebda84(0x14);
  (**(code **)(*plVar7 + 0x198))(plVar7,uVar2,uVar3,(int)lVar1 - iVar5,uVar4);
  UIWidgetText::SetFontIndex((UIWidgetText *)param_1[0x20],0xa5);
  plVar7 = (long *)param_1[0x20];
  pcVar11 = *(code **)(*plVar7 + 0x170);
  Sexy::Color::Color((Color *)local_40,2);
  (*pcVar11)(plVar7,0,(wstring *)local_40);
  FUN_04ebca18(param_1[0x20] + 0xe0);
  (**(code **)(*param_1 + 0x60))(param_1,param_1[0x20]);
  FUN_05478178(awStack_78,&DAT_056f11a8,asStack_b0);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar9,0x5a,(ButtonListener *)(param_1 + 0x1b),awStack_78,(Color *)local_40);
  param_1[0x21] = (long)pPVar9;
  FUN_05476c50(awStack_78);
  nop();
  pPVar9 = (PVZ2UIButton *)param_1[0x21];
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ba2520,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ba2438,3);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
  plVar7 = (long *)param_1[0x21];
  uVar2 = FUN_04ebda84(0x19);
  uVar3 = FUN_04ebda84(0x82);
  uVar4 = FUN_04ebda84(100);
  uVar6 = FUN_04ebda84(0x2d);
  (**(code **)(*plVar7 + 0x198))(plVar7,uVar2,uVar3,uVar4,uVar6);
  plVar7 = (long *)param_1[0x21];
  pcVar11 = *(code **)(*plVar7 + 800);
  uVar10 = PrimeText_PotentialTypeface::Typeface
                     (PrimeText_Game::Typeface_CafeteriaBlack_24_HardShadow);
  (*pcVar11)(plVar7,uVar10);
  (**(code **)(*param_1 + 0x60))(param_1,param_1[0x21]);
  std::string::string((string *)local_40,"IMAGE_UI_FRAGMENT_MATERIAL_MAT_AUTUMN_HARVEST_SUPERCORN");
  this = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  uVar2 = FUN_04ebda84(10);
  uVar3 = FUN_04ebda84(6);
  uVar4 = FUN_04ebda84(0x1e);
  (**(code **)(*(long *)this + 0x198))(this,uVar2,uVar3,uVar4,uVar4);
  local_40[0] = 2;
  UIWidgetImage::SetImageType(this,(wstring *)local_40,0.0);
  plVar7 = (long *)param_1[0x21];
  this[0x6d] = (UIWidgetImage)0x0;
  (**(code **)(*plVar7 + 0x60))(plVar7,this);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(param_1 + 0x1f));
  Sexy::ToWString((string *)awStack_78);
  pUVar8 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar8,(wstring *)local_40);
  FUN_05476c50((wstring *)local_40);
  std::string::~string((string *)awStack_78);
  uVar2 = FUN_04ebda84(0x28);
  uVar3 = FUN_04ebda84(3);
  uVar4 = FUN_04ebda84(0x32);
  (**(code **)(*(long *)pUVar8 + 0x198))(pUVar8,uVar2,uVar3,uVar4,uVar2);
  UIWidgetText::SetFontIndex(pUVar8,7);
  pcVar11 = *(code **)(*(long *)pUVar8 + 0x170);
  Sexy::Color::Color((Color *)local_40,1);
  (*pcVar11)(pUVar8,0,(wstring *)local_40);
  FUN_04ebca18(pUVar8 + 0xe0);
  plVar7 = (long *)param_1[0x21];
  pUVar8[0x6d] = (UIWidgetText)0x0;
  (**(code **)(*plVar7 + 0x60))(plVar7,pUVar8);
  if (*(int *)((long)param_1 + 0xe4) < 1) {
    (**(code **)(*(long *)param_1[0x21] + 0x188))((long *)param_1[0x21],1);
  }
  GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestShopWidget::ButtonDepress(int) */

void __thiscall AutumnHarvestShopWidget::ButtonDepress(AutumnHarvestShopWidget *this,int param_1)

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
  if (param_1 == 0x5a) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    std::string::string(asStack_10,"mat_autumn_harvest_supercorn");
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
        FUN_05478178(asStack_10,L"[MAT_AUTUMN_HARVEST_SUPERCORN]",auStack_38);
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


/* non-virtual thunk to AutumnHarvestShopWidget::ButtonDepress(int) */

void __thiscall AutumnHarvestShopWidget::ButtonDepress(AutumnHarvestShopWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestShopWidget::Draw(Sexy::Graphics*) */

void __thiscall AutumnHarvestShopWidget::Draw(AutumnHarvestShopWidget *this,Graphics *param_1)

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
  iVar1 = FUN_04ebda84(0xf);
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54) - iVar1);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba2220);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba2468);
  iVar2 = FUN_04ebda84(0xf);
  iVar3 = FUN_04ebda84(0x23);
  iVar4 = FUN_04ebda84(0x1e);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_04ebda84(0x5a);
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar2,iVar3,iVar1 - iVar4,iVar5);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba23a0);
  iVar2 = FUN_04ebda84(0xf);
  iVar3 = FUN_04ebda84(0x69);
  iVar4 = FUN_04ebda84(0x1e);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_04ebda84(0x14);
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar2,iVar3,iVar1 - iVar4,iVar5);
  iVar1 = FUN_04ebda84(7);
  iVar2 = FUN_04ebda84(0x96);
  iVar3 = FUN_04ebda84(0x19);
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


/* AutumnHarvestShopWidget::AutumnHarvestShopWidget() */

void __thiscall AutumnHarvestShopWidget::AutumnHarvestShopWidget(AutumnHarvestShopWidget *this)

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
  *(undefined ***)this = &PTR_GetClass_069f6790;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069f6ab8;
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
  Subscribe<bool,S2C_ShopItemPurchaseInfo_const*,Sexy::CBMemberTranslatorX<AutumnHarvestShopWidget,void(AutumnHarvestShopWidget::*)(bool,S2C_ShopItemPurchaseInfo_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyShopBuyFinishDetails,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestShopWidget::OnShopBuyFinish(bool, S2C_ShopItemPurchaseInfo const*) */

void __thiscall
AutumnHarvestShopWidget::OnShopBuyFinish
          (AutumnHarvestShopWidget *this,bool param_1,S2C_ShopItemPurchaseInfo *param_2)

{
  uint uVar1;
  uint uVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  DaveTreasureDataManager *this_02;
  TGALogMgr *this_03;
  UIAutumnHarvest *this_04;
  string *__n;
  undefined8 uVar3;
  string asStack_70 [8];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  wstring awStack_58 [24];
  string asStack_40 [32];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1) && (*(int *)(param_2 + 0x14) == 0x10)) &&
     (*(long *)(param_2 + 0x18) == *(long *)(this + 0xf0))) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    std::string::string(asStack_40,"mat_autumn_harvest_supercorn");
    uVar1 = PlayerInfo::GetMaterialNum(this_01,asStack_40);
    std::string::~string(asStack_40);
    nop();
    ProfileChangeItemAmount(*(int *)(param_2 + 0x20),-*(int *)(param_2 + 0x24),false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_40);
    ProfileChangeItemAmount(*(int *)(param_2 + 0x18),*(int *)(param_2 + 0x1c),false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_40);
    std::string::string(asStack_40,"mat_autumn_harvest_supercorn");
    uVar2 = PlayerInfo::GetMaterialNum(this_01,asStack_40);
    std::string::~string(asStack_40);
    nop();
    uVar3 = *(undefined8 *)(this + 0x100);
    *(int *)(this + 0xe4) = *(int *)(this + 0xe4) + -1;
    FUN_05478178(awStack_58,L"[SECRET_BUY_LEFT_STR]",(LotteryBonus *)&local_68);
    TodReplaceNumberString(awStack_58,L"{NUMBER}",*(int *)(this + 0xe4));
    PuzzleTip::SetTip(uVar3,asStack_40);
    FUN_05476c50(asStack_40);
    FUN_05476c50(awStack_58);
    nop();
    if (*(int *)(this + 0xe4) < 1) {
      (**(code **)(**(long **)(this + 0x108) + 0x188))(*(long **)(this + 0x108),1);
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)awStack_58);
    local_60 = 0;
    local_68 = *(undefined4 *)(param_2 + 0x18);
    local_64 = *(undefined4 *)(param_2 + 0x1c);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)awStack_58,
               (LotteryBonus *)&local_68);
    this_02 = (DaveTreasureDataManager *)
              Sexy::LazySingleton<DaveTreasureDataManager>::GetInstancePtr();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_40);
    __n = asStack_40;
    DaveTreasureDataManager::ShowBonus(this_02,(vector *)awStack_58,(vector *)asStack_40);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)asStack_40);
    TGALuckyChestData::TGALuckyChestData((TGALuckyChestData *)asStack_40);
    std::string::append(asStack_40,"5",(size_t)__n);
    Sexy::StrFormat("%d, %d, %d",asStack_70,(ulong)uVar1,(ulong)(uVar2 - uVar1),(ulong)uVar2);
    FUN_05474278(auStack_20,asStack_70);
    std::string::~string(asStack_70);
    Sexy::StrFormat("%d,%d;",asStack_70,(ulong)*(uint *)(param_2 + 0x18),
                    (ulong)*(uint *)(param_2 + 0x1c));
    FUN_05474278(auStack_10,asStack_70);
    std::string::~string(asStack_70);
    this_03 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogAutumnHarvest(this_03,(TGAAutumnHarvestData *)asStack_40);
    this_04 = (UIAutumnHarvest *)UISingletonDialog<UIAutumnHarvest>::GetSingletonPtr();
    UIAutumnHarvest::UpdateMaterial(this_04);
    TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)asStack_40);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)awStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

