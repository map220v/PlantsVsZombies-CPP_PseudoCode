// Class: PlantWarsEndLevelUI


/* PlantWarsEndLevelUI::IsFinished() */

PlantWarsEndLevelUI __thiscall PlantWarsEndLevelUI::IsFinished(PlantWarsEndLevelUI *this)

{
  return this[0x10a];
}


/* PlantWarsEndLevelUI::SetContinueCallBack(Sexy::Delegate1<PlantWarsEndLevelUI*> const&) */

void __thiscall
PlantWarsEndLevelUI::SetContinueCallBack(PlantWarsEndLevelUI *this,Delegate1 *param_1)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x110),(Delegate2 *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsEndLevelUI::OnAnimationFinish(std::string const&) */

void __thiscall PlantWarsEndLevelUI::OnAnimationFinish(PlantWarsEndLevelUI *this,string *param_1)

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
    pPVar3 = *(PopAnimRig **)(this + 0x140);
    std::string::string(asStack_40,"windows_loop");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  else {
    bVar1 = std::operator==(param_1,"windows_out");
    if (bVar1) {
      this[0x10a] = (PlantWarsEndLevelUI)0x1;
      iVar2 = FUN_04d9e6c8(*(undefined8 *)(this + 0x118),*(undefined8 *)(this + 0x128));
      if (iVar2 != 0) {
        Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
                  ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x110),(SexyURL *)this);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsEndLevelUI::Update() */

void __thiscall PlantWarsEndLevelUI::Update(PlantWarsEndLevelUI *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  this_00 = *(PopAnimRig **)(this + 0x140);
  if (this_00 != (PopAnimRig *)0x0) {
    fVar1 = (float)PVZ_T();
    fVar2 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsEndLevelUI::ButtonDepress(int) */

void __thiscall PlantWarsEndLevelUI::ButtonDepress(PlantWarsEndLevelUI *this,int param_1)

{
  PlantWarsLevelSelectManager *this_00;
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 100) {
    pPVar1 = *(PopAnimRig **)(this + 0x140);
    std::string::string(asStack_58,"windows_out");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnAnimationFinish);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PlantWarsEndLevelUI,void(PlantWarsEndLevelUI::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  else if (param_1 == 0x65) {
    Board::RestartLevel(*(Board **)(gLawnApp + 0x9f0));
    this_00 = (PlantWarsLevelSelectManager *)
              Sexy::LazySingleton<PlantWarsLevelSelectManager>::GetInstancePtr();
    PlantWarsLevelSelectManager::CloseEndLevelUI(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantWarsEndLevelUI::ButtonDepress(int) */

void __thiscall PlantWarsEndLevelUI::ButtonDepress(PlantWarsEndLevelUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsEndLevelUI::PlantWarsEndLevelUI() */

void __thiscall PlantWarsEndLevelUI::PlantWarsEndLevelUI(PlantWarsEndLevelUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined ***)this = &PTR_GetClass_069bce30;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069bd158;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  this[0x108] = (PlantWarsEndLevelUI)0x0;
  this[0x109] = (PlantWarsEndLevelUI)0x0;
  this[0x10a] = (PlantWarsEndLevelUI)0x0;
  Sexy::Delegate1<PlantWarsEndLevelUI*>::Delegate1((DummyInit *)(this + 0x110));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_EndLevel");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"EndLevelAward");
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
/* PlantWarsEndLevelUI::~PlantWarsEndLevelUI() */

void __thiscall PlantWarsEndLevelUI::~PlantWarsEndLevelUI(PlantWarsEndLevelUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069bd158;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_069bce30;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  if (*(long **)(this + 0x140) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x140) + 0x18))();
    *(undefined8 *)(this + 0x140) = 0;
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
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsEndLevelUI::~PlantWarsEndLevelUI() */

void __thiscall PlantWarsEndLevelUI::~PlantWarsEndLevelUI(PlantWarsEndLevelUI *this)

{
  ~PlantWarsEndLevelUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsEndLevelUI::DrawScore(Sexy::Graphics*) */

void __thiscall PlantWarsEndLevelUI::DrawScore(PlantWarsEndLevelUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Image *pIVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  undefined1 auStack_58 [8];
  GraphicsAutoState aGStack_50 [8];
  wstring awStack_48 [8];
  undefined1 auStack_40 [8];
  int local_38;
  int local_34;
  int local_30;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04d9f494(0xbe);
  iVar2 = FUN_04d9f494(0x9b);
  Sexy::Insets::Insets
            ((Insets *)&local_38,(*(int *)(this + 0x50) - iVar1) / 2,*(int *)(this + 0x54) / 2,iVar1
             ,iVar2);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_50,param_1);
  Sexy::Graphics::Translate(param_1,local_38,local_34);
  Sexy::Color::Color(aCStack_18,99,0x19,0x10);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  iVar1 = local_30;
  iVar2 = FUN_04d9f494(0x14);
  Sexy::Insets::Insets((Insets *)aCStack_18,0,0,iVar1,iVar2);
  Sexy::Graphics::FillRect(param_1,(TRect *)aCStack_18);
  FUN_05478178(awStack_48,L"[INTEGRAL_NUM]",auStack_58);
  TodReplaceNumberString(awStack_48,L"{NUM}",*(int *)(this + 0xe0));
  iVar1 = local_30;
  iVar2 = FUN_04d9f494(0x14);
  Sexy::Insets::Insets(aIStack_28,0,0,iVar1,iVar2);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
  Sexy::Color::Color(aCStack_18,3);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar5,aCStack_18,5,1);
  FUN_05476c50(auStack_40);
  FUN_05476c50(awStack_48);
  nop();
  FUN_05478178(awStack_48,L"[NODE_ONE_SCORE]",auStack_58);
  TodReplaceNumberString(awStack_48,L"{NUM}",*(int *)(this + 0xe4));
  iVar1 = FUN_04d9f494(0x14);
  Sexy::Insets::Insets(aIStack_28,0,iVar1,local_30,iVar1);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar5,aCStack_18,3,1);
  FUN_05476c50(auStack_40);
  FUN_05476c50(awStack_48);
  nop();
  FUN_05478178(awStack_48,L"[NODE_TWO_SCORE]",auStack_58);
  TodReplaceNumberString(awStack_48,L"{NUM}",*(int *)(this + 0xe8));
  iVar1 = FUN_04d9f494(0x6e);
  iVar2 = FUN_04d9f494(0x14);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,local_30,iVar2);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar5,aCStack_18,3,1);
  FUN_05476c50(auStack_40);
  FUN_05476c50(awStack_48);
  nop();
  Sexy::Color::Color(aCStack_18,99,0x19,0x10);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  iVar2 = FUN_04d9f494(0x28);
  iVar1 = local_30;
  iVar3 = FUN_04d9f494(0x14);
  Sexy::Insets::Insets((Insets *)aCStack_18,0,iVar2,iVar1,iVar3);
  Sexy::Graphics::FillRect(param_1,(TRect *)aCStack_18);
  TodStringTranslate(L"[LEVEL_PASS_TOGAL]");
  iVar2 = FUN_04d9f494(0x28);
  iVar1 = local_30;
  iVar3 = FUN_04d9f494(0x14);
  Sexy::Insets::Insets(aIStack_28,0,iVar2,iVar1,iVar3);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
  Sexy::Color::Color(aCStack_18,3);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar5,aCStack_18,5,1);
  FUN_05476c50(auStack_40);
  TodStringTranslate(L"[PLANTWARS_WORLD_LEVEL_PASS_CONDITION]");
  iVar2 = FUN_04d9f494(0x14);
  iVar3 = FUN_04d9f494(0x3c);
  iVar1 = local_30;
  iVar4 = FUN_04d9f494(0x28);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,iVar1 - iVar4,iVar2);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar5,aCStack_18,3,1);
  FUN_05476c50(auStack_40);
  if (this[0x108] != (PlantWarsEndLevelUI)0x0) {
    Sexy::Color::Color(aCStack_18,99,0x19,0x10);
    Sexy::Graphics::SetColor(param_1,aCStack_18);
    iVar2 = FUN_04d9f494(0x50);
    iVar1 = local_30;
    iVar3 = FUN_04d9f494(0x14);
    Sexy::Insets::Insets((Insets *)aCStack_18,0,iVar2,iVar1,iVar3);
    Sexy::Graphics::FillRect(param_1,(TRect *)aCStack_18);
    TodStringTranslate(L"[STAR_TOGAL]");
    iVar2 = FUN_04d9f494(0x50);
    iVar1 = local_30;
    iVar3 = FUN_04d9f494(0x14);
    Sexy::Insets::Insets(aIStack_28,0,iVar2,iVar1,iVar3);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
    Sexy::Color::Color(aCStack_18,3);
    WriteWordInRect(param_1,auStack_40,aIStack_28,uVar5,aCStack_18,5,1);
    FUN_05476c50(auStack_40);
    uVar9 = 0;
    while( true ) {
      uVar5 = *(undefined8 *)(this + 0xf0);
      uVar7 = FUN_04d9e734(uVar5,*(undefined8 *)(this + 0xf8));
      if (uVar7 <= uVar9) break;
      piVar8 = (int *)FUN_04d9e83c(uVar5,uVar9);
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99198;
      if (*piVar8 <= *(int *)(this + 0xe0)) {
        this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b98ea8;
      }
      pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
      iVar1 = FUN_04d9f494(5);
      iVar2 = FUN_04d9f494(100);
      iVar3 = FUN_04d9f494(0x14);
      Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2 + iVar3 * (int)uVar9,iVar3,iVar3);
      FUN_05478178(awStack_48,L"[RIFT_RESULT_SCREEN_LABEL_GET_SCORE]",auStack_58);
      piVar8 = (int *)FUN_04d9e83c(*(undefined8 *)(this + 0xf0),uVar9);
      TodReplaceNumberString(awStack_48,L"{NUMS}",*piVar8);
      iVar1 = FUN_04d9f494(0x28);
      iVar2 = FUN_04d9f494(100);
      iVar3 = FUN_04d9f494(0x14);
      Sexy::Insets::Insets(aIStack_28,iVar1,iVar2 + iVar3 * (int)uVar9,local_30,iVar3);
      uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
      Sexy::Color::Color(aCStack_18,1);
      WriteWordInRect(param_1,auStack_40,aIStack_28,uVar5,aCStack_18,3,1);
      FUN_05476c50(auStack_40);
      FUN_05476c50(awStack_48);
      nop();
      uVar9 = uVar9 + 1;
    }
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsEndLevelUI::Draw(Sexy::Graphics*) */

void __thiscall PlantWarsEndLevelUI::Draw(PlantWarsEndLevelUI *this,Graphics *param_1)

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
  if (*(PopAnimRig **)(this + 0x140) != (PopAnimRig *)0x0) {
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x140),param_1);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsEndLevelUI::ReSizeAnimPosition() */

void __thiscall PlantWarsEndLevelUI::ReSizeAnimPosition(PlantWarsEndLevelUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  LotteryResultProgressBar *pLVar11;
  SalesProgressBar *pSVar12;
  long *plVar13;
  code *pcVar14;
  float fVar15;
  float fVar16;
  float local_38;
  float local_34;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x140) != 0) {
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    lVar10 = FUN_04d9e72c(*(undefined8 *)(*(long *)(this + 0x140) + 0x20));
    if (lVar10 == 0) goto LAB_04da5d5c;
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_38,(float)*(int *)(lVar10 + 0x3c),(float)*(int *)(lVar10 + 0x40))
    ;
    fVar16 = *(float *)(lVar10 + 0x28) * local_38;
    local_34 = *(float *)(lVar10 + 0x28) * local_34;
    fVar15 = (float)*(int *)(this + 0x54) - local_34;
    local_38 = fVar16;
    iVar2 = FUN_04d9f494(0x28);
    FUN_04d9e6a4((float)(int)(((float)*(int *)(this + 0x50) - fVar16) * 0.5),
                 (float)(int)((float)iVar2 + fVar15 * 0.5),auStack_28,auStack_1c);
    PopAnimRig::SetRenderTransform(*(PopAnimRig **)(this + 0x140),aSStack_30);
  }
  plVar13 = *(long **)(this + 0x150);
  if (plVar13 != (long *)0x0) {
    iVar2 = *(int *)(this + 0x50);
    pcVar14 = *(code **)(*plVar13 + 0x198);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b995d0);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    iVar4 = FUN_04d9f494(100);
    iVar1 = *(int *)(this + 0x54);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b995d0);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
    iVar6 = FUN_04d9f494(0xf);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b995d0);
    uVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b995d0);
    uVar8 = SalesProgressBar::GetCurrentLevel(pSVar12);
    (*pcVar14)(plVar13,(iVar2 / 2 - iVar3 / 2) + iVar4,(iVar1 - iVar5) - iVar6,uVar7,uVar8);
  }
  plVar13 = *(long **)(this + 0x148);
  if (plVar13 != (long *)0x0) {
    iVar2 = *(int *)(this + 0x50);
    pcVar14 = *(code **)(*plVar13 + 0x198);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b995d0);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    iVar4 = FUN_04d9f494(0x8c);
    iVar1 = *(int *)(this + 0x54);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b995d0);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
    iVar6 = FUN_04d9f494(0xf);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b995d0);
    iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b995d0);
    uVar7 = SalesProgressBar::GetCurrentLevel(pSVar12);
    (*pcVar14)(plVar13,(iVar2 / 2 - iVar3 / 2) - iVar4,(iVar1 - iVar5) - iVar6,
               (int)((float)iVar9 * 1.5),uVar7);
  }
LAB_04da5d5c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsEndLevelUI::ShowReward() */

void __thiscall PlantWarsEndLevelUI::ShowReward(PlantWarsEndLevelUI *this)

{
  undefined8 uVar1;
  char cVar2;
  PlantWarsNetworkMgr *this_00;
  PlantWarsEndOfPlayData *pPVar3;
  CommonRewardDisplay *this_01;
  int *piVar4;
  Widget *pWVar5;
  ulong uVar6;
  ulong uVar7;
  GAME_ITEM_INFO aGStack_88 [48];
  PlantWarsEndOfPlayData aPStack_58 [48];
  undefined8 local_28;
  undefined8 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x109] != (PlantWarsEndLevelUI)0x0) {
    this_00 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
    pPVar3 = (PlantWarsEndOfPlayData *)PlantWarsNetworkMgr::GetEndPlayData(this_00);
    PlantWarsEndOfPlayData::PlantWarsEndOfPlayData(aPStack_58,pPVar3);
    cVar2 = std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::empty
                      ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_28);
    if (cVar2 == '\0') {
      this_01 = (CommonRewardDisplay *)UISingletonDialog<CommonRewardDisplay>::ShowDialog();
      for (uVar7 = 0; uVar1 = local_28, uVar6 = FUN_04d9e77c(local_28,local_20), uVar7 < uVar6;
          uVar7 = uVar7 + 1) {
        piVar4 = (int *)FUN_04d9e790(uVar1,uVar7);
        ProfileChangeItemAmount(*piVar4,piVar4[1],false);
        GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_88);
        piVar4 = (int *)FUN_04d9e790(local_28,uVar7);
        pWVar5 = (Widget *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar4,piVar4[1],true);
        CommonRewardDisplay::AddItemWidget(this_01,pWVar5);
      }
    }
    PlantWarsEndOfPlayData::~PlantWarsEndOfPlayData(aPStack_58);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsEndLevelUI::Init(bool, bool) */

void __thiscall PlantWarsEndLevelUI::Init(PlantWarsEndLevelUI *this,bool param_1,bool param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  PopAnim *pPVar4;
  PopAnimRig *pPVar5;
  PVZ2UIButton *pPVar6;
  PlantWarsNetworkMgr *pPVar7;
  PlantWarsEndOfPlayData *pPVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uVar14;
  undefined1 auStack_c8 [8];
  Delegate1<std::string_const&> aDStack_c0 [48];
  string asStack_90 [56];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_40;
  undefined8 local_38;
  long local_8;
  CachedResourcePtr *this_00;
  
  local_8 = ___stack_chk_guard;
  this[0x108] = (PlantWarsEndLevelUI)param_1;
  this[0x109] = (PlantWarsEndLevelUI)param_2;
  if (param_1) {
    this_00 = (CachedResourcePtr *)&DAT_06b99378;
  }
  else {
    this_00 = (CachedResourcePtr *)&DAT_06b99038;
  }
  pPVar4 = CachedResourcePtr::operator_cast_to_PopAnim_(this_00);
  pPVar5 = PopAnimRig::CreateRigOutsideTable<PopAnimRig>(pPVar4);
  *(PopAnimRig **)(this + 0x140) = pPVar5;
  std::string::string(asStack_90,"windows_in");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnAnimationFinish);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantWarsEndLevelUI,void(PlantWarsEndLevelUI::*)(std::string_const&)>
            (aDStack_c0,(PlantWarsEndOfPlayData *)&local_58);
  PopAnimRig::PlayAndStop(pPVar5,asStack_90,0,aDStack_c0);
  std::string::~string(asStack_90);
  nop();
  FUN_05478178(asStack_90,L"[PVP_PLAYBACK_CONTINUE]",auStack_c8);
  Sexy::Color::Color((Color *)&local_58,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar6,100,(ButtonListener *)(this + 0xd8),(wstring *)asStack_90,(Color *)&local_58);
  *(PVZ2UIButton **)(this + 0x150) = pPVar6;
  FUN_05476c50(asStack_90);
  nop();
  pPVar6 = *(PVZ2UIButton **)(this + 0x150);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_90,&DAT_06b995d0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_58,&DAT_06b98c70,3);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)asStack_90,(PVZ2UIImage *)&local_58);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x150));
  FUN_05478178(asStack_90,L"[RESTART_BUTTON]",auStack_c8);
  Sexy::Color::Color((Color *)&local_58,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar6,0x65,(ButtonListener *)(this + 0xd8),(wstring *)asStack_90,(Color *)&local_58);
  *(PVZ2UIButton **)(this + 0x148) = pPVar6;
  FUN_05476c50(asStack_90);
  nop();
  pPVar6 = *(PVZ2UIButton **)(this + 0x148);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_90,&DAT_06b995d0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_58,&DAT_06b98c70,3);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)asStack_90,(PVZ2UIImage *)&local_58);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x148));
  ReSizeAnimPosition(this);
  if (this[0x109] == (PlantWarsEndLevelUI)0x0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_58);
    pPVar7 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
    PlantWarsNetworkMgr::GetCurrentLevelScoreList(pPVar7,(vector *)&local_58);
    cVar2 = std::vector<int,std::allocator<int>>::empty
                      ((vector<int,std::allocator<int>> *)&local_58);
    uVar14 = 0;
    if (cVar2 == '\0') {
      puVar12 = (undefined4 *)FUN_04d9e83c(CONCAT44(uStack_54,local_58),0);
      uVar14 = *puVar12;
    }
    *(undefined4 *)(this + 0xe4) = uVar14;
    *(undefined4 *)(this + 0xe8) = 0;
    *(undefined4 *)(this + 0xe0) = uVar14;
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_58);
  }
  else {
    pPVar7 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
    pPVar8 = (PlantWarsEndOfPlayData *)PlantWarsNetworkMgr::GetEndPlayData(pPVar7);
    PlantWarsEndOfPlayData::PlantWarsEndOfPlayData((PlantWarsEndOfPlayData *)&local_58,pPVar8);
    uVar9 = FUN_04d9e734(local_40,local_38);
    if (uVar9 == 0) {
      iVar3 = -1;
      iVar13 = -2;
      *(undefined4 *)(this + 0xe4) = 0xffffffff;
    }
    else {
      piVar10 = (int *)FUN_04d9e83c(local_40,0);
      iVar13 = *piVar10;
      *(int *)(this + 0xe4) = iVar13;
      if (uVar9 < 2) {
        iVar13 = iVar13 + -1;
        iVar3 = -1;
      }
      else {
        piVar10 = (int *)FUN_04d9e83c(local_40,1);
        iVar3 = *piVar10;
        iVar13 = iVar13 + iVar3;
      }
    }
    *(int *)(this + 0xe8) = iVar3;
    *(int *)(this + 0xe0) = iVar13;
    PlantWarsEndOfPlayData::~PlantWarsEndOfPlayData((PlantWarsEndOfPlayData *)&local_58);
  }
  lVar11 = Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  iVar3 = FUN_04d9e730(*(undefined4 *)(lVar11 + 0xf8));
  iVar13 = 0;
  do {
    pPVar7 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
    iVar1 = iVar13 + 1;
    local_58 = PlantWarsNetworkMgr::GetLevelTargetStarInfoScore(pPVar7,iVar3,iVar13);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)(this + 0xf0),(int *)&local_58);
    iVar13 = iVar1;
  } while (iVar1 != 3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

