// Class: BirthdayRewardContent


/* BirthdayRewardContent::~BirthdayRewardContent() */

void __thiscall BirthdayRewardContent::~BirthdayRewardContent(BirthdayRewardContent *this)

{
  *(undefined ***)this = &PTR_GetClass_069821c0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* BirthdayRewardContent::~BirthdayRewardContent() */

void __thiscall BirthdayRewardContent::~BirthdayRewardContent(BirthdayRewardContent *this)

{
  ~BirthdayRewardContent(this);
  AK::FreeHook(this);
  return;
}


/* BirthdayRewardContent::BirthdayRewardContent(BirthdayRewardData const&) */

void __thiscall
BirthdayRewardContent::BirthdayRewardContent
          (BirthdayRewardContent *this,BirthdayRewardData *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_069821c0;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0xd4));
  *(undefined8 *)(this + 0xd4) = *(undefined8 *)param_1;
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BirthdayRewardContent::Draw(Sexy::Graphics*) */

void __thiscall BirthdayRewardContent::Draw(BirthdayRewardContent *this,Graphics *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  NameMapperBase *pNVar9;
  string *psVar10;
  PlantAccessoryMgr *pPVar11;
  LotteryResultProgressBar *pLVar12;
  Image *pIVar13;
  LotteryResultProgressBar *pLVar14;
  SalesProgressBar *pSVar15;
  SeedPacketUtils *this_00;
  long lVar16;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar17;
  undefined8 uVar18;
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
  Color aCStack_40 [32];
  undefined4 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_90,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  iVar4 = *(int *)(this + 0xd8);
  uVar1 = *(uint *)(this + 0xd4);
  pNVar9 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar9,iVar4);
  if (cVar2 != '\0') {
    iVar4 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar4);
    psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
    lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    FUN_05475ffc(asStack_68,lVar16 + 0x20,0xe,0xffffffffffffffff);
    uVar18 = FUN_0547429c(asStack_68);
    Sexy::StrFormat("%s%s",asStack_60,"IMAGE_UI_PACKETS_",uVar18);
    pLVar14 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_60,false);
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
    iVar4 = *(int *)(this + 0x50);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    iVar20 = *(int *)(this + 0x54);
    pSVar15 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar15);
    Sexy::Graphics::DrawImage(param_1,pIVar13,(iVar4 - iVar6) / 2,(iVar20 - iVar7) / 2);
    iVar4 = *(int *)(this + 0x50);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
    iVar20 = *(int *)(this + 0x54);
    iVar5 = (int)(((float)iVar4 - (float)iVar6 * 0.6) * 0.5);
    iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar14);
    iVar7 = (int)(((float)iVar20 - (float)iVar4 * 0.6) * 0.5);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
    iVar20 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar14);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pLVar14,iVar5,iVar7,(int)((float)iVar4 * 0.6),
               (int)((float)iVar20 * 0.6));
    Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
    uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_20);
    iVar4 = FUN_04c1dd6c(0x28);
    iVar20 = FUN_04c1dd6c(0x29);
    iVar6 = FUN_04c1dd6c(0x2d);
    FUN_05477b24(aCStack_50,auStack_58);
    Sexy::Color::Color(aCStack_40,1);
    Sexy::PrimeTypeface::DrawString_Line
              ((PrimeTypeface *)(float)(iVar4 + iVar5),(float)(iVar20 + iVar7),(float)iVar6,uVar18,
               param_1,aCStack_50,0,aCStack_40,0);
    FUN_05476c50(aCStack_50);
    FUN_05476c50(auStack_58);
    std::string::~string(asStack_60);
    std::string::~string(asStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    std::string::~string(asStack_78);
    goto LAB_04c201f8;
  }
  pNVar9 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar9,iVar4);
  if (cVar2 != '\0') {
    iVar4 = PlantChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar4);
    bVar3 = std::operator!=(asStack_88,"");
    if (bVar3) {
      std::string::string(asStack_80,"plant_piece_");
      nop();
      FUN_05475d88(asStack_78,asStack_88);
      FUN_031dcc6c(aRStack_70,asStack_80,asStack_78);
      psVar10 = (string *)
                Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar10);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_68);
      if (cVar2 != '\0') {
        psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_60);
        if (cVar2 != '\0') {
          pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
          iVar4 = *(int *)(this + 0x50);
          pLVar14 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
          iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
          iVar20 = *(int *)(this + 0x54);
          pSVar15 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
          iVar7 = SalesProgressBar::GetCurrentLevel(pSVar15);
          Sexy::Graphics::DrawImage(param_1,pIVar13,(iVar4 - iVar6) / 2,(iVar20 - iVar7) / 2);
          this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
          lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
          this_01 = (RtWeakPtr *)
                    SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(lVar16 + 8));
          iVar4 = *(int *)(this + 0x50);
          pLVar14 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e688);
          iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
          iVar20 = *(int *)(this + 0x54);
          iVar19 = (int)(((float)iVar4 - (float)iVar6 * 0.6) * 0.5);
          pSVar15 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e688);
          iVar8 = SalesProgressBar::GetCurrentLevel(pSVar15);
          iVar4 = *(int *)(this_01 + 0x28);
          iVar6 = *(int *)(this_01 + 0x2c);
          iVar7 = *(int *)(this_01 + 0x10);
          iVar5 = *(int *)(this_01 + 0x14);
          fVar22 = (float)iVar19;
          iVar20 = (int)(((float)iVar20 - (float)iVar8 * 0.6) * 0.5);
          pRVar17 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
          fVar21 = (float)iVar20;
          Sexy::Insets::Insets
                    ((Insets *)aCStack_40,(int)(fVar22 + (float)*(int *)(this_01 + 0x30) * 0.6),
                     (int)(fVar21 + (float)*(int *)(this_01 + 0x34) * 0.6),(int)((float)iVar4 * 0.6)
                     ,(int)((float)iVar6 * 0.6));
          Sexy::Graphics::DrawImage
                    (param_1,(Image *)pRVar17,(TRect *)aCStack_40,(TRect *)(this_01 + 0x20));
          bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
          if (bVar3) {
            lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
            pRVar17 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar16 + 0x48));
            Sexy::Insets::Insets
                      ((Insets *)aCStack_40,(int)(fVar22 + (float)*(int *)(this_01 + 0x18) * 0.6),
                       (int)(fVar21 + (float)*(int *)(this_01 + 0x1c) * 0.6),
                       (int)((float)iVar7 * 0.6),(int)((float)iVar5 * 0.6));
            Sexy::Graphics::DrawImage
                      (param_1,(Image *)pRVar17,(TRect *)aCStack_40,(TRect *)(this_01 + 8));
          }
          Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
          uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_20)
          ;
          iVar4 = FUN_04c1dd6c(0x28);
          iVar6 = FUN_04c1dd6c(0x29);
          iVar7 = FUN_04c1dd6c(0x2d);
          FUN_05477b24(aCStack_50,auStack_58);
          Sexy::Color::Color(aCStack_40,1);
          Sexy::PrimeTypeface::DrawString_Line
                    ((PrimeTypeface *)(float)(iVar4 + iVar19),(float)(iVar6 + iVar20),(float)iVar7,
                     uVar18,param_1,aCStack_50,0,(Insets *)aCStack_40,0);
          FUN_05476c50(aCStack_50);
          FUN_05476c50(auStack_58);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60)
        ;
      }
LAB_04c20608:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
      std::string::~string((string *)aRStack_70);
      std::string::~string(asStack_78);
      std::string::~string(asStack_80);
    }
LAB_04c201f0:
    std::string::~string(asStack_88);
    goto LAB_04c201f8;
  }
  pNVar9 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar9,iVar4);
  if (cVar2 != '\0') {
    iVar4 = AvatarChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar4);
    bVar3 = std::operator!=(asStack_80,"");
    if (bVar3) {
      std::string::string(asStack_78,"avatar_piece_");
      nop();
      FUN_05475d88((string *)aRStack_70,asStack_80);
      FUN_031dcc6c(asStack_68,asStack_78,(string *)aRStack_70);
      psVar10 = (string *)
                Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar10);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_60);
      if (cVar2 != '\0') {
        pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
        iVar4 = *(int *)(this + 0x50);
        pLVar14 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
        iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
        iVar20 = *(int *)(this + 0x54);
        pSVar15 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
        iVar7 = SalesProgressBar::GetCurrentLevel(pSVar15);
        Sexy::Graphics::DrawImage(param_1,pIVar13,(iVar4 - iVar6) / 2,(iVar20 - iVar7) / 2);
        lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        pIVar13 = (Image *)StringHelper::ToImage((string *)(lVar16 + 0x60),false);
        iVar4 = *(int *)(this + 0x50);
        pLVar14 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e558);
        iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
        iVar20 = *(int *)(this + 0x54);
        pSVar15 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e558);
        iVar7 = SalesProgressBar::GetCurrentLevel(pSVar15);
        pLVar14 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e558);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
        pSVar15 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e558);
        iVar8 = SalesProgressBar::GetCurrentLevel(pSVar15);
        if (pIVar13 != (Image *)0x0) {
          iVar19 = (int)(((float)iVar4 - (float)iVar6 * 0.6) * 0.5);
          iVar7 = (int)(((float)iVar20 - (float)iVar7 * 0.6) * 0.5);
          Sexy::Graphics::DrawImage
                    (param_1,pIVar13,iVar19,iVar7,(int)((float)iVar5 * 0.6),
                     (int)((float)iVar8 * 0.6));
          Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
          uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_20)
          ;
          iVar4 = FUN_04c1dd6c(0x28);
          iVar20 = FUN_04c1dd6c(0x29);
          iVar6 = FUN_04c1dd6c(0x2d);
          FUN_05477b24(aCStack_50,auStack_58);
          Sexy::Color::Color(aCStack_40,1);
          Sexy::PrimeTypeface::DrawString_Line
                    ((PrimeTypeface *)(float)(iVar4 + iVar19),(float)(iVar20 + iVar7),(float)iVar6,
                     uVar18,param_1,aCStack_50,0,aCStack_40,0);
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
    goto LAB_04c201f8;
  }
  OtherServerNameMapper::GetInstance();
  cVar2 = FUN_04c1d958(iVar4);
  if (cVar2 == '\0') {
    OtherServerNameMapper::GetInstance();
    cVar2 = FUN_04c1d948(iVar4);
    if (cVar2 == '\0') {
      OtherServerNameMapper::GetInstance();
      cVar2 = FUN_04c1d968(iVar4);
      if (cVar2 == '\0') {
        pNVar9 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
        cVar2 = NameMapperBase::ContainsId(pNVar9,iVar4);
        if (cVar2 != '\0') {
          iVar4 = PlantAccessoryInfoMapper::GetInstance();
          NameMapperBase::GetNameForId(iVar4);
          psVar10 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
          pLVar14 = (LotteryResultProgressBar *)PlantAccessoryMgr::GetAccessoryDisplayImage(psVar10)
          ;
          if (pLVar14 != (LotteryResultProgressBar *)0x0) {
            pPVar11 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
            PlantAccessoryMgr::GetAccessoryUIInfo(pPVar11,asStack_68);
            switch(local_20) {
            case 0:
              pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e928);
              break;
            case 1:
              pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
              break;
            case 2:
              pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e6b0);
              break;
            case 3:
            case 4:
              pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e728);
              break;
            default:
              pIVar13 = (Image *)0x0;
            }
            iVar4 = *(int *)(this + 0x50);
            pLVar12 = (LotteryResultProgressBar *)
                      CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
            iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
            iVar20 = *(int *)(this + 0x54);
            pSVar15 = (SalesProgressBar *)
                      CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
            iVar7 = SalesProgressBar::GetCurrentLevel(pSVar15);
            Sexy::Graphics::DrawImage(param_1,pIVar13,(iVar4 - iVar6) / 2,(iVar20 - iVar7) / 2);
            iVar4 = *(int *)(this + 0x50);
            iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
            iVar20 = *(int *)(this + 0x54);
            iVar5 = (int)(((float)iVar4 - (float)iVar6 * 0.6) * 0.5);
            iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar14);
            iVar7 = (int)(((float)iVar20 - (float)iVar4 * 0.6) * 0.5);
            iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
            iVar20 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar14);
            Sexy::Graphics::DrawImage
                      (param_1,(Image *)pLVar14,iVar5,iVar7,(int)((float)iVar4 * 0.6),
                       (int)((float)iVar20 * 0.6));
            Sexy::StrFormat(L"x%d",asStack_60,(ulong)uVar1);
            uVar18 = PrimeText_PotentialTypeface::Typeface
                               (PrimeText_Game::Typeface_CafeteriaBlack_20);
            iVar4 = FUN_04c1dd6c(0x28);
            iVar20 = FUN_04c1dd6c(0x29);
            iVar6 = FUN_04c1dd6c(0x2d);
            FUN_05477b24(auStack_58,asStack_60);
            Sexy::Color::Color(aCStack_50,1);
            Sexy::PrimeTypeface::DrawString_Line
                      ((PrimeTypeface *)(float)(iVar4 + iVar5),(float)(iVar20 + iVar7),(float)iVar6,
                       uVar18,param_1,auStack_58,0,aCStack_50,0);
            FUN_05476c50(auStack_58);
            FUN_05476c50(asStack_60);
            TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aCStack_40)
            ;
          }
          std::string::~string(asStack_68);
          goto LAB_04c201f8;
        }
        pNVar9 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
        cVar2 = NameMapperBase::ContainsId(pNVar9,iVar4);
        if (cVar2 == '\0') goto LAB_04c201f8;
        iVar4 = PlantAccessoryPieceMapper::GetInstance();
        NameMapperBase::GetNameForId(iVar4);
        bVar3 = std::operator!=(asStack_88,"");
        if (bVar3) {
          FUN_05475d88(asStack_80,asStack_88);
          std::string::string(asStack_78,"_piece");
          nop();
          FUN_031dcc6c(aRStack_70,asStack_80,asStack_78);
          psVar10 = (string *)
                    Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
          ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar10);
          cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_68);
          if (cVar2 != '\0') {
            lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
            pLVar14 = (LotteryResultProgressBar *)
                      StringHelper::ToImage((string *)(lVar16 + 0x60),false);
            if (pLVar14 != (LotteryResultProgressBar *)0x0) {
              pPVar11 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
              PlantAccessoryMgr::GetAccessoryUIInfo(pPVar11,asStack_88);
              switch(local_20) {
              case 0:
                pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e928);
                break;
              case 1:
                pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
                break;
              case 2:
                pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e6b0);
                break;
              case 3:
              case 4:
                pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e728);
                break;
              default:
                pIVar13 = (Image *)0x0;
              }
              iVar4 = *(int *)(this + 0x50);
              pLVar12 = (LotteryResultProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
              iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
              iVar20 = *(int *)(this + 0x54);
              pSVar15 = (SalesProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
              iVar7 = SalesProgressBar::GetCurrentLevel(pSVar15);
              Sexy::Graphics::DrawImage(param_1,pIVar13,(iVar4 - iVar6) / 2,(iVar20 - iVar7) / 2);
              iVar4 = *(int *)(this + 0x50);
              iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
              iVar20 = *(int *)(this + 0x54);
              iVar5 = (int)(((float)iVar4 - (float)iVar6 * 0.6) * 0.5);
              iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar14);
              iVar7 = (int)(((float)iVar20 - (float)iVar4 * 0.6) * 0.5);
              iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
              iVar20 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar14);
              Sexy::Graphics::DrawImage
                        (param_1,(Image *)pLVar14,iVar5,iVar7,(int)((float)iVar4 * 0.6),
                         (int)((float)iVar20 * 0.6));
              Sexy::StrFormat(L"x%d",asStack_60,(ulong)uVar1);
              uVar18 = PrimeText_PotentialTypeface::Typeface
                                 (PrimeText_Game::Typeface_CafeteriaBlack_20);
              iVar4 = FUN_04c1dd6c(0x28);
              iVar20 = FUN_04c1dd6c(0x29);
              iVar6 = FUN_04c1dd6c(0x2d);
              FUN_05477b24(auStack_58,asStack_60);
              Sexy::Color::Color(aCStack_50,1);
              Sexy::PrimeTypeface::DrawString_Line
                        ((PrimeTypeface *)(float)(iVar4 + iVar5),(float)(iVar20 + iVar7),
                         (float)iVar6,uVar18,param_1,auStack_58,0,aCStack_50,0);
              FUN_05476c50(auStack_58);
              FUN_05476c50(asStack_60);
              TGAAccumulatedLoginData::~TGAAccumulatedLoginData
                        ((TGAAccumulatedLoginData *)aCStack_40);
            }
          }
          goto LAB_04c20608;
        }
        goto LAB_04c201f0;
      }
      std::string::string((string *)aCStack_40,"IMAGE_UI_AWARDDIALOG_TACTICALCUKE");
      GetImageByName((string *)aCStack_40);
      std::string::~string((string *)aCStack_40);
      nop();
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_60);
      if (cVar2 != '\0') {
        pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
        iVar4 = *(int *)(this + 0x50);
        pLVar14 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
        iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
        iVar20 = *(int *)(this + 0x54);
        pSVar15 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
        iVar7 = SalesProgressBar::GetCurrentLevel(pSVar15);
        Sexy::Graphics::DrawImage(param_1,pIVar13,(iVar4 - iVar6) / 2,(iVar20 - iVar7) / 2);
        iVar4 = *(int *)(this + 0x50);
        pLVar14 = (LotteryResultProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
        iVar20 = *(int *)(this + 0x54);
        iVar5 = (int)(((float)iVar4 - (float)iVar6 * 0.6) * 0.5);
        pSVar15 = (SalesProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        iVar4 = SalesProgressBar::GetCurrentLevel(pSVar15);
        iVar7 = (int)(((float)iVar20 - (float)iVar4 * 0.6) * 0.5);
        pLVar14 = (LotteryResultProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
        pSVar15 = (SalesProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        iVar20 = SalesProgressBar::GetCurrentLevel(pSVar15);
        pIVar13 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar13,iVar5,iVar7,(int)((float)iVar4 * 0.6),(int)((float)iVar20 * 0.6))
        ;
        Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
        uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_20);
        iVar4 = FUN_04c1dd6c(0x28);
        iVar20 = FUN_04c1dd6c(0x29);
        iVar6 = FUN_04c1dd6c(0x2d);
        FUN_05477b24(aCStack_50,auStack_58);
        Sexy::Color::Color(aCStack_40,1);
        iVar4 = iVar4 + iVar5;
        iVar20 = iVar20 + iVar7;
        goto LAB_04c2087c;
      }
    }
    else {
      std::string::string((string *)aCStack_40,"IMAGE_UI_AWARDDIALOG_GOLD");
      GetImageByName((string *)aCStack_40);
      std::string::~string((string *)aCStack_40);
      nop();
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_60);
      if (cVar2 != '\0') {
        pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
        iVar4 = *(int *)(this + 0x50);
        pLVar14 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
        iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
        iVar20 = *(int *)(this + 0x54);
        pSVar15 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
        iVar7 = SalesProgressBar::GetCurrentLevel(pSVar15);
        Sexy::Graphics::DrawImage(param_1,pIVar13,(iVar4 - iVar6) / 2,(iVar20 - iVar7) / 2);
        iVar4 = *(int *)(this + 0x50);
        pLVar14 = (LotteryResultProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
        iVar20 = *(int *)(this + 0x54);
        iVar5 = (int)(((float)iVar4 - (float)iVar6 * 0.6) * 0.5);
        pSVar15 = (SalesProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        iVar4 = SalesProgressBar::GetCurrentLevel(pSVar15);
        iVar7 = (int)(((float)iVar20 - (float)iVar4 * 0.6) * 0.5);
        pLVar14 = (LotteryResultProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
        pSVar15 = (SalesProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        iVar20 = SalesProgressBar::GetCurrentLevel(pSVar15);
        pIVar13 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar13,iVar5,iVar7,(int)((float)iVar4 * 0.6),(int)((float)iVar20 * 0.6))
        ;
        Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
        uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_20);
        iVar4 = FUN_04c1dd6c(0xc);
        iVar20 = FUN_04c1dd6c(0x22);
        iVar6 = FUN_04c1dd6c(0x2d);
        FUN_05477b24(aCStack_50,auStack_58);
        Sexy::Color::Color(aCStack_40,1);
        iVar4 = iVar4 + iVar5;
        iVar20 = iVar20 + iVar7;
        goto LAB_04c2087c;
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
      pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
      iVar4 = *(int *)(this + 0x50);
      pLVar14 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
      iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
      iVar20 = *(int *)(this + 0x54);
      pSVar15 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8e630);
      iVar7 = SalesProgressBar::GetCurrentLevel(pSVar15);
      Sexy::Graphics::DrawImage(param_1,pIVar13,(iVar4 - iVar6) / 2,(iVar20 - iVar7) / 2);
      iVar4 = *(int *)(this + 0x50);
      pLVar14 = (LotteryResultProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
      iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
      iVar20 = *(int *)(this + 0x54);
      iVar4 = (int)(((float)iVar4 - (float)iVar6 * 0.6) * 0.5);
      pSVar15 = (SalesProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
      iVar6 = SalesProgressBar::GetCurrentLevel(pSVar15);
      iVar20 = (int)(((float)iVar20 - (float)iVar6 * 0.6) * 0.5);
      pLVar14 = (LotteryResultProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
      iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
      pSVar15 = (SalesProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
      iVar7 = SalesProgressBar::GetCurrentLevel(pSVar15);
      pIVar13 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
      Sexy::Graphics::DrawImage
                (param_1,pIVar13,iVar4,iVar20,(int)((float)iVar6 * 0.6),(int)((float)iVar7 * 0.6));
      Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
      uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_20);
      iVar6 = FUN_04c1dd6c(0x19);
      iVar4 = iVar6 + iVar4;
      iVar20 = iVar20 + iVar6;
      iVar6 = FUN_04c1dd6c(0x2d);
      FUN_05477b24(aCStack_50,auStack_58);
      Sexy::Color::Color(aCStack_40,1);
LAB_04c2087c:
      local_98 = auStack_58;
      Sexy::PrimeTypeface::DrawString_Line
                ((PrimeTypeface *)(float)iVar4,(float)iVar20,(float)iVar6,uVar18,param_1,aCStack_50,
                 0,aCStack_40,0);
      FUN_05476c50(aCStack_50);
      FUN_05476c50(local_98);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
LAB_04c201f8:
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

