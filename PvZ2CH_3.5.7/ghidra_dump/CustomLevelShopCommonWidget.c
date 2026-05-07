// Class: CustomLevelShopCommonWidget


/* CustomLevelShopCommonWidget::~CustomLevelShopCommonWidget() */

void __thiscall
CustomLevelShopCommonWidget::~CustomLevelShopCommonWidget(CustomLevelShopCommonWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069c6160;
  FUN_05476c50(this + 0x1b8);
  FUN_05476c50(this + 0x1a8);
  FUN_05476c50(this + 0x188);
  CommonRewardItemWidget::~CommonRewardItemWidget((CommonRewardItemWidget *)this);
  return;
}


/* CustomLevelShopCommonWidget::~CustomLevelShopCommonWidget() */

void __thiscall
CustomLevelShopCommonWidget::~CustomLevelShopCommonWidget(CustomLevelShopCommonWidget *this)

{
  ~CustomLevelShopCommonWidget(this);
  AK::FreeHook(this);
  return;
}


/* CustomLevelShopCommonWidget::CustomLevelShopCommonWidget(int) */

void __thiscall
CustomLevelShopCommonWidget::CustomLevelShopCommonWidget
          (CustomLevelShopCommonWidget *this,int param_1)

{
  undefined4 uVar1;
  
  CommonRewardItemWidget::CommonRewardItemWidget((CommonRewardItemWidget *)this);
  *(undefined ***)this = &PTR_GetClass_069c6160;
  FUN_05476574(this + 0x188);
  *(int *)(this + 0x198) = param_1;
  FUN_05476574(this + 0x1a8);
  FUN_05476574(this + 0x1b8);
  *(undefined4 *)(this + 0x19c) = 0;
  *(undefined4 *)(this + 0x1a0) = 0;
  FUN_054772c4(this + 0x1a8,&DAT_056f11a8);
  this[0x1b0] = (CustomLevelShopCommonWidget)0x0;
  FUN_054772c4(this + 0x1b8,&DAT_056f11a8);
  uVar1 = FUN_04dd3ea0(0);
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1c0) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelShopCommonWidget::SetBuyTimes(int, int) */

void __thiscall
CustomLevelShopCommonWidget::SetBuyTimes(CustomLevelShopCommonWidget *this,int param_1,int param_2)

{
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  *(int *)(this + 400) = param_1;
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x194) = param_2;
  FUN_05478178(awStack_10,L"[PVZ1MODE_SHOP_BUY_TIME]",auStack_20);
  TodReplaceNumberString(awStack_10,L"{NUM1}",*(int *)(this + 400));
  FUN_05476c50(awStack_10);
  nop();
  TodReplaceNumberString(awStack_18,L"{NUM2}",*(int *)(this + 0x194));
  FUN_054766c8(this + 0x188,awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelShopCommonWidget::CheckShopItem(S2C_ShopItemPurchaseInfo const*) */

bool __thiscall
CustomLevelShopCommonWidget::CheckShopItem
          (CustomLevelShopCommonWidget *this,S2C_ShopItemPurchaseInfo *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(int *)(param_1 + 0x14) == 0xb) {
    bVar1 = *(int *)(param_1 + 0x20) == *(int *)(this + 0xe0) &&
            *(int *)(param_1 + 0x18) == *(int *)(this + 0xd8);
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelShopCommonWidget::UpdateShopCommonWidget(S2C_ShopItemPurchaseInfo const*) */

void __thiscall
CustomLevelShopCommonWidget::UpdateShopCommonWidget
          (CustomLevelShopCommonWidget *this,S2C_ShopItemPurchaseInfo *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 400);
  iVar2 = 0;
  if (*(int *)(this + 0xdc) != 0) {
    iVar2 = *(int *)(param_1 + 0x1c) / *(int *)(this + 0xdc);
  }
  local_8 = ___stack_chk_guard;
  *(int *)(this + 400) = iVar2 + iVar1;
  if (*(int *)(this + 0x194) <= iVar2 + iVar1) {
    *(int *)(this + 400) = *(int *)(this + 0x194);
    CommonRewardItemWidget::SetSoldOut((CommonRewardItemWidget *)this,true);
    FUN_04dd390c(*(undefined8 *)(this + 0x1c8));
  }
  FUN_05478178(awStack_10,L"[PVZ1MODE_SHOP_BUY_TIME]",auStack_20);
  TodReplaceNumberString(awStack_10,L"{NUM1}",*(int *)(this + 400));
  FUN_05476c50(awStack_10);
  nop();
  TodReplaceNumberString(awStack_18,L"{NUM2}",*(int *)(this + 0x194));
  FUN_054766c8(this + 0x188,awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelShopCommonWidget::SetLockDescriptionIndex(int) */

void __thiscall
CustomLevelShopCommonWidget::SetLockDescriptionIndex(CustomLevelShopCommonWidget *this,int param_1)

{
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x1a0) = param_1;
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("[RIFTA_SHOP_ITEM_LOCK_DESCRIPTION_%d]",asStack_18);
  StringHelper::ToStringValue(asStack_18);
  FUN_054766c8(this + 0x1a8,auStack_10);
  FUN_05476c50(auStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelShopCommonWidget::ClickCallback() */

void __thiscall CustomLevelShopCommonWidget::ClickCallback(CustomLevelShopCommonWidget *this)

{
  int iVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  int *piVar3;
  MoreOptionsShopItem *this_02;
  UIMessageBox *this_03;
  long lVar4;
  wchar_t *pwVar5;
  Image *pIVar6;
  wstring awStack_70 [8];
  wstring awStack_68 [8];
  int local_60 [2];
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_38;
  int local_34;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = PlayerInfo::GetMaterialNum(this_01,*(int *)(this + 0xe0));
  if (*(int *)(this + 0xe4) <= iVar2) {
    iVar2 = PlayerInfo::GetMaterialNum(this_01,*(int *)(this + 0xe0));
    local_58 = 0;
    if (*(int *)(this + 0xe4) != 0) {
      local_58 = iVar2 / *(int *)(this + 0xe4);
    }
    local_54 = *(int *)(this + 0x194) - *(int *)(this + 400);
    local_50 = 10;
    local_60[0] = std::min<int>((function<bool(Sexy::Touch_const&)> *)&local_58,3);
    local_38 = 1;
    piVar3 = eastl::max_alt<int>((int *)&local_38,local_60);
    iVar2 = *piVar3;
    this_02 = (MoreOptionsShopItem *)UISingletonDialog<MoreOptionsShopItem>::ShowDialog();
    MoreOptionsShopItem::SetTitle(this_02,(wstring *)(this + 0x100));
    MoreOptionsShopItem::SetItemBottom(this_02,(wstring *)(this + 0x188));
    MoreOptionsShopItem::SetData
              (this_02,1,*(int *)(this + 0xe4),iVar2,iVar2 * *(int *)(this + 0xe4));
    MoreOptionsShopItem::SetMaterial(this_02,*(Image **)(this + 0x120));
    iVar1 = *(int *)(this + 0xd8);
    GetGameItemInfo(iVar1,0x7fffffff,0);
    pIVar6 = (Image *)0x0;
    if (local_34 == 0x10000) {
      pIVar6 = *(Image **)(this + 0x108);
    }
    MoreOptionsShopItem::SetItemId(this_02,iVar1,pIVar6);
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_38);
    FUN_04dd3de8((function<bool(Sexy::Touch_const&)> *)&local_58,this);
    MoreOptionsShopItem::SetPressBuyOne(this_02,(function<bool(Sexy::Touch_const&)> *)&local_58);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)&local_58);
    FUN_04dd3e44((function<bool(Sexy::Touch_const&)> *)&local_58,this,iVar2);
    MoreOptionsShopItem::SetPressBuyMore(this_02,(function<bool(Sexy::Touch_const&)> *)&local_58);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)&local_58);
    goto LAB_04dd50f8;
  }
  this_03 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_03 == (UIMessageBox *)0x0) goto LAB_04dd50f8;
  UIMessageBox::SetShowType(this_03,4);
  TodStringTranslate(L"[REVIVE_TIP]");
  FUN_05476574(awStack_68);
  if (*(int *)(this + 0xe0) == 0x5b6a) {
    pwVar5 = L"[CUSTOM_LEVEL_COIN1_NOT_ENOUGH]";
LAB_04dd5224:
    TodStringTranslate(pwVar5);
    FUN_054766c8(awStack_68,&local_38);
    FUN_05476c50(&local_38);
  }
  else if (*(int *)(this + 0xe0) == 0x5b6b) {
    pwVar5 = L"[CUSTOM_LEVEL_COIN2_NOT_ENOUGH]";
    goto LAB_04dd5224;
  }
  TodStringTranslate(L"[BUTTON_OK]");
  UIMessageBox::SetMessage(this_03,awStack_68,awStack_70);
  std::string::string((string *)&local_38,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
  pIVar6 = (Image *)StringHelper::ToImage((string *)&local_38,false);
  UIMessageBox::SetBackground(this_03,pIVar6);
  std::string::~string((string *)&local_38);
  nop();
  lVar4 = UIMessageBox::GetButtonCancel(this_03);
  thunk_FUN_05477b9c(lVar4 + 0xd8,local_60);
  FUN_05476c50(local_60);
  FUN_05476c50(awStack_68);
  FUN_05476c50(awStack_70);
LAB_04dd50f8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelShopCommonWidget::Draw(Sexy::Graphics*) */

void __thiscall
CustomLevelShopCommonWidget::Draw(CustomLevelShopCommonWidget *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  Image *pIVar10;
  SeedPacketUtils *this_01;
  RtWeakPtr *this_02;
  ResourceInfo *pRVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  Insets aIStack_38 [4];
  int local_34;
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  local_8 = ___stack_chk_guard;
  if (*(Image **)(this + 0x178) == (Image *)0x0) {
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9aed8);
    Sexy::Graphics::DrawImage
              (param_1,pIVar10,0,0,*(int *)(this + 0x50),
               *(int *)(this + 0x54) + *(int *)(this + 0x1c0));
  }
  else {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x178),0,0,*(int *)(this + 0x50),
               *(int *)(this + 0x54) + *(int *)(this + 0x1c0));
  }
  iVar2 = FUN_04dd3ea0(0xf);
  Sexy::Insets::Insets((Insets *)&local_48,0,6,*(int *)(this + 0x50),iVar2);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_38,1);
  WriteWordInRect(param_1,this + 0x100,(Insets *)&local_48,uVar9,aIStack_38,5,1);
  if (*(int *)(this + 0x128) == 2) {
    this_01 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    this_02 = (RtWeakPtr *)
              SeedPacketUtils::GetPlantPiecePacketRenderData(this_01,(string *)(this + 0x130));
    fVar14 = ((float)*(int *)(this + 0xf4) * 0.9) / (float)*(int *)(this_02 + 0x28);
    fVar13 = ((float)*(int *)(this + 0xf8) * 0.9) / (float)*(int *)(this_02 + 0x2c);
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(this_02 + 0x170));
    GetImageOffset(&iStack_60,aIStack_38);
    Sexy::RtId::~RtId((RtId *)aIStack_38);
    UIWidget::ConvertPSDImageOffsetToUISpace(&iStack_60,&iStack_5c,1536.0);
    Sexy::Insets::Insets
              ((Insets *)&local_58,
               (int)((float)*(int *)(this + 0xec) + (float)*(int *)(this_02 + 0x30) * fVar14),
               (int)((float)*(int *)(this + 0xf0) + (float)*(int *)(this_02 + 0x34) * fVar13),
               (int)(fVar14 * (float)*(int *)(this_02 + 0x28)),
               (int)(fVar13 * (float)*(int *)(this_02 + 0x2c)));
    pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_02 + 0x170);
    iVar2 = FUN_04dd3ea0(0xf);
    iVar7 = FUN_04dd3ea0(0);
    Sexy::Insets::Insets(aIStack_38,local_58 + iVar2,local_54 + iVar7,local_50,local_4c);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar11,(TRect *)aIStack_38,(TRect *)(this_02 + 0x20));
    Sexy::Insets::Insets
              ((Insets *)&local_48,
               (int)((float)*(int *)(this + 0xec) + (float)*(int *)(this_02 + 0x18) * fVar14),
               (int)((float)*(int *)(this + 0xf0) + (float)*(int *)(this_02 + 0x1c) * fVar13),
               (int)(fVar14 * (float)*(int *)(this_02 + 0x10)),
               (int)(fVar13 * (float)*(int *)(this_02 + 0x14)));
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_02);
    if (bVar1) {
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
      pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar12 + 0x48));
      iVar2 = FUN_04dd3ea0(0xf);
      iVar7 = FUN_04dd3ea0(0);
      Sexy::Insets::Insets(aIStack_38,local_48 + iVar2,local_44 + iVar7,local_40,local_3c);
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar11,(TRect *)aIStack_38,(TRect *)(this_02 + 8))
      ;
    }
  }
  else {
    if ((*(long *)(this + 0x110) != 0) && (*(long *)(this + 0x118) != 0)) {
      iVar3 = FUN_04dd3ea0(5);
      iVar2 = *(int *)(this + 0xec);
      iVar4 = FUN_04dd3ea0(0xf);
      iVar7 = *(int *)(this + 0xf0);
      iVar5 = FUN_04dd3ea0(0x2d);
      iVar8 = *(int *)(this + 0xf4);
      iVar6 = FUN_04dd3ea0(0x28);
      Sexy::Insets::Insets
                (aIStack_38,iVar3 + iVar2,iVar7 - iVar4,iVar5 + iVar8,iVar6 + *(int *)(this + 0xf8))
      ;
      DrawAdaptiveImage(param_1,aIStack_38,*(undefined8 *)(this + 0x118));
      iVar3 = FUN_04dd3ea0(5);
      iVar2 = *(int *)(this + 0xec);
      iVar4 = FUN_04dd3ea0(0xf);
      iVar7 = *(int *)(this + 0xf0);
      iVar5 = FUN_04dd3ea0(0x2d);
      iVar8 = *(int *)(this + 0xf4);
      iVar6 = FUN_04dd3ea0(0x28);
      Sexy::Insets::Insets
                (aIStack_38,iVar3 + iVar2,iVar7 - iVar4,iVar5 + iVar8,iVar6 + *(int *)(this + 0xf8))
      ;
      DrawAdaptiveImage(param_1,aIStack_38,*(undefined8 *)(this + 0x110));
    }
    if (*(long *)(this + 0x108) != 0) {
      GetGameItemInfo(*(int *)(this + 0xd8),0x7fffffff,0);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)aIStack_38);
      if (local_34 == 0x10000) {
        iVar2 = FUN_04dd3ea0(2);
        iVar2 = iVar2 + *(int *)(this + 0xec);
        iVar7 = FUN_04dd3ea0(0xffffffe9);
        iVar7 = iVar7 + *(int *)(this + 0xf0);
        iVar8 = (int)((double)*(int *)(this + 0xf4) * 1.5);
        iVar3 = (int)((double)*(int *)(this + 0xf8) * 1.5);
      }
      else {
        iVar2 = FUN_04dd3ea0(0x19);
        iVar2 = iVar2 + *(int *)(this + 0xec);
        iVar7 = FUN_04dd3ea0(0);
        iVar8 = *(int *)(this + 0xf4);
        iVar7 = iVar7 + *(int *)(this + 0xf0);
        iVar3 = *(int *)(this + 0xf8);
      }
      Sexy::Insets::Insets(aIStack_38,iVar2,iVar7,iVar8,iVar3);
      DrawAdaptiveImage(param_1,aIStack_38,*(undefined8 *)(this + 0x108));
    }
  }
  if (this[0x1b0] != (CustomLevelShopCommonWidget)0x0) {
    iVar2 = *(int *)(this + 0x54);
    iVar7 = *(int *)(this + 0x50);
    iVar8 = *(int *)(this + 0x1c0);
    iVar3 = FUN_04dd3ea0(0x32);
    Sexy::Insets::Insets((Insets *)&local_48,iVar7 / 2,iVar8 + iVar2 / 2,iVar7 / 2,iVar3);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Outline);
    Sexy::Color::Color((Color *)aIStack_38,4);
    WriteWordInRect(param_1,this + 0x1b8,(Insets *)&local_48,uVar9,aIStack_38,3,1);
  }
  iVar8 = FUN_04dd3ea0(0x23);
  iVar2 = *(int *)(this + 0x54);
  iVar7 = *(int *)(this + 0x1c0);
  iVar3 = FUN_04dd3ea0(0x14);
  Sexy::Insets::Insets((Insets *)&local_48,0,iVar8 + iVar2 / 2 + iVar7,*(int *)(this + 0x50),iVar3);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_38,1);
  WriteWordInRect(param_1,this + 0x188,(Insets *)&local_48,uVar9,aIStack_38,5,1);
  if (this[0x138] != (CustomLevelShopCommonWidget)0x0) {
    if (*(int *)(this + 0x19c) == 1) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9adf8;
    }
    else {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9af08;
    }
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    iVar2 = FUN_04dd3ea0(0x28);
    iVar7 = FUN_04dd3ea0(0x50);
    iVar8 = FUN_04dd3ea0(0x30);
    Sexy::Graphics::DrawImage(param_1,pIVar10,iVar2,iVar2,iVar7,iVar8);
  }
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelShopCommonWidget::init() */

void __thiscall CustomLevelShopCommonWidget::init(CustomLevelShopCommonWidget *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  CustomLevelShopButton *this_00;
  DIniFile *this_01;
  string *psVar7;
  long lVar8;
  string *extraout_x1;
  undefined1 uVar9;
  CornucopiaShopButton *pCVar10;
  string asStack_d8 [8];
  string asStack_d0 [8];
  string asStack_c8 [16];
  string asStack_b8 [16];
  Delegate0 aDStack_a8 [48];
  PVZ2UIImage aPStack_78 [56];
  int local_40;
  int iStack_3c;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  string asStack_20 [8];
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04dd3ea0(0x19);
  iVar3 = FUN_04dd3ea0(0x1e);
  iVar4 = FUN_04dd3ea0(0x50);
  Sexy::Insets::Insets((Insets *)&local_40,iVar2,iVar3,iVar4,iVar4);
  *(ulong *)(this + 0xec) = CONCAT44(iStack_3c,local_40);
  *(undefined8 *)(this + 0xf4) = uStack_38;
  if (*(long *)(this + 0x120) == 0) {
    iVar2 = MaterialItemMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    Sexy::StringToUpper((Sexy *)asStack_b8,extraout_x1);
    std::operator+("IMAGE_UI_FRAGMENT_MATERIAL_",(string *)aPStack_78);
    uVar6 = StringHelper::ToImage((string *)&local_40,false);
    *(undefined8 *)(this + 0x120) = uVar6;
    std::string::~string((string *)&local_40);
    std::string::~string((string *)aPStack_78);
    std::string::~string(asStack_b8);
  }
  if (*(int *)(this + 0xe8) == 0) {
    this[0x138] = (CustomLevelShopCommonWidget)0x1;
  }
  GetGameItemInfo(*(int *)(this + 0xd8),0x7fffffff,0);
  iVar2 = iStack_3c;
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_40);
  this[0x180] = (CustomLevelShopCommonWidget)(iVar2 == 0x10000);
  if (this[0x138] == (CustomLevelShopCommonWidget)0x0) {
    plVar5 = *(long **)(this + 0x1c8);
    if (plVar5 == (long *)0x0) {
      this_00 = ::operator_new(0x368);
      CustomLevelShopButton::CustomLevelShopButton(this_00,*(int *)(this + 0x198));
      *(CustomLevelShopButton **)(this + 0x1c8) = this_00;
      PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b9ad80,3);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b9af70,3);
      PVZ2UIButton::SetDialogStates((PVZ2UIButton *)this_00,aPStack_78,(PVZ2UIImage *)&local_40);
      iVar2 = FUN_04dd3ea0(0x2d);
      uVar1 = (int)*(uint *)(this + 0x1c0) >> 0x1f;
      iVar3 = (*(uint *)(this + 0x1c0) ^ uVar1) - uVar1;
      (**(code **)(**(long **)(this + 0x1c8) + 0x198))
                (*(long **)(this + 0x1c8),iVar2,*(int *)(this + 0x54) + (iVar3 / 2) * -4,
                 *(int *)(this + 0x50) + iVar2 * -2,iVar3 * 2);
      CustomLevelShopButton::InitView(*(CustomLevelShopButton **)(this + 0x1c8));
      FUN_04dd3284(*(long *)(this + 0x1c8) + 0x328,*(undefined8 *)(this + 0x120));
      CornucopiaShopButton::SetItemAmount((int)*(undefined8 *)(this + 0x1c8));
      pCVar10 = *(CornucopiaShopButton **)(this + 0x1c8);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,ClickCallback);
      Sexy::Delegate0::Delegate0<CustomLevelShopCommonWidget,void(CustomLevelShopCommonWidget::*)()>
                (aDStack_a8,(Insets *)&local_40);
      CornucopiaShopButton::SetClickCallback(pCVar10,aDStack_a8);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1c8));
      goto LAB_04dd7bfc;
    }
    (**(code **)(*plVar5 + 0x158))(plVar5,1);
    iVar2 = *(int *)(this + 0xd8);
  }
  else {
    plVar5 = *(long **)(this + 0x1c8);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x158))(plVar5,0);
    }
LAB_04dd7bfc:
    iVar2 = *(int *)(this + 0xd8);
  }
  if (iVar2 == 0xbc0) {
    iVar2 = 0;
    uVar9 = false;
    TodStringTranslate(L"[GEM_BUY_GEM]");
    FUN_054766c8(this + 0x100,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    Sexy::StrFormat(L"x%d",(Insets *)&local_40,(ulong)*(uint *)(this + 0xdc));
    FUN_054766c8(this + 0x1b8,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    this[0x1b0] = (CustomLevelShopCommonWidget)0x1;
    uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9add0);
    *(undefined8 *)(this + 0x108) = uVar6;
    goto LAB_04dd7c7c;
  }
  if (iVar2 == 0xfad) {
    iVar2 = 0;
    uVar9 = false;
    TodStringTranslate(L"[LOTTERY_GOLD]");
    FUN_054766c8(this + 0x100,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    Sexy::StrFormat(L"x%d",(Insets *)&local_40,(ulong)*(uint *)(this + 0xdc));
    FUN_054766c8(this + 0x1b8,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    this[0x1b0] = (CustomLevelShopCommonWidget)0x1;
    uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9b270);
    *(undefined8 *)(this + 0x108) = uVar6;
    goto LAB_04dd7c7c;
  }
  GetGameItemInfo(iVar2,0x7fffffff,0);
  uVar9 = (undefined1)local_40;
  iVar2 = 0;
  if (local_40 == 0) goto LAB_04dd7df8;
  if (iStack_3c == 0x100) goto LAB_04dd8240;
  if (iStack_3c < 0x101) {
    if (iStack_3c == 4) {
LAB_04dd821c:
      iVar2 = 0;
      iVar3 = iVar2;
    }
    else {
      if (4 < iStack_3c) {
        if (iStack_3c != 0x10) {
          if ((iStack_3c == 0x20) || (iStack_3c == 8)) goto LAB_04dd8240;
LAB_04dd81b4:
          iVar2 = 0;
          *(undefined8 *)(this + 0x108) = 0;
          uVar9 = 0;
          goto LAB_04dd7df8;
        }
        goto LAB_04dd821c;
      }
      if (iStack_3c != 1) {
        if (iStack_3c != 2) goto LAB_04dd81b4;
        *(undefined4 *)(this + 0x128) = 2;
        thunk_FUN_05475e00(this + 0x130,auStack_30);
        thunk_FUN_05477b9c(this + 0x100,auStack_18);
        uVar1 = *(uint *)(this + 0xdc);
        goto LAB_04dd7dd0;
      }
      psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_78);
      iVar2 = *(int *)(lVar8 + 0xd0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_78);
      iVar3 = 1;
    }
    uVar9 = (undefined1)iVar3;
    thunk_FUN_05477b9c(this + 0x100,auStack_18);
    uVar6 = StringHelper::ToImage(asStack_20,false);
    *(undefined8 *)(this + 0x108) = uVar6;
  }
  else if (iStack_3c == 0x4000) {
    iVar2 = 0;
    thunk_FUN_05477b9c(this + 0x100,auStack_18);
    uVar9 = 0;
    uVar6 = StringHelper::ToImage(asStack_20,false);
    *(undefined8 *)(this + 0x108) = uVar6;
    Sexy::StrFormat(L"x%d",aPStack_78,(ulong)*(uint *)(this + 0xdc));
    FUN_054766c8(this + 0x1b8,aPStack_78);
    FUN_05476c50(aPStack_78);
    this[0x1b0] = (CustomLevelShopCommonWidget)0x0;
  }
  else {
    if (iStack_3c < 0x4001) {
      if (iStack_3c == 0x1000) goto LAB_04dd821c;
      if (iStack_3c != 0x2000) goto LAB_04dd81b4;
    }
    else if (iStack_3c != 0x10000) {
      if (iStack_3c == 0x40000) goto LAB_04dd821c;
      if (iStack_3c != 0x8000) goto LAB_04dd81b4;
      thunk_FUN_05477b9c(this + 0x100,auStack_18);
      uVar6 = StringHelper::ToImage(asStack_20,false);
      *(undefined8 *)(this + 0x108) = uVar6;
      iVar2 = 0;
      Sexy::StrFormat(L"x%d",(DString *)aPStack_78,(ulong)*(uint *)(this + 0xdc));
      uVar9 = 0;
      FUN_054766c8(this + 0x1b8,(DString *)aPStack_78);
      FUN_05476c50((DString *)aPStack_78);
      DSingleton<HeadshotConfig>::getInstance();
      nop();
      DString::DString((DString *)aPStack_78,*(int *)(this + 0xd8));
      DString::operator_cast_to_string((DString *)aPStack_78);
      std::string::string(asStack_b8,"frame");
      iVar3 = DIniFile::getItemInt(this_01,asStack_c8,asStack_b8,1);
      std::string::~string(asStack_b8);
      nop();
      std::string::~string(asStack_c8);
      DString::~DString((DString *)aPStack_78);
      DString::DString((DString *)asStack_c8,iVar3);
      ::operator+("IMAGE_UI_HEADSHOTFRAME_LV",(DString *)asStack_c8);
      ::operator+((DString *)asStack_b8,"_1");
      DString::operator_cast_to_string((DString *)aPStack_78);
      DString::~DString((DString *)aPStack_78);
      DString::~DString((DString *)asStack_b8);
      DString::~DString((DString *)asStack_c8);
      uVar6 = StringHelper::ToImage(asStack_d8,false);
      *(undefined8 *)(this + 0x110) = uVar6;
      DString::DString((DString *)asStack_c8,iVar3);
      ::operator+("IMAGE_UI_HEADSHOTFRAME_LV",(DString *)asStack_c8);
      ::operator+((DString *)asStack_b8,"_2");
      DString::operator_cast_to_string((DString *)aPStack_78);
      DString::~DString((DString *)aPStack_78);
      DString::~DString((DString *)asStack_b8);
      DString::~DString((DString *)asStack_c8);
      uVar6 = StringHelper::ToImage(asStack_d0,false);
      this[0x1b0] = (CustomLevelShopCommonWidget)0x0;
      *(undefined8 *)(this + 0x118) = uVar6;
      std::string::~string(asStack_d0);
      std::string::~string(asStack_d8);
      goto LAB_04dd7df8;
    }
LAB_04dd8240:
    thunk_FUN_05477b9c(this + 0x100,auStack_18);
    uVar6 = StringHelper::ToImage(asStack_20,false);
    *(undefined8 *)(this + 0x108) = uVar6;
    uVar1 = *(uint *)(this + 0xdc);
LAB_04dd7dd0:
    iVar2 = 0;
    uVar9 = 0;
    Sexy::StrFormat(L"x%d",aPStack_78,(ulong)uVar1);
    FUN_054766c8(this + 0x1b8,aPStack_78);
    FUN_05476c50(aPStack_78);
    this[0x1b0] = (CustomLevelShopCommonWidget)0x1;
  }
LAB_04dd7df8:
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_40);
LAB_04dd7c7c:
  CommonRewardItemWidget::SetBgImageRare((CommonRewardItemWidget *)this,(bool)uVar9,iVar2);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

