// Class: NextWaveButton


/* NextWaveButton::cancelTouch() */

void __thiscall NextWaveButton::cancelTouch(NextWaveButton *this)

{
  *(undefined8 *)(this + 0x178) = 0;
  (**(code **)(*(long *)this + 0xe8))(this,2);
  return;
}


/* NextWaveButton::CanSetVisible() */

NextWaveButton __thiscall NextWaveButton::CanSetVisible(NextWaveButton *this)

{
  return this[0x189];
}


/* NextWaveButton::~NextWaveButton() */

void __thiscall NextWaveButton::~NextWaveButton(NextWaveButton *this)

{
  *(undefined ***)(this + 0x10) = &PTR__NextWaveButton_0684d2e8;
  *(undefined ***)this = &PTR_GetClass_0684d140;
  *(undefined ***)(this + 0x168) = &PTR_ButtonPress_0684d318;
  LawnApp::UnregisterBoardTouchGameplayObject(gLawnApp,this);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to NextWaveButton::~NextWaveButton() */

void __thiscall NextWaveButton::~NextWaveButton(NextWaveButton *this)

{
  ~NextWaveButton(this + -0x10);
  return;
}


/* NextWaveButton::~NextWaveButton() */

void __thiscall NextWaveButton::~NextWaveButton(NextWaveButton *this)

{
  ~NextWaveButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NextWaveButton::~NextWaveButton() */

void __thiscall NextWaveButton::~NextWaveButton(NextWaveButton *this)

{
  ~NextWaveButton(this + -0x10);
  return;
}


/* NextWaveButton::IsUsable() */

byte __thiscall NextWaveButton::IsUsable(NextWaveButton *this)

{
  byte bVar1;
  
  bVar1 = UIWidget::isInState((UIWidget *)this,3);
  return bVar1 ^ 1;
}


/* NextWaveButton::StaticGetClass() */

long * NextWaveButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NextWaveButton",uVar2,StaticNew);
  return sClass;
}


/* NextWaveButton::GetClass() const */

long * NextWaveButton::GetClass(void)

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
  (*pcVar3)(plVar1,"NextWaveButton",uVar2,StaticNew);
  return sClass;
}


/* NextWaveButton::startTouch(unsigned long) */

void __thiscall NextWaveButton::startTouch(NextWaveButton *this,ulong param_1)

{
  *(ulong *)(this + 0x178) = param_1;
  (**(code **)(*(long *)this + 0xe8))(this,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NextWaveButton::handleTouch(Sexy::Touch const&) */

void __thiscall NextWaveButton::handleTouch(NextWaveButton *this,Touch *param_1)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  NextWaveButton NVar5;
  Touch aTStack_40 [16];
  int local_30;
  int local_2c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Touch::Touch(aTStack_40,param_1);
  Board::TranslateBoardPositionToScreenPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
  bVar2 = (**(code **)(*(long *)this + 0xa8))
                    (this,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48) + local_30,
                     *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c) + local_2c);
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 0:
    NVar5 = (NextWaveButton)(bVar2 & *(long *)(this + 0x178) == 0);
    if (NVar5 != (NextWaveButton)0x0) {
      startTouch(this,*(ulong *)param_1);
    }
    goto LAB_0446769c;
  case 1:
    if ((bVar2 & *(long *)(this + 0x178) == 0) != 0) {
      NVar5 = (NextWaveButton)0x0;
      startTouch(this,*(ulong *)param_1);
      goto LAB_0446769c;
    }
    NVar5 = (NextWaveButton)0x0;
    if (bVar2 != 0 || *(long *)(this + 0x178) != *(long *)param_1) goto LAB_0446769c;
    goto LAB_04467754;
  default:
    NVar5 = (NextWaveButton)0x0;
    goto LAB_0446769c;
  case 3:
    lVar3 = *(long *)param_1;
    lVar4 = *(long *)(this + 0x178);
    if ((bVar2 == 0) || (lVar3 != lVar4)) {
      NVar5 = (NextWaveButton)0x0;
    }
    else {
      NVar5 = this[0x180];
      if ((NVar5 != (NextWaveButton)0x0) && (this[0x188] == (NextWaveButton)0x0)) goto LAB_0446769c;
      MessageRouter::Post((_func_void *)gMessageRouter);
      if ((this[0x180] == (NextWaveButton)0x0) ||
         (iVar1 = *(int *)(this + 0x184), *(int *)(this + 0x184) = iVar1 + -1, iVar1 + -1 != 0)) {
        lVar3 = *(long *)param_1;
        NVar5 = (NextWaveButton)0x1;
        lVar4 = *(long *)(this + 0x178);
      }
      else {
        this[0x188] = (NextWaveButton)0x0;
        NVar5 = (NextWaveButton)0x1;
        lVar3 = *(long *)param_1;
        lVar4 = *(long *)(this + 0x178);
      }
    }
    break;
  case 4:
    lVar3 = *(long *)param_1;
    NVar5 = (NextWaveButton)0x0;
    lVar4 = *(long *)(this + 0x178);
  }
  if (lVar3 == lVar4) {
LAB_04467754:
    cancelTouch(this);
  }
LAB_0446769c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(NVar5);
}


/* NextWaveButton::onGameplayEnded() */

void __thiscall NextWaveButton::onGameplayEnded(NextWaveButton *this)

{
  UIWidget::SetClickable((UIWidget *)this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NextWaveButton::registerForEvents() */

void __thiscall NextWaveButton::registerForEvents(NextWaveButton *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<NextWaveButton,void(NextWaveButton::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::GameplayEnded,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NextWaveButton::NextWaveButton() */

void __thiscall NextWaveButton::NextWaveButton(NextWaveButton *this)

{
  NextWaveButton NVar1;
  Board *pBVar2;
  undefined4 uVar3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x168));
  *(undefined ***)this = &PTR_GetClass_0684d140;
  *(undefined ***)(this + 0x10) = &PTR__NextWaveButton_0684d2e8;
  *(undefined ***)(this + 0x168) = &PTR_ButtonPress_0684d318;
  uVar3 = PVZ_EOT();
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x170) = uVar3;
  NVar1 = (NextWaveButton)RiftUtils::IsRiftTimedLevel();
  this[0x180] = NVar1;
  uVar3 = Reflection::RFunctionType::StaticGetTypeCategory();
  *(undefined4 *)(this + 0x184) = uVar3;
  this[0x188] = (NextWaveButton)0x1;
  this[0x189] = (NextWaveButton)0x1;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<NextWaveButton,bool(NextWaveButton::*)(Sexy::Touch_const&)>(aDStack_68,aCStack_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<NextWaveButton,void(NextWaveButton::*)()>(aDStack_38,aCStack_80);
  Board::RegisterTouchGameplayObject(pBVar2,aDStack_68,9,a_Stack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NextWaveButton::StaticNew() */

NextWaveButton * NextWaveButton::StaticNew(void)

{
  NextWaveButton *this;
  
  this = ::operator_new(400);
  NextWaveButton(this);
  return this;
}


/* NextWaveButton::onEnterState_Initializing(WidgetState) */

void __thiscall NextWaveButton::onEnterState_Initializing(NextWaveButton *this)

{
  undefined4 uVar1;
  LotteryResultProgressBar *pLVar2;
  SalesProgressBar *this_00;
  CachedUIResourcePtr<Sexy::Image> *this_01;
  
  nop();
  if (this[0x180] == (NextWaveButton)0x0) {
    this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09c60;
    pLVar2 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09c60);
    uVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar2);
    FUN_0446743c(this + 0x38,uVar1);
  }
  else {
    pLVar2 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09be8);
    uVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar2);
    FUN_0446743c(this + 0x38,uVar1);
    this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09bb8;
  }
  this_00 = (SalesProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
  uVar1 = SalesProgressBar::GetCurrentLevel(this_00);
  FUN_04467444(this + 0x3c,uVar1);
  UIWidget::calculatePosition();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NextWaveButton::Draw(Sexy::Graphics*) */

void __thiscall NextWaveButton::Draw(NextWaveButton *this,Graphics *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Image *pIVar10;
  RenderEffectDefinition *pRVar12;
  RenderEffect *pRVar13;
  WaveManager *this_00;
  ulong uVar14;
  char *__s;
  string *extraout_x1;
  code *pcVar15;
  GraphicsAutoState aGStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  Insets aIStack_40 [16];
  string asStack_30 [16];
  string asStack_20 [24];
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *pCVar11;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_58,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  if (this[0x180] == (NextWaveButton)0x0) {
    iVar4 = UIWidget::getWidgetStateSerialization((UIWidget *)this);
    if (iVar4 == 4) {
      pCVar11 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09c88;
    }
    else {
      pCVar11 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09c60;
    }
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar11);
    Sexy::Graphics::DrawImage(param_1,pIVar10,0,0);
  }
  else {
    if (this[0x188] == (NextWaveButton)0x0) {
      pRVar12 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(param_1);
      CachedResourcePtr::operator_cast_to_RenderEffectDefinition_
                ((CachedResourcePtr *)&DAT_06b09b90);
      pRVar13 = (RenderEffect *)Sexy::Graphics3D::GetEffect(pRVar12);
      pcVar15 = *(code **)(*(long *)pRVar13 + 0x38);
      std::string::string(asStack_20,"Default");
      (*pcVar15)(pRVar13,asStack_20,1);
      std::string::~string(asStack_20);
      nop();
      Sexy::RenderEffectAutoState::RenderEffectAutoState
                ((RenderEffectAutoState *)asStack_20,param_1,pRVar13,1);
      while (bVar3 = Sexy::RenderEffectAutoState::operator_cast_to_bool
                               ((RenderEffectAutoState *)asStack_20), bVar3) {
        pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09be8);
        Sexy::Graphics::DrawImage(param_1,pIVar10,0,0);
        Sexy::RenderEffectAutoState::operator++((RenderEffectAutoState *)asStack_20);
      }
      Sexy::RenderEffectAutoState::~RenderEffectAutoState((RenderEffectAutoState *)asStack_20);
    }
    else {
      iVar4 = UIWidget::getWidgetStateSerialization((UIWidget *)this);
      if (iVar4 == 4) {
        pCVar11 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09bb8;
      }
      else {
        pCVar11 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09be8;
      }
      pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar11);
      Sexy::Graphics::DrawImage(param_1,pIVar10,0,0);
    }
    this_00 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
    if (this_00 != (WaveManager *)0x0) {
      iVar4 = WaveManager::GetWaveCount(this_00);
      iVar5 = FUN_0446744c(*(undefined4 *)(this_00 + 0x28));
      uVar1 = *(uint *)(this + 0x184);
      uVar14 = Reflection::RFunctionType::StaticGetTypeCategory();
      Sexy::StrFormat(L"%d/%d",auStack_50,(ulong)uVar1,uVar14 & 0xffffffff);
      iVar6 = FUN_04467528(0);
      iVar7 = FUN_04467528(0x25);
      iVar8 = FUN_04467438(*(undefined4 *)(this + 0x38));
      iVar9 = FUN_04467528(0x32);
      Sexy::Insets::Insets(aIStack_40,iVar6,iVar7,iVar8,iVar9);
      uVar2 = PrimeText_Game::Typeface_FZCuYuan_16;
      Sexy::Color::Color((Color *)asStack_20,0);
      WriteWordInRect(param_1,auStack_50,aIStack_40,uVar2,(DString *)asStack_20,5,1);
      DString::DString((DString *)asStack_20,iVar4 - (iVar5 + 1));
      __s = (char *)DString::c_str((DString *)asStack_20);
      std::string::string(asStack_30,__s);
      Sexy::UTF8StringToWString((Sexy *)asStack_30,extraout_x1);
      std::string::~string(asStack_30);
      nop();
      DString::~DString((DString *)asStack_20);
      iVar4 = FUN_04467528(0);
      iVar5 = FUN_04467528(0x3a);
      iVar6 = FUN_04467438(*(undefined4 *)(this + 0x38));
      iVar7 = FUN_04467528(0x32);
      Sexy::Insets::Insets((Insets *)asStack_30,iVar4,iVar5,iVar6,iVar7);
      uVar2 = PrimeText_Game::Typeface_FZCuYuan_16;
      Sexy::Color::Color((Color *)asStack_20,5);
      WriteWordInRect(param_1,auStack_48,asStack_30,uVar2,(DString *)asStack_20,5,1);
      FUN_05476c50(auStack_48);
      FUN_05476c50(auStack_50);
    }
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to NextWaveButton::Draw(Sexy::Graphics*) */

void __thiscall NextWaveButton::Draw(NextWaveButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

