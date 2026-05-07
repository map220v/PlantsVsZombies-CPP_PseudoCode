// Class: NewPVPShopCommonWidget


/* NewPVPShopCommonWidget::~NewPVPShopCommonWidget() */

void __thiscall NewPVPShopCommonWidget::~NewPVPShopCommonWidget(NewPVPShopCommonWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06657980;
  FUN_05476c50(this + 0x1a0);
  FUN_05476c50(this + 400);
  CommonRewardItemWidget::~CommonRewardItemWidget((CommonRewardItemWidget *)this);
  return;
}


/* NewPVPShopCommonWidget::~NewPVPShopCommonWidget() */

void __thiscall NewPVPShopCommonWidget::~NewPVPShopCommonWidget(NewPVPShopCommonWidget *this)

{
  ~NewPVPShopCommonWidget(this);
  AK::FreeHook(this);
  return;
}


/* NewPVPShopCommonWidget::NewPVPShopCommonWidget(int) */

void __thiscall
NewPVPShopCommonWidget::NewPVPShopCommonWidget(NewPVPShopCommonWidget *this,int param_1)

{
  undefined4 uVar1;
  
  CommonRewardItemWidget::CommonRewardItemWidget((CommonRewardItemWidget *)this);
  *(int *)(this + 0x180) = param_1;
  *(undefined ***)this = &PTR_GetClass_06657980;
  FUN_05476574(this + 400);
  FUN_05476574(this + 0x1a0);
  *(int *)(this + 0x180) = param_1;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  FUN_054772c4(this + 400,&DAT_056f11a8);
  this[0x198] = (NewPVPShopCommonWidget)0x0;
  FUN_054772c4(this + 0x1a0,&DAT_056f11a8);
  uVar1 = FUN_03551df0(0);
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  *(undefined4 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x1bc) = 1;
  this[0x1b8] = (NewPVPShopCommonWidget)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPShopCommonWidget::SetLockDescriptionIndex(int) */

void __thiscall
NewPVPShopCommonWidget::SetLockDescriptionIndex(NewPVPShopCommonWidget *this,int param_1)

{
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x188) = param_1;
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("[NEW_PVP_SHOP_ITEM_LOCK_DESCRIPTION_%d]",asStack_18,1);
  StringHelper::ToStringValue(asStack_18);
  FUN_054766c8(this + 400,auStack_10);
  FUN_05476c50(auStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPShopCommonWidget::SetBuyTimes(int, int) */

void __thiscall
NewPVPShopCommonWidget::SetBuyTimes(NewPVPShopCommonWidget *this,int param_1,int param_2)

{
  *(int *)(this + 0x1bc) = param_2;
  *(int *)(this + 0x1c0) = param_1;
  (**(code **)(**(long **)(this + 0x1b0) + 0x188))(*(long **)(this + 0x1b0),param_2 <= param_1);
  this[0x1b8] = (NewPVPShopCommonWidget)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPShopCommonWidget::ClickCallback() */

void __thiscall NewPVPShopCommonWidget::ClickCallback(NewPVPShopCommonWidget *this)

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
  iVar1 = PlayerInfo::GetMaterialNum(this_01,0x5acb);
  if (iVar1 < *(int *)(this + 0xe4)) {
    this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_02 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_02,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[MAT_NEW_PVP_PURPLE_GOLD_COIN_NOT_ENOUGH]");
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
              (plVar4,0xe,*(undefined4 *)(this + 0x180),1,*(undefined4 *)(this + 0xe0),
               *(undefined4 *)(this + 0xe4));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPShopCommonWidget::init() */

void __thiscall NewPVPShopCommonWidget::init(NewPVPShopCommonWidget *this)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  NameMapperBase *this_00;
  SeedPacketUtils *this_01;
  PacketRenderData *pPVar9;
  DeviceImage *pDVar10;
  undefined8 uVar11;
  NewPVPShopButton *this_02;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  CustomLevelFilterItemWidget *pCVar12;
  string asStack_e0 [8];
  Sexy aSStack_d8 [8];
  string asStack_d0 [8];
  string asStack_c8 [8];
  Sexy aSStack_c0 [8];
  wstring awStack_b8 [8];
  wstring awStack_b0 [8];
  Delegate0 aDStack_a8 [48];
  Sexy aSStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_03551df0(0x19);
  iVar5 = FUN_03551df0(0x1e);
  iVar6 = FUN_03551df0(0x50);
  Sexy::Insets::Insets((Insets *)&local_40,iVar4,iVar5,iVar6,iVar6);
  *(undefined8 *)(this + 0xec) = local_40;
  *(undefined8 *)(this + 0xf4) = uStack_38;
  if (*(long *)(this + 0x120) == 0) {
    iVar4 = MaterialItemMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar4);
    Sexy::StringToUpper((Sexy *)awStack_b0,extraout_x1_02);
    std::operator+("IMAGE_UI_FRAGMENT_MATERIAL_",(string *)aSStack_78);
    uVar11 = StringHelper::ToImage((string *)&local_40,false);
    *(undefined8 *)(this + 0x120) = uVar11;
    std::string::~string((string *)&local_40);
    std::string::~string((string *)aSStack_78);
    std::string::~string((string *)awStack_b0);
  }
  if (*(int *)(this + 0xe8) == 0) {
    this[0x138] = (NewPVPShopCommonWidget)0x1;
  }
  else if ((this[0x138] == (NewPVPShopCommonWidget)0x0) && (*(int *)(this + 0x184) != 2)) {
    plVar8 = *(long **)(this + 0x1b0);
    if (plVar8 == (long *)0x0) {
      this_02 = ::operator_new(0x370);
      NewPVPShopButton::NewPVPShopButton(this_02,*(int *)(this + 0x180));
      *(NewPVPShopButton **)(this + 0x1b0) = this_02;
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aSStack_78,&DAT_06aa62a8,3);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06aa61c0,3);
      PVZ2UIButton::SetDialogStates
                ((PVZ2UIButton *)this_02,(PVZ2UIImage *)aSStack_78,(PVZ2UIImage *)&local_40);
      uVar7 = FUN_03551df0(0x2d);
      uVar1 = (int)*(uint *)(this + 0x1a8) >> 0x1f;
      iVar4 = (*(uint *)(this + 0x1a8) ^ uVar1) - uVar1;
      uVar1 = *(int *)(this + 0x54) + (iVar4 / 2) * -4;
      Sexy::OutputDebugStrF
                ((wchar_t *)"init rifta shop button x = %d y = %d w = %d h = %d",(ulong)uVar7,
                 (ulong)uVar1,(ulong)(uVar7 * -2 + *(int *)(this + 0x50)),(ulong)(uint)(iVar4 * 2));
      uVar2 = *(uint *)(this + 0x1a8);
      (**(code **)(**(long **)(this + 0x1b0) + 0x198))
                (*(long **)(this + 0x1b0),(ulong)uVar7,uVar1,uVar7 * -2 + *(int *)(this + 0x50),
                 ((uVar2 ^ (int)uVar2 >> 0x3f) - ((int)uVar2 >> 0x1f)) * 2);
      NewPVPShopButton::InitView(*(NewPVPShopButton **)(this + 0x1b0));
      FUN_03550354(*(long *)(this + 0x1b0) + 0x328,*(undefined8 *)(this + 0x120));
      CornucopiaShopButton::SetItemAmount((int)*(undefined8 *)(this + 0x1b0));
      pCVar12 = *(CustomLevelFilterItemWidget **)(this + 0x1b0);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,ClickCallback);
      Sexy::Delegate0::Delegate0<NewPVPShopCommonWidget,void(NewPVPShopCommonWidget::*)()>
                (aDStack_a8,(Insets *)&local_40);
      CustomLevelFilterItemWidget::SetClickFunc(pCVar12,aDStack_a8);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1b0));
    }
    else {
      (**(code **)(*plVar8 + 0x158))(plVar8,1);
    }
    goto LAB_0355a5f8;
  }
  plVar8 = *(long **)(this + 0x1b0);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x158))(plVar8,0);
  }
LAB_0355a5f8:
  this_00 = (NameMapperBase *)NewPVPZombiePieceMapper::GetInstance();
  cVar3 = NameMapperBase::ContainsId(this_00,*(int *)(this + 0xd8));
  if (cVar3 != '\0') {
    iVar4 = NewPVPZombiePieceMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar4);
    iVar4 = FUN_03559970(*(undefined4 *)(this + 0xd8));
    this_01 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    std::string::string((string *)&local_40,"IMAGE_UI_PACKETS_ZOMBIE_NEW_PVP_");
    pPVar9 = (PacketRenderData *)
             SeedPacketUtils::GetZombiePacketRenderData
                       (this_01,asStack_e0,(string *)&local_40,iVar4);
    std::string::~string((string *)&local_40);
    nop();
    pDVar10 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_01,pPVar9,0,0);
    SeedPacketUtils::DrawPacketToDeviceImage(this_01,pDVar10,pPVar9,false,-1,false,false);
    *(DeviceImage **)(this + 0x108) = pDVar10;
    CommonRewardItemWidget::SetBgImageRare((CommonRewardItemWidget *)this,false,iVar4);
    this[0x198] = (NewPVPShopCommonWidget)0x1;
    Sexy::StrFormat("x%d",aSStack_78,(ulong)*(uint *)(this + 0xdc));
    Sexy::ToSexyString(aSStack_78,extraout_x1);
    FUN_054766c8(this + 0x1a0,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    std::string::~string((string *)aSStack_78);
    FUN_031f5e7c(aSStack_d8,"zombie_",asStack_e0);
    Sexy::StringToUpper(aSStack_d8,extraout_x1_00);
    std::operator+("[",asStack_d0);
    std::operator+(asStack_c8,"]");
    Sexy::ToSexyString(aSStack_c0,extraout_x1_01);
    TodStringTranslate(awStack_b8);
    TodStringTranslate(L"[NEW_PVP_ZOMBIE_CARD]");
    std::operator+(awStack_b0,(wstring *)aSStack_78);
    FUN_054766c8(this + 0x100,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    FUN_05476c50(aSStack_78);
    FUN_05476c50(awStack_b0);
    FUN_05476c50(awStack_b8);
    std::string::~string((string *)aSStack_c0);
    std::string::~string(asStack_c8);
    std::string::~string(asStack_d0);
    std::string::~string((string *)aSStack_d8);
    std::string::~string(asStack_e0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPShopCommonWidget::Draw(Sexy::Graphics*) */

void __thiscall NewPVPShopCommonWidget::Draw(NewPVPShopCommonWidget *this,Graphics *param_1)

{
  NewPVPShopCommonWidget NVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Image *pIVar7;
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(Image **)(this + 0x178) == (Image *)0x0) {
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa5ef0);
    Sexy::Graphics::DrawImage
              (param_1,pIVar7,0,0,*(int *)(this + 0x50),
               *(int *)(this + 0x54) + *(int *)(this + 0x1a8));
  }
  else {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x178),0,0,*(int *)(this + 0x50),
               *(int *)(this + 0x54) + *(int *)(this + 0x1a8));
  }
  iVar2 = FUN_03551df0(0x19);
  Sexy::Insets::Insets((Insets *)&local_28,0,0,*(int *)(this + 0x50),iVar2);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x100,(Insets *)&local_28,uVar6,aIStack_18,5,1);
  if (*(long *)(this + 0x108) != 0) {
    iVar3 = FUN_03551df0(0x1e);
    iVar2 = *(int *)(this + 0xec);
    iVar4 = FUN_03551df0(5);
    Sexy::Insets::Insets
              (aIStack_18,iVar3 + iVar2,iVar4 + *(int *)(this + 0xf0),*(int *)(this + 0xf4),
               *(int *)(this + 0xf8));
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0x108));
  }
  if (this[0x198] == (NewPVPShopCommonWidget)0x0) {
    NVar1 = this[0x1b8];
  }
  else {
    iVar2 = *(int *)(this + 0x54);
    iVar3 = *(int *)(this + 0x50);
    iVar4 = *(int *)(this + 0x1a8);
    iVar5 = FUN_03551df0(0x32);
    Sexy::Insets::Insets((Insets *)&local_28,iVar3 / 2,iVar4 + iVar2 / 2,iVar3 / 2,iVar5);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline)
    ;
    Sexy::Color::Color((Color *)aIStack_18,4);
    WriteWordInRect(param_1,this + 0x1a0,(Insets *)&local_28,uVar6,aIStack_18,3,1);
    NVar1 = this[0x1b8];
  }
  if (NVar1 == (NewPVPShopCommonWidget)0x0) {
    iVar2 = *(int *)(this + 0x184);
  }
  else {
    std::string::string((string *)aIStack_18,"IMAGE_UI_NEW_PVP_SHOP_MASK");
    pIVar7 = (Image *)StringHelper::ToImage((string *)aIStack_18,true);
    std::string::~string((string *)aIStack_18);
    nop();
    iVar2 = FUN_03551df0(0x12);
    iVar3 = FUN_03551df0(0x5a);
    iVar4 = FUN_03551df0(0xa2);
    iVar5 = FUN_03551df0(0x29);
    Sexy::Insets::Insets((Insets *)&local_28,iVar2,iVar3,iVar4,iVar5);
    Sexy::Graphics::DrawImage(param_1,pIVar7,local_28,local_24,local_20,local_1c);
    FUN_05478178(aIStack_18,L"[NEW_PVP_SHOP_ITEM_BUY_LIMIT]",auStack_30);
    TodReplaceNumberString((wstring *)aIStack_18,L"{NUM1}",*(int *)(this + 0x1c0));
    FUN_05476c50(aIStack_18);
    nop();
    TodReplaceNumberString(awStack_38,L"{NUM2}",*(int *)(this + 0x1bc));
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,auStack_30,(Insets *)&local_28,uVar6,aIStack_18,5,1);
    FUN_05476c50(auStack_30);
    FUN_05476c50(awStack_38);
    iVar2 = *(int *)(this + 0x184);
  }
  if (iVar2 == 2) {
    iVar4 = FUN_03551df0(0x1c);
    iVar2 = *(int *)(this + 0x54);
    iVar3 = *(int *)(this + 0x1a8);
    iVar5 = FUN_03551df0(0x19);
    Sexy::Insets::Insets((Insets *)&local_28,0,(iVar2 - iVar4) + iVar3,*(int *)(this + 0x50),iVar5);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 400,(Insets *)&local_28,uVar6,aIStack_18,5,1);
  }
  else if (this[0x138] != (NewPVPShopCommonWidget)0x0) {
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa60d8);
    iVar2 = FUN_03551df0(0x28);
    iVar3 = FUN_03551df0(0x50);
    iVar4 = FUN_03551df0(0x30);
    Sexy::Graphics::DrawImage(param_1,pIVar7,iVar2,iVar2,iVar3,iVar4);
  }
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

