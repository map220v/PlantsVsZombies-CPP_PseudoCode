// Class: CornucopiaShopCommonWidget


/* CornucopiaShopCommonWidget::LoadData(CommonRewardItemData const&) */

void __thiscall
CornucopiaShopCommonWidget::LoadData(CornucopiaShopCommonWidget *this,CommonRewardItemData *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  pcVar2 = *(code **)(*(long *)this + 0x318);
  *(undefined8 *)(this + 0xd8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xe0) = uVar1;
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0x10);
  (*pcVar2)();
  return;
}


/* CornucopiaShopCommonWidget::~CornucopiaShopCommonWidget() */

void __thiscall
CornucopiaShopCommonWidget::~CornucopiaShopCommonWidget(CornucopiaShopCommonWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069e1600;
  FUN_05476c50(this + 0x1b8);
  FUN_05476c50(this + 0x1a8);
  FUN_05476c50(this + 0x188);
  FUN_05476c50(this + 0x180);
  CommonRewardItemWidget::~CommonRewardItemWidget((CommonRewardItemWidget *)this);
  return;
}


/* CornucopiaShopCommonWidget::~CornucopiaShopCommonWidget() */

void __thiscall
CornucopiaShopCommonWidget::~CornucopiaShopCommonWidget(CornucopiaShopCommonWidget *this)

{
  ~CornucopiaShopCommonWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaShopCommonWidget::CornucopiaShopCommonWidget(int) */

void __thiscall
CornucopiaShopCommonWidget::CornucopiaShopCommonWidget(CornucopiaShopCommonWidget *this,int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CommonRewardItemWidget::CommonRewardItemWidget((CommonRewardItemWidget *)this);
  *(undefined ***)this = &PTR_GetClass_069e1600;
  FUN_05476574(this + 0x180);
  FUN_05476574(this + 0x188);
  *(int *)(this + 0x19c) = param_1;
  FUN_05476574(this + 0x1a8);
  FUN_05476574(this + 0x1b8);
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 0x1a4) = 0;
  FUN_054772c4(this + 0x1a8,&DAT_056f11a8);
  this[0x1b0] = (CornucopiaShopCommonWidget)0x0;
  FUN_054772c4(this + 0x1b8,&DAT_056f11a8);
  uVar1 = FUN_04e56010(0);
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1c0) = uVar1;
  this[400] = (CornucopiaShopCommonWidget)0x0;
  std::string::string(asStack_10,"[SHOP_NO_LIMIT_BUYTIME_TITLE]");
  StringHelper::ToStringValue(asStack_10);
  FUN_054766c8(this + 0x188,auStack_18);
  FUN_05476c50(auStack_18);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaShopCommonWidget::SetBuyTimes(int, int) */

void __thiscall
CornucopiaShopCommonWidget::SetBuyTimes(CornucopiaShopCommonWidget *this,int param_1,int param_2)

{
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x194) = param_1;
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x198) = param_2;
  FUN_05478178(awStack_10,L"[CORNUCOPIA_SHOP_BUY_TIME]",auStack_20);
  TodReplaceNumberString(awStack_10,L"{NUM1}",*(int *)(this + 0x194));
  FUN_05476c50(awStack_10);
  nop();
  TodReplaceNumberString(awStack_18,L"{NUM2}",*(int *)(this + 0x198));
  FUN_054766c8(this + 0x180,awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CornucopiaShopCommonWidget::CheckShopItem(S2C_ShopItemPurchaseInfo const*) */

bool __thiscall
CornucopiaShopCommonWidget::CheckShopItem
          (CornucopiaShopCommonWidget *this,S2C_ShopItemPurchaseInfo *param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x1c) == *(int *)(this + 0xdc) &&
          *(int *)(param_1 + 0x18) == *(int *)(this + 0x19c);
  if (*(int *)(param_1 + 0x1c) == *(int *)(this + 0xdc) &&
      *(int *)(param_1 + 0x18) == *(int *)(this + 0x19c)) {
    bVar1 = *(int *)(param_1 + 0x20) == *(int *)(this + 0xe0) &&
            *(int *)(param_1 + 0x24) == *(int *)(this + 0xe4);
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaShopCommonWidget::UpdateShopCommonWidget(S2C_ShopItemPurchaseInfo const*) */

void CornucopiaShopCommonWidget::UpdateShopCommonWidget(S2C_ShopItemPurchaseInfo *param_1)

{
  int iVar1;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(param_1 + 0x194);
  *(int *)(param_1 + 0x194) = iVar1 + 1;
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x198) <= iVar1 + 1) {
    *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x198);
    CommonRewardItemWidget::SetSoldOut((CommonRewardItemWidget *)param_1,true);
    FUN_04e54e34(*(undefined8 *)(param_1 + 0x1c8));
  }
  FUN_05478178(awStack_10,L"[CORNUCOPIA_SHOP_BUY_TIME]",auStack_20);
  TodReplaceNumberString(awStack_10,L"{NUM1}",*(int *)(param_1 + 0x194));
  FUN_05476c50(awStack_10);
  nop();
  TodReplaceNumberString(awStack_18,L"{NUM2}",*(int *)(param_1 + 0x198));
  FUN_054766c8(param_1 + 0x180,awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaShopCommonWidget::SetLockDescriptionIndex(int) */

void __thiscall
CornucopiaShopCommonWidget::SetLockDescriptionIndex(CornucopiaShopCommonWidget *this,int param_1)

{
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x1a4) = param_1;
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("[CORNUCOPIA_SHOP_ITEM_LOCK_DESCRIPTION_%d]",asStack_18);
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
/* CornucopiaShopCommonWidget::ClickCallback() */

void __thiscall CornucopiaShopCommonWidget::ClickCallback(CornucopiaShopCommonWidget *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIMessageBox *this_02;
  Image *pIVar2;
  long lVar3;
  NetworkMgr *this_03;
  long *plVar4;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = PlayerInfo::GetMaterialNum(this_01,*(int *)(this + 0xe0));
  if (iVar1 < *(int *)(this + 0xe4)) {
    this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_02 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_02,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[MAT_CORNUCOPIA_EMBLEM_NOT_ENOUGH]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(this_02,awStack_20,awStack_28);
      std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar2 = (Image *)StringHelper::ToImage(asStack_10,false);
      UIMessageBox::SetBackground(this_02,pIVar2);
      std::string::~string(asStack_10);
      nop();
      lVar3 = UIMessageBox::GetButtonCancel(this_02);
      thunk_FUN_05477b9c(lVar3 + 0xd8,auStack_18);
      FUN_05476c50(auStack_18);
      FUN_05476c50(awStack_20);
      FUN_05476c50(awStack_28);
    }
  }
  else {
    this_03 = (NetworkMgr *)NetworkMgr::Instance();
    plVar4 = (long *)NetworkMgr::GetNewNetWorkProcess(this_03);
    (**(code **)(*plVar4 + 0x370))
              (plVar4,0xf,*(undefined4 *)(this + 0x19c),1,*(undefined4 *)(this + 0xe0),
               *(undefined4 *)(this + 0xe4));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaShopCommonWidget::InitButton() */

void __thiscall CornucopiaShopCommonWidget::InitButton(CornucopiaShopCommonWidget *this)

{
  uint uVar1;
  int iVar2;
  CornucopiaShopButton *pCVar3;
  int iVar4;
  Delegate0 aDStack_a8 [48];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar3 = ::operator_new(0x368);
  CornucopiaShopButton::CornucopiaShopButton(pCVar3,*(int *)(this + 0x19c));
  *(CornucopiaShopButton **)(this + 0x1c8) = pCVar3;
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b9f478,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b9f5f0,3);
  PVZ2UIButton::SetDialogStates((PVZ2UIButton *)pCVar3,aPStack_78,aPStack_40);
  iVar2 = FUN_04e56010(0x2d);
  uVar1 = (int)*(uint *)(this + 0x1c0) >> 0x1f;
  iVar4 = (*(uint *)(this + 0x1c0) ^ uVar1) - uVar1;
  (**(code **)(**(long **)(this + 0x1c8) + 0x198))
            (*(long **)(this + 0x1c8),iVar2,*(int *)(this + 0x54) + (iVar4 / 2) * -4,
             *(int *)(this + 0x50) + iVar2 * -2,iVar4 * 2);
  CornucopiaShopButton::InitView(*(CornucopiaShopButton **)(this + 0x1c8));
  FUN_04e5405c(*(long *)(this + 0x1c8) + 0x328,*(undefined8 *)(this + 0x120));
  CornucopiaShopButton::SetItemAmount((int)*(undefined8 *)(this + 0x1c8));
  pCVar3 = *(CornucopiaShopButton **)(this + 0x1c8);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x320);
  Sexy::Delegate0::Delegate0<CornucopiaShopCommonWidget,void(CornucopiaShopCommonWidget::*)()>
            (aDStack_a8,aPStack_40);
  CornucopiaShopButton::SetClickCallback(pCVar3,aDStack_a8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1c8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaShopCommonWidget::Draw(Sexy::Graphics*) */

void __thiscall CornucopiaShopCommonWidget::Draw(CornucopiaShopCommonWidget *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  Image *pIVar9;
  SeedPacketUtils *this_01;
  RtWeakPtr *this_02;
  ResourceInfo *pRVar10;
  long lVar11;
  CornucopiaShopCommonWidget *pCVar12;
  float fVar13;
  float fVar14;
  undefined8 local_68;
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
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9f4c8);
    Sexy::Graphics::DrawImage
              (param_1,pIVar9,0,0,*(int *)(this + 0x50),
               *(int *)(this + 0x54) + *(int *)(this + 0x1c0));
  }
  else {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x178),0,0,*(int *)(this + 0x50),
               *(int *)(this + 0x54) + *(int *)(this + 0x1c0));
  }
  iVar2 = FUN_04e56010(0x19);
  Sexy::Insets::Insets((Insets *)&local_48,0,0,*(int *)(this + 0x50),iVar2);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_38,1);
  WriteWordInRect(param_1,this + 0x100,(Insets *)&local_48,uVar8,aIStack_38,5,1);
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
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_02 + 0x170);
    iVar2 = FUN_04e56010(0x19);
    iVar6 = FUN_04e56010(10);
    Sexy::Insets::Insets(aIStack_38,local_58 + iVar2,local_54 + iVar6,local_50,local_4c);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar10,(TRect *)aIStack_38,(TRect *)(this_02 + 0x20));
    Sexy::Insets::Insets
              ((Insets *)&local_48,
               (int)((float)*(int *)(this + 0xec) + (float)*(int *)(this_02 + 0x18) * fVar14),
               (int)((float)*(int *)(this + 0xf0) + (float)*(int *)(this_02 + 0x1c) * fVar13),
               (int)(fVar14 * (float)*(int *)(this_02 + 0x10)),
               (int)(fVar13 * (float)*(int *)(this_02 + 0x14)));
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_02);
    if (bVar1) {
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar11 + 0x48));
      iVar2 = FUN_04e56010(0x19);
      iVar6 = FUN_04e56010(10);
      Sexy::Insets::Insets(aIStack_38,local_48 + iVar2,local_44 + iVar6,local_40,local_3c);
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar10,(TRect *)aIStack_38,(TRect *)(this_02 + 8))
      ;
    }
  }
  else {
    if ((*(long *)(this + 0x110) != 0) && (*(long *)(this + 0x118) != 0)) {
      iVar3 = FUN_04e56010(5);
      iVar2 = *(int *)(this + 0xec);
      iVar6 = *(int *)(this + 0xf0);
      iVar4 = FUN_04e56010(0x2d);
      iVar7 = *(int *)(this + 0xf4);
      iVar5 = FUN_04e56010(0x28);
      Sexy::Insets::Insets
                (aIStack_38,iVar3 + iVar2,iVar6 - iVar3,iVar4 + iVar7,iVar5 + *(int *)(this + 0xf8))
      ;
      DrawAdaptiveImage(param_1,aIStack_38,*(undefined8 *)(this + 0x118));
      iVar3 = FUN_04e56010(5);
      iVar2 = *(int *)(this + 0xec);
      iVar6 = *(int *)(this + 0xf0);
      iVar4 = FUN_04e56010(0x2d);
      iVar7 = *(int *)(this + 0xf4);
      iVar5 = FUN_04e56010(0x28);
      Sexy::Insets::Insets
                (aIStack_38,iVar3 + iVar2,iVar6 - iVar3,iVar4 + iVar7,iVar5 + *(int *)(this + 0xf8))
      ;
      DrawAdaptiveImage(param_1,aIStack_38,*(undefined8 *)(this + 0x110));
    }
    if (*(long *)(this + 0x108) != 0) {
      GetGameItemInfo(*(int *)(this + 0xd8),0x7fffffff,0);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)aIStack_38);
      if (local_34 == 0x10000) {
        iVar2 = FUN_04e56010(2);
        iVar2 = iVar2 + *(int *)(this + 0xec);
        iVar6 = FUN_04e56010(0xffffffe9);
        iVar6 = iVar6 + *(int *)(this + 0xf0);
        iVar7 = (int)((double)*(int *)(this + 0xf4) * 1.5);
        iVar3 = (int)((double)*(int *)(this + 0xf8) * 1.5);
      }
      else {
        iVar2 = FUN_04e56010(0x19);
        iVar2 = iVar2 + *(int *)(this + 0xec);
        iVar6 = FUN_04e56010(0);
        iVar7 = *(int *)(this + 0xf4);
        iVar6 = iVar6 + *(int *)(this + 0xf0);
        iVar3 = *(int *)(this + 0xf8);
      }
      Sexy::Insets::Insets(aIStack_38,iVar2,iVar6,iVar7,iVar3);
      DrawAdaptiveImage(param_1,aIStack_38,*(undefined8 *)(this + 0x108));
    }
  }
  if (this[0x1b0] == (CornucopiaShopCommonWidget)0x0) {
    iVar2 = *(int *)(this + 0xd8);
  }
  else {
    iVar2 = *(int *)(this + 0x54);
    iVar6 = *(int *)(this + 0x50);
    iVar7 = *(int *)(this + 0x1c0);
    iVar3 = FUN_04e56010(0x32);
    Sexy::Insets::Insets((Insets *)&local_48,iVar6 / 2,iVar7 + iVar2 / 2,iVar6 / 2,iVar3);
    uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Outline);
    Sexy::Color::Color((Color *)aIStack_38,4);
    WriteWordInRect(param_1,this + 0x1b8,(Insets *)&local_48,uVar8,aIStack_38,3,1);
    iVar2 = *(int *)(this + 0xd8);
  }
  if (iVar2 == 0xfad) {
    iVar7 = FUN_04e56010(0x23);
    iVar2 = *(int *)(this + 0x54);
    iVar6 = *(int *)(this + 0x1c0);
    iVar3 = FUN_04e56010(0x14);
    Sexy::Insets::Insets
              ((Insets *)&local_48,0,iVar7 + iVar2 / 2 + iVar6,*(int *)(this + 0x50),iVar3);
    local_68 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
    Sexy::Color::Color((Color *)aIStack_38,1);
    pCVar12 = this + 0x188;
  }
  else {
    iVar7 = FUN_04e56010(0x23);
    iVar2 = *(int *)(this + 0x54);
    iVar6 = *(int *)(this + 0x1c0);
    iVar3 = FUN_04e56010(0x14);
    Sexy::Insets::Insets
              ((Insets *)&local_48,0,iVar7 + iVar2 / 2 + iVar6,*(int *)(this + 0x50),iVar3);
    local_68 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
    Sexy::Color::Color((Color *)aIStack_38,1);
    pCVar12 = this + 0x180;
  }
  WriteWordInRect(param_1,pCVar12,(Insets *)&local_48,local_68,aIStack_38,5,1);
  if (*(int *)(this + 0x1a0) == 2) {
    iVar6 = FUN_04e56010(0x11);
    iVar7 = FUN_04e56010(0x18);
    iVar3 = FUN_04e56010(0x13);
    iVar2 = *(int *)(this + 0x50);
    iVar4 = FUN_04e56010(0x62);
    Sexy::Insets::Insets(aIStack_38,iVar6,iVar7,iVar2 + iVar3 * -2,iVar4);
    uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9f450);
    Draw3SliceImage(param_1,aIStack_38,uVar8);
    iVar6 = FUN_04e56010(0x11);
    iVar7 = FUN_04e56010(0x16);
    iVar2 = *(int *)(this + 0x50);
    iVar3 = FUN_04e56010(0x62);
    Sexy::Insets::Insets((Insets *)&local_48,iVar6,iVar7,iVar2 + iVar6 * -2,iVar3);
    uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    Sexy::Color::Color((Color *)aIStack_38,2);
    WriteWordInRect(param_1,this + 0x1a8,(Insets *)&local_48,uVar8,aIStack_38,5,1);
  }
  else if (this[0x138] != (CornucopiaShopCommonWidget)0x0) {
    if (this[400] == (CornucopiaShopCommonWidget)0x0) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9f518;
    }
    else {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9f320;
    }
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    iVar2 = FUN_04e56010(0x28);
    iVar6 = FUN_04e56010(0x50);
    iVar7 = FUN_04e56010(0x30);
    Sexy::Graphics::DrawImage(param_1,pIVar9,iVar2,iVar2,iVar6,iVar7);
  }
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaShopCommonWidget::init() */

void __thiscall CornucopiaShopCommonWidget::init(CornucopiaShopCommonWidget *this)

{
  uint uVar1;
  CornucopiaShopCommonWidget CVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  NameMapperBase *this_00;
  DIniFile *this_01;
  string *psVar8;
  long lVar9;
  string *extraout_x1;
  undefined1 uVar10;
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [16];
  string asStack_58 [16];
  DString aDStack_48 [16];
  int local_38;
  int iStack_34;
  undefined8 uStack_30;
  undefined1 auStack_28 [16];
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_04e56010(0x19);
  iVar4 = FUN_04e56010(0x1e);
  iVar5 = FUN_04e56010(0x50);
  Sexy::Insets::Insets((Insets *)&local_38,iVar3,iVar4,iVar5,iVar5);
  *(ulong *)(this + 0xec) = CONCAT44(iStack_34,local_38);
  *(undefined8 *)(this + 0xf4) = uStack_30;
  if (*(long *)(this + 0x120) == 0) {
    iVar3 = MaterialItemMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    Sexy::StringToUpper((Sexy *)asStack_58,extraout_x1);
    std::operator+("IMAGE_UI_FRAGMENT_MATERIAL_",(string *)aDStack_48);
    uVar7 = StringHelper::ToImage((string *)&local_38,false);
    *(undefined8 *)(this + 0x120) = uVar7;
    std::string::~string((string *)&local_38);
    std::string::~string((string *)aDStack_48);
    std::string::~string(asStack_58);
  }
  if (*(int *)(this + 0xe8) == 0) {
    this[0x138] = (CornucopiaShopCommonWidget)0x1;
LAB_04e6260c:
    plVar6 = *(long **)(this + 0x1c8);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x158))(plVar6,0);
    }
LAB_04e62624:
    iVar3 = *(int *)(this + 0xd8);
  }
  else {
    if (this[0x138] != (CornucopiaShopCommonWidget)0x0) goto LAB_04e6260c;
    if (*(long **)(this + 0x1c8) == (long *)0x0) {
      (**(code **)(*(long *)this + 0x328))(this);
    }
    else {
      (**(code **)(**(long **)(this + 0x1c8) + 0x188))();
    }
    if ((this[0x170] != (CornucopiaShopCommonWidget)0x0) ||
       (plVar6 = *(long **)(this + 0x1c8), plVar6 == (long *)0x0)) goto LAB_04e62624;
    (**(code **)(*plVar6 + 0x188))(plVar6,1);
    iVar3 = *(int *)(this + 0xd8);
  }
  if (iVar3 == 0xbc0) {
    iVar3 = 0;
    uVar10 = false;
    TodStringTranslate(L"[GEM_BUY_GEM]");
    FUN_054766c8(this + 0x100,(Insets *)&local_38);
    FUN_05476c50((Insets *)&local_38);
    Sexy::StrFormat(L"x%d",(Insets *)&local_38,(ulong)*(uint *)(this + 0xdc));
    FUN_054766c8(this + 0x1b8,(Insets *)&local_38);
    FUN_05476c50((Insets *)&local_38);
    this[0x1b0] = (CornucopiaShopCommonWidget)0x1;
    uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9f2f8);
    *(undefined8 *)(this + 0x108) = uVar7;
    goto LAB_04e626a4;
  }
  if (iVar3 == 0xfad) {
    iVar3 = 0;
    uVar10 = false;
    TodStringTranslate(L"[LOTTERY_GOLD]");
    FUN_054766c8(this + 0x100,(Insets *)&local_38);
    FUN_05476c50((Insets *)&local_38);
    Sexy::StrFormat(L"x%d",(Insets *)&local_38,(ulong)*(uint *)(this + 0xdc));
    FUN_054766c8(this + 0x1b8,(Insets *)&local_38);
    FUN_05476c50((Insets *)&local_38);
    this[0x1b0] = (CornucopiaShopCommonWidget)0x1;
    uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9f920);
    *(undefined8 *)(this + 0x108) = uVar7;
    goto LAB_04e626a4;
  }
  GetGameItemInfo(iVar3,0x7fffffff,0);
  uVar10 = (undefined1)local_38;
  iVar3 = 0;
  if (local_38 == 0) goto LAB_04e62890;
  if (iStack_34 == 0x20) {
LAB_04e62bd0:
    thunk_FUN_05477b9c(this + 0x100,auStack_10);
    uVar7 = StringHelper::ToImage(asStack_18,false);
    *(undefined8 *)(this + 0x108) = uVar7;
    uVar1 = *(uint *)(this + 0xdc);
LAB_04e62868:
    iVar3 = 0;
    uVar10 = 0;
    Sexy::StrFormat(L"x%d",aDStack_48,(ulong)uVar1);
    FUN_054766c8(this + 0x1b8,aDStack_48);
    FUN_05476c50(aDStack_48);
    this[0x1b0] = (CornucopiaShopCommonWidget)0x1;
  }
  else if (iStack_34 < 0x21) {
    if (iStack_34 == 4) {
LAB_04e62bc4:
      iVar3 = 0;
      iVar4 = iVar3;
    }
    else {
      if (4 < iStack_34) {
        if (iStack_34 == 8) goto LAB_04e62bd0;
        if (iStack_34 != 0x10) goto LAB_04e62ba4;
        goto LAB_04e62bc4;
      }
      if (iStack_34 != 1) {
        if (iStack_34 != 2) goto LAB_04e62ba4;
        *(undefined4 *)(this + 0x128) = 2;
        thunk_FUN_05475e00(this + 0x130,auStack_28);
        thunk_FUN_05477b9c(this + 0x100,auStack_10);
        uVar1 = *(uint *)(this + 0xdc);
        goto LAB_04e62868;
      }
      psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_48);
      iVar3 = *(int *)(lVar9 + 0xd0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_48);
      iVar4 = 1;
    }
    uVar10 = (undefined1)iVar4;
    thunk_FUN_05477b9c(this + 0x100,auStack_10);
    uVar7 = StringHelper::ToImage(asStack_18,false);
    *(undefined8 *)(this + 0x108) = uVar7;
  }
  else {
    if (iStack_34 == 0x2000) goto LAB_04e62bd0;
    if (iStack_34 < 0x2001) {
      if (iStack_34 == 0x100) goto LAB_04e62bd0;
      if (iStack_34 == 0x1000) goto LAB_04e62bc4;
LAB_04e62ba4:
      iVar3 = 0;
      *(undefined8 *)(this + 0x108) = 0;
      uVar10 = 0;
    }
    else if (iStack_34 == 0x4000) {
      iVar3 = 0;
      thunk_FUN_05477b9c(this + 0x100,auStack_10);
      uVar10 = 0;
      uVar7 = StringHelper::ToImage(asStack_18,false);
      *(undefined8 *)(this + 0x108) = uVar7;
      Sexy::StrFormat(L"x%d",aDStack_48,(ulong)*(uint *)(this + 0xdc));
      FUN_054766c8(this + 0x1b8,aDStack_48);
      FUN_05476c50(aDStack_48);
      this[0x1b0] = (CornucopiaShopCommonWidget)0x0;
    }
    else {
      if (iStack_34 != 0x8000) goto LAB_04e62ba4;
      thunk_FUN_05477b9c(this + 0x100,auStack_10);
      uVar7 = StringHelper::ToImage(asStack_18,false);
      *(undefined8 *)(this + 0x108) = uVar7;
      iVar3 = 0;
      Sexy::StrFormat(L"x%d",aDStack_48,(ulong)*(uint *)(this + 0xdc));
      uVar10 = 0;
      FUN_054766c8(this + 0x1b8,aDStack_48);
      FUN_05476c50(aDStack_48);
      DSingleton<HeadshotConfig>::getInstance();
      nop();
      DString::DString(aDStack_48,*(int *)(this + 0xd8));
      DString::operator_cast_to_string(aDStack_48);
      std::string::string(asStack_58,"frame");
      iVar4 = DIniFile::getItemInt(this_01,asStack_68,asStack_58,1);
      std::string::~string(asStack_58);
      nop();
      std::string::~string(asStack_68);
      DString::~DString(aDStack_48);
      DString::DString((DString *)asStack_68,iVar4);
      ::operator+("IMAGE_UI_HEADSHOTFRAME_LV",(DString *)asStack_68);
      ::operator+((DString *)asStack_58,"_1");
      DString::operator_cast_to_string(aDStack_48);
      DString::~DString(aDStack_48);
      DString::~DString((DString *)asStack_58);
      DString::~DString((DString *)asStack_68);
      uVar7 = StringHelper::ToImage(asStack_78,false);
      *(undefined8 *)(this + 0x110) = uVar7;
      DString::DString((DString *)asStack_68,iVar4);
      ::operator+("IMAGE_UI_HEADSHOTFRAME_LV",(DString *)asStack_68);
      ::operator+((DString *)asStack_58,"_2");
      DString::operator_cast_to_string(aDStack_48);
      DString::~DString(aDStack_48);
      DString::~DString((DString *)asStack_58);
      DString::~DString((DString *)asStack_68);
      uVar7 = StringHelper::ToImage(asStack_70,false);
      this[0x1b0] = (CornucopiaShopCommonWidget)0x0;
      *(undefined8 *)(this + 0x118) = uVar7;
      std::string::~string(asStack_70);
      std::string::~string(asStack_78);
    }
  }
LAB_04e62890:
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_38);
LAB_04e626a4:
  CommonRewardItemWidget::SetBgImageRare((CommonRewardItemWidget *)this,(bool)uVar10,iVar3);
  if (*(int *)(this + 0x19c) == 0) {
    std::string::string((string *)&local_38,"IMAGE_UI_UTILITY_ITEM_BG_GOLD_STAR");
    uVar7 = StringHelper::ToImage((string *)&local_38,false);
    *(undefined8 *)(this + 0x178) = uVar7;
    std::string::~string((string *)&local_38);
    nop();
  }
  this_00 = (NameMapperBase *)ArtifactMapper::GetInstance();
  CVar2 = (CornucopiaShopCommonWidget)NameMapperBase::ContainsId(this_00,*(int *)(this + 0xd8));
  this[400] = CVar2;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

