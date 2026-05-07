// Class: AlmanacObjectButton


/* AlmanacObjectButton::~AlmanacObjectButton() */

void __thiscall AlmanacObjectButton::~AlmanacObjectButton(AlmanacObjectButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06731a40;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  Sexy::ButtonWidget::~ButtonWidget((ButtonWidget *)this);
  return;
}


/* AlmanacObjectButton::~AlmanacObjectButton() */

void __thiscall AlmanacObjectButton::~AlmanacObjectButton(AlmanacObjectButton *this)

{
  ~AlmanacObjectButton(this);
  AK::FreeHook(this);
  return;
}


/* AlmanacObjectButton::GetIsVisible() */

AlmanacObjectButton __thiscall AlmanacObjectButton::GetIsVisible(AlmanacObjectButton *this)

{
  AlmanacObjectButton AVar1;
  RtObject *this_00;
  
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  AVar1 = (AlmanacObjectButton)Sexy::RtObject::IsA<ZombieType>(this_00);
  if (!(bool)AVar1) {
    AVar1 = this[0x1a1];
  }
  return AVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlmanacObjectButton::RefreshUnlockStatus() */

void __thiscall AlmanacObjectButton::RefreshUnlockStatus(AlmanacObjectButton *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  bool bVar1;
  AlmanacObjectButton AVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ProfileMgr *pPVar6;
  PlayerInfo *pPVar7;
  RtObject *pRVar8;
  long lVar9;
  long extraout_x0;
  MagentoProductProps *this_01;
  WorldDataManager *this_02;
  string *in_x4;
  float fVar10;
  RtMixedPtrBase aRStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198);
  local_8 = ___stack_chk_guard;
  pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar6);
  pRVar8 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  bVar1 = Sexy::RtObject::IsA<PlantType>(pRVar8);
  if (bVar1) {
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    AVar2 = (AlmanacObjectButton)PlayerInfo::GetIsPlantUnlocked(pPVar7,(string *)(lVar9 + 8));
    this[0x1a3] = AVar2;
    if (AVar2 == (AlmanacObjectButton)0x0) {
      std::string::string(asStack_20,"iOS PvZ2 Coins Plants");
      std::string::string(asStack_18,"Plants");
      std::string::string(asStack_10,"plant");
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      Magento::FindStoreProduct
                ((Magento *)asStack_20,asStack_18,asStack_10,(string *)(lVar9 + 8),in_x4);
      std::string::~string(asStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      std::string::~string(asStack_20);
      nop();
      cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
      if (cVar3 != '\0') {
        this_01 = (MagentoProductProps *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
        fVar10 = (float)MagentoProductProps::GetPriceInUSD(this_01,false);
        if (fVar10 <= 0.0) {
          lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
          iVar4 = *(int *)(lVar9 + 0x90);
          lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
          iVar5 = PlayerInfo::GetPlantPieceCount(pPVar7,(string *)(lVar9 + 0x80),false);
          if (iVar5 < iVar4) goto LAB_03b46eb8;
        }
        this[0x1a2] = (AlmanacObjectButton)0x1;
      }
LAB_03b46eb8:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      nop();
      pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar6);
      cVar3 = ProfileUtils::HasUnlockedWorld((string *)(extraout_x0 + 0x38),pPVar7);
      if (cVar3 != '\0') {
        this_02 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
        lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        lVar9 = WorldDataManager::FindEventByLevelName(this_02,(string *)(lVar9 + 8));
        if ((lVar9 != 0) && (iVar4 = FUN_03b461b8(*(undefined4 *)(lVar9 + 0x14)), iVar4 == 3)) {
          this[0x1a1] = (AlmanacObjectButton)0x1;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      goto LAB_03b46db0;
    }
  }
  else {
    pRVar8 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    bVar1 = Sexy::RtObject::IsA<ZombieType>(pRVar8);
    if (bVar1) {
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      AVar2 = (AlmanacObjectButton)PlayerInfo::IsKilledZombie(pPVar7,(string *)(lVar9 + 8));
      this[0x1a3] = AVar2;
    }
LAB_03b46db0:
    if ((this[0x1a1] == (AlmanacObjectButton)0x0) && (this[0x1a3] == (AlmanacObjectButton)0x0)) {
      AVar2 = this[0x1a2];
      goto LAB_03b46d68;
    }
  }
  AVar2 = (AlmanacObjectButton)0x1;
LAB_03b46d68:
  this[0x1a1] = AVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AlmanacObjectButton::AlmanacObjectButton(int, Sexy::ButtonListener*,
   Sexy::RtWeakPtr<ObjectTypeDescriptor const>) */

void __thiscall
AlmanacObjectButton::AlmanacObjectButton
          (AlmanacObjectButton *this,int param_1,ButtonListener *param_2,RtWeakPtr *param_4)

{
  Sexy::ButtonWidget::ButtonWidget((ButtonWidget *)this,param_1,param_2);
  *(undefined ***)this = &PTR_GetClass_06731a40;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x198));
  this[0x1a0] = (AlmanacObjectButton)0x0;
  this[0x1a1] = (AlmanacObjectButton)0x0;
  this[0x1a2] = (AlmanacObjectButton)0x0;
  this[0x1a3] = (AlmanacObjectButton)0x0;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x198),param_4);
  RefreshUnlockStatus(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlmanacObjectButton::drawPlant(Sexy::Graphics*) */

void __thiscall AlmanacObjectButton::drawPlant(AlmanacObjectButton *this,Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtWeakPtr *this_01;
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SeedPacketUtils *this_02;
  long lVar6;
  ResourceInfo *pRVar7;
  LotteryResultProgressBar *pLVar8;
  SalesProgressBar *pSVar9;
  Image *pIVar10;
  ProfileMgr *this_03;
  PlayerInfo *this_04;
  long lVar11;
  NameMapperBase *this_05;
  ulong uVar12;
  undefined8 uVar13;
  PrimeTypeface *this_06;
  float fVar14;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1a3] == (AlmanacObjectButton)0x0) {
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Insets::Insets((Insets *)&local_18,0x80,0x80,0x80,0xff);
    Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
  }
  this_02 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar6 = SeedPacketUtils::GetPlantPacketRenderData(this_02,(string *)(lVar6 + 8),-1,-1,-1);
  this_01 = (RtWeakPtr *)(lVar6 + 0x170);
  if (this[0x1a0] == (AlmanacObjectButton)0x0) {
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
    Sexy::Insets::Insets
              ((Insets *)&local_18,*(int *)(lVar6 + 0x30),*(int *)(lVar6 + 0x34),
               *(int *)(lVar6 + 0x28),*(int *)(lVar6 + 0x2c));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar7,(TRect *)&local_18,(TRect *)(lVar6 + 0x20));
  }
  else {
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar7,*(int *)(lVar6 + 0x78),*(int *)(lVar6 + 0x7c),
               (TRect *)(lVar6 + 0x68));
  }
  if (this[0x1a1] == (AlmanacObjectButton)0x0) {
    bVar2 = CachedUIResourcePtr::operator_cast_to_bool((CachedUIResourcePtr *)&DAT_06acb078);
    if (bVar2) {
      pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb078);
      iVar5 = *(int *)(this + 0x50);
      pLVar8 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb078);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
      iVar1 = *(int *)(this + 0x54);
      pSVar9 = (SalesProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb078);
      iVar4 = SalesProgressBar::GetCurrentLevel(pSVar9);
      Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar5 - iVar3) / 2,(iVar1 - iVar4) / 2);
    }
  }
  else {
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar7,*(int *)(lVar6 + 0x18),*(int *)(lVar6 + 0x1c),
               (TRect *)(lVar6 + 8));
  }
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar7,*(int *)(lVar6 + 0xc0),*(int *)(lVar6 + 0xc4),
             (TRect *)(lVar6 + 0xb0));
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar7,*(int *)(lVar6 + 0xf0),*(int *)(lVar6 + 0xf4),
             (TRect *)(lVar6 + 0xe0));
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar7,*(int *)(lVar6 + 0xd8),*(int *)(lVar6 + 0xdc),
             (TRect *)(lVar6 + 200));
  Sexy::Graphics::SetColorizeImages(param_1,false);
  if (this[0x1a1] == (AlmanacObjectButton)0x0) {
LAB_03b47a14:
    if (this[0x1a0] != (AlmanacObjectButton)0x0) {
LAB_03b47bc4:
      pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar7,*(int *)(lVar6 + 0x138),*(int *)(lVar6 + 0x13c),
                 (TRect *)(lVar6 + 0x128));
    }
    if (this[0x1a1] == (AlmanacObjectButton)0x0) goto LAB_03b479a8;
    if (this[0x1a3] == (AlmanacObjectButton)0x0) goto LAB_03b4791c;
  }
  else {
    if (this[0x1a3] != (AlmanacObjectButton)0x0) {
      this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_04 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      iVar5 = PlayerInfo::GetPlantStarLevel(this_04,(string *)(lVar11 + 8),false);
      switch(iVar5) {
      case 1:
        CachedUIResourcePtr<Sexy::Image>::operator->
                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb4c0);
        break;
      case 2:
        CachedUIResourcePtr<Sexy::Image>::operator->
                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb1b8);
        break;
      case 3:
        CachedUIResourcePtr<Sexy::Image>::operator->
                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb4f8);
        break;
      case 4:
        CachedUIResourcePtr<Sexy::Image>::operator->
                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb238);
        break;
      case 5:
        CachedUIResourcePtr<Sexy::Image>::operator->
                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb570);
        break;
      default:
        if (iVar5 < 1) goto LAB_03b47a14;
      }
      pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
      Sexy::Insets::Insets
                ((Insets *)&local_18,*(int *)(lVar6 + 0x150),*(int *)(lVar6 + 0x154),
                 *(int *)(lVar6 + 0x148),*(int *)(lVar6 + 0x14c));
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar7,(TRect *)&local_18,(TRect *)(lVar6 + 0x140))
      ;
      goto LAB_03b47a14;
    }
    if (this[0x1a0] != (AlmanacObjectButton)0x0) goto LAB_03b47bc4;
LAB_03b4791c:
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_18);
    iVar5 = *(int *)(this + 0x50);
    pLVar8 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acaf50);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
    iVar4 = FUN_03b4642c(8);
    iVar1 = *(int *)(this + 0x54);
    local_18 = (float)((iVar5 - iVar3) - iVar4);
    pSVar9 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acaf50);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar9);
    iVar3 = FUN_03b4642c(4);
    local_14 = (float)((iVar1 - iVar5) - iVar3);
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acaf50);
    Sexy::Graphics::DrawImage(param_1,pIVar10,(int)local_18,(int)local_14);
    if (this[0x1a1] == (AlmanacObjectButton)0x0) goto LAB_03b479a8;
  }
  if (*(char *)(gLawnApp + 0x2a00) != '\0') {
    this_05 = (NameMapperBase *)PlantNameMapper::GetInstance();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    uVar12 = NameMapperBase::GetIdForName(this_05,(string *)(lVar6 + 8));
    Sexy::StrFormat(L"ID:%d",auStack_28,uVar12 & 0xffffffff);
    uVar13 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
    iVar5 = *(int *)(this + 0x54);
    this_06 = (PrimeTypeface *)
              PrimeText_PotentialTypeface::Typeface
                        (PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
    fVar14 = (float)Sexy::PrimeTypeface::GetLineHeight(this_06);
    iVar1 = *(int *)(this + 0x50);
    FUN_05477b24(auStack_20,auStack_28);
    Sexy::Color::Color((Color *)&local_18,4);
    Sexy::PrimeTypeface::DrawString_Line
              ((PrimeTypeface *)0x0,(float)iVar5 - fVar14,(float)iVar1,uVar13,param_1,auStack_20,1,
               (Color *)&local_18,0);
    FUN_05476c50(auStack_20);
    FUN_05476c50(auStack_28);
  }
LAB_03b479a8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlmanacObjectButton::drawZombie(Sexy::Graphics*) */

void __thiscall AlmanacObjectButton::drawZombie(AlmanacObjectButton *this,Graphics *param_1)

{
  AlmanacObjectButton AVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  SalesProgressBar *pSVar9;
  Image *pIVar10;
  undefined8 uVar11;
  LotteryResultProgressBar *pLVar12;
  ResourceInfo *pRVar13;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar14;
  CachedUIResourcePtr<Sexy::Image> *this_02;
  undefined1 auVar15 [16];
  string asStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  undefined8 local_28;
  RtId aRStack_20 [8];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1a1] == (AlmanacObjectButton)0x0) {
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Insets::Insets((Insets *)local_18,0x80,0x80,0x80,0xff);
    Sexy::Graphics::SetColor(param_1,(Color *)local_18);
  }
  if (this[0x1a0] == (AlmanacObjectButton)0x0) {
    iVar6 = *(int *)(this + 0x50);
    this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb448;
    pSVar9 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb448);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar9);
  }
  else {
    iVar6 = *(int *)(this + 0x50);
    this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06acaf00;
    pSVar9 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acaf00);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar9);
  }
  Sexy::Insets::Insets((Insets *)local_18,0,0,iVar6,iVar3);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_02);
  Sexy::Graphics::DrawImageBoxStretch(param_1,(TRect *)local_18,pIVar10);
  auVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  Sexy::Upper((Sexy *)(auVar15._0_8_ + 8),auVar15._8_8_);
  uVar11 = FUN_0547429c((string *)local_18);
  Sexy::StrFormat("IMAGE_UI_ZOMBIEALMANAC_PACKETS_ZOMBIES_%s",asStack_38,uVar11);
  std::string::~string((string *)local_18);
  FindResourceId<Sexy::Image>(asStack_38,*(int *)(gLawnApp + 0xd8));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)local_18);
  Sexy::RtId::~RtId((RtId *)local_18);
  Sexy::Point::Point((Point *)&local_28,0,0);
  cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aRStack_30);
  if (cVar2 == '\0') {
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_30);
    GetImageOffset((string *)local_18,aRStack_20);
    local_28 = local_18[0];
    Sexy::RtId::~RtId(aRStack_20);
    UIWidget::ConvertPSDImageOffsetToUISpace
              ((int *)&local_28,(int *)((long)&local_28 + 4),_FUN_03b480e8);
  }
  else {
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06acaf28);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)aRStack_30,(RtWeakPtr *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    iVar6 = *(int *)(this + 0x50);
    pLVar12 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    iVar3 = *(int *)(this + 0x54);
    pSVar9 = (SalesProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar9);
    Sexy::Point::Point((Point *)local_18,(iVar6 - iVar4) / 2,(iVar3 - iVar5) / 2);
    local_28 = local_18[0];
  }
  pRVar13 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar13,(int)local_28,local_28._4_4_);
  if (this[0x1a3] == (AlmanacObjectButton)0x0) {
    iVar6 = *(int *)(this + 0x50);
    pSVar9 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb618);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar9);
    Sexy::Insets::Insets((Insets *)local_18,0,0,iVar6,iVar3);
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb618);
    Sexy::Graphics::DrawImageBoxStretch(param_1,(TRect *)local_18,pIVar10);
    if (this[0x1a1] == (AlmanacObjectButton)0x0) goto switchD_03b47ed8_default;
    AVar1 = this[0x1a3];
  }
  else {
    AVar1 = this[0x1a1];
  }
  if (AVar1 == (AlmanacObjectButton)0x0) goto switchD_03b47ed8_default;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198))
  ;
  iVar6 = PlayerInfo::GetZombieStarLevel(this_01,(string *)(lVar14 + 8));
  if (iVar6 == -1) {
switchD_03b47ed8_caseD_1:
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb168);
  }
  else {
    switch(iVar6) {
    case 1:
      goto switchD_03b47ed8_caseD_1;
    case 2:
      pLVar12 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb210);
      break;
    case 3:
      pLVar12 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb288);
      break;
    case 4:
    case 5:
      pLVar12 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb0f0);
      break;
    default:
      goto switchD_03b47ed8_default;
    }
  }
  if (pLVar12 != (LotteryResultProgressBar *)0x0) {
    iVar6 = *(int *)(this + 0x50);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    iVar4 = FUN_03b4642c(8);
    iVar5 = FUN_03b4642c(5);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    iVar8 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar12);
    Sexy::Graphics::DrawImage(param_1,(Image *)pLVar12,(iVar6 - iVar3) - iVar4,iVar5,iVar7,iVar8);
  }
switchD_03b47ed8_default:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AlmanacObjectButton::Draw(Sexy::Graphics*) */

void __thiscall AlmanacObjectButton::Draw(AlmanacObjectButton *this,Graphics *param_1)

{
  bool bVar1;
  RtObject *this_00;
  
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  bVar1 = Sexy::RtObject::IsA<PlantType>(this_00);
  if (!bVar1) {
    drawZombie(this,param_1);
    return;
  }
  drawPlant(this,param_1);
  return;
}

