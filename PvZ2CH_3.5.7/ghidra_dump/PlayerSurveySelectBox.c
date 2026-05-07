// Class: PlayerSurveySelectBox


/* PlayerSurveySelectBox::onNotifySelectBoxSelected(int) */

void __thiscall
PlayerSurveySelectBox::onNotifySelectBoxSelected(PlayerSurveySelectBox *this,int param_1)

{
  if ((*(int *)(this + 0xe0) != param_1) && (this[0xe4] != (PlayerSurveySelectBox)0x0)) {
    this[0xe4] = (PlayerSurveySelectBox)0x0;
  }
  return;
}


/* PlayerSurveySelectBox::ButtonPress(int) */

int PlayerSurveySelectBox::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to PlayerSurveySelectBox::ButtonPress(int) */

void __thiscall PlayerSurveySelectBox::ButtonPress(PlayerSurveySelectBox *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* PlayerSurveySelectBox::~PlayerSurveySelectBox() */

void __thiscall PlayerSurveySelectBox::~PlayerSurveySelectBox(PlayerSurveySelectBox *this)

{
  *(undefined ***)this = &PTR_GetClass_066eaef0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066eb220;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0xf0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlayerSurveySelectBox::~PlayerSurveySelectBox() */

void __thiscall PlayerSurveySelectBox::~PlayerSurveySelectBox(PlayerSurveySelectBox *this)

{
  ~PlayerSurveySelectBox(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlayerSurveySelectBox::InitView(std::wstring) */

void __thiscall PlayerSurveySelectBox::InitView(PlayerSurveySelectBox *this,undefined8 param_2)

{
  PVZ2UIButton *this_00;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Insets::Insets(aIStack_18,0x66,0x37,0,0xff);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,*(int *)(this + 0xe0),(ButtonListener *)(this + 0xd8),awStack_20,
             (Color *)aIStack_18);
  *(PVZ2UIButton **)(this + 0xe8) = this_00;
  FUN_05476c50(awStack_20);
  nop();
  (**(code **)(**(long **)(this + 0xe8) + 0x198))
            (*(long **)(this + 0xe8),0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  thunk_FUN_05477b9c(this + 0xf0,param_2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  this[0x59] = (PlayerSurveySelectBox)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlayerSurveySelectBox::PlayerSurveySelectBox() */

void __thiscall PlayerSurveySelectBox::PlayerSurveySelectBox(PlayerSurveySelectBox *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066eaef0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066eb220;
  FUN_05476574(this + 0xf0);
  this[0xe4] = (PlayerSurveySelectBox)0x0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  FUN_054772c4(this + 0xf0,&DAT_056f11a8);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifySelectBoxSelected);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<PlayerSurveySelectBox,void(PlayerSurveySelectBox::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifySelectBoxSelected,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlayerSurveySelectBox::Draw(Sexy::Graphics*) */

void __thiscall PlayerSurveySelectBox::Draw(PlayerSurveySelectBox *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  Image *pIVar6;
  Insets aIStack_38 [8];
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_38,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  if (this[0xe4] == (PlayerSurveySelectBox)0x0) {
    Sexy::Insets::Insets(aIStack_18,aIStack_38);
    uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac0660);
    Draw9SliceImage(param_1,aIStack_18,uVar5);
  }
  else {
    Sexy::Insets::Insets(aIStack_18,aIStack_38);
    uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac0630);
    Draw9SliceImage(param_1,aIStack_18,uVar5);
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac0520);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac0520);
    iVar2 = SalesProgressBar::GetCurrentLevel(this_01);
    iVar3 = FUN_039bef7c(10);
    iVar4 = FUN_039bef7c(5);
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac0520);
    Sexy::Graphics::DrawImage
              (param_1,pIVar6,(local_30 - (int)(float)iVar1) + iVar3,
               (local_2c - (int)(float)iVar2) + iVar4,(int)(float)iVar1,(int)(float)iVar2);
  }
  iVar1 = FUN_039bef7c(2);
  iVar2 = FUN_039bef7c(4);
  Sexy::Insets::Insets(aIStack_18,iVar1,0,*(int *)(this + 0x50) - iVar2,*(int *)(this + 0x54));
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
  Sexy::Insets::Insets(aIStack_28,0x66,0x37,0,0xff);
  WriteWordInRect(param_1,this + 0xf0,aIStack_18,uVar5,aIStack_28,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlayerSurveySelectBox::ButtonDepress(int) */

void PlayerSurveySelectBox::ButtonDepress(int param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)(uint)param_1;
  if (*(char *)(uVar1 + 0xe4) != '\0') {
    return;
  }
  *(undefined1 *)(uVar1 + 0xe4) = 1;
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::NotifySelectBoxSelected,*(int *)(uVar1 + 0xe0)
            );
  return;
}


/* non-virtual thunk to PlayerSurveySelectBox::ButtonDepress(int) */

void __thiscall PlayerSurveySelectBox::ButtonDepress(PlayerSurveySelectBox *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}

