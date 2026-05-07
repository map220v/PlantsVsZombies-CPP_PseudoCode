// Class: ArenaPVPStartButton


/* ArenaPVPStartButton::cancelTouch() */

void __thiscall ArenaPVPStartButton::cancelTouch(ArenaPVPStartButton *this)

{
  long lVar1;
  
  *(undefined8 *)(this + 0x178) = 0;
  (**(code **)(*(long *)this + 0xe8))(this,2);
  lVar1 = *(long *)(this + 0x170);
  *(undefined1 *)(lVar1 + 0x70) = 0;
  *(undefined1 *)(lVar1 + 0x71) = 0;
  return;
}


/* ArenaPVPStartButton::~ArenaPVPStartButton() */

void __thiscall ArenaPVPStartButton::~ArenaPVPStartButton(ArenaPVPStartButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06954180;
  *(undefined ***)(this + 0x10) = &PTR__ArenaPVPStartButton_06954320;
  *(undefined ***)(this + 0x168) = &PTR_ButtonPress_06954350;
  if (*(long **)(this + 0x170) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x170) + 0x18))();
  }
  LawnApp::UnregisterBoardTouchGameplayObject(gLawnApp,this);
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to ArenaPVPStartButton::~ArenaPVPStartButton() */

void __thiscall ArenaPVPStartButton::~ArenaPVPStartButton(ArenaPVPStartButton *this)

{
  ~ArenaPVPStartButton(this + -0x10);
  return;
}


/* ArenaPVPStartButton::~ArenaPVPStartButton() */

void __thiscall ArenaPVPStartButton::~ArenaPVPStartButton(ArenaPVPStartButton *this)

{
  ~ArenaPVPStartButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArenaPVPStartButton::~ArenaPVPStartButton() */

void __thiscall ArenaPVPStartButton::~ArenaPVPStartButton(ArenaPVPStartButton *this)

{
  ~ArenaPVPStartButton(this + -0x10);
  return;
}


/* ArenaPVPStartButton::StaticGetClass() */

long * ArenaPVPStartButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArenaPVPStartButton",uVar2,StaticNew);
  return sClass;
}


/* ArenaPVPStartButton::GetClass() const */

long * ArenaPVPStartButton::GetClass(void)

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
  (*pcVar3)(plVar1,"ArenaPVPStartButton",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPVPStartButton::handleTouch(Sexy::Touch const&) */

void __thiscall ArenaPVPStartButton::handleTouch(ArenaPVPStartButton *this,Touch *param_1)

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
switchD_04b161cc_caseD_2:
    uVar4 = 0;
    break;
  case 1:
    if (cVar1 != '\0') {
      if (*(long *)(this + 0x178) == 0) {
        uVar4 = 0;
        ArenaEndingButton::startTouch((ArenaEndingButton *)this,*(ulong *)param_1);
        break;
      }
      goto switchD_04b161cc_caseD_2;
    }
    uVar4 = 0;
    if (*(long *)(this + 0x178) != *(long *)param_1) goto switchD_04b161cc_caseD_2;
    goto LAB_04b161e4;
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
    goto LAB_04b161dc;
  case 4:
    lVar2 = *(long *)param_1;
    uVar4 = 0;
    lVar3 = *(long *)(this + 0x178);
LAB_04b161dc:
    if (lVar2 == lVar3) {
LAB_04b161e4:
      cancelTouch(this);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* ArenaPVPStartButton::onUpdate() */

void __thiscall ArenaPVPStartButton::onUpdate(ArenaPVPStartButton *this)

{
  float fVar1;
  float fVar2;
  
  if (this[0x180] == (ArenaPVPStartButton)0x0) {
    return;
  }
  fVar2 = *(float *)(this + 0x184);
  fVar1 = (float)PVZ_T();
  if (0.0 < fVar2 - fVar1) {
    *(float *)(this + 0x188) = fVar2 - fVar1;
    return;
  }
  this[0x180] = (ArenaPVPStartButton)0x0;
  *(undefined4 *)(this + 0x188) = 0;
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* ArenaPVPStartButton::SetStart(bool) */

void __thiscall ArenaPVPStartButton::SetStart(ArenaPVPStartButton *this,bool param_1)

{
  float fVar1;
  
  this[0x180] = (ArenaPVPStartButton)param_1;
  if (param_1) {
    fVar1 = (float)PVZ_T();
    *(float *)(this + 0x184) = fVar1 + *(float *)(this + 0x18c);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPVPStartButton::ArenaPVPStartButton() */

void __thiscall ArenaPVPStartButton::ArenaPVPStartButton(ArenaPVPStartButton *this)

{
  long lVar1;
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
  undefined4 uVar12;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  wstring awStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x168));
  *(undefined ***)this = &PTR_GetClass_06954180;
  *(undefined ***)(this + 0x10) = &PTR__ArenaPVPStartButton_06954320;
  *(undefined ***)(this + 0x168) = &PTR_ButtonPress_06954350;
  TodStringTranslate(L"[ARENA_PVP_BTN]");
  pPVar4 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83968);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b839c0);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83968);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83968);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  uVar8 = MakeStretchableNewLawnButton
                    (0,(ButtonListener *)(this + 0x168),awStack_80,pPVar4,pIVar5,(Image *)0x0,pIVar6
                     ,iVar2 / 3,iVar3 / 3);
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
  Delegate1wRet<ArenaPVPStartButton,bool(ArenaPVPStartButton::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<ArenaPVPStartButton,void(ArenaPVPStartButton::*)()>
            (aDStack_38,awStack_80);
  Board::RegisterTouchGameplayObject(pBVar11,aDStack_68,9,a_Stack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  this[0x180] = (ArenaPVPStartButton)0x0;
  uVar12 = PVZ_EOT();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x184) = uVar12;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x18c) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaPVPStartButton::StaticNew() */

ArenaPVPStartButton * ArenaPVPStartButton::StaticNew(void)

{
  ArenaPVPStartButton *this;
  
  this = ::operator_new(400);
  ArenaPVPStartButton(this);
  return this;
}


/* ArenaPVPStartButton::onEnterState_Initializing(WidgetState) */

void __thiscall ArenaPVPStartButton::onEnterState_Initializing(ArenaPVPStartButton *this)

{
  nop();
  FUN_04b15f7c(this + 0x38,*(undefined4 *)(*(long *)(this + 0x170) + 0x50));
  FUN_04b15f88(this + 0x3c,*(undefined4 *)(*(long *)(this + 0x170) + 0x54));
  UIWidget::calculatePosition();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPVPStartButton::Draw(Sexy::Graphics*) */

void __thiscall ArenaPVPStartButton::Draw(ArenaPVPStartButton *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  Insets *pIVar5;
  long *plVar6;
  code *pcVar7;
  undefined4 local_48;
  int local_44;
  GraphicsAutoState aGStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [16];
  int local_20;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  cVar1 = FUN_04b16288(*(undefined4 *)(this + 0x68));
  plVar6 = *(long **)(this + 0x170);
  if (cVar1 == '\0') {
    pcVar7 = *(code **)(*plVar6 + 0x170);
    Sexy::Color::Color(aCStack_18,0x80,0x80,0x80);
    (*pcVar7)(plVar6,3,aCStack_18);
  }
  else {
    pcVar7 = *(code **)(*plVar6 + 0x170);
    Sexy::Color::Color(aCStack_18,1);
    (*pcVar7)(plVar6,3,aCStack_18);
  }
  (**(code **)(**(long **)(this + 0x170) + 0x128))(*(long **)(this + 0x170),param_1);
  if (this[0x180] != (ArenaPVPStartButton)0x0) {
    UIWidget::GetDrawRect();
    local_48 = 0;
    local_44 = 0;
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
    FUN_05477b24((Insets *)aCStack_18,*(long *)(this + 0x170) + 0xd8);
    Sexy::PrimeTypeface::SizeString_Paragraph(0,uVar4,(Insets *)aCStack_18,&local_48,&local_44);
    FUN_05476c50((Insets *)aCStack_18);
    iVar2 = FUN_04b16070();
    iVar3 = FUN_04b15f84(*(undefined4 *)(this + 0x3c));
    iVar3 = iVar3 - local_44;
    Sexy::StrFormat(L"%ds",auStack_38,(ulong)(uint)(int)*(float *)(this + 0x188));
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
    FUN_05477b24(auStack_30,auStack_38);
    pIVar5 = (Insets *)FUN_04b15f90(*(undefined8 *)(*(long *)(this + 0x170) + 0x78));
    Sexy::Insets::Insets((Insets *)aCStack_18,pIVar5);
    Sexy::PrimeTypeface::DrawString_Simple
              ((PrimeTypeface *)(float)(local_20 - iVar2),(float)(iVar3 / 2),uVar4,param_1,
               auStack_30,(Insets *)aCStack_18,0);
    FUN_05476c50(auStack_30);
    FUN_05476c50(auStack_38);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ArenaPVPStartButton::Draw(Sexy::Graphics*) */

void __thiscall ArenaPVPStartButton::Draw(ArenaPVPStartButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

