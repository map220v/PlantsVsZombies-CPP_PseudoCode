// Class: DailySignRewardView


/* DailySignRewardView::onRewardGot() */

void DailySignRewardView::onRewardGot(void)

{
  LawnApp::KillSevenDaysRewardView(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignRewardView::~DailySignRewardView() */

void __thiscall DailySignRewardView::~DailySignRewardView(DailySignRewardView *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066d8d58;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066d8a30;
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


/* DailySignRewardView::~DailySignRewardView() */

void __thiscall DailySignRewardView::~DailySignRewardView(DailySignRewardView *this)

{
  ~DailySignRewardView(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignRewardView::InitView() */

void __thiscall DailySignRewardView::InitView(DailySignRewardView *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  PVZ2UIButton *pPVar10;
  SalesProgressBar *pSVar11;
  LotteryResultProgressBar *pLVar12;
  long lVar13;
  ulong uVar14;
  NDLoginRewardBonus *pNVar15;
  DaliySignRewardContent *this_00;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  code *pcVar19;
  long *plVar20;
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
            (this,*(undefined4 *)(gLawnApp + 0x71c),*(undefined4 *)(gLawnApp + 0x720),
             *(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  TodStringTranslate(L"[NATIONAL_DAY_SUCCESS_MSG]");
  FUN_054766c8(this + 0xf8,aPStack_40);
  FUN_05476c50(aPStack_40);
  iVar1 = FUN_03972124(0x90);
  iVar2 = FUN_03972124(0x8c);
  iVar6 = *(int *)(this + 0x50);
  iVar7 = *(int *)(this + 0x54);
  iVar3 = FUN_03972124(0x50);
  Sexy::Insets::Insets((Insets *)&local_a8,iVar1,iVar2,iVar6 + iVar1 * -2,(iVar7 - iVar2) - iVar3);
  iVar7 = local_a8;
  iVar3 = FUN_03972124(10);
  iVar1 = local_a0;
  iVar6 = iVar3 + local_a4;
  iVar4 = FUN_03972124(0x14);
  iVar2 = local_9c;
  iVar5 = FUN_03972124(0x17);
  Sexy::Insets::Insets((Insets *)&local_98,iVar7 + iVar3,iVar6,iVar1 - iVar4,iVar2 - iVar5);
  iVar6 = FUN_03972124(10);
  iVar7 = FUN_03972124(0x14);
  Sexy::Insets::Insets
            (aIStack_88,local_98 + iVar6,iVar6 + local_94,local_90 - iVar7,local_8c - iVar7);
  FUN_05478178(awStack_78,L"[TWO_YEAR_BIRTHDAY_REWARD_GOT_BTN]",auStack_b0);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar10,0x68,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar10;
  FUN_05476c50(awStack_78);
  nop();
  pPVar10 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06abd738,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06abda50,3);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)awStack_78,aPStack_40);
  iVar6 = FUN_03972124(0x6e);
  iVar7 = FUN_03972124(0x1e);
  plVar20 = *(long **)(this + 0x100);
  pcVar19 = *(code **)(*plVar20 + 0x198);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd738);
  uVar8 = SalesProgressBar::GetCurrentLevel(pSVar11);
  (*pcVar19)(plVar20,local_a8 + (local_a0 - iVar6) / 2,(local_a4 + local_9c) - iVar7,iVar6,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  iVar6 = *(int *)(this + 0x50);
  lVar13 = FUN_03971e84(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  uVar17 = *(undefined8 *)(this + 0xe0);
  uVar14 = FUN_03971e84(uVar17,*(undefined8 *)(this + 0xe8));
  uVar16 = uVar14 - 1;
  uVar18 = 0;
  while( true ) {
    if (uVar14 <= uVar18) break;
    pNVar15 = (NDLoginRewardBonus *)FUN_03971e98(uVar17,uVar18);
    this_00 = ::operator_new(0xf0);
    DaliySignRewardContent::DaliySignRewardContent(this_00,pNVar15);
    pcVar19 = *(code **)(*(long *)this_00 + 0x198);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    iVar2 = local_84;
    iVar4 = FUN_03972124(200);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
    uVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    pSVar11 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
    uVar9 = SalesProgressBar::GetCurrentLevel(pSVar11);
    (*pcVar19)(this_00,(int)(((float)(ulong)((long)iVar6 - iVar1 * lVar13) -
                             (float)(iVar7 / 2) * (float)uVar16) * 0.5 +
                            (float)(int)uVar18 * ((float)iVar3 + (float)(iVar7 / 2))),iVar2 + iVar4,
               uVar8,uVar9);
    (**(code **)(*(long *)this + 0x60))(this,this_00);
    uVar17 = *(undefined8 *)(this + 0xe0);
    uVar14 = FUN_03971e84(uVar17,*(undefined8 *)(this + 0xe8));
    uVar18 = uVar18 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignRewardView::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
DailySignRewardView::DrawAll(DailySignRewardView *this,ModalFlags *param_1,Graphics *param_2)

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
  iVar1 = FUN_03972124(0x90);
  iVar2 = FUN_03972124(0x8c);
  iVar5 = *(int *)(this + 0x50);
  iVar4 = *(int *)(this + 0x54);
  iVar3 = FUN_03972124(0x50);
  Sexy::Insets::Insets((Insets *)&local_58,iVar1,iVar2,iVar5 + iVar1 * -2,(iVar4 - iVar2) - iVar3);
  iVar4 = FUN_03972124(10);
  iVar5 = iVar4 + local_54;
  iVar1 = FUN_03972124(0x14);
  iVar2 = FUN_03972124(0x17);
  Sexy::Insets::Insets((Insets *)&local_48,local_58 + iVar4,iVar5,local_50 - iVar1,local_4c - iVar2)
  ;
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_58);
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd9f0);
  Draw9SliceImage(param_2,aIStack_18,uVar8);
  iVar5 = FUN_03972124(10);
  iVar4 = FUN_03972124(0x14);
  Sexy::Insets::Insets
            ((Insets *)local_38,local_48 + iVar5,iVar5 + local_44,local_40 - iVar4,local_3c - iVar4)
  ;
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abda28);
  LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abda28);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar10);
  iVar4 = FUN_03972124(0x41);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abda28);
  iVar1 = SalesProgressBar::GetCurrentLevel(pSVar10);
  iVar2 = FUN_03972124(10);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abda28);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar6 = FUN_03972124(0xf);
  iVar7 = FUN_03972124(100);
  Sexy::Insets::Insets
            (aIStack_28,local_38[0] + (local_30 - iVar3) / 2,
             iVar6 + iVar1 + iVar4 + (local_54 - iVar5) / 2 + iVar2,iVar3,iVar7);
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
/* DailySignRewardView::DailySignRewardView(std::vector<NDLoginRewardBonus,
   std::allocator<NDLoginRewardBonus> > const&) */

void __thiscall DailySignRewardView::DailySignRewardView(DailySignRewardView *this,vector *param_1)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066d8a30;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066d8d58;
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
  *(undefined8 *)(this + 0x100) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DailySignRewardView::ButtonDepress(int) */

void __thiscall DailySignRewardView::ButtonDepress(DailySignRewardView *this,int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  if (param_1 != 0x68) {
    return;
  }
  onRewardGot();
  return;
}


/* non-virtual thunk to DailySignRewardView::ButtonDepress(int) */

void __thiscall DailySignRewardView::ButtonDepress(DailySignRewardView *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

