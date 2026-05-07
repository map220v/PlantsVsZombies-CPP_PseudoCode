// Class: EASquaredButton


/* EASquaredButton::~EASquaredButton() */

void __thiscall EASquaredButton::~EASquaredButton(EASquaredButton *this)

{
  *(undefined ***)(this + 0x198) = &PTR__EASquaredButton_0697e4c0;
  *(undefined ***)this = &PTR_GetClass_0697e160;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_0697e4e8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to EASquaredButton::~EASquaredButton() */

void __thiscall EASquaredButton::~EASquaredButton(EASquaredButton *this)

{
  ~EASquaredButton(this + -0x198);
  return;
}


/* EASquaredButton::~EASquaredButton() */

void __thiscall EASquaredButton::~EASquaredButton(EASquaredButton *this)

{
  ~EASquaredButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EASquaredButton::~EASquaredButton() */

void __thiscall EASquaredButton::~EASquaredButton(EASquaredButton *this)

{
  ~EASquaredButton(this + -0x198);
  return;
}


/* EASquaredButton::onEASquaredAdFinished(EASquaredAdFinishedReason::EASquaredAdFinishedReason) */

void __thiscall EASquaredButton::onEASquaredAdFinished(EASquaredButton *this,undefined4 param_2)

{
  EASquaredRewardHelper::ShowCoinRewardsForAdCompletion(param_2,*(undefined4 *)(this + 0x308));
  return;
}


/* EASquaredButton::updateVisibility() */

void __thiscall EASquaredButton::updateVisibility(EASquaredButton *this)

{
  byte bVar1;
  EASquaredButton EVar2;
  undefined1 uVar3;
  long *plVar4;
  long lVar5;
  code *pcVar6;
  
  plVar4 = (long *)EASquared::Instance();
  lVar5 = EASquared::GetProperties();
  pcVar6 = *(code **)(*(long *)this + 0x158);
  uVar3 = 0;
  if (*(char *)(lVar5 + 0x21) != '\0') {
    uVar3 = (**(code **)(*plVar4 + 0x50))(plVar4);
  }
  (*pcVar6)(this,uVar3);
  pcVar6 = *(code **)(*(long *)this + 0x188);
  bVar1 = (**(code **)(*plVar4 + 0x58))(plVar4);
  (*pcVar6)(this,bVar1 ^ 1);
  EVar2 = (EASquaredButton)0x0;
  if (this[0x6c] != (EASquaredButton)0x0) {
    EVar2 = (EASquaredButton)((byte)this[0x6e] ^ 1);
  }
  this[0x30c] = EVar2;
  return;
}


/* EASquaredButton::shouldBeDesaturated(int) */

bool EASquaredButton::shouldBeDesaturated(int param_1)

{
  return param_1 == 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredButton::ButtonDepress(int) */

void EASquaredButton::ButtonDepress(int param_1)

{
  long *plVar1;
  code *pcVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)EASquared::Instance();
  pcVar2 = *(code **)(*plVar1 + 0x20);
  std::string::string(asStack_58,"EA2Store");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)(ulong)(uint)param_1,onEASquaredAdFinished);
  Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::
  Delegate1<EASquaredButton,void(EASquaredButton::*)(EASquaredAdFinishedReason::EASquaredAdFinishedReason)>
            (aDStack_38,aCStack_50);
  (*pcVar2)(plVar1,asStack_58,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to EASquaredButton::ButtonDepress(int) */

void __thiscall EASquaredButton::ButtonDepress(EASquaredButton *this,int param_1)

{
  ButtonDepress((int)this + -0x300);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredButton::sendMetricsReport() */

void __thiscall EASquaredButton::sendMetricsReport(EASquaredButton *this)

{
  undefined *this_00;
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  string asStack_10 [8];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  if (this[0x30c] == (EASquaredButton)0x0) {
    plVar3 = (long *)EASquared::Instance();
    uVar1 = (**(code **)(*plVar3 + 0x78))();
    plVar3 = (long *)EASquared::Instance();
    (**(code **)(*plVar3 + 0x70))(asStack_10);
    MessageRouter::Broadcast<std::string_const&,int,std::string_const&,char_const*,int,std::string>
              ((MessageRouter *)this_00,Message::EASquaredButtonTracking,"EASQStore",uVar1,
               asStack_10);
    std::string::~string(asStack_10);
  }
  else {
    plVar3 = (long *)EASquared::Instance();
    iVar2 = (**(code **)(*plVar3 + 0x78))();
    MessageRouter::Broadcast<std::string_const&,int,std::string_const&,char_const*,int,char_const*>
              ((MessageRouter *)this_00,Message::EASquaredButtonTracking,"EASQStore",iVar2,
               "ButtonShowing");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredButton::EASquaredButton(int) */

void __thiscall EASquaredButton::EASquaredButton(EASquaredButton *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  Toggles *this_02;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  wstring awStack_b0 [8];
  Delegate0 aDStack_a8 [48];
  string asStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_78,"[EA_SQUARED_BUTTON_LABEL]");
  Sexy::ToWString(asStack_78);
  Sexy::Color::Color((Color *)asStack_40,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,0,(ButtonListener *)(this + 0x300),awStack_b0,(Color *)asStack_40)
  ;
  FUN_05476c50(awStack_b0);
  std::string::~string(asStack_78);
  nop();
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x300));
  *(int *)(this + 0x308) = param_1;
  *(undefined ***)this = &PTR_GetClass_0697e160;
  *(undefined ***)(this + 0x198) = &PTR__EASquaredButton_0697e4c0;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_0697e4e8;
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c968);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c968);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
  PVZ2UIButton::Resize((PVZ2UIButton *)this,0x3c,0,iVar2,iVar3);
  PVZ2UIButton::SetTextJustification((PVZ2UIButton *)this,0);
  this_02 = (Toggles *)Toggles::GetInstance();
  std::string::string(asStack_40,"EA2GrantsBoostedCoins");
  cVar1 = Toggles::IsEnabled(this_02,asStack_40);
  std::string::~string(asStack_40);
  nop();
  if (cVar1 == '\0') {
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b8c968,1);
    puVar5 = &DAT_06b8ca00;
  }
  else {
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b8ca60,1);
    puVar5 = &DAT_06b8ca88;
  }
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,puVar5,1);
  PVZ2UIButton::SetDialogStates
            ((PVZ2UIButton *)this,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)asStack_40);
  iVar4 = (int)((float)iVar2 * 0.35);
  iVar6 = (int)((float)iVar3 * 0.12);
  Sexy::Insets::Insets
            ((Insets *)asStack_40,iVar4,iVar6,(int)((float)iVar2 * 0.9 - (float)iVar4),
             (int)((float)iVar3 * 0.88 - (float)iVar6));
  PVZ2UIButton::SetContentsRect((PVZ2UIButton *)this,(TRect *)asStack_40);
  this[0x30c] = (EASquaredButton)0x0;
  updateVisibility(this);
  sendMetricsReport(this);
  puVar5 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,updateState);
  Sexy::Delegate0::Delegate0<EASquaredButton,void(EASquaredButton::*)()>(aDStack_a8,asStack_40);
  MessageRouter::Subscribe((MessageRouter *)puVar5,Message::EASquaredEnabledChanged,aDStack_a8);
  puVar5 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,updateState);
  Sexy::Delegate0::Delegate0<EASquaredButton,void(EASquaredButton::*)()>(aDStack_a8,asStack_40);
  MessageRouter::Subscribe((MessageRouter *)puVar5,Message::EASquaredAdsAvailableChanged,aDStack_a8)
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EASquaredButton::updateState() */

void __thiscall EASquaredButton::updateState(EASquaredButton *this)

{
  EASquaredButton EVar1;
  
  EVar1 = this[0x30c];
  updateVisibility(this);
  if (this[0x30c] != EVar1) {
    sendMetricsReport(this);
    return;
  }
  return;
}

