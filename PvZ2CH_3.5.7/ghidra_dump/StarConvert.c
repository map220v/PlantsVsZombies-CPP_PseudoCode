// Class: StarConvert


/* StarConvert::Update() */

void __thiscall StarConvert::Update(StarConvert *this)

{
  char cVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (this[0x115] == (StarConvert)0x0) {
    return;
  }
  fVar3 = (float)PVZ_RealT();
  if (fVar3 < *(float *)(this + 0x110)) {
    pcVar2 = *(code **)(*(long *)this + 0x318);
    if (pcVar2 != PopingWidget::HideAllButtonAndAnims) {
      (*pcVar2)(this);
    }
    fVar3 = (float)PVZ_RealT();
    fVar7 = *(float *)(this + 0xe4);
    fVar4 = *(float *)(this + 0xec);
    fVar6 = *(float *)(this + 0xe8);
    fVar5 = (fVar3 - *(float *)(this + 0x108)) / *(float *)(this + 0x10c);
    fVar3 = *(float *)(this + 0xf0);
    cVar1 = FUN_04a560c8(*(undefined4 *)(this + 0x118),0x1000);
    if (cVar1 != '\0') {
      fVar5 = SQRT(fVar5);
      *(float *)(this + 0x104) =
           *(float *)(this + 0xfc) +
           (*(float *)(this + 0x100) * 1.1 - *(float *)(this + 0xfc)) * fVar5;
    }
    *(float *)(this + 0xf4) = fVar7 + (fVar4 - fVar7) * fVar5;
    *(float *)(this + 0xf8) = fVar6 + (fVar3 - fVar6) * fVar5;
    return;
  }
  pcVar2 = *(code **)(*(long *)this + 800);
  if (pcVar2 != PopingWidget::RecoverAllButtonAndAnims) {
    (*pcVar2)(this);
  }
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(this + 0xec);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(this + 0xf0);
  cVar1 = FUN_04a560c8(*(undefined4 *)(this + 0x118),0x1000);
  if (cVar1 != '\0') {
    *(undefined4 *)(this + 0x104) = *(undefined4 *)(this + 0x100);
  }
  this[0x115] = (StarConvert)0x0;
  return;
}


/* StarConvert::ScrollTargetReached(Sexy::ScrollWidget*) */

void StarConvert::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to StarConvert::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall StarConvert::ScrollTargetReached(StarConvert *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x128));
  return;
}


/* StarConvert::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void StarConvert::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to StarConvert::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall StarConvert::ScrollTargetInterrupted(StarConvert *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x128));
  return;
}


/* StarConvert::HideAllButtonAndAnims() */

void __thiscall StarConvert::HideAllButtonAndAnims(StarConvert *this)

{
  (**(code **)(**(long **)(this + 400) + 0x188))(*(long **)(this + 400),1);
  (**(code **)(**(long **)(this + 400) + 0x158))(*(long **)(this + 400),0);
  (**(code **)(**(long **)(this + 0x1a8) + 0x158))(*(long **)(this + 0x1a8),0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvert::~StarConvert() */

void __thiscall StarConvert::~StarConvert(StarConvert *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_06938320;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06937fd0;
  *(undefined ***)(this + 0x128) = &PTR__StarConvert_06938368;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::string::~string((string *)(this + 0x1b8));
  FUN_05476c50(this + 0x188);
  FUN_05476c50(this + 0x180);
  PopingWidget::~PopingWidget((PopingWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to StarConvert::~StarConvert() */

void __thiscall StarConvert::~StarConvert(StarConvert *this)

{
  ~StarConvert(this + -0x128);
  return;
}


/* StarConvert::~StarConvert() */

void __thiscall StarConvert::~StarConvert(StarConvert *this)

{
  ~StarConvert(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to StarConvert::~StarConvert() */

void __thiscall StarConvert::~StarConvert(StarConvert *this)

{
  ~StarConvert(this + -0x128);
  return;
}


/* StarConvert::SetActivedObject(StarConvertObject*) */

void __thiscall StarConvert::SetActivedObject(StarConvert *this,StarConvertObject *param_1)

{
  *(StarConvertObject **)(this + 0x170) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvert::OnNotifyStarConvertBoxClosed() */

void __thiscall StarConvert::OnNotifyStarConvertBoxClosed(StarConvert *this)

{
  undefined8 uVar1;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1b0) != 0) {
    uVar1 = *(undefined8 *)(this + 400);
    std::string::string(asStack_20,"");
    Sexy::Insets::Insets(aIStack_18);
    GameMaskUI::ShowMask(uVar1,1,asStack_20,aIStack_18);
    std::string::~string(asStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarConvert::InitTutorial() */

void __thiscall StarConvert::InitTutorial(StarConvert *this)

{
  int iVar1;
  ProfileMgr *this_00;
  long lVar2;
  size_t in_x2;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_04a64bb0(*(undefined4 *)(lVar2 + 0x40));
  if (iVar1 == 7) {
    *(undefined4 *)(this + 0x1b0) = 7;
    std::string::append((string *)(this + 0x1b8),"torchwood",in_x2);
    return;
  }
  if (iVar1 == 0x16) {
    *(undefined4 *)(this + 0x1b0) = 0x16;
    std::string::append((string *)(this + 0x1b8),"6_slots",in_x2);
    return;
  }
  return;
}


/* StarConvert::FinishTutorial() */

void __thiscall StarConvert::FinishTutorial(StarConvert *this)

{
  WorldMap *this_00;
  ProfileMgr *this_01;
  PlayerInfo *pPVar1;
  
  this_00 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  if (this_00 != (WorldMap *)0x0) {
    WorldMap::ForceTutorialToFinish(this_00);
    *(undefined4 *)(this + 0x1b0) = 0;
    FUN_05474ff8(this + 0x1b8);
    LawnApp::KillGameMaskUI(gLawnApp);
    return;
  }
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  PlayerInfo::CompleteTutorial(pPVar1,*(undefined4 *)(this + 0x1b0));
  *(undefined4 *)(this + 0x1b0) = 0;
  FUN_05474ff8(this + 0x1b8);
  LawnApp::KillGameMaskUI(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvert::ShowInfoUI() */

void StarConvert::ShowInfoUI(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  PVZ2UIDialog *this;
  wchar16 *in_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  wchar16 *local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (___stack_chk_guard,in_x1,in_x2,in_x3,in_x4);
  if (cVar1 == '\0') {
    iVar2 = FUN_04a64e50(0x28a);
    iVar3 = FUN_04a64e50(0x118);
  }
  else {
    iVar2 = FUN_04a64e50(600);
    iVar3 = FUN_04a64e50(0x14a);
  }
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[STAR_CONVERT_INFO_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[STAR_CONVERT_INFO]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetFooterAlign(this,3);
  iVar2 = FUN_04a64e50(2);
  PVZ2UIDialog::SetFooterBottomPadding(this,iVar2);
  PVZ2UIDialog::SetBackgroundDarken(this,true,0.5);
  FUN_05478178(auStack_58,L"[OVERVIEW_CONFIRM]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarConvert::ButtonDepress(int) */

void __thiscall StarConvert::ButtonDepress(StarConvert *this,int param_1)

{
  if (param_1 == 0) {
    LawnApp::KillStarConvert(gLawnApp);
    if (*(int *)(this + 0x1b0) != 0) {
      FinishTutorial(this);
      return;
    }
  }
  else if (param_1 == 1) {
    ShowInfoUI();
    return;
  }
  return;
}


/* non-virtual thunk to StarConvert::ButtonDepress(int) */

void __thiscall StarConvert::ButtonDepress(StarConvert *this,int param_1)

{
  ButtonDepress(this + -0x120,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvert::CheckShowTutorial() */

void __thiscall StarConvert::CheckShowTutorial(StarConvert *this)

{
  int iVar1;
  char cVar2;
  CrazyNPCManager *pCVar3;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  iVar1 = *(int *)(this + 0x1b0);
  local_8 = ___stack_chk_guard;
  if (iVar1 != 0) {
    cVar2 = FUN_0547419c(this + 0x1b8);
    if (cVar2 == '\0') {
      if ((iVar1 == 0x16) &&
         (pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp),
         pCVar3 != (CrazyNPCManager *)0x0)) {
        std::string::string(asStack_60,"TUTORIAL_STAR1_INTRO");
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,onNarrationFinished);
        Sexy::Delegate0::Delegate0<StarConvert,void(StarConvert::*)()>(aDStack_38,aCStack_50);
        std::string::string(asStack_58,"");
        CrazyNPCManager::StartNarrativeID(pCVar3,asStack_60,aDStack_38,asStack_58);
        std::string::~string(asStack_58);
        nop();
        std::string::~string(asStack_60);
        nop();
      }
    }
    else {
      FinishTutorial(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarConvert::RecoverAllButtonAndAnims() */

void __thiscall StarConvert::RecoverAllButtonAndAnims(StarConvert *this)

{
  (**(code **)(**(long **)(this + 400) + 0x188))(*(long **)(this + 400),0);
  (**(code **)(**(long **)(this + 400) + 0x158))(*(long **)(this + 400),1);
  (**(code **)(**(long **)(this + 0x1a8) + 0x158))(*(long **)(this + 0x1a8),1);
  CheckShowTutorial(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvert::Draw(Sexy::Graphics*) */

void __thiscall StarConvert::Draw(StarConvert *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  Image *pIVar8;
  undefined1 auStack_40 [8];
  int local_38;
  int local_34;
  Color aCStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::GetMainRect();
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d4e8);
  PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,aIStack_18,uVar6);
  iVar2 = FUN_04a64e50(0x46);
  iVar3 = *(int *)(this + 0x140);
  iVar4 = *(int *)(this + 0x144);
  lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d670);
  iVar5 = *(int *)(lVar7 + 0x38);
  lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d670);
  Sexy::Insets::Insets((Insets *)&local_38,iVar2 + iVar3,iVar4,iVar5,*(int *)(lVar7 + 0x3c));
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d270);
  iVar3 = FUN_04a64e50(0x12);
  iVar4 = FUN_04a64e50(2);
  iVar5 = FUN_04a64e50(100);
  lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d670);
  iVar2 = FUN_04a64e50(8);
  Sexy::Insets::Insets
            (aIStack_18,local_38 + iVar3,local_34 + iVar4,iVar5,*(int *)(lVar7 + 0x3c) - iVar2);
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar6,aIStack_18);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d670);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_38);
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar6,aIStack_18);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d598);
  iVar4 = FUN_04a64e50(10);
  iVar3 = *(int *)(this + 0x164);
  iVar5 = FUN_04a64e50(0x14);
  PopingWidget::DrawPopingImage
            ((PopingWidget *)this,param_1,pIVar8,*(int *)(this + 0x160),iVar3 - iVar4,
             *(int *)(this + 0x168),iVar5 + *(int *)(this + 0x16c));
  cVar1 = FUN_04a64ba8(this[0x115]);
  if (cVar1 == '\0') {
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0x180,this + 0x130,uVar6,aIStack_18,5,1);
    TodStringTranslate(L"[STAR_CONVERT_TOTAL]");
    iVar4 = FUN_04a64e50(3);
    iVar3 = *(int *)(this + 0x144);
    iVar5 = FUN_04a64e50(0x46);
    Sexy::Insets::Insets
              (aIStack_18,*(int *)(this + 0x140),iVar4 + iVar3,iVar5,*(int *)(this + 0x14c));
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color(aCStack_28,0x42,0x25,0);
    WriteWordInRect(param_1,auStack_40,aIStack_18,uVar6,aCStack_28,5,1);
    FUN_05476c50(auStack_40);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0x188,this + 0x150,uVar6,aIStack_18,5,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvert::onNarrationFinished() */

void __thiscall StarConvert::onNarrationFinished(StarConvert *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = StarConvertScrollPanel::GetObjectByName
                    (*(StarConvertScrollPanel **)(this + 0x1a8),(string *)(this + 0x1b8));
  if ((lVar3 == 0) || (lVar3 = FUN_04a64bac(*(undefined8 *)(lVar3 + 0x120)), lVar3 == 0)) {
    FinishTutorial(this);
  }
  else {
    std::string::string(asStack_20,"[STAR_CONVERT_TUTORIAL_SLOT]");
    Sexy::Insets::Insets(aIStack_18);
    lVar3 = GameMaskUI::ShowMask(lVar3,2,asStack_20,aIStack_18);
    std::string::~string(asStack_20);
    nop();
    if (lVar3 != 0) {
      uVar1 = 0xfffffeac;
      if (*(int *)(this + 0x1b0) != 7) {
        uVar1 = 0xffffff6a;
      }
      uVar1 = FUN_04a64e50(uVar1);
      uVar2 = FUN_04a64e50(0x96);
      FUN_04a64d10(lVar3 + 0x114,uVar1,uVar2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarConvert::OnNotifyStarConverted(bool) */

void __thiscall StarConvert::OnNotifyStarConverted(StarConvert *this,bool param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (!param_1) {
    return;
  }
  iVar1 = *(int *)(this + 0x1b0);
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 == 7) {
    uVar2 = 0xf;
  }
  else {
    if (iVar1 != 0x16) goto LAB_04a6790c;
    uVar2 = 9;
  }
  MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
            ((MessageRouter *)gMessageRouter,Message::Toturi,0,uVar2);
LAB_04a6790c:
  FUN_05474ff8(this + 0x1b8);
  LawnApp::KillGameMaskUI(gLawnApp);
  return;
}


/* StarConvert::KillConvertBox() */

void __thiscall StarConvert::KillConvertBox(StarConvert *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x178) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))
              ((long *)gLawnApp[0x6c],*(undefined8 *)(this + 0x178));
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x178));
    *(undefined8 *)(this + 0x178) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvert::ShowConvertBox(ConvertObject, std::wstring, int) */

void __thiscall
StarConvert::ShowConvertBox
          (StarConvert *this,ConvertObject *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  long lVar3;
  StarConvertBox *pSVar4;
  undefined8 uVar5;
  undefined1 auStack_38 [8];
  ConvertObject aCStack_30 [40];
  long local_8;
  
  pSVar4 = *(StarConvertBox **)(this + 0x178);
  local_8 = ___stack_chk_guard;
  if (pSVar4 == (StarConvertBox *)0x0) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Store_Open");
    pSVar4 = ::operator_new(0x288);
    StarConvertBox::StarConvertBox(pSVar4);
    *(StarConvertBox **)(this + 0x178) = pSVar4;
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360));
    pSVar4 = *(StarConvertBox **)(this + 0x178);
    uVar5 = 0;
    if (pSVar4 == (StarConvertBox *)0x0) goto LAB_04a68fb8;
  }
  ConvertObject::ConvertObject(aCStack_30,param_2);
  FUN_05477b24(auStack_38,param_3);
  StarConvertBox::InitBox(pSVar4,aCStack_30,auStack_38,param_4);
  FUN_05476c50(auStack_38);
  ConvertObject::~ConvertObject(aCStack_30);
  uVar5 = *(undefined8 *)(this + 0x178);
LAB_04a68fb8:
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))(*(long **)(gLawnApp + 0x360),uVar5);
  LawnApp::PushOverlaysToTop(gLawnApp);
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal
            (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x178));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x178));
  MessageRouter::Post<std::string_const&,char_const*>
            ((MessageRouter *)gMessageRouter,Message::OpenUI,"StarConvertBox");
  lVar3 = *(long *)(this + 0x178);
  if (lVar3 != 0) {
    uVar5 = operator|(0x10,0x20);
    uVar5 = operator|(uVar5,0x1000);
    uVar1 = operator|(uVar5,0x2000);
    PopingWidget::NormalInit((PopingWidget *)0x3e99999a,lVar3,uVar1);
    (**(code **)(**(long **)(this + 0x178) + 0x310))(*(long **)(this + 0x178));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvert::InitView() */

void __thiscall StarConvert::InitView(StarConvert *this)

{
  TRect *pTVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  LotteryResultProgressBar *pLVar15;
  SalesProgressBar *pSVar16;
  ProfileMgr *this_00;
  long lVar17;
  ulong uVar18;
  PVZ2UIButton *pPVar19;
  PVZ2UIScrollingWidget *this_01;
  StarConvertScrollPanel *this_02;
  long *plVar20;
  code *pcVar21;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pTVar1 = (TRect *)(this + 0x160);
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)((long)gLawnApp + 0xd4),(int)gLawnApp[0x1b]);
  iVar4 = FUN_04a64e50(700);
  iVar5 = FUN_04a64e50(0x208);
  iVar3 = *(int *)(this + 0x54);
  iVar14 = *(int *)(this + 0x50) - iVar4 >> 1;
  iVar6 = FUN_04a64e50(0x28);
  iVar2 = (iVar3 - iVar5) + iVar6 >> 1;
  this[0x59] = (StarConvert)0x0;
  iVar3 = iVar14 + iVar4 / 2;
  Sexy::Insets::Insets((Insets *)&local_40,iVar14,iVar2,iVar4,iVar5);
  PopingWidget::SetMainRect((PopingWidget *)this,(Insets *)&local_40);
  iVar6 = FUN_04a64e50(0x87);
  iVar7 = FUN_04a64e50(0xe);
  iVar8 = FUN_04a64e50(0x28);
  Sexy::Insets::Insets((Insets *)&local_40,iVar3 - iVar6 / 2,iVar7 + iVar2,iVar6,iVar8);
  *(undefined8 *)(this + 0x130) = local_40;
  *(undefined8 *)(this + 0x138) = uStack_38;
  iVar7 = FUN_04a64e50(0x14);
  iVar6 = FUN_04a64e50(0x3f);
  iVar6 = iVar6 + iVar2;
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d510);
  iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d510);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar16);
  Sexy::Insets::Insets((Insets *)&local_40,iVar7 + iVar14,iVar6,iVar8,iVar9);
  *(undefined8 *)(this + 0x140) = local_40;
  *(undefined8 *)(this + 0x148) = uStack_38;
  iVar8 = FUN_04a64e50(0x50);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d510);
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d510);
  iVar11 = SalesProgressBar::GetCurrentLevel(pSVar16);
  Sexy::Insets::Insets((Insets *)&local_40,iVar8 + iVar7 + iVar14,iVar6,iVar10 - iVar8,iVar11);
  *(undefined8 *)(this + 0x150) = local_40;
  *(undefined8 *)(this + 0x158) = uStack_38;
  iVar8 = FUN_04a64e50(0x14);
  iVar7 = FUN_04a64e50(0xf);
  iVar7 = iVar6 + iVar9 + iVar7;
  iVar6 = FUN_04a64e50(10);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar8 + iVar14,iVar7,iVar4 + iVar8 * -2,
             (iVar2 + iVar5 + iVar6 * -3) - iVar7);
  *(undefined8 *)pTVar1 = local_40;
  *(undefined8 *)(this + 0x168) = uStack_38;
  TodStringTranslate(L"[STAR_CONVERT_TITLE]");
  FUN_054766c8(this + 0x180,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  FUN_054772c4(this + 0x188,&DAT_056f11a8);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar17 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar17 != 0) {
    uVar18 = PlayerInfo::GetNumStars((int)lVar17);
    Sexy::StrFormat(L"%d",(Insets *)&local_40,uVar18 & 0xffffffff);
    FUN_054766c8(this + 0x188,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
  }
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar19 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar19,1,(ButtonListener *)(this + 0x120),awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x198) = pPVar19;
  FUN_05476c50(awStack_78);
  nop();
  pPVar19 = *(PVZ2UIButton **)(this + 0x198);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b7d2f0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b7d2f0,3);
  PVZ2UIButton::SetDialogStates(pPVar19,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  plVar20 = *(long **)(this + 0x198);
  pcVar21 = *(code **)(*plVar20 + 0x198);
  iVar6 = FUN_04a64e50(10);
  iVar7 = FUN_04a64e50(0xd);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d2f0);
  uVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d2f0);
  uVar13 = SalesProgressBar::GetCurrentLevel(pSVar16);
  (*pcVar21)(plVar20,iVar6 + iVar14,iVar7 + iVar2,uVar12,uVar13);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x198));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar19 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar19,0,(ButtonListener *)(this + 0x120),awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 400) = pPVar19;
  FUN_05476c50(awStack_78);
  nop();
  pPVar19 = *(PVZ2UIButton **)(this + 400);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b7d570,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b7d318,3);
  PVZ2UIButton::SetDialogStates(pPVar19,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  plVar20 = *(long **)(this + 400);
  pcVar21 = *(code **)(*plVar20 + 0x198);
  iVar6 = FUN_04a64e50(0x139);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d570);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar16);
  iVar14 = FUN_04a64e50(0x27);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d570);
  uVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d570);
  uVar13 = SalesProgressBar::GetCurrentLevel(pSVar16);
  (*pcVar21)(plVar20,iVar6 + iVar3,(iVar2 - iVar7) + iVar14,uVar12,uVar13);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 400));
  if (*(long *)(this + 0x1a0) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x1a0));
    *(undefined8 *)(this + 0x1a0) = 0;
  }
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0x128));
  lVar17 = *(long *)this_01;
  *(PVZ2UIScrollingWidget **)(this + 0x1a0) = this_01;
  (**(code **)(lVar17 + 0x1a0))(this_01,pTVar1);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x1a0),2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1a0));
  this_02 = ::operator_new(0x118);
  StarConvertScrollPanel::StarConvertScrollPanel(this_02,pTVar1);
  *(StarConvertScrollPanel **)(this + 0x1a8) = this_02;
  (**(code **)(**(long **)(this + 0x1a0) + 0x60))(*(long **)(this + 0x1a0),this_02);
  (**(code **)(*(long *)this + 0x318))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvert::StarConvert() */

void __thiscall StarConvert::StarConvert(StarConvert *this)

{
  undefined *puVar1;
  LawnApp *this_00;
  PrimeText *this_01;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  CBMemberTranslatorX aCStack_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::PopingWidget((PopingWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x120));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x128));
  *(undefined ***)this = &PTR_GetClass_06937fd0;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_06938320;
  *(undefined ***)(this + 0x128) = &PTR__StarConvert_06938368;
  Sexy::Insets::Insets((Insets *)(this + 0x130));
  Sexy::Insets::Insets((Insets *)(this + 0x140));
  Sexy::Insets::Insets((Insets *)(this + 0x150));
  Sexy::Insets::Insets((Insets *)(this + 0x160));
  FUN_05476574(this + 0x180);
  FUN_05476574(this + 0x188);
  *(undefined4 *)(this + 0x1b0) = 0;
  Set8BytesTo0(this + 0x1b8);
  this_01 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_01);
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  this_00 = gLawnApp;
  std::string::string((string *)&local_50,"UI_LevelUp");
  LawnApp::LoadGroup(this_00,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  InitView(this);
  InitTutorial(this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnComposePlant);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<StarConvert,void(StarConvert::*)(bool)>>
            ((MessageRouter *)puVar1,Message::ComposePlant,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyStarConverted);
  local_a0 = local_50;
  uStack_98 = uStack_48;
  local_90 = local_40;
  MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<StarConvert,void(StarConvert::*)(bool)>>
            ((MessageRouter *)puVar1,Message::NotifyStarConverted,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyStarConvertBoxClosed);
  Sexy::Delegate0::Delegate0<StarConvert,void(StarConvert::*)()>(aDStack_38,aCStack_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyStarConvertBoxClosed,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarConvert::OnComposePlant(bool) */

void __thiscall StarConvert::OnComposePlant(StarConvert *this,bool param_1)

{
  if (*(StarConvertObject **)(this + 0x170) != (StarConvertObject *)0x0) {
    StarConvertObject::OnStarConverted(*(StarConvertObject **)(this + 0x170),param_1);
    return;
  }
  return;
}

