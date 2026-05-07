// Class: FShopItemContent


/* FShopItemContent::~FShopItemContent() */

void __thiscall FShopItemContent::~FShopItemContent(FShopItemContent *this)

{
  *(undefined ***)this = &PTR_GetClass_0671e430;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* FShopItemContent::~FShopItemContent() */

void __thiscall FShopItemContent::~FShopItemContent(FShopItemContent *this)

{
  ~FShopItemContent(this);
  AK::FreeHook(this);
  return;
}


/* FShopItemContent::FShopItemContent(FShopItemData const&) */

void __thiscall FShopItemContent::FShopItemContent(FShopItemContent *this,FShopItemData *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0671e430;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0xd4));
  *(undefined8 *)(this + 0xd4) = *(undefined8 *)param_1;
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FShopItemContent::Draw(Sexy::Graphics*) */

void __thiscall FShopItemContent::Draw(FShopItemContent *this,Graphics *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  NameMapperBase *pNVar7;
  string *psVar8;
  long lVar9;
  undefined8 uVar10;
  Image *pIVar11;
  LotteryResultProgressBar *pLVar12;
  SalesProgressBar *pSVar13;
  PlantAccessoryMgr *pPVar14;
  LotteryResultProgressBar *pLVar15;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar16;
  int iVar17;
  string *extraout_x1;
  Image *pIVar18;
  int iVar19;
  float fVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  string *local_98;
  GraphicsAutoState aGStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  Sexy aSStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [16];
  string asStack_40 [32];
  undefined4 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_90,param_1);
  iVar4 = *(int *)(this + 0xd8);
  uVar1 = *(uint *)(this + 0xd4);
  pNVar7 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar7,iVar4);
  if (cVar2 != '\0') {
    iVar4 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar4);
    psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    FUN_05475ffc(aSStack_60,lVar9 + 0x20,0xe,0xffffffffffffffff);
    uVar10 = FUN_0547429c(aSStack_60);
    Sexy::StrFormat("%s%s",asStack_58,"IMAGE_UI_PACKETS_",uVar10);
    Sexy::StringToUpper(aSStack_60,extraout_x1);
    std::operator+((string *)&PlantHeadshot::PlantPrefix,asStack_50);
    pIVar11 = (Image *)StringHelper::ToImage(asStack_40,true);
    std::string::~string(asStack_40);
    std::string::~string(asStack_50);
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    switch(*(undefined4 *)(lVar9 + 0xd0)) {
    case 0:
      pIVar18 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8908);
      break;
    case 1:
      pIVar18 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7f98);
      break;
    case 2:
      pIVar18 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
      break;
    case 3:
      pIVar18 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8420);
      break;
    case 4:
      pIVar18 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8498);
      break;
    default:
      pIVar18 = (Image *)0x0;
    }
    iVar4 = *(int *)(this + 0x50);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    iVar19 = *(int *)(this + 0x54);
    pSVar13 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
    Sexy::Graphics::DrawImage(param_1,pIVar18,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
    Sexy::Graphics::DrawImage
              (param_1,pIVar11,(int)((float)*(int *)(this + 0x50) * 0.120000005),
               (int)((float)*(int *)(this + 0x54) * 0.120000005),
               (int)((float)*(int *)(this + 0x50) * 0.76),(int)((float)*(int *)(this + 0x54) * 0.76)
              );
    Sexy::StrFormat(L"x%d",asStack_40,(ulong)uVar1);
    FUN_05476c50(asStack_40);
    std::string::~string(asStack_58);
    std::string::~string((string *)aSStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    std::string::~string(asStack_70);
    goto LAB_03ad1f88;
  }
  pNVar7 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar7,iVar4);
  if (cVar2 == '\0') {
    pNVar7 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsId(pNVar7,iVar4);
    if (cVar2 != '\0') {
      iVar4 = AvatarChipNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar4);
      bVar3 = std::operator!=(asStack_80,"");
      if (bVar3) {
        std::string::string(asStack_78,"avatar_piece_");
        nop();
        FUN_05475d88(asStack_70,asStack_80);
        FUN_031dcc6c((string *)aRStack_68,asStack_78,asStack_70);
        psVar8 = (string *)
                 Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
        ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar8);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aSStack_60);
        if (cVar2 != '\0') {
          pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
          iVar4 = *(int *)(this + 0x50);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          iVar19 = *(int *)(this + 0x54);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
          iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
          Sexy::Graphics::DrawImage(param_1,pIVar11,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
          lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_60);
          pIVar11 = (Image *)StringHelper::ToImage((string *)(lVar9 + 0x60),false);
          iVar4 = *(int *)(this + 0x50);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac84e8);
          iVar19 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          iVar21 = *(int *)(this + 0x54);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac84e8);
          iVar5 = SalesProgressBar::GetCurrentLevel(pSVar13);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac84e8);
          iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac84e8);
          iVar17 = SalesProgressBar::GetCurrentLevel(pSVar13);
          if (pIVar11 != (Image *)0x0) {
            iVar22 = (int)(((float)iVar4 - (float)iVar19 * 0.6) * 0.5);
            iVar21 = (int)(((float)iVar21 - (float)iVar5 * 0.6) * 0.5);
            Sexy::Graphics::DrawImage
                      (param_1,pIVar11,iVar22,iVar21,(int)((float)iVar6 * 0.6),
                       (int)((float)iVar17 * 0.6));
            Sexy::StrFormat(L"x%d",asStack_58,(ulong)uVar1);
            uVar10 = PrimeText_PotentialTypeface::Typeface
                               (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
            iVar4 = FUN_03ac4800(0x28);
            iVar19 = FUN_03ac4800(0x29);
            iVar5 = FUN_03ac4800(0x2d);
            FUN_05477b24(asStack_50,asStack_58);
            Sexy::Color::Color((Color *)asStack_40,1);
            Sexy::PrimeTypeface::DrawString_Line
                      ((PrimeTypeface *)(float)(iVar4 + iVar22),(float)(iVar19 + iVar21),
                       (float)iVar5,uVar10,param_1,asStack_50,0,(Color *)asStack_40,0);
            FUN_05476c50(asStack_50);
            FUN_05476c50(asStack_58);
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_60)
        ;
        std::string::~string((string *)aRStack_68);
        std::string::~string(asStack_70);
        std::string::~string(asStack_78);
      }
      std::string::~string(asStack_80);
      goto LAB_03ad1f88;
    }
    OtherServerNameMapper::GetInstance();
    cVar2 = FUN_03ac12c4(iVar4);
    if (cVar2 == '\0') {
      OtherServerNameMapper::GetInstance();
      cVar2 = FUN_03ac12b4(iVar4);
      if (cVar2 == '\0') {
        OtherServerNameMapper::GetInstance();
        cVar2 = FUN_03ac12d4(iVar4);
        if (cVar2 == '\0') {
          pNVar7 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
          cVar2 = NameMapperBase::ContainsId(pNVar7,iVar4);
          if (cVar2 != '\0') {
            iVar4 = PlantAccessoryInfoMapper::GetInstance();
            NameMapperBase::GetNameForId(iVar4);
            psVar8 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
            pLVar12 = (LotteryResultProgressBar *)
                      PlantAccessoryMgr::GetAccessoryDisplayImage(psVar8);
            if (pLVar12 != (LotteryResultProgressBar *)0x0) {
              pPVar14 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
              PlantAccessoryMgr::GetAccessoryUIInfo(pPVar14,(string *)aRStack_68);
              switch(local_20) {
              case 0:
                pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7f98);
                break;
              case 1:
                pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
                break;
              case 2:
                pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8420);
                break;
              case 3:
              case 4:
                pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8498);
                break;
              default:
                pIVar11 = (Image *)0x0;
              }
              iVar4 = *(int *)(this + 0x50);
              pLVar15 = (LotteryResultProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
              iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
              iVar19 = *(int *)(this + 0x54);
              pSVar13 = (SalesProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
              iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
              Sexy::Graphics::DrawImage(param_1,pIVar11,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
              iVar4 = *(int *)(this + 0x50);
              iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
              iVar19 = *(int *)(this + 0x54);
              iVar17 = (int)(((float)iVar4 - (float)iVar5 * 0.6) * 0.5);
              iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar12);
              iVar6 = (int)(((float)iVar19 - (float)iVar4 * 0.6) * 0.5);
              iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
              iVar19 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar12);
              Sexy::Graphics::DrawImage
                        (param_1,(Image *)pLVar12,iVar17,iVar6,(int)((float)iVar4 * 0.6),
                         (int)((float)iVar19 * 0.6));
              Sexy::StrFormat(L"x%d",aSStack_60,(ulong)uVar1);
              uVar10 = PrimeText_PotentialTypeface::Typeface
                                 (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
              iVar4 = FUN_03ac4800(0x28);
              iVar19 = FUN_03ac4800(0x29);
              iVar5 = FUN_03ac4800(0x2d);
              FUN_05477b24(asStack_58,aSStack_60);
              Sexy::Color::Color((Color *)asStack_50,1);
              Sexy::PrimeTypeface::DrawString_Line
                        ((PrimeTypeface *)(float)(iVar4 + iVar17),(float)(iVar19 + iVar6),
                         (float)iVar5,uVar10,param_1,asStack_58,0,(Color *)asStack_50,0);
              FUN_05476c50(asStack_58);
              FUN_05476c50(aSStack_60);
              TGAAccumulatedLoginData::~TGAAccumulatedLoginData
                        ((TGAAccumulatedLoginData *)asStack_40);
            }
            std::string::~string((string *)aRStack_68);
            goto LAB_03ad1f88;
          }
          pNVar7 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
          cVar2 = NameMapperBase::ContainsId(pNVar7,iVar4);
          if (cVar2 == '\0') goto LAB_03ad1f88;
          iVar4 = PlantAccessoryPieceMapper::GetInstance();
          NameMapperBase::GetNameForId(iVar4);
          bVar3 = std::operator!=(asStack_88,"");
          if (bVar3) {
            FUN_05475d88(asStack_80,asStack_88);
            std::string::string(asStack_78,"_piece");
            nop();
            FUN_031dcc6c(asStack_70,asStack_80,asStack_78);
            psVar8 = (string *)
                     Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
            ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar8);
            cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_68);
            if (cVar2 != '\0') {
              lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
              pLVar12 = (LotteryResultProgressBar *)
                        StringHelper::ToImage((string *)(lVar9 + 0x60),false);
              if (pLVar12 != (LotteryResultProgressBar *)0x0) {
                pPVar14 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance()
                ;
                PlantAccessoryMgr::GetAccessoryUIInfo(pPVar14,asStack_88);
                switch(local_20) {
                case 0:
                  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7f98);
                  break;
                case 1:
                  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
                  break;
                case 2:
                  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8420);
                  break;
                case 3:
                case 4:
                  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8498);
                  break;
                default:
                  pIVar11 = (Image *)0x0;
                }
                iVar4 = *(int *)(this + 0x50);
                pLVar15 = (LotteryResultProgressBar *)
                          CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
                iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
                iVar19 = *(int *)(this + 0x54);
                pSVar13 = (SalesProgressBar *)
                          CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
                iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
                Sexy::Graphics::DrawImage(param_1,pIVar11,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
                iVar4 = *(int *)(this + 0x50);
                iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
                iVar19 = *(int *)(this + 0x54);
                iVar17 = (int)(((float)iVar4 - (float)iVar5 * 0.6) * 0.5);
                iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar12);
                iVar6 = (int)(((float)iVar19 - (float)iVar4 * 0.6) * 0.5);
                iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
                iVar19 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar12);
                Sexy::Graphics::DrawImage
                          (param_1,(Image *)pLVar12,iVar17,iVar6,(int)((float)iVar4 * 0.6),
                           (int)((float)iVar19 * 0.6));
                Sexy::StrFormat(L"x%d",aSStack_60,(ulong)uVar1);
                uVar10 = PrimeText_PotentialTypeface::Typeface
                                   (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
                iVar4 = FUN_03ac4800(0x28);
                iVar19 = FUN_03ac4800(0x29);
                iVar5 = FUN_03ac4800(0x2d);
                FUN_05477b24(asStack_58,aSStack_60);
                Sexy::Color::Color((Color *)asStack_50,1);
                Sexy::PrimeTypeface::DrawString_Line
                          ((PrimeTypeface *)(float)(iVar4 + iVar17),(float)(iVar19 + iVar6),
                           (float)iVar5,uVar10,param_1,asStack_58,0,(Color *)asStack_50,0);
                FUN_05476c50(asStack_58);
                FUN_05476c50(aSStack_60);
                TGAAccumulatedLoginData::~TGAAccumulatedLoginData
                          ((TGAAccumulatedLoginData *)asStack_40);
              }
            }
            goto LAB_03ad2124;
          }
          goto LAB_03ad1f80;
        }
        std::string::string(asStack_40,"IMAGE_UI_AWARDDIALOG_TACTICALCUKE");
        GetImageByName(asStack_40);
        std::string::~string(asStack_40);
        nop();
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aSStack_60);
        if (cVar2 != '\0') {
          pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
          iVar4 = *(int *)(this + 0x50);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          iVar19 = *(int *)(this + 0x54);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
          iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
          Sexy::Graphics::DrawImage(param_1,pIVar11,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
          iVar4 = *(int *)(this + 0x50);
          pLVar12 = (LotteryResultProgressBar *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_60);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          iVar19 = *(int *)(this + 0x54);
          iVar17 = (int)(((float)iVar4 - (float)iVar5 * 0.6) * 0.5);
          pSVar13 = (SalesProgressBar *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_60);
          iVar4 = SalesProgressBar::GetCurrentLevel(pSVar13);
          iVar6 = (int)(((float)iVar19 - (float)iVar4 * 0.6) * 0.5);
          pLVar12 = (LotteryResultProgressBar *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_60);
          iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          pSVar13 = (SalesProgressBar *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_60);
          iVar19 = SalesProgressBar::GetCurrentLevel(pSVar13);
          pIVar11 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_60);
          Sexy::Graphics::DrawImage
                    (param_1,pIVar11,iVar17,iVar6,(int)((float)iVar4 * 0.6),
                     (int)((float)iVar19 * 0.6));
          Sexy::StrFormat(L"x%d",asStack_58,(ulong)uVar1);
          uVar10 = PrimeText_PotentialTypeface::Typeface
                             (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
          iVar4 = FUN_03ac4800(0x28);
          iVar19 = FUN_03ac4800(0x29);
          iVar5 = FUN_03ac4800(0x2d);
          FUN_05477b24(asStack_50,asStack_58);
          Sexy::Color::Color((Color *)asStack_40,1);
          Sexy::PrimeTypeface::DrawString_Line
                    ((PrimeTypeface *)(float)(iVar4 + iVar17),(float)(iVar19 + iVar6),(float)iVar5,
                     uVar10,param_1,asStack_50,0,asStack_40,0);
          FUN_05476c50(asStack_50);
          FUN_05476c50(asStack_58);
        }
      }
      else {
        std::string::string(asStack_40,"IMAGE_UI_AWARDDIALOG_GOLD");
        GetImageByName(asStack_40);
        std::string::~string(asStack_40);
        nop();
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aSStack_60);
        if (cVar2 != '\0') {
          pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
          iVar4 = *(int *)(this + 0x50);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          iVar19 = *(int *)(this + 0x54);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
          iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
          Sexy::Graphics::DrawImage(param_1,pIVar11,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
          iVar4 = *(int *)(this + 0x50);
          pLVar12 = (LotteryResultProgressBar *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_60);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          iVar19 = *(int *)(this + 0x54);
          iVar17 = (int)(((float)iVar4 - (float)iVar5 * 0.6) * 0.5);
          pSVar13 = (SalesProgressBar *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_60);
          iVar4 = SalesProgressBar::GetCurrentLevel(pSVar13);
          iVar6 = (int)(((float)iVar19 - (float)iVar4 * 0.6) * 0.5);
          pLVar12 = (LotteryResultProgressBar *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_60);
          iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          pSVar13 = (SalesProgressBar *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_60);
          iVar19 = SalesProgressBar::GetCurrentLevel(pSVar13);
          pIVar11 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_60);
          Sexy::Graphics::DrawImage
                    (param_1,pIVar11,iVar17,iVar6,(int)((float)iVar4 * 0.6),
                     (int)((float)iVar19 * 0.6));
          Sexy::StrFormat(L"x%d",asStack_58,(ulong)uVar1);
          uVar10 = PrimeText_PotentialTypeface::Typeface
                             (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
          iVar4 = FUN_03ac4800(0xc);
          iVar19 = FUN_03ac4800(0x22);
          iVar5 = FUN_03ac4800(0x2d);
          FUN_05477b24(asStack_50,asStack_58);
          Sexy::Color::Color((Color *)asStack_40,1);
          Sexy::PrimeTypeface::DrawString_Line
                    ((PrimeTypeface *)(float)(iVar4 + iVar17),(float)(iVar19 + iVar6),(float)iVar5,
                     uVar10,param_1,asStack_50,0,asStack_40,0);
          FUN_05476c50(asStack_50);
          FUN_05476c50(asStack_58);
        }
      }
    }
    else {
      std::string::string(asStack_40,"IMAGE_UI_AWARDDIALOG_GEM");
      GetImageByName(asStack_40);
      std::string::~string(asStack_40);
      nop();
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aSStack_60);
      if (cVar2 != '\0') {
        pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
        iVar4 = *(int *)(this + 0x50);
        pLVar12 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
        iVar19 = *(int *)(this + 0x54);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
        Sexy::Graphics::DrawImage(param_1,pIVar11,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
        iVar4 = *(int *)(this + 0x50);
        pLVar12 = (LotteryResultProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_60);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
        iVar19 = *(int *)(this + 0x54);
        iVar5 = (int)(((float)iVar4 - (float)iVar5 * 0.6) * 0.5);
        pSVar13 = (SalesProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_60);
        iVar4 = SalesProgressBar::GetCurrentLevel(pSVar13);
        iVar6 = (int)(((float)iVar19 - (float)iVar4 * 0.6) * 0.5);
        pLVar12 = (LotteryResultProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_60);
        iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
        pSVar13 = (SalesProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_60);
        iVar19 = SalesProgressBar::GetCurrentLevel(pSVar13);
        pIVar11 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_60);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar11,iVar5,iVar6,(int)((float)iVar4 * 0.6),(int)((float)iVar19 * 0.6))
        ;
        Sexy::StrFormat(L"x%d",asStack_58,(ulong)uVar1);
        uVar10 = PrimeText_PotentialTypeface::Typeface
                           (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
        iVar4 = FUN_03ac4800(0x19);
        iVar19 = FUN_03ac4800(0x2d);
        FUN_05477b24(asStack_50,asStack_58);
        Sexy::Color::Color((Color *)asStack_40,1);
        Sexy::PrimeTypeface::DrawString_Line
                  ((PrimeTypeface *)(float)(iVar4 + iVar5),(float)(iVar6 + iVar4),(float)iVar19,
                   uVar10,param_1,asStack_50,0,asStack_40,0);
        FUN_05476c50(asStack_50);
        FUN_05476c50(asStack_58);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_60);
  }
  else {
    iVar4 = PlantChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar4);
    bVar3 = std::operator!=(asStack_88,"");
    if (bVar3) {
      std::string::string(asStack_80,"plant_piece_");
      nop();
      FUN_05475d88(asStack_78,asStack_88);
      FUN_031dcc6c(asStack_70,asStack_80,asStack_78);
      psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr()
      ;
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar8);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_68);
      if (cVar2 != '\0') {
        psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aSStack_60);
        if (cVar2 != '\0') {
          pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
          iVar4 = *(int *)(this + 0x50);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          iVar19 = *(int *)(this + 0x54);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
          iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
          Sexy::Graphics::DrawImage(param_1,pIVar11,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
          this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
          lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_60);
          this_01 = (RtWeakPtr *)
                    SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(lVar9 + 8));
          iVar4 = *(int *)(this + 0x50);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8180);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          iVar19 = *(int *)(this + 0x54);
          iVar17 = (int)(((float)iVar4 - (float)iVar5 * 0.6) * 0.5);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8180);
          iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
          iVar4 = *(int *)(this_01 + 0x28);
          iVar5 = *(int *)(this_01 + 0x2c);
          iVar22 = *(int *)(this_01 + 0x10);
          iVar21 = *(int *)(this_01 + 0x14);
          fVar23 = (float)iVar17;
          iVar19 = (int)(((float)iVar19 - (float)iVar6 * 0.6) * 0.5);
          pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
          fVar20 = (float)iVar19;
          Sexy::Insets::Insets
                    ((Insets *)asStack_40,(int)(fVar23 + (float)*(int *)(this_01 + 0x30) * 0.6),
                     (int)(fVar20 + (float)*(int *)(this_01 + 0x34) * 0.6),(int)((float)iVar4 * 0.6)
                     ,(int)((float)iVar5 * 0.6));
          Sexy::Graphics::DrawImage
                    (param_1,(Image *)pRVar16,(TRect *)asStack_40,(TRect *)(this_01 + 0x20));
          bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
          if (bVar3) {
            lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
            pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar9 + 0x48));
            Sexy::Insets::Insets
                      ((Insets *)asStack_40,(int)(fVar23 + (float)*(int *)(this_01 + 0x18) * 0.6),
                       (int)(fVar20 + (float)*(int *)(this_01 + 0x1c) * 0.6),
                       (int)((float)iVar22 * 0.6),(int)((float)iVar21 * 0.6));
            Sexy::Graphics::DrawImage
                      (param_1,(Image *)pRVar16,(TRect *)asStack_40,(TRect *)(this_01 + 8));
          }
          Sexy::StrFormat(L"x%d",asStack_58,(ulong)uVar1);
          uVar10 = PrimeText_PotentialTypeface::Typeface
                             (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
          iVar4 = FUN_03ac4800(0x28);
          iVar5 = FUN_03ac4800(0x29);
          iVar6 = FUN_03ac4800(0x2d);
          FUN_05477b24(asStack_50,asStack_58);
          Sexy::Color::Color((Color *)asStack_40,1);
          Sexy::PrimeTypeface::DrawString_Line
                    ((PrimeTypeface *)(float)(iVar4 + iVar17),(float)(iVar5 + iVar19),(float)iVar6,
                     uVar10,param_1,asStack_50,0,(Insets *)asStack_40,0);
          FUN_05476c50(asStack_50);
          FUN_05476c50(asStack_58);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_60)
        ;
      }
LAB_03ad2124:
      local_98 = asStack_78;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      std::string::~string(asStack_70);
      std::string::~string(local_98);
      std::string::~string(asStack_80);
    }
LAB_03ad1f80:
    std::string::~string(asStack_88);
  }
LAB_03ad1f88:
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

