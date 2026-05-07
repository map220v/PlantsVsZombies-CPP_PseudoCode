// Class: DaliyLoginRewardContent


/* DaliyLoginRewardContent::~DaliyLoginRewardContent() */

void __thiscall DaliyLoginRewardContent::~DaliyLoginRewardContent(DaliyLoginRewardContent *this)

{
  *(undefined ***)this = &PTR_GetClass_066d7160;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* DaliyLoginRewardContent::~DaliyLoginRewardContent() */

void __thiscall DaliyLoginRewardContent::~DaliyLoginRewardContent(DaliyLoginRewardContent *this)

{
  ~DaliyLoginRewardContent(this);
  AK::FreeHook(this);
  return;
}


/* DaliyLoginRewardContent::DaliyLoginRewardContent(NDLoginRewardBonus const&) */

void __thiscall
DaliyLoginRewardContent::DaliyLoginRewardContent
          (DaliyLoginRewardContent *this,NDLoginRewardBonus *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xd4) = *(undefined8 *)param_1;
  *(undefined ***)this = &PTR_GetClass_066d7160;
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaliyLoginRewardContent::Draw(Sexy::Graphics*) */

void __thiscall DaliyLoginRewardContent::Draw(DaliyLoginRewardContent *this,Graphics *param_1)

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
  Image *pIVar10;
  LotteryResultProgressBar *pLVar11;
  SalesProgressBar *pSVar12;
  SeedPacketUtils *this_00;
  long lVar13;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar14;
  undefined8 uVar15;
  PlantAccessoryMgr *pPVar16;
  LotteryResultProgressBar *pLVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  undefined1 *local_98;
  GraphicsAutoState aGStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  undefined1 auStack_58 [8];
  Color aCStack_50 [16];
  Insets aIStack_40 [32];
  undefined4 local_20 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_90,param_1);
  iVar4 = *(int *)(this + 0xd4);
  uVar1 = *(uint *)(this + 0xd8);
  pNVar8 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar8,iVar4);
  if (cVar2 != '\0') {
    iVar4 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar4);
    psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
    lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    FUN_05475ffc(asStack_68,lVar13 + 0x20,0xe,0xffffffffffffffff);
    uVar15 = FUN_0547429c(asStack_68);
    Sexy::StrFormat("%s%s",asStack_60,"IMAGE_UI_PACKETS_",uVar15);
    pLVar11 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_60,false);
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
    iVar4 = *(int *)(this + 0x50);
    pLVar17 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
    iVar19 = *(int *)(this + 0x54);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
    Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
    iVar4 = *(int *)(this + 0x50);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    iVar19 = *(int *)(this + 0x54);
    iVar20 = (int)(((float)iVar4 - (float)iVar5 * 0.6) * 0.5);
    iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar11);
    iVar6 = (int)(((float)iVar19 - (float)iVar4 * 0.6) * 0.5);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    iVar19 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar11);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pLVar11,iVar20,iVar6,(int)((float)iVar4 * 0.6),
               (int)((float)iVar19 * 0.6));
    Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
    uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_20);
    iVar4 = FUN_0396c5e8(0x19);
    iVar19 = FUN_0396c5e8(0x23);
    iVar5 = FUN_0396c5e8(0x2d);
    FUN_05477b24(aCStack_50,auStack_58);
    Sexy::Color::Color((Color *)aIStack_40,0);
    Sexy::PrimeTypeface::DrawString_Line
              ((PrimeTypeface *)(float)(iVar4 + iVar20),(float)(iVar19 + iVar6),(float)iVar5,uVar15,
               param_1,aCStack_50,0,(Color *)aIStack_40,0);
    FUN_05476c50(aCStack_50);
    FUN_05476c50(auStack_58);
    std::string::~string(asStack_60);
    std::string::~string(asStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    std::string::~string(asStack_78);
    goto LAB_0396eb98;
  }
  pNVar8 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar8,iVar4);
  if (cVar2 != '\0') {
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
          pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
          iVar4 = *(int *)(this + 0x50);
          pLVar11 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
          iVar19 = *(int *)(this + 0x54);
          pSVar12 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
          iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
          Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
          this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
          lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
          this_01 = (RtWeakPtr *)
                    SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(lVar13 + 8));
          iVar4 = *(int *)(this + 0x50);
          pLVar11 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd398);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
          iVar19 = *(int *)(this + 0x54);
          iVar18 = (int)(((float)iVar4 - (float)iVar5 * 0.6) * 0.5);
          pSVar12 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd398);
          iVar7 = SalesProgressBar::GetCurrentLevel(pSVar12);
          iVar4 = *(int *)(this_01 + 0x28);
          iVar5 = *(int *)(this_01 + 0x2c);
          iVar6 = *(int *)(this_01 + 0x10);
          iVar20 = *(int *)(this_01 + 0x14);
          fVar22 = (float)iVar18;
          iVar19 = (int)(((float)iVar19 - (float)iVar7 * 0.6) * 0.5);
          pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
          fVar21 = (float)iVar19;
          Sexy::Insets::Insets
                    (aIStack_40,(int)(fVar22 + (float)*(int *)(this_01 + 0x30) * 0.6),
                     (int)(fVar21 + (float)*(int *)(this_01 + 0x34) * 0.6),(int)((float)iVar4 * 0.6)
                     ,(int)((float)iVar5 * 0.6));
          Sexy::Graphics::DrawImage
                    (param_1,(Image *)pRVar14,(TRect *)aIStack_40,(TRect *)(this_01 + 0x20));
          bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
          if (bVar3) {
            lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
            pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar13 + 0x48));
            Sexy::Insets::Insets
                      (aIStack_40,(int)(fVar22 + (float)*(int *)(this_01 + 0x18) * 0.6),
                       (int)(fVar21 + (float)*(int *)(this_01 + 0x1c) * 0.6),
                       (int)((float)iVar6 * 0.6),(int)((float)iVar20 * 0.6));
            Sexy::Graphics::DrawImage
                      (param_1,(Image *)pRVar14,(TRect *)aIStack_40,(TRect *)(this_01 + 8));
          }
          Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
          uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_20)
          ;
          iVar4 = FUN_0396c5e8(0x19);
          iVar5 = FUN_0396c5e8(0x23);
          iVar6 = FUN_0396c5e8(0x2d);
          FUN_05477b24(aCStack_50,auStack_58);
          Sexy::Color::Color((Color *)aIStack_40,0);
          Sexy::PrimeTypeface::DrawString_Line
                    ((PrimeTypeface *)(float)(iVar4 + iVar18),(float)(iVar5 + iVar19),(float)iVar6,
                     uVar15,param_1,aCStack_50,0,aIStack_40,0);
          FUN_05476c50(aCStack_50);
          FUN_05476c50(auStack_58);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60)
        ;
      }
LAB_0396f03c:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
      std::string::~string((string *)aRStack_70);
      std::string::~string(asStack_78);
      std::string::~string(asStack_80);
    }
LAB_0396eb90:
    std::string::~string(asStack_88);
    goto LAB_0396eb98;
  }
  pNVar8 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar8,iVar4);
  if (cVar2 != '\0') {
    iVar4 = AvatarChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar4);
    bVar3 = std::operator!=(asStack_80,"");
    if (bVar3) {
      std::string::string(asStack_78,"avatar_piece_");
      nop();
      FUN_05475d88((string *)aRStack_70,asStack_80);
      FUN_031dcc6c(asStack_68,asStack_78,(string *)aRStack_70);
      psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr()
      ;
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar9);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_60);
      if (cVar2 != '\0') {
        pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
        iVar4 = *(int *)(this + 0x50);
        pLVar11 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
        iVar19 = *(int *)(this + 0x54);
        pSVar12 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
        Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
        lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        pIVar10 = (Image *)StringHelper::ToImage((string *)(lVar13 + 0x60),false);
        iVar4 = *(int *)(this + 0x50);
        pLVar11 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
        iVar19 = *(int *)(this + 0x54);
        pSVar12 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
        pLVar11 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
        iVar20 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
        pSVar12 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
        iVar7 = SalesProgressBar::GetCurrentLevel(pSVar12);
        if (pIVar10 != (Image *)0x0) {
          iVar18 = (int)(((float)iVar4 - (float)iVar5 * 0.6) * 0.5);
          iVar6 = (int)(((float)iVar19 - (float)iVar6 * 0.6) * 0.5);
          Sexy::Graphics::DrawImage
                    (param_1,pIVar10,iVar18,iVar6,(int)((float)iVar20 * 0.6),
                     (int)((float)iVar7 * 0.6));
          Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
          uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_20)
          ;
          iVar4 = FUN_0396c5e8(0x19);
          iVar19 = FUN_0396c5e8(0x23);
          iVar5 = FUN_0396c5e8(0x2d);
          FUN_05477b24(aCStack_50,auStack_58);
          Sexy::Color::Color((Color *)aIStack_40,0);
          Sexy::PrimeTypeface::DrawString_Line
                    ((PrimeTypeface *)(float)(iVar4 + iVar18),(float)(iVar19 + iVar6),(float)iVar5,
                     uVar15,param_1,aCStack_50,0,(Color *)aIStack_40,0);
          FUN_05476c50(aCStack_50);
          FUN_05476c50(auStack_58);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
      std::string::~string(asStack_68);
      std::string::~string((string *)aRStack_70);
      std::string::~string(asStack_78);
    }
    std::string::~string(asStack_80);
    goto LAB_0396eb98;
  }
  pNVar8 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar8,iVar4);
  if (cVar2 != '\0') {
    lVar13 = NewAvatar::GetNewAvatarPieceImage(iVar4);
    if (lVar13 != 0) {
      Sexy::Insets::Insets(aIStack_40,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      DrawAdaptiveImage(param_1,aIStack_40,lVar13);
      Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
      uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_20);
      iVar4 = FUN_0396c5e8(0x19);
      iVar19 = FUN_0396c5e8(0x23);
      iVar5 = FUN_0396c5e8(0x2d);
      FUN_05477b24(aCStack_50,auStack_58);
      Sexy::Color::Color((Color *)aIStack_40,0);
      Sexy::PrimeTypeface::DrawString_Line
                ((PrimeTypeface *)(float)iVar4,(float)iVar19,(float)iVar5,uVar15,param_1,aCStack_50,
                 0,aIStack_40,0);
      FUN_05476c50(aCStack_50);
      FUN_05476c50(auStack_58);
    }
    goto LAB_0396eb98;
  }
  OtherServerNameMapper::GetInstance();
  cVar2 = FUN_0396c1a0(iVar4);
  if (cVar2 == '\0') {
    OtherServerNameMapper::GetInstance();
    cVar2 = FUN_0396c190(iVar4);
    if (cVar2 == '\0') {
      OtherServerNameMapper::GetInstance();
      cVar2 = FUN_0396c1b0(iVar4);
      if (cVar2 == '\0') {
        pNVar8 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
        cVar2 = NameMapperBase::ContainsId(pNVar8,iVar4);
        if (cVar2 != '\0') {
          iVar4 = PlantAccessoryInfoMapper::GetInstance();
          NameMapperBase::GetNameForId(iVar4);
          psVar9 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
          pLVar11 = (LotteryResultProgressBar *)PlantAccessoryMgr::GetAccessoryDisplayImage(psVar9);
          if (pLVar11 != (LotteryResultProgressBar *)0x0) {
            pPVar16 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
            PlantAccessoryMgr::GetAccessoryUIInfo(pPVar16,asStack_68);
            switch(local_20[0]) {
            case 0:
              pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd308);
              break;
            case 1:
              pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
              break;
            case 2:
              pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd418);
              break;
            case 3:
            case 4:
              pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd138);
              break;
            default:
              pIVar10 = (Image *)0x0;
            }
            iVar4 = *(int *)(this + 0x50);
            pLVar17 = (LotteryResultProgressBar *)
                      CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
            iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
            iVar19 = *(int *)(this + 0x54);
            pSVar12 = (SalesProgressBar *)
                      CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
            iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
            Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
            iVar4 = *(int *)(this + 0x50);
            iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
            iVar19 = *(int *)(this + 0x54);
            iVar20 = (int)(((float)iVar4 - (float)iVar5 * 0.6) * 0.5);
            iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar11);
            iVar6 = (int)(((float)iVar19 - (float)iVar4 * 0.6) * 0.5);
            iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
            iVar19 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar11);
            Sexy::Graphics::DrawImage
                      (param_1,(Image *)pLVar11,iVar20,iVar6,(int)((float)iVar4 * 0.6),
                       (int)((float)iVar19 * 0.6));
            Sexy::StrFormat(L"x%d",asStack_60,(ulong)uVar1);
            uVar15 = PrimeText_PotentialTypeface::Typeface
                               (PrimeText_Game::Typeface_CafeteriaBlack_20);
            iVar4 = FUN_0396c5e8(0x19);
            iVar19 = FUN_0396c5e8(0x23);
            iVar5 = FUN_0396c5e8(0x2d);
            FUN_05477b24(auStack_58,asStack_60);
            Sexy::Color::Color(aCStack_50,0);
            Sexy::PrimeTypeface::DrawString_Line
                      ((PrimeTypeface *)(float)(iVar4 + iVar20),(float)(iVar19 + iVar6),(float)iVar5
                       ,uVar15,param_1,auStack_58,0,aCStack_50,0);
            FUN_05476c50(auStack_58);
            FUN_05476c50(asStack_60);
            TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aIStack_40)
            ;
          }
          std::string::~string(asStack_68);
          goto LAB_0396eb98;
        }
        pNVar8 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
        cVar2 = NameMapperBase::ContainsId(pNVar8,iVar4);
        if (cVar2 == '\0') {
          pNVar8 = (NameMapperBase *)MaterialItemMapper::GetInstance();
          cVar2 = NameMapperBase::ContainsId(pNVar8,iVar4);
          if (cVar2 == '\0') {
            pNVar8 = (NameMapperBase *)RankAvatarMapper::GetInstance();
            cVar2 = NameMapperBase::ContainsId(pNVar8,iVar4);
            if (cVar2 == '\0') goto LAB_0396eb98;
            GetGameItemInfo(iVar4,0x7fffffff,0);
            std::operator+((string *)local_20,"_REWARD_DISPLAY");
            pLVar11 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)aCStack_50,false);
            std::string::~string((string *)aCStack_50);
            if (pLVar11 != (LotteryResultProgressBar *)0x0) {
              pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
              iVar4 = *(int *)(this + 0x50);
              pLVar17 = (LotteryResultProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
              iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
              iVar19 = *(int *)(this + 0x54);
              pSVar12 = (SalesProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
              iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
              Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
              iVar4 = *(int *)(this + 0x50);
              iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
              iVar19 = *(int *)(this + 0x54);
              iVar6 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar11);
              iVar20 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
              iVar7 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar11);
              Sexy::Graphics::DrawImage
                        (param_1,(Image *)pLVar11,(int)(((float)iVar4 - (float)iVar5 * 0.8) * 0.5),
                         (int)(((float)iVar19 - (float)iVar6 * 0.8) * 0.5),
                         (int)((float)iVar20 * 0.8),(int)((float)iVar7 * 0.8));
            }
          }
          else {
            GetGameItemInfo(iVar4,0x100,0);
            pLVar11 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)local_20,false);
            if (pLVar11 != (LotteryResultProgressBar *)0x0) {
              pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
              iVar4 = *(int *)(this + 0x50);
              pLVar17 = (LotteryResultProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
              iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
              iVar19 = *(int *)(this + 0x54);
              pSVar12 = (SalesProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
              iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
              Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
              iVar4 = *(int *)(this + 0x50);
              iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
              iVar19 = *(int *)(this + 0x54);
              iVar5 = (int)(((float)iVar4 - (float)iVar5) * 0.5);
              iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar11);
              iVar6 = (int)(((float)iVar19 - (float)iVar4) * 0.5);
              iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
              iVar19 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar11);
              Sexy::Graphics::DrawImage
                        (param_1,(Image *)pLVar11,iVar5,iVar6,(int)(float)iVar4,(int)(float)iVar19);
              Sexy::StrFormat(L"x%d",asStack_60,(ulong)uVar1);
              uVar15 = PrimeText_PotentialTypeface::Typeface
                                 (PrimeText_Game::Typeface_CafeteriaBlack_20);
              iVar4 = FUN_0396c5e8(0x19);
              iVar19 = FUN_0396c5e8(0x2d);
              FUN_05477b24(auStack_58,asStack_60);
              Sexy::Color::Color(aCStack_50,0);
              Sexy::PrimeTypeface::DrawString_Line
                        ((PrimeTypeface *)(float)(iVar4 * 2 + iVar5),(float)(iVar6 + iVar4 * 2),
                         (float)iVar19,uVar15,param_1,auStack_58,0,aCStack_50,0);
              FUN_05476c50(auStack_58);
              FUN_05476c50(asStack_60);
            }
          }
          GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)aIStack_40);
          goto LAB_0396eb98;
        }
        iVar4 = PlantAccessoryPieceMapper::GetInstance();
        NameMapperBase::GetNameForId(iVar4);
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
          if (cVar2 != '\0') {
            lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
            pLVar11 = (LotteryResultProgressBar *)
                      StringHelper::ToImage((string *)(lVar13 + 0x60),false);
            if (pLVar11 != (LotteryResultProgressBar *)0x0) {
              pPVar16 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
              PlantAccessoryMgr::GetAccessoryUIInfo(pPVar16,asStack_88);
              switch(local_20[0]) {
              case 0:
                pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd308);
                break;
              case 1:
                pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
                break;
              case 2:
                pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd418);
                break;
              case 3:
              case 4:
                pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd138);
                break;
              default:
                pIVar10 = (Image *)0x0;
              }
              iVar4 = *(int *)(this + 0x50);
              pLVar17 = (LotteryResultProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
              iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
              iVar19 = *(int *)(this + 0x54);
              pSVar12 = (SalesProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
              iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
              Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
              iVar4 = *(int *)(this + 0x50);
              iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
              iVar19 = *(int *)(this + 0x54);
              iVar20 = (int)(((float)iVar4 - (float)iVar5 * 0.6) * 0.5);
              iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar11);
              iVar6 = (int)(((float)iVar19 - (float)iVar4 * 0.6) * 0.5);
              iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
              iVar19 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar11);
              Sexy::Graphics::DrawImage
                        (param_1,(Image *)pLVar11,iVar20,iVar6,(int)((float)iVar4 * 0.6),
                         (int)((float)iVar19 * 0.6));
              Sexy::StrFormat(L"x%d",asStack_60,(ulong)uVar1);
              uVar15 = PrimeText_PotentialTypeface::Typeface
                                 (PrimeText_Game::Typeface_CafeteriaBlack_20);
              iVar4 = FUN_0396c5e8(0x19);
              iVar19 = FUN_0396c5e8(0x23);
              iVar5 = FUN_0396c5e8(0x2d);
              FUN_05477b24(auStack_58,asStack_60);
              Sexy::Color::Color(aCStack_50,0);
              Sexy::PrimeTypeface::DrawString_Line
                        ((PrimeTypeface *)(float)(iVar4 + iVar20),(float)(iVar19 + iVar6),
                         (float)iVar5,uVar15,param_1,auStack_58,0,aCStack_50,0);
              FUN_05476c50(auStack_58);
              FUN_05476c50(asStack_60);
              TGAAccumulatedLoginData::~TGAAccumulatedLoginData
                        ((TGAAccumulatedLoginData *)aIStack_40);
            }
          }
          goto LAB_0396f03c;
        }
        goto LAB_0396eb90;
      }
      std::string::string((string *)aIStack_40,"IMAGE_UI_AWARDDIALOG_TACTICALCUKE");
      GetImageByName((string *)aIStack_40);
      std::string::~string((string *)aIStack_40);
      nop();
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_60);
      if (cVar2 != '\0') {
        pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
        iVar4 = *(int *)(this + 0x50);
        pLVar11 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
        iVar19 = *(int *)(this + 0x54);
        pSVar12 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
        Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
        iVar4 = *(int *)(this + 0x50);
        pLVar11 = (LotteryResultProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
        iVar19 = *(int *)(this + 0x54);
        iVar20 = (int)(((float)iVar4 - (float)iVar5 * 0.6) * 0.5);
        pSVar12 = (SalesProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        iVar4 = SalesProgressBar::GetCurrentLevel(pSVar12);
        iVar6 = (int)(((float)iVar19 - (float)iVar4 * 0.6) * 0.5);
        pLVar11 = (LotteryResultProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
        pSVar12 = (SalesProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        iVar19 = SalesProgressBar::GetCurrentLevel(pSVar12);
        pIVar10 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar10,iVar20,iVar6,(int)((float)iVar4 * 0.6),(int)((float)iVar19 * 0.6)
                  );
        Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
        uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_20);
        iVar4 = FUN_0396c5e8(0x19);
        iVar19 = FUN_0396c5e8(0x23);
        iVar5 = FUN_0396c5e8(0x2d);
        FUN_05477b24(aCStack_50,auStack_58);
        Sexy::Color::Color((Color *)aIStack_40,0);
        iVar4 = iVar4 + iVar20;
        iVar19 = iVar19 + iVar6;
        goto LAB_0396f284;
      }
    }
    else {
      std::string::string((string *)aIStack_40,"IMAGE_UI_AWARDDIALOG_GOLD");
      GetImageByName((string *)aIStack_40);
      std::string::~string((string *)aIStack_40);
      nop();
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_60);
      if (cVar2 != '\0') {
        pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
        iVar4 = *(int *)(this + 0x50);
        pLVar11 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
        iVar19 = *(int *)(this + 0x54);
        pSVar12 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
        Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
        iVar4 = *(int *)(this + 0x50);
        pLVar11 = (LotteryResultProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
        iVar19 = *(int *)(this + 0x54);
        iVar20 = (int)(((float)iVar4 - (float)iVar5 * 0.6) * 0.5);
        pSVar12 = (SalesProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        iVar4 = SalesProgressBar::GetCurrentLevel(pSVar12);
        iVar6 = (int)(((float)iVar19 - (float)iVar4 * 0.6) * 0.5);
        pLVar11 = (LotteryResultProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
        pSVar12 = (SalesProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        iVar19 = SalesProgressBar::GetCurrentLevel(pSVar12);
        pIVar10 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar10,iVar20,iVar6,(int)((float)iVar4 * 0.6),(int)((float)iVar19 * 0.6)
                  );
        Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
        uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_20);
        iVar4 = FUN_0396c5e8(0xc);
        iVar19 = FUN_0396c5e8(0x22);
        iVar5 = FUN_0396c5e8(0x2d);
        FUN_05477b24(aCStack_50,auStack_58);
        Sexy::Color::Color((Color *)aIStack_40,0);
        iVar4 = iVar4 + iVar20;
        iVar19 = iVar19 + iVar6;
        goto LAB_0396f284;
      }
    }
  }
  else {
    std::string::string((string *)aIStack_40,"IMAGE_UI_AWARDDIALOG_GEM");
    GetImageByName((string *)aIStack_40);
    std::string::~string((string *)aIStack_40);
    nop();
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_60);
    if (cVar2 != '\0') {
      pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
      iVar4 = *(int *)(this + 0x50);
      pLVar11 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
      iVar19 = *(int *)(this + 0x54);
      pSVar12 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
      iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
      Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
      iVar4 = *(int *)(this + 0x50);
      pLVar11 = (LotteryResultProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
      iVar19 = *(int *)(this + 0x54);
      iVar4 = (int)(((float)iVar4 - (float)iVar5 * 0.6) * 0.5);
      pSVar12 = (SalesProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
      iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
      iVar19 = (int)(((float)iVar19 - (float)iVar5 * 0.6) * 0.5);
      pLVar11 = (LotteryResultProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
      pSVar12 = (SalesProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
      iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
      pIVar10 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
      Sexy::Graphics::DrawImage
                (param_1,pIVar10,iVar4,iVar19,(int)((float)iVar5 * 0.6),(int)((float)iVar6 * 0.6));
      Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
      uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_20);
      iVar5 = FUN_0396c5e8(0x19);
      iVar4 = iVar5 + iVar4;
      iVar19 = iVar19 + iVar5;
      iVar5 = FUN_0396c5e8(0x2d);
      FUN_05477b24(aCStack_50,auStack_58);
      Sexy::Color::Color((Color *)aIStack_40,0);
LAB_0396f284:
      local_98 = auStack_58;
      Sexy::PrimeTypeface::DrawString_Line
                ((PrimeTypeface *)(float)iVar4,(float)iVar19,(float)iVar5,uVar15,param_1,aCStack_50,
                 0,aIStack_40,0);
      FUN_05476c50(aCStack_50);
      FUN_05476c50(local_98);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
LAB_0396eb98:
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

