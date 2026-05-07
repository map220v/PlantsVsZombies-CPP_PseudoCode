// Class: RenaissanceChallengeRewardWidget


/* RenaissanceChallengeRewardWidget::TouchBegan(Sexy::Touch const&) */

void __thiscall
RenaissanceChallengeRewardWidget::TouchBegan(RenaissanceChallengeRewardWidget *this,Touch *param_1)

{
  *(int *)(this + 0x120) = (int)*(undefined8 *)param_1;
  return;
}


/* RenaissanceChallengeRewardWidget::~RenaissanceChallengeRewardWidget() */

void __thiscall
RenaissanceChallengeRewardWidget::~RenaissanceChallengeRewardWidget
          (RenaissanceChallengeRewardWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06712c30;
  std::string::~string((string *)(this + 0x118));
  FUN_05476c50(this + 0xf0);
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RenaissanceChallengeRewardWidget::~RenaissanceChallengeRewardWidget() */

void __thiscall
RenaissanceChallengeRewardWidget::~RenaissanceChallengeRewardWidget
          (RenaissanceChallengeRewardWidget *this)

{
  ~RenaissanceChallengeRewardWidget(this);
  AK::FreeHook(this);
  return;
}


/* RenaissanceChallengeRewardWidget::RenaissanceChallengeRewardWidget() */

void __thiscall
RenaissanceChallengeRewardWidget::RenaissanceChallengeRewardWidget
          (RenaissanceChallengeRewardWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06712c30;
  FUN_05476574(this + 0xe8);
  FUN_05476574(this + 0xf0);
  Sexy::Insets::Insets((Insets *)(this + 0x100));
  this[0x110] = (RenaissanceChallengeRewardWidget)0x0;
  this[0x111] = (RenaissanceChallengeRewardWidget)0x0;
  Set8BytesTo0(this + 0x118);
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 0x120) = 0xffffffff;
  *(undefined4 *)(this + 0x124) = 0xffffffff;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeRewardWidget::init() */

void __thiscall RenaissanceChallengeRewardWidget::init(RenaissanceChallengeRewardWidget *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  wstring awStack_48 [8];
  wstring awStack_40 [8];
  int local_38;
  int iStack_34;
  undefined8 uStack_30;
  undefined1 auStack_28 [16];
  string asStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03aad07c(0x23);
  iVar2 = FUN_03aad07c(0x1c);
  iVar3 = FUN_03aad07c(0x50);
  Sexy::Insets::Insets((Insets *)&local_38,iVar1,iVar2,iVar3,iVar3);
  iVar1 = *(int *)(this + 0xd4);
  *(ulong *)(this + 0x100) = CONCAT44(iStack_34,local_38);
  *(undefined8 *)(this + 0x108) = uStack_30;
  if (iVar1 == 0xbc0) {
    TodStringTranslate(L"[GEM_BUY_GEM]");
    Sexy::StrFormat(L"x%d",awStack_40,(ulong)*(uint *)(this + 0xd8));
    std::operator+(awStack_48,awStack_40);
    FUN_054766c8(this + 0xe8,(Insets *)&local_38);
    FUN_05476c50((Insets *)&local_38);
    FUN_05476c50(awStack_40);
    FUN_05476c50(awStack_48);
    uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7418);
    *(undefined8 *)(this + 0xf8) = uVar4;
  }
  else if (iVar1 == 0xfad) {
    TodStringTranslate(L"[LOTTERY_GOLD]");
    Sexy::StrFormat(L"x%d",awStack_40,(ulong)*(uint *)(this + 0xd8));
    std::operator+(awStack_48,awStack_40);
    FUN_054766c8(this + 0xe8,(Insets *)&local_38);
    FUN_05476c50((Insets *)&local_38);
    FUN_05476c50(awStack_40);
    FUN_05476c50(awStack_48);
    uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac6f70);
    *(undefined8 *)(this + 0xf8) = uVar4;
  }
  else {
    GetGameItemInfo(iVar1,0x7fffffff,0);
    if (local_38 != 0) {
      if ((iStack_34 == 8) || (iStack_34 == 0x20)) {
        Sexy::StrFormat(L"x%d",awStack_48,(ulong)*(uint *)(this + 0xd8));
        std::operator+(awStack_10,awStack_48);
        FUN_054766c8(this + 0xe8,awStack_40);
        FUN_05476c50(awStack_40);
        FUN_05476c50(awStack_48);
        uVar4 = StringHelper::ToImage(asStack_18,false);
        *(undefined8 *)(this + 0xf8) = uVar4;
      }
      else if (iStack_34 == 2) {
        this[0x110] = (RenaissanceChallengeRewardWidget)0x1;
        thunk_FUN_05475e00(this + 0x118,auStack_28);
        Sexy::StrFormat(L"x%d",awStack_48,(ulong)*(uint *)(this + 0xd8));
        std::operator+(awStack_10,awStack_48);
        FUN_054766c8(this + 0xe8,awStack_40);
        FUN_05476c50(awStack_40);
        FUN_05476c50(awStack_48);
      }
      else {
        *(undefined8 *)(this + 0xf8) = 0;
      }
    }
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeRewardWidget::setData(int, RenaissanceChallengeRewardItemData const&) */

void __thiscall
RenaissanceChallengeRewardWidget::setData
          (RenaissanceChallengeRewardWidget *this,int param_1,
          RenaissanceChallengeRewardItemData *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  RenaissanceChallengeNewManager *this_00;
  undefined8 uVar3;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  uVar3 = *(undefined8 *)param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(int *)(this + 0x124) = param_1;
  *(undefined8 *)(this + 0xd4) = uVar3;
  *(undefined8 *)(this + 0xdc) = uVar1;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_2 + 0x10);
  if (*(int *)(this + 0xdc) < 1) {
    if (*(int *)(this + 0xd4) != 0xfad) {
      this[0x111] = (RenaissanceChallengeRewardWidget)0x1;
    }
    if (*(int *)(this + 0xdc) == -1) {
      TodStringTranslate(L"[PVZ1MODE_SHOP_BUY_TIME_UNLIMITED]");
      FUN_054766c8(this + 0xf0,awStack_10);
      FUN_05476c50(awStack_10);
      goto LAB_03ab0dac;
    }
  }
  FUN_05478178(awStack_10,L"[PVZ1MODE_SHOP_BUY_TIME]",auStack_20);
  TodReplaceNumberString(awStack_10,L"{NUM1}",*(int *)(this + 0xe4) - *(int *)(this + 0xdc));
  FUN_05476c50(awStack_10);
  nop();
  TodReplaceNumberString(awStack_18,L"{NUM2}",*(int *)(this + 0xe4));
  FUN_054766c8(this + 0xf0,awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
LAB_03ab0dac:
  this_00 = (RenaissanceChallengeNewManager *)
            Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstance();
  uVar2 = RenaissanceChallengeNewManager::GetResourceId(this_00);
  if ((int)uVar2 < 1) {
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac6e70);
    *(undefined8 *)(this + 0x128) = uVar3;
  }
  else {
    Sexy::StrFormat("IMAGE_UI_QUESTS_REN_CHALL_STATUE_NEED_%d",(string *)awStack_10,(ulong)uVar2);
    uVar3 = StringHelper::ToImage((string *)awStack_10,false);
    *(undefined8 *)(this + 0x128) = uVar3;
    std::string::~string((string *)awStack_10);
  }
  init(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeRewardWidget::TouchEnded(Sexy::Touch const&) */

void __thiscall
RenaissanceChallengeRewardWidget::TouchEnded(RenaissanceChallengeRewardWidget *this,Touch *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIRenaissanceChallengeShop *this_02;
  wchar_t *pwVar4;
  Image *pIVar5;
  long lVar6;
  UIMessageBox *this_03;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x120) != (int)*(undefined8 *)param_1) goto LAB_03ab230c;
  if ((*(int *)(this + 0xdc) < 1) && (*(int *)(this + 0xd4) != 0xfad)) {
    this_03 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_03 == (UIMessageBox *)0x0) goto LAB_03ab230c;
    UIMessageBox::SetShowType(this_03,4);
    TodStringTranslate(L"[REVIVE_TIP]");
    pwVar4 = L"[SOLD_OUT]";
  }
  else {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar3 = PlayerInfo::GetMaterialNum(this_01,DAT_06a884dc);
    iVar1 = *(int *)(this + 0xe0);
    if (iVar1 <= iVar3) {
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar3 / iVar1;
      }
      iVar1 = *(int *)(this + 0xdc);
      if (10 < iVar2) {
        iVar2 = 10;
      }
      if ((iVar1 != -1) && (iVar1 < iVar2)) {
        iVar2 = iVar1;
      }
      this_02 = (UIRenaissanceChallengeShop *)
                UISingletonDialog<UIRenaissanceChallengeShop>::ShowDialog();
      UIRenaissanceChallengeShop::initData
                (this_02,*(int *)(this + 0xd4),*(int *)(this + 0xd8),*(int *)(this + 0xe0),iVar2,
                 *(int *)(this + 0x124));
      goto LAB_03ab230c;
    }
    this_03 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_03 == (UIMessageBox *)0x0) goto LAB_03ab230c;
    UIMessageBox::SetShowType(this_03,4);
    TodStringTranslate(L"[REVIVE_TIP]");
    pwVar4 = L"[MATERIAL_NOT_ENOUGH]";
  }
  TodStringTranslate(pwVar4);
  TodStringTranslate(L"[BUTTON_OK]");
  UIMessageBox::SetMessage(this_03,awStack_20,awStack_28);
  std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
  pIVar5 = (Image *)StringHelper::ToImage(asStack_10,false);
  UIMessageBox::SetBackground(this_03,pIVar5);
  std::string::~string(asStack_10);
  nop();
  lVar6 = UIMessageBox::GetButtonCancel(this_03);
  thunk_FUN_05477b9c(lVar6 + 0xd8,auStack_18);
  FUN_05476c50(auStack_18);
  FUN_05476c50(awStack_20);
  FUN_05476c50(awStack_28);
LAB_03ab230c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeRewardWidget::Draw(Sexy::Graphics*) */

void __thiscall
RenaissanceChallengeRewardWidget::Draw(RenaissanceChallengeRewardWidget *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  undefined8 uVar7;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar8;
  long lVar9;
  string *extraout_x1;
  float fVar10;
  float fVar11;
  Sexy aSStack_38 [8];
  int iStack_30;
  int iStack_2c;
  Insets aIStack_28 [16];
  RtId aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac74c8);
  Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  iVar2 = FUN_03aad07c(0x19);
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),iVar2);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aRStack_18,1);
  WriteWordInRect(param_1,this + 0xe8,aIStack_28,uVar7,aRStack_18,5,1);
  if (this[0x110] == (RenaissanceChallengeRewardWidget)0x0) {
    if (*(Image **)(this + 0xf8) != (Image *)0x0) {
      Sexy::Graphics::DrawImage
                (param_1,*(Image **)(this + 0xf8),*(int *)(this + 0x100),*(int *)(this + 0x104),
                 *(int *)(this + 0x108),*(int *)(this + 0x10c));
    }
  }
  else {
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    this_01 = (RtWeakPtr *)
              SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(this + 0x118));
    fVar11 = ((float)*(int *)(this + 0x108) * 0.9) / (float)*(int *)(this_01 + 0x28);
    fVar10 = ((float)*(int *)(this + 0x10c) * 0.9) / (float)*(int *)(this_01 + 0x2c);
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(this_01 + 0x170));
    GetImageOffset(&iStack_30,aRStack_18);
    Sexy::RtId::~RtId(aRStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace(&iStack_30,&iStack_2c,1536.0);
    Sexy::Insets::Insets
              (aIStack_28,
               (int)((float)*(int *)(this + 0x100) + (float)*(int *)(this_01 + 0x30) * fVar11),
               (int)((float)*(int *)(this + 0x104) + (float)*(int *)(this_01 + 0x34) * fVar10),
               (int)(fVar11 * (float)*(int *)(this_01 + 0x28)),
               (int)(fVar10 * (float)*(int *)(this_01 + 0x2c)));
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar8,(TRect *)aIStack_28,(TRect *)(this_01 + 0x20))
    ;
    Sexy::Insets::Insets
              ((Insets *)aRStack_18,
               (int)((float)*(int *)(this + 0x100) + (float)*(int *)(this_01 + 0x18) * fVar11),
               (int)((float)*(int *)(this + 0x104) + (float)*(int *)(this_01 + 0x1c) * fVar10),
               (int)(fVar11 * (float)*(int *)(this_01 + 0x10)),
               (int)(fVar10 * (float)*(int *)(this_01 + 0x14)));
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar1) {
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar9 + 0x48));
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar8,(TRect *)aRStack_18,(TRect *)(this_01 + 8));
    }
  }
  pIVar6 = *(Image **)(this + 0x128);
  if (pIVar6 != (Image *)0x0) {
    iVar3 = FUN_03aad07c(0x1e);
    iVar2 = *(int *)(this + 0x54);
    iVar4 = FUN_03aad07c(0x5a);
    iVar5 = FUN_03aad07c(0x1a);
    Sexy::Graphics::DrawImage(param_1,pIVar6,iVar3,iVar2 - iVar3,iVar4,iVar5);
  }
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
  Sexy::ToSexyString(aSStack_38,extraout_x1);
  iVar3 = FUN_03aad07c(0x1c);
  iVar2 = *(int *)(this + 0x54);
  iVar4 = FUN_03aad07c(0x19);
  Sexy::Insets::Insets(aIStack_28,0,iVar2 - iVar3,*(int *)(this + 0x50),iVar4);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aRStack_18,1);
  WriteWordInRect(param_1,&iStack_30,aIStack_28,uVar7,aRStack_18,5,1);
  FUN_05476c50(&iStack_30);
  std::string::~string((string *)aSStack_38);
  iVar2 = FUN_03aad07c(0x5a);
  iVar3 = FUN_03aad07c(0x19);
  Sexy::Insets::Insets(aIStack_28,0,iVar2,*(int *)(this + 0x50),iVar3);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aRStack_18,1);
  WriteWordInRect(param_1,this + 0xf0,aIStack_28,uVar7,aRStack_18,5,1);
  if (this[0x111] != (RenaissanceChallengeRewardWidget)0x0) {
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7090);
    iVar2 = FUN_03aad07c(0x28);
    iVar3 = FUN_03aad07c(0x23);
    iVar4 = FUN_03aad07c(0x50);
    iVar5 = FUN_03aad07c(0x30);
    Sexy::Graphics::DrawImage(param_1,pIVar6,iVar2,iVar3,iVar4,iVar5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

