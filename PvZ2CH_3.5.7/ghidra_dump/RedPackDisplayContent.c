// Class: RedPackDisplayContent


/* RedPackDisplayContent::~RedPackDisplayContent() */

void __thiscall RedPackDisplayContent::~RedPackDisplayContent(RedPackDisplayContent *this)

{
  *(undefined ***)this = &PTR_GetClass_06800550;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RedPackDisplayContent::~RedPackDisplayContent() */

void __thiscall RedPackDisplayContent::~RedPackDisplayContent(RedPackDisplayContent *this)

{
  ~RedPackDisplayContent(this);
  AK::FreeHook(this);
  return;
}


/* RedPackDisplayContent::RedPackDisplayContent(RedPackDisplayData const&) */

void __thiscall
RedPackDisplayContent::RedPackDisplayContent
          (RedPackDisplayContent *this,RedPackDisplayData *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06800550;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0xd4));
  *(undefined8 *)(this + 0xd4) = *(undefined8 *)param_1;
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackDisplayContent::Draw(Sexy::Graphics*) */

void __thiscall RedPackDisplayContent::Draw(RedPackDisplayContent *this,Graphics *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  NameMapperBase *pNVar11;
  string *psVar12;
  long lVar13;
  undefined8 uVar14;
  Image *pIVar15;
  LotteryResultProgressBar *pLVar16;
  SalesProgressBar *pSVar17;
  PlantAccessoryMgr *pPVar18;
  LotteryResultProgressBar *pLVar19;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar20;
  string *extraout_x1;
  Image *pIVar21;
  char *__s;
  float fVar22;
  int iVar23;
  float fVar24;
  GraphicsAutoState aGStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  Sexy aSStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [32];
  undefined4 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_78,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  iVar4 = *(int *)(this + 0xd8);
  uVar1 = *(uint *)(this + 0xd4);
  pNVar11 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar11,iVar4);
  if (cVar2 != '\0') {
    iVar4 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar4);
    psVar12 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar12);
    lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
    FUN_05475ffc(aSStack_58,lVar13 + 0x20,0xe,0xffffffffffffffff);
    uVar14 = FUN_0547429c(aSStack_58);
    Sexy::StrFormat("%s%s",asStack_50,"IMAGE_UI_PACKETS_",uVar14);
    Sexy::StringToUpper(aSStack_58,extraout_x1);
    std::operator+((string *)&PlantHeadshot::PlantPrefix,asStack_48);
    pIVar15 = (Image *)StringHelper::ToImage(asStack_40,true);
    std::string::~string(asStack_40);
    std::string::~string(asStack_48);
    lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
    switch(*(undefined4 *)(lVar13 + 0xd0)) {
    case 0:
      pIVar21 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1038);
      break;
    case 1:
      pIVar21 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0cf0);
      break;
    case 2:
      pIVar21 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0c70);
      break;
    case 3:
      pIVar21 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0e70);
      break;
    case 4:
      pIVar21 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0ba0);
      break;
    default:
      pIVar21 = (Image *)0x0;
    }
    iVar4 = *(int *)(this + 0x50);
    pLVar16 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0c70);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    iVar8 = *(int *)(this + 0x54);
    pSVar17 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0c70);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Graphics::DrawImage(param_1,pIVar21,(iVar4 - iVar6) / 2,(iVar8 - iVar7) / 2);
    Sexy::Graphics::DrawImage
              (param_1,pIVar15,(int)((float)*(int *)(this + 0x50) * 0.06999999),
               (int)((float)*(int *)(this + 0x54) * 0.06999999),
               (int)((float)*(int *)(this + 0x50) * 0.86),(int)((float)*(int *)(this + 0x54) * 0.86)
              );
    Sexy::StrFormat(L"x%d",asStack_40,(ulong)uVar1);
    FUN_05476c50(asStack_40);
    std::string::~string(asStack_50);
    std::string::~string((string *)aSStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    std::string::~string(asStack_68);
    goto LAB_041c0f3c;
  }
  pNVar11 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar11,iVar4);
  if (cVar2 == '\0') {
    pNVar11 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsId(pNVar11,iVar4);
    if (cVar2 != '\0') {
      iVar4 = AvatarChipNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar4);
      bVar3 = std::operator!=(asStack_68,"");
      if (bVar3) {
        std::string::string((string *)aRStack_60,"avatar_piece_");
        nop();
        FUN_05475d88((string *)aSStack_58,asStack_68);
        FUN_031dcc6c(asStack_50,(string *)aRStack_60,(string *)aSStack_58);
        psVar12 = (string *)
                  Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
        ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar12);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_48);
        if (cVar2 != '\0') {
          pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0c70);
          iVar4 = *(int *)(this + 0x50);
          pLVar16 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0c70);
          iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
          iVar8 = *(int *)(this + 0x54);
          pSVar17 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0c70);
          iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
          Sexy::Graphics::DrawImage(param_1,pIVar15,(iVar4 - iVar6) / 2,(iVar8 - iVar7) / 2);
          lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
          pIVar15 = (Image *)StringHelper::ToImage((string *)(lVar13 + 0x60),false);
          iVar9 = *(int *)(this + 0x50);
          pLVar16 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0f10);
          iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
          iVar4 = *(int *)(this + 0x54);
          pSVar17 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0f10);
          iVar6 = SalesProgressBar::GetCurrentLevel(pSVar17);
          pLVar16 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0f10);
          iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
          pSVar17 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0f10);
          iVar5 = SalesProgressBar::GetCurrentLevel(pSVar17);
          if (pIVar15 != (Image *)0x0) {
            Sexy::Graphics::DrawImage
                      (param_1,pIVar15,(int)(((float)iVar9 - (float)iVar8 * 0.6) * 0.5),
                       (int)(((float)iVar4 - (float)iVar6 * 0.6) * 0.5),(int)((float)iVar7 * 0.6),
                       (int)((float)iVar5 * 0.6));
            Sexy::StrFormat(L"x%d",asStack_40,(ulong)uVar1);
            FUN_05476c50(asStack_40);
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48)
        ;
        std::string::~string(asStack_50);
        std::string::~string((string *)aSStack_58);
        std::string::~string((string *)aRStack_60);
      }
      std::string::~string(asStack_68);
      goto LAB_041c0f3c;
    }
    OtherServerNameMapper::GetInstance();
    cVar2 = FUN_041bbe90(iVar4);
    if (cVar2 == '\0') {
      OtherServerNameMapper::GetInstance();
      cVar2 = FUN_041bbe80(iVar4);
      if (cVar2 == '\0') {
        OtherServerNameMapper::GetInstance();
        cVar2 = FUN_041bbea0(iVar4);
        if (cVar2 == '\0') {
          pNVar11 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
          cVar2 = NameMapperBase::ContainsId(pNVar11,iVar4);
          if (cVar2 != '\0') {
            iVar4 = PlantAccessoryInfoMapper::GetInstance();
            NameMapperBase::GetNameForId(iVar4);
            psVar12 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
            pLVar16 = (LotteryResultProgressBar *)
                      PlantAccessoryMgr::GetAccessoryDisplayImage(psVar12);
            if (pLVar16 != (LotteryResultProgressBar *)0x0) {
              pPVar18 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
              PlantAccessoryMgr::GetAccessoryUIInfo(pPVar18,asStack_50);
              switch(local_20) {
              case 0:
                pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0cf0);
                break;
              case 1:
                pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0c70);
                break;
              case 2:
                pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0e70);
                break;
              case 3:
              case 4:
                pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0ba0);
                break;
              default:
                pIVar15 = (Image *)0x0;
              }
              iVar4 = *(int *)(this + 0x50);
              pLVar19 = (LotteryResultProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0c70);
              iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
              iVar8 = *(int *)(this + 0x54);
              pSVar17 = (SalesProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0c70);
              iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
              Sexy::Graphics::DrawImage(param_1,pIVar15,(iVar4 - iVar6) / 2,(iVar8 - iVar7) / 2);
              iVar4 = *(int *)(this + 0x50);
              iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
              iVar8 = *(int *)(this + 0x54);
              iVar7 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar16);
              iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
              iVar9 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar16);
              Sexy::Graphics::DrawImage
                        (param_1,(Image *)pLVar16,(int)(((float)iVar4 - (float)iVar6 * 0.6) * 0.5),
                         (int)(((float)iVar8 - (float)iVar7 * 0.6) * 0.5),(int)((float)iVar5 * 0.6),
                         (int)((float)iVar9 * 0.6));
              Sexy::StrFormat(L"x%d",(ulong)uVar1);
              FUN_05476c50(asStack_48);
              TGAAccumulatedLoginData::~TGAAccumulatedLoginData
                        ((TGAAccumulatedLoginData *)asStack_40);
            }
            std::string::~string(asStack_50);
            goto LAB_041c0f3c;
          }
          pNVar11 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
          cVar2 = NameMapperBase::ContainsId(pNVar11,iVar4);
          if (cVar2 == '\0') goto LAB_041c0f3c;
          iVar4 = PlantAccessoryPieceMapper::GetInstance();
          NameMapperBase::GetNameForId(iVar4);
          bVar3 = std::operator!=(asStack_70,"");
          if (bVar3) {
            FUN_05475d88(asStack_68,asStack_70);
            std::string::string((string *)aRStack_60,"_piece");
            nop();
            FUN_031dcc6c(aSStack_58,asStack_68,(string *)aRStack_60);
            psVar12 = (string *)
                      Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
            ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar12);
            cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_50);
            if (cVar2 != '\0') {
              lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
              pLVar16 = (LotteryResultProgressBar *)
                        StringHelper::ToImage((string *)(lVar13 + 0x60),false);
              if (pLVar16 != (LotteryResultProgressBar *)0x0) {
                pPVar18 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance()
                ;
                PlantAccessoryMgr::GetAccessoryUIInfo(pPVar18,asStack_70);
                switch(local_20) {
                case 0:
                  pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0cf0);
                  break;
                case 1:
                  pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0c70);
                  break;
                case 2:
                  pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0e70);
                  break;
                case 3:
                case 4:
                  pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0ba0);
                  break;
                default:
                  pIVar15 = (Image *)0x0;
                }
                iVar4 = *(int *)(this + 0x50);
                pLVar19 = (LotteryResultProgressBar *)
                          CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0c70);
                iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
                iVar8 = *(int *)(this + 0x54);
                pSVar17 = (SalesProgressBar *)
                          CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0c70);
                iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
                Sexy::Graphics::DrawImage(param_1,pIVar15,(iVar4 - iVar6) / 2,(iVar8 - iVar7) / 2);
                iVar4 = *(int *)(this + 0x50);
                iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
                iVar8 = *(int *)(this + 0x54);
                iVar7 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar16);
                iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
                iVar9 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar16);
                Sexy::Graphics::DrawImage
                          (param_1,(Image *)pLVar16,(int)(((float)iVar4 - (float)iVar6 * 0.6) * 0.5)
                           ,(int)(((float)iVar8 - (float)iVar7 * 0.6) * 0.5),
                           (int)((float)iVar5 * 0.6),(int)((float)iVar9 * 0.6));
                Sexy::StrFormat(L"x%d",asStack_48,(ulong)uVar1);
                FUN_05476c50(asStack_48);
                TGAAccumulatedLoginData::~TGAAccumulatedLoginData
                          ((TGAAccumulatedLoginData *)asStack_40);
              }
            }
            goto LAB_041c11e8;
          }
          goto LAB_041c0f34;
        }
        __s = "IMAGE_UI_AWARDDIALOG_TACTICALCUKE";
      }
      else {
        __s = "IMAGE_UI_AWARDDIALOG_GOLD";
      }
    }
    else {
      __s = "IMAGE_UI_AWARDDIALOG_GEM";
    }
    std::string::string(asStack_40,__s);
    GetImageByName(asStack_40);
    std::string::~string(asStack_40);
    nop();
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_48);
    if (cVar2 != '\0') {
      pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0c70);
      iVar4 = *(int *)(this + 0x50);
      pLVar16 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0c70);
      iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
      iVar8 = *(int *)(this + 0x54);
      pSVar17 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0c70);
      iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
      Sexy::Graphics::DrawImage(param_1,pIVar15,(iVar4 - iVar6) / 2,(iVar8 - iVar7) / 2);
      iVar4 = *(int *)(this + 0x50);
      pLVar16 = (LotteryResultProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
      iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
      iVar8 = *(int *)(this + 0x54);
      pSVar17 = (SalesProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
      iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
      pLVar16 = (LotteryResultProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
      pSVar17 = (SalesProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
      iVar9 = SalesProgressBar::GetCurrentLevel(pSVar17);
      pIVar15 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
      Sexy::Graphics::DrawImage
                (param_1,pIVar15,(int)(((float)iVar4 - (float)iVar6 * 0.6) * 0.5),
                 (int)(((float)iVar8 - (float)iVar7 * 0.6) * 0.5),(int)((float)iVar5 * 0.6),
                 (int)((float)iVar9 * 0.6));
      Sexy::StrFormat(L"x%d",asStack_40,(ulong)uVar1);
      FUN_05476c50(asStack_40);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
  }
  else {
    iVar4 = PlantChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar4);
    bVar3 = std::operator!=(asStack_70,"");
    if (bVar3) {
      std::string::string(asStack_68,"plant_piece_");
      nop();
      FUN_05475d88(aRStack_60,asStack_70);
      FUN_031dcc6c(aSStack_58,asStack_68,aRStack_60);
      psVar12 = (string *)
                Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar12);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_50);
      if (cVar2 != '\0') {
        psVar12 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar12);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_48);
        if (cVar2 != '\0') {
          lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
          switch(*(undefined4 *)(lVar13 + 0xd0)) {
          case 0:
            pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1038);
            break;
          case 1:
            pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0cf0);
            break;
          case 2:
            pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0c70);
            break;
          case 3:
            pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0e70);
            break;
          case 4:
            pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0ba0);
            break;
          default:
            pIVar15 = (Image *)0x0;
          }
          iVar4 = *(int *)(this + 0x50);
          pLVar16 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0c70);
          iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
          iVar8 = *(int *)(this + 0x54);
          pSVar17 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0c70);
          iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
          Sexy::Graphics::DrawImage(param_1,pIVar15,(iVar4 - iVar6) / 2,(iVar8 - iVar7) / 2);
          this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
          lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
          this_01 = (RtWeakPtr *)
                    SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(lVar13 + 8));
          iVar4 = *(int *)(this + 0x50);
          pLVar16 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1600);
          iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
          iVar8 = *(int *)(this + 0x54);
          pSVar17 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1600);
          iVar10 = SalesProgressBar::GetCurrentLevel(pSVar17);
          iVar6 = *(int *)(this_01 + 0x28);
          iVar7 = *(int *)(this_01 + 0x2c);
          iVar23 = *(int *)(this_01 + 0x10);
          iVar5 = *(int *)(this_01 + 0x14);
          pRVar20 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
          fVar24 = (float)(int)(((float)iVar4 - (float)iVar9) * 0.5);
          fVar22 = (float)(int)(((float)iVar8 - (float)iVar10) * 0.5);
          Sexy::Insets::Insets
                    ((Insets *)asStack_40,(int)(fVar24 + (float)*(int *)(this_01 + 0x30)),
                     (int)(fVar22 + (float)*(int *)(this_01 + 0x34)),(int)(float)iVar6,
                     (int)(float)iVar7);
          Sexy::Graphics::DrawImage
                    (param_1,(Image *)pRVar20,(TRect *)asStack_40,(TRect *)(this_01 + 0x20));
          bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
          if (bVar3) {
            lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
            pRVar20 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar13 + 0x48));
            Sexy::Insets::Insets
                      ((Insets *)asStack_40,(int)(fVar24 + (float)*(int *)(this_01 + 0x18)),
                       (int)(fVar22 + (float)*(int *)(this_01 + 0x1c)),(int)(float)iVar23,
                       (int)(float)iVar5);
            Sexy::Graphics::DrawImage
                      (param_1,(Image *)pRVar20,(TRect *)asStack_40,(TRect *)(this_01 + 8));
          }
          Sexy::StrFormat(L"x%d",(Insets *)asStack_40,(ulong)uVar1);
          FUN_05476c50((Insets *)asStack_40);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48)
        ;
      }
LAB_041c11e8:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
      std::string::~string((string *)aSStack_58);
      std::string::~string((string *)aRStack_60);
      std::string::~string(asStack_68);
    }
LAB_041c0f34:
    std::string::~string(asStack_70);
  }
LAB_041c0f3c:
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

