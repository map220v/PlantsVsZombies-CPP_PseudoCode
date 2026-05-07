// Class: StoreUI


/* StoreUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void StoreUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to StoreUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall StoreUI::ScrollTargetReached(StoreUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* StoreUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void StoreUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to StoreUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall StoreUI::ScrollTargetInterrupted(StoreUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* StoreUI::TouchEnded(Sexy::Touch const&) */

void __thiscall StoreUI::TouchEnded(StoreUI *this,Touch *param_1)

{
  char cVar1;
  long *plVar2;
  
  Sexy::Widget::TouchEnded((Widget *)this,param_1);
  plVar2 = *(long **)(this + 0x168);
  if ((plVar2 != (long *)0x0) &&
     (cVar1 = (**(code **)(*plVar2 + 0x300))
                        (plVar2,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14)),
     cVar1 != '\0')) {
    LawnApp::ShowRechargeNotice(gLawnApp);
    return;
  }
  return;
}


/* StoreUI::closeDescriptionWidget() */

void __thiscall StoreUI::closeDescriptionWidget(StoreUI *this)

{
  if (*(long *)(this + 0xe8) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0xe8));
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0xe8));
    *(undefined8 *)(this + 0xe8) = 0;
  }
  return;
}


/* StoreUI::onBombUnlocked() */

void __thiscall StoreUI::onBombUnlocked(StoreUI *this)

{
  this[0x164] = (StoreUI)0x1;
  return;
}


/* StoreUI::Update() */

void __thiscall StoreUI::Update(StoreUI *this)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = *(long **)(this + 0x128);
  if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x80);
    PVZ_RealT();
    (*pcVar2)(plVar1);
  }
  return;
}


/* StoreUI::OnPlantPackageBuy(PlantPackage*) */

void StoreUI::OnPlantPackageBuy(PlantPackage *param_1)

{
  StorePlantGiftPanelUI::RefreshItems(*(StorePlantGiftPanelUI **)(param_1 + 0x110));
  return;
}


/* StoreUI::OnGachaInitFinished() */

void StoreUI::OnGachaInitFinished(void)

{
  int iVar1;
  long lVar2;
  GachaMgr *pGVar3;
  
  lVar2 = ProfileUtils::Profile();
  if (lVar2 != 0) {
    iVar1 = FUN_03395418(*(undefined4 *)(lVar2 + 0x40));
    if (iVar1 == 0x17) {
      lVar2 = Sexy::LazySingleton<GachaMgr>::GetInstance();
      iVar1 = FUN_0339542c(*(undefined4 *)(lVar2 + 0x44));
      if (iVar1 == 0) {
        pGVar3 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
        GachaMgr::SetTutorialStep(pGVar3,1);
        return;
      }
    }
    else if (iVar1 == 0x18) {
      lVar2 = Sexy::LazySingleton<GachaMgr>::GetInstance();
      iVar1 = FUN_0339542c(*(undefined4 *)(lVar2 + 0x44));
      if (iVar1 == 0) {
        pGVar3 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
        GachaMgr::SetTutorialStep(pGVar3,3);
        return;
      }
    }
    else if (iVar1 == 0x1c) {
      lVar2 = Sexy::LazySingleton<GachaMgr>::GetInstance();
      iVar1 = FUN_0339542c(*(undefined4 *)(lVar2 + 0x44));
      if (iVar1 == 0) {
        pGVar3 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
        GachaMgr::SetTutorialStep(pGVar3,4);
        return;
      }
    }
  }
  return;
}


/* StoreUI::onADFinished(int) */

void __thiscall StoreUI::onADFinished(StoreUI *this,int param_1)

{
  undefined4 uVar1;
  ADManager *pAVar2;
  
  if ((1 < param_1 - 5U) && (param_1 != 0x20)) {
    return;
  }
  pAVar2._0_4_ = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  uVar1 = ADManager::GetLeftADWatchCount(pAVar2._0_4_,param_1);
  *(undefined4 *)(this + 0x18c) = uVar1;
  return;
}


/* StoreUI::InitADCount(std::string const&) */

void __thiscall StoreUI::InitADCount(StoreUI *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  ADManager *pAVar4;
  
  cVar1 = LawnApp::IsAdChannel(gLawnApp,3);
  if (cVar1 != '\0') {
    bVar2 = std::operator==(param_1,"Gems");
    if ((((bVar2) || (bVar2 = std::operator==(param_1,"GemsFor360"), bVar2)) ||
        (bVar2 = std::operator==(param_1,"GemsExtra"), bVar2)) ||
       (bVar2 = std::operator==(param_1,"GemsFor360Extra"), bVar2)) {
      pAVar4 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
      uVar3 = ADManager::GetLeftADWatchCount(pAVar4,6);
      *(undefined4 *)(this + 0x18c) = uVar3;
      return;
    }
    bVar2 = std::operator==(param_1,"Coins");
    if (bVar2) {
      pAVar4 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
      uVar3 = ADManager::GetLeftADWatchCount(pAVar4,5);
      *(undefined4 *)(this + 0x18c) = uVar3;
    }
    else {
      bVar2 = std::operator==(param_1,"AvatarTicket");
      if (!bVar2) {
        *(undefined4 *)(this + 0x18c) = 0xffffffff;
        return;
      }
      pAVar4 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
      uVar3 = ADManager::GetLeftADWatchCount(pAVar4,0x20);
      *(undefined4 *)(this + 0x18c) = uVar3;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoreUI::onGachaTutorialFinished() */

void __thiscall StoreUI::onGachaTutorialFinished(StoreUI *this)

{
  undefined *this_00;
  char cVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  RtMixedPtrBase aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(this + 0x130);
    uVar3 = FUN_033954ac(uVar6,*(undefined8 *)(this + 0x138));
    if (uVar3 <= uVar5) break;
    puVar2 = (undefined8 *)FUN_033954b8(uVar6,uVar5);
    (**(code **)(*(long *)*puVar2 + 0x188))((long *)*puVar2,0);
    uVar5 = uVar5 + 1;
  }
  if (*(long *)(this + 0x128) != 0) {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    if (cVar1 != '\0') {
      ToolPacketData::GetProps();
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      (**(code **)(*plVar4 + 0x48))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    *(undefined8 *)(this + 0x128) = 0;
  }
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGachaTutorialFinished);
  Sexy::Delegate0::Delegate0<StoreUI,void(StoreUI::*)()>(aDStack_38,aRStack_50);
  MessageRouter::Unsubscribe((MessageRouter *)this_00,Message::GachaTutorialFinished,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoreUI::showDescriptionWidget() */

void __thiscall StoreUI::showDescriptionWidget(StoreUI *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xe8) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0xe8) = this_00;
    TodStringTranslate(L"[AVATAR_TICKET_DESCRIPTION]");
    TodStringTranslate(L"[AVATAR_TICKET_TITLE]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0xe8);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeDescriptionWidget);
    Sexy::Delegate0::Delegate0<StoreUI,void(StoreUI::*)()>(aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0xe8));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0xe8));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0xe8));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0xe8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoreUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall StoreUI::DrawAll(StoreUI *this,ModalFlags *param_1,Graphics *param_2)

{
  string *psVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  SalesProgressBar *pSVar15;
  PlayerInfo *this_00;
  LotteryResultProgressBar *pLVar16;
  Image *pIVar17;
  long *plVar18;
  float *pfVar19;
  long lVar20;
  ulong uVar21;
  float fVar22;
  GraphicsAutoState aGStack_68 [8];
  float local_60;
  float local_58;
  float local_50 [2];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  float local_28 [4];
  undefined4 local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x188] != (StoreUI)0x0) {
    Sexy::Insets::Insets((Insets *)&local_18,0,0,0,0);
    DrawSpaceSpiral(param_2,0xff,(Insets *)&local_18);
    iVar4 = FUN_033961ec(0x11);
    iVar5 = FUN_033961ec(0x46);
    iVar11 = *(int *)(this + 0x50);
    iVar7 = *(int *)(this + 0x54);
    iVar6 = FUN_033961ec(0x14);
    Sexy::Insets::Insets
              ((Insets *)&local_18,iVar4,iVar5,iVar11 + iVar4 * -2,(iVar7 - iVar5) - iVar6);
    uVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9be00);
    Draw9SliceImage(param_2,(Insets *)&local_18,uVar12);
    iVar7 = FUN_033961ec(0x28);
    iVar4 = FUN_033961ec(0x89);
    iVar5 = FUN_033961ec(0x50);
    iVar11 = *(int *)(this + 0x50);
    fVar22 = (float)FUN_03396200(*(undefined4 *)(this + 0x170));
    Sexy::Insets::Insets((Insets *)&local_48,iVar7,iVar4,iVar11 - iVar5,(int)fVar22);
    iVar11 = local_48;
    iVar6 = FUN_033961ec(10);
    iVar7 = local_44;
    iVar8 = FUN_033961ec(9);
    iVar4 = local_40;
    iVar9 = FUN_033961ec(0x14);
    iVar5 = local_3c;
    iVar10 = FUN_033961ec(0x19);
    Sexy::Insets::Insets
              ((Insets *)&local_38,iVar11 + iVar6,iVar7 + iVar8,iVar4 - iVar9,iVar5 - iVar10);
    Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_48);
    uVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c6d0);
    Draw9SliceImage(param_2,(Insets *)&local_18,uVar12);
    Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
    if ((*(ScrollWidget **)(this + 0x118) != (ScrollWidget *)0x0) &&
       (cVar2 = Sexy::ScrollWidget::GetNeedsScroller(*(ScrollWidget **)(this + 0x118)),
       cVar2 != '\0')) {
      Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_68,param_2);
      Sexy::ScrollWidget::GetScrollOffset();
      Sexy::ScrollWidget::GetScrollMin();
      Sexy::ScrollWidget::GetScrollMax();
      if (local_60 < local_50[0]) {
        local_28[0] = (float)FUN_03396200(0x41a00000);
        local_28[0] = ABS(local_50[0] - local_60) / local_28[0];
        local_18 = 0x3f800000;
        pfVar19 = eastl::min_alt<float>(local_28,(float *)&local_18);
        iVar7 = local_34;
        iVar11 = local_38;
        fVar22 = *pfVar19;
        iVar4 = FUN_033961ec(0x14);
        Sexy::Insets::Insets((Insets *)local_28,iVar11,iVar7,iVar4,local_2c);
        Sexy::Insets::Insets((Insets *)&local_18,0xff,0xff,0xff,(int)(fVar22 * 255.0));
        Sexy::Graphics::SetColor(param_2,(Color *)&local_18);
        Sexy::Graphics::SetColorizeImages(param_2,true);
        Sexy::Insets::Insets((Insets *)&local_18,(Insets *)local_28);
        uVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c328);
        Draw3SliceImageVertical(param_2,(Insets *)&local_18,uVar12);
      }
      if (local_58 < local_60) {
        local_28[0] = (float)FUN_03396200(0x41a00000);
        local_28[0] = ABS(local_60 - local_58) / local_28[0];
        local_18 = 0x3f800000;
        pfVar19 = eastl::min_alt<float>(local_28,(float *)&local_18);
        fVar22 = *pfVar19;
        lVar20 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c630);
        iVar7 = local_34;
        iVar11 = *(int *)(lVar20 + 0x38);
        lVar20 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c630);
        Sexy::Insets::Insets
                  ((Insets *)local_28,(local_38 + local_30) - iVar11,iVar7,*(int *)(lVar20 + 0x38),
                   local_2c);
        Sexy::Insets::Insets((Insets *)&local_18,0xff,0xff,0xff,(int)(fVar22 * 255.0));
        Sexy::Graphics::SetColor(param_2,(Color *)&local_18);
        Sexy::Graphics::SetColorizeImages(param_2,true);
        Sexy::Insets::Insets((Insets *)&local_18,(Insets *)local_28);
        uVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c630);
        Draw3SliceImageVertical(param_2,(Insets *)&local_18,uVar12);
      }
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_68);
    }
    uVar21 = 0;
    while( true ) {
      uVar14 = FUN_033954ac(*(undefined8 *)(this + 0x130),*(undefined8 *)(this + 0x138));
      if (uVar14 <= uVar21) break;
      Sexy::Graphics::PushState(param_2);
      plVar18 = (long *)FUN_033954b8(*(undefined8 *)(this + 0x130),uVar21);
      Sexy::Graphics::Translate(param_2,*(int *)(*plVar18 + 0x48),*(int *)(*plVar18 + 0x4c));
      puVar13 = (undefined8 *)FUN_033954b8(*(undefined8 *)(this + 0x130),uVar21);
      (**(code **)(*(long *)*puVar13 + 0x130))((long *)*puVar13,param_1,param_2);
      plVar18 = (long *)FUN_033954b8(*(undefined8 *)(this + 0x130),uVar21);
      *(undefined1 *)(*plVar18 + 0x44) = 0;
      Sexy::Graphics::PopState(param_2);
      uVar21 = uVar21 + 1;
    }
    psVar1 = (string *)(this + 0x178);
    bVar3 = std::operator!=(psVar1,"Gacha");
    if (bVar3) {
      std::operator!=(psVar1,"SecretGacha");
    }
    iVar7 = FUN_033961ec(0x78);
    iVar11 = *(int *)(this + 0x50);
    iVar4 = FUN_033961ec(0x14);
    iVar11 = (iVar11 - iVar7) - iVar4;
    pSVar15 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bc10);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar15);
    Sexy::Insets::Insets((Insets *)&local_18,iVar11,iVar4,iVar7,iVar5);
    uVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bc10);
    Draw3SliceImage(param_2,(Insets *)&local_18,uVar12);
    this_00 = (PlayerInfo *)ProfileUtils::Profile();
    uVar12 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
    pLVar16 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c3b0);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    iVar4 = FUN_033961ec(0x14);
    iVar5 = FUN_033961ec(0x78);
    pLVar16 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c3b0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar15 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bc10);
    iVar8 = SalesProgressBar::GetCurrentLevel(pSVar15);
    iVar9 = PlayerInfo::GetNumCoins(this_00,false);
    Sexy::CommaSeparate(iVar9);
    Sexy::Color::Color((Color *)&local_18,1);
    Sexy::PrimeTypeface::DrawString_Paragraph
              ((PrimeTypeface *)(float)(iVar11 + iVar7 / 2),(float)iVar4,(float)(iVar5 - iVar6 / 2),
               (float)iVar8,uVar12,param_2,(string *)local_28,1,1,(Insets *)&local_18,0);
    FUN_05476c50((string *)local_28);
    pLVar16 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c3b0);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    iVar11 = iVar11 - iVar7 / 2;
    pIVar17 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c3b0);
    iVar7 = FUN_033961ec(0x14);
    pSVar15 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bc10);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar15);
    pSVar15 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c3b0);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar15);
    Sexy::Graphics::DrawImage(param_2,pIVar17,iVar11,iVar7 + (iVar4 - iVar5) / 2);
    iVar7 = FUN_033961ec(100);
    iVar4 = FUN_033961ec(0x14);
    iVar11 = (iVar11 - iVar7) - iVar4;
    pSVar15 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bc10);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar15);
    Sexy::Insets::Insets((Insets *)&local_18,iVar11,iVar4,iVar7,iVar5);
    uVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bc10);
    Draw3SliceImage(param_2,(Insets *)&local_18,uVar12);
    uVar12 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
    pLVar16 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c238);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    iVar4 = FUN_033961ec(0x14);
    iVar5 = FUN_033961ec(100);
    pLVar16 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c238);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar15 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bc10);
    iVar8 = SalesProgressBar::GetCurrentLevel(pSVar15);
    iVar9 = PlayerInfo::GetNumGems(this_00,false);
    Sexy::CommaSeparate(iVar9);
    Sexy::Color::Color((Color *)&local_18,1);
    Sexy::PrimeTypeface::DrawString_Paragraph
              ((PrimeTypeface *)(float)(iVar11 + iVar7 / 2),(float)iVar4,(float)(iVar5 - iVar6 / 2),
               (float)iVar8,uVar12,param_2,(string *)local_28,1,1,(Insets *)&local_18,0);
    FUN_05476c50((string *)local_28);
    pLVar16 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c238);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    iVar11 = iVar11 - iVar7 / 2;
    pIVar17 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c238);
    iVar7 = FUN_033961ec(0x14);
    pSVar15 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bc10);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar15);
    pSVar15 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c238);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar15);
    Sexy::Graphics::DrawImage(param_2,pIVar17,iVar11,iVar7 + (iVar4 - iVar5) / 2);
    iVar7 = FUN_033961ec(100);
    iVar4 = FUN_033961ec(0x14);
    iVar11 = (iVar11 - iVar7) - iVar4;
    pSVar15 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bc10);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar15);
    Sexy::Insets::Insets((Insets *)&local_18,iVar11,iVar4,iVar7,iVar5);
    uVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bc10);
    Draw3SliceImage(param_2,(Insets *)&local_18,uVar12);
    uVar12 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
    pLVar16 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c8d0);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    iVar4 = FUN_033961ec(0x14);
    iVar5 = FUN_033961ec(100);
    pLVar16 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c8d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar15 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bc10);
    iVar8 = SalesProgressBar::GetCurrentLevel(pSVar15);
    std::string::string((string *)local_50,"mat_avatar_ticket");
    iVar9 = PlayerInfo::GetMaterialNum(this_00,(string *)local_50);
    Sexy::CommaSeparate(iVar9);
    Sexy::Color::Color((Color *)&local_18,1);
    Sexy::PrimeTypeface::DrawString_Paragraph
              ((PrimeTypeface *)(float)(iVar11 + iVar7 / 2),(float)iVar4,(float)(iVar5 - iVar6 / 2),
               (float)iVar8,uVar12,param_2,(string *)local_28,1,1,(Insets *)&local_18,0);
    FUN_05476c50((string *)local_28);
    std::string::~string((string *)local_50);
    nop();
    pLVar16 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c8d0);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pIVar17 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c8d0);
    iVar4 = FUN_033961ec(0x14);
    pSVar15 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bc10);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar15);
    pSVar15 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c8d0);
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar15);
    Sexy::Graphics::DrawImage(param_2,pIVar17,iVar11 - iVar7 / 2,iVar4 + (iVar5 - iVar6) / 2);
    bVar3 = std::operator!=(psVar1,"Gems");
    if ((((bVar3) && (bVar3 = std::operator!=(psVar1,"GemsFor360"), bVar3)) &&
        (bVar3 = std::operator!=(psVar1,"GemsExtra"), bVar3)) &&
       (bVar3 = std::operator!=(psVar1,"GemsFor360Extra"), bVar3)) {
      if (*(long *)(this + 0x150) != 0) {
        pIVar17 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9be30);
        (**(code **)(**(long **)(this + 0x150) + 0x48))((string *)local_28,*(long **)(this + 0x150))
        ;
        iVar11 = FUN_033961ec(200);
        fVar22 = (float)(int)local_28[0];
        (**(code **)(**(long **)(this + 0x150) + 0x48))
                  ((Insets *)&local_18,*(long **)(this + 0x150));
        iVar7 = FUN_033961ec(0xf);
        Sexy::Graphics::DrawImage
                  (param_2,pIVar17,(int)(fVar22 + (float)iVar11 * 0.73),local_14 - iVar7);
        (**(code **)(**(long **)(this + 0x150) + 0x158))(*(long **)(this + 0x150),1);
      }
    }
    else {
      plVar18 = *(long **)(this + 0x150);
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x158))(plVar18,0);
      }
    }
    if (*(LotteryResultProgressBar **)(this + 0x158) != (LotteryResultProgressBar *)0x0) {
      iVar11 = *(int *)(this + 0x50);
      iVar7 = LotteryResultProgressBar::GetCurrentLevel
                        (*(LotteryResultProgressBar **)(this + 0x158));
      pSVar15 = *(SalesProgressBar **)(this + 0x158);
      iVar4 = SalesProgressBar::GetCurrentLevel(pSVar15);
      Sexy::Graphics::DrawImage
                (param_2,(Image *)pSVar15,(iVar11 - iVar7) / 2,(local_34 + local_2c) - iVar4);
    }
    if (*(int *)(this + 0x18c) != -1) {
      iVar7 = FUN_033961ec(0xffffffe7);
      iVar4 = FUN_033961ec(0x2d);
      iVar11 = local_40;
      Sexy::Insets::Insets
                ((Insets *)&local_18,local_48,(local_44 + local_3c + iVar7) - iVar4,local_40,iVar4);
      std::string::string((string *)local_28,"[COINSTORE_AD_LEFT]");
      StringHelper::ReplaceNumberString
                ((StringHelper *)local_28,(string *)L"{NUMBER}",
                 (wchar_t *)(ulong)*(uint *)(this + 0x18c),iVar11);
      std::string::~string((string *)local_28);
      nop();
      FUN_05476c50((string *)local_50);
    }
    plVar18 = *(long **)(this + 0x168);
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x128))(plVar18,param_2);
    }
    plVar18 = *(long **)(this + 0x128);
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x98))(plVar18,param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoreUI::~StoreUI() */

void __thiscall StoreUI::~StoreUI(StoreUI *this)

{
  LawnApp *this_00;
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  PurchaseBroker *this_02;
  long *plVar2;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06612fb0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066132f0;
  *(undefined ***)(this + 0xe0) = &PTR__StoreUI_06613338;
  if (*(long **)(this + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x168) + 0x18))();
    *(undefined8 *)(this + 0x168) = 0;
  }
  if (*(long *)(this + 0x128) != 0) {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 != '\0') {
      ToolPacketData::GetProps();
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      (**(code **)(*plVar2 + 0x48))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    *(undefined8 *)(this + 0x128) = 0;
  }
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PurchaseBroker *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(this_01);
  PurchaseBroker::EndCartInstance(this_02);
  this_00 = gLawnApp;
  std::string::string((string *)aRStack_10,"UI_Store");
  LawnApp::DeleteGroup(this_00,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  FUN_05476c50(this + 0x180);
  std::string::~string((string *)(this + 0x178));
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x130));
  std::
  vector<Sexy::RtWeakPtr<MagentoCategoryProps>,std::allocator<Sexy::RtWeakPtr<MagentoCategoryProps>>>
  ::~vector((vector<Sexy::RtWeakPtr<MagentoCategoryProps>,std::allocator<Sexy::RtWeakPtr<MagentoCategoryProps>>>
             *)(this + 0xf8));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to StoreUI::~StoreUI() */

void __thiscall StoreUI::~StoreUI(StoreUI *this)

{
  ~StoreUI(this + -0xe0);
  return;
}


/* StoreUI::~StoreUI() */

void __thiscall StoreUI::~StoreUI(StoreUI *this)

{
  ~StoreUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to StoreUI::~StoreUI() */

void __thiscall StoreUI::~StoreUI(StoreUI *this)

{
  ~StoreUI(this + -0xe0);
  return;
}


/* StoreUI::ButtonPress(int) */

void __thiscall StoreUI::ButtonPress(StoreUI *this,int param_1)

{
  char *pcVar1;
  
  if (param_1 != -1) {
    return;
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_X_Close_Press");
  return;
}


/* non-virtual thunk to StoreUI::ButtonPress(int) */

void __thiscall StoreUI::ButtonPress(StoreUI *this,int param_1)

{
  ButtonPress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoreUI::onPurchaseDialogClosed() */

void __thiscall StoreUI::onPurchaseDialogClosed(StoreUI *this)

{
  LawnApp *pLVar1;
  string *psVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x164] != (StoreUI)0x0) {
    this[0x164] = (StoreUI)0x0;
    pLVar1 = gLawnApp;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    LawnApp::ShowPlantRewardDialog(pLVar1,aRStack_10,0,0,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    *(undefined8 *)(this + 0x158) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoreUI::createPanel(Sexy::RtWeakPtr<MagentoCategoryProps>) */

void __thiscall StoreUI::createPanel(StoreUI *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  PrimeText *this_00;
  StoreGiftPanelUI *this_01;
  undefined8 uVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  PurchaseBroker *this_03;
  TGALogMgr *pTVar9;
  PVZ2UIScrollingWidget *this_04;
  PVZ2UIButton *this_05;
  long lVar10;
  long *plVar11;
  string asStack_a0 [8];
  string asStack_98 [8];
  string asStack_90 [8];
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  Sexy::LazySingleton<SecretGachaMgr>::GetInstance();
  SecretGachaMgr::RemoveMainUI();
  plVar11 = *(long **)(this + 0x118);
  if (plVar11 == (long *)0x0) {
    (**(code **)(*(long *)this + 0x68))(this,*(undefined8 *)(this + 0x110));
    if (*(long **)(this + 0x110) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x110) + 0x18))();
      *(undefined8 *)(this + 0x110) = 0;
    }
  }
  else {
    (**(code **)(*plVar11 + 0x68))(plVar11,*(undefined8 *)(this + 0x110));
    if (*(long **)(this + 0x110) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x110) + 0x18))();
      *(undefined8 *)(this + 0x110) = 0;
    }
    (**(code **)(*(long *)this + 0x68))(this,*(undefined8 *)(this + 0x118));
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x118));
    *(undefined8 *)(this + 0x118) = 0;
  }
  plVar11 = *(long **)(this + 0xf0);
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x158))(plVar11,0);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  bVar1 = std::operator==((string *)&local_88,"Gems");
  if (bVar1) {
    iVar5 = 0x14a;
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
    bVar1 = std::operator==(asStack_a0,"GemsFor360");
    if (bVar1) {
      iVar5 = 0x14a;
      std::string::~string(asStack_a0);
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
      bVar1 = std::operator==((string *)&local_78,"GemsExtra");
      if (bVar1) {
        iVar5 = 0x14a;
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
        bVar1 = std::operator==(asStack_40,"GemsFor360Extra");
        iVar5 = 0x157;
        if (bVar1) {
          iVar5 = 0x14a;
        }
        std::string::~string(asStack_40);
      }
      std::string::~string((string *)&local_78);
      std::string::~string(asStack_a0);
    }
  }
  iVar5 = iVar5 + 0x14;
  std::string::~string((string *)&local_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  bVar1 = std::operator==(asStack_40,"Gacha");
  std::string::~string(asStack_40);
  if (bVar1) {
    iVar5 = 0x1a4;
  }
  iVar2 = FUN_033961ec(0x32);
  iVar3 = FUN_033961ec(0x82);
  iVar4 = FUN_033961ec(100);
  iVar6 = *(int *)(this + 0x50);
  iVar5 = FUN_033961ec(iVar5);
  Sexy::Insets::Insets((Insets *)&local_88,iVar2,iVar3,iVar6 - iVar4,iVar5);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  bVar1 = std::operator!=(asStack_40,"SecretGacha");
  std::string::~string(asStack_40);
  if (bVar1) {
    this_04 = ::operator_new(0x248);
    PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_04,(ScrollWidgetListener *)(this + 0xe0));
    lVar10 = *(long *)this_04;
    *(PVZ2UIScrollingWidget **)(this + 0x118) = this_04;
    (**(code **)(lVar10 + 0x1a0))(this_04,(string *)&local_88);
    Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x118),1);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x118));
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  bVar1 = std::operator==(asStack_40,"Gift");
  std::string::~string(asStack_40);
  if (bVar1) {
    this_01 = ::operator_new(0x178);
    StoreGiftPanelUI::StoreGiftPanelUI(this_01,(TRect *)&local_88,(RtWeakPtr *)param_2);
    *(StoreGiftPanelUI **)(this + 0x110) = this_01;
LAB_033a4dd4:
    plVar11 = *(long **)(this + 0x118);
    if (plVar11 != (long *)0x0) goto LAB_033a4ddc;
LAB_033a501c:
    (**(code **)(*(long *)this + 0x60))(this,this_01);
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
    bVar1 = std::operator==(asStack_40,"PlantGift");
    std::string::~string(asStack_40);
    if (!bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
      bVar1 = std::operator==(asStack_40,"SecretGacha");
      std::string::~string(asStack_40);
      if (bVar1) {
        iVar6 = FUN_033961ec(0x28);
        iVar2 = FUN_033961ec(0x89);
        iVar3 = FUN_033961ec(0x50);
        iVar5 = *(int *)(this + 0x50);
        iVar4 = FUN_033961ec(0x1ab);
        Sexy::Insets::Insets((Insets *)&local_78,iVar6,iVar2,iVar5 - iVar3,iVar4);
        iVar5 = FUN_033961ec(10);
        iVar6 = FUN_033961ec(9);
        iVar2 = FUN_033961ec(0x14);
        iVar3 = FUN_033961ec(0x19);
        Sexy::Insets::Insets
                  ((Insets *)asStack_40,local_78 + iVar5,local_74 + iVar6,local_70 - iVar2,
                   local_6c - iVar3);
        this_01 = ::operator_new(0x140);
        StorePanelUI::StorePanelUI((StorePanelUI *)this_01,(TRect *)asStack_40,(RtWeakPtr *)param_2)
        ;
        *(StoreGiftPanelUI **)(this + 0x110) = this_01;
      }
      else {
        this_01 = ::operator_new(0x140);
        StorePanelUI::StorePanelUI((StorePanelUI *)this_01,(TRect *)&local_88,(RtWeakPtr *)param_2);
        *(StoreGiftPanelUI **)(this + 0x110) = this_01;
      }
      goto LAB_033a4dd4;
    }
    this_01 = ::operator_new(0x178);
    StorePlantGiftPanelUI::StorePlantGiftPanelUI
              ((StorePlantGiftPanelUI *)this_01,(TRect *)&local_88,(RtWeakPtr *)param_2);
    *(StoreGiftPanelUI **)(this + 0x110) = this_01;
    plVar11 = *(long **)(this + 0x118);
    if (plVar11 == (long *)0x0) goto LAB_033a501c;
LAB_033a4ddc:
    (**(code **)(*plVar11 + 0x60))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  bVar1 = std::operator==(asStack_40,"Plants");
  std::string::~string(asStack_40);
  if (bVar1) {
    uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c850);
    *(undefined8 *)(this + 0x158) = uVar8;
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
    bVar1 = std::operator==(asStack_98,"Gems");
    if (bVar1) {
      std::string::~string(asStack_98);
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
      bVar1 = std::operator==(asStack_90,"GemsFor360");
      if (bVar1) {
        std::string::~string(asStack_90);
        std::string::~string(asStack_98);
        *(undefined8 *)(this + 0x158) = 0;
        goto LAB_033a4e30;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
      bVar1 = std::operator==((string *)&local_78,"GemsExtra");
      if (!bVar1) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
        bVar1 = std::operator==(asStack_40,"GemsFor360Extra");
        std::string::~string(asStack_40);
      }
      std::string::~string((string *)&local_78);
      std::string::~string(asStack_90);
      std::string::~string(asStack_98);
      if (bVar1 == false) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
        bVar1 = std::operator==(asStack_40,"Coins");
        std::string::~string(asStack_40);
        if (!bVar1) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
          bVar1 = std::operator==(asStack_40,"Gift");
          std::string::~string(asStack_40);
          if (!bVar1) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
            bVar1 = std::operator==(asStack_40,"PlantGift");
            std::string::~string(asStack_40);
            if (!bVar1) {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
              bVar1 = std::operator==(asStack_40,"Avatars");
              std::string::~string(asStack_40);
              if (bVar1) {
                uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9ca00);
                *(undefined8 *)(this + 0x158) = uVar8;
                goto LAB_033a4e30;
              }
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
              bVar1 = std::operator==(asStack_40,"Gacha");
              std::string::~string(asStack_40);
              if (!bVar1) {
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
                bVar1 = std::operator==(asStack_40,"SecretGacha");
                std::string::~string(asStack_40);
                if (!bVar1) {
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
                  bVar1 = std::operator==(asStack_40,"AvatarTicket");
                  std::string::~string(asStack_40);
                  if (bVar1) {
                    plVar11 = *(long **)(this + 0xf0);
                    *(undefined8 *)(this + 0x158) = 0;
                    if (plVar11 == (long *)0x0) {
                      FUN_05478178((string *)&local_78,&DAT_056f11a8,asStack_90);
                      Sexy::Color::Color((Color *)asStack_40,1);
                      this_05 = ::operator_new(0x300);
                      PVZ2UIButton::PVZ2UIButton
                                (this_05,0xbba,(ButtonListener *)(this + 0xd8),(wstring *)&local_78,
                                 (Color *)asStack_40);
                      FUN_05476c50((string *)&local_78);
                      nop();
                      iVar5 = FUN_033961ec(0x3c);
                      uVar7 = FUN_033961ec(0x28);
                      (**(code **)(*(long *)this_05 + 0x198))
                                (this_05,(local_88 + local_80) - iVar5,local_84 + local_7c,uVar7,
                                 uVar7);
                      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06a9c938,2);
                      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06a9c938,2);
                      PVZ2UIButton::SetDialogStates
                                (this_05,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)asStack_40);
                      (**(code **)(*(long *)this + 0x60))(this,this_05);
                      *(PVZ2UIButton **)(this + 0xf0) = this_05;
                    }
                    else {
                      (**(code **)(*plVar11 + 0x158))(plVar11,1);
                    }
                  }
                  goto LAB_033a4e30;
                }
              }
            }
          }
        }
      }
    }
    *(undefined8 *)(this + 0x158) = 0;
  }
LAB_033a4e30:
  this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PurchaseBroker *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(this_02);
  std::string::string((string *)&local_78,"Main");
  std::string::string(asStack_40,"Store");
  PurchaseBroker::StartNewCartInstance
            (this_03,(string *)&local_78,asStack_40,(string *)(*(long *)(this + 0x110) + 0xe8));
  std::string::~string(asStack_40);
  nop();
  std::string::~string((string *)&local_78);
  nop();
  thunk_FUN_05475e00(this + 0x178,*(long *)(this + 0x110) + 0xe8);
  *(undefined4 *)(this + 0x170) = 0x43d58000;
  if (*(long **)(this + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x168) + 0x18))();
    *(undefined8 *)(this + 0x168) = 0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  bVar1 = std::operator==(asStack_40,"Gacha");
  std::string::~string(asStack_40);
  if (bVar1) {
    TGASecretStore::TGASecretStore((TGASecretStore *)&local_78);
    pTVar9 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGASecretStore::TGASecretStore((TGASecretStore *)asStack_40,(TGASecretStore *)&local_78);
    TGALogMgr::LogPennyTreasure(pTVar9,1,asStack_40);
    DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_40);
    DropGroupNode::~DropGroupNode((DropGroupNode *)&local_78);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  InitADCount(this,asStack_40);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoreUI::ButtonDepress(int) */

void __thiscall StoreUI::ButtonDepress(StoreUI *this,int param_1)

{
  char *pcVar1;
  RtWeakPtrBase *pRVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 6) {
    MessageRouter::Post((_func_void *)gMessageRouter);
    LawnApp::LaunchTmallSotreWebpage(gLawnApp);
    goto LAB_033a5620;
  }
  if (param_1 < 7) {
    if (param_1 == -1) {
      pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar1,"Play_UI_Button_X_Close_Release");
      GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
      goto LAB_033a5620;
    }
  }
  else {
    if (param_1 == 100) {
      nop();
      goto LAB_033a5620;
    }
    if (param_1 == 0xbba) {
      showDescriptionWidget(this);
      goto LAB_033a5620;
    }
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Tab_Scroll");
  *(int *)(this + 0x160) = param_1;
  pRVar2 = (RtWeakPtrBase *)FUN_03395484(*(undefined8 *)(this + 0xf8),(long)param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar2);
  createPanel(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
LAB_033a5620:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to StoreUI::ButtonDepress(int) */

void __thiscall StoreUI::ButtonDepress(StoreUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoreUI::onGetCoinsFromPlantBag() */

void __thiscall StoreUI::onGetCoinsFromPlantBag(StoreUI *this)

{
  RtWeakPtrBase *pRVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtWeakPtrBase *)FUN_03395484(*(undefined8 *)(this + 0xf8),(long)*(int *)(this + 0x160));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar1);
  createPanel(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoreUI::removeItemFromStore(std::string const&, std::string const&) */

void __thiscall StoreUI::removeItemFromStore(StoreUI *this,string *param_1,string *param_2)

{
  LawnApp *pLVar1;
  bool bVar2;
  bool bVar3;
  RtWeakPtrBase *pRVar4;
  string *psVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  psVar5 = ___stack_chk_guard;
  bVar2 = std::operator==(param_1,"coin");
  if ((!bVar2) && (bVar2 = std::operator==(param_1,"gem"), !bVar2)) {
    bVar3 = std::operator==(param_1,"plant");
    pLVar1 = gLawnApp;
    if (bVar3) {
      psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
      LawnApp::ShowPlantRewardDialog
                (pLVar1,(RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10,0,bVar2,bVar2,bVar2);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    else {
      bVar2 = std::operator==(param_1,"avatar");
      if (bVar2) {
        std::string::string(asStack_20,"iOS PvZ2 Avatar Store");
        std::string::string(asStack_18,"Avatars");
        std::string::string((string *)aRStack_10,"avatar");
        Magento::FindStoreProduct
                  ((Magento *)asStack_20,asStack_18,(string *)aRStack_10,param_2,psVar5);
        std::string::~string((string *)aRStack_10);
        nop();
        std::string::~string(asStack_18);
        nop();
        std::string::~string(asStack_20);
        nop();
        pLVar1 = gLawnApp;
        psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        MagentoProductProps::GetLocalizedShortDescription();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        MagentoProductProps::GetLocalizedDescription();
        LawnApp::ShowAvatarRewardDialog
                  (pLVar1,asStack_20,asStack_18,(string *)aRStack_10,0,0,0,0xffffffff);
        std::string::~string((string *)aRStack_10);
        std::string::~string(asStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      }
    }
    pRVar4 = (RtWeakPtrBase *)
             FUN_03395484(*(undefined8 *)(this + 0xf8),(long)*(int *)(this + 0x160));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar4);
    createPanel(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* StoreUI::onItemPurchasedFromStore(MagentoProductProps*) */

void __thiscall StoreUI::onItemPurchasedFromStore(StoreUI *this,MagentoProductProps *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *pRVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  removeItemFromStore(this,(string *)(param_1 + 0x78),(string *)(param_1 + 0x80));
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(param_1 + 0x98);
    uVar4 = FUN_0339543c(uVar6,*(undefined8 *)(param_1 + 0xa0));
    if (uVar4 <= uVar5) break;
    pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03395448(uVar6,uVar5);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03395448(*(undefined8 *)(param_1 + 0x98),uVar5);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    removeItemFromStore(this,(string *)(lVar2 + 0x78),(string *)(lVar3 + 0x80));
    uVar5 = uVar5 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoreUI::ShowPanel(std::string const&) */

void __thiscall StoreUI::ShowPanel(StoreUI *this,string *param_1)

{
  char cVar1;
  char *pcVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  ulong uVar3;
  undefined8 *puVar4;
  RtWeakPtrBase *pRVar5;
  size_t __n;
  ulong uVar6;
  undefined8 uVar7;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  __n = 0;
  AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Tab_Scroll");
  FUN_05475d88(asStack_18,param_1);
  if (*(int *)(this + 0x120) == 1) {
    std::string::append(asStack_18,"Plants",__n);
  }
  uVar3 = 0;
  do {
    uVar6 = uVar3;
    uVar7 = *(undefined8 *)(this + 0xf8);
    uVar3 = FUN_03395478(uVar7,*(undefined8 *)(this + 0x100));
    if (uVar3 <= uVar6) goto LAB_033a5b78;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03395484(uVar7,uVar6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
    cVar1 = std::operator==(asStack_10,param_1);
    std::string::~string(asStack_10);
    uVar3 = uVar6 + 1;
  } while (cVar1 == '\0');
  puVar4 = (undefined8 *)FUN_033954b8(*(undefined8 *)(this + 0x130),uVar6);
  PVZ2UIButton::SetRadioButtonSelected((PVZ2UIButton *)*puVar4);
  *(int *)(this + 0x160) = (int)uVar6;
  pRVar5 = (RtWeakPtrBase *)FUN_03395484(*(undefined8 *)(this + 0xf8),uVar6);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,pRVar5);
  createPanel(this,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
LAB_033a5b78:
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoreUI::onGetGachaInfo(S2C_GachaInfo*) */

void StoreUI::onGetGachaInfo(S2C_GachaInfo *param_1)

{
  RtWeakPtrBase *pRVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtWeakPtrBase *)
           FUN_03395484(*(undefined8 *)(param_1 + 0xf8),(long)*(int *)(param_1 + 0x160));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar1);
  createPanel((StoreUI *)param_1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoreUI::OnLuaNotify(std::string const&) */

void __thiscall StoreUI::OnLuaNotify(StoreUI *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  ulong uVar3;
  RtWeakPtrBase *pRVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator!=(param_1,"RefreshGemsStore");
  if ((!bVar1) && (*(int *)(this + 0x160) == 2)) {
    uVar5 = *(undefined8 *)(this + 0xf8);
    uVar3 = FUN_03395478(uVar5,*(undefined8 *)(this + 0x100));
    if (2 < uVar3) {
      pRVar4 = (RtWeakPtrBase *)FUN_03395484(uVar5,2);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar4);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        createPanel(this,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoreUI::InitMagento(std::string const&) */

void __thiscall StoreUI::InitMagento(StoreUI *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar12;
  RtWeakPtrBase *pRVar13;
  ActivityConfig *pAVar14;
  CachedUIResourcePtr *pCVar15;
  PVZ2UIButton *pPVar16;
  SalesProgressBar *pSVar17;
  LotteryResultProgressBar *this_02;
  undefined8 uVar18;
  ulong uVar19;
  string *extraout_x1;
  string *extraout_x1_00;
  char *__s;
  code *pcVar20;
  ulong uVar21;
  int iVar22;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_c8 [8];
  string asStack_c0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_b8 [8];
  PVZ2UIButton *local_b0;
  Sexy aSStack_a8 [8];
  CachedUIResourcePtr<Sexy::Image> aCStack_a0 [40];
  string asStack_78 [56];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_c8);
  iVar5 = LawnApp::GetPlatform(gLawnApp);
  if (((iVar5 < 0x43) || (iVar5 = LawnApp::GetPlatform(gLawnApp), 0xb2 < iVar5)) &&
     ((iVar5 = LawnApp::GetPlatform(gLawnApp), iVar5 < 0xf ||
      (iVar5 = LawnApp::GetPlatform(gLawnApp), 0x39 < iVar5)))) {
    cVar1 = LawnApp::HasSpecialGemOffer(gLawnApp);
    if (cVar1 == '\0') {
      __s = "iOS PvZ2 Store";
    }
    else {
      __s = "iOS PvZ2 Store Extra";
    }
  }
  else {
    cVar1 = LawnApp::HasSpecialGemOffer(gLawnApp);
    if (cVar1 == '\0') {
      __s = "iOS PvZ2 360 Store";
    }
    else {
      __s = "iOS PvZ2 360 Store Extra";
    }
  }
  std::string::string(asStack_78,__s);
  uVar21 = 0;
  Magento::GetStore((Magento *)asStack_78,extraout_x1);
  iVar22 = 0;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_c8,(RtWeakPtr *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  std::string::~string(asStack_78);
  nop();
  iVar5 = FUN_033961ec(0x42);
  FUN_05475d88(asStack_c0,param_1);
  lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_c8);
  lVar12 = FUN_03395478(*(undefined8 *)(lVar12 + 0x48),*(undefined8 *)(lVar12 + 0x50));
  if (lVar12 != 0) {
    do {
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_c8)
      ;
      pRVar13 = (RtWeakPtrBase *)FUN_03395484(*(undefined8 *)(lVar12 + 0x48),uVar21);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_b8,pRVar13);
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8)
      ;
      bVar2 = std::operator==((string *)(lVar12 + 0x10),"Gift");
      if (bVar2) {
        lVar12 = LawnApp::GetActivityConfig();
        if (lVar12 != 0) {
          pAVar14 = (ActivityConfig *)LawnApp::GetActivityConfig();
          cVar1 = ActivityConfig::IsStoreGiftsActivated(pAVar14);
joined_r0x033a6500:
          if (cVar1 != '\0') goto LAB_033a6090;
        }
LAB_033a6504:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8)
        ;
      }
      else {
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
        bVar2 = std::operator==((string *)(lVar12 + 0x10),"PlantGift");
        if (bVar2) {
          lVar12 = LawnApp::GetActivityConfig();
          if (lVar12 != 0) {
            pAVar14 = (ActivityConfig *)LawnApp::GetActivityConfig();
            cVar1 = ActivityConfig::IsStorePlantGiftsActivated(pAVar14);
            goto joined_r0x033a6500;
          }
          goto LAB_033a6504;
        }
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
        bVar2 = std::operator==((string *)(lVar12 + 0x10),"pvpCoins");
        if (bVar2) {
          cVar1 = PlayerInfo::HasPvpAccount(this_01);
          if (cVar1 != '\0') goto LAB_033a6090;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
        }
        else {
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
          bVar2 = std::operator==((string *)(lVar12 + 0x10),"SecretGacha");
          if (bVar2) {
            Sexy::LazySingleton<SecretGachaMgr>::GetInstance();
            cVar1 = SecretGachaMgr::NeedInit();
            if (cVar1 == '\0') {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
              goto LAB_033a63e4;
            }
          }
LAB_033a6090:
          std::
          vector<Sexy::RtWeakPtr<MagentoCategoryProps>,std::allocator<Sexy::RtWeakPtr<MagentoCategoryProps>>>
          ::push_back((vector<Sexy::RtWeakPtr<MagentoCategoryProps>,std::allocator<Sexy::RtWeakPtr<MagentoCategoryProps>>>
                       *)(this + 0xf8),(RtWeakPtr *)aRStack_b8);
          if ((iVar22 == 0) && (bVar2 = std::operator==(asStack_c0,""), bVar2)) {
LAB_033a60b8:
            *(int *)(this + 0x160) = iVar22;
            bVar2 = true;
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)aRStack_b8);
            createPanel(this,aRStack_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
            iVar6 = *(int *)(this + 0x120);
          }
          else {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
            Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
            cVar1 = std::operator==((string *)aRStack_40,asStack_c0);
            std::string::~string((string *)aRStack_40);
            if (cVar1 != '\0') goto LAB_033a60b8;
            iVar6 = *(int *)(this + 0x120);
            bVar2 = false;
          }
          bVar4 = false;
          if (iVar6 == 2) {
            lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
            bVar4 = std::operator!=((string *)(lVar12 + 0x10),"Gacha");
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
          Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
          bVar3 = std::operator==((string *)aRStack_40,"pvpCoins");
          std::string::~string((string *)aRStack_40);
          uVar18 = DAT_06a9bf60;
          if (bVar3) {
            lVar12 = 5;
          }
          else {
            uVar19 = FUN_0339548c(DAT_06a9bf60,DAT_06a9bf68);
            iVar6 = 0;
            if (uVar19 != 0) {
              iVar6 = (int)(uVar21 / uVar19);
            }
            lVar12 = (long)((int)uVar21 - iVar6 * (int)uVar19);
          }
          pCVar15 = (CachedUIResourcePtr *)FUN_033954a0(uVar18,lVar12);
          CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr(aCStack_a0,pCVar15);
          FUN_05478178(asStack_78,&DAT_056f11a8,aSStack_a8);
          Sexy::Color::Color((Color *)aRStack_40,1);
          pPVar16 = ::operator_new(0x300);
          PVZ2UIButton::PVZ2UIButton
                    (pPVar16,iVar22,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,
                     (Color *)aRStack_40);
          local_b0 = pPVar16;
          FUN_05476c50(asStack_78);
          nop();
          pPVar16 = local_b0;
          pcVar20 = *(code **)(*(long *)local_b0 + 0x198);
          iVar6 = FUN_033961ec(0x89);
          pSVar17 = (SalesProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(aCStack_a0);
          iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
          this_02 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->(aCStack_a0);
          uVar8 = LotteryResultProgressBar::GetCurrentLevel(this_02);
          pSVar17 = (SalesProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(aCStack_a0);
          uVar9 = SalesProgressBar::GetCurrentLevel(pSVar17);
          (*pcVar20)(pPVar16,iVar5,iVar6 - iVar7,uVar8,uVar9);
          pPVar16 = local_b0;
          PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,aCStack_a0,1);
          uVar18 = FUN_033954a0(DAT_06a9c018,lVar12);
          PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_40,uVar18,1);
          PVZ2UIButton::SetRadioStates
                    (pPVar16,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)aRStack_40,bVar2);
          pPVar16 = local_b0;
          pcVar20 = *(code **)(*(long *)local_b0 + 800);
          uVar18 = PrimeText_PotentialTypeface::Typeface
                             (PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
          (*pcVar20)(pPVar16,uVar18);
          (**(code **)(*(long *)local_b0 + 0x188))(local_b0,bVar4);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
          MagentoCategoryProps::GetLocalizedName();
          Sexy::UTF8StringToWString(aSStack_a8,extraout_x1_00);
          iVar6 = FUN_033961ec(0);
          iVar7 = FUN_033961ec(10);
          pPVar16 = local_b0;
          iVar10 = FUN_03395408(*(undefined4 *)(local_b0 + 0x50));
          iVar11 = FUN_0339540c(*(undefined4 *)(pPVar16 + 0x54));
          Sexy::Insets::Insets((Insets *)aRStack_40,iVar6,iVar7,iVar10,iVar11);
          PVZ2UIButton::AddText(pPVar16,asStack_78,aRStack_40,0);
          FUN_05476c50(asStack_78);
          std::string::~string((string *)aSStack_a8);
          std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
                    ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x130),&local_b0
                    );
          (**(code **)(*(long *)this + 0x60))(this,local_b0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
          Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
          std::operator==((string *)aRStack_40,"Plants");
          std::string::~string((string *)aRStack_40);
          iVar6 = FUN_033961ec(0xb);
          iVar5 = iVar5 + iVar6 + *(int *)(local_b0 + 0x50);
          CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(aCStack_a0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
          iVar22 = iVar22 + 1;
        }
      }
LAB_033a63e4:
      uVar21 = uVar21 + 1;
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_c8)
      ;
      uVar19 = FUN_03395478(*(undefined8 *)(lVar12 + 0x48),*(undefined8 *)(lVar12 + 0x50));
    } while (uVar21 < uVar19);
  }
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)aRStack_40,
             (vector *)(this + 0x130));
  PVZ2UI::LinkRadioButtons(aRStack_40);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)aRStack_40);
  this[0x188] = (StoreUI)0x1;
  std::string::~string(asStack_c0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoreUI::StoreUI(std::string const&) */

void __thiscall StoreUI::StoreUI(StoreUI *this,string *param_1)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ProfileMgr *this_00;
  long lVar14;
  PVZ2UIButton *pPVar15;
  LotteryResultProgressBar *pLVar16;
  SalesProgressBar *pSVar17;
  code *pcVar18;
  long *plVar19;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined1 local_220 [16];
  undefined8 local_210;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined1 local_1e0 [16];
  undefined8 local_1d0;
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [40];
  undefined1 auStack_158 [96];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  Delegate0 aDStack_a8 [48];
  string asStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06612fb0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066132f0;
  *(undefined ***)(this + 0xe0) = &PTR__StoreUI_06613338;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x130));
  Set8BytesTo0(this + 0x178);
  FUN_05476574(this + 0x180);
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  this[0x164] = (StoreUI)0x0;
  thunk_FUN_05475e00(this + 0x178,param_1);
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x160) = 0;
  this[0x188] = (StoreUI)0x0;
  *(undefined4 *)(this + 0x18c) = 0;
  this[400] = (StoreUI)0x0;
  pLVar2 = gLawnApp;
  std::string::string(asStack_40,"AppStore");
  LawnApp::GetPackageName(pLVar2,asStack_40);
  bVar3 = std::operator==(asStack_78,"com.popcap.pvz2cthdhwctdp");
  std::string::~string(asStack_78);
  std::string::~string(asStack_40);
  nop();
  if (bVar3) {
    this[400] = (StoreUI)0x1;
  }
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  pLVar2 = gLawnApp;
  std::string::string(asStack_40,"UI_Store");
  LawnApp::LoadGroup(pLVar2,asStack_40);
  std::string::~string(asStack_40);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_40,"UI_Store_Pvp");
  LawnApp::LoadGroup(pLVar2,asStack_40);
  std::string::~string(asStack_40);
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar14 = ProfileMgr::GetCurrentProfile(this_00);
  iVar5 = FUN_03395418(*(undefined4 *)(lVar14 + 0x40));
  if (iVar5 == 0x17) {
    *(undefined4 *)(this + 0x120) = 2;
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onGachaTutorialFinished);
    Sexy::Delegate0::Delegate0<StoreUI,void(StoreUI::*)()>(aDStack_a8,asStack_40);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GachaTutorialFinished,aDStack_a8);
  }
  Sexy::Widget::Resize
            ((Widget *)this,*(int *)(gLawnApp + 0x71c),*(int *)(gLawnApp + 0x720),
             *(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onItemPurchasedFromStore);
  MessageRouter::
  Subscribe<MagentoProductProps*,Sexy::CBMemberTranslatorX<StoreUI,void(StoreUI::*)(MagentoProductProps*)>>
            ((MessageRouter *)puVar1,Message::ItemPurchasedFromStore,local_180);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLuaNotify);
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<StoreUI,void(StoreUI::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::OnLuaNotify,local_1a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGetGachaInfo);
  MessageRouter::
  Subscribe<S2C_GachaInfo*,Sexy::CBMemberTranslatorX<StoreUI,void(StoreUI::*)(S2C_GachaInfo*)>>
            ((MessageRouter *)puVar1,Message::GetGachaInfo,local_1c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGetCoinsFromPlantBag);
  Sexy::Delegate0::Delegate0<StoreUI,void(StoreUI::*)()>(aDStack_a8,asStack_40);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GetCoinsFromPlantBag,aDStack_a8);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantPackageBuy);
  local_1d0 = local_f8;
  MessageRouter::
  Subscribe<PlantPackage*,Sexy::CBMemberTranslatorX<StoreUI,void(StoreUI::*)(PlantPackage*)>>
            ((MessageRouter *)puVar1,Message::PlantPackageBuy,local_1e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefreshActivityList);
  local_200 = local_f0;
  uStack_1f8 = uStack_e8;
  local_1f0 = local_e0;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<StoreUI,void(StoreUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_200);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNetworkError);
  local_210 = local_c8;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<StoreUI,void(StoreUI::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,local_220);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGachaInitFinished);
  Sexy::Delegate0::Delegate0<StoreUI,void(StoreUI::*)()>(aDStack_a8,asStack_40);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GachaInitFinished,aDStack_a8);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onADFinished);
  local_240 = local_c0;
  uStack_238 = uStack_b8;
  local_230 = local_b0;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<StoreUI,void(StoreUI::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyADWatchFinish,&local_240);
  *(undefined8 *)(this + 0x148) = 0;
  FUN_05478178(asStack_78,&DAT_056f11a8,auStack_158);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar15 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar15,-1,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0x148) = pPVar15;
  FUN_05476c50(asStack_78);
  nop();
  plVar19 = *(long **)(this + 0x148);
  iVar5 = *(int *)(this + 0x50);
  pcVar18 = *(code **)(*plVar19 + 0x198);
  pLVar16 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bf10);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
  iVar7 = FUN_033961ec(10);
  iVar8 = FUN_033961ec(0x89);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bf10);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar17);
  iVar10 = FUN_033961ec(0x14);
  iVar11 = FUN_033961ec(5);
  pLVar16 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bf10);
  iVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bf10);
  iVar13 = SalesProgressBar::GetCurrentLevel(pSVar17);
  (*pcVar18)(plVar19,(iVar5 - iVar6) - iVar7,((iVar8 - iVar9) - iVar10) - iVar11,
             (int)((float)iVar12 * 1.2),(int)((float)iVar13 * 1.2));
  pPVar15 = *(PVZ2UIButton **)(this + 0x148);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06a9bf10,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06a9bf78,2);
  PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)asStack_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x148));
  *(undefined8 *)(this + 0x150) = 0;
  TodStringTranslate(L"[REMOVE_AD_HINT]");
  FUN_054766c8(this + 0x180,asStack_40);
  FUN_05476c50(asStack_40);
  cVar4 = LawnApp::IsNetworkModuleOK();
  if (cVar4 == '\0') {
    LawnApp::SetSpecialGemOffer(gLawnApp,false);
    InitMagento(this,param_1);
  }
  else {
    Sexy::LazySingleton<GemOfferMgr>::GetInstance();
    GemOfferMgr::RequestNetwork();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoreUI::OnNetworkError(int, std::string const&) */

void __thiscall StoreUI::OnNetworkError(StoreUI *this,int param_1,string *param_2)

{
  char cVar1;
  _PacketId a_Stack_ce8 [1152];
  string asStack_868 [2144];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _PacketId::_PacketId(a_Stack_ce8);
  cVar1 = std::operator==(param_2,asStack_868);
  if (cVar1 != '\0') {
    LawnApp::SetSpecialGemOffer(gLawnApp,false);
    InitMagento(this,(string *)(this + 0x178));
  }
  _PacketId::~_PacketId(a_Stack_ce8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoreUI::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&) */

void __thiscall StoreUI::OnNotifyRefreshActivityList(StoreUI *this,bool param_1,set *param_2)

{
  bool bVar1;
  int iVar2;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_9c = 0x297f;
  local_8 = ___stack_chk_guard;
  local_98 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_9c);
  local_90 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
  if (bVar1) {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    if (local_70 == '\0') {
      LawnApp::SetSpecialGemOffer(gLawnApp,false);
    }
    else {
      LawnApp::SetSpecialGemOffer(gLawnApp,true);
    }
    InitMagento(this,(string *)(this + 0x178));
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

