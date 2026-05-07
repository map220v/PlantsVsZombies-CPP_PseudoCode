// Class: GetPlantBagUI


/* GetPlantBagUI::ButtonPress(int) */

int GetPlantBagUI::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to GetPlantBagUI::ButtonPress(int) */

void __thiscall GetPlantBagUI::ButtonPress(GetPlantBagUI *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetPlantBagUI::~GetPlantBagUI() */

void __thiscall GetPlantBagUI::~GetPlantBagUI(GetPlantBagUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_068421b0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06841e80;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GetPlantBagUI::~GetPlantBagUI() */

void __thiscall GetPlantBagUI::~GetPlantBagUI(GetPlantBagUI *this)

{
  ~GetPlantBagUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetPlantBagUI::setupScreen() */

void __thiscall GetPlantBagUI::setupScreen(GetPlantBagUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  PVZ2UIButton *this_00;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_043b1f58(0x208);
  iVar2 = FUN_043b1f58(0x90);
  iVar3 = FUN_043b1f58(0x186);
  Sexy::Insets::Insets((Insets *)&local_40,(*(int *)(this + 0x50) - iVar1) / 2,iVar2,iVar1,iVar3);
  *(undefined8 *)(this + 0xe8) = local_40;
  *(undefined8 *)(this + 0xf0) = uStack_38;
  this[0xf8] = (GetPlantBagUI)0x0;
  FUN_05478178(awStack_78,L"[PLANT_BAG_PLANT_OPEN_BUTTOM]",auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0x3e9,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
  FUN_05476c50(awStack_78);
  nop();
  pcVar7 = *(code **)(*(long *)this_00 + 0x198);
  iVar2 = FUN_043b1f58(0x96);
  iVar1 = *(int *)(this + 0x50);
  uVar4 = FUN_043b1f58(500);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b022f0);
  (*pcVar7)(this_00,(iVar1 - iVar2) / 2,uVar4,iVar2,*(undefined4 *)(lVar5 + 0x3c));
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b02410,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b022a0,3);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  pcVar7 = *(code **)(*(long *)this_00 + 800);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  (*pcVar7)(this_00,uVar6);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetPlantBagUI::GetPlantBagUI(Sexy::RtWeakPtr<MagentoProductProps> const&, bool) */

void __thiscall GetPlantBagUI::GetPlantBagUI(GetPlantBagUI *this,RtWeakPtr *param_1,bool param_2)

{
  LawnApp *this_00;
  PrimeText *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06841e80;
  *(undefined **)(this + 0xd8) = &DAT_068421b0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe0));
  Sexy::Insets::Insets((Insets *)(this + 0xe8));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xe0),param_1);
  this[0xf9] = (GetPlantBagUI)param_2;
  this_01 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_01);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::Widget::Resize((Widget *)this,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
  setupScreen(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetPlantBagUI::drawShadedBox(Sexy::Graphics*, Sexy::TRect<int>) */

void __thiscall
GetPlantBagUI::drawShadedBox(undefined8 param_1_00,Graphics *param_1,Insets *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  Image *pIVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  GraphicsAutoState aGStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar9 = 0;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02380);
  iVar1 = *(int *)(lVar5 + 0x38);
  Sexy::Insets::Insets((Insets *)&local_18);
  fVar10 = (float)(iVar1 / 3);
  local_14 = *(int *)(param_3 + 4) + (int)(fVar10 * 0.35);
  local_18 = *(int *)param_3 + (int)(fVar10 * 0.43);
  local_10 = *(int *)(param_3 + 8) + (int)(fVar10 * 0.43) * -2;
  local_c = (*(int *)(param_3 + 0xc) - (int)(fVar10 * 0.35)) - (int)(fVar10 * 0.4);
  Sexy::Graphics::SetClipRect(param_1,(TRect *)&local_18);
  iVar1 = *(int *)(param_3 + 0xc);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b024a0);
  iVar8 = *(int *)(param_3 + 8);
  iVar4 = 0;
  if (*(int *)(lVar5 + 0x3c) != 0) {
    iVar4 = iVar1 / *(int *)(lVar5 + 0x3c);
  }
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b024a0);
  iVar1 = 0;
  if (*(int *)(lVar5 + 0x38) != 0) {
    iVar1 = iVar8 / *(int *)(lVar5 + 0x38);
  }
  if (-1 < iVar1) {
    do {
      if (-2 < iVar4) {
        iVar8 = 0;
        do {
          lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b024a0);
          iVar2 = *(int *)(lVar5 + 0x38);
          lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b024a0);
          iVar3 = iVar8 * *(int *)(lVar5 + 0x3c);
          iVar8 = iVar8 + 1;
          pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b024a0);
          Sexy::Graphics::DrawImage(param_1,pIVar6,iVar9 * iVar2,iVar3);
        } while (iVar8 != iVar4 + 2);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 <= iVar1);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  Sexy::Insets::Insets((Insets *)&local_18,param_3);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02380);
  Draw9SliceImage(param_1,(Insets *)&local_18,uVar7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetPlantBagUI::Draw(Sexy::Graphics*) */

void __thiscall GetPlantBagUI::Draw(GetPlantBagUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  Image *pIVar8;
  LotteryResultProgressBar *pLVar9;
  SalesProgressBar *pSVar10;
  int iVar11;
  float fVar12;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  Sexy::Graphics::Translate(param_1,*(int *)(this + 0xe8),*(int *)(this + 0xec));
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0xf0),*(int *)(this + 0xf4));
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  drawShadedBox(this,param_1,aIStack_18);
  Sexy::Graphics::Translate(param_1,-*(int *)(this + 0xe8),-*(int *)(this + 0xec));
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02380);
  iVar1 = *(int *)(this + 0xe8);
  iVar5 = *(int *)(this + 0xf4);
  iVar4 = *(int *)(this + 0xec);
  fVar12 = (float)(*(int *)(lVar6 + 0x38) / 3);
  iVar11 = (int)(fVar12 * 0.43);
  iVar2 = FUN_043b1f58(0x56);
  iVar3 = FUN_043b1f58(3);
  Sexy::Insets::Insets
            (aIStack_18,iVar11 + iVar1,(((iVar4 + iVar5) - iVar2) - (int)(fVar12 * 0.4)) - iVar3,
             *(int *)(this + 0xf0) + iVar11 * -2,iVar2);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02318);
  Draw3SliceImage(param_1,aIStack_18,uVar7);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02440);
  iVar1 = *(int *)(this + 0x50);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02440);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar5 = *(int *)(this + 0x54);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02440);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar10);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02440);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02440);
  iVar11 = SalesProgressBar::GetCurrentLevel(pSVar10);
  Sexy::Graphics::DrawImage(param_1,pIVar8,(iVar1 - iVar4) / 2,(iVar5 - iVar2) / 2,iVar3,iVar11);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b024d0);
  iVar1 = *(int *)(this + 0x50);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b024d0);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar5 = *(int *)(this + 0x54);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b024d0);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar10);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b024d0);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b024d0);
  iVar11 = SalesProgressBar::GetCurrentLevel(pSVar10);
  Sexy::Graphics::DrawImage(param_1,pIVar8,(iVar1 - iVar4) / 2,(iVar5 - iVar2) / 2,iVar3,iVar11);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b022c8);
  iVar1 = *(int *)(this + 0x50);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b022c8);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar2 = FUN_043b1f58(0x41);
  iVar5 = *(int *)(this + 0xec);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b022c8);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b022c8);
  iVar11 = SalesProgressBar::GetCurrentLevel(pSVar10);
  Sexy::Graphics::DrawImage(param_1,pIVar8,(iVar1 - iVar4) / 2,iVar5 - iVar2,iVar3,iVar11);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b024f8);
  iVar1 = *(int *)(this + 0x50);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b024f8);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar2 = FUN_043b1f58(0x12);
  iVar5 = *(int *)(this + 0xec);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b024f8);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b024f8);
  iVar11 = SalesProgressBar::GetCurrentLevel(pSVar10);
  Sexy::Graphics::DrawImage(param_1,pIVar8,(iVar1 - iVar4) / 2,iVar5 - iVar2,iVar3,iVar11);
  TodStringTranslate(L"[PLANT_BAG_PLANT_GET_TITLE]");
  iVar5 = FUN_043b1f58(0x12);
  iVar1 = *(int *)(this + 0xec);
  iVar4 = FUN_043b1f58(100);
  Sexy::Insets::Insets(aIStack_28,*(int *)(this + 0xe8),iVar1 - iVar5,*(int *)(this + 0xf0),iVar4);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar7,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  TodStringTranslate(L"[PLANT_BAG_PLANT_VIEW]");
  iVar1 = *(int *)(this + 0xec);
  iVar5 = *(int *)(this + 0xf4);
  iVar4 = FUN_043b1f58(0x56);
  iVar2 = FUN_043b1f58(0xc);
  iVar3 = FUN_043b1f58(0x37);
  Sexy::Insets::Insets
            (aIStack_28,*(int *)(this + 0xe8),((iVar1 + iVar5) - iVar4) - iVar2,
             *(int *)(this + 0xf0),iVar3);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar7,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GetPlantBagUI::onGetCoins() */

void GetPlantBagUI::onGetCoins(void)

{
  PlayerInfo *this;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this = (PlayerInfo *)ProfileUtils::Profile();
  PlayerInfo::SetFirstBuyPlantBag(this,false);
  PlayerInfo::AddCoins(this,60000);
  LawnApp::KillGetPlantBagUI(gLawnApp);
  MessageRouter::Post((_func_void *)gMessageRouter);
  MessageRouter::Post<std::string_const&,int,char_const*,int>
            ((MessageRouter *)gMessageRouter,Message::Gift,"",6000);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetPlantBagUI::ButtonDepress(int) */

void __thiscall GetPlantBagUI::ButtonDepress(GetPlantBagUI *this,int param_1)

{
  RtMixedPtrBase *this_00;
  undefined *puVar1;
  LawnApp *this_01;
  char cVar2;
  int iVar3;
  int iVar4;
  PlayerInfo *this_02;
  long lVar5;
  ProfileMgr *this_03;
  PVZ2UIDialog *this_04;
  PrimeTypeface *pPVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x3e9) {
    this_02 = (PlayerInfo *)ProfileUtils::Profile();
    this_01 = gLawnApp;
    if (this[0xf9] == (GetPlantBagUI)0x0) {
      this_00 = (RtMixedPtrBase *)(this + 0xe0);
      LawnApp::KillGetPlantBagUI(gLawnApp);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar2 != '\0') {
        PlayerInfo::SetFirstBuyPlantBag(this_02,false);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        cVar2 = PlayerInfo::GetIsPlantUnlocked(this_02,(string *)(lVar5 + 0x80));
        if (cVar2 == '\0') {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
          ;
          PlayerInfo::UnlockPlant(this_02,(string *)(lVar5 + 0x80),false);
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
          ;
          PlayerInfo::AddPlantStartLevel(this_02,(string *)(lVar5 + 0x80),0);
          puVar1 = gMessageRouter;
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)this_00);
          MessageRouter::Post<MagentoProductProps*,Sexy::RtWeakPtr<MagentoProductProps>>
                    ((MessageRouter *)puVar1,Message::ItemPurchasedFromStore,aRStack_50);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
          puVar1 = gMessageRouter;
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)this_00);
          MessageRouter::
          Post<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int,Sexy::RtWeakPtr<MagentoProductProps>,char_const*,int>
                    ((MessageRouter *)puVar1,Message::ItemPurchaseInfo2,aRStack_50,"Store|PvE_Store"
                     ,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
        }
        else {
          iVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
          ;
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
          ;
          PlayerInfo::AddPlantPieceCount
                    ((string *)this_02,iVar4 + 0x80,SUB41(*(undefined4 *)(lVar5 + 0x90),0));
        }
        puVar1 = gMessageRouter;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)this_00);
        MessageRouter::Post<MagentoProductProps*,Sexy::RtWeakPtr<MagentoProductProps>>
                  ((MessageRouter *)puVar1,Message::CartInstanceEvent,aRStack_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50)
        ;
        puVar1 = gMessageRouter;
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        FUN_05475d88(aRStack_50,lVar5 + 0x80);
        MessageRouter::Post<std::string_const&,int,std::string,int>
                  ((MessageRouter *)puVar1,Message::Gift,aRStack_50,0);
        std::string::~string((string *)aRStack_50);
        PlayerInfo::UpdateDeltaDataOfflineSaveTime(this_02);
        this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        ProfileMgr::RequestSave(this_03);
      }
    }
    else {
      iVar4 = FUN_043b1f58(400);
      iVar3 = FUN_043b1f58(0xfa);
      this_04 = (PVZ2UIDialog *)
                LawnApp::ShowPVZ2Dialog(this_01,(float)iVar4,(float)iVar3,(PVZ2UIDialog *)0x0);
      FUN_05478178((wstring *)aRStack_50,L"[PLANT_BAG_PLANT_GET_TITLE]",auStack_58);
      PVZ2UIDialog::SetHeaderLabel(this_04,(wstring *)aRStack_50);
      FUN_05476c50((wstring *)aRStack_50);
      nop();
      FUN_05478178((wstring *)aRStack_50,L"[PLANT_BAG_REWARD_COINS]",auStack_58);
      PVZ2UIDialog::SetFooterLabel(this_04,(wstring *)aRStack_50);
      FUN_05476c50((wstring *)aRStack_50);
      nop();
      pPVar6 = (PrimeTypeface *)
               PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
      PVZ2UIDialog::SetHeaderFont(this_04,pPVar6,(Color *)&PrimeText_Game::Color_Generic_Title);
      pPVar6 = (PrimeTypeface *)
               PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
      Sexy::Color::Color((Color *)aRStack_50,1);
      PVZ2UIDialog::SetFooterFont(this_04,pPVar6,(Color *)aRStack_50);
      PVZ2UIDialog::SetBackgroundDarken(this_04,true,0.5);
      FUN_05478178(auStack_58,L"[PLANT_OBTAIN]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onGetCoins);
      Sexy::Delegate0::Delegate0<GetPlantBagUI,void(GetPlantBagUI::*)()>
                (aDStack_38,(wstring *)aRStack_50);
      PVZ2UIDialog::AddButton(this_04,auStack_58,aDStack_38,1);
      FUN_05476c50(auStack_58);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to GetPlantBagUI::ButtonDepress(int) */

void __thiscall GetPlantBagUI::ButtonDepress(GetPlantBagUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

