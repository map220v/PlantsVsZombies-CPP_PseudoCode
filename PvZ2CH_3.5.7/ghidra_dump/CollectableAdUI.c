// Class: CollectableAdUI


/* CollectableAdUI::ButtonPress(int) */

int CollectableAdUI::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to CollectableAdUI::ButtonPress(int) */

void __thiscall CollectableAdUI::ButtonPress(CollectableAdUI *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableAdUI::~CollectableAdUI() */

void __thiscall CollectableAdUI::~CollectableAdUI(CollectableAdUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066bdba0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066bd870;
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
  std::string::string(asStack_10,"UI_CollectableAd");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableAdUI::~CollectableAdUI() */

void __thiscall CollectableAdUI::~CollectableAdUI(CollectableAdUI *this)

{
  ~CollectableAdUI(this);
  AK::FreeHook(this);
  return;
}


/* CollectableAdUI::setUnactive() */

void CollectableAdUI::setUnactive(void)

{
  s_isActive = 0;
  return;
}


/* CollectableAdUI::onMsgErrorRequest(int, std::string const&) */

void CollectableAdUI::onMsgErrorRequest(int param_1,string *param_2)

{
  s_isActive = 0;
  return;
}


/* CollectableAdUI::InitTestData() */

void __thiscall CollectableAdUI::InitTestData(CollectableAdUI *this)

{
  *(undefined4 *)(this + 0x140) = 0x1b213;
  *(undefined4 *)(this + 0x144) = 3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableAdUI::CollectableAdUI() */

void __thiscall CollectableAdUI::CollectableAdUI(CollectableAdUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066bd870;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066bdba0;
  Sexy::Insets::Insets((Insets *)(this + 0xe0));
  Sexy::Insets::Insets((Insets *)(this + 0x108));
  Sexy::Insets::Insets((Insets *)(this + 0x120));
  Sexy::Insets::Insets((Insets *)(this + 0x130));
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0x140));
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
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
  std::string::string(asStack_10,"UI_CollectableAd");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableAdUI::onKillDialog() */

void CollectableAdUI::onKillDialog(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  Sexy::LazySingleton<CollectableAdBoxMgr>::GetInstance();
  CollectableAdBoxMgr::ContinueGame();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableAdUI::InitView() */

void __thiscall CollectableAdUI::InitView(CollectableAdUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  PVZ2UIButton *pPVar8;
  SalesProgressBar *pSVar9;
  undefined8 uVar10;
  LotteryResultProgressBar *pLVar11;
  AdRewardContent *this_00;
  code *pcVar12;
  long *plVar13;
  string asStack_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  string asStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(gLawnApp + 0x71c),*(undefined4 *)(gLawnApp + 0x720),
             *(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  iVar2 = FUN_038e7764(0x244);
  iVar3 = FUN_038e7764(0x1a4);
  Sexy::Insets::Insets
            ((Insets *)&local_88,(*(int *)(this + 0x50) - iVar2) / 2,
             (*(int *)(this + 0x54) - iVar3) / 2,iVar2,iVar3);
  *(undefined8 *)(this + 0xe0) = local_88;
  *(undefined8 *)(this + 0xe8) = uStack_80;
  FUN_05478178(asStack_78,L"[RECALL_OFFER_CLAIM]",asStack_90);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar8 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar8,100,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar8;
  FUN_05476c50(asStack_78);
  nop();
  pPVar8 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ab7f48,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ab8250,3);
  PVZ2UIButton::SetDialogStates(pPVar8,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)&local_40);
  iVar4 = FUN_038e7764(0xb4);
  iVar2 = *(int *)(this + 0xe8);
  iVar3 = *(int *)(this + 0xe0);
  iVar1 = *(int *)(this + 0xec);
  iVar7 = *(int *)(this + 0xe4);
  iVar5 = FUN_038e7764(0x1e);
  plVar13 = *(long **)(this + 0xf0);
  pcVar12 = *(code **)(*plVar13 + 0x198);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab83b0);
  uVar6 = SalesProgressBar::GetCurrentLevel(pSVar9);
  (*pcVar12)(plVar13,iVar3 + (iVar2 - iVar4) / 2,(iVar7 + iVar1) - iVar5,iVar4,uVar6);
  plVar13 = *(long **)(this + 0xf0);
  pcVar12 = *(code **)(*plVar13 + 800);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_40_ThickOutline);
  (*pcVar12)(plVar13,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  std::string::string(asStack_90,"IMAGE_UI_COLLECTABLEAD_TITLE");
  nop();
  pLVar11 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_90,false);
  *(LotteryResultProgressBar **)(this + 0x118) = pLVar11;
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar3 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x118));
  Sexy::Insets::Insets
            ((Insets *)&local_40,
             *(int *)(this + 0xe0) + (*(int *)(this + 0xe8) - (int)((float)iVar2 * 0.8)) / 2,
             *(int *)(this + 0xe4) - (int)((float)iVar3 * 0.8) / 2,(int)((float)iVar2 * 0.8),
             (int)((float)iVar3 * 0.8));
  *(undefined8 *)(this + 0x120) = local_40;
  *(undefined8 *)(this + 0x128) = uStack_38;
  iVar2 = FUN_038e7764(10);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x120),iVar2 + *(int *)(this + 0x124),
             *(int *)(this + 0x128),0);
  *(undefined8 *)(this + 0x130) = local_40;
  *(undefined8 *)(this + 0x138) = uStack_38;
  std::string::string(asStack_78,"IMAGE_UI_COLLECTABLEAD_BANNER");
  nop();
  pLVar11 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_78,false);
  *(LotteryResultProgressBar **)(this + 0x100) = pLVar11;
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar2 = *(int *)(this + 0xe8);
  iVar3 = *(int *)(this + 0xe0);
  iVar4 = FUN_038e7764(0x32);
  iVar1 = *(int *)(this + 0xe4);
  iVar5 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x100));
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar3 + (iVar2 - (int)((float)iVar7 * 1.9)) / 2,iVar4 + iVar1,
             (int)((float)iVar7 * 1.9),(int)((float)iVar5 * 1.9));
  *(undefined8 *)(this + 0x108) = local_40;
  *(undefined8 *)(this + 0x110) = uStack_38;
  this_00 = ::operator_new(0xe0);
  AdRewardContent::AdRewardContent(this_00,(NDLoginRewardBonus *)(this + 0x140));
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8278);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8278);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar9);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,*(int *)(this + 0x108) + (*(int *)(this + 0x110) - iVar2) / 2,
             *(int *)(this + 0x10c) + (*(int *)(this + 0x114) - iVar3) / 2,iVar2,iVar3);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  plVar13 = (long *)EASquared::Instance();
  (**(code **)(*plVar13 + 0x38))(plVar13,6);
  std::string::~string(asStack_78);
  std::string::~string(asStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableAdUI::RefreshActivity(NDLoginRewardBonus const&) */

void __thiscall CollectableAdUI::RefreshActivity(CollectableAdUI *this,NDLoginRewardBonus *param_1)

{
  *(undefined8 *)(this + 0x140) = *(undefined8 *)param_1;
  InitView(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableAdUI::ButtonDepress(int) */

void __thiscall CollectableAdUI::ButtonDepress(CollectableAdUI *this,int param_1)

{
  LawnApp *this_00;
  char *pcVar1;
  long *plVar2;
  PVZ2UIDialog *pPVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  wstring awStack_70 [8];
  GAME_ITEM_INFO aGStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  if (param_1 == 100) {
    ProfileChangeItemAmount(*(int *)(this + 0x140),*(int *)(this + 0x144),false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_68);
    LawnApp::KillCollectableAdUI(gLawnApp);
    plVar2 = (long *)EASquared::Instance();
    (**(code **)(*plVar2 + 0x40))(plVar2,6);
    this_00 = gLawnApp;
    FUN_05478178(awStack_70,&DAT_056f11a8,auStack_80);
    FUN_05478178(aGStack_68,L"[RECALL_OFFER_GIVE_REWARD_HINT]",auStack_78);
    pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_70,(wstring *)aGStack_68);
    FUN_05476c50(aGStack_68);
    nop();
    FUN_05476c50(awStack_70);
    nop();
    FUN_05478178(awStack_70,L"[BUTTON_OK]",auStack_78);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onKillDialog);
    Sexy::Delegate0::Delegate0<CollectableAdUI,void(CollectableAdUI::*)()>(aDStack_38,aGStack_68);
    PVZ2UIDialog::AddButton(pPVar3,awStack_70,aDStack_38,1);
    FUN_05476c50(awStack_70);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to CollectableAdUI::ButtonDepress(int) */

void __thiscall CollectableAdUI::ButtonDepress(CollectableAdUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableAdUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
CollectableAdUI::DrawAll(CollectableAdUI *this,ModalFlags *param_1,Graphics *param_2)

{
  undefined8 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xe0));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7fc0);
  Draw9SliceImage(param_2,aIStack_18,uVar1);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableAdUI::Draw(Sexy::Graphics*) */

void __thiscall CollectableAdUI::Draw(CollectableAdUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (*(Image **)(this + 0x100) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x100),*(int *)(this + 0x108),*(int *)(this + 0x10c),
               *(int *)(this + 0x110),*(int *)(this + 0x114));
  }
  if (*(Image **)(this + 0x118) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x118),*(int *)(this + 0x120),*(int *)(this + 0x124),
               *(int *)(this + 0x128),*(int *)(this + 300));
  }
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_36_ThickOutline);
  iVar1 = *(int *)(this + 0x130);
  iVar2 = *(int *)(this + 0x134);
  iVar3 = *(int *)(this + 0x138);
  TodStringTranslate(L"[COLLECTABLE_AD_TITLE]");
  Sexy::Color::Color(aCStack_18,1);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)iVar1,(float)iVar2,(float)iVar3,uVar4,param_1,auStack_20,1,
             aCStack_18,0);
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

