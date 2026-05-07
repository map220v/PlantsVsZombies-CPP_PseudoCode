// Class: TGPiece


/* TGPiece::~TGPiece() */

void __thiscall TGPiece::~TGPiece(TGPiece *this)

{
  *(undefined ***)this = &PTR_GetClass_0697ad60;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* TGPiece::~TGPiece() */

void __thiscall TGPiece::~TGPiece(TGPiece *this)

{
  ~TGPiece(this);
  AK::FreeHook(this);
  return;
}


/* TGPiece::SetSelected(bool) */

void __thiscall TGPiece::SetSelected(TGPiece *this,bool param_1)

{
  this[0xdd] = (TGPiece)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPiece::Resize(Sexy::TRect<int> const&) */

void __thiscall TGPiece::Resize(TGPiece *this,TRect *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  long *plVar7;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 8);
  *(int *)(this + 0xf0) = iVar2;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(int *)(this + 0xf4) = iVar1;
  Sexy::Insets::Insets((Insets *)&local_18,0,(iVar1 << 1) / 3,iVar2,iVar1 / 3);
  *(undefined8 *)(this + 0x108) = local_18;
  *(undefined8 *)(this + 0x110) = uStack_10;
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b458);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b458);
  iVar4 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar5 = FUN_04bc5564(3);
  iVar1 = *(int *)(this + 0xf0);
  iVar2 = *(int *)(this + 0xf4);
  iVar6 = FUN_04bc5564(6);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(iVar1 - iVar3) / 2 - iVar5,(iVar2 - iVar4) / 2 - iVar5,
             iVar6 + iVar3,iVar4 + iVar6);
  plVar7 = *(long **)(this + 0xe0);
  *(undefined8 *)(this + 0xf8) = local_18;
  *(undefined8 *)(this + 0x100) = uStack_10;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x198))
              (plVar7,0,0,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPiece::TGPiece(int, Sexy::ButtonListener*, bool) */

void __thiscall TGPiece::TGPiece(TGPiece *this,int param_1,ButtonListener *param_2,bool param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  NameMapperBase *pNVar4;
  ProfileMgr *pPVar5;
  PlayerInfo *pPVar6;
  string *psVar7;
  long lVar8;
  undefined8 uVar9;
  PVZ2UIButton *this_00;
  string asStack_30 [8];
  string asStack_28 [8];
  RtMixedPtrBase aRStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(int *)(this + 0xd4) = param_1;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_0697ad60;
  this[0xdc] = (TGPiece)param_3;
  this[0xdd] = (TGPiece)0x0;
  *(undefined8 *)(this + 0xe0) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0xe8));
  Sexy::Insets::Insets((Insets *)(this + 0xf8));
  Sexy::Insets::Insets((Insets *)(this + 0x108));
  this[0x59] = (TGPiece)0x0;
  if (param_1 != 0) {
    FUN_05478178((wstring *)aRStack_20,&DAT_056f11a8,asStack_28);
    Sexy::Color::Color((Color *)asStack_18,1);
    this_00 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (this_00,param_1 + 1000000,param_2,(wstring *)aRStack_20,(Color *)asStack_18);
    *(PVZ2UIButton **)(this + 0xe0) = this_00;
    FUN_05476c50((wstring *)aRStack_20);
    nop();
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe0));
  }
  pNVar4 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar4,*(int *)(this + 0xd4));
  if (cVar1 == '\0') {
    pNVar4 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar4,*(int *)(this + 0xd4));
    if (cVar1 == '\0') {
      pNVar4 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
      cVar1 = NameMapperBase::ContainsId(pNVar4,*(int *)(this + 0xd4));
      if (cVar1 != '\0') {
        pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
        uVar3 = PlayerInfo::GetNewAvatarPiecesCount(pPVar6,*(int *)(this + 0xd4));
        *(undefined4 *)(this + 0xd8) = uVar3;
      }
    }
    else {
      iVar2 = AvatarChipNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar2);
      pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
      uVar3 = PlayerInfo::GetAvatarPiecesCount(pPVar6,asStack_30,0,0);
      *(undefined4 *)(this + 0xd8) = uVar3;
      Set8BytesTo0(asStack_28);
      psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr()
      ;
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar7);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
      if (cVar1 == '\0') {
        psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
        thunk_FUN_05475e00(asStack_28,lVar8 + 0x48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18)
        ;
      }
      else {
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        thunk_FUN_05475e00(asStack_28,lVar8 + 0x60);
      }
      uVar9 = StringHelper::ToImage(asStack_28,false);
      *(undefined8 *)(this + 0x118) = uVar9;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      std::string::~string(asStack_28);
      std::string::~string(asStack_30);
    }
  }
  else {
    iVar2 = PlantChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
    if (pPVar6 != (PlayerInfo *)0x0) {
      uVar3 = PlayerInfo::GetPlantPieceCount(pPVar6,asStack_18,false);
      *(undefined4 *)(this + 0xd8) = uVar3;
    }
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPiece::GetQuantity() */

void __thiscall TGPiece::GetQuantity(TGPiece *this)

{
  LawnApp *this_00;
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  iVar4 = *(int *)(this + 0xd8);
  if (this[0xdc] != (TGPiece)0x0) {
    iVar4 = 1;
  }
  cVar1 = LawnApp::IsTGPieceTableUIValid(gLawnApp);
  if (cVar1 == '\0') {
    cVar1 = LawnApp::IsTGAvatarPieceTableUIValid(this_00);
    if (cVar1 != '\0') {
      LawnApp::GetTGAvatarPieceTableUI(this_00);
      TGPieceTableUI::GetSelectedBoxIDs();
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(avStack_20);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(avStack_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar2) {
        piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        iVar4 = iVar4 - (uint)(*piVar3 == *(int *)(this + 0xd4));
        eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                  ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_30);
      }
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
    }
  }
  else {
    LawnApp::GetTGPieceTableUI(this_00);
    TGPieceTableUI::GetSelectedBoxIDs();
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2)
    {
      piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      iVar4 = iVar4 - (uint)(*piVar3 == *(int *)(this + 0xd4));
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_30);
    }
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPiece::Draw(Sexy::Graphics*) */

void __thiscall TGPiece::Draw(TGPiece *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  NameMapperBase *pNVar3;
  Image *pIVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar3 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar3,*(int *)(this + 0xd4));
  if (cVar1 == '\0') {
    pNVar3 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar3,*(int *)(this + 0xd4));
    if (cVar1 != '\0') goto LAB_04bd44c0;
    pNVar3 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar3,*(int *)(this + 0xd4));
    if (cVar1 == '\0') {
      Sexy::Color::Color((Color *)&local_18,1);
      local_c = 0x7f;
      Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
      Sexy::Graphics::SetColorizeImages(param_1,true);
      pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ad60);
      Sexy::Graphics::DrawImage(param_1,pIVar4,*(int *)(this + 0xe8),*(int *)(this + 0xec));
      Sexy::Graphics::SetColorizeImages(param_1,false);
      goto LAB_04bd4654;
    }
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ad60);
    Sexy::Graphics::DrawImage(param_1,pIVar4,*(int *)(this + 0xe8),*(int *)(this + 0xec));
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ad60);
    Sexy::Graphics::DrawImage(param_1,pIVar4,0,0);
    iVar2 = GetQuantity(this);
    if (iVar2 < 1) {
      Sexy::Color::Color((Color *)&local_18,1);
      local_c = 0x7f;
      Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
      Sexy::Graphics::SetColorizeImages(param_1,true);
    }
    Sexy::Insets::Insets((Insets *)&local_18,(Insets *)(this + 0xe8));
    uVar6 = NewAvatar::GetNewAvatarPieceImage(*(int *)(this + 0xd4));
    DrawAdaptiveImage(param_1,(Insets *)&local_18,uVar6);
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ac48);
    Sexy::Graphics::DrawImage
              (param_1,pIVar4,*(int *)(this + 0x108),*(int *)(this + 0x10c),*(int *)(this + 0x110),
               *(int *)(this + 0x114));
    uVar5 = GetQuantity(this);
    Sexy::StrFormat(L"%d",auStack_38,uVar5 & 0xffffffff);
    Sexy::Color::Color((Color *)&local_28,1);
    iVar2 = GetQuantity(this);
    if (iVar2 < 1) {
      Sexy::Color::Color((Color *)&local_18,2);
      uStack_20 = CONCAT44(local_c,uStack_10);
      local_28 = local_18;
      Sexy::Graphics::SetColorizeImages(param_1,false);
    }
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_28);
    WriteWordInRect(param_1,auStack_38,this + 0x108,uVar6,(Insets *)&local_18,5,1);
    if (this[0xdd] != (TGPiece)0x0) {
      pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b458);
      Sexy::Graphics::DrawImage
                (param_1,pIVar4,*(int *)(this + 0xf8),*(int *)(this + 0xfc),*(int *)(this + 0x100),
                 *(int *)(this + 0x104));
    }
    FUN_05478178(auStack_30,&DAT_056f11a8,auStack_40);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_28);
  }
  else {
LAB_04bd44c0:
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ad60);
    Sexy::Graphics::DrawImage(param_1,pIVar4,*(int *)(this + 0xe8),*(int *)(this + 0xec));
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ad60);
    Sexy::Graphics::DrawImage(param_1,pIVar4,0,0);
    iVar2 = GetQuantity(this);
    if (iVar2 < 1) {
      Sexy::Color::Color((Color *)&local_18,1);
      local_c = 0x7f;
      Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
      Sexy::Graphics::SetColorizeImages(param_1,true);
    }
    LawnApp::DrawPiecesInRect(gLawnApp,param_1,*(int *)(this + 0xd4),(TRect *)(this + 0xe8));
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ac48);
    Sexy::Graphics::DrawImage
              (param_1,pIVar4,*(int *)(this + 0x108),*(int *)(this + 0x10c),*(int *)(this + 0x110),
               *(int *)(this + 0x114));
    uVar5 = GetQuantity(this);
    Sexy::StrFormat(L"%d",auStack_38,uVar5 & 0xffffffff);
    Sexy::Color::Color((Color *)&local_28,1);
    iVar2 = GetQuantity(this);
    if (iVar2 < 1) {
      Sexy::Color::Color((Color *)&local_18,2);
      uStack_20 = CONCAT44(local_c,uStack_10);
      local_28 = local_18;
      Sexy::Graphics::SetColorizeImages(param_1,false);
    }
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_28);
    WriteWordInRect(param_1,auStack_38,this + 0x108,uVar6,(Insets *)&local_18,5,1);
    if (this[0xdd] != (TGPiece)0x0) {
      pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b458);
      Sexy::Graphics::DrawImage
                (param_1,pIVar4,*(int *)(this + 0xf8),*(int *)(this + 0xfc),*(int *)(this + 0x100),
                 *(int *)(this + 0x104));
    }
    FUN_05478178(auStack_30,&DAT_056f11a8,auStack_40);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_28);
  }
  WriteWordInRect(param_1,auStack_30,this + 0xe8,uVar6,&local_18,5,1);
  FUN_05476c50(auStack_30);
  nop();
  FUN_05476c50(auStack_38);
LAB_04bd4654:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

