// Class: ZShopItemWidget


/* ZShopItemWidget::SetZMatchType(ZMatch_Type) */

void __thiscall ZShopItemWidget::SetZMatchType(ZShopItemWidget *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x120) = param_2;
  return;
}


/* ZShopItemWidget::~ZShopItemWidget() */

void __thiscall ZShopItemWidget::~ZShopItemWidget(ZShopItemWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066c2d80;
  std::string::~string((string *)(this + 0x118));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108));
  FUN_05476c50(this + 0x100);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ZShopItemWidget::~ZShopItemWidget() */

void __thiscall ZShopItemWidget::~ZShopItemWidget(ZShopItemWidget *this)

{
  ~ZShopItemWidget(this);
  AK::FreeHook(this);
  return;
}


/* ZShopItemWidget::OnNotifyShopItemBuyFinish(int, int) */

void __thiscall
ZShopItemWidget::OnNotifyShopItemBuyFinish(ZShopItemWidget *this,int param_1,int param_2)

{
  TowerDefendUpgradeUI *this_00;
  
  if (*(int *)(this + 0xe4) == param_1) {
    *(undefined4 *)(this + 0xf0) = 1;
    this_00 = (TowerDefendUpgradeUI *)UISingletonDialog<ZMatchShopDlg>::GetSingletonPtr();
  }
  else {
    this_00 = (TowerDefendUpgradeUI *)UISingletonDialog<ZMatchShopDlg>::GetSingletonPtr();
  }
  if (this_00 != (TowerDefendUpgradeUI *)0x0) {
    TowerDefendUpgradeUI::SetSunCount(this_00,param_2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZShopItemWidget::ZShopItemWidget(ZMatchShopDlg*, ZMatch_Type) */

void __thiscall
ZShopItemWidget::ZShopItemWidget(ZShopItemWidget *this,undefined8 param_1,undefined4 param_3)

{
  undefined *puVar1;
  undefined8 *__n;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  __n = &local_20;
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_066c2d80;
  ZMatchShopData::ZMatchShopData((ZMatchShopData *)(this + 0xe4));
  FUN_05478178(this + 0x100,&DAT_056f11a8);
  nop();
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x108));
  *(undefined4 *)(this + 0x110) = 0;
  Set8BytesTo0((string *)(this + 0x118));
  *(undefined4 *)(this + 0x120) = param_3;
  *(undefined8 *)(this + 0xd8) = param_1;
  std::string::append((string *)(this + 0x118),"",(size_t)__n);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyShopItemBuyFinish);
  local_40 = local_20;
  uStack_38 = uStack_18;
  local_30 = local_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<ZShopItemWidget,void(ZShopItemWidget::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::ZMatchShopItemBuyFinish,&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZShopItemWidget::Draw(Sexy::Graphics*) */

void __thiscall ZShopItemWidget::Draw(ZShopItemWidget *this,Graphics *param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Image *pIVar10;
  long lVar11;
  ResourceInfo *pRVar12;
  SeedPacketUtils *this_00;
  RtWeakPtr *pRVar13;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  string *extraout_x1;
  string *extraout_x1_00;
  string asStack_40 [8];
  Sexy aSStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab9c68);
  iVar4 = FUN_0390e020(0);
  Sexy::Graphics::DrawImage(param_1,pIVar10,iVar4,iVar4,*(int *)(this + 0x50),*(int *)(this + 0x54))
  ;
  lVar11 = FUN_054765d0((wstring *)(this + 0x100));
  if (lVar11 != 0) {
    Sexy::ToSexyString((wstring *)(this + 0x100));
    iVar4 = FUN_0390e020(0);
    iVar9 = FUN_0390e020(4);
    iVar5 = FUN_0390e020(0x23);
    Sexy::Insets::Insets(aIStack_28,iVar4,iVar9,*(int *)(this + 0x50),iVar5);
    uVar1 = PrimeText_Game::Typeface_FZCuYuan_19_Outline;
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar1,aCStack_18,2,1);
    FUN_05476c50(auStack_30);
  }
  if (this[0xf4] == (ZShopItemWidget)0x0) {
    Sexy::StrFormat("[ZSHOP_ITEM_UNLOCK_%d]",asStack_40,(ulong)*(uint *)(this + 0x120));
    StringHelper::ToStringValue(asStack_40);
    Sexy::ToSexyString((wstring *)aSStack_38);
    iVar4 = FUN_0390e020(0);
    iVar9 = FUN_0390e020(0x7f);
    iVar5 = FUN_0390e020(0x23);
    Sexy::Insets::Insets(aIStack_28,iVar4,iVar9,*(int *)(this + 0x50),iVar5);
    uVar1 = PrimeText_Game::Typeface_FZCuYuan_20;
    Sexy::Color::Color(aCStack_18,0x66,0x37,0);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar1,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
    FUN_05476c50((wstring *)aSStack_38);
    std::string::~string(asStack_40);
  }
  else {
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab9b48);
    iVar5 = FUN_0390e020(0x3c);
    iVar4 = *(int *)(this + 0x50);
    iVar6 = FUN_0390e020(0x1e);
    iVar9 = *(int *)(this + 0x54);
    iVar7 = FUN_0390e020(0x78);
    iVar8 = FUN_0390e020(0x16);
    Sexy::Graphics::DrawImage(param_1,pIVar10,iVar4 / 2 - iVar5,iVar9 - iVar6,iVar7,iVar8);
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab9c08);
    iVar5 = FUN_0390e020(0x46);
    iVar4 = *(int *)(this + 0x50);
    iVar6 = FUN_0390e020(0x1f);
    iVar9 = *(int *)(this + 0x54);
    iVar7 = FUN_0390e020(0x1e);
    iVar8 = FUN_0390e020(0x17);
    Sexy::Graphics::DrawImage(param_1,pIVar10,iVar4 / 2 - iVar5,iVar9 - iVar6,iVar7,iVar8);
    Sexy::StrFormat("%d",aSStack_38,(ulong)*(uint *)(this + 0xec));
    Sexy::ToSexyString(aSStack_38,extraout_x1);
    iVar5 = FUN_0390e020(10);
    iVar4 = *(int *)(this + 0x50);
    iVar6 = FUN_0390e020(0x26);
    iVar9 = *(int *)(this + 0x54);
    iVar7 = FUN_0390e020(0x78);
    iVar8 = FUN_0390e020(0x28);
    Sexy::Insets::Insets(aIStack_28,iVar4 / 2 - iVar5,iVar9 - iVar6,iVar7,iVar8);
    uVar1 = PrimeText_Game::Typeface_FZCuYuan_20;
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar1,aCStack_18,3,1);
    FUN_05476c50(auStack_30);
    std::string::~string((string *)aSStack_38);
  }
  cVar2 = FUN_0547419c((string *)(this + 0x118));
  if (cVar2 != '\0') {
    pRVar13 = (RtWeakPtr *)(this + 0x108);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar13);
    if (bVar3) {
      if (*(int *)(this + 0x110) == 1) {
        iVar4 = FUN_0390e020(0x32);
        iVar9 = FUN_0390e020(0x2d);
        Sexy::Insets::Insets
                  ((Insets *)aCStack_18,iVar4,iVar9,iVar9 * -2 + *(int *)(this + 0x50),
                   iVar9 * -2 + *(int *)(this + 0x54));
        pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar13);
        DrawAdaptiveImage(param_1,aCStack_18,pRVar12);
      }
      else {
        pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar13);
        iVar6 = FUN_0390e020(0x32);
        iVar4 = *(int *)(this + 0x54);
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar13);
        iVar9 = *(int *)(lVar11 + 0x3c);
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar13);
        iVar5 = *(int *)(lVar11 + 0x38);
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar13);
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar12,iVar6,
                   (int)((double)(iVar4 / 2) - (double)(iVar9 / 2) * 0.8),(int)((double)iVar5 * 0.8)
                   ,(int)((double)*(int *)(lVar11 + 0x3c) * 0.8));
      }
      goto LAB_0390f024;
    }
  }
  this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  pRVar13 = (RtWeakPtr *)
            SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(this + 0x118));
  iVar4 = *(int *)(this + 0x50);
  this_01 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab9b80);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  iVar9 = *(int *)(this + 0x54);
  iVar4 = iVar4 / 2 - iVar5 / 2;
  this_02 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab9b80);
  iVar5 = SalesProgressBar::GetCurrentLevel(this_02);
  iVar9 = iVar9 / 2 - iVar5 / 2;
  pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar13 + 0x170);
  Sexy::Insets::Insets
            ((Insets *)aCStack_18,iVar4 + *(int *)(pRVar13 + 0x30),iVar9 + *(int *)(pRVar13 + 0x34),
             (int)((double)*(int *)(pRVar13 + 0x28) * 0.9),
             (int)((double)*(int *)(pRVar13 + 0x2c) * 0.9));
  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar12,(TRect *)aCStack_18,(TRect *)(pRVar13 + 0x20));
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar13);
  if (bVar3) {
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar13);
    pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar11 + 0x48));
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar12,iVar4 + *(int *)(pRVar13 + 0x18),
               iVar9 + *(int *)(pRVar13 + 0x1c),(TRect *)(pRVar13 + 8));
  }
LAB_0390f024:
  Sexy::StrFormat("X%d",aSStack_38,(ulong)*(uint *)(this + 0xe8));
  Sexy::ToSexyString(aSStack_38,extraout_x1_00);
  iVar4 = *(int *)(this + 0x50);
  iVar5 = FUN_0390e020(10);
  iVar6 = FUN_0390e020(8);
  iVar9 = *(int *)(this + 0x54);
  iVar7 = FUN_0390e020(0x1e);
  Sexy::Insets::Insets(aIStack_28,iVar4 / 2 - iVar5,iVar9 / 2 - iVar6,iVar4 / 2,iVar7);
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_26_Outline;
  Sexy::Color::Color(aCStack_18,0xff,0xff,0);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar1,aCStack_18,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string((string *)aSStack_38);
  if (*(int *)(this + 0xf0) == 1) {
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab9ba8);
    iVar4 = FUN_0390e020(0x23);
    Sexy::Graphics::DrawImage(param_1,pIVar10,iVar4,iVar4);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZShopItemWidget::TouchEnded(Sexy::Touch const&) */

void __thiscall ZShopItemWidget::TouchEnded(ZShopItemWidget *this,Touch *param_1)

{
  char cVar1;
  int iVar2;
  ZShopConfirmDlg *pZVar3;
  
  if (*(int *)(this + 0xe0) != (int)*(undefined8 *)param_1) {
    return;
  }
  if (*(int *)(this + 0xf0) != 0) {
    pZVar3 = (ZShopConfirmDlg *)UISingletonDialog<ZShopConfirmDlg>::ShowDialog();
    ZShopConfirmDlg::SetConfirm(pZVar3,3);
    return;
  }
  pZVar3 = (ZShopConfirmDlg *)UISingletonDialog<ZShopConfirmDlg>::ShowDialog();
  cVar1 = TimeChallengeEndLevelUI::IsFinished((TimeChallengeEndLevelUI *)this);
  if (cVar1 == '\0') {
    ZShopConfirmDlg::SetConfirm(pZVar3,3);
    return;
  }
  iVar2 = ZMatchShopDlg::getMatchCoin(*(ZMatchShopDlg **)(this + 0xd8));
  if (iVar2 < *(int *)(this + 0xec)) {
    ZShopConfirmDlg::SetConfirm(pZVar3,1);
    return;
  }
  ZShopConfirmDlg::SetConfirmBuy(pZVar3,(ZMatchShopData *)(this + 0xe4),(wstring *)(this + 0x100));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZShopItemWidget::SetShopData(ZMatchShopData const&) */

void __thiscall ZShopItemWidget::SetShopData(ZShopItemWidget *this,ZMatchShopData *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  NameMapperBase *pNVar4;
  string *psVar5;
  long extraout_x0;
  long lVar6;
  long extraout_x0_00;
  long extraout_x0_01;
  PlantAccessoryMgr *this_00;
  string asStack_30 [8];
  RtMixedPtrBase aRStack_28 [8];
  string asStack_20 [8];
  RtMixedPtrBase aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xe4) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xec) = uVar1;
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xf4) = *(undefined8 *)(param_1 + 0x10);
  std::string::append((string *)(this + 0x118),"",(size_t)(this + 0xe4));
  pNVar4 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar4,*(int *)(this + 0xe4));
  if (cVar2 == '\0') {
    pNVar4 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsId(pNVar4,*(int *)(this + 0xe4));
    if (cVar2 == '\0') {
      pNVar4 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
      cVar2 = NameMapperBase::ContainsId(pNVar4,*(int *)(this + 0xe4));
      if (cVar2 == '\0') {
        pNVar4 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
        cVar2 = NameMapperBase::ContainsId(pNVar4,*(int *)(this + 0xe4));
        if (cVar2 != '\0') {
          lVar6 = NewAvatar::GetNewAvatarPieceImage(*(int *)(this + 0xe4));
          if (lVar6 != 0) {
            Sexy::BaseResource::GetRtId();
            Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                      ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0x108),(RtId *)asStack_10);
            Sexy::RtId::~RtId((RtId *)asStack_10);
          }
          NewAvatar::GetAvatarInfoByAvatarPieceId(*(int *)(this + 0xe4));
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
          Sexy::ToWString((string *)(lVar6 + 0x48));
          TodStringTranslate((wstring *)aRStack_28);
          TodStringTranslate(L"[PIECE]");
          std::operator+((wstring *)asStack_20,(wstring *)aRStack_18);
          FUN_054766c8(this + 0x100,(RtId *)asStack_10);
          FUN_05476c50((RtId *)asStack_10);
          FUN_05476c50((wstring *)aRStack_18);
          FUN_05476c50((wstring *)asStack_20);
          FUN_05476c50((wstring *)aRStack_28);
          *(undefined4 *)(this + 0x110) = 1;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
        }
      }
      else {
        iVar3 = PlantAccessoryPieceMapper::GetInstance();
        NameMapperBase::GetNameForId(iVar3);
        psVar5 = (string *)
                 Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
        std::operator+(asStack_30,"_piece");
        ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar5);
        std::string::~string(asStack_10);
        cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
        if (cVar2 != '\0') {
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
          lVar6 = StringHelper::ToImage((string *)(lVar6 + 0x60),false);
          if (lVar6 != 0) {
            Sexy::BaseResource::GetRtId();
            Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                      ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0x108),(RtId *)asStack_10);
            Sexy::RtId::~RtId((RtId *)asStack_10);
          }
          this_00 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
          PlantAccessoryMgr::GetAccessoryDisplayName(this_00,asStack_30);
          TodStringTranslate(L"[PIECE]");
          std::operator+((wstring *)asStack_20,(wstring *)aRStack_18);
          FUN_054766c8(this + 0x100,asStack_10);
          FUN_05476c50(asStack_10);
          FUN_05476c50((wstring *)aRStack_18);
          FUN_05476c50((wstring *)asStack_20);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
        ;
        std::string::~string(asStack_30);
      }
      goto LAB_03910bf0;
    }
    iVar3 = AvatarChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    std::operator+("avatar_piece_",asStack_10);
    std::string::~string(asStack_10);
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar5);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
    if (cVar2 != '\0') {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      lVar6 = StringHelper::ToImage((string *)(lVar6 + 0x60),false);
      if (lVar6 != 0) {
        Sexy::BaseResource::GetRtId();
        Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                  ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0x108),(RtId *)asStack_10);
        Sexy::RtId::~RtId((RtId *)asStack_10);
      }
      iVar3 = *(int *)(this + 0xe4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      nop();
      getChipNameZShop(iVar3,(string *)(extraout_x0 + 0x98));
      FUN_054766c8(this + 0x100,asStack_10);
      FUN_05476c50(asStack_10);
    }
  }
  else {
    iVar3 = PlantChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    std::operator+("plant_piece_",asStack_10);
    std::string::~string(asStack_10);
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar5);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
    if (cVar2 != '\0') {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      lVar6 = StringHelper::ToImage((string *)(lVar6 + 0x60),false);
      if (lVar6 != 0) {
        Sexy::BaseResource::GetRtId();
        Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                  ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0x108),(RtId *)asStack_10);
        Sexy::RtId::~RtId((RtId *)asStack_10);
      }
      iVar3 = *(int *)(this + 0xe4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      nop();
      getChipNameZShop(iVar3,(string *)(extraout_x0_00 + 0x98));
      FUN_054766c8(this + 0x100,asStack_10);
      FUN_05476c50(asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      nop();
      thunk_FUN_05475e00((string *)(this + 0x118),extraout_x0_01 + 0x98);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
LAB_03910bf0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

