// Class: ExchangeItemWidget


/* ExchangeItemWidget::~ExchangeItemWidget() */

void __thiscall ExchangeItemWidget::~ExchangeItemWidget(ExchangeItemWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0694f0b0;
  std::string::~string((string *)(this + 0x108));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100));
  FUN_05476c50(this + 0xf8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ExchangeItemWidget::~ExchangeItemWidget() */

void __thiscall ExchangeItemWidget::~ExchangeItemWidget(ExchangeItemWidget *this)

{
  ~ExchangeItemWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ExchangeItemWidget::ExchangeItemWidget(PvpExchangeDlg*) */

void __thiscall
ExchangeItemWidget::ExchangeItemWidget(ExchangeItemWidget *this,PvpExchangeDlg *param_1)

{
  undefined1 *__n;
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = auStack_10;
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_0694f0b0;
  FUN_05478178(this + 0xf8,&DAT_056f11a8);
  nop();
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x100));
  Set8BytesTo0((string *)(this + 0x108));
  *(PvpExchangeDlg **)(this + 0xd8) = param_1;
  std::string::append((string *)(this + 0x108),"",(size_t)__n);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ExchangeItemWidget::TouchEnded(Sexy::Touch const&) */

void __thiscall ExchangeItemWidget::TouchEnded(ExchangeItemWidget *this,Touch *param_1)

{
  int iVar1;
  PvpExchangeConfirmDlg *this_00;
  long lVar2;
  
  if ((*(int *)(this + 0xe0) == (int)*(undefined8 *)param_1) && (*(int *)(this + 0xf0) == 0)) {
    this_00 = (PvpExchangeConfirmDlg *)UISingletonDialog<PvpExchangeConfirmDlg>::ShowDialog();
    lVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar1 = FUN_04af2628(*(undefined4 *)(lVar2 + 0xc));
    if (iVar1 < *(int *)(this + 0xec)) {
      PvpExchangeConfirmDlg::SetConfirm(this_00,1);
      return;
    }
    PvpExchangeConfirmDlg::SetConfirmBuy
              (this_00,(PVPCUPData *)(this + 0xe4),(wstring *)(this + 0xf8));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ExchangeItemWidget::Draw(Sexy::Graphics*) */

void __thiscall ExchangeItemWidget::Draw(ExchangeItemWidget *this,Graphics *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Image *pIVar9;
  long lVar10;
  undefined8 uVar11;
  SeedPacketUtils *this_00;
  RtWeakPtr *pRVar12;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  ResourceInfo *pRVar13;
  string *extraout_x1;
  string *extraout_x1_00;
  Sexy aSStack_48 [8];
  wstring awStack_40 [8];
  Sexy aSStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81fb8);
  iVar3 = FUN_04af28b8(0);
  Sexy::Graphics::DrawImage(param_1,pIVar9,iVar3,iVar3,*(int *)(this + 0x50),*(int *)(this + 0x54));
  lVar10 = FUN_054765d0((wstring *)(this + 0xf8));
  if (lVar10 != 0) {
    Sexy::StrFormat("X%d",aSStack_48,(ulong)*(uint *)(this + 0xe8));
    Sexy::ToSexyString(aSStack_48,extraout_x1_00);
    std::operator+((wstring *)(this + 0xf8),awStack_40);
    Sexy::ToSexyString((wstring *)aSStack_38);
    iVar3 = FUN_04af28b8(0);
    iVar8 = FUN_04af28b8(3);
    iVar4 = FUN_04af28b8(0x23);
    Sexy::Insets::Insets(aIStack_28,iVar3,iVar8,*(int *)(this + 0x50),iVar4);
    uVar11 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar11,(Color *)aIStack_18,5,1);
    FUN_05476c50(auStack_30);
    FUN_05476c50((wstring *)aSStack_38);
    FUN_05476c50(awStack_40);
    std::string::~string((string *)aSStack_48);
  }
  iVar4 = FUN_04af28b8(0x23);
  iVar3 = *(int *)(this + 0x50);
  iVar5 = FUN_04af28b8(0x20);
  iVar8 = *(int *)(this + 0x54);
  iVar6 = FUN_04af28b8(100);
  iVar7 = FUN_04af28b8(0x18);
  Sexy::Insets::Insets(aIStack_18,iVar3 / 2 - iVar4,iVar8 - iVar5,iVar6,iVar7);
  uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81f00);
  Draw9SliceImage(param_1,aIStack_18,uVar11);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81f28);
  iVar4 = FUN_04af28b8(0x32);
  iVar3 = *(int *)(this + 0x50);
  iVar5 = FUN_04af28b8(0x25);
  iVar8 = *(int *)(this + 0x54);
  iVar6 = FUN_04af28b8(0x19);
  iVar7 = FUN_04af28b8(0x23);
  Sexy::Graphics::DrawImage(param_1,pIVar9,iVar3 / 2 - iVar4,iVar8 - iVar5,iVar6,iVar7);
  Sexy::StrFormat("%d",aSStack_38,(ulong)*(uint *)(this + 0xec));
  Sexy::ToSexyString(aSStack_38,extraout_x1);
  iVar8 = FUN_04af28b8(0x28);
  iVar3 = *(int *)(this + 0x54);
  iVar4 = FUN_04af28b8(0x78);
  Sexy::Insets::Insets(aIStack_28,*(int *)(this + 0x50) / 2,iVar3 - iVar8,iVar4,iVar8);
  uVar11 = PrimeText_Game::Typeface_FZCuYuan_20;
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar11,aIStack_18,3,1);
  FUN_05476c50(auStack_30);
  std::string::~string((string *)aSStack_38);
  cVar1 = FUN_0547419c((string *)(this + 0x108));
  if (cVar1 == '\0') {
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    pRVar12 = (RtWeakPtr *)
              SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(this + 0x108));
    iVar3 = *(int *)(this + 0x50);
    this_01 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81f58);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    iVar8 = *(int *)(this + 0x54);
    iVar3 = iVar3 / 2 - iVar4 / 2;
    this_02 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81f58);
    iVar5 = SalesProgressBar::GetCurrentLevel(this_02);
    iVar4 = FUN_04af28b8(5);
    iVar4 = (iVar8 / 2 - iVar5 / 2) - iVar4;
    pRVar13 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar12 + 0x170);
    Sexy::Insets::Insets
              (aIStack_18,iVar3 + *(int *)(pRVar12 + 0x30),iVar4 + *(int *)(pRVar12 + 0x34),
               *(int *)(pRVar12 + 0x28),*(int *)(pRVar12 + 0x2c));
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar13,(TRect *)aIStack_18,(TRect *)(pRVar12 + 0x20));
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar12);
    if (bVar2) {
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar12);
      pRVar13 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar10 + 0x48));
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar13,iVar3 + *(int *)(pRVar12 + 0x18),
                 iVar4 + *(int *)(pRVar12 + 0x1c),(TRect *)(pRVar12 + 8));
    }
  }
  else {
    pRVar12 = (RtWeakPtr *)(this + 0x100);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar12);
    if (bVar2) {
      pRVar13 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar12);
      iVar3 = *(int *)(this + 0x50);
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar12);
      iVar8 = *(int *)(lVar10 + 0x38);
      iVar4 = *(int *)(this + 0x54);
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar12);
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar13,iVar3 / 2 - iVar8 / 2,
                 iVar4 / 2 - *(int *)(lVar10 + 0x3c) / 2);
      iVar3 = *(int *)(this + 0xf0);
      goto joined_r0x04af36dc;
    }
  }
  iVar3 = *(int *)(this + 0xf0);
joined_r0x04af36dc:
  if (iVar3 == 1) {
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81f80);
    iVar3 = FUN_04af28b8(0xf);
    Sexy::Graphics::DrawImage(param_1,pIVar9,iVar3,iVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ExchangeItemWidget::SetShopData(PVPCUPData const&) */

void __thiscall ExchangeItemWidget::SetShopData(ExchangeItemWidget *this,PVPCUPData *param_1)

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
  pNVar4 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar4,*(int *)(this + 0xe4));
  if (cVar2 == '\0') {
    pNVar4 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsId(pNVar4,*(int *)(this + 0xe4));
    if (cVar2 == '\0') {
      pNVar4 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
      cVar2 = NameMapperBase::ContainsId(pNVar4,*(int *)(this + 0xe4));
      if (cVar2 != '\0') {
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
                      ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0x100),(RtId *)asStack_10);
            Sexy::RtId::~RtId((RtId *)asStack_10);
          }
          this_00 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
          PlantAccessoryMgr::GetAccessoryDisplayName(this_00,asStack_30);
          TodStringTranslate(L"[PIECE]");
          std::operator+((wstring *)asStack_20,(wstring *)aRStack_18);
          FUN_054766c8(this + 0xf8,asStack_10);
          FUN_05476c50(asStack_10);
          FUN_05476c50((wstring *)aRStack_18);
          FUN_05476c50((wstring *)asStack_20);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
        ;
        std::string::~string(asStack_30);
      }
      goto LAB_04af3a94;
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
                  ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0x100),(RtId *)asStack_10);
        Sexy::RtId::~RtId((RtId *)asStack_10);
      }
      iVar3 = *(int *)(this + 0xe4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      nop();
      getChipName(iVar3,(string *)(extraout_x0 + 0x98));
      FUN_054766c8(this + 0xf8,asStack_10);
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
                  ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0x100),(RtId *)asStack_10);
        Sexy::RtId::~RtId((RtId *)asStack_10);
      }
      iVar3 = *(int *)(this + 0xe4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      nop();
      getChipName(iVar3,(string *)(extraout_x0_00 + 0x98));
      FUN_054766c8(this + 0xf8,asStack_10);
      FUN_05476c50(asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      nop();
      thunk_FUN_05475e00(this + 0x108,extraout_x0_01 + 0x98);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
LAB_04af3a94:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

