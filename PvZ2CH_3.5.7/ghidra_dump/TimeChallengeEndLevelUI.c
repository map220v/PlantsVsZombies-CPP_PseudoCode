// Class: TimeChallengeEndLevelUI


/* TimeChallengeEndLevelUI::IsFinished() */

TimeChallengeEndLevelUI __thiscall
TimeChallengeEndLevelUI::IsFinished(TimeChallengeEndLevelUI *this)

{
  return this[0xf4];
}


/* TimeChallengeEndLevelUI::SetContinueCallBack(Sexy::Delegate1<TimeChallengeEndLevelUI*> const&) */

void __thiscall
TimeChallengeEndLevelUI::SetContinueCallBack(TimeChallengeEndLevelUI *this,Delegate1 *param_1)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x100),(Delegate2 *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeChallengeEndLevelUI::~TimeChallengeEndLevelUI() */

void __thiscall TimeChallengeEndLevelUI::~TimeChallengeEndLevelUI(TimeChallengeEndLevelUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0697f718;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0697f3f0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  if (*(long **)(this + 0xe0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe0) + 0x18))();
    *(undefined8 *)(this + 0xe0) = 0;
  }
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_EndLevel");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"EndLevelAward");
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


/* TimeChallengeEndLevelUI::~TimeChallengeEndLevelUI() */

void __thiscall TimeChallengeEndLevelUI::~TimeChallengeEndLevelUI(TimeChallengeEndLevelUI *this)

{
  ~TimeChallengeEndLevelUI(this);
  AK::FreeHook(this);
  return;
}


/* TimeChallengeEndLevelUI::SetScore(int) */

void __thiscall TimeChallengeEndLevelUI::SetScore(TimeChallengeEndLevelUI *this,int param_1)

{
  *(int *)(this + 0xf0) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeChallengeEndLevelUI::DrawScore(Sexy::Graphics*) */

void __thiscall TimeChallengeEndLevelUI::DrawScore(TimeChallengeEndLevelUI *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[THIS_ACHIEVEMENT]");
  iVar3 = FUN_04bfe30c(0x32);
  iVar3 = iVar3 + *(int *)(this + 0x54) / 2;
  iVar4 = FUN_04bfe30c(200);
  iVar1 = (*(int *)(this + 0x50) - iVar4) / 2;
  iVar5 = FUN_04bfe30c(0x28);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar3,iVar4,iVar5);
  uVar2 = PrimeText_Game::Typeface_CafeteriaBlack_26_Outline;
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,auStack_38,aIStack_28,uVar2,aCStack_18,2,1);
  iVar5 = FUN_04bfe30c(0x28);
  Sexy::StrFormat(L"%d",auStack_30,(ulong)*(uint *)(this + 0xf0));
  iVar6 = FUN_04bfe30c(0x28);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar3 + iVar5,iVar4,iVar6);
  uVar2 = PrimeText_Game::Typeface_FZCuYuan_26_Outline;
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar2,aCStack_18,2,1);
  FUN_05476c50(auStack_30);
  FUN_05476c50(auStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeChallengeEndLevelUI::OnAnimationFinish(std::string const&) */

void __thiscall
TimeChallengeEndLevelUI::OnAnimationFinish(TimeChallengeEndLevelUI *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"windows_in");
  if (bVar1) {
    pPVar3 = *(PopAnimRig **)(this + 0xe0);
    std::string::string(asStack_40,"windows_loop");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  else {
    bVar1 = std::operator==(param_1,"windows_out");
    if (bVar1) {
      this[0xf4] = (TimeChallengeEndLevelUI)0x1;
      iVar2 = FUN_04bfe27c(*(undefined8 *)(this + 0x108),*(undefined8 *)(this + 0x118));
      if (iVar2 != 0) {
        Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
                  ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x100),(SexyURL *)this);
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
/* TimeChallengeEndLevelUI::ButtonDepress(int) */

void __thiscall TimeChallengeEndLevelUI::ButtonDepress(TimeChallengeEndLevelUI *this,int param_1)

{
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 100) {
    pPVar1 = *(PopAnimRig **)(this + 0xe0);
    std::string::string(asStack_58,"windows_out");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnAnimationFinish);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<TimeChallengeEndLevelUI,void(TimeChallengeEndLevelUI::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to TimeChallengeEndLevelUI::ButtonDepress(int) */

void __thiscall TimeChallengeEndLevelUI::ButtonDepress(TimeChallengeEndLevelUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeChallengeEndLevelUI::TimeChallengeEndLevelUI() */

void __thiscall TimeChallengeEndLevelUI::TimeChallengeEndLevelUI(TimeChallengeEndLevelUI *this)

{
  LawnApp *pLVar1;
  PVZ2UIButton *pPVar2;
  PopAnim *pPVar3;
  PopAnimRig *pPVar4;
  undefined1 auStack_b0 [8];
  Delegate1<std::string_const&> aDStack_a8 [48];
  string asStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_0697f3f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0697f718;
  *(undefined4 *)(this + 0xf0) = 0;
  this[0xf4] = (TimeChallengeEndLevelUI)0x0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xf8));
  Sexy::Delegate1<TimeChallengeEndLevelUI*>::Delegate1((DummyInit *)(this + 0x100));
  pLVar1 = gLawnApp;
  std::string::string(asStack_40,"UI_EndLevel");
  LawnApp::LoadGroup(pLVar1,asStack_40);
  std::string::~string(asStack_40);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_40,"EndLevelAward");
  LawnApp::LoadGroup(pLVar1,asStack_40);
  std::string::~string(asStack_40);
  nop();
  FUN_05478178(asStack_78,L"[PVP_PLAYBACK_CONTINUE]",auStack_b0);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar2 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar2,100,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar2;
  FUN_05476c50(asStack_78);
  nop();
  pPVar2 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b8d260,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b8d208,3);
  PVZ2UIButton::SetDialogStates(pPVar2,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)asStack_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe8));
  pPVar3 = CachedResourcePtr::operator_cast_to_PopAnim_((CachedResourcePtr *)&DAT_06b8d2a8);
  pPVar4 = PopAnimRig::CreateRigOutsideTable<PopAnimRig>(pPVar3);
  *(PopAnimRig **)(this + 0xe0) = pPVar4;
  std::string::string(asStack_78,"windows_in");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnAnimationFinish);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<TimeChallengeEndLevelUI,void(TimeChallengeEndLevelUI::*)(std::string_const&)>
            (aDStack_a8,asStack_40);
  PopAnimRig::PlayAndStop(pPVar4,asStack_78,0,aDStack_a8);
  std::string::~string(asStack_78);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeChallengeEndLevelUI::Resize(int, int, int, int) */

void __thiscall
TimeChallengeEndLevelUI::Resize
          (TimeChallengeEndLevelUI *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  LotteryResultProgressBar *pLVar9;
  SalesProgressBar *pSVar10;
  long *plVar11;
  code *pcVar12;
  float fVar13;
  float fVar14;
  float local_38;
  float local_34;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  if (*(long *)(this + 0xe0) != 0) {
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    lVar8 = FUN_04bfe298(*(undefined8 *)(*(long *)(this + 0xe0) + 0x20));
    if (lVar8 == 0) goto LAB_04bfead4;
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_38,(float)*(int *)(lVar8 + 0x3c),(float)*(int *)(lVar8 + 0x40));
    local_38 = *(float *)(lVar8 + 0x28) * local_38;
    local_34 = *(float *)(lVar8 + 0x28) * local_34;
    fVar14 = (float)*(int *)(this + 0x54) - local_34;
    fVar13 = ((float)*(int *)(this + 0x50) - local_38) * 0.5;
    *(float *)(this + 0xf8) = fVar13;
    iVar2 = FUN_04bfe30c(0x28);
    fVar14 = (float)iVar2 + fVar14 * 0.5;
    *(float *)(this + 0xfc) = fVar14;
    FUN_04bfe260(fVar13,fVar14,auStack_28,auStack_1c);
    PopAnimRig::SetRenderTransform(*(PopAnimRig **)(this + 0xe0),aSStack_30);
  }
  plVar11 = *(long **)(this + 0xe8);
  if (plVar11 != (long *)0x0) {
    iVar2 = *(int *)(this + 0x50);
    pcVar12 = *(code **)(*plVar11 + 0x198);
    pLVar9 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d260);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
    iVar1 = *(int *)(this + 0x54);
    pSVar10 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d260);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar10);
    iVar5 = FUN_04bfe30c(0xf);
    pLVar9 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d260);
    uVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
    pSVar10 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d260);
    uVar7 = SalesProgressBar::GetCurrentLevel(pSVar10);
    (*pcVar12)(plVar11,iVar2 / 2 - iVar3 / 2,(iVar1 - iVar4) - iVar5,uVar6,uVar7);
  }
LAB_04bfead4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TimeChallengeEndLevelUI::Update() */

void __thiscall TimeChallengeEndLevelUI::Update(TimeChallengeEndLevelUI *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  this_00 = *(PopAnimRig **)(this + 0xe0);
  if (this_00 != (PopAnimRig *)0x0) {
    fVar1 = (float)PVZ_T();
    fVar2 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeChallengeEndLevelUI::Draw(Sexy::Graphics*) */

void __thiscall TimeChallengeEndLevelUI::Draw(TimeChallengeEndLevelUI *this,Graphics *param_1)

{
  char cVar1;
  GraphicsAutoState aGStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  cVar1 = IsFinished(this);
  if (cVar1 == '\0') {
    Sexy::Insets::Insets(aIStack_18,0,0,0,0x80);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    Sexy::Graphics::FillRect(param_1,(TRect *)(gLawnApp + 0x71c));
  }
  if (*(PopAnimRig **)(this + 0xe0) != (PopAnimRig *)0x0) {
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0xe0),param_1);
  }
  DrawScore(this,param_1);
  nop();
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

