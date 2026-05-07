// Class: AwakenObjectButton


/* AwakenObjectButton::GetIsVisible() */

AwakenObjectButton __thiscall AwakenObjectButton::GetIsVisible(AwakenObjectButton *this)

{
  return this[0x1a1];
}


/* AwakenObjectButton::~AwakenObjectButton() */

void __thiscall AwakenObjectButton::~AwakenObjectButton(AwakenObjectButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06955690;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  Sexy::ButtonWidget::~ButtonWidget((ButtonWidget *)this);
  return;
}


/* AwakenObjectButton::~AwakenObjectButton() */

void __thiscall AwakenObjectButton::~AwakenObjectButton(AwakenObjectButton *this)

{
  ~AwakenObjectButton(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwakenObjectButton::RefreshUnlockStatus() */

void __thiscall AwakenObjectButton::RefreshUnlockStatus(AwakenObjectButton *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  bool bVar1;
  AwakenObjectButton AVar2;
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
    AVar2 = (AwakenObjectButton)PlayerInfo::GetIsPlantUnlocked(pPVar7,(string *)(lVar9 + 8));
    this[0x1a3] = AVar2;
    if (AVar2 == (AwakenObjectButton)0x0) {
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
          if (iVar5 < iVar4) goto LAB_04b22c5c;
        }
        this[0x1a2] = (AwakenObjectButton)0x1;
      }
LAB_04b22c5c:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      nop();
      pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar6);
      cVar3 = ProfileUtils::HasUnlockedWorld((string *)(extraout_x0 + 0x38),pPVar7);
      if (cVar3 != '\0') {
        this_02 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
        lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        lVar9 = WorldDataManager::FindEventByLevelName(this_02,(string *)(lVar9 + 8));
        if ((lVar9 != 0) && (iVar4 = FUN_04b221dc(*(undefined4 *)(lVar9 + 0x14)), iVar4 == 3)) {
          this[0x1a1] = (AwakenObjectButton)0x1;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      goto LAB_04b22b54;
    }
  }
  else {
    pRVar8 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    bVar1 = Sexy::RtObject::IsA<ZombieType>(pRVar8);
    if (bVar1) {
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      AVar2 = (AwakenObjectButton)PlayerInfo::IsKilledZombie(pPVar7,(string *)(lVar9 + 8));
      this[0x1a3] = AVar2;
    }
LAB_04b22b54:
    if ((this[0x1a1] == (AwakenObjectButton)0x0) && (this[0x1a3] == (AwakenObjectButton)0x0)) {
      AVar2 = this[0x1a2];
      goto LAB_04b22b0c;
    }
  }
  AVar2 = (AwakenObjectButton)0x1;
LAB_04b22b0c:
  this[0x1a1] = AVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AwakenObjectButton::AwakenObjectButton(int, Sexy::ButtonListener*,
   Sexy::RtWeakPtr<ObjectTypeDescriptor const>) */

void __thiscall
AwakenObjectButton::AwakenObjectButton
          (AwakenObjectButton *this,int param_1,ButtonListener *param_2,RtWeakPtr *param_4)

{
  Sexy::ButtonWidget::ButtonWidget((ButtonWidget *)this,param_1,param_2);
  *(undefined ***)this = &PTR_GetClass_06955690;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x198));
  this[0x1a0] = (AwakenObjectButton)0x0;
  this[0x1a1] = (AwakenObjectButton)0x0;
  this[0x1a2] = (AwakenObjectButton)0x0;
  this[0x1a3] = (AwakenObjectButton)0x0;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x198),param_4);
  RefreshUnlockStatus(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwakenObjectButton::drawPlant(Sexy::Graphics*) */

void __thiscall AwakenObjectButton::drawPlant(AwakenObjectButton *this,Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtWeakPtr *this_01;
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  SeedPacketUtils *this_02;
  long lVar7;
  ResourceInfo *pRVar8;
  LotteryResultProgressBar *pLVar9;
  SalesProgressBar *pSVar10;
  Image *pIVar11;
  NameMapperBase *this_03;
  ulong uVar12;
  undefined8 uVar13;
  PrimeTypeface *this_04;
  ProfileMgr *this_05;
  PlayerInfo *this_06;
  long lVar14;
  float fVar15;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1a3] == (AwakenObjectButton)0x0) {
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Insets::Insets((Insets *)&local_18,0x80,0x80,0x80,0xff);
    Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
  }
  this_02 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198);
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar7 = SeedPacketUtils::GetPlantPacketRenderData(this_02,(string *)(lVar7 + 8),-1,-1,-1);
  this_01 = (RtWeakPtr *)(lVar7 + 0x170);
  if (this[0x1a0] == (AwakenObjectButton)0x0) {
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
    Sexy::Insets::Insets
              ((Insets *)&local_18,*(int *)(lVar7 + 0x30),*(int *)(lVar7 + 0x34),
               *(int *)(lVar7 + 0x28),*(int *)(lVar7 + 0x2c));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar8,(TRect *)&local_18,(TRect *)(lVar7 + 0x20));
  }
  else {
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar8,*(int *)(lVar7 + 0x78),*(int *)(lVar7 + 0x7c),
               (TRect *)(lVar7 + 0x68));
  }
  if (this[0x1a1] == (AwakenObjectButton)0x0) {
    bVar2 = CachedUIResourcePtr::operator_cast_to_bool((CachedUIResourcePtr *)&DAT_06b84308);
    if (bVar2) {
      pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84308);
      iVar5 = *(int *)(this + 0x50);
      pLVar9 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84308);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
      iVar1 = *(int *)(this + 0x54);
      pSVar10 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84308);
      iVar4 = SalesProgressBar::GetCurrentLevel(pSVar10);
      Sexy::Graphics::DrawImage(param_1,pIVar11,(iVar5 - iVar3) / 2,(iVar1 - iVar4) / 2);
    }
  }
  else {
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar8,*(int *)(lVar7 + 0x18),*(int *)(lVar7 + 0x1c),
               (TRect *)(lVar7 + 8));
  }
  pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar8,*(int *)(lVar7 + 0xc0),*(int *)(lVar7 + 0xc4),
             (TRect *)(lVar7 + 0xb0));
  pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar8,*(int *)(lVar7 + 0xf0),*(int *)(lVar7 + 0xf4),
             (TRect *)(lVar7 + 0xe0));
  pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar8,*(int *)(lVar7 + 0xd8),*(int *)(lVar7 + 0xdc),
             (TRect *)(lVar7 + 200));
  Sexy::Graphics::SetColorizeImages(param_1,false);
  if (this[0x1a1] == (AwakenObjectButton)0x0) {
LAB_04b23038:
    if (this[0x1a0] != (AwakenObjectButton)0x0) {
LAB_04b231e8:
      pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar8,*(int *)(lVar7 + 0x138),*(int *)(lVar7 + 0x13c),
                 (TRect *)(lVar7 + 0x128));
    }
    if (this[0x1a1] == (AwakenObjectButton)0x0) goto LAB_04b22f64;
    if (this[0x1a3] == (AwakenObjectButton)0x0) goto LAB_04b22ed8;
  }
  else {
    if (this[0x1a3] != (AwakenObjectButton)0x0) {
      this_05 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_06 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_05);
      lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      iVar5 = PlayerInfo::GetPlantStarLevel(this_06,(string *)(lVar14 + 8),false);
      switch(iVar5) {
      case 1:
        pSVar10 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84610);
        if (pSVar10 == (SalesProgressBar *)0x0) goto LAB_04b23038;
        goto LAB_04b22fac;
      case 2:
        pSVar10 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b843d0);
        break;
      case 3:
        pSVar10 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84670);
        break;
      case 4:
        pSVar10 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84428);
        break;
      case 5:
        pSVar10 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b846c0);
        break;
      default:
        goto switchD_04b2328c_default;
      }
      if (pSVar10 != (SalesProgressBar *)0x0) {
LAB_04b22fac:
        iVar1 = *(int *)(this + 0x54);
        iVar3 = SalesProgressBar::GetCurrentLevel(pSVar10);
        iVar4 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)pSVar10);
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
        Sexy::Graphics::DrawImage(param_1,(Image *)pSVar10,0,iVar1 - iVar3,iVar4,iVar6);
switchD_04b2328c_default:
        if (iVar5 < 2) goto LAB_04b23038;
      }
      pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
      Sexy::Insets::Insets
                ((Insets *)&local_18,*(int *)(lVar7 + 0x150),*(int *)(lVar7 + 0x154),
                 *(int *)(lVar7 + 0x148),*(int *)(lVar7 + 0x14c));
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar8,(TRect *)&local_18,(TRect *)(lVar7 + 0x140))
      ;
      goto LAB_04b23038;
    }
    if (this[0x1a0] != (AwakenObjectButton)0x0) goto LAB_04b231e8;
LAB_04b22ed8:
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_18);
    iVar5 = *(int *)(this + 0x50);
    pLVar9 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84208);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
    iVar4 = FUN_04b22278(8);
    iVar1 = *(int *)(this + 0x54);
    local_18 = (float)((iVar5 - iVar3) - iVar4);
    pSVar10 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84208);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar10);
    iVar3 = FUN_04b22278(4);
    local_14 = (float)((iVar1 - iVar5) - iVar3);
    pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84208);
    Sexy::Graphics::DrawImage(param_1,pIVar11,(int)local_18,(int)local_14);
    if (this[0x1a1] == (AwakenObjectButton)0x0) goto LAB_04b22f64;
  }
  if (*(char *)(gLawnApp + 0x2a00) != '\0') {
    this_03 = (NameMapperBase *)PlantNameMapper::GetInstance();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    uVar12 = NameMapperBase::GetIdForName(this_03,(string *)(lVar7 + 8));
    Sexy::StrFormat(L"ID:%d",auStack_28,uVar12 & 0xffffffff);
    uVar13 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
    iVar5 = *(int *)(this + 0x54);
    this_04 = (PrimeTypeface *)
              PrimeText_PotentialTypeface::Typeface
                        (PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
    fVar15 = (float)Sexy::PrimeTypeface::GetLineHeight(this_04);
    iVar1 = *(int *)(this + 0x50);
    FUN_05477b24(auStack_20,auStack_28);
    Sexy::Color::Color((Color *)&local_18,4);
    Sexy::PrimeTypeface::DrawString_Line
              ((PrimeTypeface *)0x0,(float)iVar5 - fVar15,(float)iVar1,uVar13,param_1,auStack_20,1,
               (Color *)&local_18,0);
    FUN_05476c50(auStack_20);
    FUN_05476c50(auStack_28);
  }
LAB_04b22f64:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwakenObjectButton::drawZombie(Sexy::Graphics*) */

void __thiscall AwakenObjectButton::drawZombie(AwakenObjectButton *this,Graphics *param_1)

{
  AwakenObjectButton AVar1;
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
  ResourceInfo *pRVar12;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar13;
  LotteryResultProgressBar *pLVar14;
  CachedUIResourcePtr<Sexy::Image> *this_02;
  undefined1 auVar15 [16];
  string asStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  undefined8 local_28;
  RtId aRStack_20 [8];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1a1] == (AwakenObjectButton)0x0) {
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Insets::Insets((Insets *)local_18,0x80,0x80,0x80,0xff);
    Sexy::Graphics::SetColor(param_1,(Color *)local_18);
  }
  if (this[0x1a0] == (AwakenObjectButton)0x0) {
    iVar4 = *(int *)(this + 0x50);
    this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84598;
    pSVar9 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84598);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar9);
  }
  else {
    iVar4 = *(int *)(this + 0x50);
    this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b841b8;
    pSVar9 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b841b8);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar9);
  }
  Sexy::Insets::Insets((Insets *)local_18,0,0,iVar4,iVar3);
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
  if (this[0x1a1] == (AwakenObjectButton)0x0) {
    Sexy::Graphics::SetColorizeImages(param_1,false);
    AVar1 = this[0x1a1];
  }
  else {
    Sexy::Point::Point((Point *)&local_28,0,0);
    cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aRStack_30);
    if (cVar2 == '\0') {
      Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_30);
      GetImageOffset((string *)local_18,aRStack_20);
      local_28 = local_18[0];
      Sexy::RtId::~RtId(aRStack_20);
      UIWidget::ConvertPSDImageOffsetToUISpace
                ((int *)&local_28,(int *)((long)&local_28 + 4),_FUN_04b236e4);
    }
    else {
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b841e0);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)aRStack_30,(RtWeakPtr *)local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      iVar4 = *(int *)(this + 0x50);
      pLVar14 = (LotteryResultProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
      iVar3 = *(int *)(this + 0x54);
      pSVar9 = (SalesProgressBar *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
      ;
      iVar6 = SalesProgressBar::GetCurrentLevel(pSVar9);
      Sexy::Point::Point((Point *)local_18,(iVar4 - iVar5) / 2,(iVar3 - iVar6) / 2);
      local_28 = local_18[0];
    }
    pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar12,(int)local_28,local_28._4_4_);
    AVar1 = this[0x1a1];
  }
  if ((AVar1 == (AwakenObjectButton)0x0) || (this[0x1a3] == (AwakenObjectButton)0x0))
  goto switchD_04b23554_default;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198))
  ;
  iVar4 = PlayerInfo::GetZombieStarLevel(this_01,(string *)(lVar13 + 8));
  if (iVar4 == -1) {
switchD_04b23554_caseD_1:
    pLVar14 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84610);
  }
  else {
    switch(iVar4) {
    case 1:
      goto switchD_04b23554_caseD_1;
    case 2:
      pLVar14 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b843d0);
      break;
    case 3:
      pLVar14 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84670);
      break;
    case 4:
      pLVar14 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84428);
      break;
    case 5:
      pLVar14 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b846c0);
      break;
    default:
      goto switchD_04b23554_default;
    }
  }
  if (pLVar14 != (LotteryResultProgressBar *)0x0) {
    iVar4 = *(int *)(this + 0x50);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
    pSVar9 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84598);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar9);
    iVar6 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar14);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
    iVar8 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar14);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pLVar14,(iVar4 - iVar3) / 2,iVar5 - iVar6 / 2,iVar7,iVar8);
  }
switchD_04b23554_default:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AwakenObjectButton::Draw(Sexy::Graphics*) */

void __thiscall AwakenObjectButton::Draw(AwakenObjectButton *this,Graphics *param_1)

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

