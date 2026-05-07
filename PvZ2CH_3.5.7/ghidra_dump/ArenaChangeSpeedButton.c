// Class: ArenaChangeSpeedButton


/* ArenaChangeSpeedButton::cancelTouch() */

void __thiscall ArenaChangeSpeedButton::cancelTouch(ArenaChangeSpeedButton *this)

{
  *(undefined8 *)(this + 0x170) = 0;
  (**(code **)(*(long *)this + 0xe8))(this,2);
  return;
}


/* ArenaChangeSpeedButton::~ArenaChangeSpeedButton() */

void __thiscall ArenaChangeSpeedButton::~ArenaChangeSpeedButton(ArenaChangeSpeedButton *this)

{
  *(undefined ***)(this + 0x10) = &PTR__ArenaChangeSpeedButton_06954dc0;
  *(undefined ***)this = &PTR_GetClass_06954c20;
  *(undefined ***)(this + 0x168) = &PTR_ButtonPress_06954df0;
  LawnApp::UnregisterBoardTouchGameplayObject(gLawnApp,this);
  FUN_05476c50(this + 0x180);
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to ArenaChangeSpeedButton::~ArenaChangeSpeedButton() */

void __thiscall ArenaChangeSpeedButton::~ArenaChangeSpeedButton(ArenaChangeSpeedButton *this)

{
  ~ArenaChangeSpeedButton(this + -0x10);
  return;
}


/* ArenaChangeSpeedButton::~ArenaChangeSpeedButton() */

void __thiscall ArenaChangeSpeedButton::~ArenaChangeSpeedButton(ArenaChangeSpeedButton *this)

{
  ~ArenaChangeSpeedButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArenaChangeSpeedButton::~ArenaChangeSpeedButton() */

void __thiscall ArenaChangeSpeedButton::~ArenaChangeSpeedButton(ArenaChangeSpeedButton *this)

{
  ~ArenaChangeSpeedButton(this + -0x10);
  return;
}


/* ArenaChangeSpeedButton::StaticGetClass() */

long * ArenaChangeSpeedButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArenaChangeSpeedButton",uVar2,StaticNew);
  return sClass;
}


/* ArenaChangeSpeedButton::GetClass() const */

long * ArenaChangeSpeedButton::GetClass(void)

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
  (*pcVar3)(plVar1,"ArenaChangeSpeedButton",uVar2,StaticNew);
  return sClass;
}


/* ArenaChangeSpeedButton::startTouch(unsigned long) */

void __thiscall ArenaChangeSpeedButton::startTouch(ArenaChangeSpeedButton *this,ulong param_1)

{
  *(ulong *)(this + 0x170) = param_1;
  (**(code **)(*(long *)this + 0xe8))(this,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaChangeSpeedButton::handleTouch(Sexy::Touch const&) */

void __thiscall ArenaChangeSpeedButton::handleTouch(ArenaChangeSpeedButton *this,Touch *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  float fVar5;
  wstring awStack_50 [8];
  undefined1 auStack_48 [8];
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
    if ((cVar1 != '\0') && (*(long *)(this + 0x170) == 0)) {
      uVar4 = 1;
      startTouch(this,*(ulong *)param_1);
      break;
    }
  default:
switchD_04b1982c_caseD_2:
    uVar4 = 0;
    break;
  case 1:
    if (cVar1 != '\0') {
      if (*(long *)(this + 0x170) == 0) {
        uVar4 = 0;
        startTouch(this,*(ulong *)param_1);
        break;
      }
      goto switchD_04b1982c_caseD_2;
    }
    uVar4 = 0;
    if (*(long *)(this + 0x170) != *(long *)param_1) goto switchD_04b1982c_caseD_2;
    goto LAB_04b19844;
  case 3:
    lVar2 = *(long *)param_1;
    lVar3 = *(long *)(this + 0x170);
    if ((cVar1 == '\0') || (lVar2 != lVar3)) {
      uVar4 = 0;
    }
    else {
      if (*(int *)(this + 0x178) == 0) {
        *(undefined4 *)(this + 0x178) = 1;
        fVar5 = 2.0;
        *(undefined4 *)(this + 0x17c) = 2;
      }
      else if (*(int *)(this + 0x178) == 1) {
        *(undefined4 *)(this + 0x178) = 2;
        fVar5 = 3.0;
        *(undefined4 *)(this + 0x17c) = 3;
      }
      else {
        *(undefined4 *)(this + 0x178) = 0;
        *(undefined4 *)(this + 0x17c) = 1;
        fVar5 = 1.0;
      }
      TodStringTranslate(L"[ARENA_CHANGE_SPEED_BTN]");
      uVar4 = 1;
      TodReplaceNumberString(awStack_50,L"{SPEED}",*(int *)(this + 0x17c));
      FUN_054766c8(this + 0x180,auStack_48);
      FUN_05476c50(auStack_48);
      FUN_05476c50(awStack_50);
      MessageRouter::Post<float,float>((_func_void_float *)gMessageRouter,fVar5);
      lVar2 = *(long *)param_1;
      lVar3 = *(long *)(this + 0x170);
    }
    goto LAB_04b1983c;
  case 4:
    lVar2 = *(long *)param_1;
    uVar4 = 0;
    lVar3 = *(long *)(this + 0x170);
LAB_04b1983c:
    if (lVar2 == lVar3) {
LAB_04b19844:
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
/* ArenaChangeSpeedButton::ArenaChangeSpeedButton() */

void __thiscall ArenaChangeSpeedButton::ArenaChangeSpeedButton(ArenaChangeSpeedButton *this)

{
  Board *pBVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  wstring awStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x168));
  *(undefined ***)this = &PTR_GetClass_06954c20;
  *(undefined ***)(this + 0x10) = &PTR__ArenaChangeSpeedButton_06954dc0;
  *(undefined ***)(this + 0x168) = &PTR_ButtonPress_06954df0;
  FUN_05476574(this + 0x180);
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x17c) = 1;
  *(undefined4 *)(this + 0x178) = 0;
  TodStringTranslate(L"[ARENA_CHANGE_SPEED_BTN]");
  TodReplaceNumberString(awStack_80,L"{SPEED}",*(int *)(this + 0x17c));
  FUN_054766c8(this + 0x180,aCStack_98);
  FUN_05476c50(aCStack_98);
  FUN_05476c50(awStack_80);
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<ArenaChangeSpeedButton,bool(ArenaChangeSpeedButton::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<ArenaChangeSpeedButton,void(ArenaChangeSpeedButton::*)()>
            (aDStack_38,awStack_80);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,9,a_Stack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaChangeSpeedButton::StaticNew() */

ArenaChangeSpeedButton * ArenaChangeSpeedButton::StaticNew(void)

{
  ArenaChangeSpeedButton *this;
  
  this = ::operator_new(0x188);
  ArenaChangeSpeedButton(this);
  return this;
}


/* ArenaChangeSpeedButton::onEnterState_Initializing(WidgetState) */

void __thiscall ArenaChangeSpeedButton::onEnterState_Initializing(void)

{
  nop();
  UIWidget::calculatePosition();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaChangeSpeedButton::Draw(Sexy::Graphics*) */

void __thiscall ArenaChangeSpeedButton::Draw(ArenaChangeSpeedButton *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Image *pIVar7;
  undefined8 uVar8;
  GraphicsAutoState aGStack_40 [8];
  int local_38;
  int local_34;
  int local_30;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  UIWidget::GetDrawRect();
  local_38 = 0;
  local_34 = 0;
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83e30);
  Sexy::Graphics::DrawImage(param_1,pIVar7,0,0);
  iVar3 = FUN_04b19668(0x32);
  iVar1 = local_38 + (local_30 - iVar3) / 2;
  iVar4 = FUN_04b19668(0x1a);
  iVar2 = local_34;
  iVar5 = FUN_04b19668(0xc);
  iVar6 = FUN_04b19668(0x1e);
  Sexy::Insets::Insets(aIStack_28,iVar1 + iVar4,iVar2 + iVar5,iVar3,iVar6);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,this + 0x180,aIStack_28,uVar8,aCStack_18,5,1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ArenaChangeSpeedButton::Draw(Sexy::Graphics*) */

void __thiscall ArenaChangeSpeedButton::Draw(ArenaChangeSpeedButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

