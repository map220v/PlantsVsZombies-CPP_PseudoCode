// Class: ReviveUI


/* ReviveUI::~ReviveUI() */

void __thiscall ReviveUI::~ReviveUI(ReviveUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06842590;
  *(undefined **)(this + 0xd8) = &DAT_068428c0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x118);
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ReviveUI::~ReviveUI() */

void __thiscall ReviveUI::~ReviveUI(ReviveUI *this)

{
  ~ReviveUI(this);
  AK::FreeHook(this);
  return;
}


/* ReviveUI::Update() */

void __thiscall ReviveUI::Update(ReviveUI *this)

{
  char cVar1;
  Board *this_00;
  
  if (this[0x100] == (ReviveUI)0x0) {
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    if ((this_00 != (Board *)0x0) && (cVar1 = FUN_043b6a4c(this_00[0x9dc]), cVar1 == '\0')) {
      Board::ClearCursors(this_00);
      LawnApp::PauseMusic(gLawnApp);
      (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),1);
    }
  }
  return;
}


/* ReviveUI::OnServerGemCallBack(bool const&) */

void __thiscall ReviveUI::OnServerGemCallBack(ReviveUI *this,bool *param_1)

{
  if (*param_1 == false) {
    return;
  }
  this[0x100] = (ReviveUI)0x1;
  MessageRouter::Post((_func_void *)gMessageRouter);
  LawnApp::KillReviveUI(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ReviveUI::ReviveUI(ReviveMode) */

void __thiscall ReviveUI::ReviveUI(ReviveUI *this,undefined4 param_2)

{
  wstring *pwVar1;
  ButtonListener *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  PVZ2UIButton *pPVar12;
  SalesProgressBar *pSVar13;
  wchar_t *pwVar14;
  code *pcVar15;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pwVar1 = (wstring *)(this + 0x118);
  this_00 = (ButtonListener *)(this + 0xd8);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener(this_00);
  *(undefined ***)this = &PTR_GetClass_06842590;
  *(undefined **)(this + 0xd8) = &DAT_068428c0;
  FUN_05476574(this + 0xe8);
  Sexy::Insets::Insets((Insets *)(this + 0xf0));
  Sexy::Insets::Insets((Insets *)(this + 0x104));
  FUN_05476574(pwVar1);
  Sexy::Insets::Insets((Insets *)(this + 0x120));
  this[0x100] = (ReviveUI)0x0;
  *(undefined4 *)(this + 0xe0) = param_2;
  iVar2 = FUN_043b6ac0(0);
  Sexy::Widget::Resize
            ((Widget *)this,iVar2,iVar2,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
  TodStringTranslate(L"[REVIVE_TIP]");
  FUN_054766c8(this + 0xe8,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  iVar2 = FUN_043b6ac0(0x21e);
  switch(*(undefined4 *)(this + 0xe0)) {
  case 0:
    pwVar14 = L"[REVIVE_CONTENT_SINGLEHANDED]";
    goto LAB_043b7098;
  case 1:
    pwVar14 = L"[REVIVE_CONTENT_OAKTRAIN]";
    goto LAB_043b7098;
  case 2:
    pwVar14 = L"[SNAKE_REVIVE_TIP1]";
    goto LAB_043b7098;
  case 3:
    pwVar14 = L"[SNAKE_REVIVE_TIP2]";
    goto LAB_043b7098;
  case 4:
    pwVar14 = L"[SNAKE_REVIVE_TIP3]";
    goto LAB_043b7098;
  case 5:
    pwVar14 = L"[SNAKE_REVIVE_TIP4]";
LAB_043b7098:
    TodStringTranslate(pwVar14);
    FUN_054766c8(pwVar1,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    goto switchD_043b7038_default;
  case 6:
    pwVar14 = L"[REVIVE_DODORIDER_DIED_OUT]";
    break;
  case 7:
    pwVar14 = L"[ELIMINATE_REVIVE_TIP1]";
    break;
  case 8:
    pwVar14 = L"[POOYAN_SHOOTER_DIED_TIP]";
    break;
  case 9:
    pwVar14 = L"[FISHING_ENERGY_NEED_RESET_TIP]";
    break;
  case 10:
    pwVar14 = L"[AIRSHIP_NEED_RESET_TIP]";
    break;
  case 0xb:
    pwVar14 = L"[BESIEGE_FAILED_GAME_TIP]";
    break;
  case 0xc:
    pwVar14 = L"[MAZE_STATUE_DIED_TIP]";
    break;
  default:
    goto switchD_043b7038_default;
  }
  TodStringTranslate(pwVar14);
  TodReplaceNumberString((wstring *)&local_40,L"{GEM_COUNT}",10);
  FUN_054766c8(pwVar1,awStack_78);
  FUN_05476c50(awStack_78);
  FUN_05476c50((Insets *)&local_40);
switchD_043b7038_default:
  TodReplaceNumberString(pwVar1,L"{GEM_COUNT}",10);
  FUN_054766c8(pwVar1,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  iVar3 = FUN_043b6ac0(0xe0);
  iVar4 = FUN_043b6ac0(0x6a);
  Sexy::Insets::Insets
            ((Insets *)&local_40,(int)(((float)*(int *)(this + 0x50) - (float)iVar2) * 0.5),iVar4,
             (int)(float)iVar2,(int)(float)iVar3);
  *(undefined8 *)(this + 0xf0) = local_40;
  *(undefined8 *)(this + 0xf8) = uStack_38;
  iVar4 = FUN_043b6ac0(0x14);
  iVar2 = *(int *)(this + 0xf0);
  iVar5 = FUN_043b6ac0(0xf5);
  iVar3 = *(int *)(this + 0xf8);
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02e48);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar4 + iVar2,iVar5,iVar3 + iVar4 * -2,*(int *)(lVar11 + 0x3c));
  *(undefined8 *)(this + 0x104) = local_40;
  *(undefined8 *)(this + 0x10c) = uStack_38;
  iVar4 = FUN_043b6ac0(0x14);
  iVar2 = *(int *)(this + 0xf0);
  iVar5 = FUN_043b6ac0(0x9b);
  iVar3 = *(int *)(this + 0xf8);
  iVar6 = FUN_043b6ac0(100);
  Sexy::Insets::Insets((Insets *)&local_40,iVar4 + iVar2,iVar5,iVar3 + iVar4 * -2,iVar6);
  *(undefined8 *)(this + 0x120) = local_40;
  *(undefined8 *)(this + 0x128) = uStack_38;
  FUN_05478178(awStack_78,L"[BUTTON_OK]",auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,0x3e9,this_00,awStack_78,(Color *)&local_40);
  FUN_05476c50(awStack_78);
  nop();
  iVar2 = *(int *)(this + 0xf0);
  iVar3 = *(int *)(this + 0xf8);
  pcVar15 = *(code **)(*(long *)pPVar12 + 0x198);
  iVar6 = FUN_043b6ac0(0x50);
  iVar4 = *(int *)(this + 0xf4);
  iVar5 = *(int *)(this + 0xfc);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02dc0);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar13);
  uVar8 = FUN_043b6ac0(0x5a);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02dc0);
  uVar9 = SalesProgressBar::GetCurrentLevel(pSVar13);
  (*pcVar15)(pPVar12,iVar2 + iVar3 / 2 + iVar6,(iVar4 + iVar5) - iVar7 / 2,uVar8,uVar9);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b02dc0,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b02f18,1);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pPVar12);
  FUN_05478178(awStack_78,L"[BUTTON_CANCEL]",auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,1000,this_00,awStack_78,(Color *)&local_40);
  FUN_05476c50(awStack_78);
  nop();
  iVar2 = *(int *)(this + 0xf0);
  iVar3 = *(int *)(this + 0xf8);
  pcVar15 = *(code **)(*(long *)pPVar12 + 0x198);
  iVar6 = FUN_043b6ac0(0x50);
  iVar7 = FUN_043b6ac0(0x5a);
  iVar4 = *(int *)(this + 0xf4);
  iVar5 = *(int *)(this + 0xfc);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02dc0);
  iVar10 = SalesProgressBar::GetCurrentLevel(pSVar13);
  uVar8 = FUN_043b6ac0(0x5a);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02dc0);
  uVar9 = SalesProgressBar::GetCurrentLevel(pSVar13);
  (*pcVar15)(pPVar12,((iVar2 + iVar3 / 2) - iVar6) - iVar7,(iVar4 + iVar5) - iVar10 / 2,uVar8,uVar9)
  ;
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b02dc0,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b02f18,1);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pPVar12);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ReviveUI::Draw(Sexy::Graphics*) */

void __thiscall ReviveUI::Draw(ReviveUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  GraphicsAutoState aGStack_40 [8];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xf0));
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02ea8);
  DrawImageTiled(0x3f800000,param_1,aIStack_18,uVar8);
  Sexy::Graphics::ClearClipRect(param_1);
  iVar2 = FUN_043b6ac0(0xfffffff3);
  iVar1 = *(int *)(this + 0xf0);
  iVar3 = FUN_043b6ac0(0xfffffff7);
  iVar6 = *(int *)(this + 0xf4);
  iVar4 = FUN_043b6ac0(0x1a);
  iVar7 = *(int *)(this + 0xf8);
  iVar5 = FUN_043b6ac0(0x17);
  Sexy::Insets::Insets
            (aIStack_38,iVar2 + iVar1,iVar3 + iVar6,iVar4 + iVar7,iVar5 + *(int *)(this + 0xfc));
  Sexy::Insets::Insets(aIStack_18,aIStack_38);
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02f40);
  Draw9SliceImage(param_1,aIStack_18,uVar8);
  iVar6 = FUN_043b6ac0(0x14);
  iVar1 = *(int *)(this + 0xf4);
  iVar7 = FUN_043b6ac0(0x22);
  Sexy::Insets::Insets(aIStack_28,*(int *)(this + 0xf0),iVar6 + iVar1,*(int *)(this + 0xf8),iVar7);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Generic_Title);
  WriteWordInRect(param_1,this + 0xe8,aIStack_28,uVar8,aIStack_18,5,1);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x118,this + 0x120,uVar8,aIStack_18,5,1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ReviveUI::OnServerGemCallBack_Android_Convert_Ios(bool const&) */

void __thiscall ReviveUI::OnServerGemCallBack_Android_Convert_Ios(ReviveUI *this,bool *param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  NewPVPMgr *this_01;
  int *piVar2;
  GroupInfo *this_02;
  char *__s;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 == false) goto LAB_043b737c;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (NewPVPMgr *)ProfileMgr::GetCurrentProfile(this_00);
  local_10[0] = NewPVPMgr::GetSeasonEndTime(this_01);
  piVar2 = eastl::min_alt<int>((int *)&DAT_057537f0,(int *)local_10);
  iVar1 = *piVar2;
  switch(*(undefined4 *)(this + 0xe0)) {
  case 0:
    __s = "single_revive";
    break;
  case 1:
    __s = "oaktrain_revive";
    break;
  case 2:
    __s = "snakehitblock_revive";
    break;
  case 3:
    __s = "snakeheadhitbody_revive";
    break;
  case 4:
    __s = "snakerunoutborder_revive";
    break;
  case 5:
    __s = "snakecreatemower_revive";
    break;
  case 6:
    __s = "rivercrossingdodoriderdiedout_revive";
    break;
  case 7:
    __s = "eliminate_revive";
    break;
  case 8:
    __s = "pooyan_revive";
    break;
  case 9:
    __s = "fishing_buysun";
    break;
  case 10:
    __s = "airship_revive";
    break;
  case 0xb:
    __s = "besiege_revive";
    break;
  default:
    goto LAB_043b73e0;
  }
  std::string::string((string *)local_10,__s);
  this_02 = ::operator_new(0x10);
  Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo(this_02,(string *)local_10,1,10);
  std::string::~string((string *)local_10);
  nop();
  MessageRouter::Post<EventMetrics*,int,EventMetrics*,int>
            ((MessageRouter *)gMessageRouter,Message::EventPurchase,(EventMetrics *)this_02,iVar1);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)this_02);
  AK::FreeHook(this_02);
LAB_043b73e0:
  this[0x100] = (ReviveUI)0x1;
  MessageRouter::Post((_func_void *)gMessageRouter);
  LawnApp::KillReviveUI(gLawnApp);
LAB_043b737c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ReviveUI::ButtonPress(int) */

void ReviveUI::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to ReviveUI::ButtonPress(int) */

void __thiscall ReviveUI::ButtonPress(ReviveUI *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* ReviveUI::ButtonDepress(int) */

void __thiscall ReviveUI::ButtonDepress(ReviveUI *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ReviveUI *pRVar3;
  
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Click_Release");
  if (param_1 == 1000) {
    this[0x100] = (ReviveUI)0x1;
    LawnApp::KillReviveUI(gLawnApp);
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  if (param_1 == 0x3e9) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if (this_01 != (PlayerInfo *)0x0) {
      iVar1 = PlayerInfo::GetNumGems(this_01,true);
      if (9 < iVar1) {
        iVar1 = 0;
        if (*(uint *)(this + 0xe0) < 0xd) {
          iVar1 = *(int *)(&DAT_057537b0 + (ulong)*(uint *)(this + 0xe0) * 4);
        }
        pRVar3 = ::operator_new(0x28);
        ICloudRequestCallbackFunction<ReviveUI,bool>::ICloudRequestCallbackFunction
                  (pRVar3,(_func_void_bool_ptr *)this);
        PlayerInfo::SubtractGems
                  (this_01,1,iVar1,(ICloudRequestCallbackFunctionBase *)pRVar3,1,false);
        return;
      }
      LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
      return;
    }
  }
  return;
}


/* non-virtual thunk to ReviveUI::ButtonDepress(int) */

void __thiscall ReviveUI::ButtonDepress(ReviveUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

