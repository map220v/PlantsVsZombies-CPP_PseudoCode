// Class: DaliySignRewardContent


/* DaliySignRewardContent::TouchesCanceled() */

void __thiscall DaliySignRewardContent::TouchesCanceled(DaliySignRewardContent *this)

{
  if (*(long *)(this + 0xe8) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0xe8));
    *(undefined8 *)(this + 0xe8) = 0;
  }
  return;
}


/* DaliySignRewardContent::~DaliySignRewardContent() */

void __thiscall DaliySignRewardContent::~DaliySignRewardContent(DaliySignRewardContent *this)

{
  *(undefined ***)this = &PTR_GetClass_066d8710;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0xe0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* DaliySignRewardContent::~DaliySignRewardContent() */

void __thiscall DaliySignRewardContent::~DaliySignRewardContent(DaliySignRewardContent *this)

{
  ~DaliySignRewardContent(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaliySignRewardContent::setupScreen() */

void __thiscall DaliySignRewardContent::setupScreen(DaliySignRewardContent *this)

{
  string asStack_48 [8];
  undefined1 auStack_40 [8];
  int local_38 [10];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetGameItemInfo(*(int *)(this + 0xd4),0x7fffffff,0);
  if (local_38[0] != 0) {
    thunk_FUN_05477b9c(this + 0xe0,auStack_10);
    Sexy::StrFormat("x%d",asStack_48,(ulong)*(uint *)(this + 0xd8));
    Sexy::ToWString(asStack_48);
    thunk_FUN_05477668(this + 0xe0,auStack_40);
    FUN_05476c50(auStack_40);
    std::string::~string(asStack_48);
  }
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaliySignRewardContent::DaliySignRewardContent(NDLoginRewardBonus const&) */

void __thiscall
DaliySignRewardContent::DaliySignRewardContent
          (DaliySignRewardContent *this,NDLoginRewardBonus *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xd4) = *(undefined8 *)param_1;
  *(undefined ***)this = &PTR_GetClass_066d8710;
  FUN_05476574(this + 0xe0);
  *(undefined8 *)(this + 0xe8) = 0;
  setupScreen(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaliySignRewardContent::TouchBegan(Sexy::Touch const&) */

void DaliySignRewardContent::TouchBegan(Touch *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *this;
  SalesProgressBar *this_00;
  StoneLotteryItemTipUI *this_01;
  long lVar5;
  int iVar6;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0xd0))(&local_20);
  this = (LotteryResultProgressBar *)
         CachedUIResourcePtr<Sexy::Image>::operator->
                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdb30);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this);
  iVar6 = (int)((float)iVar2 + (float)iVar2);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdb30);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar2 = *(int *)(param_1 + 0x50);
  iVar4 = FUN_03972124(5);
  Sexy::Insets::Insets
            (aIStack_18,local_20 + (iVar2 - iVar6) / 2,
             (local_1c - (int)((float)iVar3 * 0.5)) + iVar4,iVar6,(int)((float)iVar3 * 0.5));
  lVar5 = *(long *)(param_1 + 0xe8);
  if (lVar5 == 0) {
    this_01 = ::operator_new(0xe8);
    memset(this_01,0,0xe8);
    StoneLotteryItemTipUI::StoneLotteryItemTipUI(this_01);
    uVar1 = *(uint *)(this_01 + 0x60);
    *(StoneLotteryItemTipUI **)(param_1 + 0xe8) = this_01;
    *(uint *)(this_01 + 0x60) = uVar1 | 0x10;
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),this_01);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(param_1 + 0xe8));
    lVar5 = *(long *)(param_1 + 0xe8);
  }
  PuzzleTip::SetTip(lVar5,param_1 + 0xe0);
  (**(code **)(**(long **)(param_1 + 0xe8) + 0x1a0))(*(long **)(param_1 + 0xe8),aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaliySignRewardContent::Draw(Sexy::Graphics*) */

void __thiscall DaliySignRewardContent::Draw(DaliySignRewardContent *this,Graphics *param_1)

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
  GraphicsAutoState aGStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  string asStack_68 [8];
  RtMixedPtrBase aRStack_60 [8];
  undefined1 auStack_58 [8];
  Color aCStack_50 [16];
  string asStack_40 [32];
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
    Sexy::StrFormat("%s%s",(string *)aRStack_60,"IMAGE_UI_PACKETS_",uVar15);
    pLVar11 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)aRStack_60,false);
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
    iVar4 = *(int *)(this + 0x50);
    pLVar17 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
    iVar19 = *(int *)(this + 0x54);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
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
    uVar15 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
    iVar4 = FUN_03972124(0x28);
    iVar19 = FUN_03972124(0x29);
    iVar5 = FUN_03972124(0x2d);
    FUN_05477b24(aCStack_50,auStack_58);
    Sexy::Color::Color((Color *)asStack_40,1);
    Sexy::PrimeTypeface::DrawString_Line
              ((PrimeTypeface *)(float)(iVar4 + iVar20),(float)(iVar19 + iVar6),(float)iVar5,uVar15,
               param_1,aCStack_50,0,(Color *)asStack_40,0);
    FUN_05476c50(aCStack_50);
    FUN_05476c50(auStack_58);
    std::string::~string((string *)aRStack_60);
    std::string::~string(asStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    std::string::~string(asStack_78);
    goto LAB_03975200;
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
        cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_60);
        if (cVar2 != '\0') {
          pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
          iVar4 = *(int *)(this + 0x50);
          pLVar11 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
          iVar19 = *(int *)(this + 0x54);
          pSVar12 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
          iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
          Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
          this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
          lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
          this_01 = (RtWeakPtr *)
                    SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(lVar13 + 8));
          iVar4 = *(int *)(this + 0x50);
          pLVar11 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdbb0);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
          iVar19 = *(int *)(this + 0x54);
          iVar18 = (int)(((float)iVar4 - (float)iVar5 * 0.4) * 0.5);
          pSVar12 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdbb0);
          iVar7 = SalesProgressBar::GetCurrentLevel(pSVar12);
          iVar4 = *(int *)(this_01 + 0x28);
          iVar5 = *(int *)(this_01 + 0x2c);
          iVar6 = *(int *)(this_01 + 0x10);
          iVar20 = *(int *)(this_01 + 0x14);
          fVar22 = (float)iVar18;
          iVar19 = (int)(((float)iVar19 - (float)iVar7 * 0.4) * 0.5);
          pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
          fVar21 = (float)iVar19;
          Sexy::Insets::Insets
                    ((Insets *)asStack_40,(int)(fVar22 + (float)*(int *)(this_01 + 0x30) * 0.4),
                     (int)(fVar21 + (float)*(int *)(this_01 + 0x34) * 0.4),(int)((float)iVar4 * 0.4)
                     ,(int)((float)iVar5 * 0.4));
          Sexy::Graphics::DrawImage
                    (param_1,(Image *)pRVar14,(TRect *)asStack_40,(TRect *)(this_01 + 0x20));
          bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
          if (bVar3) {
            lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
            pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar13 + 0x48));
            Sexy::Insets::Insets
                      ((Insets *)asStack_40,(int)(fVar22 + (float)*(int *)(this_01 + 0x18) * 0.4),
                       (int)(fVar21 + (float)*(int *)(this_01 + 0x1c) * 0.4),
                       (int)((float)iVar6 * 0.4),(int)((float)iVar20 * 0.4));
            Sexy::Graphics::DrawImage
                      (param_1,(Image *)pRVar14,(TRect *)asStack_40,(TRect *)(this_01 + 8));
          }
          Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
          uVar15 = PrimeText_PotentialTypeface::Typeface
                             (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
          iVar4 = FUN_03972124(0x28);
          iVar5 = FUN_03972124(0x29);
          iVar6 = FUN_03972124(0x2d);
          FUN_05477b24(aCStack_50,auStack_58);
          Sexy::Color::Color((Color *)asStack_40,1);
          Sexy::PrimeTypeface::DrawString_Line
                    ((PrimeTypeface *)(float)(iVar4 + iVar18),(float)(iVar5 + iVar19),(float)iVar6,
                     uVar15,param_1,aCStack_50,0,(Insets *)asStack_40,0);
          FUN_05476c50(aCStack_50);
          FUN_05476c50(auStack_58);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60)
        ;
      }
LAB_03975824:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
      std::string::~string((string *)aRStack_70);
      std::string::~string(asStack_78);
      std::string::~string(asStack_80);
    }
LAB_039751f8:
    std::string::~string(asStack_88);
    goto LAB_03975200;
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
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_60);
      if (cVar2 != '\0') {
        pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
        iVar4 = *(int *)(this + 0x50);
        pLVar11 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
        iVar19 = *(int *)(this + 0x54);
        pSVar12 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
        Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
        lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
        pIVar10 = (Image *)StringHelper::ToImage((string *)(lVar13 + 0x60),false);
        iVar4 = *(int *)(this + 0x50);
        pLVar11 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
        iVar19 = *(int *)(this + 0x54);
        pSVar12 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
        pLVar11 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
        iVar20 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
        pSVar12 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
        iVar7 = SalesProgressBar::GetCurrentLevel(pSVar12);
        if (pIVar10 != (Image *)0x0) {
          iVar18 = (int)(((float)iVar4 - (float)iVar5 * 0.8) * 0.5);
          iVar6 = (int)(((float)iVar19 - (float)iVar6 * 0.8) * 0.5);
          Sexy::Graphics::DrawImage
                    (param_1,pIVar10,iVar18,iVar6,(int)((float)iVar20 * 0.8),
                     (int)((float)iVar7 * 0.8));
          Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
          uVar15 = PrimeText_PotentialTypeface::Typeface
                             (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
          iVar4 = FUN_03972124(0x28);
          iVar19 = FUN_03972124(0x29);
          iVar5 = FUN_03972124(0x2d);
          FUN_05477b24(aCStack_50,auStack_58);
          Sexy::Color::Color((Color *)asStack_40,1);
          Sexy::PrimeTypeface::DrawString_Line
                    ((PrimeTypeface *)(float)(iVar4 + iVar18),(float)(iVar19 + iVar6),(float)iVar5,
                     uVar15,param_1,aCStack_50,0,(Color *)asStack_40,0);
          FUN_05476c50(aCStack_50);
          FUN_05476c50(auStack_58);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      std::string::~string(asStack_68);
      std::string::~string((string *)aRStack_70);
      std::string::~string(asStack_78);
    }
    std::string::~string(asStack_80);
    goto LAB_03975200;
  }
  pNVar8 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar8,iVar4);
  if (cVar2 != '\0') {
    uVar15 = NewAvatar::GetAvatarTinyImage(iVar4);
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
    iVar4 = *(int *)(this + 0x50);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    iVar19 = *(int *)(this + 0x54);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
    Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
    Sexy::Insets::Insets((Insets *)asStack_40,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    DrawAdaptiveImage(param_1,(Insets *)asStack_40,uVar15);
    Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
    uVar15 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
    iVar4 = FUN_03972124(0x28);
    iVar19 = FUN_03972124(0x29);
    iVar5 = FUN_03972124(0x2d);
    FUN_05477b24(aCStack_50,auStack_58);
    Sexy::Color::Color((Color *)asStack_40,1);
    Sexy::PrimeTypeface::DrawString_Line
              ((PrimeTypeface *)(float)iVar4,(float)iVar19,(float)iVar5,uVar15,param_1,aCStack_50,0,
               (Insets *)asStack_40,0);
    FUN_05476c50(aCStack_50);
    FUN_05476c50(auStack_58);
    goto LAB_03975200;
  }
  pNVar8 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar8,iVar4);
  if (cVar2 != '\0') {
    uVar15 = NewAvatar::GetNewAvatarPieceImage(iVar4);
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
    iVar4 = *(int *)(this + 0x50);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    iVar19 = *(int *)(this + 0x54);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
    Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
    Sexy::Insets::Insets((Insets *)asStack_40,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    DrawAdaptiveImage(param_1,(Insets *)asStack_40,uVar15);
    Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
    uVar15 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
    iVar4 = FUN_03972124(0x28);
    iVar19 = FUN_03972124(0x29);
    iVar5 = FUN_03972124(0x2d);
    FUN_05477b24(aCStack_50,auStack_58);
    Sexy::Color::Color((Color *)asStack_40,1);
    Sexy::PrimeTypeface::DrawString_Line
              ((PrimeTypeface *)(float)iVar4,(float)iVar19,(float)iVar5,uVar15,param_1,aCStack_50,0,
               (Insets *)asStack_40,0);
    FUN_05476c50(aCStack_50);
    FUN_05476c50(auStack_58);
    goto LAB_03975200;
  }
  OtherServerNameMapper::GetInstance();
  cVar2 = FUN_03971e2c(iVar4);
  if (cVar2 == '\0') {
    OtherServerNameMapper::GetInstance();
    cVar2 = FUN_03971e1c(iVar4);
    if (cVar2 == '\0') {
      OtherServerNameMapper::GetInstance();
      cVar2 = FUN_03971e3c(iVar4);
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
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdaa8);
              break;
            case 1:
              pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
              break;
            case 2:
              pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd708);
              break;
            case 3:
            case 4:
              pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdbd8);
              break;
            default:
              pIVar10 = (Image *)0x0;
            }
            iVar4 = *(int *)(this + 0x50);
            pLVar17 = (LotteryResultProgressBar *)
                      CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
            iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
            iVar19 = *(int *)(this + 0x54);
            pSVar12 = (SalesProgressBar *)
                      CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
            iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
            Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
            iVar4 = *(int *)(this + 0x50);
            iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
            iVar19 = *(int *)(this + 0x54);
            iVar6 = (int)(((float)iVar4 - (float)iVar5 * 0.6) * 0.5);
            iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar11);
            iVar20 = (int)(((float)iVar19 - (float)iVar4 * 0.6) * 0.5);
            iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
            iVar19 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar11);
            Sexy::Graphics::DrawImage
                      (param_1,(Image *)pLVar11,iVar6,iVar20,(int)((float)iVar4 * 0.6),
                       (int)((float)iVar19 * 0.6));
            Sexy::StrFormat(L"x%d",aRStack_60,(ulong)uVar1);
            uVar15 = PrimeText_PotentialTypeface::Typeface
                               (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
            iVar4 = FUN_03972124(0x28);
            iVar19 = FUN_03972124(0x29);
            iVar5 = FUN_03972124(0x2d);
            FUN_05477b24(auStack_58,aRStack_60);
            Sexy::Color::Color(aCStack_50,1);
            Sexy::PrimeTypeface::DrawString_Line
                      ((PrimeTypeface *)(float)(iVar4 + iVar6),(float)(iVar19 + iVar20),(float)iVar5
                       ,uVar15,param_1,auStack_58,0,aCStack_50,0);
            FUN_05476c50(auStack_58);
            FUN_05476c50(aRStack_60);
            TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)asStack_40)
            ;
          }
          std::string::~string(asStack_68);
          goto LAB_03975200;
        }
        pNVar8 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
        cVar2 = NameMapperBase::ContainsId(pNVar8,iVar4);
        if (cVar2 == '\0') {
          pNVar8 = (NameMapperBase *)MaterialItemMapper::GetInstance();
          cVar2 = NameMapperBase::ContainsId(pNVar8,iVar4);
          if (cVar2 == '\0') {
            pNVar8 = (NameMapperBase *)RankAvatarMapper::GetInstance();
            cVar2 = NameMapperBase::ContainsId(pNVar8,iVar4);
            if (cVar2 == '\0') goto LAB_03975200;
            GetGameItemInfo(iVar4,0x7fffffff,0);
            std::operator+((string *)local_20,"_REWARD_DISPLAY");
            pLVar11 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)aCStack_50,false);
            std::string::~string((string *)aCStack_50);
            if (pLVar11 != (LotteryResultProgressBar *)0x0) {
              pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
              iVar4 = *(int *)(this + 0x50);
              pLVar17 = (LotteryResultProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
              iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
              iVar19 = *(int *)(this + 0x54);
              pSVar12 = (SalesProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
              iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
              Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
              iVar4 = *(int *)(this + 0x50);
              iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
              iVar19 = *(int *)(this + 0x54);
              iVar6 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar11);
              iVar20 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
              iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
              Sexy::Graphics::DrawImage
                        (param_1,(Image *)pLVar11,(int)(((float)iVar4 - (float)iVar5) * 0.5),
                         (int)(((float)iVar19 - (float)iVar6) * 0.5),(int)(float)iVar20,
                         (int)(float)iVar7);
            }
          }
          else {
            GetGameItemInfo(iVar4,0x100,0);
            pLVar11 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)local_20,false);
            if (pLVar11 != (LotteryResultProgressBar *)0x0) {
              pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
              iVar4 = *(int *)(this + 0x50);
              pLVar17 = (LotteryResultProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
              iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
              iVar19 = *(int *)(this + 0x54);
              pSVar12 = (SalesProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
              iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
              Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
              iVar4 = *(int *)(this + 0x50);
              iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
              iVar19 = *(int *)(this + 0x54);
              iVar5 = (int)(((float)iVar4 - (float)iVar5 * 0.7) * 0.5);
              iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar11);
              iVar6 = (int)(((float)iVar19 - (float)iVar4 * 0.7) * 0.5);
              iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
              iVar19 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar11);
              Sexy::Graphics::DrawImage
                        (param_1,(Image *)pLVar11,iVar5,iVar6,(int)((float)iVar4 * 0.7),
                         (int)((float)iVar19 * 0.7));
              Sexy::StrFormat(L"x%d",aRStack_60,(ulong)uVar1);
              uVar15 = PrimeText_PotentialTypeface::Typeface
                                 (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
              iVar4 = FUN_03972124(0x19);
              iVar19 = FUN_03972124(0x2d);
              FUN_05477b24(auStack_58,aRStack_60);
              Sexy::Color::Color(aCStack_50,1);
              Sexy::PrimeTypeface::DrawString_Line
                        ((PrimeTypeface *)(float)(iVar4 + iVar5),(float)(iVar6 + iVar4),
                         (float)iVar19,uVar15,param_1,auStack_58,0,aCStack_50,0);
              FUN_05476c50(auStack_58);
              FUN_05476c50(aRStack_60);
            }
          }
          GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_40);
          goto LAB_03975200;
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
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdaa8);
                break;
              case 1:
                pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
                break;
              case 2:
                pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd708);
                break;
              case 3:
              case 4:
                pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdbd8);
                break;
              default:
                pIVar10 = (Image *)0x0;
              }
              iVar4 = *(int *)(this + 0x50);
              pLVar17 = (LotteryResultProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
              iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
              iVar19 = *(int *)(this + 0x54);
              pSVar12 = (SalesProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
              iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
              Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
              iVar4 = *(int *)(this + 0x50);
              iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
              iVar19 = *(int *)(this + 0x54);
              iVar6 = (int)(((float)iVar4 - (float)iVar5 * 0.6) * 0.5);
              iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar11);
              iVar20 = (int)(((float)iVar19 - (float)iVar4 * 0.6) * 0.5);
              iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
              iVar19 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar11);
              Sexy::Graphics::DrawImage
                        (param_1,(Image *)pLVar11,iVar6,iVar20,(int)((float)iVar4 * 0.6),
                         (int)((float)iVar19 * 0.6));
              Sexy::StrFormat(L"x%d",aRStack_60,(ulong)uVar1);
              uVar15 = PrimeText_PotentialTypeface::Typeface
                                 (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
              iVar4 = FUN_03972124(0x28);
              iVar19 = FUN_03972124(0x29);
              iVar5 = FUN_03972124(0x2d);
              FUN_05477b24(auStack_58,aRStack_60);
              Sexy::Color::Color(aCStack_50,1);
              Sexy::PrimeTypeface::DrawString_Line
                        ((PrimeTypeface *)(float)(iVar4 + iVar6),(float)(iVar19 + iVar20),
                         (float)iVar5,uVar15,param_1,auStack_58,0,aCStack_50,0);
              FUN_05476c50(auStack_58);
              FUN_05476c50(aRStack_60);
              TGAAccumulatedLoginData::~TGAAccumulatedLoginData
                        ((TGAAccumulatedLoginData *)asStack_40);
            }
          }
          goto LAB_03975824;
        }
        goto LAB_039751f8;
      }
      std::string::string(asStack_40,"IMAGE_UI_AWARDDIALOG_TACTICALCUKE");
      GetImageByName(asStack_40);
      std::string::~string(asStack_40);
      nop();
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_60);
      if (cVar2 != '\0') {
        pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
        iVar4 = *(int *)(this + 0x50);
        pLVar11 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
        iVar19 = *(int *)(this + 0x54);
        pSVar12 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
        Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
        iVar4 = *(int *)(this + 0x50);
        pLVar11 = (LotteryResultProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
        iVar19 = *(int *)(this + 0x54);
        iVar20 = (int)(((float)iVar4 - (float)iVar5 * 0.6) * 0.5);
        pSVar12 = (SalesProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
        iVar4 = SalesProgressBar::GetCurrentLevel(pSVar12);
        iVar6 = (int)(((float)iVar19 - (float)iVar4 * 0.6) * 0.5);
        pLVar11 = (LotteryResultProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
        iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
        pSVar12 = (SalesProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
        iVar19 = SalesProgressBar::GetCurrentLevel(pSVar12);
        pIVar10 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar10,iVar20,iVar6,(int)((float)iVar4 * 0.6),(int)((float)iVar19 * 0.6)
                  );
        Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
        uVar15 = PrimeText_PotentialTypeface::Typeface
                           (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
        iVar4 = FUN_03972124(0x28);
        iVar19 = FUN_03972124(0x29);
        iVar5 = FUN_03972124(0x2d);
        FUN_05477b24(aCStack_50,auStack_58);
        Sexy::Color::Color((Color *)asStack_40,1);
        iVar4 = iVar4 + iVar20;
        iVar19 = iVar19 + iVar6;
        goto LAB_03975c48;
      }
    }
    else {
      std::string::string(asStack_40,"IMAGE_UI_AWARDDIALOG_GOLD");
      GetImageByName(asStack_40);
      std::string::~string(asStack_40);
      nop();
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_60);
      if (cVar2 != '\0') {
        pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
        iVar4 = *(int *)(this + 0x50);
        pLVar11 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
        iVar19 = *(int *)(this + 0x54);
        pSVar12 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
        Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
        iVar4 = *(int *)(this + 0x50);
        pLVar11 = (LotteryResultProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
        iVar19 = *(int *)(this + 0x54);
        iVar20 = (int)(((float)iVar4 - (float)iVar5 * 0.5) * 0.5);
        pSVar12 = (SalesProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
        iVar4 = SalesProgressBar::GetCurrentLevel(pSVar12);
        iVar6 = (int)(((float)iVar19 - (float)iVar4 * 0.5) * 0.5);
        pLVar11 = (LotteryResultProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
        iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
        pSVar12 = (SalesProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
        iVar19 = SalesProgressBar::GetCurrentLevel(pSVar12);
        pIVar10 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar10,iVar20,iVar6,(int)((float)iVar4 * 0.5),(int)((float)iVar19 * 0.5)
                  );
        Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
        uVar15 = PrimeText_PotentialTypeface::Typeface
                           (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
        iVar4 = FUN_03972124(0xc);
        iVar19 = FUN_03972124(0x22);
        iVar5 = FUN_03972124(0x2d);
        FUN_05477b24(aCStack_50,auStack_58);
        Sexy::Color::Color((Color *)asStack_40,1);
        Sexy::PrimeTypeface::DrawString_Line
                  ((PrimeTypeface *)(float)(iVar4 + iVar20),(float)(iVar19 + iVar6),(float)iVar5,
                   uVar15,param_1,aCStack_50,0,asStack_40,0);
        FUN_05476c50(aCStack_50);
        FUN_05476c50(auStack_58);
      }
    }
  }
  else {
    std::string::string(asStack_40,"IMAGE_UI_AWARDDIALOG_GEM");
    GetImageByName(asStack_40);
    std::string::~string(asStack_40);
    nop();
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_60);
    if (cVar2 != '\0') {
      pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
      iVar4 = *(int *)(this + 0x50);
      pLVar11 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
      iVar19 = *(int *)(this + 0x54);
      pSVar12 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
      iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
      Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar4 - iVar5) / 2,(iVar19 - iVar6) / 2);
      iVar4 = *(int *)(this + 0x50);
      pLVar11 = (LotteryResultProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
      iVar19 = *(int *)(this + 0x54);
      iVar4 = (int)(((float)iVar4 - (float)iVar5 * 0.6) * 0.5);
      pSVar12 = (SalesProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
      iVar19 = (int)(((float)iVar19 - (float)iVar5 * 0.6) * 0.5);
      pLVar11 = (LotteryResultProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
      pSVar12 = (SalesProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
      pIVar10 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      Sexy::Graphics::DrawImage
                (param_1,pIVar10,iVar4,iVar19,(int)((float)iVar5 * 0.6),(int)((float)iVar6 * 0.6));
      Sexy::StrFormat(L"x%d",auStack_58,(ulong)uVar1);
      uVar15 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
      iVar5 = FUN_03972124(0x19);
      iVar4 = iVar5 + iVar4;
      iVar19 = iVar19 + iVar5;
      iVar5 = FUN_03972124(0x2d);
      FUN_05477b24(aCStack_50,auStack_58);
      Sexy::Color::Color((Color *)asStack_40,1);
LAB_03975c48:
      Sexy::PrimeTypeface::DrawString_Line
                ((PrimeTypeface *)(float)iVar4,(float)iVar19,(float)iVar5,uVar15,param_1,aCStack_50,
                 0,asStack_40,0);
      FUN_05476c50(aCStack_50);
      FUN_05476c50(auStack_58);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
LAB_03975200:
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

