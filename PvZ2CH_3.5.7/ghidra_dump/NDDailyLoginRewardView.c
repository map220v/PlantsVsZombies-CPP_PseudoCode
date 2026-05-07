// Class: NDDailyLoginRewardView


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NDDailyLoginRewardView::~NDDailyLoginRewardView() */

void __thiscall NDDailyLoginRewardView::~NDDailyLoginRewardView(NDDailyLoginRewardView *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066d77a8;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066d7480;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NationalCenter");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Two_Year");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
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
  std::string::string(asStack_10,"UI_Fragment_Material");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  FUN_05476c50(this + 0xf8);
  std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::~vector
            ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NDDailyLoginRewardView::~NDDailyLoginRewardView() */

void __thiscall NDDailyLoginRewardView::~NDDailyLoginRewardView(NDDailyLoginRewardView *this)

{
  ~NDDailyLoginRewardView(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NDDailyLoginRewardView::InitView() */

void __thiscall NDDailyLoginRewardView::InitView(NDDailyLoginRewardView *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  PVZ2UIButton *pPVar11;
  SalesProgressBar *pSVar12;
  LotteryResultProgressBar *pLVar13;
  long lVar14;
  ulong uVar15;
  NDLoginRewardBonus *pNVar16;
  DaliyLoginRewardContent *this_00;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  code *pcVar20;
  long *plVar21;
  undefined1 auStack_b0 [8];
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  Insets aIStack_88 [4];
  int local_84;
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  TodStringTranslate(L"[NATIONAL_DAY_SUCCESS_MSG]");
  FUN_054766c8(this + 0xf8,aPStack_40);
  FUN_05476c50(aPStack_40);
  iVar1 = FUN_0396c5e8(0xfa);
  iVar7 = *(int *)(this + 0x50);
  iVar2 = FUN_0396c5e8(0x96);
  iVar8 = *(int *)(this + 0x54);
  iVar3 = FUN_0396c5e8(500);
  iVar4 = FUN_0396c5e8(300);
  Sexy::Insets::Insets((Insets *)&local_a8,iVar7 / 2 - iVar1,iVar8 / 2 - iVar2,iVar3,iVar4);
  iVar7 = local_a8;
  iVar3 = FUN_0396c5e8(10);
  iVar8 = local_a4;
  iVar4 = FUN_0396c5e8(0xffffffd8);
  iVar1 = local_a0;
  iVar5 = FUN_0396c5e8(0x14);
  iVar2 = local_9c;
  iVar6 = FUN_0396c5e8(0xffffffb3);
  Sexy::Insets::Insets((Insets *)&local_98,iVar7 + iVar3,iVar8 + iVar4,iVar1 - iVar5,iVar2 - iVar6);
  iVar7 = FUN_0396c5e8(10);
  iVar8 = FUN_0396c5e8(0x14);
  Sexy::Insets::Insets
            (aIStack_88,local_98 + iVar7,iVar7 + local_94,local_90 - iVar8,local_8c - iVar8);
  FUN_05478178(awStack_78,L"[TWO_YEAR_BIRTHDAY_REWARD_GOT_BTN]",auStack_b0);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar11,2,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar11;
  FUN_05476c50(awStack_78);
  nop();
  pPVar11 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06abd268,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06abd4c0,3);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)awStack_78,aPStack_40);
  iVar7 = FUN_0396c5e8(0x6e);
  iVar8 = FUN_0396c5e8(0x1e);
  plVar21 = *(long **)(this + 0x100);
  pcVar20 = *(code **)(*plVar21 + 0x198);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd268);
  uVar9 = SalesProgressBar::GetCurrentLevel(pSVar12);
  (*pcVar20)(plVar21,local_a8 + (local_a0 - iVar7) / 2,(local_a4 + local_9c) - iVar8,iVar7,uVar9);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
  iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  iVar7 = *(int *)(this + 0x50);
  lVar14 = FUN_0396c208(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  uVar18 = *(undefined8 *)(this + 0xe0);
  uVar15 = FUN_0396c208(uVar18,*(undefined8 *)(this + 0xe8));
  uVar17 = uVar15 - 1;
  uVar19 = 0;
  while( true ) {
    if (uVar15 <= uVar19) break;
    pNVar16 = (NDLoginRewardBonus *)FUN_0396c214(uVar18,uVar19);
    this_00 = ::operator_new(0xe0);
    DaliyLoginRewardContent::DaliyLoginRewardContent(this_00,pNVar16);
    pcVar20 = *(code **)(*(long *)this_00 + 0x198);
    pLVar13 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
    iVar2 = local_84;
    iVar4 = FUN_0396c5e8(200);
    pLVar13 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
    uVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd490);
    uVar10 = SalesProgressBar::GetCurrentLevel(pSVar12);
    (*pcVar20)(this_00,(int)(((float)(ulong)((long)iVar7 - iVar1 * lVar14) -
                             (float)(iVar8 / 2) * (float)uVar17) * 0.5 +
                            (float)(int)uVar19 * ((float)iVar3 + (float)(iVar8 / 2))),iVar2 + iVar4,
               uVar9,uVar10);
    (**(code **)(*(long *)this + 0x60))(this,this_00);
    uVar18 = *(undefined8 *)(this + 0xe0);
    uVar15 = FUN_0396c208(uVar18,*(undefined8 *)(this + 0xe8));
    uVar19 = uVar19 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NDDailyLoginRewardView::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
NDDailyLoginRewardView::DrawAll(NDDailyLoginRewardView *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  LotteryResultProgressBar *pLVar9;
  SalesProgressBar *pSVar10;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38 [2];
  int local_30;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  iVar1 = FUN_0396c5e8(0xfa);
  iVar6 = *(int *)(this + 0x50);
  iVar2 = FUN_0396c5e8(0x96);
  iVar5 = *(int *)(this + 0x54);
  iVar3 = FUN_0396c5e8(500);
  iVar4 = FUN_0396c5e8(300);
  Sexy::Insets::Insets((Insets *)&local_58,iVar6 / 2 - iVar1,iVar5 / 2 - iVar2,iVar3,iVar4);
  iVar5 = FUN_0396c5e8(10);
  iVar6 = local_54;
  iVar1 = FUN_0396c5e8(0xffffffd8);
  iVar2 = FUN_0396c5e8(0x14);
  iVar3 = FUN_0396c5e8(0xffffffb3);
  Sexy::Insets::Insets
            ((Insets *)&local_48,local_58 + iVar5,iVar6 + iVar1,local_50 - iVar2,local_4c - iVar3);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_58);
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd0e8);
  Draw9SliceImage(param_2,aIStack_18,uVar8);
  iVar6 = FUN_0396c5e8(10);
  iVar5 = FUN_0396c5e8(0x14);
  Sexy::Insets::Insets
            ((Insets *)local_38,local_48 + iVar6,iVar6 + local_44,local_40 - iVar5,local_3c - iVar5)
  ;
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd290);
  LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd290);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
  iVar5 = FUN_0396c5e8(0x41);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd290);
  iVar1 = SalesProgressBar::GetCurrentLevel(pSVar10);
  iVar2 = FUN_0396c5e8(10);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd290);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar4 = FUN_0396c5e8(0xf);
  iVar7 = FUN_0396c5e8(100);
  Sexy::Insets::Insets
            (aIStack_28,local_38[0] + (local_30 - iVar3) / 2,
             iVar4 + iVar1 + iVar5 + (local_54 - iVar6) / 2 + iVar2,iVar3,iVar7);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
  WriteWordInRect(param_2,this + 0xf8,aIStack_28,uVar8,aIStack_18,5,1);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NDDailyLoginRewardView::NDDailyLoginRewardView(std::vector<NDLoginRewardBonus,
   std::allocator<NDLoginRewardBonus> > const&) */

void __thiscall
NDDailyLoginRewardView::NDDailyLoginRewardView(NDDailyLoginRewardView *this,vector *param_1)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066d7480;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066d77a8;
  std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::vector
            ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)(this + 0xe0),param_1)
  ;
  FUN_05476574(this + 0xf8);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NationalCenter");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Two_Year");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Material");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined8 *)(this + 0x100) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NDDailyLoginRewardView::ButtonDepress(int) */

void __thiscall NDDailyLoginRewardView::ButtonDepress(NDDailyLoginRewardView *this,int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  if (param_1 != 2) {
    return;
  }
  DailySignRewardView::onRewardGot();
  return;
}


/* non-virtual thunk to NDDailyLoginRewardView::ButtonDepress(int) */

void __thiscall NDDailyLoginRewardView::ButtonDepress(NDDailyLoginRewardView *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

