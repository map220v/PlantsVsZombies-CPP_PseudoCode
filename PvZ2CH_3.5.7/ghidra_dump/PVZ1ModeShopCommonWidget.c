// Class: PVZ1ModeShopCommonWidget


/* PVZ1ModeShopCommonWidget::~PVZ1ModeShopCommonWidget() */

void __thiscall PVZ1ModeShopCommonWidget::~PVZ1ModeShopCommonWidget(PVZ1ModeShopCommonWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069c51c0;
  FUN_05476c50(this + 0x1b0);
  FUN_05476c50(this + 0x1a0);
  FUN_05476c50(this + 0x180);
  CommonRewardItemWidget::~CommonRewardItemWidget((CommonRewardItemWidget *)this);
  return;
}


/* PVZ1ModeShopCommonWidget::~PVZ1ModeShopCommonWidget() */

void __thiscall PVZ1ModeShopCommonWidget::~PVZ1ModeShopCommonWidget(PVZ1ModeShopCommonWidget *this)

{
  ~PVZ1ModeShopCommonWidget(this);
  AK::FreeHook(this);
  return;
}


/* PVZ1ModeShopCommonWidget::PVZ1ModeShopCommonWidget(int) */

void __thiscall
PVZ1ModeShopCommonWidget::PVZ1ModeShopCommonWidget(PVZ1ModeShopCommonWidget *this,int param_1)

{
  undefined4 uVar1;
  
  CommonRewardItemWidget::CommonRewardItemWidget((CommonRewardItemWidget *)this);
  *(undefined ***)this = &PTR_GetClass_069c51c0;
  FUN_05476574(this + 0x180);
  *(int *)(this + 400) = param_1;
  FUN_05476574(this + 0x1a0);
  FUN_05476574(this + 0x1b0);
  *(undefined4 *)(this + 0x194) = 0;
  *(undefined4 *)(this + 0x198) = 0;
  FUN_054772c4(this + 0x1a0,&DAT_056f11a8);
  this[0x1a8] = (PVZ1ModeShopCommonWidget)0x0;
  FUN_054772c4(this + 0x1b0,&DAT_056f11a8);
  uVar1 = FUN_04dceedc(0);
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x1b8) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeShopCommonWidget::SetBuyTimes(int, int) */

void __thiscall
PVZ1ModeShopCommonWidget::SetBuyTimes(PVZ1ModeShopCommonWidget *this,int param_1,int param_2)

{
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x188) = param_1;
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x18c) = param_2;
  FUN_05478178(awStack_10,L"[PVZ1MODE_SHOP_BUY_TIME]",auStack_20);
  TodReplaceNumberString(awStack_10,L"{NUM1}",*(int *)(this + 0x188));
  FUN_05476c50(awStack_10);
  nop();
  TodReplaceNumberString(awStack_18,L"{NUM2}",*(int *)(this + 0x18c));
  FUN_054766c8(this + 0x180,awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeShopCommonWidget::CheckShopItem(S2C_ShopItemPurchaseInfo const*) */

bool __thiscall
PVZ1ModeShopCommonWidget::CheckShopItem
          (PVZ1ModeShopCommonWidget *this,S2C_ShopItemPurchaseInfo *param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x1c) == *(int *)(this + 0xdc) &&
          *(int *)(param_1 + 0x18) == *(int *)(this + 0xd8);
  if (*(int *)(param_1 + 0x1c) == *(int *)(this + 0xdc) &&
      *(int *)(param_1 + 0x18) == *(int *)(this + 0xd8)) {
    bVar1 = *(int *)(param_1 + 0x20) == *(int *)(this + 0xe0) &&
            *(int *)(param_1 + 0x24) == *(int *)(this + 0xe4);
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeShopCommonWidget::UpdateShopCommonWidget(S2C_ShopItemPurchaseInfo const*) */

void PVZ1ModeShopCommonWidget::UpdateShopCommonWidget(S2C_ShopItemPurchaseInfo *param_1)

{
  int iVar1;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(param_1 + 0x188);
  *(int *)(param_1 + 0x188) = iVar1 + 1;
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x18c) <= iVar1 + 1) {
    *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x18c);
    CommonRewardItemWidget::SetSoldOut((CommonRewardItemWidget *)param_1,true);
    FUN_04dcece8(*(undefined8 *)(param_1 + 0x1c0));
  }
  FUN_05478178(awStack_10,L"[PVZ1MODE_SHOP_BUY_TIME]",auStack_20);
  TodReplaceNumberString(awStack_10,L"{NUM1}",*(int *)(param_1 + 0x188));
  FUN_05476c50(awStack_10);
  nop();
  TodReplaceNumberString(awStack_18,L"{NUM2}",*(int *)(param_1 + 0x18c));
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
/* PVZ1ModeShopCommonWidget::SetLockDescriptionIndex(int) */

void __thiscall
PVZ1ModeShopCommonWidget::SetLockDescriptionIndex(PVZ1ModeShopCommonWidget *this,int param_1)

{
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x198) = param_1;
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("[RIFTA_SHOP_ITEM_LOCK_DESCRIPTION_%d]",asStack_18);
  StringHelper::ToStringValue(asStack_18);
  FUN_054766c8(this + 0x1a0,auStack_10);
  FUN_05476c50(auStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeShopCommonWidget::ClickCallback() */

void __thiscall PVZ1ModeShopCommonWidget::ClickCallback(PVZ1ModeShopCommonWidget *this)

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
      TodStringTranslate(L"[MAT_PVZ1MODE_COIN_NOT_ENOUGH]");
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
              (plVar4,10,*(undefined4 *)(this + 0xd8),1,*(undefined4 *)(this + 0xe0),
               *(undefined4 *)(this + 0xe4));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeShopCommonWidget::InitButton() */

void __thiscall PVZ1ModeShopCommonWidget::InitButton(PVZ1ModeShopCommonWidget *this)

{
  uint uVar1;
  int iVar2;
  PVZ1ModeShopButton *this_00;
  int iVar3;
  CornucopiaShopButton *pCVar4;
  Delegate0 aDStack_a8 [48];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x368);
  PVZ1ModeShopButton::PVZ1ModeShopButton(this_00,*(int *)(this + 400));
  *(PVZ1ModeShopButton **)(this + 0x1c0) = this_00;
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b9aa58,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b9aa28,3);
  PVZ2UIButton::SetDialogStates((PVZ2UIButton *)this_00,aPStack_78,aPStack_40);
  iVar2 = FUN_04dceedc(0x2d);
  uVar1 = (int)*(uint *)(this + 0x1b8) >> 0x1f;
  iVar3 = (*(uint *)(this + 0x1b8) ^ uVar1) - uVar1;
  (**(code **)(**(long **)(this + 0x1c0) + 0x198))
            (*(long **)(this + 0x1c0),iVar2,*(int *)(this + 0x54) + (iVar3 / 2) * -4,
             *(int *)(this + 0x50) + iVar2 * -2,iVar3 * 2);
  PVZ1ModeShopButton::InitView(*(PVZ1ModeShopButton **)(this + 0x1c0));
  FUN_04dce6f8(*(long *)(this + 0x1c0) + 0x328,*(undefined8 *)(this + 0x120));
  CornucopiaShopButton::SetItemAmount((int)*(undefined8 *)(this + 0x1c0));
  pCVar4 = *(CornucopiaShopButton **)(this + 0x1c0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x320);
  Sexy::Delegate0::Delegate0<PVZ1ModeShopCommonWidget,void(PVZ1ModeShopCommonWidget::*)()>
            (aDStack_a8,aPStack_40);
  CornucopiaShopButton::SetClickCallback(pCVar4,aDStack_a8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1c0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeShopCommonWidget::Draw(Sexy::Graphics*) */

void __thiscall PVZ1ModeShopCommonWidget::Draw(PVZ1ModeShopCommonWidget *this,Graphics *param_1)

{
  PVZ1ModeShopCommonWidget PVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  Image *pIVar8;
  SeedPacketUtils *this_01;
  RtWeakPtr *this_02;
  ResourceInfo *pRVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  local_8 = ___stack_chk_guard;
  if (*(Image **)(this + 0x178) == (Image *)0x0) {
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9a6f8);
    Sexy::Graphics::DrawImage
              (param_1,pIVar8,0,0,*(int *)(this + 0x50),
               *(int *)(this + 0x54) + *(int *)(this + 0x1b8));
  }
  else {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x178),0,0,*(int *)(this + 0x50),
               *(int *)(this + 0x54) + *(int *)(this + 0x1b8));
  }
  iVar3 = FUN_04dceedc(0x19);
  Sexy::Insets::Insets((Insets *)&local_28,0,0,*(int *)(this + 0x50),iVar3);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x100,(Insets *)&local_28,uVar7,aIStack_18,5,1);
  if (*(int *)(this + 0x128) == 2) {
    this_01 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    this_02 = (RtWeakPtr *)
              SeedPacketUtils::GetPlantPiecePacketRenderData(this_01,(string *)(this + 0x130));
    fVar12 = ((float)*(int *)(this + 0xf4) * 0.9) / (float)*(int *)(this_02 + 0x28);
    fVar11 = ((float)*(int *)(this + 0xf8) * 0.9) / (float)*(int *)(this_02 + 0x2c);
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(this_02 + 0x170));
    GetImageOffset(&iStack_40,aIStack_18);
    Sexy::RtId::~RtId((RtId *)aIStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace(&iStack_40,&iStack_3c,1536.0);
    Sexy::Insets::Insets
              ((Insets *)&local_38,
               (int)((float)*(int *)(this + 0xec) + (float)*(int *)(this_02 + 0x30) * fVar12),
               (int)((float)*(int *)(this + 0xf0) + (float)*(int *)(this_02 + 0x34) * fVar11),
               (int)(fVar12 * (float)*(int *)(this_02 + 0x28)),
               (int)(fVar11 * (float)*(int *)(this_02 + 0x2c)));
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_02 + 0x170);
    iVar3 = FUN_04dceedc(0x19);
    iVar6 = FUN_04dceedc(10);
    Sexy::Insets::Insets(aIStack_18,local_38 + iVar3,local_34 + iVar6,local_30,local_2c);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar9,(TRect *)aIStack_18,(TRect *)(this_02 + 0x20))
    ;
    Sexy::Insets::Insets
              ((Insets *)&local_28,
               (int)((float)*(int *)(this + 0xec) + (float)*(int *)(this_02 + 0x18) * fVar12),
               (int)((float)*(int *)(this + 0xf0) + (float)*(int *)(this_02 + 0x1c) * fVar11),
               (int)(fVar12 * (float)*(int *)(this_02 + 0x10)),
               (int)(fVar11 * (float)*(int *)(this_02 + 0x14)));
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_02);
    if (bVar2) {
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
      pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar10 + 0x48));
      iVar3 = FUN_04dceedc(0x19);
      iVar6 = FUN_04dceedc(10);
      Sexy::Insets::Insets(aIStack_18,local_28 + iVar3,local_24 + iVar6,local_20,local_1c);
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar9,(TRect *)aIStack_18,(TRect *)(this_02 + 8));
    }
  }
  else if (*(long *)(this + 0x108) != 0) {
    if ((*(long *)(this + 0x110) == 0) || (*(long *)(this + 0x118) == 0)) {
      iVar6 = FUN_04dceedc(0x19);
      iVar3 = *(int *)(this + 0xec);
      iVar4 = FUN_04dceedc(10);
      Sexy::Insets::Insets
                (aIStack_18,iVar6 + iVar3,iVar4 + *(int *)(this + 0xf0),*(int *)(this + 0xf4),
                 *(int *)(this + 0xf8));
      DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0x108));
      PVar1 = this[0x1a8];
      goto joined_r0x04dd21e0;
    }
    iVar3 = FUN_04dceedc(0x23);
    Sexy::Insets::Insets
              (aIStack_18,iVar3 + *(int *)(this + 0xec),*(int *)(this + 0xf0),*(int *)(this + 0xf4),
               *(int *)(this + 0xf8));
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0x118));
    iVar3 = *(int *)(this + 0xf4);
    iVar6 = *(int *)(this + 0xf8);
    iVar4 = FUN_04dceedc(0x23);
    Sexy::Insets::Insets
              ((Insets *)&local_28,
               iVar4 + (int)((float)*(int *)(this + 0xec) + (float)iVar3 * 0.19999999),
               (int)((float)*(int *)(this + 0xf0) + (float)iVar6 * 0.19999999),
               (int)((float)iVar3 * 0.6),(int)((float)iVar6 * 0.6));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&local_28);
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0x108));
    iVar3 = FUN_04dceedc(0x23);
    Sexy::Insets::Insets
              (aIStack_18,iVar3 + *(int *)(this + 0xec),*(int *)(this + 0xf0),*(int *)(this + 0xf4),
               *(int *)(this + 0xf8));
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0x110));
  }
  PVar1 = this[0x1a8];
joined_r0x04dd21e0:
  if (PVar1 != (PVZ1ModeShopCommonWidget)0x0) {
    iVar3 = *(int *)(this + 0x54);
    iVar6 = *(int *)(this + 0x50);
    iVar4 = *(int *)(this + 0x1b8);
    iVar5 = FUN_04dceedc(0x32);
    Sexy::Insets::Insets((Insets *)&local_28,iVar6 / 2,iVar4 + iVar3 / 2,iVar6 / 2,iVar5);
    uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Outline);
    Sexy::Color::Color((Color *)aIStack_18,4);
    WriteWordInRect(param_1,this + 0x1b0,(Insets *)&local_28,uVar7,aIStack_18,3,1);
  }
  iVar4 = FUN_04dceedc(0x23);
  iVar3 = *(int *)(this + 0x54);
  iVar6 = *(int *)(this + 0x1b8);
  iVar5 = FUN_04dceedc(0x14);
  Sexy::Insets::Insets((Insets *)&local_28,0,iVar4 + iVar3 / 2 + iVar6,*(int *)(this + 0x50),iVar5);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x180,(Insets *)&local_28,uVar7,aIStack_18,5,1);
  if (this[0x138] != (PVZ1ModeShopCommonWidget)0x0) {
    if (*(int *)(this + 0x194) == 1) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9aad8;
    }
    else {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9a918;
    }
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    iVar3 = FUN_04dceedc(0x28);
    iVar6 = FUN_04dceedc(0x50);
    iVar4 = FUN_04dceedc(0x30);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar3,iVar3,iVar6,iVar4);
  }
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeShopCommonWidget::init() */

void __thiscall PVZ1ModeShopCommonWidget::init(PVZ1ModeShopCommonWidget *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  DIniFile *this_00;
  string *psVar7;
  long lVar8;
  string *extraout_x1;
  undefined1 uVar9;
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
  iVar2 = FUN_04dceedc(0x19);
  iVar3 = FUN_04dceedc(0x1e);
  iVar4 = FUN_04dceedc(0x50);
  Sexy::Insets::Insets((Insets *)&local_38,iVar2,iVar3,iVar4,iVar4);
  *(ulong *)(this + 0xec) = CONCAT44(iStack_34,local_38);
  *(undefined8 *)(this + 0xf4) = uStack_30;
  if (*(long *)(this + 0x120) == 0) {
    iVar2 = MaterialItemMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    Sexy::StringToUpper((Sexy *)asStack_58,extraout_x1);
    std::operator+("IMAGE_UI_FRAGMENT_MATERIAL_",(string *)aDStack_48);
    uVar6 = StringHelper::ToImage((string *)&local_38,false);
    *(undefined8 *)(this + 0x120) = uVar6;
    std::string::~string((string *)&local_38);
    std::string::~string((string *)aDStack_48);
    std::string::~string(asStack_58);
  }
  if (*(int *)(this + 0xe8) == 0) {
    this[0x138] = (PVZ1ModeShopCommonWidget)0x1;
LAB_04dd2548:
    plVar5 = *(long **)(this + 0x1c0);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x158))(plVar5,0);
    }
LAB_04dd2560:
    iVar2 = *(int *)(this + 0xd8);
  }
  else {
    if (this[0x138] != (PVZ1ModeShopCommonWidget)0x0) goto LAB_04dd2548;
    plVar5 = *(long **)(this + 0x1c0);
    if (plVar5 == (long *)0x0) {
      (**(code **)(*(long *)this + 0x328))(this);
      goto LAB_04dd2560;
    }
    (**(code **)(*plVar5 + 0x158))(plVar5,1);
    iVar2 = *(int *)(this + 0xd8);
  }
  if (iVar2 == 0xbc0) {
    iVar2 = 0;
    uVar9 = false;
    TodStringTranslate(L"[GEM_BUY_GEM]");
    FUN_054766c8(this + 0x100,(Insets *)&local_38);
    FUN_05476c50((Insets *)&local_38);
    Sexy::StrFormat(L"x%d",(Insets *)&local_38,(ulong)*(uint *)(this + 0xdc));
    FUN_054766c8(this + 0x1b0,(Insets *)&local_38);
    FUN_05476c50((Insets *)&local_38);
    this[0x1a8] = (PVZ1ModeShopCommonWidget)0x1;
    uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9a748);
    *(undefined8 *)(this + 0x108) = uVar6;
    goto LAB_04dd25e0;
  }
  if (iVar2 == 0xfad) {
    iVar2 = 0;
    uVar9 = false;
    TodStringTranslate(L"[LOTTERY_GOLD]");
    FUN_054766c8(this + 0x100,(Insets *)&local_38);
    FUN_05476c50((Insets *)&local_38);
    Sexy::StrFormat(L"x%d",(Insets *)&local_38,(ulong)*(uint *)(this + 0xdc));
    FUN_054766c8(this + 0x1b0,(Insets *)&local_38);
    FUN_05476c50((Insets *)&local_38);
    this[0x1a8] = (PVZ1ModeShopCommonWidget)0x1;
    uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9a980);
    *(undefined8 *)(this + 0x108) = uVar6;
    goto LAB_04dd25e0;
  }
  GetGameItemInfo(iVar2,0x7fffffff,0);
  uVar9 = (undefined1)local_38;
  iVar2 = 0;
  if (local_38 == 0) goto LAB_04dd2760;
  if (iStack_34 == 0x20) {
LAB_04dd2aa0:
    thunk_FUN_05477b9c(this + 0x100,auStack_10);
    uVar6 = StringHelper::ToImage(asStack_18,false);
    *(undefined8 *)(this + 0x108) = uVar6;
    uVar1 = *(uint *)(this + 0xdc);
LAB_04dd2738:
    iVar2 = 0;
    uVar9 = 0;
    Sexy::StrFormat(L"x%d",aDStack_48,(ulong)uVar1);
    FUN_054766c8(this + 0x1b0,aDStack_48);
    FUN_05476c50(aDStack_48);
    this[0x1a8] = (PVZ1ModeShopCommonWidget)0x1;
  }
  else if (iStack_34 < 0x21) {
    if (iStack_34 == 4) {
LAB_04dd2a94:
      iVar2 = 0;
      iVar3 = iVar2;
    }
    else {
      if (4 < iStack_34) {
        if (iStack_34 == 8) goto LAB_04dd2aa0;
        if (iStack_34 != 0x10) goto LAB_04dd2a74;
        goto LAB_04dd2a94;
      }
      if (iStack_34 != 1) {
        if (iStack_34 != 2) goto LAB_04dd2a74;
        *(undefined4 *)(this + 0x128) = 2;
        thunk_FUN_05475e00(this + 0x130,auStack_28);
        thunk_FUN_05477b9c(this + 0x100,auStack_10);
        uVar1 = *(uint *)(this + 0xdc);
        goto LAB_04dd2738;
      }
      psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_48);
      iVar2 = *(int *)(lVar8 + 0xd0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_48);
      iVar3 = 1;
    }
    uVar9 = (undefined1)iVar3;
    thunk_FUN_05477b9c(this + 0x100,auStack_10);
    uVar6 = StringHelper::ToImage(asStack_18,false);
    *(undefined8 *)(this + 0x108) = uVar6;
  }
  else {
    if (iStack_34 == 0x2000) goto LAB_04dd2aa0;
    if (iStack_34 < 0x2001) {
      if (iStack_34 == 0x100) goto LAB_04dd2aa0;
      if (iStack_34 == 0x1000) goto LAB_04dd2a94;
LAB_04dd2a74:
      iVar2 = 0;
      *(undefined8 *)(this + 0x108) = 0;
      uVar9 = 0;
    }
    else if (iStack_34 == 0x4000) {
      iVar2 = 0;
      thunk_FUN_05477b9c(this + 0x100,auStack_10);
      uVar9 = 0;
      uVar6 = StringHelper::ToImage(asStack_18,false);
      *(undefined8 *)(this + 0x108) = uVar6;
      Sexy::StrFormat(L"x%d",aDStack_48,(ulong)*(uint *)(this + 0xdc));
      FUN_054766c8(this + 0x1b0,aDStack_48);
      FUN_05476c50(aDStack_48);
      this[0x1a8] = (PVZ1ModeShopCommonWidget)0x0;
    }
    else {
      if (iStack_34 != 0x8000) goto LAB_04dd2a74;
      thunk_FUN_05477b9c(this + 0x100,auStack_10);
      uVar6 = StringHelper::ToImage(asStack_18,false);
      *(undefined8 *)(this + 0x108) = uVar6;
      iVar2 = 0;
      Sexy::StrFormat(L"x%d",aDStack_48,(ulong)*(uint *)(this + 0xdc));
      uVar9 = 0;
      FUN_054766c8(this + 0x1b0,aDStack_48);
      FUN_05476c50(aDStack_48);
      DSingleton<HeadshotConfig>::getInstance();
      nop();
      DString::DString(aDStack_48,*(int *)(this + 0xd8));
      DString::operator_cast_to_string(aDStack_48);
      std::string::string(asStack_58,"frame");
      iVar3 = DIniFile::getItemInt(this_00,asStack_68,asStack_58,1);
      std::string::~string(asStack_58);
      nop();
      std::string::~string(asStack_68);
      DString::~DString(aDStack_48);
      DString::DString((DString *)asStack_68,iVar3);
      ::operator+("IMAGE_UI_HEADSHOTFRAME_LV",(DString *)asStack_68);
      ::operator+((DString *)asStack_58,"_1");
      DString::operator_cast_to_string(aDStack_48);
      DString::~DString(aDStack_48);
      DString::~DString((DString *)asStack_58);
      DString::~DString((DString *)asStack_68);
      uVar6 = StringHelper::ToImage(asStack_78,false);
      *(undefined8 *)(this + 0x110) = uVar6;
      DString::DString((DString *)asStack_68,iVar3);
      ::operator+("IMAGE_UI_HEADSHOTFRAME_LV",(DString *)asStack_68);
      ::operator+((DString *)asStack_58,"_2");
      DString::operator_cast_to_string(aDStack_48);
      DString::~DString(aDStack_48);
      DString::~DString((DString *)asStack_58);
      DString::~DString((DString *)asStack_68);
      uVar6 = StringHelper::ToImage(asStack_70,false);
      this[0x1a8] = (PVZ1ModeShopCommonWidget)0x0;
      *(undefined8 *)(this + 0x118) = uVar6;
      std::string::~string(asStack_70);
      std::string::~string(asStack_78);
    }
  }
LAB_04dd2760:
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_38);
LAB_04dd25e0:
  CommonRewardItemWidget::SetBgImageRare((CommonRewardItemWidget *)this,(bool)uVar9,iVar2);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

