// Class: PlantSpecialOfferUI


/* PlantSpecialOfferUI::ButtonPress(int) */

int PlantSpecialOfferUI::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to PlantSpecialOfferUI::ButtonPress(int) */

void __thiscall PlantSpecialOfferUI::ButtonPress(PlantSpecialOfferUI *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpecialOfferUI::~PlantSpecialOfferUI() */

void __thiscall PlantSpecialOfferUI::~PlantSpecialOfferUI(PlantSpecialOfferUI *this)

{
  LawnApp *pLVar1;
  WorldMapActivityBtnTurnChangeManager *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_06984300;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06983fd0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  *(undefined8 *)(this + 0x100) = 0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Activity");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_SkillDisplay");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_AvatarView_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"AudioCommon");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantSpecialOffer");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UPDATE_UI_HeadShot_BigAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UPDATE_UI_PlantSpecialOffer");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_00 = (WorldMapActivityBtnTurnChangeManager *)
            Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstancePtr();
  WorldMapActivityBtnTurnChangeManager::setIsPause(this_00,false);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x310);
  FUN_05476c50(this + 0x2f8);
  FUN_05476c50(this + 0x2e0);
  FUN_05476c50(this + 0x270);
  FUN_05476c50(this + 0x268);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 400));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSpecialOfferUI::~PlantSpecialOfferUI() */

void __thiscall PlantSpecialOfferUI::~PlantSpecialOfferUI(PlantSpecialOfferUI *this)

{
  ~PlantSpecialOfferUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpecialOfferUI::InitView() */

void __thiscall PlantSpecialOfferUI::InitView(PlantSpecialOfferUI *this)

{
  ButtonListener *pBVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  WorldMapActivityBtnTurnChangeManager *this_00;
  PVZ2UIButton *pPVar11;
  LotteryResultProgressBar *pLVar12;
  SalesProgressBar *pSVar13;
  undefined8 uVar14;
  CustomDisplayBoard *this_01;
  TGALogMgr *pTVar15;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *psVar16;
  int iVar17;
  code *pcVar18;
  long lVar19;
  int iVar20;
  float fVar21;
  Sexy aSStack_f8 [8];
  string asStack_f0 [8];
  string asStack_e8 [8];
  string asStack_e0 [8];
  RtMixedPtrBase aRStack_d8 [8];
  string asStack_d0 [8];
  string asStack_c8 [8];
  string asStack_c0 [8];
  string asStack_b8 [8];
  string asStack_b0 [8];
  string asStack_a8 [8];
  string asStack_a0 [8];
  int local_98;
  int iStack_94;
  int local_90;
  undefined4 uStack_8c;
  Insets aIStack_88 [16];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  pBVar1 = (ButtonListener *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(gLawnApp + 0x71c),*(undefined4 *)(gLawnApp + 0x720),
             *(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  this_00 = (WorldMapActivityBtnTurnChangeManager *)
            Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstancePtr();
  WorldMapActivityBtnTurnChangeManager::setIsPause(this_00,true);
  iVar4 = FUN_04c2a40c(0x90);
  iVar5 = FUN_04c2a40c(0x28);
  Sexy::Insets::Insets
            ((Insets *)&local_98,iVar4,iVar5,*(int *)(this + 0x50) + iVar4 * -2,
             *(int *)(this + 0x54) + iVar5 * -2);
  *(ulong *)(this + 0xe0) = CONCAT44(iStack_94,local_98);
  *(ulong *)(this + 0xe8) = CONCAT44(uStack_8c,local_90);
  FUN_05478178(awStack_78,&DAT_056f11a8,aIStack_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar11,100,pBVar1,awStack_78,(Color *)&local_40);
  FUN_05476c50(awStack_78);
  nop();
  pcVar18 = *(code **)(*(long *)pPVar11 + 0x198);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f540);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  iVar5 = FUN_04c2a40c(10);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f540);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
  iVar7 = FUN_04c2a40c(8);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f540);
  uVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f540);
  uVar9 = SalesProgressBar::GetCurrentLevel(pSVar13);
  (*pcVar18)(pPVar11,((local_98 + local_90) - iVar4 / 2) - iVar5,(iStack_94 - iVar6 / 2) + iVar7,
             uVar8,uVar9);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b8f540,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8f448,1);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(*(long *)this + 0x60))(this,pPVar11);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f6e0);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  iVar17 = (int)((float)iVar4 * 1.2);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f6e0);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar13);
  iVar4 = (*(int *)(this + 0x50) - iVar17) / 2;
  iVar20 = (int)((float)iVar5 * 1.2);
  iVar5 = (*(int *)(this + 0x54) - iVar20) / 2;
  Sexy::Insets::Insets((Insets *)&local_40,iVar4,iVar5,iVar17,iVar20);
  *(undefined8 *)(this + 0xf0) = local_40;
  *(undefined8 *)(this + 0xf8) = uStack_38;
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f540);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f540);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar13);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f540);
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  Sexy::Insets::Insets(aIStack_88,iVar4,iVar5 - iVar6,iVar10 + iVar17,iVar7 + iVar20);
  iVar4 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar4);
  FUN_031f5e7c((Insets *)&local_40,"IMAGE_UI_PLANTSPECIALOFFER_BANNER_",aSStack_f8);
  Sexy::Upper((Sexy *)&local_40,extraout_x1);
  std::string::~string((string *)&local_40);
  pLVar12 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_f0,false);
  *(LotteryResultProgressBar **)(this + 0x210) = pLVar12;
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  iVar4 = *(int *)(this + 0xe8);
  iVar5 = *(int *)(this + 0xe0);
  iVar10 = FUN_04c2a40c(0x28);
  iVar6 = *(int *)(this + 0xe4);
  iVar17 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x210));
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar5 + (iVar4 - (int)(float)iVar7) / 2,iVar10 + iVar6,
             (int)(float)iVar7,(int)(float)iVar17);
  *(undefined8 *)(this + 0x218) = local_40;
  *(undefined8 *)(this + 0x220) = uStack_38;
  std::string::string(asStack_e8,"IMAGE_UI_PLANTSPECIALOFFER_MAIN_BG");
  nop();
  pLVar12 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_e8,false);
  *(LotteryResultProgressBar **)(this + 0x1f8) = pLVar12;
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  iVar4 = *(int *)(this + 0x21c);
  iVar5 = *(int *)(this + 0xe8);
  iVar6 = *(int *)(this + 0xe0);
  iVar7 = *(int *)(this + 0x224);
  iVar17 = FUN_04c2a40c(5);
  iVar20 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x1f8));
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar6 + (iVar5 - (int)(float)iVar10) / 2,iVar4 + iVar7 + iVar17,
             (int)(float)iVar10,(int)(float)iVar20);
  *(undefined8 *)(this + 0x200) = local_40;
  *(undefined8 *)(this + 0x208) = uStack_38;
  std::string::string(asStack_e0,"IMAGE_UI_PLANTSPECIALOFFER_PLANT_BG");
  nop();
  pLVar12 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_e0,false);
  *(LotteryResultProgressBar **)(this + 0x108) = pLVar12;
  iVar4 = *(int *)(this + 0x208);
  iVar5 = *(int *)(this + 0x200);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  iVar7 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x108));
  iVar10 = FUN_04c2a40c(0x3c);
  Sexy::Insets::Insets
            ((Insets *)&local_40,
             iVar4 / 2 + iVar5 + ((iVar4 / 2 + (int)(float)iVar6 * -2) - iVar10) / 2,
             *(int *)(this + 0x204) + (*(int *)(this + 0x20c) - (int)(float)iVar7) / 2,
             (int)(float)iVar6,(int)(float)iVar7);
  *(undefined8 *)(this + 0x118) = local_40;
  *(undefined8 *)(this + 0x120) = uStack_38;
  Sexy::StringToUpper(aSStack_f8,(string *)(this + 0x118));
  std::operator+((string *)&PlantHeadshot::PlantBigPrefix,(string *)awStack_78);
  uVar14 = StringHelper::ToImage((string *)&local_40,true);
  *(undefined8 *)(this + 0x110) = uVar14;
  std::string::~string((string *)&local_40);
  std::string::~string((string *)awStack_78);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x110));
  iVar5 = (int)((float)iVar4 * 0.65);
  iVar4 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x110));
  iVar4 = (int)((float)iVar4 * 0.65);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x118) + (*(int *)(this + 0x120) - iVar5) / 2,
             *(int *)(this + 0x11c) + (*(int *)(this + 0x124) - iVar4) / 2,iVar5,iVar4);
  psVar16 = (string *)&local_40;
  *(undefined8 *)(this + 0x128) = local_40;
  *(undefined8 *)(this + 0x130) = uStack_38;
  std::string::string(asStack_a0,"iOS PvZ2 Plant Store");
  std::string::string((string *)awStack_78,"Plant Pieces");
  std::string::string((string *)&local_40,"plant");
  Magento::FindStoreProduct
            ((Magento *)asStack_a0,(string *)awStack_78,(string *)&local_40,(string *)aSStack_f8,
             psVar16);
  std::string::~string((string *)&local_40);
  nop();
  std::string::~string((string *)awStack_78);
  nop();
  std::string::~string(asStack_a0);
  nop();
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_d8);
  if (cVar2 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8);
    MagentoProductProps::GetLocalizedShortDescription();
    Sexy::UTF8StringToWString((Sexy *)asStack_a0,extraout_x1_02);
    TodStringTranslate(awStack_78);
    FUN_054766c8((wstring *)(this + 0x268),(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    FUN_05476c50(awStack_78);
    std::string::~string(asStack_a0);
    TodStringTranslate(L"[PLANT_SPECIAL_OFFER_AVATAR_NAME]");
    std::operator+((wstring *)(this + 0x268),awStack_78);
    FUN_054766c8(this + 0x270,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    FUN_05476c50(awStack_78);
  }
  FUN_031f5e7c((Insets *)&local_40,"IMAGE_UI_PLANTSPECIALOFFER_PLANT_TITLE_IMG_",aSStack_f8);
  Sexy::Upper((Sexy *)&local_40,extraout_x1_00);
  std::string::~string((string *)&local_40);
  pLVar12 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_d0,false);
  *(LotteryResultProgressBar **)(this + 0x278) = pLVar12;
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  iVar7 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x278));
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x118) - (iVar6 - *(int *)(this + 0x120)) / 2,
             *(int *)(this + 0x204) +
             ((*(int *)(this + 0x11c) - *(int *)(this + 0x204)) - iVar7) / 2,iVar6,iVar7);
  *(undefined8 *)(this + 0x280) = local_40;
  *(undefined8 *)(this + 0x288) = uStack_38;
  std::string::string(asStack_c8,"IMAGE_UI_PLANTSPECIALOFFER_AVATAR_BG");
  nop();
  uVar14 = StringHelper::ToImage(asStack_c8,false);
  *(undefined8 *)(this + 0x138) = uVar14;
  iVar6 = *(int *)(this + 0x120);
  iVar7 = *(int *)(this + 0x118);
  iVar10 = FUN_04c2a40c(0x3c);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar6 + iVar7 + iVar10,*(int *)(this + 0x11c),iVar6,
             *(int *)(this + 0x124));
  *(undefined8 *)(this + 0x148) = local_40;
  *(undefined8 *)(this + 0x150) = uStack_38;
  iVar6 = NewAvatar::GetAvatarIndexForAvatarID(*(int *)(this + 0x17c));
  if (iVar6 < 1) {
    uVar14 = LawnApp::GetUpdateActivityImage(gLawnApp,0,aSStack_f8);
    *(undefined8 *)(this + 0x140) = uVar14;
  }
  else {
    uVar14 = NewAvatar::GetAvatarTinyImage(*(int *)(this + 0x17c));
    *(undefined8 *)(this + 0x140) = uVar14;
  }
  bVar3 = std::operator==((string *)aSStack_f8,"dragoncane");
  if ((bVar3) || (bVar3 = std::operator==((string *)aSStack_f8,"witchhazel"), bVar3)) {
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x140));
    iVar10 = (int)(((float)iVar5 + (float)iVar6 * 0.65) * 0.5);
    iVar17 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x140));
    iVar6 = *(int *)(this + 0x154);
    iVar7 = *(int *)(this + 0x14c);
    iVar5 = *(int *)(this + 0x148) + (*(int *)(this + 0x150) - iVar10) / 2;
    fVar21 = ((float)iVar4 + (float)iVar17 * 0.65) * 0.5;
  }
  else {
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x140));
    iVar10 = (int)((float)iVar4 * 0.65);
    iVar4 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x140));
    iVar6 = *(int *)(this + 0x154);
    fVar21 = (float)iVar4 * 0.65;
    iVar7 = *(int *)(this + 0x14c);
    iVar5 = *(int *)(this + 0x148) + (*(int *)(this + 0x150) - iVar10) / 2;
  }
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar5,iVar7 + (iVar6 - (int)fVar21) / 2,iVar10,(int)fVar21);
  *(undefined8 *)(this + 0x158) = local_40;
  *(undefined8 *)(this + 0x160) = uStack_38;
  FUN_031f5e7c((Insets *)&local_40,"IMAGE_UI_PLANTSPECIALOFFER_AVATAR_TITLE_IMG_",aSStack_f8);
  Sexy::Upper((Sexy *)&local_40,extraout_x1_01);
  std::string::~string((string *)&local_40);
  uVar14 = StringHelper::ToImage(asStack_c0,false);
  *(undefined8 *)(this + 0x290) = uVar14;
  Sexy::Insets::Insets
            ((Insets *)&local_40,
             *(int *)(this + 0x148) - (*(int *)(this + 0x288) - *(int *)(this + 0x150)) / 2,
             *(int *)(this + 0x284),*(int *)(this + 0x288),*(int *)(this + 0x28c));
  *(undefined8 *)(this + 0x298) = local_40;
  *(undefined8 *)(this + 0x2a0) = uStack_38;
  std::string::string(asStack_b8,"IMAGE_UI_PLANTSPECIALOFFER_ADD");
  nop();
  pLVar12 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_b8,false);
  *(LotteryResultProgressBar **)(this + 0x240) = pLVar12;
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  iVar7 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x240));
  iVar4 = *(int *)(this + 0x120);
  iVar5 = *(int *)(this + 0x118);
  iVar10 = FUN_04c2a40c(0x3c);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar5 + iVar4 + (iVar10 - (int)(float)iVar6) / 2,
             *(int *)(this + 0x11c) + (*(int *)(this + 0x124) - (int)(float)iVar7) / 2,
             (int)(float)iVar6,(int)(float)iVar7);
  *(undefined8 *)(this + 0x248) = local_40;
  *(undefined8 *)(this + 0x250) = uStack_38;
  std::string::string(asStack_b0,"IMAGE_UI_PLANTSPECIALOFFER_TITLE");
  nop();
  pLVar12 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_b0,false);
  iVar4 = *(int *)(this + 0xe8);
  iVar5 = *(int *)(this + 0xe0);
  *(LotteryResultProgressBar **)(this + 0x228) = pLVar12;
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  iVar6 = *(int *)(this + 0xe4);
  iVar10 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x228));
  iVar17 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x228));
  iVar20 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x228));
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar5 + (iVar4 - iVar7) / 2,iVar6 - iVar10 / 2,iVar17,iVar20);
  *(undefined8 *)(this + 0x230) = local_40;
  *(undefined8 *)(this + 0x238) = uStack_38;
  iVar4 = FUN_04c2a40c(10);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x230),iVar4 + *(int *)(this + 0x234),
             *(int *)(this + 0x238),0);
  *(undefined8 *)(this + 600) = local_40;
  *(undefined8 *)(this + 0x260) = uStack_38;
  std::string::string(asStack_a8,"IMAGE_UI_DIALOG_ASSET_GRAY_BG_OUTER");
  nop();
  uVar14 = StringHelper::ToImage(asStack_a8,false);
  *(undefined8 *)(this + 0x2b0) = uVar14;
  iVar7 = FUN_04c2a40c(0x65);
  iVar4 = *(int *)(this + 0x21c);
  iVar5 = *(int *)(this + 0xe4);
  iVar6 = *(int *)(this + 0x224);
  iVar10 = FUN_04c2a40c(5);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x200),
             *(int *)(this + 0x20c) + *(int *)(this + 0x204) +
             ((((((iVar5 - iVar4) - iVar6) - iVar10) - *(int *)(this + 0x20c)) +
              *(int *)(this + 0xec)) - iVar7) / 2,*(int *)(this + 0x208),iVar7);
  *(undefined8 *)(this + 0x2b8) = local_40;
  *(undefined8 *)(this + 0x2c0) = uStack_38;
  FUN_05478178(awStack_78,&DAT_056f11a8,asStack_a0);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar11,0x65,pBVar1,awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x1e0) = pPVar11;
  FUN_05476c50(awStack_78);
  nop();
  pPVar11 = *(PVZ2UIButton **)(this + 0x1e0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b8f818,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8f760,3);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  iVar6 = FUN_04c2a40c(0x170);
  iVar4 = *(int *)(this + 0x2b8);
  iVar5 = *(int *)(this + 0x2c0);
  iVar7 = FUN_04c2a40c(0x19);
  iVar10 = FUN_04c2a40c(0x46);
  (**(code **)(**(long **)(this + 0x1e0) + 0x198))
            (*(long **)(this + 0x1e0),((iVar4 + iVar5) - iVar6) - iVar7,
             *(int *)(this + 700) + (*(int *)(this + 0x2c4) - iVar10) / 2,iVar6,iVar10);
  iVar4 = FUN_04c2a40c(0x19);
  iVar5 = FUN_04c2a40c(0xd);
  iVar6 = FUN_04c2a40c(0x7d);
  iVar7 = FUN_04c2a40c(0x24);
  pPVar11 = *(PVZ2UIButton **)(this + 0x1e0);
  TodStringTranslate(L"[PLANT_SPECIAL_PURCHASE_BTN_NORMAL_PRICE]");
  Sexy::Insets::Insets((Insets *)&local_40,iVar4,iVar5,iVar6,iVar7);
  uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  PVZ2UIButton::AddText(pPVar11,awStack_78,(Insets *)&local_40,uVar14,0xffffffff);
  FUN_05476c50(awStack_78);
  iVar4 = FUN_04c2a40c(0xa8);
  iVar5 = FUN_04c2a40c(0x14);
  iVar6 = FUN_04c2a40c(0x1d);
  iVar7 = FUN_04c2a40c(0x1b);
  pPVar11 = *(PVZ2UIButton **)(this + 0x1e0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8f708,2);
  Sexy::Insets::Insets((Insets *)awStack_78,iVar4,iVar5,iVar6,iVar7);
  PVZ2UIButton::AddImage(pPVar11,(PVZ2UIImage *)&local_40,(TRect *)awStack_78);
  iVar4 = FUN_04c2a40c(0xdc);
  iVar5 = FUN_04c2a40c(0xd);
  iVar6 = FUN_04c2a40c(0x6d);
  iVar7 = FUN_04c2a40c(0x24);
  pPVar11 = *(PVZ2UIButton **)(this + 0x1e0);
  TodStringTranslate(L"[PLANT_SPECIAL_PURCHASE_BTN_DISCOUNT_PRICE]");
  Sexy::Insets::Insets((Insets *)&local_40,iVar4,iVar5,iVar6,iVar7);
  uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  PVZ2UIButton::AddText(pPVar11,awStack_78,(Insets *)&local_40,uVar14,0);
  FUN_05476c50(awStack_78);
  iVar4 = FUN_04c2a40c(0x28);
  iVar5 = FUN_04c2a40c(0x10);
  iVar6 = FUN_04c2a40c(0x61);
  iVar7 = FUN_04c2a40c(0x1e);
  pPVar11 = *(PVZ2UIButton **)(this + 0x1e0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8f420,2);
  Sexy::Insets::Insets((Insets *)awStack_78,iVar4,iVar5,iVar6,iVar7);
  PVZ2UIButton::AddImage(pPVar11,(PVZ2UIImage *)&local_40,(TRect *)awStack_78);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1e0));
  lVar19 = *(long *)(this + 0x1e0);
  iVar6 = FUN_04c2a40c(0x14c);
  iVar4 = *(int *)(lVar19 + 0x48);
  iVar7 = FUN_04c2a40c(0xfffffff6);
  iVar5 = *(int *)(lVar19 + 0x4c);
  iVar10 = FUN_04c2a40c(0x34);
  iVar17 = FUN_04c2a40c(0x30);
  Sexy::Insets::Insets((Insets *)&local_40,iVar6 + iVar4,iVar7 + iVar5,iVar10,iVar17);
  iVar4 = *(int *)(this + 0x2b8);
  *(undefined8 *)(this + 0x1e8) = local_40;
  *(undefined8 *)(this + 0x1f0) = uStack_38;
  iVar5 = FUN_04c2a40c(0x50);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar4,*(int *)(this + 700) + (*(int *)(this + 0x2c4) - iVar5) / 2,
             *(int *)(*(long *)(this + 0x1e0) + 0x48) - iVar4,iVar5);
  *(undefined8 *)(this + 0x168) = local_40;
  *(undefined8 *)(this + 0x170) = uStack_38;
  FUN_05478178(awStack_78,L"[PLANT_SPECIAL_OFFER_PREVIEW]",asStack_a0);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar11,0x66,pBVar1,awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x2a8) = pPVar11;
  FUN_05476c50(awStack_78);
  nop();
  pPVar11 = *(PVZ2UIButton **)(this + 0x2a8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b8f3f8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8f6b8,3);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  iVar10 = FUN_04c2a40c(0x50);
  uVar8 = FUN_04c2a40c(0x2d);
  iVar4 = *(int *)(this + 0x150);
  iVar5 = *(int *)(this + 0x14c);
  iVar6 = *(int *)(this + 0x148);
  iVar7 = *(int *)(this + 0x154);
  iVar17 = FUN_04c2a40c(6);
  (**(code **)(**(long **)(this + 0x2a8) + 0x198))
            (*(long **)(this + 0x2a8),iVar6 + (iVar4 - iVar10) / 2,iVar5 + iVar7 + iVar17,iVar10,
             uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x2a8));
  std::string::string(asStack_a0,"IMAGE_UI_PLANTSPECIALOFFER_LABEL");
  nop();
  pLVar12 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_a0,false);
  *(LotteryResultProgressBar **)(this + 0x2c8) = pLVar12;
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  iVar5 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x2c8));
  Sexy::Insets::Insets
            ((Insets *)&local_40,
             *(int *)(this + 0x118) - ((int)(float)iVar4 - *(int *)(this + 0x120)) / 2,
             *(int *)(*(long *)(this + 0x2a8) + 0x4c),(int)(float)iVar4,(int)(float)iVar5);
  *(undefined8 *)(this + 0x2d0) = local_40;
  *(undefined8 *)(this + 0x2d8) = uStack_38;
  TodStringTranslate(L"[PLANT_OFFER_LABEL_NAME]");
  FUN_054766c8(this + 0x2e0,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  iVar4 = FUN_04c2a40c(0x24);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x2d0),*(int *)(this + 0x2d4),
             *(int *)(this + 0x2d8),iVar4);
  *(undefined8 *)(this + 0x2e8) = local_40;
  *(undefined8 *)(this + 0x2f0) = uStack_38;
  Sexy::StrFormat(L"%d",(Insets *)&local_40,(ulong)*(uint *)(this + 0x188));
  FUN_054766c8(this + 0x2f8,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  iVar6 = FUN_04c2a40c(0xd8);
  iVar4 = *(int *)(this + 0x200);
  iVar7 = FUN_04c2a40c(0x3a);
  iVar5 = *(int *)(this + 0x204);
  iVar10 = FUN_04c2a40c(0xa0);
  iVar17 = FUN_04c2a40c(0x50);
  Sexy::Insets::Insets((Insets *)&local_40,iVar6 + iVar4,iVar7 + iVar5,iVar10,iVar17);
  *(undefined8 *)(this + 0x300) = local_40;
  *(undefined8 *)(this + 0x308) = uStack_38;
  Sexy::StrFormat(L"%d",(Insets *)&local_40,(ulong)*(uint *)(this + 0x18c));
  FUN_054766c8(this + 0x310,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  iVar4 = FUN_04c2a40c(0x6b);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x300),iVar4 + *(int *)(this + 0x204),
             *(int *)(this + 0x308),*(int *)(this + 0x30c));
  *(undefined8 *)(this + 0x318) = local_40;
  *(undefined8 *)(this + 800) = uStack_38;
  this_01 = ::operator_new(0x100);
  CustomDisplayBoard::CustomDisplayBoard(this_01,(string *)aSStack_f8,(TRect *)(this + 0xf0));
  lVar19 = *(long *)this_01;
  *(CustomDisplayBoard **)(this + 0x100) = this_01;
  (**(code **)(lVar19 + 0x1a0))(this_01,aIStack_88);
  CustomDisplayBoard::InitView(*(CustomDisplayBoard **)(this + 0x100));
  uVar14 = *(undefined8 *)(this + 0x100);
  NewAvatar::GetAvatarIndexForAvatarID(*(int *)(this + 0x17c));
  CustomDisplayBoard::SetAvatarIndex((int)uVar14);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  pcVar18 = *(code **)(**(long **)(this + 0x100) + 0x158);
  (*pcVar18)(*(long **)(this + 0x100),0);
  TGALuckyChestData::TGALuckyChestData((TGALuckyChestData *)awStack_78);
  std::string::append((string *)awStack_78,"1",(size_t)pcVar18);
  pTVar15 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAPlantSpecialOfferData::TGAPlantSpecialOfferData
            ((TGAPlantSpecialOfferData *)&local_40,(TGAPlantSpecialOfferData *)awStack_78);
  TGALogMgr::LogPlantSpecialOffer(pTVar15,(Insets *)&local_40);
  TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)&local_40);
  TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)awStack_78);
  std::string::~string(asStack_a0);
  std::string::~string(asStack_a8);
  std::string::~string(asStack_b0);
  std::string::~string(asStack_b8);
  std::string::~string(asStack_c0);
  std::string::~string(asStack_c8);
  std::string::~string(asStack_d0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8);
  std::string::~string(asStack_e0);
  std::string::~string(asStack_e8);
  std::string::~string(asStack_f0);
  std::string::~string((string *)aSStack_f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpecialOfferUI::SyncActivityData(int, int, int, int, int) */

void __thiscall
PlantSpecialOfferUI::SyncActivityData
          (PlantSpecialOfferUI *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  ActivityConfig *this_00;
  int local_20;
  int iStack_1c;
  undefined8 local_18;
  int local_10;
  int iStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SpecialOfferInfo::SpecialOfferInfo((SpecialOfferInfo *)&local_20);
  this_00 = (ActivityConfig *)LawnApp::GetActivityConfig();
  if (this_00 != (ActivityConfig *)0x0) {
    local_18 = ActivityConfig::DateMKTime(this_00,param_3);
  }
  *(ulong *)(this + 0x188) = CONCAT44(param_5,param_4);
  *(ulong *)(this + 0x178) = CONCAT44(param_2,param_1);
  *(undefined8 *)(this + 0x180) = local_18;
  local_20 = param_1;
  iStack_1c = param_2;
  local_10 = param_4;
  iStack_c = param_5;
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSpecialOfferUI::DrawOverlay(Sexy::Graphics*) */

void __thiscall PlantSpecialOfferUI::DrawOverlay(PlantSpecialOfferUI *this,Graphics *param_1)

{
  Image *pIVar1;
  
  pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f7f0);
  Sexy::Graphics::DrawImage
            (param_1,pIVar1,*(int *)(this + 0x1e8),*(int *)(this + 0x1ec),*(int *)(this + 0x1f0),
             *(int *)(this + 500));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpecialOfferUI::PlantSpecialOfferUI() */

void __thiscall PlantSpecialOfferUI::PlantSpecialOfferUI(PlantSpecialOfferUI *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06983fd0;
  *(undefined **)(this + 0xd8) = &DAT_06984300;
  Sexy::Insets::Insets((Insets *)(this + 0xe0));
  Sexy::Insets::Insets((Insets *)(this + 0xf0));
  Sexy::Insets::Insets((Insets *)(this + 0x118));
  Sexy::Insets::Insets((Insets *)(this + 0x128));
  Sexy::Insets::Insets((Insets *)(this + 0x148));
  Sexy::Insets::Insets((Insets *)(this + 0x158));
  Sexy::Insets::Insets((Insets *)(this + 0x168));
  SpecialOfferInfo::SpecialOfferInfo((SpecialOfferInfo *)(this + 0x178));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 400));
  Sexy::Insets::Insets((Insets *)(this + 0x198));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  Sexy::Insets::Insets((Insets *)(this + 0x1b0));
  Sexy::Insets::Insets((Insets *)(this + 0x1c0));
  Sexy::Insets::Insets((Insets *)(this + 0x1d0));
  Sexy::Insets::Insets((Insets *)(this + 0x1e8));
  Sexy::Insets::Insets((Insets *)(this + 0x200));
  Sexy::Insets::Insets((Insets *)(this + 0x218));
  Sexy::Insets::Insets((Insets *)(this + 0x230));
  Sexy::Insets::Insets((Insets *)(this + 0x248));
  Sexy::Insets::Insets((Insets *)(this + 600));
  FUN_05476574(this + 0x268);
  FUN_05476574(this + 0x270);
  Sexy::Insets::Insets((Insets *)(this + 0x280));
  Sexy::Insets::Insets((Insets *)(this + 0x298));
  Sexy::Insets::Insets((Insets *)(this + 0x2b8));
  Sexy::Insets::Insets((Insets *)(this + 0x2d0));
  FUN_05476574(this + 0x2e0);
  Sexy::Insets::Insets((Insets *)(this + 0x2e8));
  FUN_05476574(this + 0x2f8);
  Sexy::Insets::Insets((Insets *)(this + 0x300));
  FUN_05476574(this + 0x310);
  Sexy::Insets::Insets((Insets *)(this + 0x318));
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 400),(RtWeakPtr *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1a8),(RtWeakPtr *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  this[0x328] = (PlantSpecialOfferUI)0x0;
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Store");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Activity");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_LevelUp");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_SkillDisplay");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"Effects_LevelUp");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_AvatarView_Dev2");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"LevelCommon");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"LevelCommon2");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"AudioCommon");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_PlantSpecialOffer");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_HeadShot_BigAvatar");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UPDATE_UI_HeadShot_BigAvatar");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UPDATE_UI_PlantSpecialOffer");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_NewAvatar");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_50 = local_28;
  local_60 = local_38;
  uStack_58 = uStack_30;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<PlantSpecialOfferUI,void(PlantSpecialOfferUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_60);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyBundlePurchased);
  local_80 = local_20;
  uStack_78 = uStack_18;
  local_70 = local_10;
  MessageRouter::
  Subscribe<int,std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>const&,Sexy::CBMemberTranslatorX<PlantSpecialOfferUI,void(PlantSpecialOfferUI::*)(int,std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyBundlePurchased,&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpecialOfferUI::requestNetwork() */

void PlantSpecialOfferUI::requestNetwork(void)

{
  char cVar1;
  NetworkMgr *this;
  INetworkMsgProcess *this_00;
  undefined1 auStack_28 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::CheckNetWork(gLawnApp);
  if (cVar1 != '\0') {
    this = (NetworkMgr *)NetworkMgr::Instance();
    this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
              (avStack_20,&DAT_05755660,1,auStack_28);
    INetworkMsgProcess::RequestActivityList(this_00,(vector *)avStack_20,0,true);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpecialOfferUI::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
PlantSpecialOfferUI::onNotifyRefreshActivityList
          (PlantSpecialOfferUI *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_1c = 0x29c0;
  local_8 = ___stack_chk_guard;
  local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if ((bVar1) && (this[0x328] != (PlantSpecialOfferUI)0x0)) {
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpecialOfferUI::BuyOffer(std::string const&) */

void __thiscall PlantSpecialOfferUI::BuyOffer(PlantSpecialOfferUI *this,string *param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PurchaseBroker *this_01;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  undefined4 local_38;
  undefined4 local_34;
  PurchasedBundleInfo aPStack_30 [16];
  vector<bundleItemInfo,std::allocator<bundleItemInfo>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),0);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PurchaseBroker *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(this_00);
  PurchaseBroker::RequestPayment(this_01,param_1,0);
  PurchasedBundleInfo::PurchasedBundleInfo(aPStack_30);
  thunk_FUN_05475e00(aPStack_30,param_1);
  local_34 = 1;
  local_38 = *(undefined4 *)(this + 0x178);
  std::vector<bundleItemInfo,std::allocator<bundleItemInfo>>::push_back
            (avStack_20,(bundleItemInfo *)&local_38);
  local_34 = 1;
  local_38 = *(undefined4 *)(this + 0x17c);
  std::vector<bundleItemInfo,std::allocator<bundleItemInfo>>::push_back
            (avStack_20,(bundleItemInfo *)&local_38);
  local_34 = *(undefined4 *)(this + 0x188);
  local_38 = 0xfad;
  std::vector<bundleItemInfo,std::allocator<bundleItemInfo>>::push_back
            (avStack_20,(bundleItemInfo *)&local_38);
  local_34 = *(undefined4 *)(this + 0x18c);
  local_38 = 0xbc0;
  std::vector<bundleItemInfo,std::allocator<bundleItemInfo>>::push_back
            (avStack_20,(bundleItemInfo *)&local_38);
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  PlayerInfo::SetBundleInPurchase(this_03,aPStack_30);
  PurchasedBundleInfo::~PurchasedBundleInfo(aPStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSpecialOfferUI::ButtonDepress(int) */

void __thiscall PlantSpecialOfferUI::ButtonDepress(PlantSpecialOfferUI *this,int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  if (param_1 == 0x65) {
    BuyOffer(this,(string *)&DAT_06b8f5e0);
    return;
  }
  if (param_1 != 0x66) {
    if (param_1 != 100) {
      return;
    }
    LawnApp::KillPlantSpecialOfferUI(gLawnApp);
    return;
  }
  (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),1);
  return;
}


/* non-virtual thunk to PlantSpecialOfferUI::ButtonDepress(int) */

void __thiscall PlantSpecialOfferUI::ButtonDepress(PlantSpecialOfferUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpecialOfferUI::RefreshActivity() */

void __thiscall PlantSpecialOfferUI::RefreshActivity(PlantSpecialOfferUI *this)

{
  char cVar1;
  int iVar2;
  NetworkOfferInfo aNStack_a0 [8];
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  ActiveItem aAStack_88 [24];
  char local_70;
  string asStack_60 [88];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_70 != '\0') {
    NetworkOfferInfo::NetworkOfferInfo(aNStack_a0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aNStack_a0);
    if (cVar1 != '\0') {
      cVar1 = FUN_0547419c(asStack_60);
      if (cVar1 == '\0') {
        iVar2 = StringHelper::ToInt(asStack_60);
        SyncActivityData(this,local_98,local_94,iVar2,local_90,local_8c);
      }
    }
    NetworkOfferInfo::~NetworkOfferInfo(aNStack_a0);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpecialOfferUI::Draw(Sexy::Graphics*) */

void __thiscall PlantSpecialOfferUI::Draw(PlantSpecialOfferUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [12];
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (*(Image **)(this + 0x1f8) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x1f8),*(int *)(this + 0x200),*(int *)(this + 0x204),
               *(int *)(this + 0x208),*(int *)(this + 0x20c));
  }
  if (*(Image **)(this + 0x210) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x210),*(int *)(this + 0x218),*(int *)(this + 0x21c),
               *(int *)(this + 0x220),*(int *)(this + 0x224));
  }
  if (*(Image **)(this + 0x228) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x228),*(int *)(this + 0x230),*(int *)(this + 0x234),
               *(int *)(this + 0x238),*(int *)(this + 0x23c));
  }
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_40_ThickOutline);
  iVar1 = *(int *)(this + 600);
  iVar2 = *(int *)(this + 0x25c);
  iVar3 = *(int *)(this + 0x260);
  TodStringTranslate(L"[PLANT_SPECIAL_OFFER_TITLE]");
  Sexy::Color::Color((Color *)aIStack_18,1);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)iVar1,(float)iVar2,(float)iVar3,uVar4,param_1,awStack_20,1,
             aIStack_18,0);
  FUN_05476c50(awStack_20);
  if (*(Image **)(this + 0x108) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x108),*(int *)(this + 0x118),*(int *)(this + 0x11c),
               *(int *)(this + 0x120),*(int *)(this + 0x124));
  }
  if (*(Image **)(this + 0x110) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x110),*(int *)(this + 0x128),*(int *)(this + 300),
               *(int *)(this + 0x130),*(int *)(this + 0x134));
  }
  if (*(Image **)(this + 0x138) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x138),*(int *)(this + 0x148),*(int *)(this + 0x14c),
               *(int *)(this + 0x150),*(int *)(this + 0x154));
  }
  if (*(Image **)(this + 0x278) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x278),*(int *)(this + 0x280),*(int *)(this + 0x284),
               *(int *)(this + 0x288),*(int *)(this + 0x28c));
  }
  if (*(Image **)(this + 0x290) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x290),*(int *)(this + 0x298),*(int *)(this + 0x29c),
               *(int *)(this + 0x2a0),*(int *)(this + 0x2a4));
  }
  if (*(Image **)(this + 0x140) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x140),*(int *)(this + 0x158),*(int *)(this + 0x15c),
               *(int *)(this + 0x160),*(int *)(this + 0x164));
  }
  if (*(Image **)(this + 0x240) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x240),*(int *)(this + 0x248),*(int *)(this + 0x24c),
               *(int *)(this + 0x250),*(int *)(this + 0x254));
  }
  if (*(long *)(this + 0x2b0) != 0) {
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x2b8));
    Draw9SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0x2b0));
  }
  if (*(Image **)(this + 0x2c8) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x2c8),*(int *)(this + 0x2d0),*(int *)(this + 0x2d4),
               *(int *)(this + 0x2d8),*(int *)(this + 0x2dc));
  }
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x2e0,this + 0x2e8,uVar4,aIStack_18,5,1);
  TodStringTranslate(L"[PLANT_SPECIAL_LEFT_TIME]");
  lVar5 = *(long *)(this + 0x180);
  auVar6 = LawnApp::GetRealServerTime(gLawnApp);
  StringHelper::ToTimeString
            ((StringHelper *)&DAT_00000004,(float)(lVar5 - auVar6._0_8_),auVar6._8_4_);
  TodReplaceString(awStack_20,L"{TIME}",(wstring *)aIStack_18);
  FUN_05476c50(aIStack_18);
  FUN_05476c50(awStack_20);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_28,this + 0x168,uVar4,aIStack_18,5,1);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x2f8,this + 0x300,uVar4,aIStack_18,3,1);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x310,this + 0x318,uVar4,aIStack_18,3,1);
  lVar5 = LawnApp::GetPVZ2Dialog(gLawnApp);
  if (lVar5 == 0) {
    Sexy::Widget::DeferOverlay((Widget *)this,3);
  }
  FUN_05476c50(auStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpecialOfferUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
PlantSpecialOfferUI::DrawAll(PlantSpecialOfferUI *this,ModalFlags *param_1,Graphics *param_2)

{
  undefined8 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xe0));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f470);
  Draw9SliceImage(param_2,aIStack_18,uVar1);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpecialOfferUI::onNotifyBundlePurchased(int, std::vector<PaymentBundleInfo,
   std::allocator<PaymentBundleInfo> > const&) */

void __thiscall
PlantSpecialOfferUI::onNotifyBundlePurchased(PlantSpecialOfferUI *this,int param_1,vector *param_2)

{
  LawnApp *pLVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  MagentoProductProps *this_00;
  char *pcVar6;
  TGALogMgr *pTVar7;
  float fVar8;
  undefined8 local_b0;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_a8 [48];
  undefined8 local_78;
  undefined1 auStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  GAME_ITEM_INFO aGStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_a8);
    local_b0 = FUN_04c2aee8(*(undefined8 *)param_2);
    local_78 = FUN_04c2af38(*(undefined8 *)(param_2 + 8));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_78), bVar2)
    {
      piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
      param_2 = (vector *)0x0;
      ProfileChangeItemAmount(*piVar4,piVar4[1],false);
      GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_40);
      piVar5 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                      operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                  *)amStack_a8,piVar4);
      *piVar5 = piVar4[1];
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
    }
    LawnApp::KillPlantSpecialOfferUI(gLawnApp);
    this[0x328] = (PlantSpecialOfferUI)0x1;
    Magento::GetProduct((Magento *)&DAT_06b8f5e0,(string *)0x1);
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_b0);
    if (cVar3 != '\0') {
      TGALuckyChestData::TGALuckyChestData((TGALuckyChestData *)&local_78);
      std::string::append((string *)&local_78,"2",(size_t)param_2);
      thunk_FUN_05475e00(auStack_70,&DAT_06b8f5e0);
      this_00 = (MagentoProductProps *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0)
      ;
      fVar8 = (float)MagentoProductProps::GetPriceInUSD(this_00,false);
      DString::DString((DString *)aGStack_40,fVar8);
      pcVar6 = (char *)DString::c_str((DString *)aGStack_40);
      std::string::append(asStack_68,pcVar6,(size_t)param_2);
      DString::~DString((DString *)aGStack_40);
      DString::DString((DString *)aGStack_40,*(int *)(this + 0x188));
      pcVar6 = (char *)DString::c_str((DString *)aGStack_40);
      std::string::append(asStack_60,pcVar6,(size_t)param_2);
      DString::~DString((DString *)aGStack_40);
      DString::DString((DString *)aGStack_40,*(int *)(this + 0x18c));
      pcVar6 = (char *)DString::c_str((DString *)aGStack_40);
      std::string::append(asStack_58,pcVar6,(size_t)param_2);
      DString::~DString((DString *)aGStack_40);
      DString::DString((DString *)aGStack_40,*(int *)(this + 0x178));
      pcVar6 = (char *)DString::c_str((DString *)aGStack_40);
      std::string::append(asStack_50,pcVar6,(size_t)param_2);
      DString::~DString((DString *)aGStack_40);
      DString::DString((DString *)aGStack_40,*(int *)(this + 0x17c));
      pcVar6 = (char *)DString::c_str((DString *)aGStack_40);
      std::string::append(asStack_48,pcVar6,(size_t)param_2);
      DString::~DString((DString *)aGStack_40);
      pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGAPlantSpecialOfferData::TGAPlantSpecialOfferData
                ((TGAPlantSpecialOfferData *)aGStack_40,(TGAPlantSpecialOfferData *)&local_78);
      TGALogMgr::LogPlantSpecialOffer(pTVar7,aGStack_40);
      TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)aGStack_40);
      TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)&local_78);
    }
    requestNetwork();
    pLVar1 = gLawnApp;
    FUN_05478178(aGStack_40,L"[PLANT_OFFER_OPEN_TITLE]",(TGALuckyChestData *)&local_78);
    LawnApp::ShowPlantOfferOpenUI(pLVar1,amStack_a8,aGStack_40);
    FUN_05476c50(aGStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpecialOfferUI::requestBuyOffer() */

void __thiscall PlantSpecialOfferUI::requestBuyOffer(PlantSpecialOfferUI *this)

{
  string *this_00;
  char *__s;
  DNetwork *this_01;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  undefined8 *__n;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [1424];
  string asStack_758 [1872];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"rv");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
  __n = &gLawnApp;
  DString::DString(aDStack_ce8,*(int *)(gLawnApp + 0x2980));
  __s = (char *)DString::c_str(aDStack_ce8);
  std::string::append(this_00,__s,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_04c2a3b0(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_758,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  PlayerInfo::RemoveBundleInPurchase(this_03,(string *)&DAT_06b8f5e0,0);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

