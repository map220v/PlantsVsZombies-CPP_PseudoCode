// Class: RecallItemWidget


/* RecallItemWidget::Resize(int, int, int, int) */

void __thiscall
RecallItemWidget::Resize(RecallItemWidget *this,int param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  
  if ((((*(int *)(this + 0x48) != param_1) || (*(int *)(this + 0x4c) != param_2)) ||
      (*(int *)(this + 0x50) != param_3)) || (*(int *)(this + 0x54) != param_4)) {
    (**(code **)(*(long *)this + 0xe0))();
    *(int *)(this + 0x48) = param_1;
    *(int *)(this + 0x4c) = param_2;
    pcVar1 = *(code **)(*(long *)this + 0xd8);
    *(int *)(this + 0x50) = param_3;
    *(int *)(this + 0x54) = param_4;
    (*pcVar1)(this);
    if (*(WidgetManager **)(this + 0x18) != (WidgetManager *)0x0) {
      Sexy::WidgetManager::RehupMouse(*(WidgetManager **)(this + 0x18));
      return;
    }
  }
  return;
}


/* RecallItemWidget::~RecallItemWidget() */

void __thiscall RecallItemWidget::~RecallItemWidget(RecallItemWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06984400;
  FUN_05476c50(this + 0xf8);
  std::string::~string((string *)(this + 0xf0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  FUN_05476c50(this + 0xe0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RecallItemWidget::~RecallItemWidget() */

void __thiscall RecallItemWidget::~RecallItemWidget(RecallItemWidget *this)

{
  ~RecallItemWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RecallItemWidget::RecallItemWidget() */

void __thiscall RecallItemWidget::RecallItemWidget(RecallItemWidget *this)

{
  undefined1 *__n;
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = auStack_10;
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06984400;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0xd4));
  FUN_05478178(this + 0xe0,&DAT_056f11a8,__n);
  nop();
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe8));
  Set8BytesTo0((string *)(this + 0xf0));
  FUN_05478178(this + 0xf8,&DAT_056f11a8);
  nop();
  std::string::append((string *)(this + 0xf0),"",(size_t)__n);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RecallItemWidget::Draw(Sexy::Graphics*) */

void __thiscall RecallItemWidget::Draw(RecallItemWidget *this,Graphics *param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  Image *pIVar8;
  long lVar9;
  SeedPacketUtils *this_00;
  RtWeakPtr *pRVar10;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  ResourceInfo *pRVar11;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f8f0);
  iVar4 = FUN_04c2eaf4(0);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar4,iVar4,*(int *)(this + 0x50),*(int *)(this + 0x54));
  lVar9 = FUN_054765d0(this + 0xe0);
  if (lVar9 != 0) {
    iVar4 = FUN_04c2eaf4(0);
    iVar6 = FUN_04c2eaf4(5);
    iVar5 = FUN_04c2eaf4(0x23);
    Sexy::Insets::Insets(aIStack_28,iVar4,iVar6,*(int *)(this + 0x50),iVar5);
    uVar1 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0xe0,aIStack_28,uVar1,(Color *)aIStack_18,5,1);
  }
  lVar9 = FUN_054765d0(this + 0xf8);
  if (lVar9 != 0) {
    iVar6 = FUN_04c2eaf4(0);
    iVar5 = FUN_04c2eaf4(0x2a);
    iVar4 = *(int *)(this + 0x54);
    iVar7 = FUN_04c2eaf4(0x23);
    Sexy::Insets::Insets(aIStack_28,iVar6,iVar4 - iVar5,*(int *)(this + 0x50),iVar7);
    uVar1 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0xf8,aIStack_28,uVar1,(Color *)aIStack_18,5,1);
  }
  cVar2 = FUN_0547419c((string *)(this + 0xf0));
  if (cVar2 == '\0') {
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    pRVar10 = (RtWeakPtr *)
              SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(this + 0xf0));
    iVar4 = *(int *)(this + 0x50);
    this_01 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8fb10);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    iVar6 = *(int *)(this + 0x54);
    iVar4 = iVar4 / 2 - iVar5 / 2;
    this_02 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8fb10);
    iVar5 = SalesProgressBar::GetCurrentLevel(this_02);
    iVar6 = iVar6 / 2 - iVar5 / 2;
    pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar10 + 0x170);
    Sexy::Insets::Insets
              (aIStack_18,iVar4 + *(int *)(pRVar10 + 0x30),iVar6 + *(int *)(pRVar10 + 0x34),
               *(int *)(pRVar10 + 0x28),*(int *)(pRVar10 + 0x2c));
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar11,(TRect *)aIStack_18,(TRect *)(pRVar10 + 0x20));
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar10);
    if (bVar3) {
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar10);
      pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar9 + 0x48));
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar11,iVar4 + *(int *)(pRVar10 + 0x18),
                 iVar6 + *(int *)(pRVar10 + 0x1c),(TRect *)(pRVar10 + 8));
    }
  }
  else {
    pRVar10 = (RtWeakPtr *)(this + 0xe8);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar10);
    if (bVar3) {
      pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar10);
      iVar4 = *(int *)(this + 0x50);
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar10);
      iVar6 = *(int *)(lVar9 + 0x38);
      iVar5 = *(int *)(this + 0x54);
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar10);
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar11,iVar4 / 2 - iVar6 / 2,
                 iVar5 / 2 - *(int *)(lVar9 + 0x3c) / 2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RecallItemWidget::SetShopData(RecallItemInfo const&) */

void RecallItemWidget::SetShopData(RecallItemInfo *param_1)

{
  char cVar1;
  int iVar2;
  NameMapperBase *pNVar3;
  string *psVar4;
  long extraout_x0;
  long lVar5;
  long extraout_x0_00;
  long extraout_x0_01;
  wchar_t *pwVar6;
  PlantAccessoryMgr *this;
  undefined8 *in_x1;
  int in_w3;
  string asStack_30 [8];
  RtMixedPtrBase aRStack_28 [8];
  string asStack_20 [8];
  RtMixedPtrBase aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  *(undefined8 *)(param_1 + 0xd4) = *in_x1;
  local_8 = ___stack_chk_guard;
  pNVar3 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar3,*(int *)(param_1 + 0xd4));
  if (cVar1 == '\0') {
    pNVar3 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar3,*(int *)(param_1 + 0xd4));
    if (cVar1 == '\0') {
      pNVar3 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
      cVar1 = NameMapperBase::ContainsId(pNVar3,*(int *)(param_1 + 0xd4));
      if (cVar1 == '\0') {
        OtherServerNameMapper::GetInstance();
        cVar1 = FUN_04c2e898(*(undefined4 *)(param_1 + 0xd4));
        if (cVar1 == '\0') {
          OtherServerNameMapper::GetInstance();
          cVar1 = FUN_04c2e888(*(undefined4 *)(param_1 + 0xd4));
          if (cVar1 == '\0') goto LAB_04c302dc;
          std::string::string((string *)aRStack_18,"IMAGE_UI_RECALLOFFER_COIN");
          GetImageByName((string *)aRStack_18);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)(param_1 + 0xe8),(RtWeakPtr *)asStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
          std::string::~string((string *)aRStack_18);
          nop();
          pwVar6 = L"[RECALL_OFFER_COIN]";
        }
        else {
          std::string::string((string *)aRStack_18,"IMAGE_UI_RECALLOFFER_GEM");
          GetImageByName((string *)aRStack_18);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)(param_1 + 0xe8),(RtWeakPtr *)asStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
          std::string::~string((string *)aRStack_18);
          nop();
          pwVar6 = L"[RECALL_OFFER_GEM]";
        }
        TodStringTranslate(pwVar6);
        FUN_054766c8(param_1 + 0xe0,asStack_10);
        FUN_05476c50(asStack_10);
      }
      else {
        iVar2 = PlantAccessoryPieceMapper::GetInstance();
        NameMapperBase::GetNameForId(iVar2);
        psVar4 = (string *)
                 Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
        std::operator+(asStack_30,"_piece");
        ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar4);
        std::string::~string(asStack_10);
        cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
        if (cVar1 != '\0') {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
          lVar5 = StringHelper::ToImage((string *)(lVar5 + 0x60),false);
          if (lVar5 != 0) {
            Sexy::BaseResource::GetRtId();
            Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                      ((RtWeakPtr<CthulhuPropertySheet> *)(param_1 + 0xe8),(RtId *)asStack_10);
            Sexy::RtId::~RtId((RtId *)asStack_10);
          }
          this = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
          PlantAccessoryMgr::GetAccessoryDisplayName(this,asStack_30);
          TodStringTranslate(L"[PIECE]");
          std::operator+((wstring *)asStack_20,(wstring *)aRStack_18);
          FUN_054766c8(param_1 + 0xe0,asStack_10);
          FUN_05476c50(asStack_10);
          FUN_05476c50((wstring *)aRStack_18);
          FUN_05476c50((wstring *)asStack_20);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
        ;
        std::string::~string(asStack_30);
      }
      goto LAB_04c302dc;
    }
    iVar2 = AvatarChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    std::operator+("avatar_piece_",asStack_10);
    std::string::~string(asStack_10);
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar4);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
    if (cVar1 != '\0') {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      lVar5 = StringHelper::ToImage((string *)(lVar5 + 0x60),false);
      if (lVar5 != 0) {
        Sexy::BaseResource::GetRtId();
        Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                  ((RtWeakPtr<CthulhuPropertySheet> *)(param_1 + 0xe8),(RtId *)asStack_10);
        Sexy::RtId::~RtId((RtId *)asStack_10);
      }
      iVar2 = *(int *)(param_1 + 0xd4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      nop();
      getItemName(iVar2,(string *)(extraout_x0 + 0x98));
      FUN_054766c8(param_1 + 0xe0,asStack_10);
      FUN_05476c50(asStack_10);
    }
  }
  else {
    iVar2 = PlantChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    std::operator+("plant_piece_",asStack_10);
    std::string::~string(asStack_10);
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar4);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
    if (cVar1 != '\0') {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      lVar5 = StringHelper::ToImage((string *)(lVar5 + 0x60),false);
      if (lVar5 != 0) {
        Sexy::BaseResource::GetRtId();
        Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                  ((RtWeakPtr<CthulhuPropertySheet> *)(param_1 + 0xe8),(RtId *)asStack_10);
        Sexy::RtId::~RtId((RtId *)asStack_10);
      }
      iVar2 = *(int *)(param_1 + 0xd4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      nop();
      getItemName(iVar2,(string *)(extraout_x0_00 + 0x98));
      FUN_054766c8(param_1 + 0xe0,asStack_10);
      FUN_05476c50(asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      nop();
      thunk_FUN_05475e00(param_1 + 0xf0,extraout_x0_01 + 0x98);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
LAB_04c302dc:
  std::string::string((string *)aRStack_18,"[RECALL_AMOUNT_TEXT]");
  StringHelper::ReplaceNumberString
            ((StringHelper *)aRStack_18,(string *)L"{NUMBER}",
             (wchar_t *)(ulong)*(uint *)(param_1 + 0xd8),in_w3);
  FUN_054766c8(param_1 + 0xf8,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

