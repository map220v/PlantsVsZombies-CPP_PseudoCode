// Class: NDRechargeRewardContent


/* NDRechargeRewardContent::~NDRechargeRewardContent() */

void __thiscall NDRechargeRewardContent::~NDRechargeRewardContent(NDRechargeRewardContent *this)

{
  *(undefined ***)this = &PTR_GetClass_066da0d0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* NDRechargeRewardContent::~NDRechargeRewardContent() */

void __thiscall NDRechargeRewardContent::~NDRechargeRewardContent(NDRechargeRewardContent *this)

{
  ~NDRechargeRewardContent(this);
  AK::FreeHook(this);
  return;
}


/* NDRechargeRewardContent::NDRechargeRewardContent(RechargeRewardData const&) */

void __thiscall
NDRechargeRewardContent::NDRechargeRewardContent
          (NDRechargeRewardContent *this,RechargeRewardData *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_066da0d0;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0xd4));
  *(undefined8 *)(this + 0xd4) = *(undefined8 *)param_1;
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NDRechargeRewardContent::Draw(Sexy::Graphics*) */

void __thiscall NDRechargeRewardContent::Draw(NDRechargeRewardContent *this,Graphics *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  NameMapperBase *pNVar8;
  string *psVar9;
  long lVar10;
  undefined8 uVar11;
  LotteryResultProgressBar *pLVar12;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  SalesProgressBar *pSVar13;
  ResourceInfo *pRVar14;
  PlantAccessoryMgr *pPVar15;
  Image *pIVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  undefined8 local_a8;
  GraphicsAutoState aGStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  undefined1 auStack_58 [8];
  Color aCStack_50 [16];
  Color aCStack_40 [32];
  undefined4 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_90,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  iVar4 = *(int *)(this + 0xd8);
  uVar1 = *(uint *)(this + 0xd4);
  pNVar8 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar8,iVar4);
  if (cVar2 != '\0') {
    iVar4 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar4);
    psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    FUN_05475ffc(asStack_68,lVar10 + 0x20,0xe,0xffffffffffffffff);
    uVar11 = FUN_0547429c(asStack_68);
    Sexy::StrFormat("%s%s",asStack_60,"IMAGE_UI_PACKETS_",uVar11);
    pLVar12 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_60,false);
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe000);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    switch(*(undefined4 *)(lVar10 + 0xd0)) {
    case 0:
      CachedUIResourcePtr<Sexy::Image>::operator->
                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdf38);
      break;
    case 1:
      CachedUIResourcePtr<Sexy::Image>::operator->
                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe000);
      break;
    case 2:
      CachedUIResourcePtr<Sexy::Image>::operator->
                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdf88);
      break;
    case 3:
    case 4:
      CachedUIResourcePtr<Sexy::Image>::operator->
                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe078);
    }
    iVar4 = *(int *)(this + 0x50);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    iVar6 = *(int *)(this + 0x54);
    iVar18 = (int)(((float)iVar4 - (float)iVar5) * 0.5);
    iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar12);
    iVar17 = (int)(((float)iVar6 - (float)iVar4) * 0.5);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    iVar6 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar12);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pLVar12,iVar18,iVar17,(int)(float)iVar4,(int)(float)iVar6);
    Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
    uVar11 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_CafeteriaBlack_26_Outline);
    iVar4 = FUN_0397bd10(0x3c);
    iVar6 = FUN_0397bd10(0x29);
    iVar5 = FUN_0397bd10(0x2d);
    FUN_05477b24(aCStack_50,auStack_58);
    Sexy::Color::Color(aCStack_40,1);
    Sexy::PrimeTypeface::DrawString_Line
              ((PrimeTypeface *)(float)(iVar4 + iVar18),(float)(iVar6 + iVar17),(float)iVar5,uVar11,
               param_1,aCStack_50,0,aCStack_40,0);
    FUN_05476c50(aCStack_50);
    FUN_05476c50(auStack_58);
    std::string::~string(asStack_60);
    std::string::~string(asStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    std::string::~string(asStack_78);
    goto LAB_0397cbb0;
  }
  pNVar8 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar8,iVar4);
  if (cVar2 == '\0') {
    pNVar8 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsId(pNVar8,iVar4);
    if (cVar2 == '\0') {
      pNVar8 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
      cVar2 = NameMapperBase::ContainsId(pNVar8,iVar4);
      if (cVar2 != '\0') {
        lVar10 = NewAvatar::GetNewAvatarPieceImage(iVar4);
        if (lVar10 != 0) {
          Sexy::Insets::Insets((Insets *)aCStack_40,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54))
          ;
          DrawAdaptiveImage(param_1,(Insets *)aCStack_40,lVar10);
          Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
          uVar11 = PrimeText_PotentialTypeface::Typeface
                             (PrimeText_Game::Typeface_CafeteriaBlack_26_Outline);
          iVar4 = FUN_0397bd10(0x3c);
          iVar6 = FUN_0397bd10(0x29);
          iVar5 = FUN_0397bd10(0x2d);
          FUN_05477b24(aCStack_50,auStack_58);
          Sexy::Color::Color(aCStack_40,1);
          Sexy::PrimeTypeface::DrawString_Line
                    ((PrimeTypeface *)(float)iVar4,(float)iVar6,(float)iVar5,uVar11,param_1,
                     aCStack_50,0,(Insets *)aCStack_40,0);
          FUN_05476c50(aCStack_50);
          FUN_05476c50(auStack_58);
        }
        goto LAB_0397cbb0;
      }
      OtherServerNameMapper::GetInstance();
      cVar2 = FUN_0397ba78(iVar4);
      if (cVar2 == '\0') {
        OtherServerNameMapper::GetInstance();
        cVar2 = FUN_0397ba68(iVar4);
        if (cVar2 == '\0') {
          OtherServerNameMapper::GetInstance();
          cVar2 = FUN_0397ba88(iVar4);
          if (cVar2 == '\0') {
            pNVar8 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
            cVar2 = NameMapperBase::ContainsId(pNVar8,iVar4);
            if (cVar2 != '\0') {
              iVar4 = PlantAccessoryInfoMapper::GetInstance();
              NameMapperBase::GetNameForId(iVar4);
              psVar9 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
              pLVar12 = (LotteryResultProgressBar *)
                        PlantAccessoryMgr::GetAccessoryDisplayImage(psVar9);
              if (pLVar12 != (LotteryResultProgressBar *)0x0) {
                pPVar15 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance()
                ;
                PlantAccessoryMgr::GetAccessoryUIInfo(pPVar15,asStack_68);
                switch(local_20) {
                case 0:
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdf38);
                  break;
                case 1:
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe000);
                  break;
                case 2:
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdf88);
                  break;
                case 3:
                case 4:
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe078);
                }
                iVar4 = *(int *)(this + 0x50);
                iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
                iVar6 = *(int *)(this + 0x54);
                iVar18 = (int)(((float)iVar4 - (float)iVar5) * 0.5);
                iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar12);
                iVar17 = (int)(((float)iVar6 - (float)iVar4) * 0.5);
                iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
                iVar6 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar12);
                Sexy::Graphics::DrawImage
                          (param_1,(Image *)pLVar12,iVar18,iVar17,(int)(float)iVar4,
                           (int)(float)iVar6);
                Sexy::StrFormat(L"x%d",asStack_60,(ulong)uVar1);
                uVar11 = PrimeText_PotentialTypeface::Typeface
                                   (PrimeText_Game::Typeface_CafeteriaBlack_26_Outline);
                iVar4 = FUN_0397bd10(0x3c);
                iVar6 = FUN_0397bd10(0x29);
                iVar5 = FUN_0397bd10(0x2d);
                FUN_05477b24(auStack_58,asStack_60);
                Sexy::Color::Color(aCStack_50,1);
                Sexy::PrimeTypeface::DrawString_Line
                          ((PrimeTypeface *)(float)(iVar4 + iVar18),(float)(iVar6 + iVar17),
                           (float)iVar5,uVar11,param_1,auStack_58,0,aCStack_50,0);
                FUN_05476c50(auStack_58);
                FUN_05476c50(asStack_60);
                TGAAccumulatedLoginData::~TGAAccumulatedLoginData
                          ((TGAAccumulatedLoginData *)aCStack_40);
              }
              std::string::~string(asStack_68);
              goto LAB_0397cbb0;
            }
            pNVar8 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
            cVar2 = NameMapperBase::ContainsId(pNVar8,iVar4);
            if (cVar2 == '\0') goto LAB_0397cbb0;
            iVar6 = PlantAccessoryPieceMapper::GetInstance();
            NameMapperBase::GetNameForId(iVar6);
            bVar3 = std::operator!=(asStack_88,"");
            if (bVar3) {
              FUN_05475d88(asStack_80,asStack_88);
              std::string::string(asStack_78,"_piece");
              nop();
              FUN_031dcc6c(aRStack_70,asStack_80,asStack_78);
              psVar9 = (string *)
                       Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
              ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar9);
              cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_68);
              if (cVar2 == '\0') {
                pNVar8 = (NameMapperBase *)MaterialItemMapper::GetInstance();
                cVar2 = NameMapperBase::ContainsId(pNVar8,iVar4);
                if (cVar2 != '\0') {
                  std::string::string((string *)aCStack_40,
                                      "IMAGE_UI_NATIONALCENTER_4TH_ANNIVERSARY_ICON");
                  GetImageByName((string *)aCStack_40);
                  std::string::~string((string *)aCStack_40);
                  nop();
                  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_60);
                  if (cVar2 != '\0') {
                    iVar4 = *(int *)(this + 0x50);
                    pLVar12 = (LotteryResultProgressBar *)
                              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
                    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
                    iVar6 = *(int *)(this + 0x54);
                    iVar5 = (int)(((float)iVar4 - (float)iVar5) * 0.5);
                    pSVar13 = (SalesProgressBar *)
                              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
                    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar13);
                    iVar17 = (int)(((float)iVar6 - (float)iVar4) * 0.5);
                    pLVar12 = (LotteryResultProgressBar *)
                              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
                    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
                    pSVar13 = (SalesProgressBar *)
                              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
                    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
                    pIVar16 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                 ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
                    Sexy::Graphics::DrawImage
                              (param_1,pIVar16,iVar5,iVar17,(int)(float)iVar4,(int)(float)iVar6);
                    Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
                    uVar11 = PrimeText_PotentialTypeface::Typeface
                                       (PrimeText_Game::Typeface_CafeteriaBlack_26_Outline);
                    iVar4 = FUN_0397bd10(0x19);
                    iVar6 = FUN_0397bd10(0x2d);
                    FUN_05477b24(aCStack_50,auStack_58);
                    Sexy::Color::Color(aCStack_40,1);
                    Sexy::PrimeTypeface::DrawString_Line
                              ((PrimeTypeface *)(float)(iVar4 + iVar5),(float)(iVar17 + iVar4),
                               (float)iVar6,uVar11,param_1,aCStack_50,0,
                               (TGAAccumulatedLoginData *)aCStack_40,0);
                    FUN_05476c50(aCStack_50);
                    FUN_05476c50(auStack_58);
                  }
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
                }
              }
              else {
                lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
                pLVar12 = (LotteryResultProgressBar *)
                          StringHelper::ToImage((string *)(lVar10 + 0x60),false);
                if (pLVar12 != (LotteryResultProgressBar *)0x0) {
                  pPVar15 = (PlantAccessoryMgr *)
                            Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
                  PlantAccessoryMgr::GetAccessoryUIInfo(pPVar15,asStack_88);
                  switch(local_20) {
                  case 0:
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdf38);
                    break;
                  case 1:
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe000);
                    break;
                  case 2:
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdf88);
                    break;
                  case 3:
                  case 4:
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe078);
                  }
                  iVar4 = *(int *)(this + 0x50);
                  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
                  iVar6 = *(int *)(this + 0x54);
                  iVar18 = (int)(((float)iVar4 - (float)iVar5) * 0.5);
                  iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar12);
                  iVar17 = (int)(((float)iVar6 - (float)iVar4) * 0.5);
                  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
                  iVar6 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar12);
                  Sexy::Graphics::DrawImage
                            (param_1,(Image *)pLVar12,iVar18,iVar17,(int)(float)iVar4,
                             (int)(float)iVar6);
                  Sexy::StrFormat(L"x%d",asStack_60,(ulong)uVar1);
                  uVar11 = PrimeText_PotentialTypeface::Typeface
                                     (PrimeText_Game::Typeface_CafeteriaBlack_26_Outline);
                  iVar4 = FUN_0397bd10(0x3c);
                  iVar6 = FUN_0397bd10(0x29);
                  iVar5 = FUN_0397bd10(0x2d);
                  FUN_05477b24(auStack_58,asStack_60);
                  Sexy::Color::Color(aCStack_50,1);
                  Sexy::PrimeTypeface::DrawString_Line
                            ((PrimeTypeface *)(float)(iVar4 + iVar18),(float)(iVar6 + iVar17),
                             (float)iVar5,uVar11,param_1,auStack_58,0,aCStack_50,0);
                  FUN_05476c50(auStack_58);
                  FUN_05476c50(asStack_60);
                  TGAAccumulatedLoginData::~TGAAccumulatedLoginData
                            ((TGAAccumulatedLoginData *)aCStack_40);
                }
              }
              goto LAB_0397d07c;
            }
            goto LAB_0397cc38;
          }
          std::string::string((string *)aCStack_40,"IMAGE_UI_AWARDDIALOG_TACTICALCUKE");
          GetImageByName((string *)aCStack_40);
          std::string::~string((string *)aCStack_40);
          nop();
          cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_60);
          if (cVar2 != '\0') {
            iVar4 = *(int *)(this + 0x50);
            pLVar12 = (LotteryResultProgressBar *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
            iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
            iVar6 = *(int *)(this + 0x54);
            iVar18 = (int)(((float)iVar4 - (float)iVar5) * 0.5);
            pSVar13 = (SalesProgressBar *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
            iVar4 = SalesProgressBar::GetCurrentLevel(pSVar13);
            iVar17 = (int)(((float)iVar6 - (float)iVar4) * 0.5);
            pLVar12 = (LotteryResultProgressBar *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
            iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
            pSVar13 = (SalesProgressBar *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
            iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
            pIVar16 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
            Sexy::Graphics::DrawImage
                      (param_1,pIVar16,iVar18,iVar17,(int)(float)iVar4,(int)(float)iVar6);
            Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
            local_a8 = PrimeText_PotentialTypeface::Typeface
                                 (PrimeText_Game::Typeface_CafeteriaBlack_26_Outline);
            iVar6 = FUN_0397bd10(0x3c);
            iVar4 = FUN_0397bd10(0x29);
            iVar5 = FUN_0397bd10(0x2d);
            FUN_05477b24(aCStack_50,auStack_58);
            Sexy::Color::Color(aCStack_40,1);
            iVar4 = iVar4 + iVar17;
            iVar6 = iVar6 + iVar18;
            goto LAB_0397d754;
          }
        }
        else {
          std::string::string((string *)aCStack_40,"IMAGE_UI_AWARDDIALOG_GOLD");
          GetImageByName((string *)aCStack_40);
          std::string::~string((string *)aCStack_40);
          nop();
          cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_60);
          if (cVar2 != '\0') {
            iVar4 = *(int *)(this + 0x50);
            pLVar12 = (LotteryResultProgressBar *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
            iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
            iVar6 = *(int *)(this + 0x54);
            iVar18 = (int)(((float)iVar4 - (float)iVar5) * 0.5);
            pSVar13 = (SalesProgressBar *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
            iVar4 = SalesProgressBar::GetCurrentLevel(pSVar13);
            iVar17 = (int)(((float)iVar6 - (float)iVar4) * 0.5);
            pLVar12 = (LotteryResultProgressBar *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
            iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
            pSVar13 = (SalesProgressBar *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
            iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
            pIVar16 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
            Sexy::Graphics::DrawImage
                      (param_1,pIVar16,iVar18,iVar17,(int)(float)iVar4,(int)(float)iVar6);
            Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
            local_a8 = PrimeText_PotentialTypeface::Typeface
                                 (PrimeText_Game::Typeface_CafeteriaBlack_26_Outline);
            iVar6 = FUN_0397bd10(0xc);
            iVar4 = FUN_0397bd10(0x22);
            iVar5 = FUN_0397bd10(0x2d);
            FUN_05477b24(aCStack_50,auStack_58);
            Sexy::Color::Color(aCStack_40,1);
            iVar4 = iVar4 + iVar17;
            iVar6 = iVar6 + iVar18;
LAB_0397d754:
            Sexy::PrimeTypeface::DrawString_Line
                      ((PrimeTypeface *)(float)iVar6,(float)iVar4,(float)iVar5,local_a8,param_1,
                       aCStack_50,0,aCStack_40,0);
            FUN_05476c50(aCStack_50);
            FUN_05476c50(auStack_58);
          }
        }
      }
      else {
        std::string::string((string *)aCStack_40,"IMAGE_UI_AWARDDIALOG_GEM");
        GetImageByName((string *)aCStack_40);
        std::string::~string((string *)aCStack_40);
        nop();
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_60);
        if (cVar2 != '\0') {
          iVar4 = *(int *)(this + 0x50);
          pLVar12 = (LotteryResultProgressBar *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          iVar6 = *(int *)(this + 0x54);
          iVar5 = (int)(((float)iVar4 - (float)iVar5) * 0.5);
          pSVar13 = (SalesProgressBar *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
          iVar4 = SalesProgressBar::GetCurrentLevel(pSVar13);
          iVar17 = (int)(((float)iVar6 - (float)iVar4) * 0.5);
          pLVar12 = (LotteryResultProgressBar *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
          iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          pSVar13 = (SalesProgressBar *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
          iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
          pIVar16 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
          Sexy::Graphics::DrawImage
                    (param_1,pIVar16,iVar5,iVar17,(int)(float)iVar4,(int)(float)iVar6);
          Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
          uVar11 = PrimeText_PotentialTypeface::Typeface
                             (PrimeText_Game::Typeface_CafeteriaBlack_26_Outline);
          iVar4 = FUN_0397bd10(0x19);
          iVar6 = FUN_0397bd10(0x2d);
          FUN_05477b24(aCStack_50,auStack_58);
          Sexy::Color::Color(aCStack_40,1);
          Sexy::PrimeTypeface::DrawString_Line
                    ((PrimeTypeface *)(float)(iVar4 + iVar5),(float)(iVar17 + iVar4),(float)iVar6,
                     uVar11,param_1,aCStack_50,0,(string *)aCStack_40,0);
          FUN_05476c50(aCStack_50);
          FUN_05476c50(auStack_58);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
      goto LAB_0397cbb0;
    }
    iVar4 = AvatarChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar4);
    bVar3 = std::operator!=(asStack_88,"");
    if (bVar3) {
      std::string::string(asStack_80,"avatar_piece_");
      nop();
      FUN_05475d88(asStack_78,asStack_88);
      FUN_031dcc6c(aRStack_70,asStack_80,asStack_78);
      psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr()
      ;
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar9);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_68);
      if (cVar2 != '\0') {
        psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_60);
        if (cVar2 != '\0') {
          lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
          switch(*(undefined4 *)(lVar10 + 0xd0)) {
          case 0:
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdf38);
            break;
          case 1:
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe000);
            break;
          case 2:
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdf88);
            break;
          case 3:
          case 4:
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe078);
          }
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe000);
          LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe000);
          SalesProgressBar::GetCurrentLevel(pSVar13);
        }
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
        pIVar16 = (Image *)StringHelper::ToImage((string *)(lVar10 + 0x60),false);
        iVar7 = *(int *)(this + 0x50);
        pLVar12 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe000);
        iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
        iVar4 = *(int *)(this + 0x54);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe000);
        iVar5 = SalesProgressBar::GetCurrentLevel(pSVar13);
        pLVar12 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe000);
        iVar17 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe000);
        iVar18 = SalesProgressBar::GetCurrentLevel(pSVar13);
        if (pIVar16 != (Image *)0x0) {
          iVar19 = (int)(((float)iVar7 - (float)iVar6) * 0.5);
          iVar7 = (int)(((float)iVar4 - (float)iVar5) * 0.5);
          Sexy::Graphics::DrawImage
                    (param_1,pIVar16,iVar19,iVar7,(int)(float)iVar17,(int)(float)iVar18);
          Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
          uVar11 = PrimeText_PotentialTypeface::Typeface
                             (PrimeText_Game::Typeface_CafeteriaBlack_26_Outline);
          iVar4 = FUN_0397bd10(0x3c);
          iVar6 = FUN_0397bd10(0x29);
          iVar5 = FUN_0397bd10(0x2d);
          FUN_05477b24(aCStack_50,auStack_58);
          Sexy::Color::Color(aCStack_40,1);
          Sexy::PrimeTypeface::DrawString_Line
                    ((PrimeTypeface *)(float)(iVar4 + iVar19),(float)(iVar6 + iVar7),(float)iVar5,
                     uVar11,param_1,aCStack_50,0,aCStack_40,0);
          FUN_05476c50(aCStack_50);
          FUN_05476c50(auStack_58);
        }
        goto LAB_0397cfec;
      }
      goto LAB_0397d07c;
    }
  }
  else {
    iVar4 = PlantChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar4);
    bVar3 = std::operator!=(asStack_88,"");
    if (bVar3) {
      std::string::string(asStack_80,"plant_piece_");
      nop();
      FUN_05475d88(asStack_78,asStack_88);
      FUN_031dcc6c(aRStack_70,asStack_80,asStack_78);
      psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr()
      ;
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar9);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_68);
      if (cVar2 != '\0') {
        psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_60);
        if (cVar2 != '\0') {
          CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe000);
          lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
          switch(*(undefined4 *)(lVar10 + 0xd0)) {
          case 0:
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdf38);
            break;
          case 1:
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe000);
            break;
          case 2:
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdf88);
            break;
          case 3:
          case 4:
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe078);
          }
          this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
          lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
          this_01 = (RtWeakPtr *)
                    SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(lVar10 + 8));
          iVar4 = *(int *)(this + 0x50);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdf10);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          iVar6 = *(int *)(this + 0x54);
          iVar19 = (int)(((float)iVar4 - (float)iVar5 * 0.6) * 0.5);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdf10);
          iVar7 = SalesProgressBar::GetCurrentLevel(pSVar13);
          iVar4 = *(int *)(this_01 + 0x28);
          iVar5 = *(int *)(this_01 + 0x2c);
          iVar17 = *(int *)(this_01 + 0x10);
          iVar18 = *(int *)(this_01 + 0x14);
          fVar21 = (float)iVar19;
          iVar6 = (int)(((float)iVar6 - (float)iVar7 * 0.6) * 0.5);
          pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
          fVar20 = (float)iVar6;
          Sexy::Insets::Insets
                    ((Insets *)aCStack_40,(int)(fVar21 + (float)*(int *)(this_01 + 0x30) * 0.6),
                     (int)(fVar20 + (float)*(int *)(this_01 + 0x34) * 0.6),(int)((float)iVar4 * 0.6)
                     ,(int)((float)iVar5 * 0.6));
          Sexy::Graphics::DrawImage
                    (param_1,(Image *)pRVar14,(TRect *)aCStack_40,(TRect *)(this_01 + 0x20));
          bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
          if (bVar3) {
            lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
            pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar10 + 0x48));
            Sexy::Insets::Insets
                      ((Insets *)aCStack_40,(int)(fVar21 + (float)*(int *)(this_01 + 0x18) * 0.6),
                       (int)(fVar20 + (float)*(int *)(this_01 + 0x1c) * 0.6),
                       (int)((float)iVar17 * 0.6),(int)((float)iVar18 * 0.6));
            Sexy::Graphics::DrawImage
                      (param_1,(Image *)pRVar14,(TRect *)aCStack_40,(TRect *)(this_01 + 8));
          }
          Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
          uVar11 = PrimeText_PotentialTypeface::Typeface
                             (PrimeText_Game::Typeface_CafeteriaBlack_26_Outline);
          iVar4 = FUN_0397bd10(0x3c);
          iVar5 = FUN_0397bd10(0x29);
          iVar17 = FUN_0397bd10(0x2d);
          FUN_05477b24(aCStack_50,auStack_58);
          Sexy::Color::Color(aCStack_40,1);
          Sexy::PrimeTypeface::DrawString_Line
                    ((PrimeTypeface *)(float)(iVar4 + iVar19),(float)(iVar5 + iVar6),(float)iVar17,
                     uVar11,param_1,aCStack_50,0,(Insets *)aCStack_40,0);
          FUN_05476c50(aCStack_50);
          FUN_05476c50(auStack_58);
        }
LAB_0397cfec:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60)
        ;
      }
LAB_0397d07c:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
      std::string::~string((string *)aRStack_70);
      std::string::~string(asStack_78);
      std::string::~string(asStack_80);
      std::string::~string(asStack_88);
      goto LAB_0397cbb0;
    }
  }
LAB_0397cc38:
  std::string::~string(asStack_88);
LAB_0397cbb0:
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_90);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

