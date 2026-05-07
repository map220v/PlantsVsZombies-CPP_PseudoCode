// Class: ArenaOccupyQuitButton


/* ArenaOccupyQuitButton::SetLabel(std::wstring const&) */

void ArenaOccupyQuitButton::SetLabel(wstring *param_1)

{
  SettingsDialogPane::SetTitle(*(SettingsDialogPane **)(param_1 + 0x170));
  return;
}


/* ArenaOccupyQuitButton::cancelTouch() */

void __thiscall ArenaOccupyQuitButton::cancelTouch(ArenaOccupyQuitButton *this)

{
  long lVar1;
  
  *(undefined8 *)(this + 0x178) = 0;
  (**(code **)(*(long *)this + 0xe8))(this,2);
  lVar1 = *(long *)(this + 0x170);
  *(undefined1 *)(lVar1 + 0x70) = 0;
  *(undefined1 *)(lVar1 + 0x71) = 0;
  return;
}


/* ArenaOccupyQuitButton::~ArenaOccupyQuitButton() */

void __thiscall ArenaOccupyQuitButton::~ArenaOccupyQuitButton(ArenaOccupyQuitButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06954960;
  *(undefined ***)(this + 0x10) = &PTR__ArenaOccupyQuitButton_06954b00;
  *(undefined ***)(this + 0x168) = &PTR_ButtonPress_06954b30;
  if (*(long **)(this + 0x170) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x170) + 0x18))();
  }
  LawnApp::UnregisterBoardTouchGameplayObject(gLawnApp,this);
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to ArenaOccupyQuitButton::~ArenaOccupyQuitButton() */

void __thiscall ArenaOccupyQuitButton::~ArenaOccupyQuitButton(ArenaOccupyQuitButton *this)

{
  ~ArenaOccupyQuitButton(this + -0x10);
  return;
}


/* ArenaOccupyQuitButton::~ArenaOccupyQuitButton() */

void __thiscall ArenaOccupyQuitButton::~ArenaOccupyQuitButton(ArenaOccupyQuitButton *this)

{
  ~ArenaOccupyQuitButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArenaOccupyQuitButton::~ArenaOccupyQuitButton() */

void __thiscall ArenaOccupyQuitButton::~ArenaOccupyQuitButton(ArenaOccupyQuitButton *this)

{
  ~ArenaOccupyQuitButton(this + -0x10);
  return;
}


/* ArenaOccupyQuitButton::StaticGetClass() */

long * ArenaOccupyQuitButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArenaOccupyQuitButton",uVar2,StaticNew);
  return sClass;
}


/* ArenaOccupyQuitButton::GetClass() const */

long * ArenaOccupyQuitButton::GetClass(void)

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
  (*pcVar3)(plVar1,"ArenaOccupyQuitButton",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaOccupyQuitButton::handleTouch(Sexy::Touch const&) */

void __thiscall ArenaOccupyQuitButton::handleTouch(ArenaOccupyQuitButton *this,Touch *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
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
      uVar4 = 1;
      ArenaEndingButton::startTouch((ArenaEndingButton *)this,*(ulong *)param_1);
      break;
    }
  default:
switchD_04b18978_caseD_2:
    uVar4 = 0;
    break;
  case 1:
    if (cVar1 != '\0') {
      if (*(long *)(this + 0x178) == 0) {
        uVar4 = 0;
        ArenaEndingButton::startTouch((ArenaEndingButton *)this,*(ulong *)param_1);
        break;
      }
      goto switchD_04b18978_caseD_2;
    }
    uVar4 = 0;
    if (*(long *)(this + 0x178) != *(long *)param_1) goto switchD_04b18978_caseD_2;
    goto LAB_04b18990;
  case 3:
    lVar2 = *(long *)param_1;
    lVar3 = *(long *)(this + 0x178);
    if ((cVar1 == '\0') || (lVar2 != lVar3)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
      MessageRouter::Post((_func_void *)gMessageRouter);
      lVar2 = *(long *)param_1;
      lVar3 = *(long *)(this + 0x178);
    }
    goto LAB_04b18988;
  case 4:
    lVar2 = *(long *)param_1;
    uVar4 = 0;
    lVar3 = *(long *)(this + 0x178);
LAB_04b18988:
    if (lVar2 == lVar3) {
LAB_04b18990:
      cancelTouch(this);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaOccupyQuitButton::ArenaOccupyQuitButton() */

void __thiscall ArenaOccupyQuitButton::ArenaOccupyQuitButton(ArenaOccupyQuitButton *this)

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
  CBMemberTranslatorX aCStack_98 [24];
  wstring awStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x168));
  *(undefined ***)this = &PTR_GetClass_06954960;
  *(undefined ***)(this + 0x10) = &PTR__ArenaOccupyQuitButton_06954b00;
  *(undefined ***)(this + 0x168) = &PTR_ButtonPress_06954b30;
  TodStringTranslate(L"[ARENA_PVP_OCCUPY_QUIT_BTN]");
  pPVar4 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83c78);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83cc8);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83c78);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83c78);
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
                    (0,(ButtonListener *)(this + 0x168),awStack_80,pPVar4,pIVar5,(Image *)0x0,pIVar6
                     ,iVar1 >> 2,iVar2 >> 2);
  *(undefined8 *)(this + 0x170) = uVar8;
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
  Delegate1wRet<ArenaOccupyQuitButton,bool(ArenaOccupyQuitButton::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<ArenaOccupyQuitButton,void(ArenaOccupyQuitButton::*)()>
            (aDStack_38,awStack_80);
  Board::RegisterTouchGameplayObject(pBVar11,aDStack_68,9,a_Stack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaOccupyQuitButton::StaticNew() */

ArenaOccupyQuitButton * ArenaOccupyQuitButton::StaticNew(void)

{
  ArenaOccupyQuitButton *this;
  
  this = ::operator_new(0x180);
  ArenaOccupyQuitButton(this);
  return this;
}


/* ArenaOccupyQuitButton::onEnterState_Initializing(WidgetState) */

void __thiscall ArenaOccupyQuitButton::onEnterState_Initializing(ArenaOccupyQuitButton *this)

{
  nop();
  FUN_04b18748(this + 0x38,*(undefined4 *)(*(long *)(this + 0x170) + 0x50));
  FUN_04b18750(this + 0x3c,*(undefined4 *)(*(long *)(this + 0x170) + 0x54));
  UIWidget::calculatePosition();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaOccupyQuitButton::Draw(Sexy::Graphics*) */

void __thiscall ArenaOccupyQuitButton::Draw(ArenaOccupyQuitButton *this,Graphics *param_1)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  GraphicsAutoState aGStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  cVar1 = FUN_04b18a34(*(undefined4 *)(this + 0x68));
  if (cVar1 == '\0') {
    plVar2 = *(long **)(this + 0x170);
    pcVar3 = *(code **)(*plVar2 + 0x170);
    Sexy::Color::Color(aCStack_18,0x80,0x80,0x80);
    (*pcVar3)(plVar2,3,aCStack_18);
  }
  else {
    plVar2 = *(long **)(this + 0x170);
    pcVar3 = *(code **)(*plVar2 + 0x170);
    Sexy::Color::Color(aCStack_18,1);
    (*pcVar3)(plVar2,3,aCStack_18);
  }
  (**(code **)(**(long **)(this + 0x170) + 0x128))(*(long **)(this + 0x170),param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ArenaOccupyQuitButton::Draw(Sexy::Graphics*) */

void __thiscall ArenaOccupyQuitButton::Draw(ArenaOccupyQuitButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

