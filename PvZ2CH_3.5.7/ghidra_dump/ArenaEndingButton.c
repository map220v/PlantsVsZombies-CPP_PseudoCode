// Class: ArenaEndingButton


/* ArenaEndingButton::startTouch(unsigned long) */

void __thiscall ArenaEndingButton::startTouch(ArenaEndingButton *this,ulong param_1)

{
  long lVar1;
  
  *(ulong *)(this + 0x178) = param_1;
  (**(code **)(*(long *)this + 0xe8))(this,4);
  lVar1 = *(long *)(this + 0x170);
  *(undefined1 *)(lVar1 + 0x70) = 1;
  *(undefined1 *)(lVar1 + 0x71) = 1;
  return;
}


/* ArenaEndingButton::cancelTouch() */

void __thiscall ArenaEndingButton::cancelTouch(ArenaEndingButton *this)

{
  long lVar1;
  
  *(undefined8 *)(this + 0x178) = 0;
  (**(code **)(*(long *)this + 0xe8))(this,2);
  lVar1 = *(long *)(this + 0x170);
  *(undefined1 *)(lVar1 + 0x70) = 0;
  *(undefined1 *)(lVar1 + 0x71) = 0;
  return;
}


/* ArenaEndingButton::~ArenaEndingButton() */

void __thiscall ArenaEndingButton::~ArenaEndingButton(ArenaEndingButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06954e40;
  *(undefined ***)(this + 0x10) = &PTR__ArenaEndingButton_06954fe0;
  *(undefined ***)(this + 0x168) = &PTR_ButtonPress_06955010;
  if (*(long **)(this + 0x170) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x170) + 0x18))();
  }
  LawnApp::UnregisterBoardTouchGameplayObject(gLawnApp,this);
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to ArenaEndingButton::~ArenaEndingButton() */

void __thiscall ArenaEndingButton::~ArenaEndingButton(ArenaEndingButton *this)

{
  ~ArenaEndingButton(this + -0x10);
  return;
}


/* ArenaEndingButton::~ArenaEndingButton() */

void __thiscall ArenaEndingButton::~ArenaEndingButton(ArenaEndingButton *this)

{
  ~ArenaEndingButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArenaEndingButton::~ArenaEndingButton() */

void __thiscall ArenaEndingButton::~ArenaEndingButton(ArenaEndingButton *this)

{
  ~ArenaEndingButton(this + -0x10);
  return;
}


/* ArenaEndingButton::StaticGetClass() */

long * ArenaEndingButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArenaEndingButton",uVar2,StaticNew);
  return sClass;
}


/* ArenaEndingButton::GetClass() const */

long * ArenaEndingButton::GetClass(void)

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
  (*pcVar3)(plVar1,"ArenaEndingButton",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEndingButton::handleTouch(Sexy::Touch const&) */

void __thiscall ArenaEndingButton::handleTouch(ArenaEndingButton *this,Touch *param_1)

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
      startTouch(this,*(ulong *)param_1);
      break;
    }
  default:
switchD_04b1a018_caseD_2:
    uVar4 = 0;
    break;
  case 1:
    if (cVar1 != '\0') {
      if (*(long *)(this + 0x178) == 0) {
        uVar4 = 0;
        startTouch(this,*(ulong *)param_1);
        break;
      }
      goto switchD_04b1a018_caseD_2;
    }
    uVar4 = 0;
    if (*(long *)(this + 0x178) != *(long *)param_1) goto switchD_04b1a018_caseD_2;
    goto LAB_04b1a030;
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
    goto LAB_04b1a028;
  case 4:
    lVar2 = *(long *)param_1;
    uVar4 = 0;
    lVar3 = *(long *)(this + 0x178);
LAB_04b1a028:
    if (lVar2 == lVar3) {
LAB_04b1a030:
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
/* ArenaEndingButton::ArenaEndingButton() */

void __thiscall ArenaEndingButton::ArenaEndingButton(ArenaEndingButton *this)

{
  PrimeText_PotentialTypeface *pPVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  Image *pIVar5;
  LotteryResultProgressBar *pLVar6;
  undefined8 uVar7;
  long *plVar8;
  code *pcVar9;
  Board *pBVar10;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  wstring awStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x168));
  *(undefined ***)this = &PTR_GetClass_06954e40;
  *(undefined ***)(this + 0x10) = &PTR__ArenaEndingButton_06954fe0;
  *(undefined ***)(this + 0x168) = &PTR_ButtonPress_06955010;
  FUN_05478178(awStack_80,&DAT_056f11a8,aCStack_98);
  pPVar1 = PrimeText_Game::Typeface_FZShaoEr_26_Outline;
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83e88);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83e88);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83e88);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83e88);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  uVar7 = MakeStretchableNewLawnButton
                    (0,(ButtonListener *)(this + 0x168),awStack_80,pPVar1,pIVar4,(Image *)0x0,pIVar5
                     ,iVar2 / 3,iVar3 / 3);
  *(undefined8 *)(this + 0x170) = uVar7;
  FUN_05476c50(awStack_80);
  nop();
  plVar8 = *(long **)(this + 0x170);
  pcVar9 = *(code **)(*plVar8 + 0x170);
  uVar7 = (**(code **)(*plVar8 + 0x178))(plVar8,0);
  (*pcVar9)(plVar8,1,uVar7);
  *(undefined8 *)(this + 0x178) = 0;
  pBVar10 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<ArenaEndingButton,bool(ArenaEndingButton::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<ArenaEndingButton,void(ArenaEndingButton::*)()>(aDStack_38,awStack_80);
  Board::RegisterTouchGameplayObject(pBVar10,aDStack_68,9,a_Stack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  FUN_05478178(awStack_80,L"[ARENA_ENDING_BTN_HEADER]",aCStack_98);
  ArenaOccupyQuitButton::SetLabel((wstring *)this);
  FUN_05476c50(awStack_80);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaEndingButton::StaticNew() */

ArenaEndingButton * ArenaEndingButton::StaticNew(void)

{
  ArenaEndingButton *this;
  
  this = ::operator_new(0x180);
  ArenaEndingButton(this);
  return this;
}


/* ArenaEndingButton::onEnterState_Initializing(WidgetState) */

void __thiscall ArenaEndingButton::onEnterState_Initializing(ArenaEndingButton *this)

{
  nop();
  FUN_04b19de8(this + 0x38,*(undefined4 *)(*(long *)(this + 0x170) + 0x50));
  FUN_04b19df0(this + 0x3c,*(undefined4 *)(*(long *)(this + 0x170) + 0x54));
  UIWidget::calculatePosition();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEndingButton::Draw(Sexy::Graphics*) */

void __thiscall ArenaEndingButton::Draw(ArenaEndingButton *this,Graphics *param_1)

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
  cVar1 = FUN_04b1a0d4(*(undefined4 *)(this + 0x68));
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


/* non-virtual thunk to ArenaEndingButton::Draw(Sexy::Graphics*) */

void __thiscall ArenaEndingButton::Draw(ArenaEndingButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

