// Class: PVZ2UIAwardScreen


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::onNarrationFinished() */

void __thiscall PVZ2UIAwardScreen::onNarrationFinished(PVZ2UIAwardScreen *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  PrimeText_PotentialText *pPVar7;
  PrimeTextWidget *this_00;
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_HardShadow);
  iVar4 = FUN_043685b8(0x3c);
  iVar1 = *(int *)(this + 0x54);
  iVar2 = *(int *)(this + 0x50);
  iVar5 = FUN_043685b8(0x28);
  TodStringTranslate(L"[CLICK_TO_CONTINUE]");
  Sexy::Color::Color(aCStack_18,1);
  pPVar7 = (PrimeText_PotentialText *)
           Sexy::BuildPotentialText_Paragraph
                     (0,(float)(iVar1 - iVar4),(float)iVar2,(float)iVar5,uVar6,auStack_20,1,1,
                      aCStack_18);
  this_00 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(this_00,pPVar7);
  *(PrimeTextWidget **)(this + 0x168) = this_00;
  FUN_05476c50(auStack_20);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x168));
  lVar3 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x160) = 3;
  if (local_8 == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIAwardScreen::ShowAwardScreen() */

void __thiscall PVZ2UIAwardScreen::ShowAwardScreen(PVZ2UIAwardScreen *this)

{
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),this);
  LawnApp::PushOverlaysToTop(gLawnApp);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))(*(long **)(gLawnApp + 0x360),this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::deleteBackgroundGroups() */

void __thiscall PVZ2UIAwardScreen::deleteBackgroundGroups(PVZ2UIAwardScreen *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x138) == 2) {
    std::string::string(asStack_10,"Grass_Transition");
    LawnApp::DeleteGroup(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  *(undefined4 *)(this + 0x138) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::loadBackgroundGroups() */

void __thiscall PVZ2UIAwardScreen::loadBackgroundGroups(PVZ2UIAwardScreen *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x138) == 2) {
    std::string::string(asStack_10,"Grass_Transition");
    LawnApp::LoadGroup(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIAwardScreen::SetBackgroundType(AwardScreenBackgroundType) */

void __thiscall PVZ2UIAwardScreen::SetBackgroundType(PVZ2UIAwardScreen *this,undefined4 param_2)

{
  deleteBackgroundGroups(this);
  *(undefined4 *)(this + 0x138) = param_2;
  loadBackgroundGroups(this);
  return;
}


/* PVZ2UIAwardScreen::SetHeadlineColor(Sexy::Color) */

void __thiscall PVZ2UIAwardScreen::SetHeadlineColor(PVZ2UIAwardScreen *this,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(this + 0x17c) = *param_2;
  *(undefined8 *)(this + 0x184) = uVar1;
  return;
}


/* PVZ2UIAwardScreen::GetScreenCount() const */

void __thiscall PVZ2UIAwardScreen::GetScreenCount(PVZ2UIAwardScreen *this)

{
  FUN_043683a0(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148));
  return;
}


/* PVZ2UIAwardScreen::GetReplayDesired() const */

PVZ2UIAwardScreen __thiscall PVZ2UIAwardScreen::GetReplayDesired(PVZ2UIAwardScreen *this)

{
  return this[0x136];
}


/* PVZ2UIAwardScreen::removeCurrentScreen() */

void __thiscall PVZ2UIAwardScreen::removeCurrentScreen(PVZ2UIAwardScreen *this)

{
  FUN_054772c4(this + 0xf8,&DAT_056f11a8);
  (**(code **)(*(long *)this + 0x68))(this,*(undefined8 *)(this + 0xf0));
  if (*(long **)(this + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf0) + 0x18))();
  }
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 400) = 0;
  return;
}


/* PVZ2UIAwardScreen::addLeafHint() */

void __thiscall PVZ2UIAwardScreen::addLeafHint(PVZ2UIAwardScreen *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 400);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    *(undefined8 *)(this + 400) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::refreshDialogToShareState() */

void __thiscall PVZ2UIAwardScreen::refreshDialogToShareState(PVZ2UIAwardScreen *this)

{
  ulong uVar1;
  Mutex *this_00;
  PVZ2UIDialog *pPVar2;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_043683a0(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148));
  if ((ulong)(long)*(int *)(this + 0x158) < uVar1) {
    PVZ2UIDialog::ClearButtons(*(PVZ2UIDialog **)(this + 0xf0));
    this_00 = (Mutex *)Sexy::LazySingleton<SocialMgr>::GetInstance();
    EA::Thread::Mutex::GetLockCount(this_00);
    pPVar2 = *(PVZ2UIDialog **)(this + 0xf0);
    FUN_05478178(auStack_10,L"[BACK_TO_MAP]",auStack_18);
    PVZ2UIDialog::AddButton(pPVar2,1000,auStack_10,this + 0xd8,1);
    FUN_05476c50(auStack_10);
    nop();
    (**(code **)(**(long **)(this + 0xf0) + 0x310))(*(long **)(this + 0xf0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::StartNoteConversation() */

void __thiscall PVZ2UIAwardScreen::StartNoteConversation(PVZ2UIAwardScreen *this)

{
  long lVar1;
  long extraout_x0;
  CrazyNPCManager *pCVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_043683dc(*(undefined8 *)(this + 0x140),(long)*(int *)(this + 0x158));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_60,(RtWeakPtrBase *)(lVar1 + 0x108));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  nop();
  *(undefined4 *)(this + 0x160) = 2;
  pCVar2 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<PVZ2UIAwardScreen,void(PVZ2UIAwardScreen::*)()>(aDStack_38,aCStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar2,extraout_x0 + 0xa8,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIAwardScreen::MouseUp(int, int) */

void PVZ2UIAwardScreen::MouseUp(int param_1,int param_2)

{
  PVZ2UIAwardScreen *this;
  
  this = (PVZ2UIAwardScreen *)(ulong)(uint)param_1;
  if (*(int *)(this + 0xe0) == 3) {
    if (*(int *)(this + 0x160) == 1) {
      StartNoteConversation(this);
      return;
    }
    if (*(int *)(this + 0x160) == 3) {
      (**(code **)(*(long *)this + 0x68))(this,*(undefined8 *)(this + 0x168));
      *(undefined4 *)(this + 0x160) = 4;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::PVZ2UIAwardScreen() */

void __thiscall PVZ2UIAwardScreen::PVZ2UIAwardScreen(PVZ2UIAwardScreen *this)

{
  LawnApp *pLVar1;
  char cVar2;
  undefined4 extraout_w0;
  PrimeText *this_00;
  wchar16 *extraout_x1;
  undefined **ppuVar3;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined4 uVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  ppuVar3 = &PTR_GetClass_068357d0;
  *(undefined ***)this = &PTR_GetClass_068357d0;
  *(undefined **)(this + 0xd8) = &DAT_06835b00;
  FUN_05476574(this + 0xf8);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x100),(DummyInit *)0x0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  TutorialCard::TutorialCard((TutorialCard *)(this + 0x170));
  Sexy::Color::Color((Color *)(this + 0x17c));
  nop();
  *(undefined4 *)(this + 0x198) = extraout_w0;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  if (DAT_06afd148 == (undefined *)0x0) {
    cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      ((wchar16 *)0x0,extraout_x1,(LineBreakCategory *)ppuVar3,in_x3,in_x4);
    if (cVar2 == '\0') {
      DAT_06afd148 = &DAT_06afd1a0;
    }
    else {
      DAT_06afd148 = &DAT_06afd1b0;
    }
  }
  Sexy::Widget::Resize((Widget *)this,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  uVar4 = PVZ_RealT();
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined4 *)(this + 0xe4) = uVar4;
  *(undefined4 *)(this + 0x158) = 0xffffffff;
  this[0x134] = (PVZ2UIAwardScreen)0x0;
  this[0x136] = (PVZ2UIAwardScreen)0x0;
  *(undefined4 *)(this + 0x138) = 0;
  this[0x13c] = (PVZ2UIAwardScreen)0x0;
  *(undefined4 *)(this + 0x130) = 0;
  Sexy::Color::Color((Color *)&local_18,1);
  pLVar1 = gLawnApp;
  *(undefined8 *)(this + 0x17c) = local_18;
  *(undefined8 *)(this + 0x184) = uStack_10;
  cVar2 = LawnApp::HasPlayerUnlockedFeature(pLVar1,6);
  if (cVar2 == '\0') {
    SetBackgroundType(this,2);
  }
  else {
    SetBackgroundType(this,3);
  }
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 400) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::Draw(Sexy::Graphics*) */

void __thiscall PVZ2UIAwardScreen::Draw(PVZ2UIAwardScreen *this,Graphics *param_1)

{
  long lVar1;
  long extraout_x0;
  ResourceInfo *pRVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  GraphicsAutoState aGStack_38 [8];
  float local_30;
  float local_2c;
  Color local_28 [8];
  undefined4 uStack_20;
  int local_1c;
  Insets local_18 [8];
  undefined4 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  if (*(int *)(this + 0x138) != 0) {
    Sexy::Color::Color(local_28,1);
    iVar4 = *(int *)(this + 0x138);
    if (iVar4 == 1) {
      Sexy::Color::Color((Color *)local_18,0);
      uStack_20 = uStack_10;
      iVar4 = *(int *)(this + 0x138);
      fVar5 = 128.0;
    }
    else {
      fVar5 = 255.0;
    }
    fVar6 = *(float *)(this + 0xe8);
    _uStack_20 = CONCAT44((int)(fVar5 * fVar6),uStack_20);
    if (iVar4 == 3) {
      Sexy::Insets::Insets(local_18,0,0,0,0);
      DrawSpaceSpiral(param_1,(int)(fVar5 * fVar6),local_18);
    }
    else if (iVar4 == 2) {
      Sexy::Graphics::PushState(param_1);
      Sexy::Graphics::SetLinearBlend(param_1,true);
      Sexy::Graphics::SetDrawMode(param_1,0);
      Sexy::Graphics::SetColorizeImages(param_1,true);
      Sexy::Graphics::SetColor(param_1,local_28);
      Sexy::Insets::Insets(local_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      uVar3 = CachedResourcePtr<Sexy::Image>::operator->
                        ((CachedResourcePtr<Sexy::Image> *)&DAT_06afd0b0);
      DrawImageTiled(0x3f800000,param_1,local_18,uVar3);
      Sexy::Graphics::PopState(param_1);
    }
    else if (iVar4 == 1) {
      Sexy::Graphics::SetColor(param_1,local_28);
      Sexy::Graphics::FillRect(param_1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    }
  }
  iVar4 = *(int *)(this + 0xe0);
  if (iVar4 == 2) {
    Sexy::Widget::DeferOverlay((Widget *)this,1);
    iVar4 = *(int *)(this + 0xe0);
  }
  if (iVar4 == 3) {
    Sexy::Color::Color((Color *)local_18,1);
    Sexy::Graphics::SetColor(param_1,(Color *)local_18);
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_30);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Insets::Insets(local_18,0xff,0xff,0xff,(int)(*(float *)(this + 0x130) * 255.0));
    Sexy::Graphics::SetColor(param_1,(Color *)local_18);
    lVar1 = FUN_043683dc(*(undefined8 *)(this + 0x140),(long)*(int *)(this + 0x158));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_28,(RtWeakPtrBase *)(lVar1 + 0x108));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
    nop();
    lVar1 = FUN_05474184((string *)(extraout_x0 + 0xa0));
    if (lVar1 != 0) {
      GetImageByName((string *)(extraout_x0 + 0xa0));
      pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_18);
      local_30 = (float)((*(int *)(gLawnApp + 0x724) - *(int *)(pRVar2 + 0x38)) / 2);
      local_2c = (float)((*(int *)(gLawnApp + 0x728) - *(int *)(pRVar2 + 0x3c)) / 2);
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar2,(int)local_30,(int)local_2c);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::setupScreen(PVZ2UIAwardScreen::ScreenEntry const&) */

void __thiscall PVZ2UIAwardScreen::setupScreen(PVZ2UIAwardScreen *this,ScreenEntry *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  PVZ2UIDialog *pPVar7;
  PrimeTypeface *pPVar8;
  ulong uVar9;
  wchar16 *pwVar10;
  PVZ2UIStarSummary *this_00;
  long lVar11;
  ProfileMgr *this_01;
  PVZ2UIRewardObjectDisplayer *this_02;
  PVZ2UIPresentOpener *this_03;
  RtWeakPtrBase *pRVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  wstring *extraout_x1;
  int iVar16;
  LineBreakCategory *pLVar17;
  size_t __n;
  LineBreakCategory *pLVar18;
  PVZ2UIAwardScreen *pPVar19;
  long *plVar20;
  undefined1 auVar21 [16];
  wstring awStack_28 [8];
  string asStack_20 [8];
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05477b9c((Sexy *)(this + 0xf8),param_1 + 8);
  if (*(int *)param_1 == 5) {
    setState(this,3);
    *(undefined4 *)(this + 0x160) = 0;
    goto LAB_043697b4;
  }
  pPVar7 = ::operator_new(0x1e8);
  PVZ2UIDialog::PVZ2UIDialog(pPVar7);
  iVar4 = *(int *)(param_1 + 0x110);
  *(PVZ2UIDialog **)(this + 0xf0) = pPVar7;
  if (iVar4 == -1) {
    iVar4 = *DAT_06afd148;
  }
  iVar16 = *(int *)(param_1 + 0x114);
  if (iVar16 == -1) {
    iVar16 = DAT_06afd148[1];
  }
  iVar5 = *(int *)(param_1 + 0x118);
  if (iVar5 == -1) {
    iVar5 = DAT_06afd148[2];
  }
  *(int *)(this + 0x170) = iVar4;
  *(int *)(this + 0x178) = iVar5;
  *(int *)(this + 0x174) = iVar16;
  PVZ2UIDialog::SetHeaderLabel(pPVar7,(wstring *)(param_1 + 0x10));
  PVZ2UIDialog::SetFooterLabel(*(PVZ2UIDialog **)(this + 0xf0),(wstring *)(param_1 + 0x18));
  pPVar7 = *(PVZ2UIDialog **)(this + 0xf0);
  pPVar8 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  PVZ2UIDialog::SetHeaderFont(pPVar7,pPVar8,(Color *)&PrimeText_Game::Color_Generic_Title);
  std::vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>>::back
            ((vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>>
              *)(this + 0x140));
  if (*(int *)param_1 == 4) {
switchD_04369748_caseD_4:
    pPVar7 = *(PVZ2UIDialog **)(this + 0xf0);
    FUN_05478178(asStack_10,&DAT_056f11a8,(Sexy *)aLStack_18);
    PVZ2UIDialog::SetHeaderLabel(pPVar7,(wstring *)asStack_10);
    FUN_05476c50(asStack_10);
    nop();
    pPVar7 = *(PVZ2UIDialog **)(this + 0xf0);
    FUN_05478178(asStack_10,&DAT_056f11a8,(Sexy *)aLStack_18);
    PVZ2UIDialog::SetFooterLabel(pPVar7,(wstring *)asStack_10);
    FUN_05476c50(asStack_10);
    nop();
    plVar20 = *(long **)(this + 0xf0);
    iVar4 = FUN_043685b8((int)((double)iVar4 * 0.85));
    iVar5 = FUN_043685b8(iVar16 - iVar5);
    uVar6 = FUN_043685b8((int)((double)(int)((double)iVar16 * 0.85) * 0.85));
    __n = (size_t)(uint)((*(int *)(this + 0x54) - iVar5) / 2);
    (**(code **)(*plVar20 + 0x198))(plVar20,(*(int *)(this + 0x50) - iVar4) / 2,__n,iVar4,uVar6);
    this_00 = ::operator_new(0x140);
    PVZ2UIStarSummary::PVZ2UIStarSummary(this_00,param_1);
    PVZ2UIDialog::SetContents(*(PVZ2UIDialog **)(this + 0xf0),(Widget *)this_00);
    if (*(int *)(param_1 + 0x78) != 3) {
      if (*(int *)(param_1 + 0x78) == 0) {
        pPVar7 = *(PVZ2UIDialog **)(this + 0xf0);
        FUN_05478178(asStack_10,L"[BACK_TO_MAP]",(Sexy *)aLStack_18);
        PVZ2UIDialog::AddButton(pPVar7,1000,asStack_10,this + 0xd8,1);
        FUN_05476c50(asStack_10);
        nop();
        pPVar7 = *(PVZ2UIDialog **)(this + 0xf0);
        FUN_05478178(asStack_10,&DAT_056f94c0,(Sexy *)aLStack_18);
      }
      else {
        lVar11 = Sexy::LazySingleton<SocialMgr>::GetInstance();
        TodStringTranslate(L"[SHARE_GET_STAR]");
        Sexy::WStringToUTF8String((Sexy *)aLStack_18,extraout_x1);
        FUN_05474278(lVar11 + 8,asStack_10);
        std::string::~string(asStack_10);
        FUN_05476c50((Sexy *)aLStack_18);
        auVar21 = Sexy::LazySingleton<SocialMgr>::GetInstance();
        Sexy::WStringToUTF8String((Sexy *)(this + 0xf8),auVar21._8_8_);
        FUN_05474278(auVar21._0_8_ + 0x10,asStack_10);
        std::string::~string(asStack_10);
        lVar11 = Sexy::LazySingleton<SocialMgr>::GetInstance();
        std::string::append((string *)(lVar11 + 0x18),"http://www.qq.com",__n);
        lVar11 = Sexy::LazySingleton<SocialMgr>::GetInstance();
        std::string::append((string *)(lVar11 + 0x20),
                            "http://mat1.gtimg.com/www/images/qq2012/qqlogo_1x.png",__n);
        this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        ProfileMgr::GetCurrentProfile(this_01);
        if (*(int *)(param_1 + 0x70) <= *(int *)(param_1 + 0x74) + 1) goto LAB_0436a094;
        pPVar7 = *(PVZ2UIDialog **)(this + 0xf0);
        FUN_05478178(asStack_10,L"[BACK_TO_MAP]",(Sexy *)aLStack_18);
        PVZ2UIDialog::AddButton(pPVar7,1000,asStack_10,this + 0xd8,1);
        FUN_05476c50(asStack_10);
        nop();
        pPVar7 = *(PVZ2UIDialog **)(this + 0xf0);
        FUN_05478178(asStack_10,L"[NEXT_STAR_BUTTON]",(Sexy *)aLStack_18);
      }
      pLVar18 = (LineBreakCategory *)0x0;
      pPVar19 = this + 0xd8;
      PVZ2UIDialog::AddButton(pPVar7,0x3ea,asStack_10);
      FUN_05476c50(asStack_10);
      nop();
      addLeafHint(this);
      goto LAB_04369754;
    }
LAB_0436a094:
    pPVar7 = *(PVZ2UIDialog **)(this + 0xf0);
    goto LAB_04369b48;
  }
  plVar20 = *(long **)(this + 0xf0);
  uVar2 = FUN_043685b8((int)((double)iVar4 * 0.85));
  pPVar19 = (PVZ2UIAwardScreen *)(ulong)uVar2;
  iVar3 = FUN_043685b8(iVar16 - iVar5);
  uVar9 = FUN_043685b8((int)((double)iVar16 * 0.85));
  pLVar18 = (LineBreakCategory *)(uVar9 & 0xffffffff);
  (**(code **)(*plVar20 + 0x198))
            (plVar20,(int)(*(int *)(this + 0x50) - uVar2) / 2,(*(int *)(this + 0x54) - iVar3) / 2);
  switch(*(undefined4 *)param_1) {
  case 0:
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)(param_1 + 0x20));
    this_02 = ::operator_new(0x110);
    PVZ2UIRewardObjectDisplayer::PVZ2UIRewardObjectDisplayer
              (this_02,(RtWeakPtr<Sexy::SoundResource> *)asStack_10,0,0,0xffffffff,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    goto LAB_04369efc;
  case 1:
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)(param_1 + 0x28));
    this_02 = ::operator_new(0x110);
    PVZ2UIRewardObjectDisplayer::PVZ2UIRewardObjectDisplayer
              (this_02,(RtWeakPtr<Sexy::SoundResource> *)asStack_10,0,0,0xffffffff,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    if (0 < *(int *)(this + 0x15c)) {
      TodStringTranslate(L"[GET_ACCESSORY_PIECE]");
      std::string::string(asStack_20,"X10");
      Sexy::ToWString(asStack_20);
      std::operator+(awStack_28,(wstring *)aLStack_18);
      PuzzleTip::SetTip(this_02,(RtWeakPtr<Sexy::SoundResource> *)asStack_10);
      FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)asStack_10);
      FUN_05476c50((wstring *)aLStack_18);
      std::string::~string(asStack_20);
      nop();
      FUN_05476c50(awStack_28);
    }
LAB_04369efc:
    FUN_05478178(asStack_10,&DAT_056f11a8,aLStack_18);
    PVZ2UISeedChooserPreviewDisplay::SetDescriptionText((wstring *)this_02);
    FUN_05476c50(asStack_10);
    nop();
    break;
  case 2:
    this_02 = ::operator_new(0xe0);
    PVZ2UIStrechAndCenterImage::PVZ2UIStrechAndCenterImage((PVZ2UIStrechAndCenterImage *)this_02);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)(param_1 + 0x30));
    ArenaZombieWidget::SetZombieSeedType
              ((ArenaZombieWidget *)this_02,(RtWeakPtr<Sexy::SoundResource> *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    break;
  case 3:
    this_03 = ::operator_new(0xf0);
    PVZ2UIPresentOpener::PVZ2UIPresentOpener(this_03);
    if (param_1[0x38] == (ScreenEntry)0x0) {
      uVar9 = 0;
      while( true ) {
        uVar14 = *(undefined8 *)(param_1 + 0x58);
        uVar13 = FUN_04368380(uVar14,*(undefined8 *)(param_1 + 0x60));
        if (uVar13 <= uVar9) break;
        pRVar12 = (RtWeakPtrBase *)FUN_043683d4(uVar14,uVar9);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,pRVar12);
        PVZ2UIPresentOpener::AddPresent(this_03,(RtWeakPtr<Sexy::SoundResource> *)asStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
        uVar9 = uVar9 + 1;
      }
    }
    else {
      uVar9 = 0;
      while( true ) {
        uVar14 = *(undefined8 *)(param_1 + 0x40);
        uVar13 = FUN_043683c0(uVar14,*(undefined8 *)(param_1 + 0x48));
        if (uVar13 <= uVar9) break;
        pRVar12 = (RtWeakPtrBase *)FUN_043683cc(uVar14,uVar9);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aLStack_18,pRVar12);
        pRVar12 = (RtWeakPtrBase *)FUN_043683d4(*(undefined8 *)(param_1 + 0x58),uVar9);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,pRVar12);
        PVZ2UIPresentOpener::AddPresent
                  (this_03,(RtWeakPtr<Sexy::SoundResource> *)aLStack_18,
                   (RtWeakPtr<Sexy::SoundResource> *)asStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aLStack_18)
        ;
        uVar9 = uVar9 + 1;
      }
    }
    PVZ2UIDialog::SetContents(*(PVZ2UIDialog **)(this + 0xf0),(Widget *)this_03);
    pPVar7 = *(PVZ2UIDialog **)(this + 0xf0);
    FUN_05478178(asStack_10,L"[OPEN_ALL_PRESENTS_BUTTON]",aLStack_18);
    pPVar19 = this + 0xd8;
    pLVar18 = (LineBreakCategory *)0x0;
    PVZ2UIDialog::AddButton(pPVar7,0x3e9,asStack_10);
    FUN_05476c50(asStack_10);
    nop();
    this[0x135] = (PVZ2UIAwardScreen)0x0;
    goto LAB_04369754;
  case 4:
    goto switchD_04369748_caseD_4;
  default:
    goto LAB_04369754;
  case 6:
  case 9:
  case 10:
    pPVar7 = *(PVZ2UIDialog **)(this + 0xf0);
    FUN_05478178((wstring *)asStack_10,&DAT_056f11a8,aLStack_18);
    PVZ2UIDialog::SetHeaderLabel(pPVar7,(wstring *)asStack_10);
    FUN_05476c50((wstring *)asStack_10);
    nop();
    pPVar7 = *(PVZ2UIDialog **)(this + 0xf0);
    FUN_05478178((wstring *)asStack_10,&DAT_056f11a8,aLStack_18);
    PVZ2UIDialog::SetFooterLabel(pPVar7,(wstring *)asStack_10);
    FUN_05476c50((wstring *)asStack_10);
    nop();
    plVar20 = *(long **)(this + 0xf0);
    (**(code **)(*plVar20 + 0x198))
              (plVar20,(*(int *)(gLawnApp + 0x724) - (int)plVar20[10]) / 2,
               (*(int *)(gLawnApp + 0x728) - (int)((float)*(int *)((long)plVar20 + 0x54) * 1.2)) / 2
               ,(int)plVar20[10]);
    this_02 = ::operator_new(0x198);
    PVZ2UILevelSummary::PVZ2UILevelSummary((PVZ2UILevelSummary *)this_02,param_1);
    break;
  case 7:
    uVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x120));
    FUN_05477b24(asStack_20,param_1 + 0x128);
    FUN_05477b24(aLStack_18,param_1 + 0x130);
    FUN_05477b24(asStack_10,param_1 + 0x138);
    uVar15 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd080);
    this_02 = ::operator_new(0x110);
    PVZ2UIRewardObjectDisplayer::PVZ2UIRewardObjectDisplayer
              (this_02,uVar14,asStack_20,aLStack_18,asStack_10,uVar15,1);
    FUN_05476c50(asStack_10);
    FUN_05476c50(aLStack_18);
    FUN_05476c50(asStack_20);
    pPVar7 = *(PVZ2UIDialog **)(this + 0xf0);
    goto LAB_04369b34;
  case 8:
    pPVar7 = *(PVZ2UIDialog **)(this + 0xf0);
    FUN_05478178((wstring *)asStack_10,&DAT_056f11a8,aLStack_18);
    PVZ2UIDialog::SetHeaderLabel(pPVar7,(wstring *)asStack_10);
    FUN_05476c50((wstring *)asStack_10);
    nop();
    pPVar7 = *(PVZ2UIDialog **)(this + 0xf0);
    FUN_05478178((wstring *)asStack_10,&DAT_056f11a8,aLStack_18);
    PVZ2UIDialog::SetFooterLabel(pPVar7,(wstring *)asStack_10);
    FUN_05476c50((wstring *)asStack_10);
    nop();
    plVar20 = *(long **)(this + 0xf0);
    (**(code **)(*plVar20 + 0x198))
              (plVar20,(*(int *)(gLawnApp + 0x724) - (int)plVar20[10]) / 2,
               (*(int *)(gLawnApp + 0x728) - (int)((float)*(int *)((long)plVar20 + 0x54) * 1.2)) / 2
               ,(int)plVar20[10]);
    this_02 = ::operator_new(0x198);
    PVZ2UILevelSummary::PVZ2UILevelSummary((PVZ2UILevelSummary *)this_02,param_1);
    FUN_04368544((PVZ2UILevelSummary *)(this_02 + 0x160));
  }
  pPVar7 = *(PVZ2UIDialog **)(this + 0xf0);
LAB_04369b34:
  PVZ2UIDialog::SetContents(pPVar7,(Widget *)this_02);
  pPVar7 = *(PVZ2UIDialog **)(this + 0xf0);
LAB_04369b48:
  FUN_05478178(asStack_10,L"[CONTINUE_BUTTON]",aLStack_18);
  pPVar19 = this + 0xd8;
  pLVar18 = (LineBreakCategory *)0x0;
  PVZ2UIDialog::AddButton(pPVar7,1000,asStack_10);
  FUN_05476c50(asStack_10);
  nop();
LAB_04369754:
  pLVar17 = aLStack_18;
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  pwVar10 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"AutoTestAllLevel");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar10,(wchar16 *)asStack_10,pLVar17,(LineBreakCategory *)pPVar19,pLVar18);
  std::string::~string(asStack_10);
  nop();
  if (((cVar1 != '\0') && (*(int *)param_1 == 4)) && (*(int *)(param_1 + 0x78) == 3)) {
    setState(this);
  }
LAB_043697b4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIAwardScreen::advanceToNextScreen() */

void __thiscall PVZ2UIAwardScreen::advanceToNextScreen(PVZ2UIAwardScreen *this)

{
  int iVar1;
  ulong uVar2;
  ScreenEntry *pSVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x140);
  iVar1 = *(int *)(this + 0x158) + 1;
  *(int *)(this + 0x158) = iVar1;
  uVar2 = FUN_043683a0(uVar4,*(undefined8 *)(this + 0x148));
  if ((ulong)(long)iVar1 < uVar2) {
    pSVar3 = (ScreenEntry *)FUN_043683dc(uVar4,(long)iVar1);
    setupScreen(this,pSVar3);
    return;
  }
  if (this[0x13c] == (PVZ2UIAwardScreen)0x0) {
    setState(this,6);
    return;
  }
  setState(this,5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::setState(AwardScreenState) */

void __thiscall PVZ2UIAwardScreen::setState(PVZ2UIAwardScreen *this,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  long extraout_x0;
  long *plVar3;
  long extraout_x0_00;
  undefined4 uVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xe0) == 2) {
    plVar3 = *(long **)(this + 0xf0);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x158))(plVar3,0);
    }
  }
  else if (*(int *)(this + 0xe0) == 3) {
    lVar2 = FUN_043683dc(*(undefined8 *)(this + 0x140),(long)*(int *)(this + 0x158));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(lVar2 + 0x108));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    nop();
    LawnApp::DeleteGroup(gLawnApp,(string *)(extraout_x0 + 0x98));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  *(undefined4 *)(this + 0xe0) = param_2;
  uVar4 = PVZ_RealT();
  *(undefined4 *)(this + 0xe4) = uVar4;
  switch(*(undefined4 *)(this + 0xe0)) {
  case 1:
    *(undefined4 *)(this + 0xe8) = 0;
    break;
  case 2:
    advanceToNextScreen(this);
    break;
  case 3:
    this[0x134] = (PVZ2UIAwardScreen)0x0;
    *(undefined4 *)(this + 0x130) = 0;
    lVar2 = FUN_043683dc(*(undefined8 *)(this + 0x140),(long)*(int *)(this + 0x158));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(lVar2 + 0x108));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    nop();
    LawnApp::LoadGroup(gLawnApp,(string *)(extraout_x0_00 + 0x98));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    break;
  case 5:
    *(undefined4 *)(this + 0xe8) = 0x3f800000;
    break;
  case 6:
    iVar1 = FUN_04368360(*(undefined8 *)(this + 0x108),*(undefined8 *)(this + 0x118));
    if (iVar1 != 0) {
      Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x100));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIAwardScreen::KillAwardScreen() */

void __thiscall PVZ2UIAwardScreen::KillAwardScreen(PVZ2UIAwardScreen *this)

{
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x68))(*(long **)(gLawnApp + 0x360),this);
  setState(this,0);
  (**(code **)(*(long *)this + 0x80))(this,1,1);
  return;
}


/* PVZ2UIAwardScreen::Start() */

void __thiscall PVZ2UIAwardScreen::Start(PVZ2UIAwardScreen *this)

{
  setState(this,1);
  return;
}


/* PVZ2UIAwardScreen::~PVZ2UIAwardScreen() */

void __thiscall PVZ2UIAwardScreen::~PVZ2UIAwardScreen(PVZ2UIAwardScreen *this)

{
  *(undefined ***)this = &PTR_GetClass_068357d0;
  *(undefined **)(this + 0xd8) = &DAT_06835b00;
  deleteBackgroundGroups(this);
  if (*(long **)(this + 400) != (long *)0x0) {
    (**(code **)(**(long **)(this + 400) + 0x18))();
    *(undefined8 *)(this + 400) = 0;
  }
  if (*(long **)(this + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x168) + 0x18))();
    *(undefined8 *)(this + 0x168) = 0;
  }
  std::vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>>::
  ~vector((vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>> *)
          (this + 0x140));
  FUN_05476c50(this + 0xf8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PVZ2UIAwardScreen::~PVZ2UIAwardScreen() */

void __thiscall PVZ2UIAwardScreen::~PVZ2UIAwardScreen(PVZ2UIAwardScreen *this)

{
  ~PVZ2UIAwardScreen(this);
  AK::FreeHook(this);
  return;
}


/* PVZ2UIAwardScreen::ButtonPress(int) */

PVZ2UIAwardScreen * __thiscall PVZ2UIAwardScreen::ButtonPress(PVZ2UIAwardScreen *this,int param_1)

{
  char *pcVar1;
  PVZ2UIAwardScreen *pPVar2;
  
  if (4 < param_1 - 1000U) {
switchD_0436a57c_caseD_3e9:
    return this;
  }
  this = (PVZ2UIAwardScreen *)
         ((long)(char)(&switchD_0436a57c::switchdataD_05753524)[param_1 - 1000U] * 4 + 0x436a580);
  switch(param_1) {
  case 1000:
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    pPVar2 = (PVZ2UIAwardScreen *)AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Button_Continue_Press");
    return pPVar2;
  case 0x3e9:
    goto switchD_0436a57c_caseD_3e9;
  default:
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    pPVar2 = (PVZ2UIAwardScreen *)AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Replay_Press");
    return pPVar2;
  }
}


/* non-virtual thunk to PVZ2UIAwardScreen::ButtonPress(int) */

void __thiscall PVZ2UIAwardScreen::ButtonPress(PVZ2UIAwardScreen *this,int param_1)

{
  ButtonPress(this + -0xd8,param_1);
  return;
}


/* PVZ2UIAwardScreen::ButtonDepress(int) */

void __thiscall PVZ2UIAwardScreen::ButtonDepress(PVZ2UIAwardScreen *this,int param_1)

{
  char cVar1;
  TextureInfo *pTVar2;
  char *pcVar3;
  PVZ2UIPresentOpener *this_00;
  
  Sexy::LazySingleton<SocialMgr>::GetInstance();
  switch(param_1) {
  case 1000:
  case 0x3f0:
    setState(this,4);
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_UI_Menu_Button_Continue_Release");
    return;
  case 0x3e9:
    if (this[0x135] == (PVZ2UIAwardScreen)0x0) {
      this_00 = (PVZ2UIPresentOpener *)PVZ2UIDialog::GetContents(*(PVZ2UIDialog **)(this + 0xf0));
      PVZ2UIPresentOpener::OpenAllPresents(this_00);
      return;
    }
    break;
  case 0x3ea:
    if ((*(long *)(this + 400) == 0) ||
       (cVar1 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)this), cVar1 != '\0')) {
      this[0x136] = (PVZ2UIAwardScreen)0x1;
      setState(this,4);
      pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar3,"Play_UI_Menu_Replay_Release");
      return;
    }
    break;
  case 0x3eb:
  case 0x3ec:
    refreshDialogToShareState(this);
    return;
  case 0x3ed:
  case 0x3ee:
  case 0x3ef:
    pTVar2 = (TextureInfo *)Sexy::LazySingleton<SocialMgr>::GetInstance();
    EA::Text::GlyphCache_Memory::EndUpdate(pTVar2);
    return;
  }
  return;
}


/* non-virtual thunk to PVZ2UIAwardScreen::ButtonDepress(int) */

void __thiscall PVZ2UIAwardScreen::ButtonDepress(PVZ2UIAwardScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::addCommonStarScreenInfo(PVZ2UIAwardScreen::ScreenEntry&,
   ProfileUtils::ChallengeStatusHolder const&) */

void __thiscall
PVZ2UIAwardScreen::addCommonStarScreenInfo
          (PVZ2UIAwardScreen *this,ScreenEntry *param_1,ChallengeStatusHolder *param_2)

{
  char cVar1;
  wchar_t *pwVar2;
  int iVar3;
  undefined1 auStack_30 [8];
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = *(int *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x70) == 3) {
    if (1 < iVar3 - 1U) goto LAB_0436a724;
    if (*(int *)(param_1 + 0x74) != 2) goto LAB_0436a88c;
    pwVar2 = L"[AWARD_SCREEN_ALL_STARS]";
  }
  else {
    if (iVar3 != 1) goto LAB_0436a724;
LAB_0436a88c:
    pwVar2 = L"[AWARD_SCREEN_STAR]";
  }
  TodStringTranslate(pwVar2);
  FUN_054766c8(param_1 + 8,&local_18);
  FUN_05476c50(&local_18);
  iVar3 = *(int *)(param_1 + 0x78);
LAB_0436a724:
  if ((*(long *)(gLawnApp + 0x9f0) == 0) || (iVar3 != 3)) {
    if (iVar3 == 0) {
      TodStringTranslate(L"[AWARD_SCREEN_NO_STAR]");
      FUN_054766c8(param_1 + 8,(SortedKern *)&local_18);
      FUN_05476c50((SortedKern *)&local_18);
    }
  }
  else {
    cVar1 = CustomLevelUtils::IsCustomLevel();
    if (cVar1 == '\0') {
      Board::GetLevelNameForDisplay();
      FUN_05478178(awStack_20,L"[AWARD_SCREEN_STAR_LEVEL]",auStack_30);
      TodReplaceString(awStack_20,L"{LEVEL}",awStack_28);
      FUN_054766c8(param_1 + 8,(SortedKern *)&local_18);
      FUN_05476c50((SortedKern *)&local_18);
      FUN_05476c50(awStack_20);
      nop();
      FUN_05476c50(awStack_28);
    }
  }
  FUN_054772c4(param_1 + 0x10,&DAT_056f11a8);
  FUN_054772c4(param_1 + 0x18,&DAT_056f11a8);
  std::vector<std::wstring,std::allocator<std::wstring>>::operator=
            ((vector<std::wstring,std::allocator<std::wstring>> *)(param_1 + 0x80),(vector *)param_2
            );
  std::vector<bool,std::allocator<bool>>::operator=
            ((vector<bool,std::allocator<bool>> *)(param_1 + 0x98),(vector *)(param_2 + 0x18));
  SortedKern::SortedKern((SortedKern *)&local_18,L'Ʉ',L'Ƹ',0x50);
  *(undefined8 *)(param_1 + 0x110) = local_18;
  *(undefined4 *)(param_1 + 0x118) = local_10;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::AddPlantReward(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall PVZ2UIAwardScreen::AddPlantReward(PVZ2UIAwardScreen *this,RtWeakPtr *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_180 [8];
  undefined4 auStack_178 [2];
  undefined1 auStack_170 [24];
  RtWeakPtr<PowerPropertySheet> aRStack_158 [240];
  undefined4 local_68;
  undefined4 local_64;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ScreenEntry::ScreenEntry((ScreenEntry *)auStack_178);
  auStack_178[0] = 0;
  TodStringTranslate(L"[AWARD_SCREEN_NEW_PLANT]");
  FUN_054766c8(auStack_170,auStack_180);
  FUN_05476c50(auStack_180);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_158,param_2);
  local_68 = 0x23a;
  local_64 = 0x173;
  std::vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>>::
  push_back((vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>> *
            )(this + 0x140),(ScreenEntry *)auStack_178);
  uVar1 = DAT_06afa010;
  *(undefined8 *)(this + 0x17c) = PrimeText_Game::Color_New_Plant_Header;
  *(undefined8 *)(this + 0x184) = uVar1;
  ScreenEntry::~ScreenEntry((ScreenEntry *)auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::AddPrizeReward(std::wstring const&, std::wstring const&,
   Sexy::RtWeakPtr<Sexy::Image>) */

void __thiscall
PVZ2UIAwardScreen::AddPrizeReward
          (PVZ2UIAwardScreen *this,undefined8 param_1,undefined8 param_2,RtWeakPtr *param_4)

{
  undefined1 auStack_180 [8];
  undefined4 auStack_178 [2];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [24];
  RtWeakPtr<PowerPropertySheet> aRStack_148 [320];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ScreenEntry::ScreenEntry((ScreenEntry *)auStack_178);
  auStack_178[0] = 2;
  TodStringTranslate(L"[AWARD_SCREEN_PRIZE]");
  FUN_054766c8(auStack_170,auStack_180);
  FUN_05476c50(auStack_180);
  thunk_FUN_05477b9c(auStack_168,param_1);
  thunk_FUN_05477b9c(auStack_160,param_2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_148,param_4);
  std::vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>>::
  push_back((vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>> *
            )(this + 0x140),(ScreenEntry *)auStack_178);
  ScreenEntry::~ScreenEntry((ScreenEntry *)auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::AddCollectableReward(Sexy::RtWeakPtr<CollectableType const>) */

void __thiscall PVZ2UIAwardScreen::AddCollectableReward(PVZ2UIAwardScreen *this,RtWeakPtr *param_2)

{
  undefined1 auStack_180 [8];
  undefined4 auStack_178 [2];
  undefined1 auStack_170 [32];
  RtWeakPtr<PowerPropertySheet> aRStack_150 [232];
  undefined4 local_68;
  undefined4 local_64;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ScreenEntry::ScreenEntry((ScreenEntry *)auStack_178);
  auStack_178[0] = 1;
  TodStringTranslate(L"[AWARD_SCREEN_PRIZE]");
  FUN_054766c8(auStack_170,auStack_180);
  FUN_05476c50(auStack_180);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_150,param_2);
  local_68 = 0x23a;
  local_64 = 0x173;
  std::vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>>::
  push_back((vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>> *
            )(this + 0x140),(ScreenEntry *)auStack_178);
  ScreenEntry::~ScreenEntry((ScreenEntry *)auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::AddPresentRewards(std::vector<Sexy::RtWeakPtr<PresentTable const>,
   std::allocator<Sexy::RtWeakPtr<PresentTable const> > >&, std::vector<Sexy::RtWeakPtr<PresentType
   const>, std::allocator<Sexy::RtWeakPtr<PresentType const> > >&) */

void __thiscall
PVZ2UIAwardScreen::AddPresentRewards(PVZ2UIAwardScreen *this,vector *param_1,vector *param_2)

{
  ulong uVar1;
  wchar_t *pwVar2;
  undefined1 auStack_180 [8];
  undefined4 local_178 [2];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [32];
  undefined1 local_140;
  vector<Sexy::RtWeakPtr<PresentTable_const>,std::allocator<Sexy::RtWeakPtr<PresentTable_const>>>
  avStack_138 [24];
  vector<Sexy::RtWeakPtr<PresentType_const>,std::allocator<Sexy::RtWeakPtr<PresentType_const>>>
  avStack_120 [280];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ScreenEntry::ScreenEntry((ScreenEntry *)local_178);
  local_178[0] = 3;
  uVar1 = FUN_04368380(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
  if (uVar1 < 2) {
    pwVar2 = L"[AWARD_SCREEN_ONE_PRESENT]";
  }
  else {
    pwVar2 = L"[AWARD_SCREEN_MULTIPLE_PRESENTS]";
  }
  TodStringTranslate(pwVar2);
  FUN_054766c8(auStack_170,auStack_180);
  FUN_05476c50(auStack_180);
  TodStringTranslate(L"[OPEN_YOUR_PRESENTS]");
  FUN_054766c8(auStack_168,auStack_180);
  FUN_05476c50(auStack_180);
  TodStringTranslate(L"[TAP_TO_REVEAL_PRIZES]");
  FUN_054766c8(auStack_160,auStack_180);
  FUN_05476c50(auStack_180);
  local_140 = 1;
  std::
  vector<Sexy::RtWeakPtr<PresentTable_const>,std::allocator<Sexy::RtWeakPtr<PresentTable_const>>>::
  operator=(avStack_138,param_1);
  std::vector<Sexy::RtWeakPtr<PresentType_const>,std::allocator<Sexy::RtWeakPtr<PresentType_const>>>
  ::operator=(avStack_120,param_2);
  std::vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>>::
  push_back((vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>> *
            )(this + 0x140),(ScreenEntry *)local_178);
  ScreenEntry::~ScreenEntry((ScreenEntry *)local_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::AddPresentActivityRewards(std::vector<Sexy::RtWeakPtr<PresentType const>,
   std::allocator<Sexy::RtWeakPtr<PresentType const> > >&) */

void __thiscall
PVZ2UIAwardScreen::AddPresentActivityRewards(PVZ2UIAwardScreen *this,vector *param_1)

{
  ulong uVar1;
  wchar_t *pwVar2;
  undefined1 auStack_180 [8];
  undefined4 local_178 [2];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [32];
  undefined1 local_140;
  vector<Sexy::RtWeakPtr<PresentType_const>,std::allocator<Sexy::RtWeakPtr<PresentType_const>>>
  avStack_120 [280];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ScreenEntry::ScreenEntry((ScreenEntry *)local_178);
  local_178[0] = 3;
  uVar1 = FUN_04368380(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  if (uVar1 < 2) {
    pwVar2 = L"[AWARD_SCREEN_ONE_PRESENT]";
  }
  else {
    pwVar2 = L"[AWARD_SCREEN_MULTIPLE_PRESENTS]";
  }
  TodStringTranslate(pwVar2);
  FUN_054766c8(auStack_170,auStack_180);
  FUN_05476c50(auStack_180);
  TodStringTranslate(L"[OPEN_YOUR_PRESENTS]");
  FUN_054766c8(auStack_168,auStack_180);
  FUN_05476c50(auStack_180);
  TodStringTranslate(L"[TAP_TO_REVEAL_PRIZES]");
  FUN_054766c8(auStack_160,auStack_180);
  FUN_05476c50(auStack_180);
  local_140 = 0;
  std::vector<Sexy::RtWeakPtr<PresentType_const>,std::allocator<Sexy::RtWeakPtr<PresentType_const>>>
  ::operator=(avStack_120,param_1);
  std::vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>>::
  push_back((vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>> *
            )(this + 0x140),(ScreenEntry *)local_178);
  ScreenEntry::~ScreenEntry((ScreenEntry *)local_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::addRewardObjectDisplayScreen(Sexy::RtWeakPtr<Sexy::Image>, std::wstring
   const&, std::wstring const&, std::wstring const&) */

void __thiscall
PVZ2UIAwardScreen::addRewardObjectDisplayScreen
          (PVZ2UIAwardScreen *this,RtWeakPtr *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined4 local_178 [68];
  undefined4 local_68;
  undefined4 local_64;
  RtWeakPtr<PowerPropertySheet> aRStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ScreenEntry::ScreenEntry((ScreenEntry *)local_178);
  local_178[0] = 7;
  local_68 = 0x23a;
  local_64 = 0x173;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_58,param_2);
  thunk_FUN_05477b9c(auStack_50,param_3);
  thunk_FUN_05477b9c(auStack_48,param_4);
  thunk_FUN_05477b9c(auStack_40,param_5);
  std::vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>>::
  push_back((vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>> *
            )(this + 0x140),(ScreenEntry *)local_178);
  ScreenEntry::~ScreenEntry((ScreenEntry *)local_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::AddJoustCoinReward(int) */

void __thiscall PVZ2UIAwardScreen::AddJoustCoinReward(PVZ2UIAwardScreen *this,int param_1)

{
  undefined1 auStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AwardStackImageResolver::GetCoinsImage
            ((AwardStackImageResolver *)(ulong)(uint)param_1,(int)___stack_chk_guard);
  FUN_05476574(auStack_30);
  TodStringTranslate(L"[JOUST_AWARD_HEADER2]");
  FUN_05478178(awStack_18,L"[COIN_AWARD_HEADER1]",auStack_40);
  Sexy::StrFormat(L"%d",awStack_20,(ulong)(uint)param_1);
  TodReplaceString(awStack_18,L"{NUMBER}",awStack_20);
  addRewardObjectDisplayScreen(this,aRStack_38,auStack_30,auStack_28,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_20);
  FUN_05476c50(awStack_18);
  nop();
  FUN_05476c50(auStack_28);
  FUN_05476c50(auStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::AddJoustGemReward(int) */

void __thiscall PVZ2UIAwardScreen::AddJoustGemReward(PVZ2UIAwardScreen *this,int param_1)

{
  undefined1 auStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AwardStackImageResolver::GetCHGemsImage
            ((AwardStackImageResolver *)(ulong)(uint)param_1,(int)___stack_chk_guard);
  FUN_05476574(auStack_30);
  TodStringTranslate(L"[JOUST_AWARD_HEADER2]");
  FUN_05478178(awStack_18,L"[GEM_AWARD_HEADER1]",auStack_40);
  Sexy::StrFormat(L"%d",awStack_20,(ulong)(uint)param_1);
  TodReplaceString(awStack_18,L"{NUMBER}",awStack_20);
  addRewardObjectDisplayScreen(this,aRStack_38,auStack_30,auStack_28,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_20);
  FUN_05476c50(awStack_18);
  nop();
  FUN_05476c50(auStack_28);
  FUN_05476c50(auStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::AddJoustCHCoinReward(int) */

void __thiscall PVZ2UIAwardScreen::AddJoustCHCoinReward(PVZ2UIAwardScreen *this,int param_1)

{
  undefined1 auStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AwardStackImageResolver::GetCHCoinsImage
            ((AwardStackImageResolver *)(ulong)(uint)param_1,(int)___stack_chk_guard);
  FUN_05476574(auStack_30);
  TodStringTranslate(L"[JOUST_AWARD_HEADER2]");
  FUN_05478178(awStack_18,L"[COIN_AWARD_HEADER1]",auStack_40);
  Sexy::StrFormat(L"%d",awStack_20,(ulong)(uint)param_1);
  TodReplaceString(awStack_18,L"{NUMBER}",awStack_20);
  addRewardObjectDisplayScreen(this,aRStack_38,auStack_30,auStack_28,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_20);
  FUN_05476c50(awStack_18);
  nop();
  FUN_05476c50(auStack_28);
  FUN_05476c50(auStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::AddJoustCHMaterialReward(int, int, bool) */

void __thiscall
PVZ2UIAwardScreen::AddJoustCHMaterialReward
          (PVZ2UIAwardScreen *this,int param_1,int param_2,bool param_3)

{
  wchar_t *pwVar1;
  undefined1 auStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AwardStackImageResolver::GetCHMaterialImage(param_1,param_2);
  FUN_05476574(auStack_30);
  TodStringTranslate(L"[JOUST_AWARD_HEADER2]");
  if (param_3) {
    pwVar1 = L"[MATERIAL_AWARD_RIFT_HEADER1]";
  }
  else {
    pwVar1 = L"[MATERIAL_AWARD_HEADER1]";
  }
  FUN_05478178(awStack_18,pwVar1,auStack_40);
  Sexy::StrFormat(L"%d",awStack_20,(ulong)(uint)param_2);
  TodReplaceString(awStack_18,L"{NUMBER}",awStack_20);
  addRewardObjectDisplayScreen(this,aRStack_38,auStack_30,auStack_28,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_20);
  FUN_05476c50(awStack_18);
  nop();
  FUN_05476c50(auStack_28);
  FUN_05476c50(auStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::AddJoustCHChestReward(int) */

void __thiscall PVZ2UIAwardScreen::AddJoustCHChestReward(PVZ2UIAwardScreen *this,int param_1)

{
  undefined1 auStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  AwardStackImageResolver *local_8;
  
  local_8 = ___stack_chk_guard;
  AwardStackImageResolver::GetCHChestImage(___stack_chk_guard);
  FUN_05476574(auStack_30);
  TodStringTranslate(L"[JOUST_AWARD_HEADER2]");
  FUN_05478178(awStack_18,L"[CHEST_AWARD_HEADER1]",auStack_40);
  Sexy::StrFormat(L"%d",awStack_20,(ulong)(uint)param_1);
  TodReplaceString(awStack_18,L"{NUMBER}",awStack_20);
  addRewardObjectDisplayScreen(this,aRStack_38,auStack_30,auStack_28,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_20);
  FUN_05476c50(awStack_18);
  nop();
  FUN_05476c50(auStack_28);
  FUN_05476c50(auStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::AddStarScreenSingle(ProfileUtils::ChallengeStatusHolder const&,
   AwardScreenStarMode) */

void __thiscall
PVZ2UIAwardScreen::AddStarScreenSingle
          (PVZ2UIAwardScreen *this,ChallengeStatusHolder *param_1,undefined4 param_3)

{
  undefined4 local_178 [28];
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ScreenEntry::ScreenEntry((ScreenEntry *)local_178);
  local_108 = 0;
  local_178[0] = 4;
  local_104 = 0;
  local_100 = param_3;
  addCommonStarScreenInfo(this,(ScreenEntry *)local_178,param_1);
  std::vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>>::
  push_back((vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>> *
            )(this + 0x140),(ScreenEntry *)local_178);
  ScreenEntry::~ScreenEntry((ScreenEntry *)local_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::AddStarScreenTriple(int, ProfileUtils::ChallengeStatusHolder const&,
   AwardScreenStarMode) */

void __thiscall
PVZ2UIAwardScreen::AddStarScreenTriple
          (PVZ2UIAwardScreen *this,int param_1,ChallengeStatusHolder *param_2,undefined4 param_4)

{
  undefined4 local_178 [28];
  undefined4 local_108;
  int local_104;
  undefined4 local_100;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ScreenEntry::ScreenEntry((ScreenEntry *)local_178);
  local_108 = 0;
  local_178[0] = 4;
  local_104 = param_1 + -1;
  local_100 = param_4;
  addCommonStarScreenInfo(this,(ScreenEntry *)local_178,param_2);
  std::vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>>::
  push_back((vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>> *
            )(this + 0x140),(ScreenEntry *)local_178);
  ScreenEntry::~ScreenEntry((ScreenEntry *)local_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::AddObjectiveScreen(ProfileUtils::ChallengeStatusHolder const&,
   ProfileUtils::ChallengeStatusHolder const&, AwardScreenObjective) */

void __thiscall
PVZ2UIAwardScreen::AddObjectiveScreen
          (PVZ2UIAwardScreen *this,vector<std::wstring,std::allocator<std::wstring>> *param_1,
          vector<std::wstring,std::allocator<std::wstring>> *param_2,int param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  wstring awStack_190 [8];
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_178 [2];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [104];
  vector<std::wstring,std::allocator<std::wstring>> avStack_f8 [24];
  vector<bool,std::allocator<bool>> avStack_e0 [40];
  vector<std::wstring,std::allocator<std::wstring>> avStack_b8 [24];
  vector<bool,std::allocator<bool>> avStack_a0 [40];
  int local_78;
  undefined8 local_68;
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ScreenEntry::ScreenEntry((ScreenEntry *)local_178);
  local_178[0] = 6;
  local_78 = param_4;
  if (param_4 - 1U < 2) {
    TodStringTranslate(L"[AWARD_SCREEN_OBJECTIVE_MET]");
    FUN_054766c8(auStack_170,&local_188);
    FUN_05476c50(&local_188);
  }
  else if (param_4 == 0) {
    iVar2 = FUN_0436837c(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x110));
    if (iVar2 < 1) {
      FUN_054772c4(auStack_170,&DAT_056f11a8);
    }
    else {
      TodStringTranslate(L"[AWARD_SCREEN_OBJECTIVE_NOT_MET]");
      TodReplaceNumberString(awStack_190,L"{X}",iVar2);
      FUN_054766c8(auStack_170,&local_188);
      FUN_05476c50(&local_188);
      FUN_05476c50(awStack_190);
    }
  }
  FUN_054772c4(auStack_168,&DAT_056f11a8);
  FUN_054772c4(auStack_160,&DAT_056f11a8);
  cVar1 = std::vector<std::wstring,std::allocator<std::wstring>>::empty(param_1);
  if (cVar1 == '\0') {
    std::vector<std::wstring,std::allocator<std::wstring>>::operator=(avStack_f8,(vector *)param_1);
    std::vector<bool,std::allocator<bool>>::operator=(avStack_e0,(vector *)(param_1 + 0x18));
  }
  cVar1 = std::vector<std::wstring,std::allocator<std::wstring>>::empty(param_2);
  if (cVar1 == '\0') {
    std::vector<std::wstring,std::allocator<std::wstring>>::operator=(avStack_b8,(vector *)param_2);
    std::vector<bool,std::allocator<bool>>::operator=(avStack_a0,(vector *)(param_2 + 0x18));
  }
  SortedKern::SortedKern((SortedKern *)&local_188,L'Ʉ',L'Ũ',0x50);
  local_60 = local_180;
  local_68 = local_188;
  std::vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>>::
  push_back((vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>> *
            )(this + 0x140),(ScreenEntry *)local_178);
  uVar3 = std::vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>>
          ::back((vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>>
                  *)(this + 0x140));
  ScreenEntry::~ScreenEntry((ScreenEntry *)local_178);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::AddObjectiveScreen(ProfileUtils::ChallengeStatusHolder const&,
   AwardScreenObjective) */

void __thiscall
PVZ2UIAwardScreen::AddObjectiveScreen(PVZ2UIAwardScreen *this,undefined8 param_1,undefined4 param_3)

{
  undefined8 uVar1;
  ChallengeStatusHolder aCStack_90 [136];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProfileUtils::ChallengeStatusHolder::ChallengeStatusHolder(aCStack_90);
  uVar1 = AddObjectiveScreen(this,param_1,aCStack_90,param_3);
  ProfileUtils::ChallengeStatusHolder::~ChallengeStatusHolder(aCStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::AddChooseObjectiveScreen(ProfileUtils::ChallengeStatusHolder const&,
   AwardScreenObjective) */

void __thiscall
PVZ2UIAwardScreen::AddChooseObjectiveScreen
          (PVZ2UIAwardScreen *this,vector<std::wstring,std::allocator<std::wstring>> *param_1,
          int param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  wstring awStack_190 [8];
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_178 [2];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [104];
  vector<std::wstring,std::allocator<std::wstring>> avStack_f8 [24];
  vector<bool,std::allocator<bool>> avStack_e0 [104];
  int local_78;
  undefined8 local_68;
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ScreenEntry::ScreenEntry((ScreenEntry *)local_178);
  local_178[0] = 8;
  local_78 = param_3;
  if (param_3 - 1U < 2) {
    TodStringTranslate(L"[AWARD_SCREEN_OBJECTIVE_MET]");
    FUN_054766c8(auStack_170,&local_188);
    FUN_05476c50(&local_188);
  }
  else if (param_3 == 0) {
    iVar2 = FUN_0436837c(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x110));
    if (iVar2 < 1) {
      FUN_054772c4(auStack_170,&DAT_056f11a8);
    }
    else {
      TodStringTranslate(L"[AWARD_SCREEN_OBJECTIVE_NOT_MET]");
      TodReplaceNumberString(awStack_190,L"{X}",iVar2);
      FUN_054766c8(auStack_170,&local_188);
      FUN_05476c50(&local_188);
      FUN_05476c50(awStack_190);
    }
  }
  FUN_054772c4(auStack_168,&DAT_056f11a8);
  FUN_054772c4(auStack_160,&DAT_056f11a8);
  cVar1 = std::vector<std::wstring,std::allocator<std::wstring>>::empty(param_1);
  if (cVar1 == '\0') {
    std::vector<std::wstring,std::allocator<std::wstring>>::operator=(avStack_f8,(vector *)param_1);
    std::vector<bool,std::allocator<bool>>::operator=(avStack_e0,(vector *)(param_1 + 0x18));
  }
  SortedKern::SortedKern((SortedKern *)&local_188,L'Ʉ',L'Ũ',0x50);
  local_60 = local_180;
  local_68 = local_188;
  std::vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>>::
  push_back((vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>> *
            )(this + 0x140),(ScreenEntry *)local_178);
  uVar3 = std::vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>>
          ::back((vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>>
                  *)(this + 0x140));
  ScreenEntry::~ScreenEntry((ScreenEntry *)local_178);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::AddNoteScreen(Sexy::RtWeakPtr<CollectableType const>) */

void __thiscall PVZ2UIAwardScreen::AddNoteScreen(PVZ2UIAwardScreen *this,RtWeakPtr *param_2)

{
  undefined4 local_178 [66];
  RtWeakPtr<PowerPropertySheet> aRStack_70 [104];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ScreenEntry::ScreenEntry((ScreenEntry *)local_178);
  local_178[0] = 5;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_70,param_2);
  std::vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>>::
  push_back((vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>> *
            )(this + 0x140),(ScreenEntry *)local_178);
  ScreenEntry::~ScreenEntry((ScreenEntry *)local_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::AddUnchartedModeTips() */

void __thiscall PVZ2UIAwardScreen::AddUnchartedModeTips(PVZ2UIAwardScreen *this)

{
  string asStack_190 [8];
  undefined8 local_188;
  undefined4 local_180;
  undefined4 auStack_178 [2];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [248];
  undefined8 local_68;
  undefined4 local_60;
  vector<std::wstring,std::allocator<std::wstring>> avStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ScreenEntry::ScreenEntry((ScreenEntry *)auStack_178);
  auStack_178[0] = 9;
  FUN_054772c4(auStack_170,&DAT_056f11a8);
  FUN_054772c4(auStack_168,&DAT_056f11a8);
  FUN_054772c4(auStack_160,&DAT_056f11a8);
  std::string::string(asStack_190,"[UNCHARTED_WORLD_DIFFICULTY_DESC_1]");
  StringHelper::ToStringValue(asStack_190);
  std::vector<std::wstring,std::allocator<std::wstring>>::push_back
            (avStack_38,(wstring *)&local_188);
  FUN_05476c50((SortedKern *)&local_188);
  std::string::~string(asStack_190);
  nop();
  std::string::string(asStack_190,"[UNCHARTED_WORLD_DIFFICULTY_DESC_2]");
  StringHelper::ToStringValue(asStack_190);
  std::vector<std::wstring,std::allocator<std::wstring>>::push_back
            (avStack_38,(wstring *)&local_188);
  FUN_05476c50((SortedKern *)&local_188);
  std::string::~string(asStack_190);
  nop();
  std::string::string(asStack_190,"[UNCHARTED_WORLD_DIFFICULTY_DESC_3]");
  StringHelper::ToStringValue(asStack_190);
  std::vector<std::wstring,std::allocator<std::wstring>>::push_back
            (avStack_38,(wstring *)&local_188);
  FUN_05476c50((SortedKern *)&local_188);
  std::string::~string(asStack_190);
  nop();
  std::string::string(asStack_190,"[UNCHARTED_WORLD_DIFFICULTY_DESC_4]");
  StringHelper::ToStringValue(asStack_190);
  std::vector<std::wstring,std::allocator<std::wstring>>::push_back
            (avStack_38,(wstring *)&local_188);
  FUN_05476c50((SortedKern *)&local_188);
  std::string::~string(asStack_190);
  nop();
  SortedKern::SortedKern((SortedKern *)&local_188,L'Ʉ',L'Ũ',0x50);
  local_68 = local_188;
  local_60 = local_180;
  std::vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>>::
  push_back((vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>> *
            )(this + 0x140),(ScreenEntry *)auStack_178);
  ScreenEntry::~ScreenEntry((ScreenEntry *)auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::AddUnchartedModeDifficultyTips(Sexy::RtWeakPtr<LevelModifierDifficulty const>)
    */

void __thiscall
PVZ2UIAwardScreen::AddUnchartedModeDifficultyTips(PVZ2UIAwardScreen *this,RtWeakPtr *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar6;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 auStack_178 [2];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [248];
  undefined8 local_68;
  undefined4 local_60;
  vector<std::wstring,std::allocator<std::wstring>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ScreenEntry::ScreenEntry((ScreenEntry *)auStack_178);
  auStack_178[0] = 10;
  FUN_054772c4(auStack_170,&DAT_056f11a8);
  FUN_054772c4(auStack_168,&DAT_056f11a8);
  FUN_054772c4(auStack_160,&DAT_056f11a8);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar2) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    iVar3 = FUN_0436838c(*(undefined8 *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x20));
    if (0 < iVar3) {
      lVar4 = 0;
      do {
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        lVar1 = lVar4 + 1;
        this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04368398(*(undefined8 *)(lVar5 + 0x18),lVar4)
        ;
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        (**(code **)(*plVar6 + 0x80))((wstring *)&local_188);
        std::vector<std::wstring,std::allocator<std::wstring>>::push_back
                  (avStack_20,(wstring *)&local_188);
        FUN_05476c50((wstring *)&local_188);
        lVar4 = lVar1;
      } while ((int)lVar1 < iVar3);
    }
  }
  SortedKern::SortedKern((SortedKern *)&local_188,L'Ʉ',L'Ũ',0x50);
  local_68 = local_188;
  local_60 = local_180;
  std::vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>>::
  push_back((vector<PVZ2UIAwardScreen::ScreenEntry,std::allocator<PVZ2UIAwardScreen::ScreenEntry>> *
            )(this + 0x140),(ScreenEntry *)auStack_178);
  ScreenEntry::~ScreenEntry((ScreenEntry *)auStack_178);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0436c664 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PVZ2UIAwardScreen::Update() */

void __thiscall PVZ2UIAwardScreen::Update(PVZ2UIAwardScreen *this)

{
  int iVar1;
  char cVar2;
  long lVar3;
  int *piVar4;
  PVZ2UIPresentOpener *this_00;
  PVZ2UIDialog *pPVar5;
  float fVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined4 local_18 [2];
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if ((*(long *)(this + 0xf0) != 0) && (*(char *)(*(long *)(this + 0xf0) + 0x6c) == '\0')) {
    removeCurrentScreen(this);
  }
  switch(*(undefined4 *)(this + 0xe0)) {
  case 1:
    auVar8 = PVZ_RealT();
    fVar9 = auVar8._0_4_ - *(float *)(this + 0xe4);
    local_18[0] = 0;
    local_10[0] = 0x3f800000;
    fVar6 = CurveLerp<float>(auVar8,0x3f800000,fVar9,local_18,local_10,4);
    *(float *)(this + 0xe8) = fVar6;
    if (fVar9 <= 1.0) break;
    goto LAB_0436c6c8;
  case 2:
    piVar4 = (int *)FUN_043683dc(*(undefined8 *)(this + 0x140),(long)*(int *)(this + 0x158));
    if ((*piVar4 == 3) && (this[0x135] == (PVZ2UIAwardScreen)0x0)) {
      this_00 = (PVZ2UIPresentOpener *)PVZ2UIDialog::GetContents(*(PVZ2UIDialog **)(this + 0xf0));
      cVar2 = PVZ2UIPresentOpener::IsDoneOpening(this_00);
      if (cVar2 != '\0') {
        PVZ2UIDialog::ClearButtons(*(PVZ2UIDialog **)(this + 0xf0));
        pPVar5 = *(PVZ2UIDialog **)(this + 0xf0);
        FUN_05478178(local_10,L"[COLLECT_PRIZES_BUTTON]",local_18);
        PVZ2UIDialog::AddButton(pPVar5,1000,local_10,this + 0xd8,0);
        FUN_05476c50(local_10);
        nop();
        (**(code **)(**(long **)(this + 0xf0) + 0x310))(*(long **)(this + 0xf0));
        this[0x135] = (PVZ2UIAwardScreen)0x1;
      }
    }
    break;
  case 3:
    iVar1 = *(int *)(this + 0x160);
    if (iVar1 == 1) {
      fVar6 = (float)PVZ_RealT();
      if (1.0 < fVar6 - *(float *)(this + 0xe4)) {
        StartNoteConversation(this);
      }
    }
    else if (iVar1 == 0) {
      fVar6 = (float)PVZ_RealDt();
      if (1.0 <= fVar6 + *(float *)(this + 0x130)) {
        *(undefined4 *)(this + 0x160) = 1;
        *(undefined4 *)(this + 0x130) = 0x3f800000;
        uVar7 = PVZ_RealT();
        *(undefined4 *)(this + 0xe4) = uVar7;
      }
      else {
        *(float *)(this + 0x130) = fVar6 + *(float *)(this + 0x130);
      }
    }
    else if (iVar1 == 4) {
      fVar6 = (float)PVZ_RealDt();
      fVar9 = *(float *)(this + 0x130);
      *(float *)(this + 0x130) = fVar9 - fVar6;
      if (fVar9 - fVar6 <= 0.0) {
        setState(this,4);
      }
    }
    break;
  case 4:
    fVar6 = (float)PVZ_RealT();
    if (fVar6 - *(float *)(this + 0xe4) <= 0.618) break;
    lVar3 = FUN_043683a0(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148));
    if (lVar3 - 1U <= (ulong)(long)*(int *)(this + 0x158)) {
      if (this[0x13c] != (PVZ2UIAwardScreen)0x0) {
        setState(this,5);
        break;
      }
      goto LAB_0436c674;
    }
LAB_0436c6c8:
    setState(this,2);
    break;
  case 5:
    auVar8 = PVZ_RealT();
    fVar9 = auVar8._0_4_ - *(float *)(this + 0xe4);
    local_18[0] = 0x3f800000;
    local_10[0] = 0;
    fVar6 = CurveLerp<float>(auVar8,0x3f800000,fVar9,local_18,local_10,4);
    *(float *)(this + 0xe8) = fVar6;
    if (fVar9 <= 1.0) break;
LAB_0436c674:
    setState(this,6);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwardScreen::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
PVZ2UIAwardScreen::DrawAll(PVZ2UIAwardScreen *this,ModalFlags *param_1,Graphics *param_2)

{
  undefined8 uVar1;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (*(long *)(this + 0xf0) != 0) {
    Sexy::Insets::Insets
              (aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(*(long *)(this + 0xf0) + 0x4c));
    uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_34_HardShadow);
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x17c));
    WriteWordInRect(param_2,this + 0xf8,aIStack_28,uVar1,aIStack_18,5,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

