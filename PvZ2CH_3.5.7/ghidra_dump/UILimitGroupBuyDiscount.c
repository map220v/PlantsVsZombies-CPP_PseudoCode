// Class: UILimitGroupBuyDiscount


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitGroupBuyDiscount::GetLayoutName() */

void __thiscall UILimitGroupBuyDiscount::GetLayoutName(UILimitGroupBuyDiscount *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UILimitGroupBuyDiscount");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UILimitGroupBuyDiscount::~UILimitGroupBuyDiscount() */

void __thiscall UILimitGroupBuyDiscount::~UILimitGroupBuyDiscount(UILimitGroupBuyDiscount *this)

{
  *(undefined ***)this = &PTR_GetClass_066edec0;
  *(undefined **)(this + 0xd8) = &DAT_066ee210;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<UILimitGroupBuyDiscount>::~UISingletonDialog
            ((UISingletonDialog<UILimitGroupBuyDiscount> *)this);
  return;
}


/* UILimitGroupBuyDiscount::~UILimitGroupBuyDiscount() */

void __thiscall UILimitGroupBuyDiscount::~UILimitGroupBuyDiscount(UILimitGroupBuyDiscount *this)

{
  ~UILimitGroupBuyDiscount(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitGroupBuyDiscount::UpdateTimerLabel() */

void __thiscall UILimitGroupBuyDiscount::UpdateTimerLabel(UILimitGroupBuyDiscount *this)

{
  int iVar1;
  UIWidgetText *pUVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_TIME");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  FUN_05476574(auStack_18);
  if (pUVar2 != (UIWidgetText *)0x0) {
    lVar3 = LawnApp::GetRealBeijingTime(gLawnApp);
    lVar3 = (lVar3 + 0x1c200) % 0x15180;
    lVar4 = 0x7e90 - lVar3;
    if (0x7e90 < lVar3) {
      lVar4 = 0x1d010 - lVar3;
    }
    iVar1 = (int)(lVar4 / 0x3c);
    Sexy::StrFormat(L"%02d: %02d: %02d",asStack_10,lVar4 / 0xe10 & 0xffffffff,
                    (ulong)(uint)(iVar1 + (int)((lVar4 / 0x3c) / 0x3c) * -0x3c),
                    (ulong)(uint)((int)lVar4 + iVar1 * -0x3c));
    FUN_054766c8(auStack_18,asStack_10);
    FUN_05476c50(asStack_10);
    PuzzleTip::SetTip(pUVar2,auStack_18);
  }
  FUN_05476c50(auStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UILimitGroupBuyDiscount::Update() */

void __thiscall UILimitGroupBuyDiscount::Update(UILimitGroupBuyDiscount *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  UpdateTimerLabel(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitGroupBuyDiscount::ButtonDepress(int) */

void __thiscall UILimitGroupBuyDiscount::ButtonDepress(UILimitGroupBuyDiscount *this,int param_1)

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
  if (param_1 == 4) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar1 = PlayerInfo::GetNumGems(this_01,false);
    if (iVar1 < *(int *)(this + 0x144)) {
      this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_02 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_02,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[GEM_NOT_ENOUGH_DIALOG_TITLE]");
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
                (plVar4,3,*(undefined4 *)(this + 0x134),*(undefined4 *)(this + 0x138),0xbc0,
                 *(undefined4 *)(this + 0x144));
    }
  }
  else if (param_1 == 0x58) {
    UISingletonDialog<UILimitGroupBuyDiscount>::CloseDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UILimitGroupBuyDiscount::ButtonDepress(int) */

void __thiscall UILimitGroupBuyDiscount::ButtonDepress(UILimitGroupBuyDiscount *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitGroupBuyDiscount::LoadData(LimitGroupBuyItemInfo const&) */

void __thiscall
UILimitGroupBuyDiscount::LoadData(UILimitGroupBuyDiscount *this,LimitGroupBuyItemInfo *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UIWidgetBackground *pUVar5;
  UIWidgetImage *pUVar6;
  UIWidgetImage *pUVar7;
  UIWidgetText *this_00;
  PVZ2UIButton *pPVar8;
  undefined8 uVar9;
  LimitGroupBuyGridItemUIButton *this_01;
  long lVar10;
  long *plVar11;
  code *pcVar12;
  int local_88;
  int local_84;
  string asStack_80 [8];
  string asStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  uVar9 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x134) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x13c) = uVar9;
  iVar1 = *(int *)(param_1 + 0xc);
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(param_1 + 0x10);
  std::string::string(asStack_40,"Background_0");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"UIImage_bar");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"UIImage_barBG");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  lVar10 = *(long *)(this + 0x148);
  *(int *)(pUVar6 + 0x50) = (int)((float)*(int *)(pUVar7 + 0x50) * 0.2 * (float)(10 - iVar1));
  if (lVar10 != 0) {
    (**(code **)(*(long *)pUVar5 + 0x68))(pUVar5);
    *(undefined8 *)(this + 0x148) = 0;
  }
  if (*(int *)(this + 0x13c) == 2) {
    this_01 = ::operator_new(0x340);
    LimitGroupBuyGridItemUIButton::LimitGroupBuyGridItemUIButton
              (this_01,4,(ButtonListener *)(this + 0xd8));
    FUN_05478178(asStack_40,L"[GROUP_BUY_USE_GEM]",asStack_80);
    TodReplaceNumberString((wstring *)asStack_40,L"{NUMBER}",*(int *)(this + 0x144));
    FUN_05476c50(asStack_40);
    nop();
    LimitGroupBuyGridItemUIButton::setText((wstring *)this_01);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06ac0b08);
    LimitGroupBuyGridItemUIButton::setImage(this_01,asStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
    FUN_039c2220(this_01 + 800,uVar9);
    *(LimitGroupBuyGridItemUIButton **)(this + 0x148) = this_01;
    FUN_05476c50(asStack_78);
  }
  else {
    if (*(int *)(this + 0x13c) != 3) goto LAB_039c4c8c;
    TodStringTranslate(L"[GROUP_BUY_SUCCESS]");
    Sexy::Color::Color((Color *)asStack_40,1);
    pPVar8 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar8,4,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)asStack_40);
    *(PVZ2UIButton **)(this + 0x148) = pPVar8;
    FUN_05476c50(asStack_78);
    (**(code **)(**(long **)(this + 0x148) + 0x188))(*(long **)(this + 0x148),1);
  }
  pPVar8 = *(PVZ2UIButton **)(this + 0x148);
  if (pPVar8 != (PVZ2UIButton *)0x0) {
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ac0aa8,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06ac0d00,3);
    PVZ2UIButton::SetDialogStates(pPVar8,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)asStack_40);
    plVar11 = *(long **)(this + 0x148);
    pcVar12 = *(code **)(*plVar11 + 800);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_40_ThickOutline)
    ;
    (*pcVar12)(plVar11,uVar9);
    plVar11 = *(long **)(this + 0x148);
    pcVar12 = *(code **)(*plVar11 + 0x1a0);
    iVar1 = FUN_039c2d44(0x104);
    iVar2 = FUN_039c2d44(0x1cc);
    iVar3 = FUN_039c2d44(0xe6);
    iVar4 = FUN_039c2d44(0x46);
    Sexy::Insets::Insets((Insets *)asStack_40,iVar1,iVar2,iVar3,iVar4);
    (*pcVar12)(plVar11,asStack_40);
    (**(code **)(*(long *)pUVar5 + 0x60))(pUVar5,*(undefined8 *)(this + 0x148));
  }
LAB_039c4c8c:
  local_88 = 5;
  do {
    while( true ) {
      if (local_88 == *(int *)(param_1 + 0xc)) {
        std::string::string(asStack_78,"UIImage_D");
        nop();
        std::to_string<ActivityTypeID>((ActivityTypeID *)&local_88);
        thunk_FUN_054757c0(asStack_78,asStack_40);
        std::string::~string(asStack_40);
        pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_78);
        if (pUVar6 != (UIWidgetImage *)0x0) {
          std::string::string(asStack_40,"IMAGE_UI_LIMITGROUPBUY_TEXT_BG_COLOR");
          UIWidgetImage::SetImage(pUVar6,asStack_40);
          std::string::~string(asStack_40);
          nop();
        }
        std::string::~string(asStack_78);
      }
      local_84 = *(int *)(param_1 + 0x10) - (*(int *)(param_1 + 0x10) * local_88) / 10;
      std::string::string(asStack_80,"UIText_G");
      nop();
      std::to_string<ActivityTypeID>((ActivityTypeID *)&local_88);
      thunk_FUN_054757c0(asStack_80,asStack_40);
      std::string::~string(asStack_40);
      this_00 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_80);
      if (this_00 != (UIWidgetText *)0x0) {
        std::to_string<ActivityTypeID>((ActivityTypeID *)&local_84);
        UIWidgetText::SetString(this_00,asStack_40);
        std::string::~string(asStack_40);
      }
      if (local_88 < *(int *)(param_1 + 0xc)) break;
      std::string::string(asStack_78,"UIImage_STRIP_");
      nop();
      std::to_string<ActivityTypeID>((ActivityTypeID *)&local_88);
      thunk_FUN_054757c0(asStack_78,asStack_40);
      std::string::~string(asStack_40);
      pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_78);
      if (pUVar6 != (UIWidgetImage *)0x0) {
        std::string::string(asStack_40,"IMAGE_UI_LIMITGROUPBUY_STRIP_LIGHT");
        UIWidgetImage::SetImage(pUVar6,asStack_40);
        std::string::~string(asStack_40);
        nop();
      }
      std::string::~string(asStack_78);
      std::string::~string(asStack_80);
      local_88 = local_88 + 1;
      if (9 < local_88) goto LAB_039c4e38;
    }
    std::string::~string(asStack_80);
    local_88 = local_88 + 1;
  } while (local_88 < 10);
LAB_039c4e38:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UILimitGroupBuyDiscount::UILimitGroupBuyDiscount() */

void __thiscall UILimitGroupBuyDiscount::UILimitGroupBuyDiscount(UILimitGroupBuyDiscount *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UILimitGroupBuyDiscount>::UISingletonDialog
            ((UISingletonDialog<UILimitGroupBuyDiscount> *)this);
  *(undefined ***)this = &PTR_GetClass_066edec0;
  *(undefined **)(this + 0xd8) = &DAT_066ee210;
  GachaItemInfo::GachaItemInfo((GachaItemInfo *)(this + 0x134));
  *(undefined8 *)(this + 0x148) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLimitGroupBuyFinish);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,S2C_ShopItemPurchaseInfo_const*,Sexy::CBMemberTranslatorX<UILimitGroupBuyDiscount,void(UILimitGroupBuyDiscount::*)(bool,S2C_ShopItemPurchaseInfo_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyShopBuyFinishDetails,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitGroupBuyDiscount::OnLimitGroupBuyFinish(bool, S2C_ShopItemPurchaseInfo const*) */

void __thiscall
UILimitGroupBuyDiscount::OnLimitGroupBuyFinish
          (UILimitGroupBuyDiscount *this,bool param_1,S2C_ShopItemPurchaseInfo *param_2)

{
  int iVar1;
  undefined *puVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *pNVar8;
  char *pcVar9;
  TGALogMgr *pTVar10;
  UILimitGroupBuy *this_02;
  UILimitGroupShowReward *this_03;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar11;
  ulong uVar12;
  PlayerInfo *this_04;
  vector *pvVar13;
  long lVar14;
  long lVar15;
  size_t sVar16;
  string *__n;
  ulong uVar17;
  string *psVar18;
  string *psVar19;
  string asStack_f8 [24];
  string asStack_e0 [8];
  string asStack_d8 [8];
  RtWeakPtr aRStack_d0 [8];
  string asStack_c8 [8];
  string asStack_c0 [8];
  DropGroupNode aDStack_b8 [8];
  string asStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  TGAPlantWarsData aTStack_88 [8];
  undefined1 auStack_80 [8];
  string asStack_78 [32];
  string asStack_58 [16];
  undefined8 local_48 [8];
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    if ((*(int *)(param_2 + 0x14) == 3) && (*(int *)(param_2 + 0x20) == 0xbc0)) {
      sVar16 = ___stack_chk_guard;
      DropGroupNode::DropGroupNode(aDStack_b8);
      std::string::append((string *)aDStack_b8,"2019_ARBOR_DAY",sVar16);
      std::string::append(asStack_b0,"JOIN_GROUP_BUYING",sVar16);
      std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x134));
      FUN_05474278(auStack_a8,(string *)local_48);
      std::string::~string((string *)local_48);
      std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x138));
      FUN_05474278(auStack_a0,(string *)local_48);
      std::string::~string((string *)local_48);
      puVar2 = gMessageRouter;
      TGASecretStore::TGASecretStore((TGASecretStore *)local_48,(TGASecretStore *)aDStack_b8);
      sVar16 = 0x939;
      MessageRouter::Post<int,TrackInfo_const&,bool,int,TrackInfo,bool>
                ((MessageRouter *)puVar2,Message::CommonBuryInterface,0x939,(string *)local_48,0);
      DropGroupNode::~DropGroupNode((DropGroupNode *)local_48);
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      TGAPlantWarsData::TGAPlantWarsData(aTStack_88);
      std::string::append((string *)aTStack_88,"3",sVar16);
      std::string::string(asStack_e0,"");
      nop();
      iVar6 = PlayerInfo::GetNumGems(this_01,false);
      PlayerInfo::SetGems(this_01,iVar6 - *(int *)(param_2 + 0x24));
      pNVar8 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
      bVar3 = NameMapperBase::ContainsId(pNVar8,*(int *)(param_2 + 0x18));
      psVar19 = (string *)(ulong)bVar3;
      if (bVar3 == 0) {
        pNVar8 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
        bVar3 = NameMapperBase::ContainsId(pNVar8,*(int *)(param_2 + 0x18));
        __n = (string *)(ulong)bVar3;
        if (bVar3 == 0) {
          ProfileChangeItemAmount(*(int *)(param_2 + 0x18),*(int *)(param_2 + 0x1c),false);
          GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_48);
        }
        else {
          iVar6 = AvatarNameMapperServerID::GetInstance();
          NameMapperBase::GetNameForId(iVar6);
          thunk_FUN_05475e00(asStack_e0,asStack_d8);
          bVar3 = PlayerInfo::IsPlantAvatarUnLocked(this_01,asStack_d8,0,0);
          __n = (string *)(ulong)bVar3;
          if (bVar3 == 0) {
            PlayerInfo::UnlockPlantAvatar(this_01,asStack_d8,0);
            PlayerInfo::SetPlantAvatar(this_01,asStack_d8);
          }
          else {
            psVar18 = asStack_f8;
            std::string::string(asStack_c8,"iOS PvZ2 Avatar Store");
            std::string::string(asStack_c0,"Avatars");
            std::string::string((string *)local_48,"avatar");
            __n = (string *)local_48;
            Magento::FindStoreProduct
                      ((Magento *)asStack_c8,asStack_c0,(string *)local_48,asStack_d8,psVar18);
            std::string::~string((string *)local_48);
            nop();
            std::string::~string(asStack_c0);
            nop();
            std::string::~string(asStack_c8);
            nop();
            bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_d0);
            if (bVar4) {
              pNVar8 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
              iVar6 = NameMapperBase::GetIdForName(pNVar8,asStack_d8);
              lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0);
              ProfileChangeItemAmount(iVar6,*(int *)(lVar15 + 0x90),false);
              GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_48);
              __n = psVar19;
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0);
          }
          std::string::~string(asStack_d8);
        }
      }
      else {
        iVar6 = PlantNameMapperServerID::GetInstance();
        NameMapperBase::GetNameForId(iVar6);
        thunk_FUN_05475e00(asStack_e0,asStack_c8);
        bVar3 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_c8);
        if (bVar3 == 0) {
          PlayerInfo::UnlockPlant(this_01,asStack_c8,true);
          __n = (string *)(ulong)*(uint *)(param_2 + 0x1c);
          PlayerInfo::AddPlantStartLevel(this_01,asStack_c8,*(uint *)(param_2 + 0x1c));
        }
        else {
          Magento::GetPlantLevelUp((Magento *)(ulong)bVar3);
          uVar12 = 0;
          do {
            uVar17 = uVar12;
            __n = (string *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_c0);
            uVar12 = FUN_039c2694(*(undefined8 *)(__n + 0x60),*(undefined8 *)(__n + 0x68));
            if (uVar12 <= uVar17) goto LAB_039ca3e0;
            lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_c0);
            pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)
                      FUN_039c26a0(*(undefined8 *)(lVar15 + 0x60),uVar17);
            lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
            cVar5 = std::operator==((string *)(lVar15 + 0x80),asStack_c8);
            uVar12 = uVar17 + 1;
          } while (cVar5 == '\0');
          if (*(int *)(param_2 + 0x1c) < 1) {
            iVar6 = 0;
          }
          else {
            iVar7 = 1;
            iVar6 = 0;
            lVar15 = -1;
            do {
              if (iVar7 < 2) {
                lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_c0);
                pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)
                          FUN_039c26a0(*(undefined8 *)(lVar14 + 0x60),uVar17);
                lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
                iVar1 = *(int *)(lVar14 + 0x90);
              }
              else {
                lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_c0);
                pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)
                          FUN_039c26a0(*(undefined8 *)(lVar14 + 0x60),uVar17);
                this_04 = (PlayerInfo *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
                pvVar13 = (vector *)PlayerInfo::GetPlantAvatarInfo(this_04);
                std::vector<LevelUpPriceData,std::allocator<LevelUpPriceData>>::vector
                          ((vector<LevelUpPriceData,std::allocator<LevelUpPriceData>> *)local_48,
                           pvVar13);
                lVar14 = FUN_039c26a8(local_48[0],lVar15);
                iVar1 = *(int *)(lVar14 + 4);
                std::vector<LevelUpPriceData,std::allocator<LevelUpPriceData>>::~vector
                          ((vector<LevelUpPriceData,std::allocator<LevelUpPriceData>> *)local_48);
              }
              iVar6 = iVar6 + iVar1;
              iVar7 = iVar7 + 1;
              lVar15 = lVar15 + 1;
            } while (iVar7 <= *(int *)(param_2 + 0x1c));
          }
          pNVar8 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
          iVar7 = NameMapperBase::GetIdForName(pNVar8,asStack_c8);
          __n = (string *)0x0;
          ProfileChangeItemAmount(iVar7,iVar6,false);
          GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_48);
LAB_039ca3e0:
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_c0);
        }
        std::string::~string(asStack_c8);
      }
      cVar5 = FUN_0547419c(asStack_e0);
      if (cVar5 == '\0') {
        FUN_05475d88(asStack_c0,asStack_e0);
        FUN_05474278(auStack_80,asStack_c0);
        std::string::~string(asStack_c0);
      }
      else {
        __n = asStack_c8;
        DString::DString((DString *)local_48,*(int *)(this + 0x134));
        pcVar9 = (char *)DString::c_str((DString *)local_48);
        std::string::string(asStack_c0,pcVar9);
        FUN_05474278(auStack_80,asStack_c0);
        std::string::~string(asStack_c0);
        nop();
        DString::~DString((DString *)local_48);
      }
      DString::DString((DString *)local_48,*(int *)(this + 0x138));
      pcVar9 = (char *)DString::c_str((DString *)local_48);
      std::string::append(asStack_78,pcVar9,(size_t)__n);
      DString::~DString((DString *)local_48);
      DString::DString((DString *)local_48,*(int *)(param_2 + 0x24));
      pcVar9 = (char *)DString::c_str((DString *)local_48);
      std::string::append(asStack_58,pcVar9,(size_t)__n);
      DString::~DString((DString *)local_48);
      pTVar10 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogPurchaseData::TGALogPurchaseData
                ((TGALogPurchaseData *)local_48,(TGALogPurchaseData *)aTStack_88);
      TGALogMgr::LogGroupBuy(pTVar10,(string *)local_48);
      TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)local_48);
      this_02 = (UILimitGroupBuy *)UISingletonDialog<UILimitGroupBuy>::GetSingletonPtr();
      if (this_02 != (UILimitGroupBuy *)0x0) {
        UILimitGroupBuy::Refresh(this_02,false);
      }
      this_03 = (UILimitGroupShowReward *)UISingletonDialog<UILimitGroupShowReward>::ShowDialog();
      UILimitGroupShowReward::LoadData(this_03,*(int *)(param_2 + 0x18),*(int *)(param_2 + 0x1c));
      UISingletonDialog<UILimitGroupBuyDiscount>::CloseDialog();
      PlayerInfo::RecordGroupBuy(this_01,*(int *)(param_2 + 0x18));
      std::string::~string(asStack_e0);
      TGAPlantWarsData::~TGAPlantWarsData(aTStack_88);
      DropGroupNode::~DropGroupNode(aDStack_b8);
    }
  }
  else {
    LawnApp::ShowNetworkError(gLawnApp);
    UISingletonDialog<UILimitGroupBuyDiscount>::CloseDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

