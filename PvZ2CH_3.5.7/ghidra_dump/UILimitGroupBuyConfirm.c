// Class: UILimitGroupBuyConfirm


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitGroupBuyConfirm::GetLayoutName() */

void __thiscall UILimitGroupBuyConfirm::GetLayoutName(UILimitGroupBuyConfirm *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIConfirmBuy");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UILimitGroupBuyConfirm::~UILimitGroupBuyConfirm() */

void __thiscall UILimitGroupBuyConfirm::~UILimitGroupBuyConfirm(UILimitGroupBuyConfirm *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066ee5b0;
  *(undefined ***)this = &PTR_GetClass_066ee260;
  *(undefined ***)(this + 0x138) = &PTR_EditWidgetText_066ee5f8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<UILimitGroupBuyConfirm>::~UISingletonDialog
            ((UISingletonDialog<UILimitGroupBuyConfirm> *)this);
  return;
}


/* UILimitGroupBuyConfirm::~UILimitGroupBuyConfirm() */

void __thiscall UILimitGroupBuyConfirm::~UILimitGroupBuyConfirm(UILimitGroupBuyConfirm *this)

{
  ~UILimitGroupBuyConfirm(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitGroupBuyConfirm::OnCreate() */

void __thiscall UILimitGroupBuyConfirm::OnCreate(UILimitGroupBuyConfirm *this)

{
  bool bVar1;
  UIWidgetBackground *pUVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  bVar1 = local_8 == ___stack_chk_guard;
  *(int *)(pUVar2 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar2 + 0x50)) / 2;
  *(undefined8 *)(this + 0x158) = 0;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitGroupBuyConfirm::LoadData(LimitGroupBuyItemInfo const&, std::wstring) */

void __thiscall
UILimitGroupBuyConfirm::LoadData(UILimitGroupBuyConfirm *this,undefined8 *param_1,wstring *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UIWidgetText *pUVar5;
  UIWidgetText *pUVar6;
  CoinsNumsEditWidget *this_00;
  undefined8 uVar7;
  UIWidgetBackground *pUVar8;
  long *plVar9;
  code *pcVar10;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  uVar7 = param_1[1];
  *(undefined8 *)(this + 0x140) = *param_1;
  *(undefined8 *)(this + 0x148) = uVar7;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x150) = *(undefined4 *)(param_1 + 2);
  std::string::string(asStack_10,"UIText_1");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar5 != (UIWidgetText *)0x0) {
    FUN_05476574(awStack_20);
    if (*(int *)(this + 0x140) == 0xfad) {
      this_00 = ::operator_new(0x180);
      CoinsNumsEditWidget::CoinsNumsEditWidget(this_00,(EditListener *)(this + 0x138));
      *(CoinsNumsEditWidget **)(this + 0x158) = this_00;
      pcVar10 = *(code **)(*(long *)this_00 + 0x330);
      uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
      (*pcVar10)(this_00,uVar7,0);
      plVar9 = *(long **)(this + 0x158);
      *(undefined1 *)((long)plVar9 + 0x16c) = 1;
      uVar1 = FUN_039c2d44(0xb4);
      uVar2 = FUN_039c2d44(0x8e);
      uVar3 = FUN_039c2d44(0x28);
      (**(code **)(*plVar9 + 0x198))(plVar9,uVar1,uVar2,uVar3,uVar3);
      plVar9 = *(long **)(this + 0x158);
      pcVar10 = *(code **)(*plVar9 + 0x318);
      std::string::string(asStack_10,"1");
      (*pcVar10)(plVar9,asStack_10);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"Background_0");
      pUVar8 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
      (**(code **)(*(long *)pUVar8 + 0x60))(pUVar8,*(undefined8 *)(this + 0x158));
      std::string::~string(asStack_10);
      nop();
      FUN_05478178(awStack_18,L"[CONFIRM_BUY_3]",auStack_28);
      TodReplaceString(awStack_18,L"{ITEM}",param_3);
      FUN_054766c8(awStack_20,asStack_10);
      FUN_05476c50(asStack_10);
      FUN_05476c50(awStack_18);
      nop();
    }
    else {
      FUN_05478178(awStack_18,L"[CONFIRM_BUY_2]",auStack_28);
      TodReplaceNumberString(awStack_18,L"{NUMBER}",*(int *)(param_1 + 2));
      FUN_054766c8(awStack_20,asStack_10);
      FUN_05476c50(asStack_10);
      FUN_05476c50(awStack_18);
      nop();
      TodReplaceString(awStack_20,L"{ITEM}",param_3);
      FUN_054766c8(awStack_20,asStack_10);
      FUN_05476c50(asStack_10);
      std::string::string(asStack_10,"UIText_2");
      pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
      (**(code **)(*(long *)pUVar6 + 0x158))(pUVar6,0);
      std::string::~string(asStack_10);
      nop();
      uVar1 = FUN_039c2d44(0xbc);
      uVar2 = FUN_039c2d44(0x8e);
      uVar3 = FUN_039c2d44(0x100);
      uVar4 = FUN_039c2d44(0x28);
      (**(code **)(*(long *)pUVar5 + 0x198))(pUVar5,uVar1,uVar2,uVar3,uVar4);
    }
    PuzzleTip::SetTip(pUVar5,awStack_20);
    FUN_05476c50(awStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitGroupBuyConfirm::ButtonDepress(int) */

void __thiscall UILimitGroupBuyConfirm::ButtonDepress(UILimitGroupBuyConfirm *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIMessageBox *this_02;
  Image *pIVar3;
  long lVar4;
  NetworkMgr *this_03;
  long *plVar5;
  int local_19c;
  wstring awStack_198 [8];
  wstring awStack_190 [8];
  undefined1 auStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [368];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 1) {
    local_19c = param_1;
    if (*(int *)(this + 0x140) == 0xfad) {
      (**(code **)(**(long **)(this + 0x158) + 0x310))(asStack_180,*(long **)(this + 0x158));
      uVar2 = operator|(0x10,8);
      FUN_05462618(auStack_178,asStack_180,uVar2);
      std::string::~string(asStack_180);
      FUN_0544af48(auStack_178,&local_19c);
      FUN_054617bc(auStack_178);
    }
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar1 = PlayerInfo::GetMaterialNum(this_01,0xbc2);
    if (iVar1 < *(int *)(this + 0x150) * local_19c) {
      this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_02 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_02,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[GROUP_BUY_DAVE_TICKET_NOT_ENOUGH]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(this_02,awStack_190,awStack_198);
        std::string::string(asStack_180,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar3 = (Image *)StringHelper::ToImage(asStack_180,false);
        UIMessageBox::SetBackground(this_02,pIVar3);
        std::string::~string(asStack_180);
        nop();
        lVar4 = UIMessageBox::GetButtonCancel(this_02);
        thunk_FUN_05477b9c(lVar4 + 0xd8,auStack_188);
        FUN_05476c50(auStack_188);
        FUN_05476c50(awStack_190);
        FUN_05476c50(awStack_198);
      }
    }
    else {
      this_03 = (NetworkMgr *)NetworkMgr::Instance();
      plVar5 = (long *)NetworkMgr::GetNewNetWorkProcess(this_03);
      (**(code **)(*plVar5 + 0x370))
                (plVar5,3,*(undefined4 *)(this + 0x140),local_19c * *(int *)(this + 0x144),0xbc2,
                 local_19c * *(int *)(this + 0x150));
    }
  }
  else if (param_1 == 0x58) {
    UISingletonDialog<UILimitGroupBuyConfirm>::CloseDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UILimitGroupBuyConfirm::ButtonDepress(int) */

void __thiscall UILimitGroupBuyConfirm::ButtonDepress(UILimitGroupBuyConfirm *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UILimitGroupBuyConfirm::UILimitGroupBuyConfirm() */

void __thiscall UILimitGroupBuyConfirm::UILimitGroupBuyConfirm(UILimitGroupBuyConfirm *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UILimitGroupBuyConfirm>::UISingletonDialog
            ((UISingletonDialog<UILimitGroupBuyConfirm> *)this);
  Sexy::EditListener::EditListener((EditListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_066ee260;
  *(undefined **)(this + 0xd8) = &DAT_066ee5b0;
  *(undefined ***)(this + 0x138) = &PTR_EditWidgetText_066ee5f8;
  GachaItemInfo::GachaItemInfo((GachaItemInfo *)(this + 0x140));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLimitGroupBuyExchange);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,S2C_ShopItemPurchaseInfo_const*,Sexy::CBMemberTranslatorX<UILimitGroupBuyConfirm,void(UILimitGroupBuyConfirm::*)(bool,S2C_ShopItemPurchaseInfo_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyShopBuyFinishDetails,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* UILimitGroupBuyConfirm::OnLimitGroupBuyExchange(bool, S2C_ShopItemPurchaseInfo const*) */

void __thiscall
UILimitGroupBuyConfirm::OnLimitGroupBuyExchange
          (UILimitGroupBuyConfirm *this,bool param_1,S2C_ShopItemPurchaseInfo *param_2)

{
  int iVar1;
  undefined *puVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ProfileMgr *this_00;
  PlayerInfo *pPVar8;
  NameMapperBase *pNVar9;
  char *pcVar10;
  TGALogMgr *pTVar11;
  UILimitGroupBuy *this_01;
  UILimitGroupShowReward *this_02;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar12;
  ulong uVar13;
  vector *pvVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  size_t __n;
  string *__n_00;
  string *this_03;
  string *psVar18;
  string *psVar19;
  int local_104;
  int local_100;
  int local_fc;
  string asStack_f8 [8];
  string asStack_f0 [8];
  string asStack_e8 [8];
  string asStack_e0 [8];
  string asStack_d8 [8];
  string asStack_d0 [8];
  string asStack_c8 [8];
  string asStack_c0 [8];
  DropGroupNode aDStack_b8 [8];
  string asStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [16];
  string asStack_88 [8];
  undefined1 auStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [32];
  undefined8 local_48 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    if ((*(int *)(param_2 + 0x14) != 3) || (iVar7 = *(int *)(param_2 + 0x20), iVar7 != 0xbc2))
    goto LAB_039ca60c;
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_03 = asStack_c8;
    pPVar8 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    local_104 = PlayerInfo::GetMaterialNum(pPVar8,0xbc2);
    iVar6 = PlayerInfo::GetMaterialNum(pPVar8,0xbc2);
    PlayerInfo::SetMaterialNum(pPVar8,0xbc2,iVar6 - *(int *)(param_2 + 0x24));
    psVar19 = asStack_d0;
    DropGroupNode::DropGroupNode(aDStack_b8);
    FUN_0547570c(auStack_98,0x1e);
    std::string::append((string *)aDStack_b8,"2019_ARBOR_DAY",(size_t)psVar19);
    std::string::append(asStack_b0,"USE_CASH_BILL",(size_t)psVar19);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x150));
    FUN_05474278(auStack_a8,(string *)local_48);
    std::string::~string((string *)local_48);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x140));
    FUN_05474278(auStack_a0,(string *)local_48);
    std::string::~string((string *)local_48);
    local_100 = iVar7;
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_100);
    std::operator+(asStack_f8,",");
    std::to_string<ActivityTypeID>((ActivityTypeID *)(param_2 + 0x24));
    std::operator+(asStack_f0,asStack_e8);
    std::operator+(asStack_e0,",");
    local_fc = local_104 - *(int *)(param_2 + 0x24);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_fc);
    std::operator+(asStack_d8,asStack_d0);
    std::operator+(this_03,",");
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_104);
    std::operator+(asStack_c0,asStack_88);
    FUN_05474278(auStack_98,(string *)local_48);
    std::string::~string((string *)local_48);
    std::string::~string(asStack_88);
    std::string::~string(asStack_c0);
    std::string::~string(this_03);
    std::string::~string(asStack_d0);
    std::string::~string(asStack_d8);
    std::string::~string(asStack_e0);
    std::string::~string(asStack_e8);
    std::string::~string(asStack_f0);
    std::string::~string(asStack_f8);
    puVar2 = gMessageRouter;
    TGASecretStore::TGASecretStore((TGASecretStore *)local_48,(TGASecretStore *)aDStack_b8);
    __n = 0x93b;
    MessageRouter::Post<int,TrackInfo_const&,bool,int,TrackInfo,bool>
              ((MessageRouter *)puVar2,Message::CommonBuryInterface,0x93b,(string *)local_48,0);
    DropGroupNode::~DropGroupNode((DropGroupNode *)local_48);
    TGAPlantWarsData::TGAPlantWarsData((TGAPlantWarsData *)asStack_88);
    std::string::append(asStack_88,"2",__n);
    psVar19 = (string *)local_48;
    std::string::string(asStack_e0,"");
    nop();
    OtherServerNameMapper::GetInstance();
    cVar3 = FUN_039c2210(*(undefined4 *)(this + 0x140));
    if (cVar3 != '\0') {
      DString::DString((DString *)local_48,*(int *)(param_2 + 0x1c));
      pcVar10 = (char *)DString::c_str((DString *)local_48);
      std::string::append(asStack_70,pcVar10,(size_t)psVar19);
      DString::~DString((DString *)local_48);
    }
    pNVar9 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    bVar4 = NameMapperBase::ContainsId(pNVar9,*(int *)(param_2 + 0x18));
    psVar19 = (string *)(ulong)bVar4;
    if (bVar4 == 0) {
      psVar18 = psVar19;
      pNVar9 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
      bVar4 = NameMapperBase::ContainsId(pNVar9,*(int *)(param_2 + 0x18));
      __n_00 = (string *)(ulong)bVar4;
      if (bVar4 == 0) {
        ProfileChangeItemAmount(*(int *)(param_2 + 0x18),*(int *)(param_2 + 0x1c),false);
        GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_48);
      }
      else {
        iVar7 = AvatarNameMapperServerID::GetInstance();
        NameMapperBase::GetNameForId(iVar7);
        thunk_FUN_05475e00(asStack_e0,asStack_d8);
        bVar4 = PlayerInfo::IsPlantAvatarUnLocked(pPVar8,asStack_d8,0,0);
        __n_00 = (string *)(ulong)bVar4;
        if (bVar4 == 0) {
          PlayerInfo::UnlockPlantAvatar(pPVar8,asStack_d8,0);
          PlayerInfo::SetPlantAvatar(pPVar8,asStack_d8);
        }
        else {
          std::string::string(this_03,"iOS PvZ2 Avatar Store");
          std::string::string(asStack_c0,"Avatars");
          std::string::string((string *)local_48,"avatar");
          __n_00 = (string *)local_48;
          Magento::FindStoreProduct
                    ((Magento *)this_03,asStack_c0,(string *)local_48,asStack_d8,psVar18);
          std::string::~string((string *)local_48);
          nop();
          std::string::~string(asStack_c0);
          nop();
          std::string::~string(this_03);
          nop();
          bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_d0);
          if (bVar5) {
            pNVar9 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
            iVar7 = NameMapperBase::GetIdForName(pNVar9,asStack_d8);
            lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_d0);
            ProfileChangeItemAmount(iVar7,*(int *)(lVar16 + 0x90),false);
            GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_48);
            __n_00 = psVar19;
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_d0);
        }
        std::string::~string(asStack_d8);
      }
    }
    else {
      iVar7 = PlantNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar7);
      thunk_FUN_05475e00(asStack_e0,this_03);
      bVar4 = PlayerInfo::GetIsPlantUnlocked(pPVar8,this_03);
      if (bVar4 == 0) {
        PlayerInfo::UnlockPlant(pPVar8,this_03,true);
        __n_00 = (string *)(ulong)*(uint *)(param_2 + 0x1c);
        PlayerInfo::AddPlantStartLevel(pPVar8,this_03,*(uint *)(param_2 + 0x1c));
      }
      else {
        Magento::GetPlantLevelUp((Magento *)(ulong)bVar4);
        uVar13 = 0;
        do {
          uVar17 = uVar13;
          __n_00 = (string *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_c0);
          uVar13 = FUN_039c2694(*(undefined8 *)(__n_00 + 0x60),*(undefined8 *)(__n_00 + 0x68));
          if (uVar13 <= uVar17) goto LAB_039cabe4;
          lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_c0);
          pRVar12 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    FUN_039c26a0(*(undefined8 *)(lVar16 + 0x60),uVar17);
          lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar12);
          cVar3 = std::operator==((string *)(lVar16 + 0x80),this_03);
          uVar13 = uVar17 + 1;
        } while (cVar3 == '\0');
        if (*(int *)(param_2 + 0x1c) < 1) {
          iVar7 = 0;
        }
        else {
          iVar6 = 1;
          iVar7 = 0;
          lVar16 = -1;
          do {
            if (iVar6 < 2) {
              lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_c0);
              pRVar12 = (RtWeakPtr<Sexy::ResourceInfo> *)
                        FUN_039c26a0(*(undefined8 *)(lVar15 + 0x60),uVar17);
              lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar12);
              iVar1 = *(int *)(lVar15 + 0x90);
            }
            else {
              lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_c0);
              pRVar12 = (RtWeakPtr<Sexy::ResourceInfo> *)
                        FUN_039c26a0(*(undefined8 *)(lVar15 + 0x60),uVar17);
              pPVar8 = (PlayerInfo *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar12);
              pvVar14 = (vector *)PlayerInfo::GetPlantAvatarInfo(pPVar8);
              std::vector<LevelUpPriceData,std::allocator<LevelUpPriceData>>::vector
                        ((vector<LevelUpPriceData,std::allocator<LevelUpPriceData>> *)local_48,
                         pvVar14);
              lVar15 = FUN_039c26a8(local_48[0],lVar16);
              iVar1 = *(int *)(lVar15 + 4);
              std::vector<LevelUpPriceData,std::allocator<LevelUpPriceData>>::~vector
                        ((vector<LevelUpPriceData,std::allocator<LevelUpPriceData>> *)local_48);
            }
            iVar7 = iVar7 + iVar1;
            iVar6 = iVar6 + 1;
            lVar16 = lVar16 + 1;
          } while (iVar6 <= *(int *)(param_2 + 0x1c));
        }
        pNVar9 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
        iVar6 = NameMapperBase::GetIdForName(pNVar9,this_03);
        __n_00 = (string *)0x0;
        ProfileChangeItemAmount(iVar6,iVar7,false);
        GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_48);
LAB_039cabe4:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_c0)
        ;
      }
      std::string::~string(this_03);
    }
    cVar3 = FUN_0547419c(asStack_e0);
    if (cVar3 == '\0') {
      FUN_05475d88(asStack_c0,asStack_e0);
      FUN_05474278(auStack_80,asStack_c0);
      std::string::~string(asStack_c0);
    }
    else {
      DString::DString((DString *)local_48,*(int *)(param_2 + 0x18));
      pcVar10 = (char *)DString::c_str((DString *)local_48);
      std::string::string(asStack_c0,pcVar10);
      FUN_05474278(auStack_80,asStack_c0);
      std::string::~string(asStack_c0);
      nop();
      DString::~DString((DString *)local_48);
      __n_00 = this_03;
    }
    DString::DString((DString *)local_48,*(int *)(param_2 + 0x1c));
    pcVar10 = (char *)DString::c_str((DString *)local_48);
    std::string::append(asStack_78,pcVar10,(size_t)__n_00);
    DString::~DString((DString *)local_48);
    DString::DString((DString *)local_48,*(int *)(this + 0x150));
    pcVar10 = (char *)DString::c_str((DString *)local_48);
    std::string::append(asStack_68,pcVar10,(size_t)__n_00);
    DString::~DString((DString *)local_48);
    pTVar11 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogPurchaseData::TGALogPurchaseData
              ((TGALogPurchaseData *)local_48,(TGALogPurchaseData *)asStack_88);
    TGALogMgr::LogGroupBuy(pTVar11,(string *)local_48);
    TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)local_48);
    this_01 = (UILimitGroupBuy *)UISingletonDialog<UILimitGroupBuy>::GetSingletonPtr();
    if (this_01 != (UILimitGroupBuy *)0x0) {
      if (*(int *)(this + 0x140) == 0xfad) {
        UILimitGroupBuy::UpdateTicket(this_01);
      }
      else {
        UILimitGroupBuy::Refresh(this_01,false);
      }
    }
    this_02 = (UILimitGroupShowReward *)UISingletonDialog<UILimitGroupShowReward>::ShowDialog();
    UILimitGroupShowReward::LoadData(this_02,*(int *)(param_2 + 0x18),*(int *)(param_2 + 0x1c));
    std::string::~string(asStack_e0);
    TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)asStack_88);
    DropGroupNode::~DropGroupNode(aDStack_b8);
  }
  UISingletonDialog<UILimitGroupBuyConfirm>::CloseDialog();
LAB_039ca60c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

