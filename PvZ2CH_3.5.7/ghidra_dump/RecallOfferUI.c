// Class: RecallOfferUI


/* RecallOfferUI::isActive() */

undefined1 RecallOfferUI::isActive(void)

{
  return s_isActive;
}


/* RecallOfferUI::ButtonPress(int) */

int RecallOfferUI::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to RecallOfferUI::ButtonPress(int) */

void __thiscall RecallOfferUI::ButtonPress(RecallOfferUI *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RecallOfferUI::RecallOfferUI() */

void __thiscall RecallOfferUI::RecallOfferUI(RecallOfferUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06984720;
  *(undefined **)(this + 0xd8) = &DAT_06984a50;
  Sexy::Insets::Insets((Insets *)(this + 0xe0));
  RecallInfo::RecallInfo((RecallInfo *)(this + 0xf0));
  Sexy::Insets::Insets((Insets *)(this + 0x128));
  Sexy::Insets::Insets((Insets *)(this + 0x140));
  Sexy::Insets::Insets((Insets *)(this + 0x150));
  Sexy::Insets::Insets((Insets *)(this + 0x168));
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Activity");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_SkillDisplay");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_LevelUp");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_AvatarView_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"AudioCommon");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantSpecialOffer");
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
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigAvatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UPDATE_UI_HeadShot_BigAvatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UPDATE_UI_PlantSpecialOffer");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_RecallOffer");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RecallOfferUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall RecallOfferUI::DrawAll(RecallOfferUI *this,ModalFlags *param_1,Graphics *param_2)

{
  undefined8 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xe0));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f940);
  Draw9SliceImage(param_2,aIStack_18,uVar1);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RecallOfferUI::setUnactive() */

void RecallOfferUI::setUnactive(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)onNotifyRefreshActivityList);
  MessageRouter::
  Unsubscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBFunctionTranslatorX<void(*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,uVar2);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)onMsgErrorRequest);
  MessageRouter::
  Unsubscribe<int,std::string_const&,Sexy::CBFunctionTranslatorX<void(*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,uVar2);
  s_isActive = 0;
  return;
}


/* RecallOfferUI::onMsgErrorRequest(int, std::string const&) */

void RecallOfferUI::onMsgErrorRequest(int param_1,string *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)onNotifyRefreshActivityList);
  MessageRouter::
  Unsubscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBFunctionTranslatorX<void(*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,uVar2);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)onMsgErrorRequest);
  MessageRouter::
  Unsubscribe<int,std::string_const&,Sexy::CBFunctionTranslatorX<void(*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,uVar2);
  s_isActive = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RecallOfferUI::~RecallOfferUI() */

void __thiscall RecallOfferUI::~RecallOfferUI(RecallOfferUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_06984a50;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06984720;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
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
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_RecallOffer");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  RecallInfo::~RecallInfo((RecallInfo *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RecallOfferUI::~RecallOfferUI() */

void __thiscall RecallOfferUI::~RecallOfferUI(RecallOfferUI *this)

{
  ~RecallOfferUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RecallOfferUI::ButtonDepress(int) */

void __thiscall RecallOfferUI::ButtonDepress(RecallOfferUI *this,int param_1)

{
  LawnApp *this_00;
  char *pcVar1;
  PVZ2UIDialog *pPVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  if (param_1 == 100) {
    LawnApp::KillRecallOfferUI(gLawnApp);
    this_00 = gLawnApp;
    FUN_05478178(awStack_58,&DAT_056f11a8,auStack_68);
    FUN_05478178(awStack_50,L"[RECALL_OFFER_GIVE_REWARD_HINT]",auStack_60);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to RecallOfferUI::ButtonDepress(int) */

void __thiscall RecallOfferUI::ButtonDepress(RecallOfferUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RecallOfferUI::InitView() */

void __thiscall RecallOfferUI::InitView(RecallOfferUI *this)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  PVZ2UIButton *pPVar12;
  SalesProgressBar *this_00;
  undefined8 uVar13;
  LotteryResultProgressBar *pLVar14;
  RecallItemWidget *this_01;
  undefined4 *puVar15;
  long lVar16;
  code *pcVar17;
  long *plVar18;
  undefined1 auStack_228 [8];
  string asStack_220 [8];
  string asStack_218 [8];
  string asStack_210 [8];
  string asStack_208 [8];
  string asStack_200 [8];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8 [7];
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(gLawnApp + 0x71c),*(undefined4 *)(gLawnApp + 0x720),
             *(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  iVar4 = FUN_04c2eaf4(0x72);
  iVar5 = FUN_04c2eaf4(0x46);
  iVar10 = *(int *)(this + 0x50);
  iVar2 = *(int *)(this + 0x54);
  iVar6 = FUN_04c2eaf4(0x28);
  Sexy::Insets::Insets((Insets *)&local_1f8,iVar4,iVar5,iVar10 + iVar4 * -2,(iVar2 - iVar5) - iVar6)
  ;
  *(undefined8 *)(this + 0xe0) = local_1f8;
  *(undefined8 *)(this + 0xe8) = uStack_1f0;
  FUN_05478178((exception_ptr *)local_1e8,L"[RECALL_OFFER_CLAIM]",asStack_208);
  Sexy::Color::Color((Color *)&local_1b0,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar12,100,(ButtonListener *)(this + 0xd8),(wstring *)local_1e8,(Color *)&local_1b0);
  *(PVZ2UIButton **)(this + 0x110) = pPVar12;
  FUN_05476c50((exception_ptr *)local_1e8);
  nop();
  pPVar12 = *(PVZ2UIButton **)(this + 0x110);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_1e8,&DAT_06b8f8a0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_1b0,&DAT_06b8fb68,3);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)local_1e8,(PVZ2UIImage *)&local_1b0);
  iVar6 = FUN_04c2eaf4(0xb4);
  iVar10 = *(int *)(this + 0xe8);
  iVar2 = *(int *)(this + 0xe0);
  iVar4 = *(int *)(this + 0xec);
  iVar5 = *(int *)(this + 0xe4);
  iVar7 = FUN_04c2eaf4(0x1e);
  plVar18 = *(long **)(this + 0x110);
  pcVar17 = *(code **)(*plVar18 + 0x198);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8fc48);
  uVar8 = SalesProgressBar::GetCurrentLevel(this_00);
  (*pcVar17)(plVar18,iVar2 + (iVar10 - iVar6) / 2,(iVar5 + iVar4) - iVar7,iVar6,uVar8);
  plVar18 = *(long **)(this + 0x110);
  pcVar17 = *(code **)(*plVar18 + 800);
  uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_40_ThickOutline);
  (*pcVar17)(plVar18,uVar13);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x110));
  std::string::string(asStack_220,"IMAGE_UI_RECALLOFFER_TITLE");
  nop();
  pLVar14 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_220,false);
  iVar10 = *(int *)(this + 0xe8);
  *(LotteryResultProgressBar **)(this + 0x138) = pLVar14;
  iVar2 = *(int *)(this + 0xe0);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  iVar4 = *(int *)(this + 0xe4);
  iVar6 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x138));
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x138));
  iVar9 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x138));
  Sexy::Insets::Insets
            ((Insets *)&local_1b0,iVar2 + (iVar10 - iVar5) / 2,iVar4 - iVar6 / 2,iVar7,iVar9);
  *(undefined8 *)(this + 0x140) = local_1b0;
  *(undefined8 *)(this + 0x148) = uStack_1a8;
  iVar10 = FUN_04c2eaf4(10);
  Sexy::Insets::Insets
            ((Insets *)&local_1b0,*(int *)(this + 0x140),iVar10 + *(int *)(this + 0x144),
             *(int *)(this + 0x148),0);
  *(undefined8 *)(this + 0x150) = local_1b0;
  *(undefined8 *)(this + 0x158) = uStack_1a8;
  std::string::string(asStack_218,"IMAGE_UI_RECALLOFFER_BANNER");
  nop();
  pLVar14 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_218,false);
  *(LotteryResultProgressBar **)(this + 0x120) = pLVar14;
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  iVar10 = *(int *)(this + 0xe8);
  iVar2 = *(int *)(this + 0xe0);
  iVar6 = FUN_04c2eaf4(0x28);
  iVar4 = *(int *)(this + 0xe4);
  iVar7 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x120));
  Sexy::Insets::Insets
            ((Insets *)&local_1b0,iVar2 + (iVar10 - (int)((float)iVar5 * 1.2)) / 2,iVar6 + iVar4,
             (int)((float)iVar5 * 1.2),(int)((float)iVar7 * 1.2));
  *(undefined8 *)(this + 0x128) = local_1b0;
  *(undefined8 *)(this + 0x130) = uStack_1a8;
  std::string::string(asStack_210,"IMAGE_UI_RECALLOFFER_MAIN_BG");
  nop();
  uVar13 = StringHelper::ToImage(asStack_210,false);
  iVar10 = *(int *)(this + 0x134);
  iVar2 = *(int *)(this + 0x130);
  iVar4 = *(int *)(this + 0xe8);
  iVar5 = *(int *)(this + 0xe0);
  iVar6 = *(int *)(this + 300);
  *(undefined8 *)(this + 0x160) = uVar13;
  iVar7 = FUN_04c2eaf4(0x19);
  iVar9 = FUN_04c2eaf4(0x28);
  Sexy::Insets::Insets
            ((Insets *)&local_1b0,iVar5 + (iVar4 - iVar2) / 2,iVar10 + iVar6 + iVar7,iVar2,
             *(int *)(this + 0xec) + ((iVar9 * -2 - iVar10) - iVar7));
  *(undefined8 *)(this + 0x168) = local_1b0;
  *(undefined8 *)(this + 0x170) = uStack_1a8;
  iVar5 = FUN_04c2eaf4(0xb4);
  uVar8 = FUN_04c2eaf4(0xdc);
  iVar6 = FUN_04c2ea40(*(undefined8 *)(this + 0xf8),*(undefined8 *)(this + 0x100));
  iVar7 = FUN_04c2eaf4(0x50);
  iVar10 = *(int *)(this + 0xe8);
  iVar2 = *(int *)(this + 0xe0);
  iVar9 = FUN_04c2eaf4(0x14);
  iVar4 = *(int *)(this + 0x16c);
  lVar16 = 0;
  if (0 < iVar6) {
    do {
      this_01 = ::operator_new(0x100);
      RecallItemWidget::RecallItemWidget(this_01);
      iVar11 = FUN_04c2eaf4(0x50);
      (**(code **)(*(long *)this_01 + 0x198))
                (this_01,iVar2 + (iVar10 - (iVar5 * iVar6 + iVar7 * (iVar6 + -1))) / 2 +
                         (iVar11 + iVar5) * (int)lVar16,iVar9 + iVar4,iVar5,uVar8);
      lVar1 = lVar16 + 1;
      FUN_04c2ea68(*(undefined8 *)(this + 0xf8),lVar16);
      RecallItemWidget::SetShopData((RecallItemInfo *)this_01);
      (**(code **)(*(long *)this + 0x60))(this,this_01);
      lVar16 = lVar1;
    } while ((int)lVar1 < iVar6);
  }
  uVar8 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar8);
  std::string::string((string *)&local_1b0,"");
  FUN_05462980(auStack_178,(Insets *)&local_1b0);
  std::string::~string((string *)&local_1b0);
  nop();
  local_1e8[0] = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0xf8));
  local_1b0 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(this + 0xf8));
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)local_1e8,(__normal_iterator *)&local_1b0), bVar3)
  {
    puVar15 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_1e8);
    FUN_0546065c(auStack_168,*puVar15);
    FUN_054603b8(auStack_168,&DAT_05593348);
    FUN_0546065c(auStack_168,puVar15[1]);
    FUN_054603b8(auStack_168,&DAT_05594620);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_1e8);
  }
  std::string::string((string *)local_1e8,"2019_SUMMER");
  std::string::string(asStack_200,"PLAYER_RETRUN");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_1b0,asStack_200,1,auStack_228
            );
  FUN_05462824(asStack_208,auStack_178);
  BehaviorLog::inGameBehavior((string *)local_1e8,(vector *)&local_1b0,asStack_208);
  std::string::~string(asStack_208);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_1b0);
  std::string::~string(asStack_200);
  nop();
  std::string::~string((string *)local_1e8);
  nop();
  FUN_054617bc(auStack_178);
  std::string::~string(asStack_210);
  std::string::~string(asStack_218);
  std::string::~string(asStack_220);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RecallOfferUI::RequestNetwork() */

void RecallOfferUI::RequestNetwork(void)

{
  undefined *puVar1;
  LawnApp *this;
  char cVar2;
  undefined8 uVar3;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  PVZ2UIDialog *pPVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = LawnApp::IsNetworkModuleOK();
  this = gLawnApp;
  puVar1 = gMessageRouter;
  if (cVar2 == '\0') {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178((wstring *)avStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
    pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,(wstring *)avStack_50);
    FUN_05476c50((wstring *)avStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(wstring *)avStack_50);
    PVZ2UIDialog::AddButton(pPVar4,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
  }
  else {
    s_isActive = 1;
    uVar3 = std::
            __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                      ((TaskResource **)onNotifyRefreshActivityList);
    MessageRouter::
    Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBFunctionTranslatorX<void(*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
              ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,uVar3);
    puVar1 = gMessageRouter;
    uVar3 = std::
            __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                      ((TaskResource **)onMsgErrorRequest);
    MessageRouter::
    Subscribe<int,std::string_const&,Sexy::CBFunctionTranslatorX<void(*)(int,std::string_const&)>>
              ((MessageRouter *)puVar1,Message::MsgErrorRequest,uVar3);
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
              (avStack_50,&DAT_05755670,1,awStack_58);
    INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_50,0,true);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RecallOfferUI::SyncActivityData(RecallInfo const&, int) */

void __thiscall RecallOfferUI::SyncActivityData(RecallOfferUI *this,RecallInfo *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  ActivityConfig *this_00;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 local_40;
  GAME_ITEM_INFO aGStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RecallInfo::operator=((RecallInfo *)(this + 0xf0),param_1);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xf8));
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xf8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    ProfileChangeItemAmount(*piVar2,piVar2[1],false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
  this_00 = (ActivityConfig *)LawnApp::GetActivityConfig();
  if (this_00 != (ActivityConfig *)0x0) {
    uVar3 = ActivityConfig::DateMKTime(this_00,param_2);
    *(undefined8 *)(this + 0x118) = uVar3;
  }
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RecallOfferUI::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void RecallOfferUI::onNotifyRefreshActivityList(bool param_1,set *param_2)

{
  LawnApp *this;
  bool bVar1;
  int iVar2;
  PVZ2UIDialog *pPVar3;
  undefined1 auStack_b8 [8];
  int local_b0 [2];
  undefined8 local_a8;
  undefined8 local_a0 [3];
  Delegate0 aDStack_88 [24];
  char local_70;
  long local_8;
  
  this = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_b0[0] = 0x29fc;
    local_a8 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,local_b0);
    local_a0[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_a8,(rbtree_iterator *)local_a0);
    if (bVar1) {
      iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar2);
      ActiveItem::~ActiveItem((ActiveItem *)aDStack_88);
      if (local_70 != '\0') {
        LawnApp::ShowRecallOfferUI(gLawnApp);
      }
    }
  }
  else {
    FUN_05478178((wstring *)&local_a8,&DAT_056f11a8,auStack_b8);
    FUN_05478178((wstring *)local_a0,L"[RECALL_OFFER_NETWORK_ERROR]",local_b0);
    pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,(wstring *)&local_a8,(wstring *)local_a0);
    FUN_05476c50((wstring *)local_a0);
    nop();
    FUN_05476c50((wstring *)&local_a8);
    nop();
    FUN_05478178((wstring *)&local_a8,L"[BUTTON_OK]",local_b0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_88,(wstring *)local_a0);
    PVZ2UIDialog::AddButton(pPVar3,(wstring *)&local_a8,aDStack_88,1);
    FUN_05476c50((wstring *)&local_a8);
    nop();
    setUnactive();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RecallOfferUI::RefreshActivity() */

void __thiscall RecallOfferUI::RefreshActivity(RecallOfferUI *this)

{
  char cVar1;
  int iVar2;
  RecallInfo aRStack_a8 [32];
  ActiveItem aAStack_88 [24];
  char local_70;
  string asStack_60 [88];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_70 == '\0') {
    LawnApp::KillRecallOfferUI(gLawnApp);
  }
  else {
    RecallInfo::RecallInfo(aRStack_a8);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aRStack_a8);
    if (cVar1 != '\0') {
      cVar1 = FUN_0547419c(asStack_60);
      if (cVar1 == '\0') {
        iVar2 = StringHelper::ToInt(asStack_60);
        SyncActivityData(this,aRStack_a8,iVar2);
      }
    }
    RecallInfo::~RecallInfo(aRStack_a8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RecallOfferUI::Draw(Sexy::Graphics*) */

void __thiscall RecallOfferUI::Draw(RecallOfferUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (*(Image **)(this + 0x120) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x120),*(int *)(this + 0x128),*(int *)(this + 300),
               *(int *)(this + 0x130),*(int *)(this + 0x134));
  }
  if (*(long *)(this + 0x160) != 0) {
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x168));
    Draw9SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0x160));
  }
  if (*(Image **)(this + 0x138) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x138),*(int *)(this + 0x140),*(int *)(this + 0x144),
               *(int *)(this + 0x148),*(int *)(this + 0x14c));
  }
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_40_ThickOutline);
  iVar1 = *(int *)(this + 0x150);
  iVar2 = *(int *)(this + 0x154);
  iVar3 = *(int *)(this + 0x158);
  TodStringTranslate(L"[RECALL_OFFER_TITLE]");
  Sexy::Color::Color((Color *)aIStack_18,1);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)iVar1,(float)iVar2,(float)iVar3,uVar4,param_1,auStack_20,1,
             aIStack_18,0);
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

