// Class: BuyItemUI


/* BuyItemUI::OnPaySuccess() */

void __thiscall BuyItemUI::OnPaySuccess(BuyItemUI *this)

{
  this[0x120] = (BuyItemUI)0x1;
  (**(code **)(*(long *)this + 0x158))(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BuyItemUI::GetSkuByType(BuyItemUI::BuyType) */

void __thiscall BuyItemUI::GetSkuByType(string *param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  switch(param_2) {
  default:
    FUN_05475d88(param_1,&StringHelper::Empty);
    break;
  case 1:
    std::string::string(param_1,"com.popcap.chs.PVZ2.buy.present");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* BuyItemUI::GetGemsCostByType(BuyItemUI::BuyType) */

undefined8 BuyItemUI::GetGemsCostByType(uint param_1)

{
  if ((1 < param_1) && (param_1 != 3)) {
    return 0;
  }
  return 0x14;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BuyItemUI::~BuyItemUI() */

void __thiscall BuyItemUI::~BuyItemUI(BuyItemUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069297d8;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_069294b0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantGift");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
  FUN_05476c50(this + 0x110);
  FUN_05476c50(this + 0x100);
  FUN_05476c50(this + 0xf8);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BuyItemUI::~BuyItemUI() */

void __thiscall BuyItemUI::~BuyItemUI(BuyItemUI *this)

{
  ~BuyItemUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BuyItemUI::DrawByType(Sexy::Graphics*) */

void BuyItemUI::DrawByType(Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  LotteryResultProgressBar *pLVar10;
  LotteryResultProgressBar *pLVar11;
  SalesProgressBar *pSVar12;
  Image *pIVar13;
  PopAnimRig *this;
  Graphics *in_x1;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 in_s1;
  undefined1 auStack_58 [8];
  Insets aIStack_50 [16];
  Color aCStack_40 [16];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(param_1 + 0xe0)) {
  case 0:
  case 2:
  case 3:
    iVar6 = *(int *)(param_1 + 0xec);
    iVar1 = *(int *)(param_1 + 0xe4);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76530);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    iVar7 = *(int *)(param_1 + 0xf0);
    iVar8 = *(int *)(param_1 + 0xe8);
    iVar1 = iVar1 + (iVar6 - iVar5 >> 1);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76748);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76530);
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
    iVar6 = ((iVar8 + iVar7) - iVar5) - iVar6;
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76530);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76530);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76530);
    iVar8 = SalesProgressBar::GetCurrentLevel(pSVar12);
    Sexy::Graphics::DrawImage(in_x1,pIVar13,iVar1,iVar6,iVar7,iVar8);
    uVar14 = LawnMower::GetArtOffset();
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76530);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    fVar15 = (float)FUN_049d974c(uVar14);
    iVar8 = FUN_049d9738(0x14);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76530);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
    fVar16 = (float)FUN_049d974c(in_s1);
    iVar9 = FUN_049d9738(0x14);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,true);
    FUN_049d9640((float)(int)(((float)iVar8 - fVar15) + (float)(iVar1 + (iVar7 >> 1))),
                 (float)(int)(((float)iVar9 - fVar16) + (float)(iVar6 + (iVar5 >> 1))),auStack_28,
                 auStack_1c);
    this = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x118));
    PopAnimRig::Draw(this,in_x1,aSStack_30);
    break;
  case 1:
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76530);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76478);
    iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    iVar5 = FUN_049d9738(0x14);
    iVar6 = *(int *)(param_1 + 0xe8);
    iVar7 = *(int *)(param_1 + 0xf0);
    iVar1 = *(int *)(param_1 + 0xe4) + (*(int *)(param_1 + 0xec) - (iVar8 + iVar1 * 2 + iVar5) >> 1)
    ;
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76748);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76530);
    iVar8 = SalesProgressBar::GetCurrentLevel(pSVar12);
    iVar8 = ((iVar6 + iVar7) - iVar5) - iVar8;
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b763d8);
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76530);
    pLVar10 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76530);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76530);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar12);
    Sexy::Graphics::DrawImage(in_x1,pIVar13,iVar1,iVar8,iVar6,iVar7);
    pLVar10 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76530);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76530);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
    iVar9 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar11);
    iVar2 = FUN_049d9738(0x14);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar11);
    Sexy::Graphics::DrawImage
              (in_x1,(Image *)pLVar11,iVar1 + (iVar6 - iVar7 >> 1),
               iVar8 + ((iVar5 - iVar9 >> 1) - iVar2),iVar3,iVar4);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76530);
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
    iVar7 = FUN_049d9738(0x32);
    FUN_05478178(auStack_58,&DAT_05739bb0,aCStack_40);
    nop();
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76530);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    iVar9 = FUN_049d9738(0x1e);
    Sexy::Insets::Insets(aIStack_50,iVar1,iVar8 + (iVar6 - iVar7),iVar5,iVar9);
    PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
    Sexy::Color::Color(aCStack_40,1);
    WriteWordInRect();
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76530);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    iVar7 = FUN_049d9738(10);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76530);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76478);
    iVar9 = SalesProgressBar::GetCurrentLevel(pSVar12);
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76478);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76478);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76478);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar12);
    Sexy::Graphics::DrawImage
              (in_x1,pIVar13,iVar1 + iVar6 + iVar7,iVar8 + (iVar5 - iVar9 >> 1),iVar2,iVar3);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76478);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    iVar1 = iVar1 + iVar6 + iVar5 + iVar7 * 2;
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76400);
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76530);
    pLVar10 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76530);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76530);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar12);
    Sexy::Graphics::DrawImage(in_x1,pIVar13,iVar1,iVar8,iVar6,iVar7);
    pLVar10 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76530);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76530);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
    iVar9 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar11);
    iVar2 = FUN_049d9738(0x14);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar11);
    Sexy::Graphics::DrawImage
              (in_x1,(Image *)pLVar11,iVar1 + (iVar6 - iVar7 >> 1),
               iVar8 + ((iVar5 - iVar9 >> 1) - iVar2),iVar3,iVar4);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76530);
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
    iVar7 = FUN_049d9738(0x32);
    FUN_054772c4(auStack_58,&DAT_05739bd0);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76530);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    iVar9 = FUN_049d9738(0x1e);
    Sexy::Insets::Insets(aIStack_50,iVar1,iVar8 + (iVar6 - iVar7),iVar5,iVar9);
    PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
    Sexy::Color::Color(aCStack_40,1);
    WriteWordInRect();
    FUN_05476c50(auStack_58);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BuyItemUI::InitByType() */

void BuyItemUI::InitByType(void)

{
  long lVar1;
  RtWeakPtr<SpartanBambooMatrixSystem> *this;
  int iVar2;
  long in_x0;
  undefined8 uVar3;
  ArenaBattleModule *this_00;
  PopAnim *pPVar4;
  RtClass *pRVar5;
  long *plVar6;
  ADManager *pAVar7;
  ulong uVar8;
  int in_w3;
  code *pcVar9;
  float fVar10;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  lVar1 = in_x0 + 0xf8;
  local_8 = ___stack_chk_guard;
  FUN_05476f98(lVar1);
  if (*(uint *)(in_x0 + 0xe0) < 4) {
    switch(*(uint *)(in_x0 + 0xe0)) {
    case 1:
      TodStringTranslate(L"[BUY_PRESENT_DESC]");
      FUN_054766c8(lVar1,aRStack_20);
      FUN_05476c50(aRStack_20);
      iVar2 = LawnApp::GetPlatform(gLawnApp);
      if ((iVar2 == 0xb) || (iVar2 == 5)) {
        uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76508);
        *(undefined8 *)(in_x0 + 0x108) = uVar3;
      }
      else {
        uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b764c8);
        *(undefined8 *)(in_x0 + 0x108) = uVar3;
      }
      break;
    case 2:
      TodStringTranslate(L"[OBTAIN_MOWER]");
      FUN_054766c8(in_x0 + 0x110,aRStack_20);
      FUN_05476c50(aRStack_20);
    default:
      TodStringTranslate(L"[BUY_MOWER_DESC]");
      FUN_054766c8(lVar1,aRStack_20);
      FUN_05476c50(aRStack_20);
      uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b765d8);
      *(undefined8 *)(in_x0 + 0x108) = uVar3;
      if (*(int *)(in_x0 + 0xe0) == 3) {
        pAVar7 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
        uVar8 = ADManager::GetLeftADWatchCount(pAVar7,0x16);
        std::string::string(asStack_28,"[BUY_AD_MOWER_LEFT_TIMES]");
        StringHelper::ReplaceNumberString
                  ((StringHelper *)asStack_28,(string *)L"{NUMBER}",(wchar_t *)(uVar8 & 0xffffffff),
                   in_w3);
        FUN_054766c8(in_x0 + 0x100,aRStack_20);
        FUN_05476c50(aRStack_20);
        std::string::~string(asStack_28);
        nop();
      }
      if (((gLawnApp != (LawnApp *)0x0) && (*(long *)(gLawnApp + 0x9f0) != 0)) &&
         (this_00 = (ArenaBattleModule *)
                    FUN_049da194(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)),
         this_00 != (ArenaBattleModule *)0x0)) {
        pPVar4 = (PopAnim *)ArenaBattleModule::getMowerAnim(this_00);
        pRVar5 = (RtClass *)PopAnimRig::StaticGetClass();
        this = (RtWeakPtr<SpartanBambooMatrixSystem> *)(in_x0 + 0x118);
        PopAnimRig::CreateRig(pPVar4,pRVar5);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this,(RtWeakPtrBase *)aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this);
        pcVar9 = *(code **)(*plVar6 + 0x78);
        std::string::string(asStack_28,"idle");
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
        (*pcVar9)(plVar6,asStack_28,0,0,aRStack_20);
        std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)aRStack_20)
        ;
        std::string::~string(asStack_28);
        nop();
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this);
        pcVar9 = *(code **)(*plVar6 + 0x80);
        fVar10 = (float)Sexy::Rand(20.0);
        (*pcVar9)((fVar10 + -10.0) * 0.01 + 1.0,plVar6);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BuyItemUI::InitUI() */

void __thiscall BuyItemUI::InitUI(BuyItemUI *this)

{
  ButtonListener *pBVar1;
  int iVar2;
  undefined *puVar3;
  LawnApp *pLVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  LotteryResultProgressBar *pLVar14;
  SalesProgressBar *pSVar15;
  PVZ2UIButton *pPVar16;
  ulong uVar17;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  PVZ2UIButton *this_01;
  long lVar18;
  code *pcVar19;
  wstring awStack_a0 [8];
  string asStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [56];
  undefined8 local_40;
  undefined8 local_38;
  long local_8;
  
  pLVar4 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_40,"UI_AwardDialog");
  LawnApp::LoadGroup(pLVar4,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pLVar4 = gLawnApp;
  std::string::string((string *)&local_40,"UI_Store");
  LawnApp::LoadGroup(pLVar4,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pLVar4 = gLawnApp;
  std::string::string((string *)&local_40,"UI_PlantGift");
  LawnApp::LoadGroup(pLVar4,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  iVar9 = *(int *)(this + 0x50);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b766d8);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  iVar2 = *(int *)(this + 0x54);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b766d8);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar15);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b766d8);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b766d8);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar15);
  Sexy::Insets::Insets((Insets *)&local_40,iVar9 - iVar5 >> 1,iVar2 - iVar6 >> 1,iVar7,iVar8);
  *(undefined8 *)(this + 0xe4) = local_40;
  *(undefined8 *)(this + 0xec) = local_38;
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76600);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar15);
  if ((int)((ulong)local_40 >> 0x20) - iVar9 < 0) {
    pSVar15 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76600);
    uVar11 = SalesProgressBar::GetCurrentLevel(pSVar15);
    *(undefined4 *)(this + 0xe8) = uVar11;
  }
  iVar9 = *(int *)(this + 0xec);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76720);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  pBVar1 = (ButtonListener *)(this + 0xd8);
  FUN_05478178(asStack_78,&DAT_056f11a8,asStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar16 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar16,0,pBVar1,(wstring *)asStack_78,(Color *)&local_40);
  FUN_05476c50(asStack_78);
  nop();
  iVar2 = *(int *)(this + 0xe4);
  iVar5 = *(int *)(this + 0xec);
  pcVar19 = *(code **)(*(long *)pPVar16 + 0x198);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76600);
  iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  iVar6 = *(int *)(this + 0xe8);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76600);
  iVar10 = SalesProgressBar::GetCurrentLevel(pSVar15);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76600);
  uVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76600);
  uVar12 = SalesProgressBar::GetCurrentLevel(pSVar15);
  (*pcVar19)(pPVar16,((iVar2 + iVar5) - iVar8) - (iVar9 - iVar7 >> 1),iVar6 - iVar10,uVar11,uVar12);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b76600,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b76628,1);
  PVZ2UIButton::SetDialogStates(pPVar16,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(*(long *)this + 0x60))(this,pPVar16);
  FUN_05478178(asStack_78,&DAT_056f11a8,asStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar16 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar16,1,pBVar1,(wstring *)asStack_78,(Color *)&local_40);
  FUN_05476c50(asStack_78);
  nop();
  pcVar19 = *(code **)(*(long *)pPVar16 + 0x198);
  if (*(int *)(this + 0xe0) == 3) {
    iVar9 = FUN_049d9738(0xf);
    iVar9 = iVar9 + *(int *)(this + 0xe4);
  }
  else {
    iVar2 = *(int *)(this + 0xec);
    iVar9 = *(int *)(this + 0xe4);
    pLVar14 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76748);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
    iVar9 = iVar9 + (iVar2 - iVar5 >> 1);
  }
  iVar2 = *(int *)(this + 0xf0);
  iVar5 = *(int *)(this + 0xe8);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76748);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar15);
  iVar7 = FUN_049d9738(0xf);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76748);
  iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76748);
  uVar11 = SalesProgressBar::GetCurrentLevel(pSVar15);
  (*pcVar19)(pPVar16,iVar9,((iVar5 + iVar2) - iVar6) + iVar7,iVar8,uVar11);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b76748,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b76748,2);
  PVZ2UIButton::SetDialogStates(pPVar16,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)&local_40);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b76658,1);
  PVZ2UIButton::AddImage(pPVar16,(string *)&local_40,0xffffffff);
  uVar17 = GetGemsCostByType(*(undefined4 *)(this + 0xe0));
  std::string::string((string *)&local_40,"[BUY_MOWER_PRICE_TEXT]");
  StringHelper::ReplaceNumberString
            ((StringHelper *)&local_40,(string *)L"{NUMBER}",(wchar_t *)(uVar17 & 0xffffffff),iVar8)
  ;
  std::string::~string((string *)&local_40);
  nop();
  PVZ2UIButton::SetLabelText(pPVar16,awStack_a0);
  if (*(int *)(this + 0xe0) == 0) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b765a8;
  }
  else {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b764a0;
  }
  CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  lVar18 = *(long *)this;
  pPVar16[0x59] = (PVZ2UIButton)0x0;
  (**(code **)(lVar18 + 0x60))(this,pPVar16);
  FUN_05478178(asStack_78,&DAT_056f11a8,asStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar16 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar16,2,pBVar1,(wstring *)asStack_78,(Color *)&local_40);
  FUN_05476c50(asStack_78);
  nop();
  iVar9 = *(int *)(this + 0xe4);
  iVar2 = *(int *)(this + 0xec);
  pcVar19 = *(code **)(*(long *)pPVar16 + 0x198);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76680);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  iVar5 = *(int *)(this + 0xe8);
  iVar6 = *(int *)(this + 0xf0);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76680);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar15);
  iVar10 = FUN_049d9738(0xf);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76680);
  uVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76680);
  uVar12 = SalesProgressBar::GetCurrentLevel(pSVar15);
  (*pcVar19)(pPVar16,iVar9 + (iVar2 - iVar7 >> 1),((iVar5 + iVar6) - iVar8) + iVar10,uVar11,uVar12);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b76680,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b76680,2);
  PVZ2UIButton::SetDialogStates(pPVar16,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(*(long *)this + 0x60))(this,pPVar16);
  (**(code **)(*(long *)pPVar16 + 0x158))(pPVar16,0);
  if (*(int *)(this + 0xe0) == 3) {
    FUN_05478178(asStack_78,L"[ADVERTISEMENT_WATCH]",asStack_80);
    Sexy::Color::Color((Color *)&local_40,1);
    this_01 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(this_01,3,pBVar1,(wstring *)asStack_78,(Color *)&local_40);
    FUN_05476c50(asStack_78);
    nop();
    iVar9 = *(int *)(this + 0xec);
    iVar2 = *(int *)(this + 0xe4);
    pcVar19 = *(code **)(*(long *)this_01 + 0x198);
    pLVar14 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76428);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
    iVar8 = FUN_049d9738(0xf);
    iVar5 = *(int *)(this + 0xe8);
    iVar6 = *(int *)(this + 0xf0);
    pSVar15 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76428);
    iVar10 = SalesProgressBar::GetCurrentLevel(pSVar15);
    iVar13 = FUN_049d9738(0xf);
    pLVar14 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76428);
    uVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
    pSVar15 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76428);
    uVar12 = SalesProgressBar::GetCurrentLevel(pSVar15);
    (*pcVar19)(this_01,(iVar2 + (iVar9 - iVar7)) - iVar8,((iVar5 + iVar6) - iVar10) + iVar13,uVar11,
               uVar12);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b76428,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b76428,2);
    PVZ2UIButton::SetDialogStates(this_01,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)&local_40);
    (**(code **)(*(long *)this + 0x60))(this,this_01);
  }
  InitByType();
  if (*(int *)(this + 0xe0) == 0) {
    std::string::string(asStack_98,"buy_mower");
    nop();
    std::string::string(asStack_90,"");
    nop();
    GetSkuByType((BuyItemUI *)asStack_88,0);
    *(undefined4 *)(gLawnApp + 0x2a08) = 0;
    puVar3 = gMessageRouter;
    FUN_05475d88(asStack_80,asStack_98);
    FUN_05475d88(asStack_78,asStack_90);
    FUN_05475d88((string *)&local_40,asStack_88);
    MessageRouter::
    Post<std::string_const&,std::string_const&,std::string_const&,std::string,std::string,std::string>
              ((MessageRouter *)puVar3,Message::GameCharge,asStack_80,asStack_78,(string *)&local_40
              );
    std::string::~string((string *)&local_40);
    std::string::~string(asStack_78);
    std::string::~string(asStack_80);
    std::string::~string(asStack_88);
    std::string::~string(asStack_90);
    std::string::~string(asStack_98);
  }
  else if (*(int *)(this + 0xe0) == 2) {
    (**(code **)(*(long *)pPVar16 + 0x158))(pPVar16,1);
    *(undefined4 *)(gLawnApp + 0x2a08) = 0;
  }
  else {
    std::string::string(asStack_98,"buy_sun");
    nop();
    std::string::string(asStack_90,"");
    nop();
    GetSkuByType((BuyItemUI *)asStack_88,*(undefined4 *)(this + 0xe0));
    *(undefined4 *)(gLawnApp + 0x2a08) = 0;
    puVar3 = gMessageRouter;
    FUN_05475d88(asStack_80,asStack_98);
    FUN_05475d88(asStack_78,asStack_90);
    FUN_05475d88((string *)&local_40,asStack_88);
    MessageRouter::
    Post<std::string_const&,std::string_const&,std::string_const&,std::string,std::string,std::string>
              ((MessageRouter *)puVar3,Message::GameCharge,asStack_80,asStack_78,(string *)&local_40
              );
    std::string::~string((string *)&local_40);
    std::string::~string(asStack_78);
    std::string::~string(asStack_80);
    std::string::~string(asStack_88);
    std::string::~string(asStack_90);
    std::string::~string(asStack_98);
  }
  FUN_05476c50(awStack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BuyItemUI::BuyItemUI(BuyItemUI::BuyType) */

void __thiscall BuyItemUI::BuyItemUI(BuyItemUI *this,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined4 *)(this + 0xe0) = param_2;
  *(undefined ***)this = &PTR_GetClass_069294b0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069297d8;
  Sexy::Insets::Insets((Insets *)(this + 0xe4));
  FUN_05476574(this + 0xf8);
  FUN_05476574(this + 0x100);
  FUN_05476574(this + 0x110);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x118));
  this[0x120] = (BuyItemUI)0x0;
  InitUI(this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPaySuccess);
  Sexy::Delegate0::Delegate0<BuyItemUI,void(BuyItemUI::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::BuyItemPaySuccess,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPurchaseDialogClosed);
  Sexy::Delegate0::Delegate0<BuyItemUI,void(BuyItemUI::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PurchaseDialogClosed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyADWatchFinish);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<BuyItemUI,void(BuyItemUI::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyADWatchFinish,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BuyItemUI::ButtonDepress(int) */

void __thiscall BuyItemUI::ButtonDepress(BuyItemUI *this,int param_1)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  PVZ2UIDialog *pPVar4;
  ADManager *pAVar5;
  BuyItemUI *pBVar6;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_1) {
  case 0:
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::BuyItemCancel,*(int *)(this + 0xe0));
    LawnApp::KillBuyItemUI(gLawnApp);
    break;
  case 1:
    this[0x120] = (BuyItemUI)0x0;
    iVar2 = GetGemsCostByType(*(undefined4 *)(this + 0xe0));
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    if (this_02 != (PlayerInfo *)0x0) {
      iVar3 = PlayerInfo::GetNumGems(this_02,false);
      if (iVar3 < iVar2) {
        LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
      }
      else {
        cVar1 = LawnApp::IsNetworkModuleOK();
        this_00 = gLawnApp;
        if (cVar1 == '\0') {
          FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
          FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
          pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
          FUN_05476c50(awStack_50);
          nop();
          FUN_05476c50(awStack_58);
          nop();
          FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
          Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
          PVZ2UIDialog::AddButton(pPVar4,awStack_58,aDStack_38,0);
          FUN_05476c50(awStack_58);
          nop();
        }
        else {
          pBVar6 = ::operator_new(0x28);
          ICloudRequestCallbackFunction<BuyItemUI,bool>::ICloudRequestCallbackFunction
                    (pBVar6,(_func_void_bool_ptr *)this);
          PlayerInfo::SubtractGems
                    (this_02,1,0x8de,(ICloudRequestCallbackFunctionBase *)pBVar6,1,false);
        }
      }
    }
    break;
  case 2:
    this[0x120] = (BuyItemUI)0x0;
    pAVar5 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
    ADManager::ShowAD(pAVar5,0xb);
    break;
  case 3:
    this[0x120] = (BuyItemUI)0x0;
    pAVar5 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
    ADManager::ShowAD(pAVar5,0x16);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to BuyItemUI::ButtonDepress(int) */

void __thiscall BuyItemUI::ButtonDepress(BuyItemUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BuyItemUI::OnPurchaseDialogClosed() */

void __thiscall BuyItemUI::OnPurchaseDialogClosed(BuyItemUI *this)

{
  undefined *puVar1;
  uint uVar2;
  PlantfoodUI *this_00;
  Board *this_01;
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x120] == (BuyItemUI)0x0) {
    LawnApp::KillBuyItemUI(gLawnApp);
  }
  else {
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::BuyItemOK,*(int *)(this + 0xe0));
    if (*(int *)(this + 0xe0) == 1) {
      std::string::string(asStack_38,"buy_sun");
      nop();
      std::string::string(asStack_30,"");
      nop();
      GetSkuByType((BuyItemUI *)asStack_28,*(undefined4 *)(this + 0xe0));
      puVar1 = gMessageRouter;
      *(undefined4 *)(gLawnApp + 0x2a08) = 1;
      FUN_05475d88(asStack_20,asStack_38);
      FUN_05475d88(asStack_18,asStack_30);
      FUN_05475d88(asStack_10,asStack_28);
      MessageRouter::
      Post<std::string_const&,std::string_const&,std::string_const&,std::string,std::string,std::string>
                ((MessageRouter *)puVar1,Message::GameCharge,asStack_20,asStack_18,asStack_10);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      std::string::~string(asStack_20);
      Board::AddSunMoney(*(Board **)(gLawnApp + 0x9f0),1000);
      std::string::string(asStack_10,"UIPlantfood");
      UIWidget::GetWidgetBySheetName(asStack_10);
      nop();
      std::string::~string(asStack_10);
      nop();
      if (this_00 == (PlantfoodUI *)0x0) {
        this_01 = *(Board **)(gLawnApp + 0x9f0);
        uVar2 = Board::GetPlantfoodCount(this_01);
        Board::SetPlantfoodCount(this_01,(uVar2 & 0xff) + 3);
      }
      else {
        PlantfoodUI::AddPlantFood(this_00,3);
      }
      std::string::~string(asStack_28);
      std::string::~string(asStack_30);
      std::string::~string(asStack_38);
    }
    LawnApp::KillBuyItemUI(gLawnApp);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BuyItemUI::OnBuySuccess_IOS(bool const&) */

void __thiscall BuyItemUI::OnBuySuccess_IOS(BuyItemUI *this,bool *param_1)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (*param_1 == false) {
    FUN_05478178(awStack_58,L"[REVIVE_TIP]",auStack_68);
    FUN_05478178(awStack_50,L"[SALES_REWARD_HAS_MAX_LEVEL_TITLE]",auStack_60);
    pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
  }
  else {
    this[0x120] = (BuyItemUI)0x1;
    OnPurchaseDialogClosed(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BuyItemUI::onNotifyADWatchFinish(int) */

void __thiscall BuyItemUI::onNotifyADWatchFinish(BuyItemUI *this,int param_1)

{
  LawnApp *this_00;
  char cVar1;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  BuyItemUI *pBVar2;
  PVZ2UIDialog *pPVar3;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring local_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xb) {
    local_50[0] = (wstring)0x1;
    OnBuySuccess_IOS(this,(bool *)local_50);
  }
  else if (param_1 == 0x16) {
    this[0x120] = (BuyItemUI)0x0;
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    if (this_02 != (PlayerInfo *)0x0) {
      cVar1 = LawnApp::IsNetworkModuleOK();
      this_00 = gLawnApp;
      if (cVar1 == '\0') {
        FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
        FUN_05478178(local_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
        pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,local_50);
        FUN_05476c50(local_50);
        nop();
        FUN_05476c50(awStack_58);
        nop();
        FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,local_50);
        PVZ2UIDialog::AddButton(pPVar3,awStack_58,aDStack_38,0);
        FUN_05476c50(awStack_58);
        nop();
      }
      else {
        pBVar2 = ::operator_new(0x28);
        ICloudRequestCallbackFunction<BuyItemUI,bool>::ICloudRequestCallbackFunction
                  (pBVar2,(_func_void_bool_ptr *)this);
        PlayerInfo::SubtractGems
                  (this_02,1,0x8de,(ICloudRequestCallbackFunctionBase *)pBVar2,0x12,false);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BuyItemUI::Draw(Sexy::Graphics*) */

void __thiscall BuyItemUI::Draw(BuyItemUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Image *pIVar9;
  LotteryResultProgressBar *pLVar10;
  SalesProgressBar *pSVar11;
  undefined8 uVar12;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)(this + 0xe4);
  iVar6 = *(int *)(this + 0xe8);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b766d8);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b766d8);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b766d8);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar11);
  Sexy::Graphics::DrawImage(param_1,pIVar9,iVar1,iVar6,iVar2,iVar3);
  iVar2 = *(int *)(this + 0xec);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76720);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  iVar3 = *(int *)(this + 0xf0);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76720);
  iVar1 = iVar1 + (iVar2 - iVar4 >> 1);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar11);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76720);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76720);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76720);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar11);
  Sexy::Graphics::DrawImage(param_1,pIVar9,iVar1,iVar6 + (iVar3 - iVar2 >> 1),iVar4,iVar5);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76720);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x108));
  iVar1 = iVar1 + (iVar6 - iVar2 >> 1);
  iVar2 = FUN_049d9738(0x1e);
  iVar6 = *(int *)(this + 0xe8);
  if (*(int *)(this + 0xe0) != 2) {
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x108));
    pSVar11 = *(SalesProgressBar **)(this + 0x108);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar11);
    Sexy::Graphics::DrawImage(param_1,(Image *)pSVar11,iVar1,iVar2 + iVar6,iVar3,iVar4);
  }
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x108));
  iVar4 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x108));
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2 + iVar6,iVar3,iVar4);
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x110,aIStack_28,uVar12,aIStack_18,5,1);
  iVar6 = FUN_049d9738(0x50);
  iVar1 = *(int *)(this + 0xe8);
  iVar2 = FUN_049d9738(0x3c);
  Sexy::Insets::Insets(aIStack_28,*(int *)(this + 0xe4),iVar6 + iVar1,*(int *)(this + 0xec),iVar2);
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_18,0x4a,0x3c,0,0xff);
  WriteWordInRect(param_1,this + 0xf8,aIStack_28,uVar12,aIStack_18,5,1);
  if (*(int *)(this + 0xe0) == 3) {
    iVar1 = *(int *)(this + 0xec);
    iVar6 = *(int *)(this + 0xe4);
    iVar4 = FUN_049d9738(0xa0);
    iVar5 = FUN_049d9738(0x11);
    iVar2 = *(int *)(this + 0xe8);
    iVar3 = *(int *)(this + 0xf0);
    iVar7 = FUN_049d9738(0x3c);
    iVar8 = FUN_049d9738(0xf);
    Sexy::Insets::Insets
              (aIStack_28,((iVar6 + iVar1) - iVar4) - iVar5,((iVar2 + iVar3) - iVar7) - iVar8,iVar4,
               iVar7);
    uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Insets::Insets(aIStack_18,0x4a,0x3c,0,0xff);
    WriteWordInRect(param_1,this + 0x100,aIStack_28,uVar12,aIStack_18,5,1);
  }
  DrawByType((Graphics *)this);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

