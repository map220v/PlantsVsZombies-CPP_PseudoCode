// Class: ArenaOccupyStartButton


/* ArenaOccupyStartButton::cancelTouch() */

void __thiscall ArenaOccupyStartButton::cancelTouch(ArenaOccupyStartButton *this)

{
  long lVar1;
  
  *(undefined8 *)(this + 0x178) = 0;
  (**(code **)(*(long *)this + 0xe8))(this,2);
  lVar1 = *(long *)(this + 0x170);
  *(undefined1 *)(lVar1 + 0x70) = 0;
  *(undefined1 *)(lVar1 + 0x71) = 0;
  return;
}


/* ArenaOccupyStartButton::~ArenaOccupyStartButton() */

void __thiscall ArenaOccupyStartButton::~ArenaOccupyStartButton(ArenaOccupyStartButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06954740;
  *(undefined ***)(this + 0x10) = &PTR__ArenaOccupyStartButton_069548e0;
  *(undefined ***)(this + 0x168) = &PTR_ButtonPress_06954910;
  if (*(long **)(this + 0x170) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x170) + 0x18))();
  }
  LawnApp::UnregisterBoardTouchGameplayObject(gLawnApp,this);
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to ArenaOccupyStartButton::~ArenaOccupyStartButton() */

void __thiscall ArenaOccupyStartButton::~ArenaOccupyStartButton(ArenaOccupyStartButton *this)

{
  ~ArenaOccupyStartButton(this + -0x10);
  return;
}


/* ArenaOccupyStartButton::~ArenaOccupyStartButton() */

void __thiscall ArenaOccupyStartButton::~ArenaOccupyStartButton(ArenaOccupyStartButton *this)

{
  ~ArenaOccupyStartButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArenaOccupyStartButton::~ArenaOccupyStartButton() */

void __thiscall ArenaOccupyStartButton::~ArenaOccupyStartButton(ArenaOccupyStartButton *this)

{
  ~ArenaOccupyStartButton(this + -0x10);
  return;
}


/* ArenaOccupyStartButton::StaticGetClass() */

long * ArenaOccupyStartButton::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"ArenaOccupyStartButton",uVar2,StaticNew);
  return sClass;
}


/* ArenaOccupyStartButton::GetClass() const */

long * ArenaOccupyStartButton::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"ArenaOccupyStartButton",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaOccupyStartButton::SetPVPCoin(int) */

void ArenaOccupyStartButton::SetPVPCoin(int param_1)

{
  wstring *pwVar1;
  uint in_w1;
  int in_w3;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  pwVar1 = (wstring *)(ulong)(uint)param_1;
  *(uint *)(pwVar1 + 0x180) = in_w1;
  local_8 = ___stack_chk_guard;
  if ((int)in_w1 < 0) {
    FUN_05478178(awStack_20,L"[ARENA_PVP_OCCUPY_BTN]",auStack_30);
    FUN_05478178((wstring *)asStack_18,&DAT_056f11a8,auStack_28);
    TodReplaceString(awStack_20,L"{CURRENCY_COST}",(wstring *)asStack_18);
    ArenaOccupyQuitButton::SetLabel(pwVar1);
    FUN_05476c50(auStack_10);
    FUN_05476c50((wstring *)asStack_18);
    nop();
    FUN_05476c50(awStack_20);
    nop();
  }
  else {
    std::string::string(asStack_18,"[ARENA_PVP_OCCUPY_BTN]");
    StringHelper::ReplaceNumberString
              ((StringHelper *)asStack_18,(string *)L"{CURRENCY_COST}",(wchar_t *)(ulong)in_w1,in_w3
              );
    ArenaOccupyQuitButton::SetLabel(pwVar1);
    FUN_05476c50(auStack_10);
    std::string::~string(asStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaOccupyStartButton::handleTouch(Sexy::Touch const&) */

void __thiscall ArenaOccupyStartButton::handleTouch(ArenaOccupyStartButton *this,Touch *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  Touch aTStack_40 [16];
  int local_30;
  int local_2c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Touch::Touch(aTStack_40,param_1);
  Board::TranslateBoardPositionToScreenPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
  cVar1 = (**(code **)(*(long *)this + 0xa8))
                    (this,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48) + local_30,
                     *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c) + local_2c);
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 0:
    if ((cVar1 != '\0') && (*(long *)(this + 0x178) == 0)) {
      uVar5 = 1;
      ArenaEndingButton::startTouch((ArenaEndingButton *)this,*(ulong *)param_1);
      break;
    }
  default:
switchD_04b180d0_caseD_2:
    uVar5 = 0;
    break;
  case 1:
    if (cVar1 != '\0') {
      if (*(long *)(this + 0x178) == 0) {
        uVar5 = 0;
        ArenaEndingButton::startTouch((ArenaEndingButton *)this,*(ulong *)param_1);
        break;
      }
      goto switchD_04b180d0_caseD_2;
    }
    uVar5 = 0;
    if (*(long *)(this + 0x178) != *(long *)param_1) goto switchD_04b180d0_caseD_2;
    goto LAB_04b180e8;
  case 3:
    lVar3 = *(long *)param_1;
    lVar4 = *(long *)(this + 0x178);
    if ((cVar1 == '\0') || (lVar3 != lVar4)) {
      uVar5 = 0;
    }
    else {
      lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      iVar2 = FUN_04b17d40(*(undefined4 *)(lVar3 + 0x128));
      if (iVar2 == 1) {
        uVar5 = 1;
        MessageRouter::Post((_func_void *)gMessageRouter);
        lVar3 = *(long *)param_1;
        lVar4 = *(long *)(this + 0x178);
      }
      else {
        uVar5 = 1;
        MessageRouter::Post((_func_void *)gMessageRouter);
        lVar3 = *(long *)param_1;
        lVar4 = *(long *)(this + 0x178);
      }
    }
    goto LAB_04b180e0;
  case 4:
    lVar3 = *(long *)param_1;
    uVar5 = 0;
    lVar4 = *(long *)(this + 0x178);
LAB_04b180e0:
    if (lVar3 == lVar4) {
LAB_04b180e8:
      cancelTouch(this);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaOccupyStartButton::ArenaOccupyStartButton() */

void __thiscall ArenaOccupyStartButton::ArenaOccupyStartButton(ArenaOccupyStartButton *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  PrimeTypeface *pPVar4;
  Image *pIVar5;
  Image *pIVar6;
  LotteryResultProgressBar *pLVar7;
  undefined8 uVar8;
  long *plVar9;
  code *pcVar10;
  Board *pBVar11;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  wstring awStack_98 [24];
  wstring awStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x168));
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined ***)this = &PTR_GetClass_06954740;
  *(undefined ***)(this + 0x10) = &PTR__ArenaOccupyStartButton_069548e0;
  *(undefined ***)(this + 0x168) = &PTR_ButtonPress_06954910;
  TodStringTranslate(L"[ARENA_PVP_OCCUPY_BTN]");
  TodReplaceNumberString(awStack_80,L"{CURRENCY_COST}",500);
  pPVar4 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83b88);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83c10);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83b88);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83b88);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = iVar3 + 3;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  uVar8 = MakeStretchableNewLawnButton
                    (0,(ButtonListener *)(this + 0x168),awStack_98,pPVar4,pIVar5,(Image *)0x0,pIVar6
                     ,iVar1 >> 2,iVar2 >> 2);
  *(undefined8 *)(this + 0x170) = uVar8;
  FUN_05476c50(awStack_98);
  FUN_05476c50(awStack_80);
  plVar9 = *(long **)(this + 0x170);
  pcVar10 = *(code **)(*plVar9 + 0x170);
  uVar8 = (**(code **)(*plVar9 + 0x178))(plVar9,0);
  (*pcVar10)(plVar9,1,uVar8);
  *(undefined8 *)(this + 0x178) = 0;
  pBVar11 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<ArenaOccupyStartButton,bool(ArenaOccupyStartButton::*)(Sexy::Touch_const&)>
            (aDStack_68,awStack_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<ArenaOccupyStartButton,void(ArenaOccupyStartButton::*)()>
            (aDStack_38,awStack_80);
  Board::RegisterTouchGameplayObject(pBVar11,aDStack_68,9,a_Stack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaOccupyStartButton::StaticNew() */

ArenaOccupyStartButton * ArenaOccupyStartButton::StaticNew(void)

{
  ArenaOccupyStartButton *this;
  
  this = ::operator_new(0x188);
  ArenaOccupyStartButton(this);
  return this;
}


/* ArenaOccupyStartButton::onEnterState_Initializing(WidgetState) */

void __thiscall ArenaOccupyStartButton::onEnterState_Initializing(ArenaOccupyStartButton *this)

{
  nop();
  FUN_04b17d2c(this + 0x38,*(undefined4 *)(*(long *)(this + 0x170) + 0x50));
  FUN_04b17d38(this + 0x3c,*(undefined4 *)(*(long *)(this + 0x170) + 0x54));
  UIWidget::calculatePosition();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaOccupyStartButton::Draw(Sexy::Graphics*) */

void __thiscall ArenaOccupyStartButton::Draw(ArenaOccupyStartButton *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  SalesProgressBar *this_00;
  long *plVar6;
  code *pcVar7;
  GraphicsAutoState aGStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  cVar1 = FUN_04b17ffc(*(undefined4 *)(this + 0x68));
  if (cVar1 == '\0') {
    plVar6 = *(long **)(this + 0x170);
    pcVar7 = *(code **)(*plVar6 + 0x170);
    Sexy::Color::Color(aCStack_18,0x80,0x80,0x80);
    (*pcVar7)(plVar6,3,aCStack_18);
  }
  else {
    plVar6 = *(long **)(this + 0x170);
    pcVar7 = *(code **)(*plVar6 + 0x170);
    Sexy::Color::Color(aCStack_18,1);
    (*pcVar7)(plVar6,3,aCStack_18);
  }
  (**(code **)(**(long **)(this + 0x170) + 0x128))(*(long **)(this + 0x170),param_1);
  if (-1 < *(int *)(this + 0x180)) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83b60);
    iVar2 = FUN_04b17e1c();
    iVar3 = FUN_04b17d34(*(undefined4 *)(this + 0x3c));
    this_00 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83b60);
    iVar4 = SalesProgressBar::GetCurrentLevel(this_00);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar2,iVar3 - iVar4 >> 1);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ArenaOccupyStartButton::Draw(Sexy::Graphics*) */

void __thiscall ArenaOccupyStartButton::Draw(ArenaOccupyStartButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

